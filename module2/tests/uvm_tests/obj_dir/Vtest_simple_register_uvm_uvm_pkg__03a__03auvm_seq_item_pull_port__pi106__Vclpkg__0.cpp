// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_simple_register_uvm.h for the primary calling header

#include "Vtest_simple_register_uvm__pch.h"

Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi106::Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi106(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component> parent, IData/*31:0*/ min_size, IData/*31:0*/ max_size)
    : Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_port_base__Tz203(vlProcess, vlSymsp, name, parent, 0U, min_size, max_size) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi106::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_port_base__Tz203::__PVT__m_if_mask = 0x000001ffU;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi106::__VnoInFunc_get_type_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi106::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_seq_item_pull_port"s;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi106::__VnoInFunc_disable_auto_item_recording(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi106::__VnoInFunc_disable_auto_item_recording\n"); );
    // Body
    VL_NULL_CHECK(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_port_base__Tz203::__PVT__m_if, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 49)->__VnoInFunc_disable_auto_item_recording(vlSymsp);
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi106::__VnoInFunc_is_auto_item_recording_enabled(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &is_auto_item_recording_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi106::__VnoInFunc_is_auto_item_recording_enabled\n"); );
    // Locals
    CData/*0:0*/ __Vtask_is_auto_item_recording_enabled__2__Vfuncout;
    __Vtask_is_auto_item_recording_enabled__2__Vfuncout = 0;
    // Body
    VL_NULL_CHECK(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_port_base__Tz203::__PVT__m_if, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 49)->__VnoInFunc_is_auto_item_recording_enabled(vlSymsp, __Vtask_is_auto_item_recording_enabled__2__Vfuncout);
    is_auto_item_recording_enabled__Vfuncrtn = __Vtask_is_auto_item_recording_enabled__2__Vfuncout;
}

VlCoroutine Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi106::__VnoInFunc_get_next_item(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi106::__VnoInFunc_get_next_item\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_item> __Vtask_get_next_item__3__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_port_base__Tz203::__PVT__m_if, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 49)->__VnoInFunc_get_next_item(vlSymsp, __Vtask_get_next_item__3__t);
    t = __Vtask_get_next_item__3__t;
    co_return;}

VlCoroutine Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi106::__VnoInFunc_try_next_item(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi106::__VnoInFunc_try_next_item\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_item> __Vtask_try_next_item__4__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_port_base__Tz203::__PVT__m_if, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 49)->__VnoInFunc_try_next_item(vlSymsp, __Vtask_try_next_item__4__t);
    t = __Vtask_try_next_item__4__t;
    co_return;}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi106::__VnoInFunc_item_done(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi106::__VnoInFunc_item_done\n"); );
    // Body
    VL_NULL_CHECK(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_port_base__Tz203::__PVT__m_if, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 49)->__VnoInFunc_item_done(vlSymsp, t);
}

VlCoroutine Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi106::__VnoInFunc_wait_for_sequences(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi106::__VnoInFunc_wait_for_sequences\n"); );
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_port_base__Tz203::__PVT__m_if, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 49)->__VnoInFunc_wait_for_sequences(vlSymsp);
    co_return;}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi106::__VnoInFunc_has_do_available(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &has_do_available__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi106::__VnoInFunc_has_do_available\n"); );
    // Locals
    CData/*0:0*/ __Vtask_has_do_available__7__Vfuncout;
    __Vtask_has_do_available__7__Vfuncout = 0;
    // Body
    VL_NULL_CHECK(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_port_base__Tz203::__PVT__m_if, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 49)->__VnoInFunc_has_do_available(vlSymsp, __Vtask_has_do_available__7__Vfuncout);
    has_do_available__Vfuncrtn = __Vtask_has_do_available__7__Vfuncout;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi106::__VnoInFunc_put_response(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi106::__VnoInFunc_put_response\n"); );
    // Body
    VL_NULL_CHECK(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_port_base__Tz203::__PVT__m_if, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 49)->__VnoInFunc_put_response(vlSymsp, t);
}

VlCoroutine Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi106::__VnoInFunc_get(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi106::__VnoInFunc_get\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_item> __Vtask_get__9__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_port_base__Tz203::__PVT__m_if, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 49)->__VnoInFunc_get(vlSymsp, __Vtask_get__9__t);
    t = __Vtask_get__9__t;
    co_return;}

VlCoroutine Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi106::__VnoInFunc_peek(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi106::__VnoInFunc_peek\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_item> __Vtask_peek__10__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_port_base__Tz203::__PVT__m_if, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 49)->__VnoInFunc_peek(vlSymsp, __Vtask_peek__10__t);
    t = __Vtask_peek__10__t;
    co_return;}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi106::__VnoInFunc_put(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi106::__VnoInFunc_put\n"); );
    // Body
    VL_NULL_CHECK(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_port_base__Tz203::__PVT__m_if, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 49)->__VnoInFunc_put(vlSymsp, t);
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi106::_ctor_var_reset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi106::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__print_enabled = 0;
}

Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi106::~Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi106() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi106::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi106>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi106::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi106::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi106::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi106::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi106::to_string_middle\n"); );
    // Body
    std::string out;
    out += "print_enabled:" + VL_TO_STRING(__PVT__print_enabled);
    out += ", "+ Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_port_base__Tz203::to_string_middle();
    return (out);
}
