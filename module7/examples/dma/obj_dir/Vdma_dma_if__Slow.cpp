// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"

void Vdma_dma_if___ctor_var_reset(Vdma_dma_if* vlSelf);

Vdma_dma_if::Vdma_dma_if(Vdma__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vdma_dma_if___ctor_var_reset(this);
}

void Vdma_dma_if::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vdma_dma_if::~Vdma_dma_if() {
}
