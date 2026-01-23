// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransactions.h for the primary calling header

#include "Vtransactions__pch.h"

void Vtransactions___024root___ctor_var_reset(Vtransactions___024root* vlSelf);

Vtransactions___024root::Vtransactions___024root(Vtransactions__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtransactions___024root___ctor_var_reset(this);
}

void Vtransactions___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtransactions___024root::~Vtransactions___024root() {
}
