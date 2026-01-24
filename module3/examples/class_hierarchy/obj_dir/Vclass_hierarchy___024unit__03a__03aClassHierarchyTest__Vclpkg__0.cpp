// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclass_hierarchy.h for the primary calling header

#include "Vclass_hierarchy__pch.h"

void Vclass_hierarchy___024unit__03a__03aClassHierarchyTest__Vclpkg::__VnoInFunc_get_type(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__pi5> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vclass_hierarchy___024unit__03a__03aClassHierarchyTest__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__pi5> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi5__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vclass_hierarchy___024unit__03a__03aClassHierarchyTest__Vclpkg::__VnoInFunc_type_name(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vclass_hierarchy___024unit__03a__03aClassHierarchyTest__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "ClassHierarchyTest"s;
}

void Vclass_hierarchy___024unit__03a__03aClassHierarchyTest::__VnoInFunc_get_object_type(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aClassHierarchyTest::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__pi5> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi5__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vclass_hierarchy___024unit__03a__03aClassHierarchyTest::__VnoInFunc_get_type_name(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aClassHierarchyTest::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "ClassHierarchyTest"s;
}

Vclass_hierarchy___024unit__03a__03aClassHierarchyTest::Vclass_hierarchy___024unit__03a__03aClassHierarchyTest(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component> parent)
    : Vclass_hierarchy_uvm_pkg__03a__03auvm_test(vlProcess, vlSymsp, name, parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aClassHierarchyTest::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vclass_hierarchy___024unit__03a__03aClassHierarchyTest::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aClassHierarchyTest::__VnoInFunc_build_phase\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__3__Vfuncout;
    __Vfunc_uvm_report_enabled__3__Vfuncout = 0;
    VlClassRef<Vclass_hierarchy___024unit__03a__03aMyEnv> __Vfunc_create__5__Vfuncout;
    VlClassRef<Vclass_hierarchy___024unit__03a__03aMyTransaction> __Vfunc_create__6__Vfuncout;
    // Body
    Vclass_hierarchy_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    if ((0U != ([&]() {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000000c8U, 0U, "TEST"s, __Vfunc_uvm_report_enabled__3__Vfuncout);
                }(), __Vfunc_uvm_report_enabled__3__Vfuncout))) {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "TEST"s, "Building test component"s, 0x000000c8U, "class_hierarchy.sv"s, 0x000001fdU, ""s, 1U);
    }
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi4__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "env"s, 
                                                                                VlClassRef<Vclass_hierarchy___024unit__03a__03aClassHierarchyTest>{this}, ""s, __Vfunc_create__5__Vfuncout);
    this->__PVT__env = __Vfunc_create__5__Vfuncout;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz1_TBz2__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "txn"s, VlNull{}, ""s, __Vfunc_create__6__Vfuncout);
    this->__PVT__txn = __Vfunc_create__6__Vfuncout;
    VL_NULL_CHECK(this->__PVT__txn, "class_hierarchy.sv", 528)->__PVT__data = 0xaaU;
    VL_NULL_CHECK(this->__PVT__txn, "class_hierarchy.sv", 529)->__PVT__address = 0x1234U;
}

void Vclass_hierarchy___024unit__03a__03aClassHierarchyTest::__VnoInFunc_connect_phase(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aClassHierarchyTest::__VnoInFunc_connect_phase\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__8__Vfuncout;
    __Vfunc_uvm_report_enabled__8__Vfuncout = 0;
    // Body
    Vclass_hierarchy_uvm_pkg__03a__03auvm_component::__VnoInFunc_connect_phase(vlProcess, vlSymsp, phase);
    if ((0U != ([&]() {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000000c8U, 0U, "TEST"s, __Vfunc_uvm_report_enabled__8__Vfuncout);
                }(), __Vfunc_uvm_report_enabled__8__Vfuncout))) {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "TEST"s, "Connecting test components"s, 0x000000c8U, "class_hierarchy.sv"s, 0x00000216U, ""s, 1U);
    }
}

