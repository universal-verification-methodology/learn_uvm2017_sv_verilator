// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_and_gate_uvm.h for the primary calling header

#include "Vtest_and_gate_uvm__pch.h"

void Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction__Vclpkg::__VnoInFunc_get_type(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__pi60> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__pi60> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi60__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction__Vclpkg::__VnoInFunc_type_name(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "AndGateTransaction"s;
}

void Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction::__VnoInFunc_get_object_type(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__pi60> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi60__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction::__VnoInFunc_create(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction> tmp;
    tmp = ((""s == name) ? VL_NEW(Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction, vlProcess, vlSymsp, "AndGateTransaction"s)
            : VL_NEW(Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction::__VnoInFunc_get_type_name(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "AndGateTransaction"s;
}

Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction::Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name)
    : Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_sequence_item(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction::__VnoInFunc_convert2string\n"); );
    // Body
    convert2string__Vfuncrtn = VL_SFORMATF_N_NX("a=%0b, b=%0b, expected_y=%0b",0,
                                                1,this->__PVT__a,
                                                1,(IData)(this->__PVT__b),
                                                1,this->__PVT__expected_y) ;
}

void Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction::__VnoInFunc_randomize(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__5__Vfuncout;
    __Vfunc___VBasicRand__5__Vfuncout = 0;
    // Body
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__5__Vfuncout);
            }(), __Vfunc___VBasicRand__5__Vfuncout));
}

void Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction::__VnoInFunc___Vsetup_constraints(Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction::__VnoInFunc___Vsetup_constraints\n"); );
    // Body
}

void Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction::__VnoInFunc___VBasicRand(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
    this->__PVT__a = (1U & VL_RANDOM_RNG_I(__Vm_rng));
    this->__PVT__b = (1U & VL_RANDOM_RNG_I(__Vm_rng));
}

void Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction::_ctor_var_reset(Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__a = 0;
    __PVT__b = 0;
    __PVT__expected_y = 0;
}

Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction::~Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction::to_string_middle\n"); );
    // Body
    std::string out;
    out += "a:" + VL_TO_STRING(__PVT__a);
    out += ", b:" + VL_TO_STRING(__PVT__b);
    out += ", expected_y:" + VL_TO_STRING(__PVT__expected_y);
    out += ", "+ Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_sequence_item::to_string_middle();
    return (out);
}
