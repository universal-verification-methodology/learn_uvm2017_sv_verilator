// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvirtual_sequences.h for the primary calling header

#include "Vvirtual_sequences__pch.h"

void Vvirtual_sequences_uvm_pkg___ctor_var_reset(Vvirtual_sequences_uvm_pkg* vlSelf);

Vvirtual_sequences_uvm_pkg::Vvirtual_sequences_uvm_pkg() = default;
Vvirtual_sequences_uvm_pkg::~Vvirtual_sequences_uvm_pkg() = default;

void Vvirtual_sequences_uvm_pkg::ctor(Vvirtual_sequences__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vvirtual_sequences_uvm_pkg___ctor_var_reset(this);
}

void Vvirtual_sequences_uvm_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vvirtual_sequences_uvm_pkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
