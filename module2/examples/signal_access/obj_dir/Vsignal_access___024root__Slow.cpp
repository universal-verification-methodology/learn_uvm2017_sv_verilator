// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsignal_access.h for the primary calling header

#include "Vsignal_access__pch.h"

void Vsignal_access___024root___ctor_var_reset(Vsignal_access___024root* vlSelf);

Vsignal_access___024root::Vsignal_access___024root(Vsignal_access__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vsignal_access___024root___ctor_var_reset(this);
}

void Vsignal_access___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsignal_access___024root::~Vsignal_access___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
