// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"

void Vdma___024root___ctor_var_reset(Vdma___024root* vlSelf);

Vdma___024root::Vdma___024root(Vdma__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vdma___024root___ctor_var_reset(this);
}

void Vdma___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vdma___024root::~Vdma___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
