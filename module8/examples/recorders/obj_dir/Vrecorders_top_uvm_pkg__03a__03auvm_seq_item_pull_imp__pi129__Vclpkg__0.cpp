// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrecorders_top.h for the primary calling header

#include "Vrecorders_top__pch.h"

Vrecorders_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi129::Vrecorders_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi129(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequencer__Tz174_TBz174> imp)
    : Vrecorders_top_uvm_pkg__03a__03auvm_port_base__Tz243(vlProcess, vlSymsp, name, imp, 2U, 1U, 1U) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrecorders_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi129::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    this->__PVT__m_imp = imp;
    Vrecorders_top_uvm_pkg__03a__03auvm_port_base__Tz243::__PVT__m_if_mask = 0x000001ffU;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi129::__VnoInFunc_get_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrecorders_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi129::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_seq_item_pull_imp"s;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi129::__VnoInFunc_disable_auto_item_recording(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrecorders_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi129::__VnoInFunc_disable_auto_item_recording\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_imp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 87)->__VnoInFunc_disable_auto_item_recording(vlSymsp);
}

void Vrecorders_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi129::__VnoInFunc_is_auto_item_recording_enabled(Vrecorders_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_auto_item_recording_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrecorders_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi129::__VnoInFunc_is_auto_item_recording_enabled\n"); );
    // Locals
    CData/*0:0*/ __Vtask_is_auto_item_recording_enabled__2__Vfuncout;
    __Vtask_is_auto_item_recording_enabled__2__Vfuncout = 0;
    // Body
    VL_NULL_CHECK(this->__PVT__m_imp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 87)->__VnoInFunc_is_auto_item_recording_enabled(vlSymsp, __Vtask_is_auto_item_recording_enabled__2__Vfuncout);
    is_auto_item_recording_enabled__Vfuncrtn = __Vtask_is_auto_item_recording_enabled__2__Vfuncout;
}

VlCoroutine Vrecorders_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi129::__VnoInFunc_get_next_item(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrecorders_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi129::__VnoInFunc_get_next_item\n"); );
    // Locals
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_item> __Vtask_get_next_item__3__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m_imp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 87)->__VnoInFunc_get_next_item(vlSymsp, __Vtask_get_next_item__3__t);
    t = __Vtask_get_next_item__3__t;
}

VlCoroutine Vrecorders_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi129::__VnoInFunc_try_next_item(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrecorders_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi129::__VnoInFunc_try_next_item\n"); );
    // Locals
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_item> __Vtask_try_next_item__4__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m_imp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 87)->__VnoInFunc_try_next_item(vlSymsp, __Vtask_try_next_item__4__t);
    t = __Vtask_try_next_item__4__t;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi129::__VnoInFunc_item_done(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrecorders_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi129::__VnoInFunc_item_done\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_NULL_CHECK(this->__PVT__m_imp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 87)->__VnoInFunc_item_done(vlProcess, vlSymsp, t);
}

VlCoroutine Vrecorders_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi129::__VnoInFunc_wait_for_sequences(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrecorders_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi129::__VnoInFunc_wait_for_sequences\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m_imp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 87)->__VnoInFunc_wait_for_sequences(vlProcess, vlSymsp);
}

void Vrecorders_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi129::__VnoInFunc_has_do_available(Vrecorders_top__Syms* __restrict vlSymsp, CData/*0:0*/ &has_do_available__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrecorders_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi129::__VnoInFunc_has_do_available\n"); );
    // Locals
    CData/*0:0*/ __Vtask_has_do_available__7__Vfuncout;
    __Vtask_has_do_available__7__Vfuncout = 0;
    // Body
    VL_NULL_CHECK(this->__PVT__m_imp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 87)->__VnoInFunc_has_do_available(vlSymsp, __Vtask_has_do_available__7__Vfuncout);
    has_do_available__Vfuncrtn = __Vtask_has_do_available__7__Vfuncout;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi129::__VnoInFunc_put_response(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrecorders_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi129::__VnoInFunc_put_response\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_imp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 87)->__VnoInFunc_put_response(vlProcess, vlSymsp, t);
}

VlCoroutine Vrecorders_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi129::__VnoInFunc_get(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrecorders_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi129::__VnoInFunc_get\n"); );
    // Locals
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_item> __Vtask_get__9__t;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m_imp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 87)->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__9__t);
    t = __Vtask_get__9__t;
}

VlCoroutine Vrecorders_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi129::__VnoInFunc_peek(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrecorders_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi129::__VnoInFunc_peek\n"); );
    // Locals
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_item> __Vtask_peek__10__t;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m_imp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 87)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__10__t);
    t = __Vtask_peek__10__t;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi129::__VnoInFunc_put(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrecorders_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi129::__VnoInFunc_put\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_imp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 87)->__VnoInFunc_put(vlSymsp, t);
}

void Vrecorders_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi129::_ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrecorders_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi129::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi129>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrecorders_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi129::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vrecorders_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi129::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrecorders_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi129::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vrecorders_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi129::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrecorders_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi129::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_imp:" + VL_TO_STRING(__PVT__m_imp);
    out += ", "+ Vrecorders_top_uvm_pkg__03a__03auvm_port_base__Tz243::to_string_middle();
    return (out);
}
