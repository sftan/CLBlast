
// =================================================================================================
// This file is part of the CLBlast project. The project is licensed under Apache Version 2.0. It
// is auto-generated by the 'scripts/database/database.py' Python script.
//
// This file populates the database with best-found tuning parameters for the 'Xaxpy3232' kernels.
//
// =================================================================================================

namespace clblast {
namespace database {

const DatabaseEntry XaxpyComplexSingle = {
  "Xaxpy", Precision::kComplexSingle, {"VW", "WGS", "WPT"}, {
    { // AMD GPUs
      kDeviceTypeGPU, "AMD", {
        { "Ellesmere", {
          { "AMD Radeon RX 480",                               { 2, 256, 1 } },
          { "default",                                         { 2, 256, 1 } },
        } },
        { "Fiji", {
          { "AMD Radeon R9 Fury X",                            { 1, 128, 2 } },
          { "AMD Radeon R9 M370X Compute Engine",              { 2, 64, 8 } },
          { "default",                                         { 2, 64, 8 } },
        } },
        { "Hawaii", {
          { "AMD Radeon R9 290X",                              { 1, 128, 2 } },
          { "default",                                         { 1, 128, 2 } },
        } },
        { "Oland", {
          { "Oland",                                           { 1, 128, 1 } },
          { "default",                                         { 1, 128, 1 } },
        } },
        { "Pitcairn", {
          { "AMD Radeon R9 270X",                              { 1, 64, 1 } },
          { "default",                                         { 1, 64, 1 } },
        } },
        { "Tahiti", {
          { "AMD Radeon HD 7970",                              { 1, 64, 1 } },
          { "default",                                         { 1, 64, 1 } },
        } },
        { "Tonga", {
          { "AMD Radeon R9 380",                               { 1, 256, 8 } },
          { "default",                                         { 1, 256, 8 } },
        } },
        { "Turks", {
          { "AMD Radeon HD 6770M",                             { 2, 256, 1 } },
          { "default",                                         { 2, 256, 1 } },
        } },
        { "Vancouver", {
          { "ATI Radeon HD 6750M",                             { 1, 64, 1 } },
          { "default",                                         { 1, 64, 1 } },
        } },
        { "default", {
          { "default",                                         { 1, 128, 1 } },
        } },
      }
    },
    { // ARM GPUs
      kDeviceTypeGPU, "ARM", {
        { "default", {
          { "Mali-T628",                                       { 1, 256, 1 } },
          { "default",                                         { 1, 256, 1 } },
        } },
      }
    },
    { // Intel CPUs
      kDeviceTypeCPU, "Intel", {
        { "default", {
          { "Intel(R) Core(TM) i7-2670QM CPU @ 2.20GHz",       { 4, 1024, 1 } },
          { "Intel(R) Core(TM) i5-6200U CPU @ 2.30GHz",        { 4, 256, 1 } },
          { "Intel(R) Core(TM) i7 CPU         920  @ 2.67GHz", { 4, 1024, 1 } },
          { "Intel(R) Core(TM) i7-3770 CPU @ 3.40GHz",         { 1, 1024, 2 } },
          { "Intel(R) Core(TM) i7-4790K CPU @ 4.00GHz",        { 4, 1024, 1 } },
          { "Intel(R) Core(TM) i7-5930K CPU @ 3.50GHz",        { 2, 1024, 1 } },
          { "default",                                         { 8, 1024, 1 } },
        } },
      }
    },
    { // Intel GPUs
      kDeviceTypeGPU, "Intel", {
        { "default", {
          { "Intel(R) HD Graphics 530",                        { 4, 64, 2 } },
          { "Intel(R) HD Graphics 5500 BroadWell U-Processor GT2", { 1, 64, 1 } },
          { "Intel(R) HD Graphics Haswell Ultrabook GT2 Mobile", { 1, 64, 1 } },
          { "Intel(R) HD Graphics IvyBridge M GT2",            { 1, 64, 1 } },
          { "Intel(R) HD Graphics Skylake ULT GT2",            { 4, 64, 1 } },
          { "Iris",                                            { 2, 128, 1 } },
          { "Iris Pro",                                        { 1, 256, 8 } },
          { "default",                                         { 4, 64, 1 } },
        } },
      }
    },
    { // Intel accelerators
      kDeviceTypeAccelerator, "Intel", {
        { "default", {
          { "Intel(R) Many Integrated Core Acceleration Card", { 1, 1024, 1 } },
          { "default",                                         { 1, 1024, 1 } },
        } },
      }
    },
    { // NVIDIA GPUs
      kDeviceTypeGPU, "NVIDIA", {
        { "SM2.0", {
          { "GeForce GTX 480",                                 { 1, 256, 1 } },
          { "default",                                         { 1, 256, 1 } },
        } },
        { "SM3.0", {
          { "GRID K520",                                       { 1, 512, 1 } },
          { "GeForce GTX 670",                                 { 1, 256, 1 } },
          { "GeForce GTX 680",                                 { 1, 256, 1 } },
          { "default",                                         { 1, 256, 1 } },
        } },
        { "SM3.5", {
          { "GeForce GTX TITAN",                               { 1, 256, 1 } },
          { "GeForce GTX TITAN Black",                         { 1, 128, 2 } },
          { "Tesla K20m",                                      { 1, 128, 1 } },
          { "Tesla K40m",                                      { 1, 128, 1 } },
          { "default",                                         { 1, 128, 1 } },
        } },
        { "SM5.0", {
          { "GeForce GTX 750",                                 { 1, 512, 1 } },
          { "GeForce GTX 750 Ti",                              { 1, 512, 1 } },
          { "default",                                         { 1, 512, 1 } },
        } },
        { "SM5.2", {
          { "GeForce GTX 980",                                 { 1, 64, 1 } },
          { "GeForce GTX TITAN X",                             { 1, 512, 1 } },
          { "default",                                         { 1, 512, 1 } },
        } },
        { "SM6.1", {
          { "GeForce GTX 1070",                                { 1, 64, 2 } },
          { "GeForce GTX 1080",                                { 2, 64, 1 } },
          { "TITAN X (Pascal)",                                { 2, 512, 1 } },
          { "default",                                         { 1, 64, 1 } },
        } },
        { "default", {
          { "default",                                         { 1, 256, 1 } },
        } },
      }
    },
    { // QUALCOMM GPUs
      kDeviceTypeGPU, "QUALCOMM", {
        { "default", {
          { "QUALCOMM Adreno(TM)",                             { 1, 64, 1 } },
          { "default",                                         { 1, 64, 1 } },
        } },
      }
    },
    { // Default
      kDeviceTypeAll, "default", {
        { "default", {
          { "default",                                         { 1, 128, 1 } },
        } },
      }
    },
  }
};

} // namespace database
} // namespace clblast
