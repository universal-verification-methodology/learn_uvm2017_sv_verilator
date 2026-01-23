// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varchitecture.h for the primary calling header

#include "Varchitecture__pch.h"

void Varchitecture___024unit__03a__03aArchAgent__Vclpkg___ctor_var_reset(Varchitecture___024unit__03a__03aArchAgent__Vclpkg* vlSelf);

Varchitecture___024unit__03a__03aArchAgent__Vclpkg::Varchitecture___024unit__03a__03aArchAgent__Vclpkg() = default;
Varchitecture___024unit__03a__03aArchAgent__Vclpkg::~Varchitecture___024unit__03a__03aArchAgent__Vclpkg() = default;

void Varchitecture___024unit__03a__03aArchAgent__Vclpkg::ctor(Varchitecture__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Varchitecture___024unit__03a__03aArchAgent__Vclpkg___ctor_var_reset(this);
}

void Varchitecture___024unit__03a__03aArchAgent__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Varchitecture___024unit__03a__03aArchAgent__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
