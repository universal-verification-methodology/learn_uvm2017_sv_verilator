// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"

void Vdma_std___ctor_var_reset(Vdma_std* vlSelf);

Vdma_std::Vdma_std(Vdma__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vdma_std___ctor_var_reset(this);
}

void Vdma_std::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vdma_std::~Vdma_std() {
}
