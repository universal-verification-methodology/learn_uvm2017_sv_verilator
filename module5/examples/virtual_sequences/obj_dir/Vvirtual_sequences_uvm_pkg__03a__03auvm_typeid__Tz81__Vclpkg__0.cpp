// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvirtual_sequences.h for the primary calling header

#include "Vvirtual_sequences__pch.h"

void Vvirtual_sequences_uvm_pkg__03a__03auvm_typeid__Tz81__Vclpkg::__VnoInFunc_get(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_typeid__Tz81> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences_uvm_pkg__03a__03auvm_typeid__Tz81__Vclpkg::__VnoInFunc_get\n"); );
    // Body
    if ((VlNull{} == this->__PVT__m_b_inst)) {
        this->__PVT__m_b_inst = VL_NEW(Vvirtual_sequences_uvm_pkg__03a__03auvm_typeid__Tz81, vlSymsp);
    }
    get__Vfuncrtn = this->__PVT__m_b_inst;
}

Vvirtual_sequences_uvm_pkg__03a__03auvm_typeid__Tz81::Vvirtual_sequences_uvm_pkg__03a__03auvm_typeid__Tz81(Vvirtual_sequences__Syms* __restrict vlSymsp)
    : Vvirtual_sequences_uvm_pkg__03a__03auvm_typeid_base(vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vvirtual_sequences_uvm_pkg__03a__03auvm_typeid__Tz81::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_typeid__Tz81::_ctor_var_reset(Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vvirtual_sequences_uvm_pkg__03a__03auvm_typeid__Tz81::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vvirtual_sequences_uvm_pkg__03a__03auvm_typeid__Tz81::~Vvirtual_sequences_uvm_pkg__03a__03auvm_typeid__Tz81() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vvirtual_sequences_uvm_pkg__03a__03auvm_typeid__Tz81::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_typeid__Tz81>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vvirtual_sequences_uvm_pkg__03a__03auvm_typeid__Tz81::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vvirtual_sequences_uvm_pkg__03a__03auvm_typeid__Tz81::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vvirtual_sequences_uvm_pkg__03a__03auvm_typeid__Tz81::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vvirtual_sequences_uvm_pkg__03a__03auvm_typeid__Tz81::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vvirtual_sequences_uvm_pkg__03a__03auvm_typeid__Tz81::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vvirtual_sequences_uvm_pkg__03a__03auvm_typeid_base::to_string_middle();
    return (out);
}
