// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrecorders_top.h for the primary calling header

#include "Vrecorders_top__pch.h"

void Vrecorders_top___024unit__03a__03aTransactionRecorder__Vclpkg::__VnoInFunc_get_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_component_registry__pi1> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vrecorders_top___024unit__03a__03aTransactionRecorder__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_component_registry__pi1> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi1__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vrecorders_top___024unit__03a__03aTransactionRecorder__Vclpkg::__VnoInFunc_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vrecorders_top___024unit__03a__03aTransactionRecorder__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "TransactionRecorder"s;
}

void Vrecorders_top___024unit__03a__03aTransactionRecorder::__VnoInFunc_get_object_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrecorders_top___024unit__03a__03aTransactionRecorder::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_component_registry__pi1> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi1__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vrecorders_top___024unit__03a__03aTransactionRecorder::__VnoInFunc_get_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrecorders_top___024unit__03a__03aTransactionRecorder::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "TransactionRecorder"s;
}

Vrecorders_top___024unit__03a__03aTransactionRecorder::Vrecorders_top___024unit__03a__03aTransactionRecorder(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_component> parent)
    : Vrecorders_top_uvm_pkg__03a__03auvm_component(vlProcess, vlSymsp, name, parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrecorders_top___024unit__03a__03aTransactionRecorder::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    this->__PVT__analysis_imp = VL_NEW(Vrecorders_top_uvm_pkg__03a__03auvm_analysis_imp__Tz1_TBz3, vlProcess, vlSymsp, "analysis_imp"s, 
                                       VlClassRef<Vrecorders_top___024unit__03a__03aTransactionRecorder>{this});
    this->__PVT__transaction_count = 0U;
}

void Vrecorders_top___024unit__03a__03aTransactionRecorder::__VnoInFunc_write(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top___024unit__03a__03aRecorderTransaction> txn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrecorders_top___024unit__03a__03aTransactionRecorder::__VnoInFunc_write\n"); );
    // Locals
    VlClassRef<Vrecorders_top___024unit__03a__03aRecorderTransaction> __Vfunc_create__3__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__5__Vfuncout;
    __Vfunc_uvm_report_enabled__5__Vfuncout = 0;
    std::string __Vtask_convert2string__7__Vfuncout;
    std::string __Vtemp_1;
    // Body
    VlClassRef<Vrecorders_top___024unit__03a__03aRecorderTransaction> recorded_txn;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz1_TBz2__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "recorded_txn"s, VlNull{}, ""s, __Vfunc_create__3__Vfuncout);
    recorded_txn = __Vfunc_create__3__Vfuncout;
    VL_NULL_CHECK(recorded_txn, "recorders.sv", 154)->__VnoInFunc_copy(vlProcess, vlSymsp, txn, VlNull{});
    VL_NULL_CHECK(recorded_txn, "recorders.sv", 164)->__PVT__timestamp 
        = (IData)(VL_TIME_UNITED_Q(1));
    this->__PVT__recorded_transactions.push_back(recorded_txn);
    this->__PVT__transaction_count = ((IData)(1U) + this->__PVT__transaction_count);
    if ((0U != ([&]() {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000000c8U, 0U, "RECORDER"s, __Vfunc_uvm_report_enabled__5__Vfuncout);
                }(), __Vfunc_uvm_report_enabled__5__Vfuncout))) {
        __Vtemp_1 = ([&]() {
                VL_NULL_CHECK(recorded_txn, "recorders.sv", 182)
                     ->__VnoInFunc_convert2string(vlProcess, vlSymsp, __Vtask_convert2string__7__Vfuncout);
            }(), __Vtask_convert2string__7__Vfuncout);
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "RECORDER"s, VL_SFORMATF_N_NX("Recorded transaction #%0d: %@",0,
                                                                                32,
                                                                                this->__PVT__transaction_count,
                                                                                -1,
                                                                                &(__Vtemp_1)) , 0x000000c8U, "recorders.sv"s, 0x000000b6U, ""s, 1U);
    }
}

