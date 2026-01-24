// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"

void Vdma___024unit__03a__03aDmaTest__Vclpkg::__VnoInFunc_get_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_component_registry__pi64> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma___024unit__03a__03aDmaTest__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_component_registry__pi64> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi64__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vdma___024unit__03a__03aDmaTest__Vclpkg::__VnoInFunc_type_name(Vdma__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma___024unit__03a__03aDmaTest__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "DmaTest"s;
}

void Vdma___024unit__03a__03aDmaTest::__VnoInFunc_get_object_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vdma___024unit__03a__03aDmaTest::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_component_registry__pi64> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi64__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vdma___024unit__03a__03aDmaTest::__VnoInFunc_get_type_name(Vdma__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vdma___024unit__03a__03aDmaTest::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "DmaTest"s;
}

Vdma___024unit__03a__03aDmaTest::Vdma___024unit__03a__03aDmaTest(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string n, VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> p)
    : Vdma_uvm_pkg__03a__03auvm_test(vlProcess, vlSymsp, n, p) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vdma___024unit__03a__03aDmaTest::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vdma___024unit__03a__03aDmaTest::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vdma___024unit__03a__03aDmaTest::__VnoInFunc_build_phase\n"); );
    // Locals
    VlClassRef<Vdma___024unit__03a__03aDmaEnv> __Vfunc_create__3__Vfuncout;
    // Body
    Vdma_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi63__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "env"s, 
                                                                                VlClassRef<Vdma___024unit__03a__03aDmaTest>{this}, ""s, __Vfunc_create__3__Vfuncout);
    this->__PVT__env = __Vfunc_create__3__Vfuncout;
}

VlCoroutine Vdma___024unit__03a__03aDmaTest::__VnoInFunc_run_phase(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vdma___024unit__03a__03aDmaTest::__VnoInFunc_run_phase\n"); );
    // Locals
    VlClassRef<Vdma___024unit__03a__03aDmaSeq> __Vfunc_create__5__Vfuncout;
    // Body
    VL_KEEP_THIS;
    VlClassRef<Vdma___024unit__03a__03aDmaSeq> seq;
    VL_NULL_CHECK(phase, "dma.sv", 244)->__VnoInFunc_raise_objection(vlProcess, vlSymsp, 
                                                                     VlClassRef<Vdma___024unit__03a__03aDmaTest>{this}, ""s, 1U);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi61__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "seq"s, VlNull{}, ""s, __Vfunc_create__5__Vfuncout);
    seq = __Vfunc_create__5__Vfuncout;
    co_await VL_NULL_CHECK(seq, "dma.sv", 246)->__VnoInFunc_start(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__env, "dma.sv", 246)
                                                                  ->__PVT__seqr, VlNull{}, 0xffffffffU, 1U);
    co_await vlSymsp->TOP.__VdlySched.delay(0x00000000001e8480ULL, 
                                            vlProcess, 
                                            "dma.sv", 
                                            247);
    VL_NULL_CHECK(phase, "dma.sv", 248)->__VnoInFunc_drop_objection(vlProcess, vlSymsp, 
                                                                    VlClassRef<Vdma___024unit__03a__03aDmaTest>{this}, ""s, 1U);
    co_return;}

void Vdma___024unit__03a__03aDmaTest::__VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vdma___024unit__03a__03aDmaTest::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__9__Vfuncout;
    __Vfunc___VBasicRand__9__Vfuncout = 0;
    // Body
    Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__9__Vfuncout);
            }(), __Vfunc___VBasicRand__9__Vfuncout));
}

void Vdma___024unit__03a__03aDmaTest::__VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vdma___024unit__03a__03aDmaTest::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vdma___024unit__03a__03aDmaTest::__VnoInFunc___VBasicRand(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vdma___024unit__03a__03aDmaTest::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vdma___024unit__03a__03aDmaTest::_ctor_var_reset(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vdma___024unit__03a__03aDmaTest::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vdma___024unit__03a__03aDmaTest::~Vdma___024unit__03a__03aDmaTest() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vdma___024unit__03a__03aDmaTest::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vdma___024unit__03a__03aDmaTest>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vdma___024unit__03a__03aDmaTest::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vdma___024unit__03a__03aDmaTest::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vdma___024unit__03a__03aDmaTest::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vdma___024unit__03a__03aDmaTest::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vdma___024unit__03a__03aDmaTest::to_string_middle\n"); );
    // Body
    std::string out;
    out += "env:" + VL_TO_STRING(__PVT__env);
    out += ", "+ Vdma_uvm_pkg__03a__03auvm_test::to_string_middle();
    return (out);
}
