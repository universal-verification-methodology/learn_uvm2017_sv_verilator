// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdata_structures_example.h for the primary calling header

#include "Vdata_structures_example__pch.h"

void Vdata_structures_example___024root___ctor_var_reset(Vdata_structures_example___024root* vlSelf);

Vdata_structures_example___024root::Vdata_structures_example___024root(Vdata_structures_example__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vdata_structures_example___024root___ctor_var_reset(this);
}

void Vdata_structures_example___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vdata_structures_example___024root::~Vdata_structures_example___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
