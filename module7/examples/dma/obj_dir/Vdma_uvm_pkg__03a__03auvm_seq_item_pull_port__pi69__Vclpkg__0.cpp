// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"

Vdma_uvm_pkg__03a__03auvm_seq_item_pull_port__pi69::Vdma_uvm_pkg__03a__03auvm_seq_item_pull_port__pi69(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> parent, IData/*31:0*/ min_size, IData/*31:0*/ max_size)
    : Vdma_uvm_pkg__03a__03auvm_port_base__Tz141(vlProcess, vlSymsp, name, parent, 0U, min_size, max_size) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_seq_item_pull_port__pi69::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    Vdma_uvm_pkg__03a__03auvm_port_base__Tz141::__PVT__m_if_mask = 0x000001ffU;
}

void Vdma_uvm_pkg__03a__03auvm_seq_item_pull_port__pi69::__VnoInFunc_get_type_name(Vdma__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_seq_item_pull_port__pi69::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_seq_item_pull_port"s;
}

void Vdma_uvm_pkg__03a__03auvm_seq_item_pull_port__pi69::__VnoInFunc_disable_auto_item_recording(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_seq_item_pull_port__pi69::__VnoInFunc_disable_auto_item_recording\n"); );
    // Body
    VL_NULL_CHECK(Vdma_uvm_pkg__03a__03auvm_port_base__Tz141::__PVT__m_if, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 49)->__VnoInFunc_disable_auto_item_recording(vlSymsp);
}

void Vdma_uvm_pkg__03a__03auvm_seq_item_pull_port__pi69::__VnoInFunc_is_auto_item_recording_enabled(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &is_auto_item_recording_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_seq_item_pull_port__pi69::__VnoInFunc_is_auto_item_recording_enabled\n"); );
    // Locals
    CData/*0:0*/ __Vtask_is_auto_item_recording_enabled__2__Vfuncout;
    __Vtask_is_auto_item_recording_enabled__2__Vfuncout = 0;
    // Body
    VL_NULL_CHECK(Vdma_uvm_pkg__03a__03auvm_port_base__Tz141::__PVT__m_if, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 49)->__VnoInFunc_is_auto_item_recording_enabled(vlSymsp, __Vtask_is_auto_item_recording_enabled__2__Vfuncout);
    is_auto_item_recording_enabled__Vfuncrtn = __Vtask_is_auto_item_recording_enabled__2__Vfuncout;
}

VlCoroutine Vdma_uvm_pkg__03a__03auvm_seq_item_pull_port__pi69::__VnoInFunc_get_next_item(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma___024unit__03a__03aDmaTxn> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_seq_item_pull_port__pi69::__VnoInFunc_get_next_item\n"); );
    // Locals
    VlClassRef<Vdma___024unit__03a__03aDmaTxn> __Vtask_get_next_item__3__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(Vdma_uvm_pkg__03a__03auvm_port_base__Tz141::__PVT__m_if, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 49)->__VnoInFunc_get_next_item(vlProcess, vlSymsp, __Vtask_get_next_item__3__t);
    t = __Vtask_get_next_item__3__t;
    co_return;}

VlCoroutine Vdma_uvm_pkg__03a__03auvm_seq_item_pull_port__pi69::__VnoInFunc_try_next_item(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma___024unit__03a__03aDmaTxn> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_seq_item_pull_port__pi69::__VnoInFunc_try_next_item\n"); );
    // Locals
    VlClassRef<Vdma___024unit__03a__03aDmaTxn> __Vtask_try_next_item__4__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(Vdma_uvm_pkg__03a__03auvm_port_base__Tz141::__PVT__m_if, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 49)->__VnoInFunc_try_next_item(vlSymsp, __Vtask_try_next_item__4__t);
    t = __Vtask_try_next_item__4__t;
    co_return;}

void Vdma_uvm_pkg__03a__03auvm_seq_item_pull_port__pi69::__VnoInFunc_item_done(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma___024unit__03a__03aDmaTxn> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_seq_item_pull_port__pi69::__VnoInFunc_item_done\n"); );
    // Body
    VL_NULL_CHECK(Vdma_uvm_pkg__03a__03auvm_port_base__Tz141::__PVT__m_if, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 49)->__VnoInFunc_item_done(vlProcess, vlSymsp, t);
}

