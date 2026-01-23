// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrecorders_top.h for the primary calling header

#include "Vrecorders_top__pch.h"

void Vrecorders_top_uvm_pkg__03a__03auvm_objection_context_object__Vclpkg___ctor_var_reset(Vrecorders_top_uvm_pkg__03a__03auvm_objection_context_object__Vclpkg* vlSelf);

Vrecorders_top_uvm_pkg__03a__03auvm_objection_context_object__Vclpkg::Vrecorders_top_uvm_pkg__03a__03auvm_objection_context_object__Vclpkg() = default;
Vrecorders_top_uvm_pkg__03a__03auvm_objection_context_object__Vclpkg::~Vrecorders_top_uvm_pkg__03a__03auvm_objection_context_object__Vclpkg() = default;

void Vrecorders_top_uvm_pkg__03a__03auvm_objection_context_object__Vclpkg::ctor(Vrecorders_top__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vrecorders_top_uvm_pkg__03a__03auvm_objection_context_object__Vclpkg___ctor_var_reset(this);
}

void Vrecorders_top_uvm_pkg__03a__03auvm_objection_context_object__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vrecorders_top_uvm_pkg__03a__03auvm_objection_context_object__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
