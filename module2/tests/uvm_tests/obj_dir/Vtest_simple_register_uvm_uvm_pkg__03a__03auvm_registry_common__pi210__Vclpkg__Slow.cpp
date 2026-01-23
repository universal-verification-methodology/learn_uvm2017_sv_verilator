// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_simple_register_uvm.h for the primary calling header

#include "Vtest_simple_register_uvm__pch.h"

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_registry_common__pi210__Vclpkg___ctor_var_reset(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_registry_common__pi210__Vclpkg* vlSelf);

Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_registry_common__pi210__Vclpkg::Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_registry_common__pi210__Vclpkg() = default;
Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_registry_common__pi210__Vclpkg::~Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_registry_common__pi210__Vclpkg() = default;

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_registry_common__pi210__Vclpkg::ctor(Vtest_simple_register_uvm__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_registry_common__pi210__Vclpkg___ctor_var_reset(this);
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_registry_common__pi210__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_registry_common__pi210__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
