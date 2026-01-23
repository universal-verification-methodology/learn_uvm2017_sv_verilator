// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_simple_register_uvm.h for the primary calling header

#include "Vtest_simple_register_uvm__pch.h"

void Vtest_simple_register_uvm___024unit__03a__03aRegisterScoreboard__Vclpkg::__VnoInFunc_get_type(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component_registry__pi64> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm___024unit__03a__03aRegisterScoreboard__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component_registry__pi64> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi64__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterScoreboard__Vclpkg::__VnoInFunc_type_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm___024unit__03a__03aRegisterScoreboard__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "RegisterScoreboard"s;
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterScoreboard::__VnoInFunc_get_object_type(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_simple_register_uvm___024unit__03a__03aRegisterScoreboard::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component_registry__pi64> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi64__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterScoreboard::__VnoInFunc_get_type_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_simple_register_uvm___024unit__03a__03aRegisterScoreboard::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "RegisterScoreboard"s;
}

Vtest_simple_register_uvm___024unit__03a__03aRegisterScoreboard::Vtest_simple_register_uvm___024unit__03a__03aRegisterScoreboard(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component> parent)
    : Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_scoreboard(vlProcess, vlSymsp, name, parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_simple_register_uvm___024unit__03a__03aRegisterScoreboard::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    this->__PVT__imp = VL_NEW(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_analysis_imp__Tz126_TBz134, vlProcess, vlSymsp, "imp"s, 
                              VlClassRef<Vtest_simple_register_uvm___024unit__03a__03aRegisterScoreboard>{this});
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterScoreboard::__VnoInFunc_write(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm___024unit__03a__03aRegisterTransaction> txn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_simple_register_uvm___024unit__03a__03aRegisterScoreboard::__VnoInFunc_write\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__3__Vfuncout;
    __Vfunc_uvm_report_enabled__3__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__5__Vfuncout;
    __Vfunc_uvm_report_enabled__5__Vfuncout = 0;
    // Body
    VlClassRef<Vtest_simple_register_uvm___024unit__03a__03aRegisterTransaction> expected;
    if (VL_LTS_III(32, 0U, this->__PVT__expected_queue.size())) {
        expected = this->__PVT__expected_queue.pop_front();
        if ((VL_NULL_CHECK(txn, "test_simple_register_uvm.sv", 160)
             ->__PVT__expected_q == VL_NULL_CHECK(expected, "test_simple_register_uvm.sv", 160)
             ->__PVT__expected_q)) {
            if ((0U != ([&]() {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000000c8U, 0U, "SCOREBOARD"s, __Vfunc_uvm_report_enabled__3__Vfuncout);
                        }(), __Vfunc_uvm_report_enabled__3__Vfuncout))) {
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "SCOREBOARD"s, VL_SFORMATF_N_NX("PASS: Expected 0x%02x, got 0x%02x",0,
                                                                                8,
                                                                                VL_NULL_CHECK(expected, "test_simple_register_uvm.sv", 162)
                                                                                ->__PVT__expected_q,
                                                                                8,
                                                                                VL_NULL_CHECK(txn, "test_simple_register_uvm.sv", 162)
                                                                                ->__PVT__expected_q) , 0x000000c8U, "test_simple_register_uvm.sv"s, 0x000000a2U, ""s, 1U);
            }
        } else if ((0U != ([&]() {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "SCOREBOARD"s, __Vfunc_uvm_report_enabled__5__Vfuncout);
                    }(), __Vfunc_uvm_report_enabled__5__Vfuncout))) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "SCOREBOARD"s, VL_SFORMATF_N_NX("FAIL: Expected 0x%02x, got 0x%02x",0,
                                                                                8,
                                                                                VL_NULL_CHECK(expected, "test_simple_register_uvm.sv", 165)
                                                                                ->__PVT__expected_q,
                                                                                8,
                                                                                VL_NULL_CHECK(txn, "test_simple_register_uvm.sv", 165)
                                                                                ->__PVT__expected_q) , 0U, "test_simple_register_uvm.sv"s, 0x000000a5U, ""s, 1U);
        }
    }
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterScoreboard::__VnoInFunc_add_expected(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm___024unit__03a__03aRegisterTransaction> txn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_simple_register_uvm___024unit__03a__03aRegisterScoreboard::__VnoInFunc_add_expected\n"); );
    // Body
    this->__PVT__expected_queue.push_back(txn);
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterScoreboard::__VnoInFunc_randomize(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_simple_register_uvm___024unit__03a__03aRegisterScoreboard::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__8__Vfuncout;
    __Vfunc___VBasicRand__8__Vfuncout = 0;
    // Body
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__8__Vfuncout);
            }(), __Vfunc___VBasicRand__8__Vfuncout));
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterScoreboard::__VnoInFunc___Vsetup_constraints(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_simple_register_uvm___024unit__03a__03aRegisterScoreboard::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterScoreboard::__VnoInFunc___VBasicRand(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_simple_register_uvm___024unit__03a__03aRegisterScoreboard::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterScoreboard::_ctor_var_reset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_simple_register_uvm___024unit__03a__03aRegisterScoreboard::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtest_simple_register_uvm___024unit__03a__03aRegisterScoreboard::~Vtest_simple_register_uvm___024unit__03a__03aRegisterScoreboard() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_simple_register_uvm___024unit__03a__03aRegisterScoreboard::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtest_simple_register_uvm___024unit__03a__03aRegisterScoreboard>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_simple_register_uvm___024unit__03a__03aRegisterScoreboard::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtest_simple_register_uvm___024unit__03a__03aRegisterScoreboard::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_simple_register_uvm___024unit__03a__03aRegisterScoreboard::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtest_simple_register_uvm___024unit__03a__03aRegisterScoreboard::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_simple_register_uvm___024unit__03a__03aRegisterScoreboard::to_string_middle\n"); );
    // Body
    std::string out;
    out += "imp:" + VL_TO_STRING(__PVT__imp);
    out += ", expected_queue:" + VL_TO_STRING(__PVT__expected_queue);
    out += ", "+ Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_scoreboard::to_string_middle();
    return (out);
}
