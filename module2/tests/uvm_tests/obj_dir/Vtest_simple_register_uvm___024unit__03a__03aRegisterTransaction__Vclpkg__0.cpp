// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_simple_register_uvm.h for the primary calling header

#include "Vtest_simple_register_uvm__pch.h"

void Vtest_simple_register_uvm___024unit__03a__03aRegisterTransaction__Vclpkg::__VnoInFunc_get_type(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_registry__pi60> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm___024unit__03a__03aRegisterTransaction__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_registry__pi60> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi60__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterTransaction__Vclpkg::__VnoInFunc_type_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm___024unit__03a__03aRegisterTransaction__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "RegisterTransaction"s;
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterTransaction::__VnoInFunc_get_object_type(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_simple_register_uvm___024unit__03a__03aRegisterTransaction::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_registry__pi60> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi60__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterTransaction::__VnoInFunc_create(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_simple_register_uvm___024unit__03a__03aRegisterTransaction::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtest_simple_register_uvm___024unit__03a__03aRegisterTransaction> tmp;
    tmp = ((""s == name) ? VL_NEW(Vtest_simple_register_uvm___024unit__03a__03aRegisterTransaction, vlProcess, vlSymsp, "RegisterTransaction"s)
            : VL_NEW(Vtest_simple_register_uvm___024unit__03a__03aRegisterTransaction, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterTransaction::__VnoInFunc_get_type_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_simple_register_uvm___024unit__03a__03aRegisterTransaction::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "RegisterTransaction"s;
}

Vtest_simple_register_uvm___024unit__03a__03aRegisterTransaction::Vtest_simple_register_uvm___024unit__03a__03aRegisterTransaction(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name)
    : Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_item(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_simple_register_uvm___024unit__03a__03aRegisterTransaction::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterTransaction::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_simple_register_uvm___024unit__03a__03aRegisterTransaction::__VnoInFunc_convert2string\n"); );
    // Body
    convert2string__Vfuncrtn = VL_SFORMATF_N_NX("data=0x%02x, expected_q=0x%02x",0,
                                                8,this->__PVT__data,
                                                8,(IData)(this->__PVT__expected_q)) ;
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterTransaction::__VnoInFunc_randomize(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_simple_register_uvm___024unit__03a__03aRegisterTransaction::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__5__Vfuncout;
    __Vfunc___Vbasic_randomize__5__Vfuncout = 0;
    // Body
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__5__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__5__Vfuncout));
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterTransaction::__VnoInFunc___Vbasic_randomize(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_simple_register_uvm___024unit__03a__03aRegisterTransaction::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
    this->__PVT__data = (0x000000ffU & VL_RANDOM_RNG_I(__Vm_rng));
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterTransaction::_ctor_var_reset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_simple_register_uvm___024unit__03a__03aRegisterTransaction::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__data = VL_SCOPED_RAND_RESET_I(8, 11998406229723950215ULL, 10363016170300574568ull);
    __PVT__expected_q = VL_SCOPED_RAND_RESET_I(8, 11998406229723950215ULL, 10019076223413646949ull);
}

std::string VL_TO_STRING(const VlClassRef<Vtest_simple_register_uvm___024unit__03a__03aRegisterTransaction>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_simple_register_uvm___024unit__03a__03aRegisterTransaction::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtest_simple_register_uvm___024unit__03a__03aRegisterTransaction::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_simple_register_uvm___024unit__03a__03aRegisterTransaction::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtest_simple_register_uvm___024unit__03a__03aRegisterTransaction::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_simple_register_uvm___024unit__03a__03aRegisterTransaction::to_string_middle\n"); );
    // Body
    std::string out;
    out += "data:" + VL_TO_STRING(__PVT__data);
    out += ", expected_q:" + VL_TO_STRING(__PVT__expected_q);
    out += ", "+ Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_item::to_string_middle();
    return (out);
}
