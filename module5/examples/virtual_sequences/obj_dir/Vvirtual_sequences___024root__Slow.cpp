// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvirtual_sequences.h for the primary calling header

#include "Vvirtual_sequences__pch.h"

void Vvirtual_sequences___024root___ctor_var_reset(Vvirtual_sequences___024root* vlSelf);

Vvirtual_sequences___024root::Vvirtual_sequences___024root(Vvirtual_sequences__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vvirtual_sequences___024root___ctor_var_reset(this);
}

void Vvirtual_sequences___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vvirtual_sequences___024root::~Vvirtual_sequences___024root() {
}
