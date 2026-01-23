// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vpackage_example__pch.h"
#include "Vpackage_example.h"
#include "Vpackage_example___024root.h"
#include "Vpackage_example___024unit.h"

// FUNCTIONS
Vpackage_example__Syms::~Vpackage_example__Syms()
{
}

Vpackage_example__Syms::Vpackage_example__Syms(VerilatedContext* contextp, const char* namep, Vpackage_example* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(159);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
