
// =================================================================================================
// This file is part of the CLBlast project. The project is licensed under Apache Version 2.0. This
// project loosely follows the Google C++ styleguide and uses a tab-size of two spaces and a max-
// width of 100 characters per line.
//
// Author(s):
//   Cedric Nugteren <www.cedricnugteren.nl>
//
// This file implements the Database class (see the header for information about the class).
//
// =================================================================================================

#include <list>

#include "utilities/utilities.hpp"

#include "database/database.hpp"

#include "database/kernels/xaxpy/xaxpy.hpp"
#include "database/kernels/xdot/xdot.hpp"
#include "database/kernels/xgemv/xgemv.hpp"
#include "database/kernels/xgemv_fast/xgemv_fast.hpp"
#include "database/kernels/xgemv_fast_rot/xgemv_fast_rot.hpp"
#include "database/kernels/xger/xger.hpp"
#include "database/kernels/xgemm/xgemm.hpp"
#include "database/kernels/xgemm_direct/xgemm_direct.hpp"
#include "database/kernels/copy/copy.hpp"
#include "database/kernels/pad/pad.hpp"
#include "database/kernels/transpose/transpose.hpp"
#include "database/kernels/padtranspose/padtranspose.hpp"

#include "database/kernels/xtrsv.hpp"
#include "database/kernels/invert.hpp"
#include "database/apple_cpu_fallback.hpp"
#include "database/kernel_selection.hpp"