VlCoroutine Vclass_hierarchy___024unit__03a__03aClassHierarchyTest::__VnoInFunc_run_phase(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aClassHierarchyTest::__VnoInFunc_run_phase\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__10__Vfuncout;
    __Vfunc_uvm_report_enabled__10__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__12__Vfuncout;
    __Vfunc_uvm_report_enabled__12__Vfuncout = 0;
    std::string __Vtask_convert2string__14__Vfuncout;
    std::string __Vtemp_1;
    // Body
    VL_KEEP_THIS;
    if ((0U != ([&]() {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000000c8U, 0U, "TEST"s, __Vfunc_uvm_report_enabled__10__Vfuncout);
                }(), __Vfunc_uvm_report_enabled__10__Vfuncout))) {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "TEST"s, "Test run_phase executing"s, 0x000000c8U, "class_hierarchy.sv"s, 0x0000021cU, ""s, 1U);
    }
    if ((0U != ([&]() {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000000c8U, 0U, "TEST"s, __Vfunc_uvm_report_enabled__12__Vfuncout);
                }(), __Vfunc_uvm_report_enabled__12__Vfuncout))) {
        __Vtemp_1 = ([&]() {
                VL_NULL_CHECK(this->__PVT__txn, "class_hierarchy.sv", 544)
                     ->__VnoInFunc_convert2string(vlProcess, vlSymsp, __Vtask_convert2string__14__Vfuncout);
            }(), __Vtask_convert2string__14__Vfuncout);
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "TEST"s, VL_SFORMATF_N_NX("Transaction: %@",0,
                                                                                -1,
                                                                                &(__Vtemp_1)) , 0x000000c8U, "class_hierarchy.sv"s, 0x00000220U, ""s, 1U);
    }
    VL_NULL_CHECK(phase, "class_hierarchy.sv", 548)->__VnoInFunc_raise_objection(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vclass_hierarchy___024unit__03a__03aClassHierarchyTest>{this}, ""s, 1U);
    co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000000c8ULL, 
                                            vlProcess, 
                                            "class_hierarchy.sv", 
                                            552);
    VL_NULL_CHECK(phase, "class_hierarchy.sv", 556)->__VnoInFunc_drop_objection(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vclass_hierarchy___024unit__03a__03aClassHierarchyTest>{this}, ""s, 1U);
    co_return;}

void Vclass_hierarchy___024unit__03a__03aClassHierarchyTest::__VnoInFunc_report_phase(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aClassHierarchyTest::__VnoInFunc_report_phase\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__18__Vfuncout;
    __Vfunc_uvm_report_enabled__18__Vfuncout = 0;
    // Body
    Vclass_hierarchy_uvm_pkg__03a__03auvm_component::__VnoInFunc_report_phase(vlProcess, vlSymsp, phase);
    if ((0U != ([&]() {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000000c8U, 0U, "TEST"s, __Vfunc_uvm_report_enabled__18__Vfuncout);
                }(), __Vfunc_uvm_report_enabled__18__Vfuncout))) {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "TEST"s, "Class hierarchy demonstration complete"s, 0x000000c8U, "class_hierarchy.sv"s, 0x00000231U, ""s, 1U);
    }
}

void Vclass_hierarchy___024unit__03a__03aClassHierarchyTest::__VnoInFunc_randomize(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aClassHierarchyTest::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__21__Vfuncout;
    __Vfunc___VBasicRand__21__Vfuncout = 0;
    // Body
    Vclass_hierarchy_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vclass_hierarchy_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__21__Vfuncout);
            }(), __Vfunc___VBasicRand__21__Vfuncout));
}

void Vclass_hierarchy___024unit__03a__03aClassHierarchyTest::__VnoInFunc___Vsetup_constraints(Vclass_hierarchy__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aClassHierarchyTest::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vclass_hierarchy___024unit__03a__03aClassHierarchyTest::__VnoInFunc___VBasicRand(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aClassHierarchyTest::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vclass_hierarchy___024unit__03a__03aClassHierarchyTest::_ctor_var_reset(Vclass_hierarchy__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aClassHierarchyTest::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vclass_hierarchy___024unit__03a__03aClassHierarchyTest::~Vclass_hierarchy___024unit__03a__03aClassHierarchyTest() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aClassHierarchyTest::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vclass_hierarchy___024unit__03a__03aClassHierarchyTest>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aClassHierarchyTest::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vclass_hierarchy___024unit__03a__03aClassHierarchyTest::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aClassHierarchyTest::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vclass_hierarchy___024unit__03a__03aClassHierarchyTest::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aClassHierarchyTest::to_string_middle\n"); );
    // Body
    std::string out;
    out += "env:" + VL_TO_STRING(__PVT__env);
    out += ", txn:" + VL_TO_STRING(__PVT__txn);
    out += ", "+ Vclass_hierarchy_uvm_pkg__03a__03auvm_test::to_string_middle();
    return (out);
}
