// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"

void Vdma___024unit__03a__03aDmaTest__Vclpkg___ctor_var_reset(Vdma___024unit__03a__03aDmaTest__Vclpkg* vlSelf);

Vdma___024unit__03a__03aDmaTest__Vclpkg::Vdma___024unit__03a__03aDmaTest__Vclpkg() = default;
Vdma___024unit__03a__03aDmaTest__Vclpkg::~Vdma___024unit__03a__03aDmaTest__Vclpkg() = default;

void Vdma___024unit__03a__03aDmaTest__Vclpkg::ctor(Vdma__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vdma___024unit__03a__03aDmaTest__Vclpkg___ctor_var_reset(this);
}

void Vdma___024unit__03a__03aDmaTest__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vdma___024unit__03a__03aDmaTest__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
