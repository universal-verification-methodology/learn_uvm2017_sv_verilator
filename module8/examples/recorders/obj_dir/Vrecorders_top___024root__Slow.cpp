// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrecorders_top.h for the primary calling header

#include "Vrecorders_top__pch.h"

void Vrecorders_top___024root___ctor_var_reset(Vrecorders_top___024root* vlSelf);

Vrecorders_top___024root::Vrecorders_top___024root(Vrecorders_top__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vrecorders_top___024root___ctor_var_reset(this);
}

void Vrecorders_top___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vrecorders_top___024root::~Vrecorders_top___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
