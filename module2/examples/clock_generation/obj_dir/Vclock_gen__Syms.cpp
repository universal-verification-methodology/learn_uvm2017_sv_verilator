// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vclock_gen__pch.h"
#include "Vclock_gen.h"
#include "Vclock_gen___024root.h"

// FUNCTIONS
Vclock_gen__Syms::~Vclock_gen__Syms()
{
}

Vclock_gen__Syms::Vclock_gen__Syms(VerilatedContext* contextp, const char* namep, Vclock_gen* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(154);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
