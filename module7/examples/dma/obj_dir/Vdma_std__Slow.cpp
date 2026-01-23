// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"

void Vdma_std___ctor_var_reset(Vdma_std* vlSelf);

Vdma_std::Vdma_std() = default;
Vdma_std::~Vdma_std() = default;

void Vdma_std::ctor(Vdma__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vdma_std___ctor_var_reset(this);
}

void Vdma_std::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vdma_std::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
