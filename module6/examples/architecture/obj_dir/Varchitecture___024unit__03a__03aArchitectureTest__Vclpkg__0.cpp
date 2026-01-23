// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varchitecture.h for the primary calling header

#include "Varchitecture__pch.h"

void Varchitecture___024unit__03a__03aArchitectureTest__Vclpkg::__VnoInFunc_get_type(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_component_registry__pi7> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Varchitecture___024unit__03a__03aArchitectureTest__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_component_registry__pi7> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi7__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Varchitecture___024unit__03a__03aArchitectureTest__Vclpkg::__VnoInFunc_type_name(Varchitecture__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Varchitecture___024unit__03a__03aArchitectureTest__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "ArchitectureTest"s;
}

void Varchitecture___024unit__03a__03aArchitectureTest::__VnoInFunc_get_object_type(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Varchitecture___024unit__03a__03aArchitectureTest::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_component_registry__pi7> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi7__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Varchitecture___024unit__03a__03aArchitectureTest::__VnoInFunc_get_type_name(Varchitecture__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Varchitecture___024unit__03a__03aArchitectureTest::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "ArchitectureTest"s;
}

Varchitecture___024unit__03a__03aArchitectureTest::Varchitecture___024unit__03a__03aArchitectureTest(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_component> parent)
    : Varchitecture_uvm_pkg__03a__03auvm_test(vlProcess, vlSymsp, name, parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Varchitecture___024unit__03a__03aArchitectureTest::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Varchitecture___024unit__03a__03aArchitectureTest::__VnoInFunc_build_phase(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Varchitecture___024unit__03a__03aArchitectureTest::__VnoInFunc_build_phase\n"); );
    // Locals
    VlClassRef<Varchitecture___024unit__03a__03aArchEnv> __Vfunc_create__3__Vfuncout;
    // Body
    Varchitecture_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi5__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "env"s, 
                                                                                VlClassRef<Varchitecture___024unit__03a__03aArchitectureTest>{this}, ""s, __Vfunc_create__3__Vfuncout);
    this->__PVT__env = __Vfunc_create__3__Vfuncout;
}

VlCoroutine Varchitecture___024unit__03a__03aArchitectureTest::__VnoInFunc_run_phase(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Varchitecture___024unit__03a__03aArchitectureTest::__VnoInFunc_run_phase\n"); );
    // Locals
    VlClassRef<Varchitecture___024unit__03a__03aArchSmokeSeq> __Vfunc_create__5__Vfuncout;
    // Body
    VL_KEEP_THIS;
    VlClassRef<Varchitecture___024unit__03a__03aArchSmokeSeq> seq;
    VL_NULL_CHECK(phase, "architecture.sv", 106)->__VnoInFunc_raise_objection(vlProcess, vlSymsp, 
                                                                              VlClassRef<Varchitecture___024unit__03a__03aArchitectureTest>{this}, ""s, 1U);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi6__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "seq"s, VlNull{}, ""s, __Vfunc_create__5__Vfuncout);
    seq = __Vfunc_create__5__Vfuncout;
    co_await VL_NULL_CHECK(seq, "architecture.sv", 108)->__VnoInFunc_start(vlProcess, vlSymsp, VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__env, "architecture.sv", 108)
                                                                                ->__PVT__agent, "architecture.sv", 108)
                                                                           ->__PVT__seqr, VlNull{}, 0xffffffffU, 1U);
    co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                            vlProcess, 
                                            "architecture.sv", 
                                            109);
    VL_NULL_CHECK(phase, "architecture.sv", 110)->__VnoInFunc_drop_objection(vlProcess, vlSymsp, 
                                                                             VlClassRef<Varchitecture___024unit__03a__03aArchitectureTest>{this}, ""s, 1U);
    co_return;}

void Varchitecture___024unit__03a__03aArchitectureTest::__VnoInFunc_randomize(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Varchitecture___024unit__03a__03aArchitectureTest::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__9__Vfuncout;
    __Vfunc___VBasicRand__9__Vfuncout = 0;
    // Body
    Varchitecture_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Varchitecture_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__9__Vfuncout);
            }(), __Vfunc___VBasicRand__9__Vfuncout));
}

void Varchitecture___024unit__03a__03aArchitectureTest::__VnoInFunc___Vsetup_constraints(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Varchitecture___024unit__03a__03aArchitectureTest::__VnoInFunc___Vsetup_constraints\n"); );
}

void Varchitecture___024unit__03a__03aArchitectureTest::__VnoInFunc___VBasicRand(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Varchitecture___024unit__03a__03aArchitectureTest::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Varchitecture___024unit__03a__03aArchitectureTest::_ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Varchitecture___024unit__03a__03aArchitectureTest::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Varchitecture___024unit__03a__03aArchitectureTest::~Varchitecture___024unit__03a__03aArchitectureTest() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Varchitecture___024unit__03a__03aArchitectureTest::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Varchitecture___024unit__03a__03aArchitectureTest>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Varchitecture___024unit__03a__03aArchitectureTest::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Varchitecture___024unit__03a__03aArchitectureTest::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Varchitecture___024unit__03a__03aArchitectureTest::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Varchitecture___024unit__03a__03aArchitectureTest::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Varchitecture___024unit__03a__03aArchitectureTest::to_string_middle\n"); );
    // Body
    std::string out;
    out += "env:" + VL_TO_STRING(__PVT__env);
    out += ", "+ Varchitecture_uvm_pkg__03a__03auvm_test::to_string_middle();
    return (out);
}
