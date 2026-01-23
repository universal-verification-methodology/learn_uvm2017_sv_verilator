// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_simple_register_uvm.h for the primary calling header

#include "Vtest_simple_register_uvm__pch.h"

void Vtest_simple_register_uvm___024root___ctor_var_reset(Vtest_simple_register_uvm___024root* vlSelf);

Vtest_simple_register_uvm___024root::Vtest_simple_register_uvm___024root(Vtest_simple_register_uvm__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtest_simple_register_uvm___024root___ctor_var_reset(this);
}

void Vtest_simple_register_uvm___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtest_simple_register_uvm___024root::~Vtest_simple_register_uvm___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
