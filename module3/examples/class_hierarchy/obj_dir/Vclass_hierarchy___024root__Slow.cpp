// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclass_hierarchy.h for the primary calling header

#include "Vclass_hierarchy__pch.h"

void Vclass_hierarchy___024root___ctor_var_reset(Vclass_hierarchy___024root* vlSelf);

Vclass_hierarchy___024root::Vclass_hierarchy___024root(Vclass_hierarchy__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vclass_hierarchy___024root___ctor_var_reset(this);
}

void Vclass_hierarchy___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vclass_hierarchy___024root::~Vclass_hierarchy___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
