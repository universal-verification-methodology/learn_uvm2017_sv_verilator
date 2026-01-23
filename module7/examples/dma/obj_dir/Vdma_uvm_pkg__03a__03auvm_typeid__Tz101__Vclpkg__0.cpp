// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"

void Vdma_uvm_pkg__03a__03auvm_typeid__Tz101__Vclpkg::__VnoInFunc_get(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_typeid__Tz101> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03auvm_typeid__Tz101__Vclpkg::__VnoInFunc_get\n"); );
    // Body
    if ((VlNull{} == this->__PVT__m_b_inst)) {
        this->__PVT__m_b_inst = VL_NEW(Vdma_uvm_pkg__03a__03auvm_typeid__Tz101, vlSymsp);
    }
    get__Vfuncrtn = this->__PVT__m_b_inst;
}

Vdma_uvm_pkg__03a__03auvm_typeid__Tz101::Vdma_uvm_pkg__03a__03auvm_typeid__Tz101(Vdma__Syms* __restrict vlSymsp)
    : Vdma_uvm_pkg__03a__03auvm_typeid_base(vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vdma_uvm_pkg__03a__03auvm_typeid__Tz101::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vdma_uvm_pkg__03a__03auvm_typeid__Tz101::_ctor_var_reset(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vdma_uvm_pkg__03a__03auvm_typeid__Tz101::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vdma_uvm_pkg__03a__03auvm_typeid__Tz101::~Vdma_uvm_pkg__03a__03auvm_typeid__Tz101() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vdma_uvm_pkg__03a__03auvm_typeid__Tz101::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_typeid__Tz101>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vdma_uvm_pkg__03a__03auvm_typeid__Tz101::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vdma_uvm_pkg__03a__03auvm_typeid__Tz101::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vdma_uvm_pkg__03a__03auvm_typeid__Tz101::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vdma_uvm_pkg__03a__03auvm_typeid__Tz101::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vdma_uvm_pkg__03a__03auvm_typeid__Tz101::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vdma_uvm_pkg__03a__03auvm_typeid_base::to_string_middle();
    return (out);
}
