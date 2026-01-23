// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvirtual_sequences.h for the primary calling header

#include "Vvirtual_sequences__pch.h"

Vvirtual_sequences_uvm_pkg__03a__03auvm_string_rsrc::Vvirtual_sequences_uvm_pkg__03a__03auvm_string_rsrc(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name, std::string s)
    : Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz61(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_string_rsrc::new\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_pool> __Vfunc_get__1__Vfuncout;
    // Body
    _ctor_var_reset(vlSymsp);
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_pool> rp;
    ;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__1__Vfuncout);
    rp = __Vfunc_get__1__Vfuncout;
    VL_NULL_CHECK(rp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource_specializations.svh", 108)->__VnoInFunc_set_scope(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_string_rsrc>{this}, s);
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_string_rsrc::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_string_rsrc::__VnoInFunc_convert2string\n"); );
    // Locals
    std::string __Vfunc_read__3__Vfuncout;
    // Body
    this->__VnoInFunc_read(vlProcess, vlSymsp, VlNull{}, __Vfunc_read__3__Vfuncout);
    convert2string__Vfuncrtn = __Vfunc_read__3__Vfuncout;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_string_rsrc::__VnoInFunc_randomize(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_string_rsrc::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__5__Vfuncout;
    __Vfunc___VBasicRand__5__Vfuncout = 0;
    // Body
    Vvirtual_sequences_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vvirtual_sequences_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__5__Vfuncout);
            }(), __Vfunc___VBasicRand__5__Vfuncout));
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_string_rsrc::__VnoInFunc___Vsetup_constraints(Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_string_rsrc::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_string_rsrc::__VnoInFunc___VBasicRand(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_string_rsrc::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_string_rsrc::_ctor_var_reset(Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_string_rsrc::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vvirtual_sequences_uvm_pkg__03a__03auvm_string_rsrc::~Vvirtual_sequences_uvm_pkg__03a__03auvm_string_rsrc() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_string_rsrc::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_string_rsrc>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_string_rsrc::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vvirtual_sequences_uvm_pkg__03a__03auvm_string_rsrc::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_string_rsrc::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vvirtual_sequences_uvm_pkg__03a__03auvm_string_rsrc::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_string_rsrc::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz61::to_string_middle();
    return (out);
}
