// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_simple_register_uvm.h for the primary calling header

#include "Vtest_simple_register_uvm__pch.h"

void Vtest_simple_register_uvm___024root___ctor_var_reset(Vtest_simple_register_uvm___024root* vlSelf);

Vtest_simple_register_uvm___024root::Vtest_simple_register_uvm___024root(Vtest_simple_register_uvm__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtest_simple_register_uvm___024root___ctor_var_reset(this);
}

void Vtest_simple_register_uvm___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtest_simple_register_uvm___024root::~Vtest_simple_register_uvm___024root() {
}
