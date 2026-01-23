// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"

Vdma_uvm_pkg__03a__03auvm_get_peek_imp__Tz126_TBz158::Vdma_uvm_pkg__03a__03auvm_get_peek_imp__Tz126_TBz158(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126> imp)
    : Vdma_uvm_pkg__03a__03auvm_port_base__Tz149(vlProcess, vlSymsp, name, imp, 2U, 1U, 1U) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vdma_uvm_pkg__03a__03auvm_get_peek_imp__Tz126_TBz158::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    this->__PVT__m_imp = imp;
    Vdma_uvm_pkg__03a__03auvm_port_base__Tz149::__PVT__m_if_mask = 0x00000066U;
}

void Vdma_uvm_pkg__03a__03auvm_get_peek_imp__Tz126_TBz158::__VnoInFunc_get_type_name(Vdma__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vdma_uvm_pkg__03a__03auvm_get_peek_imp__Tz126_TBz158::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_get_peek_imp"s;
}

VlCoroutine Vdma_uvm_pkg__03a__03auvm_get_peek_imp__Tz126_TBz158::__VnoInFunc_get(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma___024unit__03a__03aDmaTxn> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vdma_uvm_pkg__03a__03auvm_get_peek_imp__Tz126_TBz158::__VnoInFunc_get\n"); );
    // Locals
    VlClassRef<Vdma___024unit__03a__03aDmaTxn> __Vtask_get__1__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m_imp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_imps.svh", 152)->__VnoInFunc_get(vlSymsp, __Vtask_get__1__t);
    t = __Vtask_get__1__t;
}

VlCoroutine Vdma_uvm_pkg__03a__03auvm_get_peek_imp__Tz126_TBz158::__VnoInFunc_peek(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma___024unit__03a__03aDmaTxn> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vdma_uvm_pkg__03a__03auvm_get_peek_imp__Tz126_TBz158::__VnoInFunc_peek\n"); );
    // Locals
    VlClassRef<Vdma___024unit__03a__03aDmaTxn> __Vtask_peek__2__t;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m_imp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_imps.svh", 152)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__2__t);
    t = __Vtask_peek__2__t;
}

void Vdma_uvm_pkg__03a__03auvm_get_peek_imp__Tz126_TBz158::__VnoInFunc_try_get(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma___024unit__03a__03aDmaTxn> &t, CData/*0:0*/ &try_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vdma_uvm_pkg__03a__03auvm_get_peek_imp__Tz126_TBz158::__VnoInFunc_try_get\n"); );
    // Locals
    CData/*0:0*/ __Vtask_try_get__3__Vfuncout;
    __Vtask_try_get__3__Vfuncout = 0;
    VlClassRef<Vdma___024unit__03a__03aDmaTxn> __Vtask_try_get__3__t;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_NULL_CHECK(this->__PVT__m_imp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_imps.svh", 152)->__VnoInFunc_try_get(vlProcess, vlSymsp, __Vtask_try_get__3__t, __Vtask_try_get__3__Vfuncout);
    t = __Vtask_try_get__3__t;
    try_get__Vfuncrtn = __Vtask_try_get__3__Vfuncout;
}

void Vdma_uvm_pkg__03a__03auvm_get_peek_imp__Tz126_TBz158::__VnoInFunc_can_get(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &can_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vdma_uvm_pkg__03a__03auvm_get_peek_imp__Tz126_TBz158::__VnoInFunc_can_get\n"); );
    // Locals
    CData/*0:0*/ __Vtask_can_get__4__Vfuncout;
    __Vtask_can_get__4__Vfuncout = 0;
    // Body
    VL_NULL_CHECK(this->__PVT__m_imp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_imps.svh", 152)->__VnoInFunc_can_get(vlSymsp, __Vtask_can_get__4__Vfuncout);
    can_get__Vfuncrtn = __Vtask_can_get__4__Vfuncout;
}

void Vdma_uvm_pkg__03a__03auvm_get_peek_imp__Tz126_TBz158::__VnoInFunc_try_peek(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma___024unit__03a__03aDmaTxn> &t, CData/*0:0*/ &try_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vdma_uvm_pkg__03a__03auvm_get_peek_imp__Tz126_TBz158::__VnoInFunc_try_peek\n"); );
    // Locals
    CData/*0:0*/ __Vtask_try_peek__5__Vfuncout;
    __Vtask_try_peek__5__Vfuncout = 0;
    VlClassRef<Vdma___024unit__03a__03aDmaTxn> __Vtask_try_peek__5__t;
    // Body
    VL_NULL_CHECK(this->__PVT__m_imp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_imps.svh", 152)->__VnoInFunc_try_peek(vlSymsp, __Vtask_try_peek__5__t, __Vtask_try_peek__5__Vfuncout);
    t = __Vtask_try_peek__5__t;
    try_peek__Vfuncrtn = __Vtask_try_peek__5__Vfuncout;
}

void Vdma_uvm_pkg__03a__03auvm_get_peek_imp__Tz126_TBz158::__VnoInFunc_can_peek(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &can_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vdma_uvm_pkg__03a__03auvm_get_peek_imp__Tz126_TBz158::__VnoInFunc_can_peek\n"); );
    // Locals
    CData/*0:0*/ __Vtask_can_peek__6__Vfuncout;
    __Vtask_can_peek__6__Vfuncout = 0;
    // Body
    VL_NULL_CHECK(this->__PVT__m_imp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_imps.svh", 152)->__VnoInFunc_can_peek(vlSymsp, __Vtask_can_peek__6__Vfuncout);
    can_peek__Vfuncrtn = __Vtask_can_peek__6__Vfuncout;
}

void Vdma_uvm_pkg__03a__03auvm_get_peek_imp__Tz126_TBz158::_ctor_var_reset(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vdma_uvm_pkg__03a__03auvm_get_peek_imp__Tz126_TBz158::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_get_peek_imp__Tz126_TBz158>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vdma_uvm_pkg__03a__03auvm_get_peek_imp__Tz126_TBz158::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vdma_uvm_pkg__03a__03auvm_get_peek_imp__Tz126_TBz158::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vdma_uvm_pkg__03a__03auvm_get_peek_imp__Tz126_TBz158::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vdma_uvm_pkg__03a__03auvm_get_peek_imp__Tz126_TBz158::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vdma_uvm_pkg__03a__03auvm_get_peek_imp__Tz126_TBz158::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_imp:" + VL_TO_STRING(__PVT__m_imp);
    out += ", "+ Vdma_uvm_pkg__03a__03auvm_port_base__Tz149::to_string_middle();
    return (out);
}
