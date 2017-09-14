
// =================================================================================================
// This file is part of the CLBlast project. The project is licensed under Apache Version 2.0. It
// is auto-generated by the 'scripts/database/database.py' Python script.
//
// This file populates the database with best-found tuning parameters for the 'Transpose3232' kernels.
//
// =================================================================================================

namespace clblast {
namespace database {

const DatabaseEntry TransposeComplexSingle = {
  "Transpose", Precision::kComplexSingle, {"TRA_DIM", "TRA_PAD", "TRA_SHUFFLE", "TRA_WPT"}, {
    { // AMD GPUs
      kDeviceTypeGPU, "AMD", {
        { "Ellesmere", {
          { "AMD Radeon RX 480",                               { 4, 0, 1, 4 } },
          { "default",                                         { 4, 0, 1, 4 } },
        } },
        { "Fiji", {
          { "AMD Radeon R9 Fury X",                            { 8, 1, 1, 2 } },
          { "AMD Radeon R9 M370X Compute Engine",              { 4, 1, 1, 4 } },
          { "default",                                         { 8, 1, 1, 2 } },
        } },
        { "Hawaii", {
          { "AMD Radeon R9 290X",                              { 16, 0, 1, 1 } },
          { "default",                                         { 16, 0, 1, 1 } },
        } },
        { "Oland", {
          { "Oland",                                           { 4, 0, 1, 2 } },
          { "default",                                         { 4, 0, 1, 2 } },
        } },
        { "Pitcairn", {
          { "AMD Radeon R9 270X",                              { 8, 0, 1, 1 } },
          { "default",                                         { 8, 0, 1, 1 } },
        } },
        { "Tahiti", {
          { "AMD Radeon HD 7970",                              { 16, 0, 1, 1 } },
          { "default",                                         { 16, 0, 1, 1 } },
        } },
        { "Tonga", {
          { "AMD Radeon R9 380",                               { 16, 0, 1, 1 } },
          { "default",                                         { 16, 0, 1, 1 } },
        } },
        { "Turks", {
          { "AMD Radeon HD 6770M",                             { 8, 1, 1, 4 } },
          { "default",                                         { 8, 1, 1, 4 } },
        } },
        { "Vancouver", {
          { "ATI Radeon HD 6750M",                             { 16, 1, 1, 1 } },
          { "default",                                         { 16, 1, 1, 1 } },
        } },
        { "default", {
          { "default",                                         { 8, 0, 1, 1 } },
        } },
      }
    },
    { // ARM GPUs
      kDeviceTypeGPU, "ARM", {
        { "default", {
          { "Mali-T628",                                       { 16, 0, 0, 2 } },
          { "default",                                         { 16, 0, 0, 2 } },
        } },
      }
    },
    { // Intel CPUs
      kDeviceTypeCPU, "Intel", {
        { "default", {
          { "Intel(R) Core(TM) i7-2670QM CPU @ 2.20GHz",       { 4, 0, 1, 8 } },
          { "Intel(R) Core(TM) i5-6200U CPU @ 2.30GHz",        { 8, 0, 0, 2 } },
          { "Intel(R) Core(TM) i7 CPU         920  @ 2.67GHz", { 4, 0, 0, 4 } },
          { "Intel(R) Core(TM) i7-3770 CPU @ 3.40GHz",         { 4, 1, 0, 8 } },
          { "Intel(R) Core(TM) i7-4790K CPU @ 4.00GHz",        { 4, 1, 0, 8 } },
          { "Intel(R) Core(TM) i7-5930K CPU @ 3.50GHz",        { 16, 0, 0, 4 } },
          { "default",                                         { 4, 1, 0, 8 } },
        } },
      }
    },
    { // Intel GPUs
      kDeviceTypeGPU, "Intel", {
        { "default", {
          { "Intel(R) HD Graphics 530",                        { 16, 1, 1, 2 } },
          { "Intel(R) HD Graphics 5500 BroadWell U-Processor GT2", { 8, 0, 0, 2 } },
          { "Intel(R) HD Graphics Haswell Ultrabook GT2 Mobile", { 8, 0, 0, 2 } },
          { "Intel(R) HD Graphics IvyBridge M GT2",            { 16, 1, 1, 2 } },
          { "Intel(R) HD Graphics Skylake ULT GT2",            { 16, 1, 0, 2 } },
          { "Iris",                                            { 8, 0, 0, 2 } },
          { "Iris Pro",                                        { 16, 1, 0, 2 } },
          { "default",                                         { 16, 1, 0, 2 } },
        } },
      }
    },
    { // NVIDIA GPUs
      kDeviceTypeGPU, "NVIDIA", {
        { "SM2.0", {
          { "GeForce GTX 480",                                 { 16, 1, 0, 1 } },
          { "default",                                         { 16, 1, 0, 1 } },
        } },
        { "SM3.0", {
          { "GRID K520",                                       { 16, 1, 1, 1 } },
          { "GeForce GTX 670",                                 { 16, 1, 1, 1 } },
          { "GeForce GTX 680",                                 { 16, 1, 1, 1 } },
          { "default",                                         { 16, 1, 1, 1 } },
        } },
        { "SM3.5", {
          { "GeForce GTX TITAN",                               { 16, 0, 0, 1 } },
          { "GeForce GTX TITAN Black",                         { 16, 1, 0, 1 } },
          { "Tesla K20m",                                      { 16, 0, 0, 1 } },
          { "Tesla K40m",                                      { 16, 1, 0, 1 } },
          { "default",                                         { 16, 1, 0, 1 } },
        } },
        { "SM5.0", {
          { "GeForce GTX 750",                                 { 16, 1, 0, 1 } },
          { "GeForce GTX 750 Ti",                              { 16, 1, 0, 1 } },
          { "default",                                         { 16, 1, 0, 1 } },
        } },
        { "SM5.2", {
          { "GeForce GTX 980",                                 { 16, 1, 0, 1 } },
          { "GeForce GTX TITAN X",                             { 32, 1, 0, 1 } },
          { "default",                                         { 32, 1, 0, 1 } },
        } },
        { "SM6.1", {
          { "GeForce GTX 1070",                                { 16, 1, 1, 1 } },
          { "GeForce GTX 1080",                                { 16, 1, 0, 1 } },
          { "TITAN X (Pascal)",                                { 8, 1, 0, 2 } },
          { "default",                                         { 16, 1, 0, 1 } },
        } },
        { "default", {
          { "default",                                         { 16, 1, 0, 1 } },
        } },
      }
    },
    { // QUALCOMM GPUs
      kDeviceTypeGPU, "QUALCOMM", {
        { "default", {
          { "QUALCOMM Adreno(TM)",                             { 16, 1, 0, 1 } },
          { "default",                                         { 16, 1, 0, 1 } },
        } },
      }
    },
    { // Default
      kDeviceTypeAll, "default", {
        { "default", {
          { "default",                                         { 8, 1, 1, 2 } },
        } },
      }
    },
  }
};

} // namespace database
} // namespace clblast
