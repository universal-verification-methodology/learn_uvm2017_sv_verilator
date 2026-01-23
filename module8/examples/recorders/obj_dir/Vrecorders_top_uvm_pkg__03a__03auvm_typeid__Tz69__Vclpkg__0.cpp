// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrecorders_top.h for the primary calling header

#include "Vrecorders_top__pch.h"

void Vrecorders_top_uvm_pkg__03a__03auvm_typeid__Tz69__Vclpkg::__VnoInFunc_get(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_typeid__Tz69> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vrecorders_top_uvm_pkg__03a__03auvm_typeid__Tz69__Vclpkg::__VnoInFunc_get\n"); );
    // Body
    if ((VlNull{} == this->__PVT__m_b_inst)) {
        this->__PVT__m_b_inst = VL_NEW(Vrecorders_top_uvm_pkg__03a__03auvm_typeid__Tz69, vlSymsp);
    }
    get__Vfuncrtn = this->__PVT__m_b_inst;
}

Vrecorders_top_uvm_pkg__03a__03auvm_typeid__Tz69::Vrecorders_top_uvm_pkg__03a__03auvm_typeid__Tz69(Vrecorders_top__Syms* __restrict vlSymsp)
    : Vrecorders_top_uvm_pkg__03a__03auvm_typeid_base(vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrecorders_top_uvm_pkg__03a__03auvm_typeid__Tz69::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_typeid__Tz69::_ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrecorders_top_uvm_pkg__03a__03auvm_typeid__Tz69::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vrecorders_top_uvm_pkg__03a__03auvm_typeid__Tz69::~Vrecorders_top_uvm_pkg__03a__03auvm_typeid__Tz69() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrecorders_top_uvm_pkg__03a__03auvm_typeid__Tz69::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_typeid__Tz69>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrecorders_top_uvm_pkg__03a__03auvm_typeid__Tz69::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vrecorders_top_uvm_pkg__03a__03auvm_typeid__Tz69::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrecorders_top_uvm_pkg__03a__03auvm_typeid__Tz69::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vrecorders_top_uvm_pkg__03a__03auvm_typeid__Tz69::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrecorders_top_uvm_pkg__03a__03auvm_typeid__Tz69::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vrecorders_top_uvm_pkg__03a__03auvm_typeid_base::to_string_middle();
    return (out);
}
