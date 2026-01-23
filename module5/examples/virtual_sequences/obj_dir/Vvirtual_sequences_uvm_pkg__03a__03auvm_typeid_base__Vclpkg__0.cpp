// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvirtual_sequences.h for the primary calling header

#include "Vvirtual_sequences__pch.h"

Vvirtual_sequences_uvm_pkg__03a__03auvm_typeid_base::Vvirtual_sequences_uvm_pkg__03a__03auvm_typeid_base(Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_typeid_base::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_typeid_base::_ctor_var_reset(Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_typeid_base::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vvirtual_sequences_uvm_pkg__03a__03auvm_typeid_base::~Vvirtual_sequences_uvm_pkg__03a__03auvm_typeid_base() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_typeid_base::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_typeid_base>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_typeid_base::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vvirtual_sequences_uvm_pkg__03a__03auvm_typeid_base::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_typeid_base::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vvirtual_sequences_uvm_pkg__03a__03auvm_typeid_base::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_typeid_base::to_string_middle\n"); );
    // Body
    std::string out;
    return (out);
}
