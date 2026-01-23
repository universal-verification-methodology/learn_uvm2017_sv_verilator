// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
// Verilator compiles this file in when DPI functions are used.
// If you have multiple Verilated designs with the same DPI exported
// function names, you will get multiple definition link errors from here.
// This is an unfortunate result of the DPI specification.
// To solve this, either
//    1. Call Vvirtual_sequences::{export_function} instead,
//       and do not even bother to compile this file
// or 2. Compile all __Dpi.cpp files in the same compiler run,
//       and #ifdefs already inserted here will sort everything out.

#include "Vvirtual_sequences__Dpi.h"
#include "Vvirtual_sequences.h"

#ifndef VL_DPIDECL_m__uvm_report_dpi_
#define VL_DPIDECL_m__uvm_report_dpi_
void m__uvm_report_dpi(int severity, const char* id, const char* message, int verbosity, const char* filename, int line) {
    // DPI export at /mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh:114:15
    return Vvirtual_sequences::m__uvm_report_dpi(severity, id, message, verbosity, filename, line);
}
#endif

