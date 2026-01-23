// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_and_gate_uvm.h for the primary calling header

#include "Vtest_and_gate_uvm__pch.h"

void Vtest_and_gate_uvm___024unit__03a__03aAndGateSequence__Vclpkg::__VnoInFunc_get_type(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__pi61> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm___024unit__03a__03aAndGateSequence__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__pi61> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi61__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtest_and_gate_uvm___024unit__03a__03aAndGateSequence__Vclpkg::__VnoInFunc_type_name(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm___024unit__03a__03aAndGateSequence__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "AndGateSequence"s;
}

void Vtest_and_gate_uvm___024unit__03a__03aAndGateSequence::__VnoInFunc_get_object_type(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_and_gate_uvm___024unit__03a__03aAndGateSequence::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__pi61> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi61__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtest_and_gate_uvm___024unit__03a__03aAndGateSequence::__VnoInFunc_create(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_and_gate_uvm___024unit__03a__03aAndGateSequence::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateSequence> tmp;
    tmp = ((""s == name) ? VL_NEW(Vtest_and_gate_uvm___024unit__03a__03aAndGateSequence, vlProcess, vlSymsp, "AndGateSequence"s)
            : VL_NEW(Vtest_and_gate_uvm___024unit__03a__03aAndGateSequence, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vtest_and_gate_uvm___024unit__03a__03aAndGateSequence::__VnoInFunc_get_type_name(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_and_gate_uvm___024unit__03a__03aAndGateSequence::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "AndGateSequence"s;
}

Vtest_and_gate_uvm___024unit__03a__03aAndGateSequence::Vtest_and_gate_uvm___024unit__03a__03aAndGateSequence(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name)
    : Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_sequence__Tz126_TBz126(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_and_gate_uvm___024unit__03a__03aAndGateSequence::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

VlCoroutine Vtest_and_gate_uvm___024unit__03a__03aAndGateSequence::__VnoInFunc_body(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_and_gate_uvm___024unit__03a__03aAndGateSequence::__VnoInFunc_body\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction> __Vfunc_create__4__Vfuncout;
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0;
    VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction> txn;
    VlUnpacked<VlUnpacked<IData/*31:0*/, 3>, 4> test_vectors;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            test_vectors[__Vi0][__Vi1] = 0;
        }
    }
    test_vectors[0U][0U] = 0U;
    test_vectors[0U][1U] = 0U;
    test_vectors[0U][2U] = 0U;
    test_vectors[1U][0U] = 0U;
    test_vectors[1U][1U] = 1U;
    test_vectors[1U][2U] = 0U;
    test_vectors[2U][0U] = 1U;
    test_vectors[2U][1U] = 0U;
    test_vectors[2U][2U] = 0U;
    test_vectors[3U][0U] = 1U;
    test_vectors[3U][1U] = 1U;
    test_vectors[3U][2U] = 1U;
    unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 4U, unnamedblk1__DOT__i)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi60__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "txn"s, VlNull{}, ""s, __Vfunc_create__4__Vfuncout);
        txn = __Vfunc_create__4__Vfuncout;
        VL_NULL_CHECK(txn, "test_and_gate_uvm.sv", 62)->__PVT__a 
            = (1U & test_vectors[(3U & unnamedblk1__DOT__i)]
               [0U]);
        VL_NULL_CHECK(txn, "test_and_gate_uvm.sv", 63)->__PVT__b 
            = (1U & test_vectors[(3U & unnamedblk1__DOT__i)]
               [1U]);
        VL_NULL_CHECK(txn, "test_and_gate_uvm.sv", 64)->__PVT__expected_y 
            = (1U & test_vectors[(3U & unnamedblk1__DOT__i)]
               [2U]);
        co_await this->__VnoInFunc_start_item(vlProcess, vlSymsp, txn, 0xffffffffU, VlNull{});
        co_await this->__VnoInFunc_finish_item(vlProcess, vlSymsp, txn, 0xffffffffU);
        unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
    }
}

void Vtest_and_gate_uvm___024unit__03a__03aAndGateSequence::__VnoInFunc_randomize(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_and_gate_uvm___024unit__03a__03aAndGateSequence::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__8__Vfuncout;
    __Vfunc___Vbasic_randomize__8__Vfuncout = 0;
    // Body
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__8__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__8__Vfuncout));
}

void Vtest_and_gate_uvm___024unit__03a__03aAndGateSequence::__VnoInFunc___Vbasic_randomize(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_and_gate_uvm___024unit__03a__03aAndGateSequence::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vtest_and_gate_uvm___024unit__03a__03aAndGateSequence::_ctor_var_reset(Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_and_gate_uvm___024unit__03a__03aAndGateSequence::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateSequence>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_and_gate_uvm___024unit__03a__03aAndGateSequence::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtest_and_gate_uvm___024unit__03a__03aAndGateSequence::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_and_gate_uvm___024unit__03a__03aAndGateSequence::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtest_and_gate_uvm___024unit__03a__03aAndGateSequence::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_and_gate_uvm___024unit__03a__03aAndGateSequence::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_sequence__Tz126_TBz126::to_string_middle();
    return (out);
}
