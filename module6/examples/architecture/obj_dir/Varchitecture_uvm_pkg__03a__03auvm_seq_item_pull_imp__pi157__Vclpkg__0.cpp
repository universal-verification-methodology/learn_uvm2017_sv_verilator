// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varchitecture.h for the primary calling header

#include "Varchitecture__pch.h"

Varchitecture_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi157::Varchitecture_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi157(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequencer__Tz216_TBz216> imp)
    : Varchitecture_uvm_pkg__03a__03auvm_port_base__Tz284(vlProcess, vlSymsp, name, imp, 2U, 1U, 1U) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Varchitecture_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi157::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    this->__PVT__m_imp = imp;
    Varchitecture_uvm_pkg__03a__03auvm_port_base__Tz284::__PVT__m_if_mask = 0x000001ffU;
}

void Varchitecture_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi157::__VnoInFunc_get_type_name(Varchitecture__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Varchitecture_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi157::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_seq_item_pull_imp"s;
}

void Varchitecture_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi157::__VnoInFunc_disable_auto_item_recording(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Varchitecture_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi157::__VnoInFunc_disable_auto_item_recording\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_imp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 87)->__VnoInFunc_disable_auto_item_recording(vlSymsp);
}

void Varchitecture_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi157::__VnoInFunc_is_auto_item_recording_enabled(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ &is_auto_item_recording_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Varchitecture_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi157::__VnoInFunc_is_auto_item_recording_enabled\n"); );
    // Locals
    CData/*0:0*/ __Vtask_is_auto_item_recording_enabled__2__Vfuncout;
    __Vtask_is_auto_item_recording_enabled__2__Vfuncout = 0;
    // Body
    VL_NULL_CHECK(this->__PVT__m_imp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 87)->__VnoInFunc_is_auto_item_recording_enabled(vlSymsp, __Vtask_is_auto_item_recording_enabled__2__Vfuncout);
    is_auto_item_recording_enabled__Vfuncrtn = __Vtask_is_auto_item_recording_enabled__2__Vfuncout;
}

VlCoroutine Varchitecture_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi157::__VnoInFunc_get_next_item(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Varchitecture_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi157::__VnoInFunc_get_next_item\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> __Vtask_get_next_item__3__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m_imp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 87)->__VnoInFunc_get_next_item(vlSymsp, __Vtask_get_next_item__3__t);
    t = __Vtask_get_next_item__3__t;
    co_return;}

VlCoroutine Varchitecture_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi157::__VnoInFunc_try_next_item(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Varchitecture_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi157::__VnoInFunc_try_next_item\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> __Vtask_try_next_item__4__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m_imp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 87)->__VnoInFunc_try_next_item(vlSymsp, __Vtask_try_next_item__4__t);
    t = __Vtask_try_next_item__4__t;
    co_return;}

void Varchitecture_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi157::__VnoInFunc_item_done(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Varchitecture_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi157::__VnoInFunc_item_done\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_NULL_CHECK(this->__PVT__m_imp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 87)->__VnoInFunc_item_done(vlProcess, vlSymsp, t);
}

VlCoroutine Varchitecture_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi157::__VnoInFunc_wait_for_sequences(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Varchitecture_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi157::__VnoInFunc_wait_for_sequences\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m_imp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 87)->__VnoInFunc_wait_for_sequences(vlProcess, vlSymsp);
    co_return;}

void Varchitecture_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi157::__VnoInFunc_has_do_available(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ &has_do_available__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Varchitecture_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi157::__VnoInFunc_has_do_available\n"); );
    // Locals
    CData/*0:0*/ __Vtask_has_do_available__7__Vfuncout;
    __Vtask_has_do_available__7__Vfuncout = 0;
    // Body
    VL_NULL_CHECK(this->__PVT__m_imp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 87)->__VnoInFunc_has_do_available(vlSymsp, __Vtask_has_do_available__7__Vfuncout);
    has_do_available__Vfuncrtn = __Vtask_has_do_available__7__Vfuncout;
}

void Varchitecture_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi157::__VnoInFunc_put_response(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Varchitecture_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi157::__VnoInFunc_put_response\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_imp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 87)->__VnoInFunc_put_response(vlProcess, vlSymsp, t);
}

VlCoroutine Varchitecture_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi157::__VnoInFunc_get(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Varchitecture_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi157::__VnoInFunc_get\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> __Vtask_get__9__t;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m_imp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 87)->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__9__t);
    t = __Vtask_get__9__t;
    co_return;}

VlCoroutine Varchitecture_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi157::__VnoInFunc_peek(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Varchitecture_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi157::__VnoInFunc_peek\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> __Vtask_peek__10__t;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m_imp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 87)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__10__t);
    t = __Vtask_peek__10__t;
    co_return;}

void Varchitecture_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi157::__VnoInFunc_put(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Varchitecture_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi157::__VnoInFunc_put\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_imp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 87)->__VnoInFunc_put(vlSymsp, t);
}

void Varchitecture_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi157::_ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Varchitecture_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi157::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Varchitecture_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi157::~Varchitecture_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi157() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Varchitecture_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi157::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi157>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Varchitecture_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi157::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Varchitecture_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi157::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Varchitecture_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi157::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Varchitecture_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi157::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Varchitecture_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi157::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_imp:" + VL_TO_STRING(__PVT__m_imp);
    out += ", "+ Varchitecture_uvm_pkg__03a__03auvm_port_base__Tz284::to_string_middle();
    return (out);
}
