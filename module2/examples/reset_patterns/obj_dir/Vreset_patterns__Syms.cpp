// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vreset_patterns__pch.h"
#include "Vreset_patterns.h"
#include "Vreset_patterns___024root.h"

// FUNCTIONS
Vreset_patterns__Syms::~Vreset_patterns__Syms()
{
}

Vreset_patterns__Syms::Vreset_patterns__Syms(VerilatedContext* contextp, const char* namep, Vreset_patterns* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(172);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
