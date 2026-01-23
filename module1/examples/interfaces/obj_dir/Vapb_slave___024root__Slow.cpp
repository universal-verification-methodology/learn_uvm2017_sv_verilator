// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vapb_slave.h for the primary calling header

#include "Vapb_slave__pch.h"
#include "Vapb_slave__Syms.h"
#include "Vapb_slave___024root.h"

void Vapb_slave___024root___ctor_var_reset(Vapb_slave___024root* vlSelf);

Vapb_slave___024root::Vapb_slave___024root(Vapb_slave__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vapb_slave___024root___ctor_var_reset(this);
}

void Vapb_slave___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vapb_slave___024root::~Vapb_slave___024root() {
}
