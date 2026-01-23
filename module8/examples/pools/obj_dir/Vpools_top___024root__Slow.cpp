// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpools_top.h for the primary calling header

#include "Vpools_top__pch.h"

void Vpools_top___024root___ctor_var_reset(Vpools_top___024root* vlSelf);

Vpools_top___024root::Vpools_top___024root(Vpools_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vpools_top___024root___ctor_var_reset(this);
}

void Vpools_top___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vpools_top___024root::~Vpools_top___024root() {
}
