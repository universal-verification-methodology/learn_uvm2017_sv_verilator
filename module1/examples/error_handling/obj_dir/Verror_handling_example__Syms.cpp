// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Verror_handling_example__pch.h"
#include "Verror_handling_example.h"
#include "Verror_handling_example___024root.h"
#include "Verror_handling_example_error_handling_pkg.h"
#include "Verror_handling_example_error_handling_pkg__03a__03aVerificationException__Vclpkg.h"
#include "Verror_handling_example_error_handling_pkg__03a__03aErrorHandlingComponent__Vclpkg.h"

// FUNCTIONS
Verror_handling_example__Syms::~Verror_handling_example__Syms()
{
}

Verror_handling_example__Syms::Verror_handling_example__Syms(VerilatedContext* contextp, const char* namep, Verror_handling_example* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__error_handling_pkg{this, Verilated::catName(namep, "error_handling_pkg")}
    , TOP__error_handling_pkg__03a__03aErrorHandlingComponent__Vclpkg{this, Verilated::catName(namep, "error_handling_pkg::ErrorHandlingComponent__Vclpkg")}
    , TOP__error_handling_pkg__03a__03aVerificationException__Vclpkg{this, Verilated::catName(namep, "error_handling_pkg::VerificationException__Vclpkg")}
{
    // Check resources
    Verilated::stackCheck(209);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__error_handling_pkg = &TOP__error_handling_pkg;
    TOP.error_handling_pkg__03a__03aErrorHandlingComponent__Vclpkg = &TOP__error_handling_pkg__03a__03aErrorHandlingComponent__Vclpkg;
    TOP.error_handling_pkg__03a__03aVerificationException__Vclpkg = &TOP__error_handling_pkg__03a__03aVerificationException__Vclpkg;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__error_handling_pkg.__Vconfigure(true);
    TOP__error_handling_pkg__03a__03aErrorHandlingComponent__Vclpkg.__Vconfigure(true);
    TOP__error_handling_pkg__03a__03aVerificationException__Vclpkg.__Vconfigure(true);
}
