// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclock_gen.h for the primary calling header

#include "Vclock_gen__pch.h"

void Vclock_gen___024root___ctor_var_reset(Vclock_gen___024root* vlSelf);

Vclock_gen___024root::Vclock_gen___024root(Vclock_gen__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vclock_gen___024root___ctor_var_reset(this);
}

void Vclock_gen___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vclock_gen___024root::~Vclock_gen___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