VlCoroutine Vdma_uvm_pkg__03a__03auvm_seq_item_pull_port__pi69::__VnoInFunc_wait_for_sequences(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_seq_item_pull_port__pi69::__VnoInFunc_wait_for_sequences\n"); );
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(Vdma_uvm_pkg__03a__03auvm_port_base__Tz141::__PVT__m_if, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 49)->__VnoInFunc_wait_for_sequences(vlSymsp);
    co_return;}

void Vdma_uvm_pkg__03a__03auvm_seq_item_pull_port__pi69::__VnoInFunc_has_do_available(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &has_do_available__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_seq_item_pull_port__pi69::__VnoInFunc_has_do_available\n"); );
    // Locals
    CData/*0:0*/ __Vtask_has_do_available__7__Vfuncout;
    __Vtask_has_do_available__7__Vfuncout = 0;
    // Body
    VL_NULL_CHECK(Vdma_uvm_pkg__03a__03auvm_port_base__Tz141::__PVT__m_if, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 49)->__VnoInFunc_has_do_available(vlSymsp, __Vtask_has_do_available__7__Vfuncout);
    has_do_available__Vfuncrtn = __Vtask_has_do_available__7__Vfuncout;
}

void Vdma_uvm_pkg__03a__03auvm_seq_item_pull_port__pi69::__VnoInFunc_put_response(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma___024unit__03a__03aDmaTxn> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_seq_item_pull_port__pi69::__VnoInFunc_put_response\n"); );
    // Body
    VL_NULL_CHECK(Vdma_uvm_pkg__03a__03auvm_port_base__Tz141::__PVT__m_if, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 49)->__VnoInFunc_put_response(vlProcess, vlSymsp, t);
}

VlCoroutine Vdma_uvm_pkg__03a__03auvm_seq_item_pull_port__pi69::__VnoInFunc_get(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma___024unit__03a__03aDmaTxn> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_seq_item_pull_port__pi69::__VnoInFunc_get\n"); );
    // Locals
    VlClassRef<Vdma___024unit__03a__03aDmaTxn> __Vtask_get__9__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(Vdma_uvm_pkg__03a__03auvm_port_base__Tz141::__PVT__m_if, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 49)->__VnoInFunc_get(vlSymsp, __Vtask_get__9__t);
    t = __Vtask_get__9__t;
    co_return;}

VlCoroutine Vdma_uvm_pkg__03a__03auvm_seq_item_pull_port__pi69::__VnoInFunc_peek(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma___024unit__03a__03aDmaTxn> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_seq_item_pull_port__pi69::__VnoInFunc_peek\n"); );
    // Locals
    VlClassRef<Vdma___024unit__03a__03aDmaTxn> __Vtask_peek__10__t;
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(Vdma_uvm_pkg__03a__03auvm_port_base__Tz141::__PVT__m_if, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 49)->__VnoInFunc_peek(vlSymsp, __Vtask_peek__10__t);
    t = __Vtask_peek__10__t;
    co_return;}

void Vdma_uvm_pkg__03a__03auvm_seq_item_pull_port__pi69::__VnoInFunc_put(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma___024unit__03a__03aDmaTxn> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_seq_item_pull_port__pi69::__VnoInFunc_put\n"); );
    // Body
    VL_NULL_CHECK(Vdma_uvm_pkg__03a__03auvm_port_base__Tz141::__PVT__m_if, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_sqr_connections.svh", 49)->__VnoInFunc_put(vlSymsp, t);
}

void Vdma_uvm_pkg__03a__03auvm_seq_item_pull_port__pi69::_ctor_var_reset(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_seq_item_pull_port__pi69::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__print_enabled = 0;
}

Vdma_uvm_pkg__03a__03auvm_seq_item_pull_port__pi69::~Vdma_uvm_pkg__03a__03auvm_seq_item_pull_port__pi69() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_seq_item_pull_port__pi69::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_seq_item_pull_port__pi69>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_seq_item_pull_port__pi69::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vdma_uvm_pkg__03a__03auvm_seq_item_pull_port__pi69::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_seq_item_pull_port__pi69::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vdma_uvm_pkg__03a__03auvm_seq_item_pull_port__pi69::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_seq_item_pull_port__pi69::to_string_middle\n"); );
    // Body
    std::string out;
    out += "print_enabled:" + VL_TO_STRING(__PVT__print_enabled);
    out += ", "+ Vdma_uvm_pkg__03a__03auvm_port_base__Tz141::to_string_middle();
    return (out);
}
