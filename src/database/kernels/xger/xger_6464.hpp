
// =================================================================================================
// This file is part of the CLBlast project. The project is licensed under Apache Version 2.0. It
// is auto-generated by the 'scripts/database/database.py' Python script.
//
// This file populates the database with best-found tuning parameters for the 'Xger6464' kernels.
//
// =================================================================================================

namespace clblast {
namespace database {

const DatabaseEntry XgerComplexDouble = {
  "Xger", Precision::kComplexDouble, {"WGS1", "WGS2", "WPT"}, {
    { // AMD GPUs
      kDeviceTypeGPU, "AMD", {
        { "Ellesmere", {
          { "AMD Radeon RX 480",                               { 8, 16, 1 } },
          { "default",                                         { 8, 16, 1 } },
        } },
        { "Fiji", {
          { "AMD Radeon R9 Fury X",                            { 64, 4, 2 } },
          { "AMD Radeon R9 M370X Compute Engine",              { 64, 1, 1 } },
          { "default",                                         { 64, 4, 2 } },
        } },
        { "Hawaii", {
          { "AMD Radeon R9 290X",                              { 128, 1, 1 } },
          { "default",                                         { 128, 1, 1 } },
        } },
        { "Oland", {
          { "Oland",                                           { 16, 16, 2 } },
          { "default",                                         { 16, 16, 2 } },
        } },
        { "Pitcairn", {
          { "AMD Radeon R9 270X",                              { 64, 4, 1 } },
          { "default",                                         { 64, 4, 1 } },
        } },
        { "Tahiti", {
          { "AMD Radeon HD 7970",                              { 32, 4, 1 } },
          { "default",                                         { 32, 4, 1 } },
        } },
        { "Tonga", {
          { "AMD Radeon R9 380",                               { 16, 4, 1 } },
          { "default",                                         { 16, 4, 1 } },
        } },
        { "default", {
          { "default",                                         { 32, 4, 1 } },
        } },
      }
    },
    { // ARM GPUs
      kDeviceTypeGPU, "ARM", {
        { "default", {
          { "Mali-T628",                                       { 64, 2, 4 } },
          { "default",                                         { 64, 2, 4 } },
        } },
      }
    },
    { // Intel CPUs
      kDeviceTypeCPU, "Intel", {
        { "default", {
          { "Intel(R) Core(TM) i7-2670QM CPU @ 2.20GHz",       { 128, 4, 4 } },
          { "Intel(R) Core(TM) i5-6200U CPU @ 2.30GHz",        { 512, 4, 2 } },
          { "Intel(R) Core(TM) i7 CPU         920  @ 2.67GHz", { 256, 8, 4 } },
          { "Intel(R) Core(TM) i7-4790K CPU @ 4.00GHz",        { 512, 2, 2 } },
          { "Intel(R) Core(TM) i7-5930K CPU @ 3.50GHz",        { 256, 1, 2 } },
          { "default",                                         { 256, 2, 2 } },
        } },
      }
    },
    { // NVIDIA GPUs
      kDeviceTypeGPU, "NVIDIA", {
        { "SM2.0", {
          { "GeForce GTX 480",                                 { 64, 2, 2 } },
          { "default",                                         { 64, 2, 2 } },
        } },
        { "SM3.0", {
          { "GRID K520",                                       { 16, 8, 2 } },
          { "GeForce GTX 670",                                 { 8, 16, 2 } },
          { "GeForce GTX 680",                                 { 8, 16, 1 } },
          { "default",                                         { 16, 8, 2 } },
        } },
        { "SM3.5", {
          { "GeForce GTX TITAN",                               { 32, 4, 2 } },
          { "GeForce GTX TITAN Black",                         { 16, 16, 2 } },
          { "default",                                         { 32, 4, 2 } },
        } },
        { "SM5.0", {
          { "GeForce GTX 750",                                 { 8, 32, 4 } },
          { "GeForce GTX 750 Ti",                              { 32, 8, 2 } },
          { "default",                                         { 32, 1, 4 } },
        } },
        { "SM6.1", {
          { "GeForce GTX 1070",                                { 8, 128, 1 } },
          { "GeForce GTX 1080",                                { 8, 4, 1 } },
          { "TITAN X (Pascal)",                                { 4, 8, 1 } },
          { "default",                                         { 8, 4, 1 } },
        } },
        { "default", {
          { "default",                                         { 16, 8, 2 } },
        } },
      }
    },
    { // Default
      kDeviceTypeAll, "default", {
        { "default", {
          { "default",                                         { 64, 2, 2 } },
        } },
      }
    },
  }
};

} // namespace database
} // namespace clblast
