// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrecorders_top.h for the primary calling header

#include "Vrecorders_top__pch.h"

void Vrecorders_top___024unit__03a__03aRecorderTest__Vclpkg::__VnoInFunc_get_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_component_registry__pi2> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vrecorders_top___024unit__03a__03aRecorderTest__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_component_registry__pi2> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi2__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vrecorders_top___024unit__03a__03aRecorderTest__Vclpkg::__VnoInFunc_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vrecorders_top___024unit__03a__03aRecorderTest__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "RecorderTest"s;
}

void Vrecorders_top___024unit__03a__03aRecorderTest::__VnoInFunc_get_object_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrecorders_top___024unit__03a__03aRecorderTest::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_component_registry__pi2> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi2__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vrecorders_top___024unit__03a__03aRecorderTest::__VnoInFunc_get_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrecorders_top___024unit__03a__03aRecorderTest::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "RecorderTest"s;
}

Vrecorders_top___024unit__03a__03aRecorderTest::Vrecorders_top___024unit__03a__03aRecorderTest(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_component> parent)
    : Vrecorders_top_uvm_pkg__03a__03auvm_test(vlProcess, vlSymsp, name, parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrecorders_top___024unit__03a__03aRecorderTest::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    this->__PVT__transaction_port = VL_NEW(Vrecorders_top_uvm_pkg__03a__03auvm_analysis_port__Tz1, vlProcess, vlSymsp, "transaction_port"s, 
                                           VlClassRef<Vrecorders_top___024unit__03a__03aRecorderTest>{this});
}

void Vrecorders_top___024unit__03a__03aRecorderTest::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrecorders_top___024unit__03a__03aRecorderTest::__VnoInFunc_build_phase\n"); );
    // Locals
    VlClassRef<Vrecorders_top___024unit__03a__03aTransactionRecorder> __Vfunc_create__4__Vfuncout;
    // Body
    Vrecorders_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi1__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "recorder"s, 
                                                                                VlClassRef<Vrecorders_top___024unit__03a__03aRecorderTest>{this}, ""s, __Vfunc_create__4__Vfuncout);
    this->__PVT__recorder = __Vfunc_create__4__Vfuncout;
}

void Vrecorders_top___024unit__03a__03aRecorderTest::__VnoInFunc_connect_phase(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrecorders_top___024unit__03a__03aRecorderTest::__VnoInFunc_connect_phase\n"); );
    // Body
    Vrecorders_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_connect_phase(vlProcess, vlSymsp, phase);
    VL_NULL_CHECK(this->__PVT__transaction_port, "recorders.sv", 110)->__VnoInFunc_connect(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__recorder, "recorders.sv", 110)
                                                                                ->__PVT__analysis_imp);
}

VlCoroutine Vrecorders_top___024unit__03a__03aRecorderTest::__VnoInFunc_run_phase(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrecorders_top___024unit__03a__03aRecorderTest::__VnoInFunc_run_phase\n"); );
    // Locals
    VlClassRef<Vrecorders_top___024unit__03a__03aRecorderTransaction> __Vfunc_create__8__Vfuncout;
    IData/*31:0*/ __Vtask_randomize__9__Vfuncout;
    __Vtask_randomize__9__Vfuncout = 0;
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0;
    VlClassRef<Vrecorders_top___024unit__03a__03aRecorderTransaction> txn;
    VL_NULL_CHECK(phase, "recorders.sv", 115)->__VnoInFunc_raise_objection(vlProcess, vlSymsp, 
                                                                           VlClassRef<Vrecorders_top___024unit__03a__03aRecorderTest>{this}, ""s, 1U);
    unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x0000000aU, unnamedblk1__DOT__i)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz1_TBz2__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "txn"s, VlNull{}, ""s, __Vfunc_create__8__Vfuncout);
        txn = __Vfunc_create__8__Vfuncout;
        VL_NULL_CHECK(txn, "recorders.sv", 120)->__VnoInFunc_randomize(vlSymsp, __Vtask_randomize__9__Vfuncout);
        VL_NULL_CHECK(txn, "recorders.sv", 121)->__PVT__timestamp 
            = VL_MULS_III(32, (IData)(0x0000000aU), unnamedblk1__DOT__i);
        VL_NULL_CHECK(this->__PVT__transaction_port, "recorders.sv", 122)->__VnoInFunc_write(vlProcess, vlSymsp, txn);
        co_await vlSymsp->TOP.__VdlySched.delay(0x000000000000000aULL, 
                                                vlProcess, 
                                                "recorders.sv", 
                                                123);
        unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
    }
    co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000032ULL, 
                                            vlProcess, 
                                            "recorders.sv", 
                                            126);
    VL_NULL_CHECK(this->__PVT__recorder, "recorders.sv", 127)->__VnoInFunc_playback_transactions(vlProcess, vlSymsp);
    co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000032ULL, 
                                            vlProcess, 
                                            "recorders.sv", 
                                            129);
    VL_NULL_CHECK(phase, "recorders.sv", 130)->__VnoInFunc_drop_objection(vlProcess, vlSymsp, 
                                                                          VlClassRef<Vrecorders_top___024unit__03a__03aRecorderTest>{this}, ""s, 1U);
    co_return;}

void Vrecorders_top___024unit__03a__03aRecorderTest::__VnoInFunc_randomize(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrecorders_top___024unit__03a__03aRecorderTest::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__14__Vfuncout;
    __Vfunc___VBasicRand__14__Vfuncout = 0;
    // Body
    Vrecorders_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vrecorders_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__14__Vfuncout);
            }(), __Vfunc___VBasicRand__14__Vfuncout));
}

void Vrecorders_top___024unit__03a__03aRecorderTest::__VnoInFunc___Vsetup_constraints(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrecorders_top___024unit__03a__03aRecorderTest::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vrecorders_top___024unit__03a__03aRecorderTest::__VnoInFunc___VBasicRand(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrecorders_top___024unit__03a__03aRecorderTest::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vrecorders_top___024unit__03a__03aRecorderTest::_ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrecorders_top___024unit__03a__03aRecorderTest::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vrecorders_top___024unit__03a__03aRecorderTest::~Vrecorders_top___024unit__03a__03aRecorderTest() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrecorders_top___024unit__03a__03aRecorderTest::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top___024unit__03a__03aRecorderTest>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrecorders_top___024unit__03a__03aRecorderTest::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vrecorders_top___024unit__03a__03aRecorderTest::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrecorders_top___024unit__03a__03aRecorderTest::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vrecorders_top___024unit__03a__03aRecorderTest::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrecorders_top___024unit__03a__03aRecorderTest::to_string_middle\n"); );
    // Body
    std::string out;
    out += "recorder:" + VL_TO_STRING(__PVT__recorder);
    out += ", transaction_port:" + VL_TO_STRING(__PVT__transaction_port);
    out += ", "+ Vrecorders_top_uvm_pkg__03a__03auvm_test::to_string_middle();
    return (out);
}
