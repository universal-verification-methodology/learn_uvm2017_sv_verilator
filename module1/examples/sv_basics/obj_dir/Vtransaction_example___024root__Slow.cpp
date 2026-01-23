// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransaction_example.h for the primary calling header

#include "Vtransaction_example__pch.h"
#include "Vtransaction_example__Syms.h"
#include "Vtransaction_example___024root.h"

void Vtransaction_example___024root___ctor_var_reset(Vtransaction_example___024root* vlSelf);

Vtransaction_example___024root::Vtransaction_example___024root(Vtransaction_example__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtransaction_example___024root___ctor_var_reset(this);
}

void Vtransaction_example___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtransaction_example___024root::~Vtransaction_example___024root() {
}
