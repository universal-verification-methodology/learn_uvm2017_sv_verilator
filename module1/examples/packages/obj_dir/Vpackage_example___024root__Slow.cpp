// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpackage_example.h for the primary calling header

#include "Vpackage_example__pch.h"

void Vpackage_example___024root___ctor_var_reset(Vpackage_example___024root* vlSelf);

Vpackage_example___024root::Vpackage_example___024root(Vpackage_example__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vpackage_example___024root___ctor_var_reset(this);
}

void Vpackage_example___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vpackage_example___024root::~Vpackage_example___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
