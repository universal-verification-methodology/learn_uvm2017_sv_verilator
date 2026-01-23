// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varchitecture.h for the primary calling header

#include "Varchitecture__pch.h"

void Varchitecture_uvm_pkg__03a__03auvm_typeid__Tz71__Vclpkg::__VnoInFunc_get(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_typeid__Tz71> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Varchitecture_uvm_pkg__03a__03auvm_typeid__Tz71__Vclpkg::__VnoInFunc_get\n"); );
    // Body
    if ((VlNull{} == this->__PVT__m_b_inst)) {
        this->__PVT__m_b_inst = VL_NEW(Varchitecture_uvm_pkg__03a__03auvm_typeid__Tz71, vlSymsp);
    }
    get__Vfuncrtn = this->__PVT__m_b_inst;
}

Varchitecture_uvm_pkg__03a__03auvm_typeid__Tz71::Varchitecture_uvm_pkg__03a__03auvm_typeid__Tz71(Varchitecture__Syms* __restrict vlSymsp)
    : Varchitecture_uvm_pkg__03a__03auvm_typeid_base(vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Varchitecture_uvm_pkg__03a__03auvm_typeid__Tz71::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Varchitecture_uvm_pkg__03a__03auvm_typeid__Tz71::_ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Varchitecture_uvm_pkg__03a__03auvm_typeid__Tz71::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Varchitecture_uvm_pkg__03a__03auvm_typeid__Tz71::~Varchitecture_uvm_pkg__03a__03auvm_typeid__Tz71() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Varchitecture_uvm_pkg__03a__03auvm_typeid__Tz71::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_typeid__Tz71>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Varchitecture_uvm_pkg__03a__03auvm_typeid__Tz71::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Varchitecture_uvm_pkg__03a__03auvm_typeid__Tz71::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Varchitecture_uvm_pkg__03a__03auvm_typeid__Tz71::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Varchitecture_uvm_pkg__03a__03auvm_typeid__Tz71::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Varchitecture_uvm_pkg__03a__03auvm_typeid__Tz71::to_string_middle\n"); );
    // Body
    std::string out;
    out += Varchitecture_uvm_pkg__03a__03auvm_typeid_base::to_string_middle();
    return (out);
}
