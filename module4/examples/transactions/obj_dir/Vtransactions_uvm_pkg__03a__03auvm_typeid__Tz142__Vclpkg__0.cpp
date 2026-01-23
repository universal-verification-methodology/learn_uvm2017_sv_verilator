// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransactions.h for the primary calling header

#include "Vtransactions__pch.h"

void Vtransactions_uvm_pkg__03a__03auvm_typeid__Tz142__Vclpkg::__VnoInFunc_get(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_typeid__Tz142> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtransactions_uvm_pkg__03a__03auvm_typeid__Tz142__Vclpkg::__VnoInFunc_get\n"); );
    // Body
    if ((VlNull{} == this->__PVT__m_b_inst)) {
        this->__PVT__m_b_inst = VL_NEW(Vtransactions_uvm_pkg__03a__03auvm_typeid__Tz142, vlSymsp);
    }
    get__Vfuncrtn = this->__PVT__m_b_inst;
}

Vtransactions_uvm_pkg__03a__03auvm_typeid__Tz142::Vtransactions_uvm_pkg__03a__03auvm_typeid__Tz142(Vtransactions__Syms* __restrict vlSymsp)
    : Vtransactions_uvm_pkg__03a__03auvm_typeid_base(vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtransactions_uvm_pkg__03a__03auvm_typeid__Tz142::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vtransactions_uvm_pkg__03a__03auvm_typeid__Tz142::_ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtransactions_uvm_pkg__03a__03auvm_typeid__Tz142::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_typeid__Tz142>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtransactions_uvm_pkg__03a__03auvm_typeid__Tz142::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtransactions_uvm_pkg__03a__03auvm_typeid__Tz142::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtransactions_uvm_pkg__03a__03auvm_typeid__Tz142::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtransactions_uvm_pkg__03a__03auvm_typeid__Tz142::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtransactions_uvm_pkg__03a__03auvm_typeid__Tz142::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtransactions_uvm_pkg__03a__03auvm_typeid_base::to_string_middle();
    return (out);
}
