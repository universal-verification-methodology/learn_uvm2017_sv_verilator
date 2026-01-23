// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvirtual_sequences.h for the primary calling header

#include "Vvirtual_sequences__pch.h"

void Vvirtual_sequences_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi8__Vclpkg___ctor_var_reset(Vvirtual_sequences_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi8__Vclpkg* vlSelf);

Vvirtual_sequences_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi8__Vclpkg::Vvirtual_sequences_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi8__Vclpkg() = default;
Vvirtual_sequences_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi8__Vclpkg::~Vvirtual_sequences_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi8__Vclpkg() = default;

void Vvirtual_sequences_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi8__Vclpkg::ctor(Vvirtual_sequences__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vvirtual_sequences_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi8__Vclpkg___ctor_var_reset(this);
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi8__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi8__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
