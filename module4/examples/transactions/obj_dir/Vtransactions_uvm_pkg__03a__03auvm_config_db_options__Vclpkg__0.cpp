// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransactions.h for the primary calling header

#include "Vtransactions__pch.h"

void Vtransactions_uvm_pkg__03a__03auvm_config_db_options__Vclpkg::__VnoInFunc_turn_on_tracing(Vtransactions__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtransactions_uvm_pkg__03a__03auvm_config_db_options__Vclpkg::__VnoInFunc_turn_on_tracing\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((1U & (~ (IData)(this->__PVT__ready)))) {
        this->__VnoInFunc_init(vlProcess, vlSymsp);
    }
    this->__PVT__tracing = 1U;
}

void Vtransactions_uvm_pkg__03a__03auvm_config_db_options__Vclpkg::__VnoInFunc_turn_off_tracing(Vtransactions__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtransactions_uvm_pkg__03a__03auvm_config_db_options__Vclpkg::__VnoInFunc_turn_off_tracing\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((1U & (~ (IData)(this->__PVT__ready)))) {
        this->__VnoInFunc_init(vlProcess, vlSymsp);
    }
    this->__PVT__tracing = 0U;
}

void Vtransactions_uvm_pkg__03a__03auvm_config_db_options__Vclpkg::__VnoInFunc_is_tracing(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, CData/*0:0*/ &is_tracing__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtransactions_uvm_pkg__03a__03auvm_config_db_options__Vclpkg::__VnoInFunc_is_tracing\n"); );
    // Body
    if ((1U & (~ (IData)(this->__PVT__ready)))) {
        this->__VnoInFunc_init(vlProcess, vlSymsp);
    }
    is_tracing__Vfuncrtn = this->__PVT__tracing;
}

void Vtransactions_uvm_pkg__03a__03auvm_config_db_options__Vclpkg::__VnoInFunc_init(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtransactions_uvm_pkg__03a__03auvm_config_db_options__Vclpkg::__VnoInFunc_init\n"); );
    // Locals
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_cmdline_processor> __Vfunc_get_inst__3__Vfuncout;
    IData/*31:0*/ __Vtask_get_arg_matches__4__Vfuncout;
    __Vtask_get_arg_matches__4__Vfuncout = 0;
    // Body
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_cmdline_processor> clp;
    VlQueue<std::string> trace_args;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg.__VnoInFunc_get_inst(vlProcess, vlSymsp, __Vfunc_get_inst__3__Vfuncout);
    clp = __Vfunc_get_inst__3__Vfuncout;
    if ((0U != ([&]() {
                    VL_NULL_CHECK(clp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_config_db.svh", 399)
                ->__VnoInFunc_get_arg_matches(vlSymsp, "+UVM_CONFIG_DB_TRACE"s, trace_args, __Vtask_get_arg_matches__4__Vfuncout);
                }(), __Vtask_get_arg_matches__4__Vfuncout))) {
        this->__PVT__tracing = 1U;
    }
    this->__PVT__ready = 1U;
}

Vtransactions_uvm_pkg__03a__03auvm_config_db_options::Vtransactions_uvm_pkg__03a__03auvm_config_db_options(Vtransactions__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_config_db_options::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vtransactions_uvm_pkg__03a__03auvm_config_db_options::_ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_config_db_options::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_config_db_options>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_config_db_options::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtransactions_uvm_pkg__03a__03auvm_config_db_options::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_config_db_options::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtransactions_uvm_pkg__03a__03auvm_config_db_options::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_config_db_options::to_string_middle\n"); );
    // Body
    std::string out;
    return (out);
}
