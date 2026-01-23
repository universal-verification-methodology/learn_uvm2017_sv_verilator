// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varchitecture.h for the primary calling header

#include "Varchitecture__pch.h"

Varchitecture_uvm_pkg__03a__03auvm_put_imp__Tz19_TBz273::Varchitecture_uvm_pkg__03a__03auvm_put_imp__Tz19_TBz273(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz19> imp)
    : Varchitecture_uvm_pkg__03a__03auvm_port_base__Tz240(vlProcess, vlSymsp, name, imp, 2U, 1U, 1U) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Varchitecture_uvm_pkg__03a__03auvm_put_imp__Tz19_TBz273::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    this->__PVT__m_imp = imp;
    Varchitecture_uvm_pkg__03a__03auvm_port_base__Tz240::__PVT__m_if_mask = 0x00000011U;
}

void Varchitecture_uvm_pkg__03a__03auvm_put_imp__Tz19_TBz273::__VnoInFunc_get_type_name(Varchitecture__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Varchitecture_uvm_pkg__03a__03auvm_put_imp__Tz19_TBz273::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_put_imp"s;
}

VlCoroutine Varchitecture_uvm_pkg__03a__03auvm_put_imp__Tz19_TBz273::__VnoInFunc_put(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Varchitecture_uvm_pkg__03a__03auvm_put_imp__Tz19_TBz273::__VnoInFunc_put\n"); );
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m_imp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_imps.svh", 98)->__VnoInFunc_put(vlSymsp, t);
    co_return;}

void Varchitecture_uvm_pkg__03a__03auvm_put_imp__Tz19_TBz273::__VnoInFunc_try_put(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_item> t, CData/*0:0*/ &try_put__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Varchitecture_uvm_pkg__03a__03auvm_put_imp__Tz19_TBz273::__VnoInFunc_try_put\n"); );
    // Locals
    CData/*0:0*/ __Vtask_try_put__2__Vfuncout;
    __Vtask_try_put__2__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_NULL_CHECK(this->__PVT__m_imp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_imps.svh", 98)->__VnoInFunc_try_put(vlProcess, vlSymsp, t, __Vtask_try_put__2__Vfuncout);
    try_put__Vfuncrtn = __Vtask_try_put__2__Vfuncout;
}

void Varchitecture_uvm_pkg__03a__03auvm_put_imp__Tz19_TBz273::__VnoInFunc_can_put(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ &can_put__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Varchitecture_uvm_pkg__03a__03auvm_put_imp__Tz19_TBz273::__VnoInFunc_can_put\n"); );
    // Locals
    CData/*0:0*/ __Vtask_can_put__3__Vfuncout;
    __Vtask_can_put__3__Vfuncout = 0;
    // Body
    VL_NULL_CHECK(this->__PVT__m_imp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_imps.svh", 98)->__VnoInFunc_can_put(vlSymsp, __Vtask_can_put__3__Vfuncout);
    can_put__Vfuncrtn = __Vtask_can_put__3__Vfuncout;
}

void Varchitecture_uvm_pkg__03a__03auvm_put_imp__Tz19_TBz273::_ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Varchitecture_uvm_pkg__03a__03auvm_put_imp__Tz19_TBz273::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Varchitecture_uvm_pkg__03a__03auvm_put_imp__Tz19_TBz273::~Varchitecture_uvm_pkg__03a__03auvm_put_imp__Tz19_TBz273() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Varchitecture_uvm_pkg__03a__03auvm_put_imp__Tz19_TBz273::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_put_imp__Tz19_TBz273>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Varchitecture_uvm_pkg__03a__03auvm_put_imp__Tz19_TBz273::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Varchitecture_uvm_pkg__03a__03auvm_put_imp__Tz19_TBz273::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Varchitecture_uvm_pkg__03a__03auvm_put_imp__Tz19_TBz273::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Varchitecture_uvm_pkg__03a__03auvm_put_imp__Tz19_TBz273::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Varchitecture_uvm_pkg__03a__03auvm_put_imp__Tz19_TBz273::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_imp:" + VL_TO_STRING(__PVT__m_imp);
    out += ", "+ Varchitecture_uvm_pkg__03a__03auvm_port_base__Tz240::to_string_middle();
    return (out);
}
