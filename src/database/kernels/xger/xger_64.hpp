
// =================================================================================================
// This file is part of the CLBlast project. The project is licensed under Apache Version 2.0. It
// is auto-generated by the 'scripts/database/database.py' Python script.
//
// This file populates the database with best-found tuning parameters for the 'Xger64' kernels.
//
// =================================================================================================

namespace clblast {
namespace database {

const DatabaseEntry XgerDouble = {
  "Xger", Precision::kDouble, {"WGS1", "WGS2", "WPT"}, {
    { // AMD GPUs
      kDeviceTypeGPU, "AMD", {
        { "Ellesmere", {
          { "AMD Radeon RX 480",                               { 64, 1, 4 } },
          { "default",                                         { 64, 1, 4 } },
        } },
        { "Fiji", {
          { "AMD Radeon R9 Fury X",                            { 256, 1, 2 } },
          { "AMD Radeon R9 M370X Compute Engine",              { 32, 4, 1 } },
          { "default",                                         { 256, 1, 2 } },
        } },
        { "Hawaii", {
          { "AMD Radeon R9 290X",                              { 32, 4, 2 } },
          { "default",                                         { 32, 4, 2 } },
        } },
        { "Oland", {
          { "Oland",                                           { 128, 1, 2 } },
          { "default",                                         { 128, 1, 2 } },
        } },
        { "Pitcairn", {
          { "AMD Radeon R9 270X",                              { 64, 1, 1 } },
          { "default",                                         { 64, 1, 1 } },
        } },
        { "Tahiti", {
          { "AMD Radeon HD 7970",                              { 64, 2, 1 } },
          { "default",                                         { 64, 2, 1 } },
        } },
        { "Tonga", {
          { "AMD Radeon R9 380",                               { 8, 16, 2 } },
          { "default",                                         { 8, 16, 2 } },
        } },
        { "default", {
          { "default",                                         { 128, 2, 1 } },
        } },
      }
    },
    { // ARM GPUs
      kDeviceTypeGPU, "ARM", {
        { "default", {
          { "Mali-T628",                                       { 64, 4, 1 } },
          { "default",                                         { 64, 4, 1 } },
        } },
      }
    },
    { // Intel CPUs
      kDeviceTypeCPU, "Intel", {
        { "default", {
          { "Intel(R) Core(TM) i7-2670QM CPU @ 2.20GHz",       { 256, 1, 4 } },
          { "Intel(R) Core(TM) i5-6200U CPU @ 2.30GHz",        { 512, 16, 1 } },
          { "Intel(R) Core(TM) i7 CPU         920  @ 2.67GHz", { 256, 1, 4 } },
          { "Intel(R) Core(TM) i7-4790K CPU @ 4.00GHz",        { 256, 4, 4 } },
          { "Intel(R) Core(TM) i7-5930K CPU @ 3.50GHz",        { 512, 8, 2 } },
          { "default",                                         { 256, 1, 4 } },
        } },
      }
    },
    { // NVIDIA GPUs
      kDeviceTypeGPU, "NVIDIA", {
        { "SM2.0", {
          { "GeForce GTX 480",                                 { 32, 4, 2 } },
          { "default",                                         { 32, 4, 2 } },
        } },
        { "SM3.0", {
          { "GRID K520",                                       { 128, 8, 2 } },
          { "GeForce GTX 670",                                 { 32, 32, 2 } },
          { "GeForce GTX 680",                                 { 128, 4, 2 } },
          { "default",                                         { 128, 8, 2 } },
        } },
        { "SM3.5", {
          { "GeForce GTX TITAN",                               { 16, 8, 2 } },
          { "GeForce GTX TITAN Black",                         { 32, 4, 2 } },
          { "default",                                         { 32, 4, 2 } },
        } },
        { "SM5.0", {
          { "GeForce GTX 750",                                 { 256, 2, 2 } },
          { "GeForce GTX 750 Ti",                              { 32, 16, 1 } },
          { "default",                                         { 16, 8, 1 } },
        } },
        { "SM6.1", {
          { "GeForce GTX 1070",                                { 32, 8, 1 } },
          { "GeForce GTX 1080",                                { 32, 2, 1 } },
          { "TITAN X (Pascal)",                                { 32, 2, 1 } },
          { "default",                                         { 32, 2, 1 } },
        } },
        { "default", {
          { "default",                                         { 128, 1, 2 } },
        } },
      }
    },
    { // Default
      kDeviceTypeAll, "default", {
        { "default", {
          { "default",                                         { 128, 1, 2 } },
        } },
      }
    },
  }
};

} // namespace database
} // namespace clblast
