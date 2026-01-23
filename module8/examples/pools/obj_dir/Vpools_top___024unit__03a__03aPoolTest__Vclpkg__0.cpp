// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpools_top.h for the primary calling header

#include "Vpools_top__pch.h"

void Vpools_top___024unit__03a__03aPoolTest__Vclpkg::__VnoInFunc_get_type(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_component_registry__pi1> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vpools_top___024unit__03a__03aPoolTest__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_component_registry__pi1> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi1__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vpools_top___024unit__03a__03aPoolTest__Vclpkg::__VnoInFunc_type_name(Vpools_top__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vpools_top___024unit__03a__03aPoolTest__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "PoolTest"s;
}

void Vpools_top___024unit__03a__03aPoolTest::__VnoInFunc_get_object_type(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vpools_top___024unit__03a__03aPoolTest::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_component_registry__pi1> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi1__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vpools_top___024unit__03a__03aPoolTest::__VnoInFunc_get_type_name(Vpools_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vpools_top___024unit__03a__03aPoolTest::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "PoolTest"s;
}

Vpools_top___024unit__03a__03aPoolTest::Vpools_top___024unit__03a__03aPoolTest(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_component> parent)
    : Vpools_top_uvm_pkg__03a__03auvm_test(vlProcess, vlSymsp, name, parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vpools_top___024unit__03a__03aPoolTest::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vpools_top___024unit__03a__03aPoolTest::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vpools_top___024unit__03a__03aPoolTest::__VnoInFunc_build_phase\n"); );
    // Locals
    VlClassRef<Vpools_top___024unit__03a__03aTransactionPool> __Vfunc_create__3__Vfuncout;
    // Body
    Vpools_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz3_TBz4__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "pool"s, VlNull{}, ""s, __Vfunc_create__3__Vfuncout);
    this->__PVT__pool = __Vfunc_create__3__Vfuncout;
}

VlCoroutine Vpools_top___024unit__03a__03aPoolTest::__VnoInFunc_run_phase(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vpools_top___024unit__03a__03aPoolTest::__VnoInFunc_run_phase\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__5__Vfuncout;
    __Vfunc_uvm_report_enabled__5__Vfuncout = 0;
    VlClassRef<Vpools_top___024unit__03a__03aPoolTransaction> __Vtask_allocate__7__Vfuncout;
    IData/*31:0*/ __Vtask_randomize__8__Vfuncout;
    __Vtask_randomize__8__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__9__Vfuncout;
    __Vfunc_uvm_report_enabled__9__Vfuncout = 0;
    std::string __Vtask_convert2string__11__Vfuncout;
    std::string __Vtemp_1;
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0;
    VlClassRef<Vpools_top___024unit__03a__03aPoolTransaction> unnamedblk1__DOT__unnamedblk2__DOT__allocated_txn;
    IData/*31:0*/ unnamedblk3__DOT__i;
    unnamedblk3__DOT__i = 0;
    VlQueue<VlClassRef<Vpools_top___024unit__03a__03aPoolTransaction>> txn;
    VL_NULL_CHECK(phase, "pools.sv", 117)->__VnoInFunc_raise_objection(vlProcess, vlSymsp, 
                                                                       VlClassRef<Vpools_top___024unit__03a__03aPoolTest>{this}, ""s, 1U);
    if ((0U != ([&]() {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "POOL"s, __Vfunc_uvm_report_enabled__5__Vfuncout);
                }(), __Vfunc_uvm_report_enabled__5__Vfuncout))) {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "POOL"s, "Testing object pool"s, 0x00000064U, "pools.sv"s, 0x00000077U, ""s, 1U);
    }
    unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x0000000fU, unnamedblk1__DOT__i)) {
        VL_NULL_CHECK(this->__PVT__pool, "pools.sv", 123)->__VnoInFunc_allocate(vlProcess, vlSymsp, __Vtask_allocate__7__Vfuncout);
        unnamedblk1__DOT__unnamedblk2__DOT__allocated_txn 
            = __Vtask_allocate__7__Vfuncout;
        VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__allocated_txn, "pools.sv", 124)->__VnoInFunc_randomize(vlSymsp, __Vtask_randomize__8__Vfuncout);
        VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__allocated_txn, "pools.sv", 125)->__PVT__data 
            = (0x000000ffU & VL_SHIFTL_III(8,32,32, unnamedblk1__DOT__i, 4U));
        VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__allocated_txn, "pools.sv", 126)->__PVT__address 
            = (0x0000ffffU & VL_SHIFTL_III(16,32,32, unnamedblk1__DOT__i, 8U));
        txn.push_back(unnamedblk1__DOT__unnamedblk2__DOT__allocated_txn);
        if ((0U != ([&]() {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000000c8U, 0U, "POOL"s, __Vfunc_uvm_report_enabled__9__Vfuncout);
                    }(), __Vfunc_uvm_report_enabled__9__Vfuncout))) {
            __Vtemp_1 = ([&]() {
                    VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__allocated_txn, "pools.sv", 128)
                         ->__VnoInFunc_convert2string(vlProcess, vlSymsp, __Vtask_convert2string__11__Vfuncout);
                }(), __Vtask_convert2string__11__Vfuncout);
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "POOL"s, VL_SFORMATF_N_NX("Allocated #%0d: %@",0,
                                                                                32,
                                                                                unnamedblk1__DOT__i,
                                                                                -1,
                                                                                &(__Vtemp_1)) , 0x000000c8U, "pools.sv"s, 0x00000080U, ""s, 1U);
        }
        co_await vlSymsp->TOP.__VdlySched.delay(0x000000000000000aULL, 
                                                vlProcess, 
                                                "pools.sv", 
                                                129);
        unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
    }
    unnamedblk3__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk3__DOT__i, txn.size())) {
        VL_NULL_CHECK(this->__PVT__pool, "pools.sv", 134)->__VnoInFunc_free(vlProcess, vlSymsp, txn.at(unnamedblk3__DOT__i));
        co_await vlSymsp->TOP.__VdlySched.delay(0x000000000000000aULL, 
                                                vlProcess, 
                                                "pools.sv", 
                                                135);
        unnamedblk3__DOT__i = ((IData)(1U) + unnamedblk3__DOT__i);
    }
    co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000032ULL, 
                                            vlProcess, 
                                            "pools.sv", 
                                            138);
    VL_NULL_CHECK(phase, "pools.sv", 139)->__VnoInFunc_drop_objection(vlProcess, vlSymsp, 
                                                                      VlClassRef<Vpools_top___024unit__03a__03aPoolTest>{this}, ""s, 1U);
    co_return;}

