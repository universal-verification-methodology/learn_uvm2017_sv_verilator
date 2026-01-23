// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_and_gate_uvm.h for the primary calling header

#include "Vtest_and_gate_uvm__pch.h"

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_resource_db_options__Vclpkg::__VnoInFunc_turn_on_tracing(Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_resource_db_options__Vclpkg::__VnoInFunc_turn_on_tracing\n"); );
    // Body
    if ((1U & (~ (IData)(this->__PVT__ready)))) {
        this->__VnoInFunc_init(vlSymsp);
    }
    this->__PVT__tracing = 1U;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_resource_db_options__Vclpkg::__VnoInFunc_turn_off_tracing(Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_resource_db_options__Vclpkg::__VnoInFunc_turn_off_tracing\n"); );
    // Body
    if ((1U & (~ (IData)(this->__PVT__ready)))) {
        this->__VnoInFunc_init(vlSymsp);
    }
    this->__PVT__tracing = 0U;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_resource_db_options__Vclpkg::__VnoInFunc_is_tracing(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &is_tracing__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_resource_db_options__Vclpkg::__VnoInFunc_is_tracing\n"); );
    // Body
    if ((1U & (~ (IData)(this->__PVT__ready)))) {
        this->__VnoInFunc_init(vlSymsp);
    }
    is_tracing__Vfuncrtn = this->__PVT__tracing;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_resource_db_options__Vclpkg::__VnoInFunc_init(Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_resource_db_options__Vclpkg::__VnoInFunc_init\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_cmdline_processor> __Vfunc_get_inst__3__Vfuncout;
    IData/*31:0*/ __Vtask_get_arg_matches__4__Vfuncout;
    __Vtask_get_arg_matches__4__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_cmdline_processor> clp;
    VlQueue<std::string> trace_args;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg.__VnoInFunc_get_inst(vlProcess, vlSymsp, __Vfunc_get_inst__3__Vfuncout);
    clp = __Vfunc_get_inst__3__Vfuncout;
    if ((0U != ([&]() {
                    VL_NULL_CHECK(clp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource_db_options.svh", 101)
                ->__VnoInFunc_get_arg_matches(vlSymsp, "+UVM_RESOURCE_DB_TRACE"s, trace_args, __Vtask_get_arg_matches__4__Vfuncout);
                }(), __Vtask_get_arg_matches__4__Vfuncout))) {
        this->__PVT__tracing = 1U;
    }
    this->__PVT__ready = 1U;
}

Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_resource_db_options::Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_resource_db_options(Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_resource_db_options::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_resource_db_options::_ctor_var_reset(Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_resource_db_options::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_resource_db_options>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_resource_db_options::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_resource_db_options::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_resource_db_options::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_resource_db_options::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_resource_db_options::to_string_middle\n"); );
    // Body
    std::string out;
    return (out);
}
