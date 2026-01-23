// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vinterface_example.h for the primary calling header

#include "Vinterface_example__pch.h"

void Vinterface_example___024root___ctor_var_reset(Vinterface_example___024root* vlSelf);

Vinterface_example___024root::Vinterface_example___024root(Vinterface_example__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vinterface_example___024root___ctor_var_reset(this);
}

void Vinterface_example___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vinterface_example___024root::~Vinterface_example___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
