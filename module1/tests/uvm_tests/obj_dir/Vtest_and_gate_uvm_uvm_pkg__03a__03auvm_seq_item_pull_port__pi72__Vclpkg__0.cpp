// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_and_gate_uvm.h for the primary calling header

#include "Vtest_and_gate_uvm__pch.h"

Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi72::Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi72(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_component> parent, IData/*31:0*/ min_size, IData/*31:0*/ max_size)
    : Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_port_base__Tz154(vlProcess, vlSymsp, name, parent, 0U, min_size, max_size) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi72::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_port_base__Tz154::__PVT__m_if_mask = 0x000001ffU;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi72::__VnoInFunc_get_type_name(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi72::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_seq_item_pull_port"s;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi72::__VnoInFunc_disable_auto_item_recording(Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi72::__VnoInFunc_disable_auto_item_recording\n"); );
    // Body
    VL_NULL_CHECK(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_port_base__Tz154::__PVT__m_if, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 49)->__VnoInFunc_disable_auto_item_recording(vlSymsp);
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi72::__VnoInFunc_is_auto_item_recording_enabled(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &is_auto_item_recording_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi72::__VnoInFunc_is_auto_item_recording_enabled\n"); );
    // Locals
    CData/*0:0*/ __Vtask_is_auto_item_recording_enabled__2__Vfuncout;
    __Vtask_is_auto_item_recording_enabled__2__Vfuncout = 0;
    // Body
    VL_NULL_CHECK(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_port_base__Tz154::__PVT__m_if, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 49)->__VnoInFunc_is_auto_item_recording_enabled(vlSymsp, __Vtask_is_auto_item_recording_enabled__2__Vfuncout);
    is_auto_item_recording_enabled__Vfuncrtn = __Vtask_is_auto_item_recording_enabled__2__Vfuncout;
}

VlCoroutine Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi72::__VnoInFunc_get_next_item(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi72::__VnoInFunc_get_next_item\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction> __Vtask_get_next_item__3__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_port_base__Tz154::__PVT__m_if, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 49)->__VnoInFunc_get_next_item(vlProcess, vlSymsp, __Vtask_get_next_item__3__t);
    t = __Vtask_get_next_item__3__t;
}

VlCoroutine Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi72::__VnoInFunc_try_next_item(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi72::__VnoInFunc_try_next_item\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction> __Vtask_try_next_item__4__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_port_base__Tz154::__PVT__m_if, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 49)->__VnoInFunc_try_next_item(vlSymsp, __Vtask_try_next_item__4__t);
    t = __Vtask_try_next_item__4__t;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi72::__VnoInFunc_item_done(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi72::__VnoInFunc_item_done\n"); );
    // Body
    VL_NULL_CHECK(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_port_base__Tz154::__PVT__m_if, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 49)->__VnoInFunc_item_done(vlProcess, vlSymsp, t);
}

VlCoroutine Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi72::__VnoInFunc_wait_for_sequences(Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi72::__VnoInFunc_wait_for_sequences\n"); );
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_port_base__Tz154::__PVT__m_if, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 49)->__VnoInFunc_wait_for_sequences(vlSymsp);
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi72::__VnoInFunc_has_do_available(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &has_do_available__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi72::__VnoInFunc_has_do_available\n"); );
    // Locals
    CData/*0:0*/ __Vtask_has_do_available__7__Vfuncout;
    __Vtask_has_do_available__7__Vfuncout = 0;
    // Body
    VL_NULL_CHECK(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_port_base__Tz154::__PVT__m_if, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 49)->__VnoInFunc_has_do_available(vlSymsp, __Vtask_has_do_available__7__Vfuncout);
    has_do_available__Vfuncrtn = __Vtask_has_do_available__7__Vfuncout;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi72::__VnoInFunc_put_response(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi72::__VnoInFunc_put_response\n"); );
    // Body
    VL_NULL_CHECK(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_port_base__Tz154::__PVT__m_if, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 49)->__VnoInFunc_put_response(vlProcess, vlSymsp, t);
}

VlCoroutine Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi72::__VnoInFunc_get(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi72::__VnoInFunc_get\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction> __Vtask_get__9__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_port_base__Tz154::__PVT__m_if, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 49)->__VnoInFunc_get(vlSymsp, __Vtask_get__9__t);
    t = __Vtask_get__9__t;
}

VlCoroutine Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi72::__VnoInFunc_peek(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi72::__VnoInFunc_peek\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction> __Vtask_peek__10__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_port_base__Tz154::__PVT__m_if, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 49)->__VnoInFunc_peek(vlSymsp, __Vtask_peek__10__t);
    t = __Vtask_peek__10__t;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi72::__VnoInFunc_put(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi72::__VnoInFunc_put\n"); );
    // Body
    VL_NULL_CHECK(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_port_base__Tz154::__PVT__m_if, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 49)->__VnoInFunc_put(vlSymsp, t);
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi72::_ctor_var_reset(Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi72::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__print_enabled = 0;
}

std::string VL_TO_STRING(const VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi72>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi72::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi72::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi72::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi72::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi72::to_string_middle\n"); );
    // Body
    std::string out;
    out += "print_enabled:" + VL_TO_STRING(__PVT__print_enabled);
    out += ", "+ Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_port_base__Tz154::to_string_middle();
    return (out);
}
