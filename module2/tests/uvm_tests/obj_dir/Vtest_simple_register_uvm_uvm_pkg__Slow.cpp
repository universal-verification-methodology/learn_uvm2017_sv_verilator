// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_simple_register_uvm.h for the primary calling header

#include "Vtest_simple_register_uvm__pch.h"

void Vtest_simple_register_uvm_uvm_pkg___ctor_var_reset(Vtest_simple_register_uvm_uvm_pkg* vlSelf);

Vtest_simple_register_uvm_uvm_pkg::Vtest_simple_register_uvm_uvm_pkg() = default;
Vtest_simple_register_uvm_uvm_pkg::~Vtest_simple_register_uvm_uvm_pkg() = default;

void Vtest_simple_register_uvm_uvm_pkg::ctor(Vtest_simple_register_uvm__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtest_simple_register_uvm_uvm_pkg___ctor_var_reset(this);
}

void Vtest_simple_register_uvm_uvm_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtest_simple_register_uvm_uvm_pkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
