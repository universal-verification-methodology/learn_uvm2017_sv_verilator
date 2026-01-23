// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransactions.h for the primary calling header

#include "Vtransactions__pch.h"

Vtransactions_uvm_pkg__03a__03auvm_obj_rsrc::Vtransactions_uvm_pkg__03a__03auvm_obj_rsrc(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string name, std::string s)
    : Vtransactions_uvm_pkg__03a__03auvm_resource__Tz79(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_obj_rsrc::new\n"); );
    // Locals
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_pool> __Vfunc_get__1__Vfuncout;
    // Body
    _ctor_var_reset(vlSymsp);
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_pool> rp;
    ;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__1__Vfuncout);
    rp = __Vfunc_get__1__Vfuncout;
    VL_NULL_CHECK(rp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource_specializations.svh", 134)->__VnoInFunc_set_scope(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_obj_rsrc>{this}, s);
}

void Vtransactions_uvm_pkg__03a__03auvm_obj_rsrc::__VnoInFunc_randomize(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_obj_rsrc::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__4__Vfuncout;
    __Vfunc___VBasicRand__4__Vfuncout = 0;
    // Body
    Vtransactions_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtransactions_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__4__Vfuncout);
            }(), __Vfunc___VBasicRand__4__Vfuncout));
}

void Vtransactions_uvm_pkg__03a__03auvm_obj_rsrc::__VnoInFunc___Vsetup_constraints(Vtransactions__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_obj_rsrc::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtransactions_uvm_pkg__03a__03auvm_obj_rsrc::__VnoInFunc___VBasicRand(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_obj_rsrc::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtransactions_uvm_pkg__03a__03auvm_obj_rsrc::_ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_obj_rsrc::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtransactions_uvm_pkg__03a__03auvm_obj_rsrc::~Vtransactions_uvm_pkg__03a__03auvm_obj_rsrc() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_obj_rsrc::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_obj_rsrc>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_obj_rsrc::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtransactions_uvm_pkg__03a__03auvm_obj_rsrc::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_obj_rsrc::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtransactions_uvm_pkg__03a__03auvm_obj_rsrc::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_obj_rsrc::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtransactions_uvm_pkg__03a__03auvm_resource__Tz79::to_string_middle();
    return (out);
}
