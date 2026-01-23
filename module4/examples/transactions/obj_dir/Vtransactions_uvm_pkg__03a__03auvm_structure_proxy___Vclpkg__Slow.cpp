// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransactions.h for the primary calling header

#include "Vtransactions__pch.h"

void Vtransactions_uvm_pkg__03a__03auvm_structure_proxy___Vclpkg___ctor_var_reset(Vtransactions_uvm_pkg__03a__03auvm_structure_proxy___Vclpkg* vlSelf);

Vtransactions_uvm_pkg__03a__03auvm_structure_proxy___Vclpkg::Vtransactions_uvm_pkg__03a__03auvm_structure_proxy___Vclpkg() = default;
Vtransactions_uvm_pkg__03a__03auvm_structure_proxy___Vclpkg::~Vtransactions_uvm_pkg__03a__03auvm_structure_proxy___Vclpkg() = default;

void Vtransactions_uvm_pkg__03a__03auvm_structure_proxy___Vclpkg::ctor(Vtransactions__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtransactions_uvm_pkg__03a__03auvm_structure_proxy___Vclpkg___ctor_var_reset(this);
}

void Vtransactions_uvm_pkg__03a__03auvm_structure_proxy___Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtransactions_uvm_pkg__03a__03auvm_structure_proxy___Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
