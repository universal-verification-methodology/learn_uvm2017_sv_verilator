// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varchitecture.h for the primary calling header

#include "Varchitecture__pch.h"

void Varchitecture_uvm_pkg__03a__03auvm_reg_mem_access_seq__Vclpkg::__VnoInFunc_get_type(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_registry__pi185> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Varchitecture_uvm_pkg__03a__03auvm_reg_mem_access_seq__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_registry__pi185> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi185__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Varchitecture_uvm_pkg__03a__03auvm_reg_mem_access_seq__Vclpkg::__VnoInFunc_type_name(Varchitecture__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Varchitecture_uvm_pkg__03a__03auvm_reg_mem_access_seq__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_reg_mem_access_seq"s;
}

void Varchitecture_uvm_pkg__03a__03auvm_reg_mem_access_seq::__VnoInFunc_get_object_type(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_mem_access_seq::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_registry__pi185> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi185__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Varchitecture_uvm_pkg__03a__03auvm_reg_mem_access_seq::__VnoInFunc_create(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_mem_access_seq::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_mem_access_seq> tmp;
    tmp = ((""s == name) ? VL_NEW(Varchitecture_uvm_pkg__03a__03auvm_reg_mem_access_seq, vlProcess, vlSymsp, "uvm_reg_mem_access_seq"s)
            : VL_NEW(Varchitecture_uvm_pkg__03a__03auvm_reg_mem_access_seq, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Varchitecture_uvm_pkg__03a__03auvm_reg_mem_access_seq::__VnoInFunc_get_type_name(Varchitecture__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_mem_access_seq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_mem_access_seq"s;
}

Varchitecture_uvm_pkg__03a__03auvm_reg_mem_access_seq::Varchitecture_uvm_pkg__03a__03auvm_reg_mem_access_seq(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name)
    : Varchitecture_uvm_pkg__03a__03auvm_reg_sequence__Tz317(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_mem_access_seq::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

VlCoroutine Varchitecture_uvm_pkg__03a__03auvm_reg_mem_access_seq::__VnoInFunc_body(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_mem_access_seq::__VnoInFunc_body\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__4__Vfuncout;
    __Vfunc_uvm_report_enabled__4__Vfuncout = 0;
    std::string __Vfunc_get_name__7__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_resource__Tz68> __Vfunc_get_by_name__8__Vfuncout;
    std::string __Vtask_get_full_name__9__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_resource__Tz68> __Vfunc_get_by_name__10__Vfuncout;
    std::string __Vtask_get_full_name__11__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_resource__Tz68> __Vfunc_get_by_name__16__Vfuncout;
    std::string __Vtask_get_full_name__17__Vfuncout;
    // Body
    VL_KEEP_THIS;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_access_seq> unnamedblk1__DOT__sub_seq;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem_access_seq> unnamedblk2__DOT__sub_seq;
    {
        if ((VlNull{} == Varchitecture_uvm_pkg__03a__03auvm_reg_sequence__Tz317::__PVT__model)) {
            if ((0U != ([&]() {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_mem_access_seq"s, __Vfunc_uvm_report_enabled__4__Vfuncout);
                        }(), __Vfunc_uvm_report_enabled__4__Vfuncout))) {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_mem_access_seq"s, "Register model handle is null"s, 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh"s, 0x0000014eU, ""s, 1U);
            }
            goto __Vlabel0;
        }
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "STARTING_SEQ"s, 
                                          VL_CVT_PACK_STR_NN(
                                                             VL_CONCATN_NNN(
                                                                            VL_CONCATN_NNN("\n\nStarting "s, 
                                                                                ([&]() {
                                this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__7__Vfuncout);
                            }(), __Vfunc_get_name__7__Vfuncout)), " sequence...\n"s)), 0x00000064U, ""s, 0U, ""s, 0U);
        if ((VlNull{} == ([&]() {
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz68__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                            VL_NULL_CHECK(Varchitecture_uvm_pkg__03a__03auvm_reg_sequence__Tz317::__PVT__model, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 341)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__9__Vfuncout);
                                        }(), __Vtask_get_full_name__9__Vfuncout))), "NO_REG_TESTS"s, 0U, __Vfunc_get_by_name__8__Vfuncout);
                    }(), __Vfunc_get_by_name__8__Vfuncout))) {
            if ((VlNull{} == ([&]() {
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz68__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                VL_NULL_CHECK(Varchitecture_uvm_pkg__03a__03auvm_reg_sequence__Tz317::__PVT__model, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 343)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__11__Vfuncout);
                                            }(), __Vtask_get_full_name__11__Vfuncout))), "NO_REG_ACCESS_TEST"s, 0U, __Vfunc_get_by_name__10__Vfuncout);
                        }(), __Vfunc_get_by_name__10__Vfuncout))) {
                unnamedblk1__DOT__sub_seq = VL_NEW(Varchitecture_uvm_pkg__03a__03auvm_reg_access_seq, vlProcess, vlSymsp, "reg_access_seq"s);
                this->__VnoInFunc_reset_blk(vlSymsp, Varchitecture_uvm_pkg__03a__03auvm_reg_sequence__Tz317::__PVT__model);
                VL_NULL_CHECK(Varchitecture_uvm_pkg__03a__03auvm_reg_sequence__Tz317::__PVT__model, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 347)->__VnoInFunc_reset(vlSymsp, "HARD"s);
                VL_NULL_CHECK(unnamedblk1__DOT__sub_seq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 348)->__PVT__model 
                    = Varchitecture_uvm_pkg__03a__03auvm_reg_sequence__Tz317::__PVT__model;
                co_await VL_NULL_CHECK(unnamedblk1__DOT__sub_seq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 349)->__VnoInFunc_start(vlProcess, vlSymsp, VlNull{}, 
                                                                                VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_mem_access_seq>{this}, 0xffffffffU, 1U);
            }
            if ((VlNull{} == ([&]() {
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz68__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                VL_NULL_CHECK(Varchitecture_uvm_pkg__03a__03auvm_reg_sequence__Tz317::__PVT__model, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 351)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__17__Vfuncout);
                                            }(), __Vtask_get_full_name__17__Vfuncout))), "NO_MEM_ACCESS_TEST"s, 0U, __Vfunc_get_by_name__16__Vfuncout);
                        }(), __Vfunc_get_by_name__16__Vfuncout))) {
                unnamedblk2__DOT__sub_seq = VL_NEW(Varchitecture_uvm_pkg__03a__03auvm_mem_access_seq, vlProcess, vlSymsp, "mem_access_seq"s);
                this->__VnoInFunc_reset_blk(vlSymsp, Varchitecture_uvm_pkg__03a__03auvm_reg_sequence__Tz317::__PVT__model);
                VL_NULL_CHECK(Varchitecture_uvm_pkg__03a__03auvm_reg_sequence__Tz317::__PVT__model, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 355)->__VnoInFunc_reset(vlSymsp, "HARD"s);
                VL_NULL_CHECK(unnamedblk2__DOT__sub_seq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 356)->__PVT__model 
                    = Varchitecture_uvm_pkg__03a__03auvm_reg_sequence__Tz317::__PVT__model;
                co_await VL_NULL_CHECK(unnamedblk2__DOT__sub_seq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 357)->__VnoInFunc_start(vlProcess, vlSymsp, VlNull{}, 
                                                                                VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_mem_access_seq>{this}, 0xffffffffU, 1U);
            }
        }
        __Vlabel0: ;
    }
    co_return;}

