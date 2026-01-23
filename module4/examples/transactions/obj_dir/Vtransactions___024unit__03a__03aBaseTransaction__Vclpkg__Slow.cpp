// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransactions.h for the primary calling header

#include "Vtransactions__pch.h"

void Vtransactions___024unit__03a__03aBaseTransaction__Vclpkg___ctor_var_reset(Vtransactions___024unit__03a__03aBaseTransaction__Vclpkg* vlSelf);

Vtransactions___024unit__03a__03aBaseTransaction__Vclpkg::Vtransactions___024unit__03a__03aBaseTransaction__Vclpkg() = default;
Vtransactions___024unit__03a__03aBaseTransaction__Vclpkg::~Vtransactions___024unit__03a__03aBaseTransaction__Vclpkg() = default;

void Vtransactions___024unit__03a__03aBaseTransaction__Vclpkg::ctor(Vtransactions__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtransactions___024unit__03a__03aBaseTransaction__Vclpkg___ctor_var_reset(this);
}

void Vtransactions___024unit__03a__03aBaseTransaction__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtransactions___024unit__03a__03aBaseTransaction__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
