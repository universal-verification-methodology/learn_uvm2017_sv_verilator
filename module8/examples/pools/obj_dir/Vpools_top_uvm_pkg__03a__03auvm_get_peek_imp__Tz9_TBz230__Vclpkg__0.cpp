// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpools_top.h for the primary calling header

#include "Vpools_top__pch.h"

Vpools_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz9_TBz230::Vpools_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz9_TBz230(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz9> imp)
    : Vpools_top_uvm_pkg__03a__03auvm_port_base__Tz196(vlProcess, vlSymsp, name, imp, 2U, 1U, 1U) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vpools_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz9_TBz230::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    this->__PVT__m_imp = imp;
    Vpools_top_uvm_pkg__03a__03auvm_port_base__Tz196::__PVT__m_if_mask = 0x00000066U;
}

void Vpools_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz9_TBz230::__VnoInFunc_get_type_name(Vpools_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vpools_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz9_TBz230::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_get_peek_imp"s;
}

VlCoroutine Vpools_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz9_TBz230::__VnoInFunc_get(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vpools_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz9_TBz230::__VnoInFunc_get\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_sequence_item> __Vtask_get__1__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m_imp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_imps.svh", 152)->__VnoInFunc_get(vlSymsp, __Vtask_get__1__t);
    t = __Vtask_get__1__t;
}

VlCoroutine Vpools_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz9_TBz230::__VnoInFunc_peek(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vpools_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz9_TBz230::__VnoInFunc_peek\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_sequence_item> __Vtask_peek__2__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m_imp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_imps.svh", 152)->__VnoInFunc_peek(vlSymsp, __Vtask_peek__2__t);
    t = __Vtask_peek__2__t;
}

void Vpools_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz9_TBz230::__VnoInFunc_try_get(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_sequence_item> &t, CData/*0:0*/ &try_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vpools_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz9_TBz230::__VnoInFunc_try_get\n"); );
    // Locals
    CData/*0:0*/ __Vtask_try_get__3__Vfuncout;
    __Vtask_try_get__3__Vfuncout = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_sequence_item> __Vtask_try_get__3__t;
    // Body
    VL_NULL_CHECK(this->__PVT__m_imp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_imps.svh", 152)->__VnoInFunc_try_get(vlSymsp, __Vtask_try_get__3__t, __Vtask_try_get__3__Vfuncout);
    t = __Vtask_try_get__3__t;
    try_get__Vfuncrtn = __Vtask_try_get__3__Vfuncout;
}

void Vpools_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz9_TBz230::__VnoInFunc_can_get(Vpools_top__Syms* __restrict vlSymsp, CData/*0:0*/ &can_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vpools_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz9_TBz230::__VnoInFunc_can_get\n"); );
    // Locals
    CData/*0:0*/ __Vtask_can_get__4__Vfuncout;
    __Vtask_can_get__4__Vfuncout = 0;
    // Body
    VL_NULL_CHECK(this->__PVT__m_imp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_imps.svh", 152)->__VnoInFunc_can_get(vlSymsp, __Vtask_can_get__4__Vfuncout);
    can_get__Vfuncrtn = __Vtask_can_get__4__Vfuncout;
}

void Vpools_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz9_TBz230::__VnoInFunc_try_peek(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_sequence_item> &t, CData/*0:0*/ &try_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vpools_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz9_TBz230::__VnoInFunc_try_peek\n"); );
    // Locals
    CData/*0:0*/ __Vtask_try_peek__5__Vfuncout;
    __Vtask_try_peek__5__Vfuncout = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_sequence_item> __Vtask_try_peek__5__t;
    // Body
    VL_NULL_CHECK(this->__PVT__m_imp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_imps.svh", 152)->__VnoInFunc_try_peek(vlSymsp, __Vtask_try_peek__5__t, __Vtask_try_peek__5__Vfuncout);
    t = __Vtask_try_peek__5__t;
    try_peek__Vfuncrtn = __Vtask_try_peek__5__Vfuncout;
}

void Vpools_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz9_TBz230::__VnoInFunc_can_peek(Vpools_top__Syms* __restrict vlSymsp, CData/*0:0*/ &can_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vpools_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz9_TBz230::__VnoInFunc_can_peek\n"); );
    // Locals
    CData/*0:0*/ __Vtask_can_peek__6__Vfuncout;
    __Vtask_can_peek__6__Vfuncout = 0;
    // Body
    VL_NULL_CHECK(this->__PVT__m_imp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_imps.svh", 152)->__VnoInFunc_can_peek(vlSymsp, __Vtask_can_peek__6__Vfuncout);
    can_peek__Vfuncrtn = __Vtask_can_peek__6__Vfuncout;
}

void Vpools_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz9_TBz230::_ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vpools_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz9_TBz230::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz9_TBz230>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vpools_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz9_TBz230::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vpools_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz9_TBz230::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vpools_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz9_TBz230::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vpools_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz9_TBz230::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vpools_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz9_TBz230::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_imp:" + VL_TO_STRING(__PVT__m_imp);
    out += ", "+ Vpools_top_uvm_pkg__03a__03auvm_port_base__Tz196::to_string_middle();
    return (out);
}
