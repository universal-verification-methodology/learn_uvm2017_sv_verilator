// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Verror_handling_example.h for the primary calling header

#include "Verror_handling_example__pch.h"

void Verror_handling_example___024root___ctor_var_reset(Verror_handling_example___024root* vlSelf);

Verror_handling_example___024root::Verror_handling_example___024root(Verror_handling_example__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Verror_handling_example___024root___ctor_var_reset(this);
}

void Verror_handling_example___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Verror_handling_example___024root::~Verror_handling_example___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
