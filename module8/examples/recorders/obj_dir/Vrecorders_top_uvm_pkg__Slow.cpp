// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrecorders_top.h for the primary calling header

#include "Vrecorders_top__pch.h"

void Vrecorders_top_uvm_pkg___ctor_var_reset(Vrecorders_top_uvm_pkg* vlSelf);

Vrecorders_top_uvm_pkg::Vrecorders_top_uvm_pkg() = default;
Vrecorders_top_uvm_pkg::~Vrecorders_top_uvm_pkg() = default;

void Vrecorders_top_uvm_pkg::ctor(Vrecorders_top__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vrecorders_top_uvm_pkg___ctor_var_reset(this);
}

void Vrecorders_top_uvm_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vrecorders_top_uvm_pkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
