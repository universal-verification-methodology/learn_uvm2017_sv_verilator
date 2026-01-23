// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpools_top.h for the primary calling header

#include "Vpools_top__pch.h"

void Vpools_top_uvm_pkg__03a__03auvm_enum_wrapper___Vclpkg___ctor_var_reset(Vpools_top_uvm_pkg__03a__03auvm_enum_wrapper___Vclpkg* vlSelf);

Vpools_top_uvm_pkg__03a__03auvm_enum_wrapper___Vclpkg::Vpools_top_uvm_pkg__03a__03auvm_enum_wrapper___Vclpkg() = default;
Vpools_top_uvm_pkg__03a__03auvm_enum_wrapper___Vclpkg::~Vpools_top_uvm_pkg__03a__03auvm_enum_wrapper___Vclpkg() = default;

void Vpools_top_uvm_pkg__03a__03auvm_enum_wrapper___Vclpkg::ctor(Vpools_top__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vpools_top_uvm_pkg__03a__03auvm_enum_wrapper___Vclpkg___ctor_var_reset(this);
}

void Vpools_top_uvm_pkg__03a__03auvm_enum_wrapper___Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vpools_top_uvm_pkg__03a__03auvm_enum_wrapper___Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
