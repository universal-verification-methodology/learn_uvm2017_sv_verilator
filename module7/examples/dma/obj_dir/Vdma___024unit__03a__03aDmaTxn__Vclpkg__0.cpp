// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"

void Vdma___024unit__03a__03aDmaTxn__Vclpkg::__VnoInFunc_get_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__pi60> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma___024unit__03a__03aDmaTxn__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__pi60> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi60__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vdma___024unit__03a__03aDmaTxn__Vclpkg::__VnoInFunc_type_name(Vdma__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma___024unit__03a__03aDmaTxn__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "DmaTxn"s;
}

void Vdma___024unit__03a__03aDmaTxn::__VnoInFunc_get_object_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdma___024unit__03a__03aDmaTxn::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__pi60> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi60__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vdma___024unit__03a__03aDmaTxn::__VnoInFunc_create(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdma___024unit__03a__03aDmaTxn::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vdma___024unit__03a__03aDmaTxn> tmp;
    tmp = ((""s == name) ? VL_NEW(Vdma___024unit__03a__03aDmaTxn, vlProcess, vlSymsp, "DmaTxn"s)
            : VL_NEW(Vdma___024unit__03a__03aDmaTxn, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vdma___024unit__03a__03aDmaTxn::__VnoInFunc_get_type_name(Vdma__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdma___024unit__03a__03aDmaTxn::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "DmaTxn"s;
}

Vdma___024unit__03a__03aDmaTxn::Vdma___024unit__03a__03aDmaTxn(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string n)
    : Vdma_uvm_pkg__03a__03auvm_sequence_item(vlProcess, vlSymsp, n) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdma___024unit__03a__03aDmaTxn::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vdma___024unit__03a__03aDmaTxn::__VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdma___024unit__03a__03aDmaTxn::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__5__Vfuncout;
    __Vfunc___VBasicRand__5__Vfuncout = 0;
    // Body
    Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__5__Vfuncout);
            }(), __Vfunc___VBasicRand__5__Vfuncout));
}

void Vdma___024unit__03a__03aDmaTxn::__VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdma___024unit__03a__03aDmaTxn::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vdma___024unit__03a__03aDmaTxn::__VnoInFunc___VBasicRand(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdma___024unit__03a__03aDmaTxn::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
    this->__PVT__src = VL_RANDOM_RNG_I(__Vm_rng);
    this->__PVT__dst = VL_RANDOM_RNG_I(__Vm_rng);
    this->__PVT__len = (0x0000ffffU & VL_RANDOM_RNG_I(__Vm_rng));
    this->__PVT__ch = (7U & VL_RANDOM_RNG_I(__Vm_rng));
}

void Vdma___024unit__03a__03aDmaTxn::__VnoInFunc___Vrandwith_h7091dc69__0(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vrandwith_h7091dc69__0__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdma___024unit__03a__03aDmaTxn::__VnoInFunc___Vrandwith_h7091dc69__0\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__7__Vfuncout;
    __Vfunc___VBasicRand__7__Vfuncout = 0;
    // Body
    Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    VlRandomizer randomizer;
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomizer = Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint;
    randomizer.hard("(bvand (__Vbv (bvuge ((_ zero_extend 16) len) #x00000001)) (__Vbv (bvule ((_ zero_extend 16) len) #x00000014)))"s, "dma.sv", 
                    35, "      void'(t.randomize() with { len inside {[1:20]}; });");
    randomizer.write_var(this->__PVT__len, 0x0000000000000010ULL, 
                         "len", 0ULL);
    randomizer.write_var(this->__PVT__len, 0x0000000000000010ULL, 
                         "len", 0ULL);
    __Vrandwith_h7091dc69__0__Vfuncrtn = (([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__7__Vfuncout);
            }(), __Vfunc___VBasicRand__7__Vfuncout) 
                                          & randomizer.next(__Vm_rng));
}

void Vdma___024unit__03a__03aDmaTxn::_ctor_var_reset(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdma___024unit__03a__03aDmaTxn::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__src = 0;
    __PVT__dst = 0;
    __PVT__len = 0;
    __PVT__ch = 0;
}

Vdma___024unit__03a__03aDmaTxn::~Vdma___024unit__03a__03aDmaTxn() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdma___024unit__03a__03aDmaTxn::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vdma___024unit__03a__03aDmaTxn>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdma___024unit__03a__03aDmaTxn::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vdma___024unit__03a__03aDmaTxn::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdma___024unit__03a__03aDmaTxn::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vdma___024unit__03a__03aDmaTxn::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdma___024unit__03a__03aDmaTxn::to_string_middle\n"); );
    // Body
    std::string out;
    out += "src:" + VL_TO_STRING(__PVT__src);
    out += ", dst:" + VL_TO_STRING(__PVT__dst);
    out += ", len:" + VL_TO_STRING(__PVT__len);
    out += ", ch:" + VL_TO_STRING(__PVT__ch);
    out += ", "+ Vdma_uvm_pkg__03a__03auvm_sequence_item::to_string_middle();
    return (out);
}
