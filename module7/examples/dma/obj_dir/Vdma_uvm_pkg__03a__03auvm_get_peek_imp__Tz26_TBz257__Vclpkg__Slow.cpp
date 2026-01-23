// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"

void Vdma_uvm_pkg__03a__03auvm_get_peek_imp__Tz26_TBz257__Vclpkg___ctor_var_reset(Vdma_uvm_pkg__03a__03auvm_get_peek_imp__Tz26_TBz257__Vclpkg* vlSelf);

Vdma_uvm_pkg__03a__03auvm_get_peek_imp__Tz26_TBz257__Vclpkg::Vdma_uvm_pkg__03a__03auvm_get_peek_imp__Tz26_TBz257__Vclpkg() = default;
Vdma_uvm_pkg__03a__03auvm_get_peek_imp__Tz26_TBz257__Vclpkg::~Vdma_uvm_pkg__03a__03auvm_get_peek_imp__Tz26_TBz257__Vclpkg() = default;

void Vdma_uvm_pkg__03a__03auvm_get_peek_imp__Tz26_TBz257__Vclpkg::ctor(Vdma__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vdma_uvm_pkg__03a__03auvm_get_peek_imp__Tz26_TBz257__Vclpkg___ctor_var_reset(this);
}

void Vdma_uvm_pkg__03a__03auvm_get_peek_imp__Tz26_TBz257__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vdma_uvm_pkg__03a__03auvm_get_peek_imp__Tz26_TBz257__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
