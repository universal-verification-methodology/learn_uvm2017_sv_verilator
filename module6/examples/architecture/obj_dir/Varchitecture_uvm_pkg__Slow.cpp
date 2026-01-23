// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varchitecture.h for the primary calling header

#include "Varchitecture__pch.h"

void Varchitecture_uvm_pkg___ctor_var_reset(Varchitecture_uvm_pkg* vlSelf);

Varchitecture_uvm_pkg::Varchitecture_uvm_pkg(Varchitecture__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Varchitecture_uvm_pkg___ctor_var_reset(this);
}

void Varchitecture_uvm_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Varchitecture_uvm_pkg::~Varchitecture_uvm_pkg() {
}
