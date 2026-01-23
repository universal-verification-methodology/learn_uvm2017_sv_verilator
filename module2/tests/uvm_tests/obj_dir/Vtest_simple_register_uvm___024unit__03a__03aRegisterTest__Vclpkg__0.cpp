// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_simple_register_uvm.h for the primary calling header

#include "Vtest_simple_register_uvm__pch.h"

void Vtest_simple_register_uvm___024unit__03a__03aRegisterTest__Vclpkg::__VnoInFunc_get_type(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component_registry__pi67> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm___024unit__03a__03aRegisterTest__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component_registry__pi67> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi67__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterTest__Vclpkg::__VnoInFunc_type_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm___024unit__03a__03aRegisterTest__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "RegisterTest"s;
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterTest::__VnoInFunc_get_object_type(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtest_simple_register_uvm___024unit__03a__03aRegisterTest::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component_registry__pi67> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi67__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterTest::__VnoInFunc_get_type_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtest_simple_register_uvm___024unit__03a__03aRegisterTest::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "RegisterTest"s;
}

Vtest_simple_register_uvm___024unit__03a__03aRegisterTest::Vtest_simple_register_uvm___024unit__03a__03aRegisterTest(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component> parent)
    : Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_test(vlProcess, vlSymsp, name, parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtest_simple_register_uvm___024unit__03a__03aRegisterTest::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterTest::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtest_simple_register_uvm___024unit__03a__03aRegisterTest::__VnoInFunc_build_phase\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm___024unit__03a__03aRegisterEnv> __Vfunc_create__3__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm___024unit__03a__03aRegisterSequence> __Vfunc_create__4__Vfuncout;
    // Body
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi66__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "env"s, 
                                                                                VlClassRef<Vtest_simple_register_uvm___024unit__03a__03aRegisterTest>{this}, ""s, __Vfunc_create__3__Vfuncout);
    this->__PVT__env = __Vfunc_create__3__Vfuncout;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi61__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "seq"s, VlNull{}, ""s, __Vfunc_create__4__Vfuncout);
    this->__PVT__seq = __Vfunc_create__4__Vfuncout;
}

VlCoroutine Vtest_simple_register_uvm___024unit__03a__03aRegisterTest::__VnoInFunc_run_phase(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtest_simple_register_uvm___024unit__03a__03aRegisterTest::__VnoInFunc_run_phase\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__6__Vfuncout;
    __Vfunc_uvm_report_enabled__6__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__9__Vfuncout;
    __Vfunc_uvm_report_enabled__9__Vfuncout = 0;
    // Body
    VL_KEEP_THIS;
    VL_NULL_CHECK(phase, "test_simple_register_uvm.sv", 247)->__VnoInFunc_raise_objection(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtest_simple_register_uvm___024unit__03a__03aRegisterTest>{this}, ""s, 1U);
    if ((0U != ([&]() {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000000c8U, 0U, "TEST"s, __Vfunc_uvm_report_enabled__6__Vfuncout);
                }(), __Vfunc_uvm_report_enabled__6__Vfuncout))) {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "TEST"s, "Starting test"s, 0x000000c8U, "test_simple_register_uvm.sv"s, 0x000000f9U, ""s, 1U);
    }
    co_await VL_NULL_CHECK(this->__PVT__seq, "test_simple_register_uvm.sv", 252)->__VnoInFunc_start(vlProcess, vlSymsp, VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__env, "test_simple_register_uvm.sv", 252)
                                                                                ->__PVT__agent, "test_simple_register_uvm.sv", 252)
                                                                                ->__PVT__sequencer, VlNull{}, 0xffffffffU, 1U);
    co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000f4240ULL, 
                                            vlProcess, 
                                            "test_simple_register_uvm.sv", 
                                            255);
    if ((0U != ([&]() {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000000c8U, 0U, "TEST"s, __Vfunc_uvm_report_enabled__9__Vfuncout);
                }(), __Vfunc_uvm_report_enabled__9__Vfuncout))) {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "TEST"s, "Test complete"s, 0x000000c8U, "test_simple_register_uvm.sv"s, 0x00000101U, ""s, 1U);
    }
    VL_NULL_CHECK(phase, "test_simple_register_uvm.sv", 259)->__VnoInFunc_drop_objection(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtest_simple_register_uvm___024unit__03a__03aRegisterTest>{this}, ""s, 1U);
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterTest::__VnoInFunc_randomize(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtest_simple_register_uvm___024unit__03a__03aRegisterTest::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__13__Vfuncout;
    __Vfunc___Vbasic_randomize__13__Vfuncout = 0;
    // Body
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__13__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__13__Vfuncout));
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterTest::__VnoInFunc___Vbasic_randomize(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtest_simple_register_uvm___024unit__03a__03aRegisterTest::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterTest::_ctor_var_reset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtest_simple_register_uvm___024unit__03a__03aRegisterTest::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vtest_simple_register_uvm___024unit__03a__03aRegisterTest>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtest_simple_register_uvm___024unit__03a__03aRegisterTest::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtest_simple_register_uvm___024unit__03a__03aRegisterTest::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtest_simple_register_uvm___024unit__03a__03aRegisterTest::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtest_simple_register_uvm___024unit__03a__03aRegisterTest::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtest_simple_register_uvm___024unit__03a__03aRegisterTest::to_string_middle\n"); );
    // Body
    std::string out;
    out += "env:" + VL_TO_STRING(__PVT__env);
    out += ", seq:" + VL_TO_STRING(__PVT__seq);
    out += ", "+ Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_test::to_string_middle();
    return (out);
}
