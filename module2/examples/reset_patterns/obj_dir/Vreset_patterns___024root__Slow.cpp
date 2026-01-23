// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vreset_patterns.h for the primary calling header

#include "Vreset_patterns__pch.h"

void Vreset_patterns___024root___ctor_var_reset(Vreset_patterns___024root* vlSelf);

Vreset_patterns___024root::Vreset_patterns___024root(Vreset_patterns__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vreset_patterns___024root___ctor_var_reset(this);
}

void Vreset_patterns___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vreset_patterns___024root::~Vreset_patterns___024root() {
}
