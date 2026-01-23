// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varchitecture.h for the primary calling header

#include "Varchitecture__pch.h"

void Varchitecture___024unit__03a__03aArchTxn__Vclpkg::__VnoInFunc_get_type(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_registry__Tz1_TBz2> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Varchitecture___024unit__03a__03aArchTxn__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_registry__Tz1_TBz2> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz1_TBz2__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Varchitecture___024unit__03a__03aArchTxn__Vclpkg::__VnoInFunc_type_name(Varchitecture__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Varchitecture___024unit__03a__03aArchTxn__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "ArchTxn"s;
}

void Varchitecture___024unit__03a__03aArchTxn::__VnoInFunc_get_object_type(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Varchitecture___024unit__03a__03aArchTxn::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_registry__Tz1_TBz2> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz1_TBz2__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Varchitecture___024unit__03a__03aArchTxn::__VnoInFunc_create(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Varchitecture___024unit__03a__03aArchTxn::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Varchitecture___024unit__03a__03aArchTxn> tmp;
    tmp = ((""s == name) ? VL_NEW(Varchitecture___024unit__03a__03aArchTxn, vlProcess, vlSymsp, "ArchTxn"s)
            : VL_NEW(Varchitecture___024unit__03a__03aArchTxn, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Varchitecture___024unit__03a__03aArchTxn::__VnoInFunc_get_type_name(Varchitecture__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Varchitecture___024unit__03a__03aArchTxn::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "ArchTxn"s;
}

Varchitecture___024unit__03a__03aArchTxn::Varchitecture___024unit__03a__03aArchTxn(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name)
    : Varchitecture_uvm_pkg__03a__03auvm_sequence_item(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Varchitecture___024unit__03a__03aArchTxn::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Varchitecture___024unit__03a__03aArchTxn::__VnoInFunc_convert2string(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Varchitecture___024unit__03a__03aArchTxn::__VnoInFunc_convert2string\n"); );
    // Body
    convert2string__Vfuncrtn = VL_SFORMATF_N_NX("addr=0x%08x data=0x%08x is_write=%0b",0,
                                                32,
                                                this->__PVT__addr,
                                                32,
                                                this->__PVT__data,
                                                1,(IData)(this->__PVT__is_write)) ;
}

void Varchitecture___024unit__03a__03aArchTxn::__VnoInFunc_randomize(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Varchitecture___024unit__03a__03aArchTxn::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__5__Vfuncout;
    __Vfunc___VBasicRand__5__Vfuncout = 0;
    // Body
    Varchitecture_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Varchitecture_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__5__Vfuncout);
            }(), __Vfunc___VBasicRand__5__Vfuncout));
}

void Varchitecture___024unit__03a__03aArchTxn::__VnoInFunc___Vsetup_constraints(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Varchitecture___024unit__03a__03aArchTxn::__VnoInFunc___Vsetup_constraints\n"); );
}

void Varchitecture___024unit__03a__03aArchTxn::__VnoInFunc___VBasicRand(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Varchitecture___024unit__03a__03aArchTxn::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
    this->__PVT__addr = VL_RANDOM_RNG_I(__Vm_rng);
    this->__PVT__data = VL_RANDOM_RNG_I(__Vm_rng);
    this->__PVT__is_write = (1U & VL_RANDOM_RNG_I(__Vm_rng));
}

void Varchitecture___024unit__03a__03aArchTxn::__VnoInFunc___Vrandwith_h6b5f49b2__0(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vrandwith_h6b5f49b2__0__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Varchitecture___024unit__03a__03aArchTxn::__VnoInFunc___Vrandwith_h6b5f49b2__0\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__7__Vfuncout;
    __Vfunc___VBasicRand__7__Vfuncout = 0;
    // Body
    Varchitecture_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    VlRandomizer randomizer;
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomizer = Varchitecture_uvm_pkg__03a__03auvm_void::__PVT__constraint;
    randomizer.hard("(bvor (__Vbv (= ((_ zero_extend 31) is_write) #x00000000)) (__Vbv (= ((_ zero_extend 31) is_write) #x00000001)))"s, "architecture.sv", 
                    89, "      void'(t.randomize() with { is_write inside {0,1}; });");
    randomizer.write_var(this->__PVT__is_write, 1ULL, 
                         "is_write", 0ULL);
    randomizer.write_var(this->__PVT__is_write, 1ULL, 
                         "is_write", 0ULL);
    __Vrandwith_h6b5f49b2__0__Vfuncrtn = (([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__7__Vfuncout);
            }(), __Vfunc___VBasicRand__7__Vfuncout) 
                                          & randomizer.next(__Vm_rng));
}

void Varchitecture___024unit__03a__03aArchTxn::_ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Varchitecture___024unit__03a__03aArchTxn::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__addr = 0;
    __PVT__data = 0;
    __PVT__is_write = 0;
}

Varchitecture___024unit__03a__03aArchTxn::~Varchitecture___024unit__03a__03aArchTxn() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Varchitecture___024unit__03a__03aArchTxn::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Varchitecture___024unit__03a__03aArchTxn>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Varchitecture___024unit__03a__03aArchTxn::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Varchitecture___024unit__03a__03aArchTxn::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Varchitecture___024unit__03a__03aArchTxn::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Varchitecture___024unit__03a__03aArchTxn::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Varchitecture___024unit__03a__03aArchTxn::to_string_middle\n"); );
    // Body
    std::string out;
    out += "addr:" + VL_TO_STRING(__PVT__addr);
    out += ", data:" + VL_TO_STRING(__PVT__data);
    out += ", is_write:" + VL_TO_STRING(__PVT__is_write);
    out += ", "+ Varchitecture_uvm_pkg__03a__03auvm_sequence_item::to_string_middle();
    return (out);
}
