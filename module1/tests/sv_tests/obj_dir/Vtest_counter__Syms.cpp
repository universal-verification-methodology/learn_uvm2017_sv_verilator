// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtest_counter__pch.h"
#include "Vtest_counter.h"
#include "Vtest_counter___024root.h"

// FUNCTIONS
Vtest_counter__Syms::~Vtest_counter__Syms()
{
}

Vtest_counter__Syms::Vtest_counter__Syms(VerilatedContext* contextp, const char* namep, Vtest_counter* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(19);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
