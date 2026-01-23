// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_simple_register_uvm.h for the primary calling header

#include "Vtest_simple_register_uvm__pch.h"

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource_options__Vclpkg::__VnoInFunc_turn_on_auditing(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource_options__Vclpkg::__VnoInFunc_turn_on_auditing\n"); );
    // Body
    this->__PVT__auditing = 1U;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource_options__Vclpkg::__VnoInFunc_turn_off_auditing(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource_options__Vclpkg::__VnoInFunc_turn_off_auditing\n"); );
    // Body
    this->__PVT__auditing = 0U;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource_options__Vclpkg::__VnoInFunc_is_auditing(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &is_auditing__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource_options__Vclpkg::__VnoInFunc_is_auditing\n"); );
    // Body
    is_auditing__Vfuncrtn = this->__PVT__auditing;
}

Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource_options::Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource_options(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource_options::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource_options::_ctor_var_reset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource_options::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource_options>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource_options::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource_options::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource_options::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource_options::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource_options::to_string_middle\n"); );
    // Body
    std::string out;
    return (out);
}
