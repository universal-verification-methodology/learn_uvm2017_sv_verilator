// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_counter.h for the primary calling header

#include "Vtest_counter__pch.h"

void Vtest_counter___024root___ctor_var_reset(Vtest_counter___024root* vlSelf);

Vtest_counter___024root::Vtest_counter___024root(Vtest_counter__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtest_counter___024root___ctor_var_reset(this);
}

void Vtest_counter___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtest_counter___024root::~Vtest_counter___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
