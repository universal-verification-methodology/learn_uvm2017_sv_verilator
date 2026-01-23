// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_and_gate_uvm.h for the primary calling header

#include "Vtest_and_gate_uvm__pch.h"

void Vtest_and_gate_uvm___024unit__03a__03aAndGateTest__Vclpkg::__VnoInFunc_get_type(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_component_registry__pi67> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm___024unit__03a__03aAndGateTest__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_component_registry__pi67> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi67__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtest_and_gate_uvm___024unit__03a__03aAndGateTest__Vclpkg::__VnoInFunc_type_name(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm___024unit__03a__03aAndGateTest__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "AndGateTest"s;
}

void Vtest_and_gate_uvm___024unit__03a__03aAndGateTest::__VnoInFunc_get_object_type(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtest_and_gate_uvm___024unit__03a__03aAndGateTest::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_component_registry__pi67> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi67__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtest_and_gate_uvm___024unit__03a__03aAndGateTest::__VnoInFunc_get_type_name(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtest_and_gate_uvm___024unit__03a__03aAndGateTest::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "AndGateTest"s;
}

Vtest_and_gate_uvm___024unit__03a__03aAndGateTest::Vtest_and_gate_uvm___024unit__03a__03aAndGateTest(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_component> parent)
    : Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_test(vlProcess, vlSymsp, name, parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtest_and_gate_uvm___024unit__03a__03aAndGateTest::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vtest_and_gate_uvm___024unit__03a__03aAndGateTest::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtest_and_gate_uvm___024unit__03a__03aAndGateTest::__VnoInFunc_build_phase\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateEnv> __Vfunc_create__3__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateSequence> __Vfunc_create__4__Vfuncout;
    // Body
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi66__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "env"s, 
                                                                                VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateTest>{this}, ""s, __Vfunc_create__3__Vfuncout);
    this->__PVT__env = __Vfunc_create__3__Vfuncout;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi61__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "seq"s, VlNull{}, ""s, __Vfunc_create__4__Vfuncout);
    this->__PVT__seq = __Vfunc_create__4__Vfuncout;
}

VlCoroutine Vtest_and_gate_uvm___024unit__03a__03aAndGateTest::__VnoInFunc_run_phase(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtest_and_gate_uvm___024unit__03a__03aAndGateTest::__VnoInFunc_run_phase\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__6__Vfuncout;
    __Vfunc_uvm_report_enabled__6__Vfuncout = 0;
    // Body
    VL_KEEP_THIS;
    VL_NULL_CHECK(phase, "test_and_gate_uvm.sv", 259)->__VnoInFunc_raise_objection(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateTest>{this}, ""s, 1U);
    if ((0U != ([&]() {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000000c8U, 0U, "TEST"s, __Vfunc_uvm_report_enabled__6__Vfuncout);
                }(), __Vfunc_uvm_report_enabled__6__Vfuncout))) {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "TEST"s, "Starting AND gate test"s, 0x000000c8U, "test_and_gate_uvm.sv"s, 0x00000105U, ""s, 1U);
    }
    co_await VL_NULL_CHECK(this->__PVT__seq, "test_and_gate_uvm.sv", 263)->__VnoInFunc_start(vlProcess, vlSymsp, VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__env, "test_and_gate_uvm.sv", 263)
                                                                                ->__PVT__agent, "test_and_gate_uvm.sv", 263)
                                                                                ->__PVT__sequencer, VlNull{}, 0xffffffffU, 1U);
    co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000186a0ULL, 
                                            vlProcess, 
                                            "test_and_gate_uvm.sv", 
                                            265);
    VL_NULL_CHECK(phase, "test_and_gate_uvm.sv", 267)->__VnoInFunc_drop_objection(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateTest>{this}, ""s, 1U);
    co_return;}

void Vtest_and_gate_uvm___024unit__03a__03aAndGateTest::__VnoInFunc_randomize(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtest_and_gate_uvm___024unit__03a__03aAndGateTest::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__11__Vfuncout;
    __Vfunc___VBasicRand__11__Vfuncout = 0;
    // Body
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__11__Vfuncout);
            }(), __Vfunc___VBasicRand__11__Vfuncout));
}

void Vtest_and_gate_uvm___024unit__03a__03aAndGateTest::__VnoInFunc___Vsetup_constraints(Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtest_and_gate_uvm___024unit__03a__03aAndGateTest::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtest_and_gate_uvm___024unit__03a__03aAndGateTest::__VnoInFunc___VBasicRand(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtest_and_gate_uvm___024unit__03a__03aAndGateTest::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtest_and_gate_uvm___024unit__03a__03aAndGateTest::_ctor_var_reset(Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtest_and_gate_uvm___024unit__03a__03aAndGateTest::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtest_and_gate_uvm___024unit__03a__03aAndGateTest::~Vtest_and_gate_uvm___024unit__03a__03aAndGateTest() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtest_and_gate_uvm___024unit__03a__03aAndGateTest::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateTest>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtest_and_gate_uvm___024unit__03a__03aAndGateTest::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtest_and_gate_uvm___024unit__03a__03aAndGateTest::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtest_and_gate_uvm___024unit__03a__03aAndGateTest::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtest_and_gate_uvm___024unit__03a__03aAndGateTest::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtest_and_gate_uvm___024unit__03a__03aAndGateTest::to_string_middle\n"); );
    // Body
    std::string out;
    out += "env:" + VL_TO_STRING(__PVT__env);
    out += ", seq:" + VL_TO_STRING(__PVT__seq);
    out += ", "+ Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_test::to_string_middle();
    return (out);
}
