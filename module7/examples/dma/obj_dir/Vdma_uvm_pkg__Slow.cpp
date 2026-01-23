// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"

void Vdma_uvm_pkg___ctor_var_reset(Vdma_uvm_pkg* vlSelf);

Vdma_uvm_pkg::Vdma_uvm_pkg() = default;
Vdma_uvm_pkg::~Vdma_uvm_pkg() = default;

void Vdma_uvm_pkg::ctor(Vdma__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vdma_uvm_pkg___ctor_var_reset(this);
}

void Vdma_uvm_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vdma_uvm_pkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
