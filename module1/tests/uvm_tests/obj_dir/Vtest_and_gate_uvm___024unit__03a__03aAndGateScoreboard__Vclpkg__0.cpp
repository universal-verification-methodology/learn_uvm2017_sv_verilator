// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_and_gate_uvm.h for the primary calling header

#include "Vtest_and_gate_uvm__pch.h"

void Vtest_and_gate_uvm___024unit__03a__03aAndGateScoreboard__Vclpkg::__VnoInFunc_get_type(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_component_registry__pi64> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm___024unit__03a__03aAndGateScoreboard__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_component_registry__pi64> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi64__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtest_and_gate_uvm___024unit__03a__03aAndGateScoreboard__Vclpkg::__VnoInFunc_type_name(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm___024unit__03a__03aAndGateScoreboard__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "AndGateScoreboard"s;
}

void Vtest_and_gate_uvm___024unit__03a__03aAndGateScoreboard::__VnoInFunc_get_object_type(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_and_gate_uvm___024unit__03a__03aAndGateScoreboard::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_component_registry__pi64> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi64__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtest_and_gate_uvm___024unit__03a__03aAndGateScoreboard::__VnoInFunc_get_type_name(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_and_gate_uvm___024unit__03a__03aAndGateScoreboard::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "AndGateScoreboard"s;
}

Vtest_and_gate_uvm___024unit__03a__03aAndGateScoreboard::Vtest_and_gate_uvm___024unit__03a__03aAndGateScoreboard(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_component> parent)
    : Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_scoreboard(vlProcess, vlSymsp, name, parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_and_gate_uvm___024unit__03a__03aAndGateScoreboard::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__fail_count = 0U;
    this->__PVT__pass_count = 0U;
    ;
    this->__PVT__imp = VL_NEW(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_analysis_imp__Tz126_TBz134, vlProcess, vlSymsp, "imp"s, 
                              VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateScoreboard>{this});
}

void Vtest_and_gate_uvm___024unit__03a__03aAndGateScoreboard::__VnoInFunc_write(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction> txn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_and_gate_uvm___024unit__03a__03aAndGateScoreboard::__VnoInFunc_write\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__3__Vfuncout;
    __Vfunc_uvm_report_enabled__3__Vfuncout = 0;
    std::string __Vtask_convert2string__5__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__6__Vfuncout;
    __Vfunc_uvm_report_enabled__6__Vfuncout = 0;
    std::string __Vtask_convert2string__8__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    // Body
    CData/*0:0*/ expected;
    expected = 0;
    expected = (VL_NULL_CHECK(txn, "test_and_gate_uvm.sv", 167)
                ->__PVT__a & VL_NULL_CHECK(txn, "test_and_gate_uvm.sv", 167)
                ->__PVT__b);
    if ((VL_NULL_CHECK(txn, "test_and_gate_uvm.sv", 169)
         ->__PVT__expected_y == (IData)(expected))) {
        this->__PVT__pass_count = ((IData)(1U) + this->__PVT__pass_count);
        if ((0U != ([&]() {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000000c8U, 0U, "SCOREBOARD"s, __Vfunc_uvm_report_enabled__3__Vfuncout);
                    }(), __Vfunc_uvm_report_enabled__3__Vfuncout))) {
            __Vtemp_1 = ([&]() {
                    VL_NULL_CHECK(txn, "test_and_gate_uvm.sv", 171)
                         ->__VnoInFunc_convert2string(vlProcess, vlSymsp, __Vtask_convert2string__5__Vfuncout);
                }(), __Vtask_convert2string__5__Vfuncout);
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "SCOREBOARD"s, VL_SFORMATF_N_NX("PASS: %@",0,
                                                                                -1,
                                                                                &(__Vtemp_1)) , 0x000000c8U, "test_and_gate_uvm.sv"s, 0x000000abU, ""s, 1U);
        }
    } else {
        this->__PVT__fail_count = ((IData)(1U) + this->__PVT__fail_count);
        if ((0U != ([&]() {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "SCOREBOARD"s, __Vfunc_uvm_report_enabled__6__Vfuncout);
                    }(), __Vfunc_uvm_report_enabled__6__Vfuncout))) {
            __Vtemp_2 = ([&]() {
                    VL_NULL_CHECK(txn, "test_and_gate_uvm.sv", 175)
                         ->__VnoInFunc_convert2string(vlProcess, vlSymsp, __Vtask_convert2string__8__Vfuncout);
                }(), __Vtask_convert2string__8__Vfuncout);
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "SCOREBOARD"s, VL_SFORMATF_N_NX("FAIL: %@, expected=%0b, got=%0b",0,
                                                                                -1,
                                                                                &(__Vtemp_2),
                                                                                1,
                                                                                (IData)(expected),
                                                                                1,
                                                                                VL_NULL_CHECK(txn, "test_and_gate_uvm.sv", 175)
                                                                                ->__PVT__expected_y) , 0U, "test_and_gate_uvm.sv"s, 0x000000afU, ""s, 1U);
        }
    }
}

