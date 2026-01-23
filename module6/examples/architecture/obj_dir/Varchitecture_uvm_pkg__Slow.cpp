// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varchitecture.h for the primary calling header

#include "Varchitecture__pch.h"

void Varchitecture_uvm_pkg___ctor_var_reset(Varchitecture_uvm_pkg* vlSelf);

Varchitecture_uvm_pkg::Varchitecture_uvm_pkg() = default;
Varchitecture_uvm_pkg::~Varchitecture_uvm_pkg() = default;

void Varchitecture_uvm_pkg::ctor(Varchitecture__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Varchitecture_uvm_pkg___ctor_var_reset(this);
}

void Varchitecture_uvm_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Varchitecture_uvm_pkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