void Vpools_top___024unit__03a__03aPoolTest::__VnoInFunc_randomize(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vpools_top___024unit__03a__03aPoolTest::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__15__Vfuncout;
    __Vfunc___VBasicRand__15__Vfuncout = 0;
    // Body
    Vpools_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vpools_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__15__Vfuncout);
            }(), __Vfunc___VBasicRand__15__Vfuncout));
}

void Vpools_top___024unit__03a__03aPoolTest::__VnoInFunc___Vsetup_constraints(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vpools_top___024unit__03a__03aPoolTest::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vpools_top___024unit__03a__03aPoolTest::__VnoInFunc___VBasicRand(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vpools_top___024unit__03a__03aPoolTest::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vpools_top___024unit__03a__03aPoolTest::_ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vpools_top___024unit__03a__03aPoolTest::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vpools_top___024unit__03a__03aPoolTest::~Vpools_top___024unit__03a__03aPoolTest() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vpools_top___024unit__03a__03aPoolTest::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vpools_top___024unit__03a__03aPoolTest>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vpools_top___024unit__03a__03aPoolTest::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vpools_top___024unit__03a__03aPoolTest::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vpools_top___024unit__03a__03aPoolTest::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vpools_top___024unit__03a__03aPoolTest::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vpools_top___024unit__03a__03aPoolTest::to_string_middle\n"); );
    // Body
    std::string out;
    out += "pool:" + VL_TO_STRING(__PVT__pool);
    out += ", "+ Vpools_top_uvm_pkg__03a__03auvm_test::to_string_middle();
    return (out);
}
