// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_and_gate_uvm.h for the primary calling header

#include "Vtest_and_gate_uvm__pch.h"

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typeid__Tz67__Vclpkg::__VnoInFunc_get(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typeid__Tz67> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typeid__Tz67__Vclpkg::__VnoInFunc_get\n"); );
    // Body
    if ((VlNull{} == this->__PVT__m_b_inst)) {
        this->__PVT__m_b_inst = VL_NEW(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typeid__Tz67, vlSymsp);
    }
    get__Vfuncrtn = this->__PVT__m_b_inst;
}

Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typeid__Tz67::Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typeid__Tz67(Vtest_and_gate_uvm__Syms* __restrict vlSymsp)
    : Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typeid_base(vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typeid__Tz67::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typeid__Tz67::_ctor_var_reset(Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typeid__Tz67::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typeid__Tz67::~Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typeid__Tz67() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typeid__Tz67::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typeid__Tz67>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typeid__Tz67::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typeid__Tz67::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typeid__Tz67::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typeid__Tz67::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typeid__Tz67::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typeid_base::to_string_middle();
    return (out);
}
