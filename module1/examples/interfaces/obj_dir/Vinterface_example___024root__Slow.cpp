// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vinterface_example.h for the primary calling header

#include "Vinterface_example__pch.h"
#include "Vinterface_example__Syms.h"
#include "Vinterface_example___024root.h"

void Vinterface_example___024root___ctor_var_reset(Vinterface_example___024root* vlSelf);

Vinterface_example___024root::Vinterface_example___024root(Vinterface_example__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vinterface_example___024root___ctor_var_reset(this);
}

void Vinterface_example___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vinterface_example___024root::~Vinterface_example___024root() {
}
