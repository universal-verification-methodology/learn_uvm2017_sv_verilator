// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclass_hierarchy.h for the primary calling header

#include "Vclass_hierarchy__pch.h"

Vclass_hierarchy_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz169::Vclass_hierarchy_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz169(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1> imp)
    : Vclass_hierarchy_uvm_pkg__03a__03auvm_port_base__Tz28(vlProcess, vlSymsp, name, imp, 2U, 1U, 1U) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vclass_hierarchy_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz169::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    this->__PVT__m_imp = imp;
    Vclass_hierarchy_uvm_pkg__03a__03auvm_port_base__Tz28::__PVT__m_if_mask = 0x00000066U;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz169::__VnoInFunc_get_type_name(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vclass_hierarchy_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz169::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_get_peek_imp"s;
}

VlCoroutine Vclass_hierarchy_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz169::__VnoInFunc_get(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy___024unit__03a__03aMyTransaction> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vclass_hierarchy_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz169::__VnoInFunc_get\n"); );
    // Locals
    VlClassRef<Vclass_hierarchy___024unit__03a__03aMyTransaction> __Vtask_get__1__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m_imp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_imps.svh", 152)->__VnoInFunc_get(vlSymsp, __Vtask_get__1__t);
    t = __Vtask_get__1__t;
}

VlCoroutine Vclass_hierarchy_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz169::__VnoInFunc_peek(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy___024unit__03a__03aMyTransaction> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vclass_hierarchy_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz169::__VnoInFunc_peek\n"); );
    // Locals
    VlClassRef<Vclass_hierarchy___024unit__03a__03aMyTransaction> __Vtask_peek__2__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m_imp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_imps.svh", 152)->__VnoInFunc_peek(vlSymsp, __Vtask_peek__2__t);
    t = __Vtask_peek__2__t;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz169::__VnoInFunc_try_get(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy___024unit__03a__03aMyTransaction> &t, CData/*0:0*/ &try_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vclass_hierarchy_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz169::__VnoInFunc_try_get\n"); );
    // Locals
    CData/*0:0*/ __Vtask_try_get__3__Vfuncout;
    __Vtask_try_get__3__Vfuncout = 0;
    VlClassRef<Vclass_hierarchy___024unit__03a__03aMyTransaction> __Vtask_try_get__3__t;
    // Body
    VL_NULL_CHECK(this->__PVT__m_imp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_imps.svh", 152)->__VnoInFunc_try_get(vlSymsp, __Vtask_try_get__3__t, __Vtask_try_get__3__Vfuncout);
    t = __Vtask_try_get__3__t;
    try_get__Vfuncrtn = __Vtask_try_get__3__Vfuncout;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz169::__VnoInFunc_can_get(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*0:0*/ &can_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vclass_hierarchy_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz169::__VnoInFunc_can_get\n"); );
    // Locals
    CData/*0:0*/ __Vtask_can_get__4__Vfuncout;
    __Vtask_can_get__4__Vfuncout = 0;
    // Body
    VL_NULL_CHECK(this->__PVT__m_imp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_imps.svh", 152)->__VnoInFunc_can_get(vlSymsp, __Vtask_can_get__4__Vfuncout);
    can_get__Vfuncrtn = __Vtask_can_get__4__Vfuncout;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz169::__VnoInFunc_try_peek(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy___024unit__03a__03aMyTransaction> &t, CData/*0:0*/ &try_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vclass_hierarchy_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz169::__VnoInFunc_try_peek\n"); );
    // Locals
    CData/*0:0*/ __Vtask_try_peek__5__Vfuncout;
    __Vtask_try_peek__5__Vfuncout = 0;
    VlClassRef<Vclass_hierarchy___024unit__03a__03aMyTransaction> __Vtask_try_peek__5__t;
    // Body
    VL_NULL_CHECK(this->__PVT__m_imp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_imps.svh", 152)->__VnoInFunc_try_peek(vlSymsp, __Vtask_try_peek__5__t, __Vtask_try_peek__5__Vfuncout);
    t = __Vtask_try_peek__5__t;
    try_peek__Vfuncrtn = __Vtask_try_peek__5__Vfuncout;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz169::__VnoInFunc_can_peek(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*0:0*/ &can_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vclass_hierarchy_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz169::__VnoInFunc_can_peek\n"); );
    // Locals
    CData/*0:0*/ __Vtask_can_peek__6__Vfuncout;
    __Vtask_can_peek__6__Vfuncout = 0;
    // Body
    VL_NULL_CHECK(this->__PVT__m_imp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_imps.svh", 152)->__VnoInFunc_can_peek(vlSymsp, __Vtask_can_peek__6__Vfuncout);
    can_peek__Vfuncrtn = __Vtask_can_peek__6__Vfuncout;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz169::_ctor_var_reset(Vclass_hierarchy__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vclass_hierarchy_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz169::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz169>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vclass_hierarchy_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz169::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vclass_hierarchy_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz169::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vclass_hierarchy_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz169::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vclass_hierarchy_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz169::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vclass_hierarchy_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz169::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_imp:" + VL_TO_STRING(__PVT__m_imp);
    out += ", "+ Vclass_hierarchy_uvm_pkg__03a__03auvm_port_base__Tz28::to_string_middle();
    return (out);
}
