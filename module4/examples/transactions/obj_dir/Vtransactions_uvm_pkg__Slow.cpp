// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransactions.h for the primary calling header

#include "Vtransactions__pch.h"

void Vtransactions_uvm_pkg___ctor_var_reset(Vtransactions_uvm_pkg* vlSelf);

Vtransactions_uvm_pkg::Vtransactions_uvm_pkg() = default;
Vtransactions_uvm_pkg::~Vtransactions_uvm_pkg() = default;

void Vtransactions_uvm_pkg::ctor(Vtransactions__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtransactions_uvm_pkg___ctor_var_reset(this);
}

void Vtransactions_uvm_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtransactions_uvm_pkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
