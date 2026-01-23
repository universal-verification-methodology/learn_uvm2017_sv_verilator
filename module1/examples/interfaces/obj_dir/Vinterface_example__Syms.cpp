// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vinterface_example__pch.h"
#include "Vinterface_example.h"
#include "Vinterface_example___024root.h"
#include "Vinterface_example_apb_if.h"

// FUNCTIONS
Vinterface_example__Syms::~Vinterface_example__Syms()
{
}

Vinterface_example__Syms::Vinterface_example__Syms(VerilatedContext* contextp, const char* namep, Vinterface_example* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__interface_example__DOT__bus{this, Verilated::catName(namep, "interface_example.bus")}
{
    // Check resources
    Verilated::stackCheck(166);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__interface_example__DOT__bus = &TOP__interface_example__DOT__bus;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__interface_example__DOT__bus.__Vconfigure(true);
}
