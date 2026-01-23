// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvirtual_sequences.h for the primary calling header

#include "Vvirtual_sequences__pch.h"

Vvirtual_sequences_uvm_pkg__03a__03auvm_put_imp__Tz15_TBz155::Vvirtual_sequences_uvm_pkg__03a__03auvm_put_imp__Tz15_TBz155(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz15> imp)
    : Vvirtual_sequences_uvm_pkg__03a__03auvm_port_base__Tz127(vlProcess, vlSymsp, name, imp, 2U, 1U, 1U) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vvirtual_sequences_uvm_pkg__03a__03auvm_put_imp__Tz15_TBz155::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    this->__PVT__m_imp = imp;
    Vvirtual_sequences_uvm_pkg__03a__03auvm_port_base__Tz127::__PVT__m_if_mask = 0x00000011U;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_put_imp__Tz15_TBz155::__VnoInFunc_get_type_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vvirtual_sequences_uvm_pkg__03a__03auvm_put_imp__Tz15_TBz155::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_put_imp"s;
}

VlCoroutine Vvirtual_sequences_uvm_pkg__03a__03auvm_put_imp__Tz15_TBz155::__VnoInFunc_put(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vvirtual_sequences_uvm_pkg__03a__03auvm_put_imp__Tz15_TBz155::__VnoInFunc_put\n"); );
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m_imp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_imps.svh", 98)->__VnoInFunc_put(vlSymsp, t);
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_put_imp__Tz15_TBz155::__VnoInFunc_try_put(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence_item> t, CData/*0:0*/ &try_put__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vvirtual_sequences_uvm_pkg__03a__03auvm_put_imp__Tz15_TBz155::__VnoInFunc_try_put\n"); );
    // Locals
    CData/*0:0*/ __Vtask_try_put__2__Vfuncout;
    __Vtask_try_put__2__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_NULL_CHECK(this->__PVT__m_imp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_imps.svh", 98)->__VnoInFunc_try_put(vlProcess, vlSymsp, t, __Vtask_try_put__2__Vfuncout);
    try_put__Vfuncrtn = __Vtask_try_put__2__Vfuncout;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_put_imp__Tz15_TBz155::__VnoInFunc_can_put(Vvirtual_sequences__Syms* __restrict vlSymsp, CData/*0:0*/ &can_put__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vvirtual_sequences_uvm_pkg__03a__03auvm_put_imp__Tz15_TBz155::__VnoInFunc_can_put\n"); );
    // Locals
    CData/*0:0*/ __Vtask_can_put__3__Vfuncout;
    __Vtask_can_put__3__Vfuncout = 0;
    // Body
    VL_NULL_CHECK(this->__PVT__m_imp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_imps.svh", 98)->__VnoInFunc_can_put(vlSymsp, __Vtask_can_put__3__Vfuncout);
    can_put__Vfuncrtn = __Vtask_can_put__3__Vfuncout;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_put_imp__Tz15_TBz155::_ctor_var_reset(Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vvirtual_sequences_uvm_pkg__03a__03auvm_put_imp__Tz15_TBz155::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_put_imp__Tz15_TBz155>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vvirtual_sequences_uvm_pkg__03a__03auvm_put_imp__Tz15_TBz155::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vvirtual_sequences_uvm_pkg__03a__03auvm_put_imp__Tz15_TBz155::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vvirtual_sequences_uvm_pkg__03a__03auvm_put_imp__Tz15_TBz155::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vvirtual_sequences_uvm_pkg__03a__03auvm_put_imp__Tz15_TBz155::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vvirtual_sequences_uvm_pkg__03a__03auvm_put_imp__Tz15_TBz155::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_imp:" + VL_TO_STRING(__PVT__m_imp);
    out += ", "+ Vvirtual_sequences_uvm_pkg__03a__03auvm_port_base__Tz127::to_string_middle();
    return (out);
}
