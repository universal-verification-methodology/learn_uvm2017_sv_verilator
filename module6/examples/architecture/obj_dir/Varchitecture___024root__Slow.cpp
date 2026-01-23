// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varchitecture.h for the primary calling header

#include "Varchitecture__pch.h"

void Varchitecture___024root___ctor_var_reset(Varchitecture___024root* vlSelf);

Varchitecture___024root::Varchitecture___024root(Varchitecture__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Varchitecture___024root___ctor_var_reset(this);
}

void Varchitecture___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Varchitecture___024root::~Varchitecture___024root() {
}