void Vrecorders_top___024unit__03a__03aTransactionRecorder::__VnoInFunc_playback_transactions(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrecorders_top___024unit__03a__03aTransactionRecorder::__VnoInFunc_playback_transactions\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__8__Vfuncout;
    __Vfunc_uvm_report_enabled__8__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__10__Vfuncout;
    __Vfunc_uvm_report_enabled__10__Vfuncout = 0;
    std::string __Vtask_convert2string__12__Vfuncout;
    std::string __Vtemp_1;
    // Body
    IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0;
    if ((0U != ([&]() {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "RECORDER"s, __Vfunc_uvm_report_enabled__8__Vfuncout);
                }(), __Vfunc_uvm_report_enabled__8__Vfuncout))) {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "RECORDER"s, VL_SFORMATF_N_NX("Playing back %0d transactions",0,
                                                                                32,
                                                                                this->__PVT__recorded_transactions.size()) , 0x00000064U, "recorders.sv"s, 0x000000cbU, ""s, 1U);
    }
    unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk1__DOT__i, this->__PVT__recorded_transactions.size())) {
        if ((0U != ([&]() {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000000c8U, 0U, "RECORDER"s, __Vfunc_uvm_report_enabled__10__Vfuncout);
                    }(), __Vfunc_uvm_report_enabled__10__Vfuncout))) {
            __Vtemp_1 = ([&]() {
                    VL_NULL_CHECK(this->__PVT__recorded_transactions.at(unnamedblk1__DOT__i), "recorders.sv", 215)
                         ->__VnoInFunc_convert2string(vlProcess, vlSymsp, __Vtask_convert2string__12__Vfuncout);
                }(), __Vtask_convert2string__12__Vfuncout);
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "RECORDER"s, VL_SFORMATF_N_NX("Playback #%0d: %@",0,
                                                                                32,
                                                                                unnamedblk1__DOT__i,
                                                                                -1,
                                                                                &(__Vtemp_1)) , 0x000000c8U, "recorders.sv"s, 0x000000d7U, ""s, 1U);
        }
        unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
    }
}

void Vrecorders_top___024unit__03a__03aTransactionRecorder::__VnoInFunc_report_phase(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrecorders_top___024unit__03a__03aTransactionRecorder::__VnoInFunc_report_phase\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__13__Vfuncout;
    __Vfunc_uvm_report_enabled__13__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__15__Vfuncout;
    __Vfunc_uvm_report_enabled__15__Vfuncout = 0;
    // Body
    if ((0U != ([&]() {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "RECORDER"s, __Vfunc_uvm_report_enabled__13__Vfuncout);
                }(), __Vfunc_uvm_report_enabled__13__Vfuncout))) {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "RECORDER"s, "Recorder Statistics:"s, 0x00000064U, "recorders.sv"s, 0x000000e5U, ""s, 1U);
    }
    if ((0U != ([&]() {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "RECORDER"s, __Vfunc_uvm_report_enabled__15__Vfuncout);
                }(), __Vfunc_uvm_report_enabled__15__Vfuncout))) {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "RECORDER"s, VL_SFORMATF_N_NX("  Total Transactions Recorded: %0d",0,
                                                                                32,
                                                                                this->__PVT__transaction_count) , 0x00000064U, "recorders.sv"s, 0x000000e6U, ""s, 1U);
    }
}

void Vrecorders_top___024unit__03a__03aTransactionRecorder::__VnoInFunc_randomize(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrecorders_top___024unit__03a__03aTransactionRecorder::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__18__Vfuncout;
    __Vfunc___VBasicRand__18__Vfuncout = 0;
    // Body
    Vrecorders_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vrecorders_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__18__Vfuncout);
            }(), __Vfunc___VBasicRand__18__Vfuncout));
}

void Vrecorders_top___024unit__03a__03aTransactionRecorder::__VnoInFunc___Vsetup_constraints(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrecorders_top___024unit__03a__03aTransactionRecorder::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vrecorders_top___024unit__03a__03aTransactionRecorder::__VnoInFunc___VBasicRand(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrecorders_top___024unit__03a__03aTransactionRecorder::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vrecorders_top___024unit__03a__03aTransactionRecorder::_ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrecorders_top___024unit__03a__03aTransactionRecorder::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__transaction_count = 0;
}

Vrecorders_top___024unit__03a__03aTransactionRecorder::~Vrecorders_top___024unit__03a__03aTransactionRecorder() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrecorders_top___024unit__03a__03aTransactionRecorder::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top___024unit__03a__03aTransactionRecorder>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrecorders_top___024unit__03a__03aTransactionRecorder::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vrecorders_top___024unit__03a__03aTransactionRecorder::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrecorders_top___024unit__03a__03aTransactionRecorder::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vrecorders_top___024unit__03a__03aTransactionRecorder::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrecorders_top___024unit__03a__03aTransactionRecorder::to_string_middle\n"); );
    // Body
    std::string out;
    out += "analysis_imp:" + VL_TO_STRING(__PVT__analysis_imp);
    out += ", recorded_transactions:" + VL_TO_STRING(__PVT__recorded_transactions);
    out += ", transaction_count:" + VL_TO_STRING(__PVT__transaction_count);
    out += ", "+ Vrecorders_top_uvm_pkg__03a__03auvm_component::to_string_middle();
    return (out);
}
