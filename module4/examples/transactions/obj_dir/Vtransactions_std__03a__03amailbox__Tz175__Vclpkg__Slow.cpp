// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransactions.h for the primary calling header

#include "Vtransactions__pch.h"

void Vtransactions_std__03a__03amailbox__Tz175__Vclpkg___ctor_var_reset(Vtransactions_std__03a__03amailbox__Tz175__Vclpkg* vlSelf);

Vtransactions_std__03a__03amailbox__Tz175__Vclpkg::Vtransactions_std__03a__03amailbox__Tz175__Vclpkg() = default;
Vtransactions_std__03a__03amailbox__Tz175__Vclpkg::~Vtransactions_std__03a__03amailbox__Tz175__Vclpkg() = default;

void Vtransactions_std__03a__03amailbox__Tz175__Vclpkg::ctor(Vtransactions__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtransactions_std__03a__03amailbox__Tz175__Vclpkg___ctor_var_reset(this);
}

void Vtransactions_std__03a__03amailbox__Tz175__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtransactions_std__03a__03amailbox__Tz175__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
