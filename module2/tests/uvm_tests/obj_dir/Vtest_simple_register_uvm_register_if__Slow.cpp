// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_simple_register_uvm.h for the primary calling header

#include "Vtest_simple_register_uvm__pch.h"

void Vtest_simple_register_uvm_register_if___ctor_var_reset(Vtest_simple_register_uvm_register_if* vlSelf);

Vtest_simple_register_uvm_register_if::Vtest_simple_register_uvm_register_if() = default;
Vtest_simple_register_uvm_register_if::~Vtest_simple_register_uvm_register_if() = default;

void Vtest_simple_register_uvm_register_if::ctor(Vtest_simple_register_uvm__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtest_simple_register_uvm_register_if___ctor_var_reset(this);
}

void Vtest_simple_register_uvm_register_if::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtest_simple_register_uvm_register_if::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