namespace clblast {
// =================================================================================================

namespace database {
extern const DatabaseEntry CopyHalf;
}

// Initializes the databases
const std::vector<database::DatabaseEntry> Database::database = std::vector<database::DatabaseEntry>{
  database::XaxpyHalf, database::XaxpySingle, database::XaxpyDouble, database::XaxpyComplexSingle, database::XaxpyComplexDouble,
  database::XdotHalf, database::XdotSingle, database::XdotDouble, database::XdotComplexSingle, database::XdotComplexDouble,
  database::XgemvHalf, database::XgemvSingle, database::XgemvDouble, database::XgemvComplexSingle, database::XgemvComplexDouble,
  database::XgemvFastHalf, database::XgemvFastSingle, database::XgemvFastDouble, database::XgemvFastComplexSingle, database::XgemvFastComplexDouble,
  database::XgemvFastRotHalf, database::XgemvFastRotSingle, database::XgemvFastRotDouble, database::XgemvFastRotComplexSingle, database::XgemvFastRotComplexDouble,
  database::XgerHalf, database::XgerSingle, database::XgerDouble, database::XgerComplexSingle, database::XgerComplexDouble,
  database::XtrsvHalf, database::XtrsvSingle, database::XtrsvDouble, database::XtrsvComplexSingle, database::XtrsvComplexDouble,
  database::XgemmHalf, database::XgemmSingle, database::XgemmDouble, database::XgemmComplexSingle, database::XgemmComplexDouble,
  database::XgemmDirectHalf, database::XgemmDirectSingle, database::XgemmDirectDouble, database::XgemmDirectComplexSingle, database::XgemmDirectComplexDouble,
  database::CopyHalf, database::CopySingle, database::CopyDouble, database::CopyComplexSingle, database::CopyComplexDouble,
  database::PadHalf, database::PadSingle, database::PadDouble, database::PadComplexSingle, database::PadComplexDouble,
  database::TransposeHalf, database::TransposeSingle, database::TransposeDouble, database::TransposeComplexSingle, database::TransposeComplexDouble,
  database::PadtransposeHalf, database::PadtransposeSingle, database::PadtransposeDouble, database::PadtransposeComplexSingle, database::PadtransposeComplexDouble,
  database::InvertHalf, database::InvertSingle, database::InvertDouble, database::InvertComplexSingle, database::InvertComplexDouble,
  database::KernelSelectionHalf, database::KernelSelectionSingle, database::KernelSelectionDouble, database::KernelSelectionComplexSingle, database::KernelSelectionComplexDouble
};
const std::vector<database::DatabaseEntry> Database::apple_cpu_fallback = std::vector<database::DatabaseEntry>{
  database::XaxpyApple, database::XdotApple,
  database::XgemvApple, database::XgemvFastApple, database::XgemvFastRotApple, database::XgerApple, database::XtrsvApple,
  database::XgemmApple, database::XgemmDirectApple,
  database::CopyApple, database::PadApple, database::TransposeApple, database::PadtransposeApple,
  database::InvertApple
};

// The default values
const std::string Database::kDeviceVendorAll = "default";

// =================================================================================================

// Constructor, computing device properties and populating the parameter-vector from the database.
// This takes an optional overlay database in case of custom tuning or custom kernels.
Database::Database(const Device &device, const std::string &kernel_name,
                   const Precision precision, const std::vector<database::DatabaseEntry> &overlay):
  parameters_(std::make_shared<database::Parameters>()) {

  // Finds device information
  const auto device_type = GetDeviceType(device);
  const auto device_vendor = GetDeviceVendor(device);
  const auto device_architecture = GetDeviceArchitecture(device);
  const auto device_name = GetDeviceName(device);

  // Prints the obtained information in verbose mode
  #ifdef VERBOSE
    printf("[DEBUG] Device type '%s'; vendor '%s'\n", device_type.c_str(), device_vendor.c_str());
    printf("[DEBUG] Device name '%s'; architecture '%s'\n", device_name.c_str(), device_architecture.c_str());
  #endif

  // Sets the databases to search through
  const auto databases = std::list<std::vector<database::DatabaseEntry>>{overlay, database};

  // Special case: modifies the database if the device is a CPU with Apple OpenCL
  #if defined(__APPLE__) || defined(__MACOSX)
    if (device.Type() == "CPU") {
      const auto extensions = device.Capabilities();
      const auto is_apple = (extensions.find("cl_APPLE_SetMemObjectDestructor") == std::string::npos) ? false : true;
      if (is_apple) {
        databases.push_front(apple_cpu_fallback);
      }
    }
  #endif

  // Searches potentially multiple databases
  auto search_result = database::Parameters();
  for (auto &db: databases) {
    search_result = Search(kernel_name, device_vendor, device_type,
                           device_name, device_architecture, precision, db);
    if (search_result.size() != 0) {
      parameters_->insert(search_result.begin(), search_result.end());
      break;
    }
  }

  if (search_result.size() == 0) { throw RuntimeErrorCode(StatusCode::kDatabaseError); }
}

// =================================================================================================

// Returns a list of OpenCL pre-processor defines in string form
std::string Database::GetDefines() const {
  std::string defines{};
  for (auto &parameter: *parameters_) {
    defines += "#define "+parameter.first+" "+ToString(parameter.second)+"\n";
  }
  return defines;
}

// Retrieves the names of all the parameters
std::vector<std::string> Database::GetParameterNames() const {
  auto parameter_names = std::vector<std::string>();
  for (auto &parameter: *parameters_) {
    parameter_names.push_back(parameter.first);
  }
  return parameter_names;
}

// =================================================================================================

// Searches a particular database for the right kernel and precision
database::Parameters Database::Search(const std::string &this_kernel,
                                      const std::string &this_vendor, const std::string &this_type,
                                      const std::string &this_device, const std::string &this_architecture,
                                      const Precision this_precision,
                                      const std::vector<database::DatabaseEntry> &this_database) const {

  // Selects the right kernel
  for (auto &db: this_database) {
    if ((db.kernel == this_kernel) &&
        (db.precision == this_precision || db.precision == Precision::kAny)) {

      // Searches for the right vendor and device type, or selects the default if unavailable
      const auto parameters = SearchVendorAndType(this_vendor, this_type, this_device, this_architecture,
                                                  db.vendors, db.parameter_names);
      if (parameters.size() != 0) { return parameters; }
      return SearchVendorAndType(kDeviceVendorAll, database::kDeviceTypeAll, this_device, this_architecture,
                                 db.vendors, db.parameter_names);
    }
  }

  // If we reached this point, the entry was not found in this database
  return database::Parameters();
}

database::Parameters Database::SearchVendorAndType(const std::string &target_vendor, const std::string &target_type,
                                                   const std::string &this_device, const std::string &this_architecture,
                                                   const std::vector<database::DatabaseVendor> &vendors,
                                                   const std::vector<std::string> &parameter_names) const {
  for (auto &vendor: vendors) {
    if ((vendor.name == target_vendor) && (vendor.type == target_type)) {

      // Searches the device; if unavailable, searches the architecture; if unavailable returns the
      // vendor's default parameters
      auto parameters = SearchDevice(this_device, vendor.devices, parameter_names);
      if (parameters.size() != 0) { return parameters; }
      parameters = SearchDevice(this_architecture, vendor.devices, parameter_names);
      if (parameters.size() != 0) { return parameters; }
      return SearchDevice("default", vendor.devices, parameter_names);
    }
  }
  return database::Parameters();
}

database::Parameters Database::SearchDevice(const std::string &target_device,
                                            const std::vector<database::DatabaseDevice> &devices,
                                            const std::vector<std::string> &parameter_names) const {
  for (auto &device: devices) {
    if (device.name == target_device) {

      // Sets the parameters accordingly
      auto parameters = database::Parameters();
      if (parameter_names.size() != device.parameters.size()) { return database::Parameters(); } // ERROR
      for (auto i = size_t{0}; i < parameter_names.size(); ++i) {
        parameters[parameter_names[i]] = device.parameters[i];
      }
      return parameters;
    }
  }
  return database::Parameters();
}

// =================================================================================================
} // namespace clblast
