
// =================================================================================================
// This file is part of the CLBlast project. The project is licensed under Apache Version 2.0. It
// is auto-generated by the 'scripts/database/database.py' Python script.
//
// This file populates the database with best-found tuning parameters for the 'Xgemv_Fast_Rot32' kernels.
//
// =================================================================================================

namespace clblast {
namespace database {

const DatabaseEntry XgemvFastRotSingle = {
  "XgemvFastRot", Precision::kSingle, {"VW3", "WGS3", "WPT3"}, {
    { // AMD GPUs
      kDeviceTypeGPU, "AMD", {
        { "Ellesmere", {
          { "AMD Radeon RX 480",                               { 8, 32, 32 } },
          { "default",                                         { 8, 32, 32 } },
        } },
        { "Fiji", {
          { "AMD Radeon R9 Fury X",                            { 4, 32, 16 } },
          { "AMD Radeon R9 M370X Compute Engine",              { 8, 64, 32 } },
          { "default",                                         { 8, 32, 32 } },
        } },
        { "Tonga", {
          { "AMD Radeon R9 380",                               { 8, 128, 32 } },
          { "default",                                         { 8, 128, 32 } },
        } },
        { "Turks", {
          { "AMD Radeon HD 6770M",                             { 8, 128, 16 } },
          { "default",                                         { 8, 128, 16 } },
        } },
        { "Vancouver", {
          { "ATI Radeon HD 6750M",                             { 8, 128, 16 } },
          { "default",                                         { 8, 128, 16 } },
        } },
        { "default", {
          { "default",                                         { 8, 32, 32 } },
        } },
      }
    },
    { // Intel CPUs
      kDeviceTypeCPU, "Intel", {
        { "default", {
          { "Intel(R) Core(TM) i7-2670QM CPU @ 2.20GHz",       { 4, 32, 32 } },
          { "Intel(R) Core(TM) i7 CPU         920  @ 2.67GHz", { 8, 128, 8 } },
          { "Intel(R) Core(TM) i7-4790K CPU @ 4.00GHz",        { 4, 32, 32 } },
          { "Intel(R) Core(TM) i7-5930K CPU @ 3.50GHz",        { 8, 16, 8 } },
          { "default",                                         { 8, 32, 32 } },
        } },
      }
    },
    { // Intel GPUs
      kDeviceTypeGPU, "Intel", {
        { "default", {
          { "Intel(R) HD Graphics 5500 BroadWell U-Processor GT2", { 8, 64, 32 } },
          { "Intel(R) HD Graphics Haswell Ultrabook GT2 Mobile", { 4, 64, 16 } },
          { "Intel(R) HD Graphics IvyBridge M GT2",            { 2, 32, 16 } },
          { "Intel(R) HD Graphics Skylake ULT GT2",            { 4, 64, 16 } },
          { "Iris Pro",                                        { 4, 16, 16 } },
          { "default",                                         { 4, 64, 16 } },
        } },
      }
    },
    { // NVIDIA GPUs
      kDeviceTypeGPU, "NVIDIA", {
        { "SM3.0", {
          { "GeForce GT 650M",                                 { 8, 32, 16 } },
          { "default",                                         { 8, 32, 16 } },
        } },
        { "SM3.5", {
          { "GeForce GTX TITAN",                               { 1, 16, 16 } },
          { "GeForce GTX TITAN Black",                         { 4, 128, 16 } },
          { "default",                                         { 1, 16, 16 } },
        } },
        { "SM5.0", {
          { "GeForce GTX 750 Ti",                              { 8, 32, 32 } },
          { "default",                                         { 8, 32, 32 } },
        } },
        { "SM6.1", {
          { "GeForce GTX 1080",                                { 8, 32, 32 } },
          { "TITAN X (Pascal)",                                { 8, 64, 32 } },
          { "default",                                         { 8, 64, 32 } },
        } },
        { "default", {
          { "default",                                         { 8, 32, 32 } },
        } },
      }
    },
    { // QUALCOMM GPUs
      kDeviceTypeGPU, "QUALCOMM", {
        { "default", {
          { "QUALCOMM Adreno(TM)",                             { 4, 64, 16 } },
          { "default",                                         { 4, 64, 16 } },
        } },
      }
    },
    { // Default
      kDeviceTypeAll, "default", {
        { "default", {
          { "default",                                         { 8, 32, 32 } },
        } },
      }
    },
  }
};

} // namespace database
} // namespace clblast
