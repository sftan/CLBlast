
// =================================================================================================
// This file is part of the CLBlast project. The project is licensed under Apache Version 2.0. It
// is auto-generated by the 'scripts/database/database.py' Python script.
//
// This file populates the database with best-found tuning parameters for the 'Xgemv_Fast16' kernels.
//
// =================================================================================================

namespace clblast {
namespace database {

const DatabaseEntry XgemvFastHalf = {
  "XgemvFast", Precision::kHalf, {"VW2", "WGS2", "WPT2"}, {
    { // AMD GPUs
      kDeviceTypeGPU, "AMD", {
        { "Ellesmere", {
          { "AMD Radeon RX 480",                               { 1, 32, 1 } },
          { "default",                                         { 1, 32, 1 } },
        } },
        { "default", {
          { "default",                                         { 1, 32, 1 } },
        } },
      }
    },
    { // Intel GPUs
      kDeviceTypeGPU, "Intel", {
        { "default", {
          { "Intel(R) HD Graphics 5500 BroadWell U-Processor GT2", { 1, 16, 1 } },
          { "Intel(R) HD Graphics Skylake ULT GT2",            { 4, 64, 4 } },
          { "default",                                         { 1, 16, 1 } },
        } },
      }
    },
    { // Default
      kDeviceTypeAll, "default", {
        { "default", {
          { "default",                                         { 1, 16, 1 } },
        } },
      }
    },
  }
};

} // namespace database
} // namespace clblast
