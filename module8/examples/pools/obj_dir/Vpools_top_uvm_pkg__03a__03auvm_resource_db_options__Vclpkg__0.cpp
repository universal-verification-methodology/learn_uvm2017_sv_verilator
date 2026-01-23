// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpools_top.h for the primary calling header

#include "Vpools_top__pch.h"

void Vpools_top_uvm_pkg__03a__03auvm_resource_db_options__Vclpkg::__VnoInFunc_turn_on_tracing(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vpools_top_uvm_pkg__03a__03auvm_resource_db_options__Vclpkg::__VnoInFunc_turn_on_tracing\n"); );
    // Body
    if ((1U & (~ (IData)(this->__PVT__ready)))) {
        this->__VnoInFunc_init(vlSymsp);
    }
    this->__PVT__tracing = 1U;
}

void Vpools_top_uvm_pkg__03a__03auvm_resource_db_options__Vclpkg::__VnoInFunc_turn_off_tracing(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vpools_top_uvm_pkg__03a__03auvm_resource_db_options__Vclpkg::__VnoInFunc_turn_off_tracing\n"); );
    // Body
    if ((1U & (~ (IData)(this->__PVT__ready)))) {
        this->__VnoInFunc_init(vlSymsp);
    }
    this->__PVT__tracing = 0U;
}

void Vpools_top_uvm_pkg__03a__03auvm_resource_db_options__Vclpkg::__VnoInFunc_is_tracing(Vpools_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_tracing__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vpools_top_uvm_pkg__03a__03auvm_resource_db_options__Vclpkg::__VnoInFunc_is_tracing\n"); );
    // Body
    if ((1U & (~ (IData)(this->__PVT__ready)))) {
        this->__VnoInFunc_init(vlSymsp);
    }
    is_tracing__Vfuncrtn = this->__PVT__tracing;
}

void Vpools_top_uvm_pkg__03a__03auvm_resource_db_options__Vclpkg::__VnoInFunc_init(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vpools_top_uvm_pkg__03a__03auvm_resource_db_options__Vclpkg::__VnoInFunc_init\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_cmdline_processor> __Vfunc_get_inst__3__Vfuncout;
    IData/*31:0*/ __Vtask_get_arg_matches__4__Vfuncout;
    __Vtask_get_arg_matches__4__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_cmdline_processor> clp;
    VlQueue<std::string> trace_args;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg.__VnoInFunc_get_inst(vlProcess, vlSymsp, __Vfunc_get_inst__3__Vfuncout);
    clp = __Vfunc_get_inst__3__Vfuncout;
    if ((0U != ([&]() {
                    VL_NULL_CHECK(clp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource_db_options.svh", 101)
                ->__VnoInFunc_get_arg_matches(vlSymsp, "+UVM_RESOURCE_DB_TRACE"s, trace_args, __Vtask_get_arg_matches__4__Vfuncout);
                }(), __Vtask_get_arg_matches__4__Vfuncout))) {
        this->__PVT__tracing = 1U;
    }
    this->__PVT__ready = 1U;
}

Vpools_top_uvm_pkg__03a__03auvm_resource_db_options::Vpools_top_uvm_pkg__03a__03auvm_resource_db_options(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_resource_db_options::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vpools_top_uvm_pkg__03a__03auvm_resource_db_options::_ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_resource_db_options::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource_db_options>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_resource_db_options::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vpools_top_uvm_pkg__03a__03auvm_resource_db_options::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_resource_db_options::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vpools_top_uvm_pkg__03a__03auvm_resource_db_options::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_resource_db_options::to_string_middle\n"); );
    // Body
    std::string out;
    return (out);
}
