// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vsignal_access__pch.h"
#include "Vsignal_access.h"
#include "Vsignal_access___024root.h"

// FUNCTIONS
Vsignal_access__Syms::~Vsignal_access__Syms()
{
}

Vsignal_access__Syms::Vsignal_access__Syms(VerilatedContext* contextp, const char* namep, Vsignal_access* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(156);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
