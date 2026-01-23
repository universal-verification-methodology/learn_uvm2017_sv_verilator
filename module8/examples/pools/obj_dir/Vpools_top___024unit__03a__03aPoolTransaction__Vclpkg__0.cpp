// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpools_top.h for the primary calling header

#include "Vpools_top__pch.h"

void Vpools_top___024unit__03a__03aPoolTransaction__Vclpkg::__VnoInFunc_get_type(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_registry__Tz1_TBz2> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vpools_top___024unit__03a__03aPoolTransaction__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_registry__Tz1_TBz2> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz1_TBz2__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vpools_top___024unit__03a__03aPoolTransaction__Vclpkg::__VnoInFunc_type_name(Vpools_top__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vpools_top___024unit__03a__03aPoolTransaction__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "PoolTransaction"s;
}

void Vpools_top___024unit__03a__03aPoolTransaction::__VnoInFunc_get_object_type(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vpools_top___024unit__03a__03aPoolTransaction::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_registry__Tz1_TBz2> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz1_TBz2__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vpools_top___024unit__03a__03aPoolTransaction::__VnoInFunc_create(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vpools_top___024unit__03a__03aPoolTransaction::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vpools_top___024unit__03a__03aPoolTransaction> tmp;
    tmp = ((""s == name) ? VL_NEW(Vpools_top___024unit__03a__03aPoolTransaction, vlProcess, vlSymsp, "PoolTransaction"s)
            : VL_NEW(Vpools_top___024unit__03a__03aPoolTransaction, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vpools_top___024unit__03a__03aPoolTransaction::__VnoInFunc_get_type_name(Vpools_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vpools_top___024unit__03a__03aPoolTransaction::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "PoolTransaction"s;
}

Vpools_top___024unit__03a__03aPoolTransaction::Vpools_top___024unit__03a__03aPoolTransaction(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name)
    : Vpools_top_uvm_pkg__03a__03auvm_sequence_item(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vpools_top___024unit__03a__03aPoolTransaction::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vpools_top___024unit__03a__03aPoolTransaction::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vpools_top___024unit__03a__03aPoolTransaction::__VnoInFunc_convert2string\n"); );
    // Body
    convert2string__Vfuncrtn = VL_SFORMATF_N_NX("data=0x%02x, addr=0x%04x",0,
                                                8,this->__PVT__data,
                                                16,
                                                (IData)(this->__PVT__address)) ;
}

void Vpools_top___024unit__03a__03aPoolTransaction::__VnoInFunc_randomize(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vpools_top___024unit__03a__03aPoolTransaction::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__5__Vfuncout;
    __Vfunc___VBasicRand__5__Vfuncout = 0;
    // Body
    Vpools_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vpools_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__5__Vfuncout);
            }(), __Vfunc___VBasicRand__5__Vfuncout));
}

void Vpools_top___024unit__03a__03aPoolTransaction::__VnoInFunc___Vsetup_constraints(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vpools_top___024unit__03a__03aPoolTransaction::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vpools_top___024unit__03a__03aPoolTransaction::__VnoInFunc___VBasicRand(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vpools_top___024unit__03a__03aPoolTransaction::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
    this->__PVT__data = (0x000000ffU & VL_RANDOM_RNG_I(__Vm_rng));
    this->__PVT__address = (0x0000ffffU & VL_RANDOM_RNG_I(__Vm_rng));
}

void Vpools_top___024unit__03a__03aPoolTransaction::_ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vpools_top___024unit__03a__03aPoolTransaction::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__data = VL_SCOPED_RAND_RESET_I(8, 438304391764213034ULL, 10363016170300574568ull);
    __PVT__address = VL_SCOPED_RAND_RESET_I(16, 438304391764213034ULL, 12021632533271657083ull);
}

Vpools_top___024unit__03a__03aPoolTransaction::~Vpools_top___024unit__03a__03aPoolTransaction() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vpools_top___024unit__03a__03aPoolTransaction::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vpools_top___024unit__03a__03aPoolTransaction>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vpools_top___024unit__03a__03aPoolTransaction::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vpools_top___024unit__03a__03aPoolTransaction::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vpools_top___024unit__03a__03aPoolTransaction::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vpools_top___024unit__03a__03aPoolTransaction::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vpools_top___024unit__03a__03aPoolTransaction::to_string_middle\n"); );
    // Body
    std::string out;
    out += "data:" + VL_TO_STRING(__PVT__data);
    out += ", address:" + VL_TO_STRING(__PVT__address);
    out += ", "+ Vpools_top_uvm_pkg__03a__03auvm_sequence_item::to_string_middle();
    return (out);
}
