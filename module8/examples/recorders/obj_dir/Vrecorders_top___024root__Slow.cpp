// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrecorders_top.h for the primary calling header

#include "Vrecorders_top__pch.h"

void Vrecorders_top___024root___ctor_var_reset(Vrecorders_top___024root* vlSelf);

Vrecorders_top___024root::Vrecorders_top___024root(Vrecorders_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vrecorders_top___024root___ctor_var_reset(this);
}

void Vrecorders_top___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vrecorders_top___024root::~Vrecorders_top___024root() {
}
