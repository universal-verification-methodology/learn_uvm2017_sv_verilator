// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpackage_example.h for the primary calling header

#include "Vpackage_example__pch.h"

void Vpackage_example___024unit___ctor_var_reset(Vpackage_example___024unit* vlSelf);

Vpackage_example___024unit::Vpackage_example___024unit() = default;
Vpackage_example___024unit::~Vpackage_example___024unit() = default;

void Vpackage_example___024unit::ctor(Vpackage_example__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vpackage_example___024unit___ctor_var_reset(this);
}

void Vpackage_example___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vpackage_example___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
