// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"

void Vdma_dma_if___ctor_var_reset(Vdma_dma_if* vlSelf);

Vdma_dma_if::Vdma_dma_if() = default;
Vdma_dma_if::~Vdma_dma_if() = default;

void Vdma_dma_if::ctor(Vdma__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vdma_dma_if___ctor_var_reset(this);
}

void Vdma_dma_if::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vdma_dma_if::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
