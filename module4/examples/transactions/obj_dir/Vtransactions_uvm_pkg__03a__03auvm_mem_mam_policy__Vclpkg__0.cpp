// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransactions.h for the primary calling header

#include "Vtransactions__pch.h"

Vtransactions_uvm_pkg__03a__03auvm_mem_mam_policy::Vtransactions_uvm_pkg__03a__03auvm_mem_mam_policy(Vtransactions__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_mem_mam_policy::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__constraint.write_var(this->__PVT__start_offset, 0x0000000000000040ULL, 
                                      "start_offset", 0ULL);
}

void Vtransactions_uvm_pkg__03a__03auvm_mem_mam_policy::__VnoInFunc_randomize(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_mem_mam_policy::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__1__Vfuncout;
    __Vfunc___Vbasic_randomize__1__Vfuncout = 0;
    // Body
    this->__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = this->__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__1__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__1__Vfuncout));
}

void Vtransactions_uvm_pkg__03a__03auvm_mem_mam_policy::__VnoInFunc_uvm_mem_mam_policy_valid_setup_constraint(Vtransactions__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_mem_mam_policy::__VnoInFunc_uvm_mem_mam_policy_valid_setup_constraint\n"); );
    // Locals
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    // Body
    __Vtemp_1 = VL_SFORMATF_N_NX("#x%x",0,64,this->__PVT__min_offset) ;
    this->__PVT__constraint.hard(VL_SFORMATF_N_NX("(__Vbv (bvuge start_offset %@))",0,
                                                  -1,
                                                  &(__Vtemp_1)) );
    __Vtemp_2 = VL_SFORMATF_N_NX("#x%x",0,64,(1ULL 
                                              + (this->__PVT__max_offset 
                                                 - (QData)((IData)(this->__PVT__len))))) ;
    this->__PVT__constraint.hard(VL_SFORMATF_N_NX("(__Vbv (bvule start_offset %@))",0,
                                                  -1,
                                                  &(__Vtemp_2)) );
}

void Vtransactions_uvm_pkg__03a__03auvm_mem_mam_policy::__VnoInFunc___Vsetup_constraints(Vtransactions__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_mem_mam_policy::__VnoInFunc___Vsetup_constraints\n"); );
    // Body
    this->__VnoInFunc_uvm_mem_mam_policy_valid_setup_constraint(vlSymsp);
    this->__VnoInFunc_uvm_mem_mam_policy_no_overlap_setup_constraint(vlSymsp);
}

void Vtransactions_uvm_pkg__03a__03auvm_mem_mam_policy::__VnoInFunc_uvm_mem_mam_policy_no_overlap_setup_constraint(Vtransactions__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_mem_mam_policy::__VnoInFunc_uvm_mem_mam_policy_no_overlap_setup_constraint\n"); );
    // Locals
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    std::string __Vtemp_6;
    std::string __Vtemp_7;
    std::string __Vtemp_8;
    // Body
    IData/*31:0*/ unnamedblk2_1__DOT__i;
    unnamedblk2_1__DOT__i = 0;
    unnamedblk2_1__DOT__i = 0U;
    while ((unnamedblk2_1__DOT__i < this->__PVT__in_use.size())) {
        __Vtemp_1 = VL_SFORMATF_N_NX("#x%x",0,64,VL_NULL_CHECK(this->__PVT__in_use.at(unnamedblk2_1__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 486)
                                     ->__PVT__Xend_offsetX) ;
        __Vtemp_2 = VL_SFORMATF_N_NX("#x%x",0,64,(QData)((IData)(this->__PVT__len))) ;
        __Vtemp_3 = VL_SFORMATF_N_NX("(bvadd start_offset %@)",0,
                                     -1,&(__Vtemp_2)) ;
        __Vtemp_4 = VL_SFORMATF_N_NX("(bvsub %@ #x0000000000000001)",0,
                                     -1,&(__Vtemp_3)) ;
        __Vtemp_5 = VL_SFORMATF_N_NX("#x%x",0,64,VL_NULL_CHECK(this->__PVT__in_use.at(unnamedblk2_1__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 487)
                                     ->__PVT__Xstart_offsetX) ;
        __Vtemp_6 = VL_SFORMATF_N_NX("(__Vbv (bvule start_offset %@))",0,
                                     -1,&(__Vtemp_1)) ;
        __Vtemp_7 = VL_SFORMATF_N_NX("(__Vbv (bvuge %@ %@))",0,
                                     -1,&(__Vtemp_4),
                                     -1,&(__Vtemp_5)) ;
        __Vtemp_8 = VL_SFORMATF_N_NX("(bvand %@ %@)",0,
                                     -1,&(__Vtemp_6),
                                     -1,&(__Vtemp_7)) ;
        this->__PVT__constraint.hard(VL_SFORMATF_N_NX("(__Vbv (not (__Vbool %@)))",0,
                                                      -1,
                                                      &(__Vtemp_8)) );
        unnamedblk2_1__DOT__i = ((IData)(1U) + unnamedblk2_1__DOT__i);
    }
}

void Vtransactions_uvm_pkg__03a__03auvm_mem_mam_policy::__VnoInFunc___Vbasic_randomize(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_mem_mam_policy::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vtransactions_uvm_pkg__03a__03auvm_mem_mam_policy::_ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_mem_mam_policy::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__len = 0;
    __PVT__start_offset = 0;
    __PVT__min_offset = 0;
    __PVT__max_offset = 0;
}

std::string VL_TO_STRING(const VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_mem_mam_policy>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_mem_mam_policy::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtransactions_uvm_pkg__03a__03auvm_mem_mam_policy::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_mem_mam_policy::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtransactions_uvm_pkg__03a__03auvm_mem_mam_policy::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_mem_mam_policy::to_string_middle\n"); );
    // Body
    std::string out;
    out += "len:" + VL_TO_STRING(__PVT__len);
    out += ", start_offset:" + VL_TO_STRING(__PVT__start_offset);
    out += ", min_offset:" + VL_TO_STRING(__PVT__min_offset);
    out += ", max_offset:" + VL_TO_STRING(__PVT__max_offset);
    out += ", in_use:" + VL_TO_STRING(__PVT__in_use);
    return (out);
}
