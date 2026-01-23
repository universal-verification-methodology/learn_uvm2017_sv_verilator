// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varchitecture.h for the primary calling header

#include "Varchitecture__pch.h"

void Varchitecture_uvm_pkg__03a__03auvm_vreg_cbs__Vclpkg::__VnoInFunc_get_type(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_abstract_object_registry__pi109> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Varchitecture_uvm_pkg__03a__03auvm_vreg_cbs__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_abstract_object_registry__pi109> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_abstract_object_registry__pi109__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Varchitecture_uvm_pkg__03a__03auvm_vreg_cbs__Vclpkg::__VnoInFunc_type_name(Varchitecture__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Varchitecture_uvm_pkg__03a__03auvm_vreg_cbs__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_vreg_cbs"s;
}

void Varchitecture_uvm_pkg__03a__03auvm_vreg_cbs::__VnoInFunc_get_object_type(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_vreg_cbs::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_abstract_object_registry__pi109> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_abstract_object_registry__pi109__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Varchitecture_uvm_pkg__03a__03auvm_vreg_cbs::__VnoInFunc_get_type_name(Varchitecture__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_vreg_cbs::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_vreg_cbs"s;
}

Varchitecture_uvm_pkg__03a__03auvm_vreg_cbs::Varchitecture_uvm_pkg__03a__03auvm_vreg_cbs(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name)
    : Varchitecture_uvm_pkg__03a__03auvm_callback(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_vreg_cbs::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Varchitecture_uvm_pkg__03a__03auvm_vreg_cbs::__VnoInFunc_pre_write(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_vreg> rg, QData/*63:0*/ idx, QData/*63:0*/ &wdat, IData/*31:0*/ &path, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> &map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_vreg_cbs::__VnoInFunc_pre_write\n"); );
}

void Varchitecture_uvm_pkg__03a__03auvm_vreg_cbs::__VnoInFunc_post_write(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_vreg> rg, QData/*63:0*/ idx, QData/*63:0*/ wdat, IData/*31:0*/ path, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ &status) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_vreg_cbs::__VnoInFunc_post_write\n"); );
}

void Varchitecture_uvm_pkg__03a__03auvm_vreg_cbs::__VnoInFunc_pre_read(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_vreg> rg, QData/*63:0*/ idx, IData/*31:0*/ &path, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> &map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_vreg_cbs::__VnoInFunc_pre_read\n"); );
}

void Varchitecture_uvm_pkg__03a__03auvm_vreg_cbs::__VnoInFunc_post_read(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_vreg> rg, QData/*63:0*/ idx, QData/*63:0*/ &rdat, IData/*31:0*/ path, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ &status) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_vreg_cbs::__VnoInFunc_post_read\n"); );
}

void Varchitecture_uvm_pkg__03a__03auvm_vreg_cbs::__VnoInFunc_randomize(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_vreg_cbs::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__3__Vfuncout;
    __Vfunc___VBasicRand__3__Vfuncout = 0;
    // Body
    Varchitecture_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Varchitecture_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__3__Vfuncout);
            }(), __Vfunc___VBasicRand__3__Vfuncout));
}

void Varchitecture_uvm_pkg__03a__03auvm_vreg_cbs::__VnoInFunc___Vsetup_constraints(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_vreg_cbs::__VnoInFunc___Vsetup_constraints\n"); );
}

void Varchitecture_uvm_pkg__03a__03auvm_vreg_cbs::__VnoInFunc___VBasicRand(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_vreg_cbs::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Varchitecture_uvm_pkg__03a__03auvm_vreg_cbs::_ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_vreg_cbs::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__lineno = 0;
}

Varchitecture_uvm_pkg__03a__03auvm_vreg_cbs::~Varchitecture_uvm_pkg__03a__03auvm_vreg_cbs() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_vreg_cbs::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_vreg_cbs>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_vreg_cbs::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Varchitecture_uvm_pkg__03a__03auvm_vreg_cbs::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_vreg_cbs::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Varchitecture_uvm_pkg__03a__03auvm_vreg_cbs::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_vreg_cbs::to_string_middle\n"); );
    // Body
    std::string out;
    out += "fname:" + VL_TO_STRING(__PVT__fname);
    out += ", lineno:" + VL_TO_STRING(__PVT__lineno);
    out += ", "+ Varchitecture_uvm_pkg__03a__03auvm_callback::to_string_middle();
    return (out);
}
