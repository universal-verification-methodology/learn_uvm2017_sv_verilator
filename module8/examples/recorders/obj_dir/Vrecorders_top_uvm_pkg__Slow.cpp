// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrecorders_top.h for the primary calling header

#include "Vrecorders_top__pch.h"

void Vrecorders_top_uvm_pkg___ctor_var_reset(Vrecorders_top_uvm_pkg* vlSelf);

Vrecorders_top_uvm_pkg::Vrecorders_top_uvm_pkg(Vrecorders_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vrecorders_top_uvm_pkg___ctor_var_reset(this);
}

void Vrecorders_top_uvm_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vrecorders_top_uvm_pkg::~Vrecorders_top_uvm_pkg() {
}
