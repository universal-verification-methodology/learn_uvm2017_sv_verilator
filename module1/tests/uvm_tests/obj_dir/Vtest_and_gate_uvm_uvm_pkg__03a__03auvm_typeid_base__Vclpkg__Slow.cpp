// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_and_gate_uvm.h for the primary calling header

#include "Vtest_and_gate_uvm__pch.h"

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typeid_base__Vclpkg___ctor_var_reset(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typeid_base__Vclpkg* vlSelf);

Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typeid_base__Vclpkg::Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typeid_base__Vclpkg() = default;
Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typeid_base__Vclpkg::~Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typeid_base__Vclpkg() = default;

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typeid_base__Vclpkg::ctor(Vtest_and_gate_uvm__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typeid_base__Vclpkg___ctor_var_reset(this);
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typeid_base__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typeid_base__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
