// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"

void Vdma_uvm_pkg___ctor_var_reset(Vdma_uvm_pkg* vlSelf);

Vdma_uvm_pkg::Vdma_uvm_pkg(Vdma__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vdma_uvm_pkg___ctor_var_reset(this);
}

void Vdma_uvm_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vdma_uvm_pkg::~Vdma_uvm_pkg() {
}