void Vtest_and_gate_uvm___024unit__03a__03aAndGateScoreboard::__VnoInFunc_report_phase(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_and_gate_uvm___024unit__03a__03aAndGateScoreboard::__VnoInFunc_report_phase\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__10__Vfuncout;
    __Vfunc_uvm_report_enabled__10__Vfuncout = 0;
    // Body
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_component::__VnoInFunc_report_phase(vlProcess, vlSymsp, phase);
    if ((0U != ([&]() {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000000c8U, 0U, "SCOREBOARD"s, __Vfunc_uvm_report_enabled__10__Vfuncout);
                }(), __Vfunc_uvm_report_enabled__10__Vfuncout))) {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "SCOREBOARD"s, VL_SFORMATF_N_NX("Pass: %0d, Fail: %0d",0,
                                                                                32,
                                                                                this->__PVT__pass_count,
                                                                                32,
                                                                                this->__PVT__fail_count) , 0x000000c8U, "test_and_gate_uvm.sv"s, 0x000000b5U, ""s, 1U);
    }
}

void Vtest_and_gate_uvm___024unit__03a__03aAndGateScoreboard::__VnoInFunc_randomize(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_and_gate_uvm___024unit__03a__03aAndGateScoreboard::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__13__Vfuncout;
    __Vfunc___VBasicRand__13__Vfuncout = 0;
    // Body
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__13__Vfuncout);
            }(), __Vfunc___VBasicRand__13__Vfuncout));
}

void Vtest_and_gate_uvm___024unit__03a__03aAndGateScoreboard::__VnoInFunc___Vsetup_constraints(Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_and_gate_uvm___024unit__03a__03aAndGateScoreboard::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtest_and_gate_uvm___024unit__03a__03aAndGateScoreboard::__VnoInFunc___VBasicRand(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_and_gate_uvm___024unit__03a__03aAndGateScoreboard::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtest_and_gate_uvm___024unit__03a__03aAndGateScoreboard::_ctor_var_reset(Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_and_gate_uvm___024unit__03a__03aAndGateScoreboard::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__pass_count = 0;
    __PVT__fail_count = 0;
}

Vtest_and_gate_uvm___024unit__03a__03aAndGateScoreboard::~Vtest_and_gate_uvm___024unit__03a__03aAndGateScoreboard() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_and_gate_uvm___024unit__03a__03aAndGateScoreboard::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateScoreboard>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_and_gate_uvm___024unit__03a__03aAndGateScoreboard::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtest_and_gate_uvm___024unit__03a__03aAndGateScoreboard::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_and_gate_uvm___024unit__03a__03aAndGateScoreboard::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtest_and_gate_uvm___024unit__03a__03aAndGateScoreboard::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_and_gate_uvm___024unit__03a__03aAndGateScoreboard::to_string_middle\n"); );
    // Body
    std::string out;
    out += "imp:" + VL_TO_STRING(__PVT__imp);
    out += ", pass_count:" + VL_TO_STRING(__PVT__pass_count);
    out += ", fail_count:" + VL_TO_STRING(__PVT__fail_count);
    out += ", "+ Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_scoreboard::to_string_middle();
    return (out);
}
