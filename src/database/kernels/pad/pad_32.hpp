
// =================================================================================================
// This file is part of the CLBlast project. The project is licensed under Apache Version 2.0. It
// is auto-generated by the 'scripts/database/database.py' Python script.
//
// This file populates the database with best-found tuning parameters for the 'Pad32' kernels.
//
// =================================================================================================

namespace clblast {
namespace database {

const DatabaseEntry PadSingle = {
  "Pad", Precision::kSingle, {"PAD_DIMX", "PAD_DIMY", "PAD_WPTX", "PAD_WPTY"}, {
    { // AMD GPUs
      kDeviceTypeGPU, "AMD", {
        { "Ellesmere", {
          { "AMD Radeon RX 480",                               { 32, 8, 2, 2 } },
          { "default",                                         { 32, 8, 2, 2 } },
        } },
        { "Fiji", {
          { "AMD Radeon R9 Fury X",                            { 16, 16, 1, 2 } },
          { "AMD Radeon R9 M370X Compute Engine",              { 32, 8, 1, 1 } },
          { "default",                                         { 32, 8, 1, 2 } },
        } },
        { "Hawaii", {
          { "AMD Radeon R9 290X",                              { 32, 8, 1, 4 } },
          { "default",                                         { 32, 8, 1, 4 } },
        } },
        { "Oland", {
          { "Oland",                                           { 8, 8, 1, 2 } },
          { "default",                                         { 8, 8, 1, 2 } },
        } },
        { "Pitcairn", {
          { "AMD Radeon R9 270X",                              { 32, 8, 1, 2 } },
          { "default",                                         { 32, 8, 1, 2 } },
        } },
        { "Tahiti", {
          { "AMD Radeon HD 7970",                              { 32, 8, 1, 2 } },
          { "default",                                         { 32, 8, 1, 2 } },
        } },
        { "Tonga", {
          { "AMD Radeon R9 380",                               { 16, 16, 2, 2 } },
          { "default",                                         { 16, 16, 2, 2 } },
        } },
        { "Turks", {
          { "AMD Radeon HD 6770M",                             { 32, 8, 2, 1 } },
          { "default",                                         { 32, 8, 2, 1 } },
        } },
        { "Vancouver", {
          { "ATI Radeon HD 6750M",                             { 8, 16, 2, 1 } },
          { "default",                                         { 8, 16, 2, 1 } },
        } },
        { "default", {
          { "default",                                         { 8, 16, 1, 2 } },
        } },
      }
    },
    { // ARM GPUs
      kDeviceTypeGPU, "ARM", {
        { "default", {
          { "Mali-T628",                                       { 32, 8, 1, 4 } },
          { "default",                                         { 32, 8, 1, 4 } },
        } },
      }
    },
    { // Intel CPUs
      kDeviceTypeCPU, "Intel", {
        { "default", {
          { "Intel(R) Core(TM) i7-2670QM CPU @ 2.20GHz",       { 32, 32, 4, 4 } },
          { "Intel(R) Core(TM) i5-6200U CPU @ 2.30GHz",        { 32, 16, 4, 1 } },
          { "Intel(R) Core(TM) i7 CPU         920  @ 2.67GHz", { 32, 8, 2, 4 } },
          { "Intel(R) Core(TM) i7-3770 CPU @ 3.40GHz",         { 16, 32, 4, 4 } },
          { "Intel(R) Core(TM) i7-4790K CPU @ 4.00GHz",        { 32, 16, 4, 4 } },
          { "Intel(R) Core(TM) i7-5930K CPU @ 3.50GHz",        { 32, 8, 4, 1 } },
          { "default",                                         { 32, 8, 4, 2 } },
        } },
      }
    },
    { // Intel GPUs
      kDeviceTypeGPU, "Intel", {
        { "default", {
          { "Intel(R) HD Graphics 530",                        { 32, 8, 2, 4 } },
          { "Intel(R) HD Graphics 5500 BroadWell U-Processor GT2", { 32, 8, 2, 4 } },
          { "Intel(R) HD Graphics Haswell Ultrabook GT2 Mobile", { 16, 8, 1, 2 } },
          { "Intel(R) HD Graphics IvyBridge M GT2",            { 16, 8, 4, 1 } },
          { "Intel(R) HD Graphics Skylake ULT GT2",            { 32, 8, 4, 2 } },
          { "Iris",                                            { 32, 16, 2, 1 } },
          { "Iris Pro",                                        { 16, 8, 2, 1 } },
          { "default",                                         { 32, 8, 4, 2 } },
        } },
      }
    },
    { // Intel accelerators
      kDeviceTypeAccelerator, "Intel", {
        { "default", {
          { "Intel(R) Many Integrated Core Acceleration Card", { 32, 16, 2, 1 } },
          { "default",                                         { 32, 16, 2, 1 } },
        } },
      }
    },
    { // NVIDIA GPUs
      kDeviceTypeGPU, "NVIDIA", {
        { "SM2.0", {
          { "GeForce GTX 480",                                 { 32, 8, 1, 4 } },
          { "default",                                         { 32, 8, 1, 4 } },
        } },
        { "SM3.0", {
          { "GRID K520",                                       { 32, 8, 2, 1 } },
          { "GeForce GT 650M",                                 { 32, 16, 2, 2 } },
          { "GeForce GTX 670",                                 { 32, 8, 2, 2 } },
          { "GeForce GTX 680",                                 { 16, 8, 4, 1 } },
          { "default",                                         { 32, 8, 2, 4 } },
        } },
        { "SM3.5", {
          { "GeForce GTX TITAN",                               { 32, 8, 2, 1 } },
          { "GeForce GTX TITAN Black",                         { 32, 8, 1, 2 } },
          { "Tesla K20m",                                      { 32, 8, 2, 1 } },
          { "Tesla K40m",                                      { 32, 8, 1, 1 } },
          { "default",                                         { 32, 8, 1, 2 } },
        } },
        { "SM5.0", {
          { "GeForce GTX 750",                                 { 32, 16, 4, 2 } },
          { "GeForce GTX 750 Ti",                              { 16, 8, 4, 1 } },
          { "default",                                         { 32, 8, 4, 1 } },
        } },
        { "SM5.2", {
          { "GeForce GTX 980",                                 { 16, 8, 1, 1 } },
          { "GeForce GTX TITAN X",                             { 16, 16, 1, 1 } },
          { "default",                                         { 16, 8, 1, 1 } },
        } },
        { "SM6.1", {
          { "GeForce GTX 1070",                                { 16, 8, 1, 1 } },
          { "GeForce GTX 1080",                                { 16, 8, 1, 1 } },
          { "TITAN X (Pascal)",                                { 16, 8, 1, 2 } },
          { "default",                                         { 16, 32, 1, 2 } },
        } },
        { "default", {
          { "default",                                         { 32, 8, 4, 1 } },
        } },
      }
    },
    { // QUALCOMM GPUs
      kDeviceTypeGPU, "QUALCOMM", {
        { "default", {
          { "QUALCOMM Adreno(TM)",                             { 32, 8, 2, 1 } },
          { "default",                                         { 32, 8, 2, 1 } },
        } },
      }
    },
    { // Default
      kDeviceTypeAll, "default", {
        { "default", {
          { "default",                                         { 32, 8, 2, 1 } },
        } },
      }
    },
  }
};

} // namespace database
} // namespace clblast
