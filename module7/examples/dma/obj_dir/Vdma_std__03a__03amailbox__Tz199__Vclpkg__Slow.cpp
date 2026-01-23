// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"

void Vdma_std__03a__03amailbox__Tz199__Vclpkg___ctor_var_reset(Vdma_std__03a__03amailbox__Tz199__Vclpkg* vlSelf);

Vdma_std__03a__03amailbox__Tz199__Vclpkg::Vdma_std__03a__03amailbox__Tz199__Vclpkg() = default;
Vdma_std__03a__03amailbox__Tz199__Vclpkg::~Vdma_std__03a__03amailbox__Tz199__Vclpkg() = default;

void Vdma_std__03a__03amailbox__Tz199__Vclpkg::ctor(Vdma__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vdma_std__03a__03amailbox__Tz199__Vclpkg___ctor_var_reset(this);
}

void Vdma_std__03a__03amailbox__Tz199__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vdma_std__03a__03amailbox__Tz199__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