void Varchitecture_uvm_pkg__03a__03auvm_reg_mem_access_seq::__VnoInFunc_reset_blk(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> blk) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_mem_access_seq::__VnoInFunc_reset_blk\n"); );
}

void Varchitecture_uvm_pkg__03a__03auvm_reg_mem_access_seq::__VnoInFunc_randomize(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_mem_access_seq::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__23__Vfuncout;
    __Vfunc___VBasicRand__23__Vfuncout = 0;
    // Body
    Varchitecture_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Varchitecture_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__23__Vfuncout);
            }(), __Vfunc___VBasicRand__23__Vfuncout));
}

void Varchitecture_uvm_pkg__03a__03auvm_reg_mem_access_seq::__VnoInFunc___Vsetup_constraints(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_mem_access_seq::__VnoInFunc___Vsetup_constraints\n"); );
}

void Varchitecture_uvm_pkg__03a__03auvm_reg_mem_access_seq::__VnoInFunc___VBasicRand(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_mem_access_seq::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Varchitecture_uvm_pkg__03a__03auvm_reg_mem_access_seq::_ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_mem_access_seq::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Varchitecture_uvm_pkg__03a__03auvm_reg_mem_access_seq::~Varchitecture_uvm_pkg__03a__03auvm_reg_mem_access_seq() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_mem_access_seq::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_mem_access_seq>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_mem_access_seq::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Varchitecture_uvm_pkg__03a__03auvm_reg_mem_access_seq::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_mem_access_seq::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Varchitecture_uvm_pkg__03a__03auvm_reg_mem_access_seq::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_mem_access_seq::to_string_middle\n"); );
    // Body
    std::string out;
    out += Varchitecture_uvm_pkg__03a__03auvm_reg_sequence__Tz317::to_string_middle();
    return (out);
}
