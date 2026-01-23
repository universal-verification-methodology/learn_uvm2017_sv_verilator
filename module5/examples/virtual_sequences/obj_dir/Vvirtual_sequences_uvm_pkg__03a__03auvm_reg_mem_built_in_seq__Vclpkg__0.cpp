// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvirtual_sequences.h for the primary calling header

#include "Vvirtual_sequences__pch.h"

void Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_built_in_seq__Vclpkg::__VnoInFunc_get_type(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_registry__pi177> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_built_in_seq__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_registry__pi177> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi177__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_built_in_seq__Vclpkg::__VnoInFunc_type_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_built_in_seq__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_reg_mem_built_in_seq"s;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::__VnoInFunc_get_object_type(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_registry__pi177> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi177__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::__VnoInFunc_create(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_built_in_seq> tmp;
    tmp = ((""s == name) ? VL_NEW(Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_built_in_seq, vlProcess, vlSymsp, "uvm_reg_mem_built_in_seq"s)
            : VL_NEW(Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_built_in_seq, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::__VnoInFunc_get_type_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_mem_built_in_seq"s;
}

Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_built_in_seq(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name)
    : Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_sequence__Tz304(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__tests = 0xffffffffffffffffULL;
    ;
}

VlCoroutine Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::__VnoInFunc_body(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::__VnoInFunc_body\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__4__Vfuncout;
    __Vfunc_uvm_report_enabled__4__Vfuncout = 0;
    std::string __Vfunc_get_name__7__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz54> __Vfunc_get_by_name__8__Vfuncout;
    std::string __Vtask_get_full_name__9__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz54> __Vfunc_get_by_name__10__Vfuncout;
    std::string __Vtask_get_full_name__11__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_hw_reset_seq> __Vfunc_create__12__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__14__Vfuncout;
    __Vfunc_uvm_report_enabled__14__Vfuncout = 0;
    std::string __Vtask_get_name__16__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz54> __Vfunc_get_by_name__17__Vfuncout;
    std::string __Vtask_get_full_name__18__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz54> __Vfunc_get_by_name__19__Vfuncout;
    std::string __Vtask_get_full_name__20__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_bit_bash_seq> __Vfunc_create__21__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__23__Vfuncout;
    __Vfunc_uvm_report_enabled__23__Vfuncout = 0;
    std::string __Vtask_get_name__25__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz54> __Vfunc_get_by_name__26__Vfuncout;
    std::string __Vtask_get_full_name__27__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz54> __Vfunc_get_by_name__28__Vfuncout;
    std::string __Vtask_get_full_name__29__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_access_seq> __Vfunc_create__30__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__32__Vfuncout;
    __Vfunc_uvm_report_enabled__32__Vfuncout = 0;
    std::string __Vtask_get_name__34__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz54> __Vfunc_get_by_name__35__Vfuncout;
    std::string __Vtask_get_full_name__36__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz54> __Vfunc_get_by_name__37__Vfuncout;
    std::string __Vtask_get_full_name__38__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz54> __Vfunc_get_by_name__39__Vfuncout;
    std::string __Vtask_get_full_name__40__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_access_seq> __Vfunc_create__41__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__43__Vfuncout;
    __Vfunc_uvm_report_enabled__43__Vfuncout = 0;
    std::string __Vtask_get_name__45__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz54> __Vfunc_get_by_name__46__Vfuncout;
    std::string __Vtask_get_full_name__47__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz54> __Vfunc_get_by_name__48__Vfuncout;
    std::string __Vtask_get_full_name__49__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq> __Vfunc_create__50__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__52__Vfuncout;
    __Vfunc_uvm_report_enabled__52__Vfuncout = 0;
    std::string __Vtask_get_name__54__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz54> __Vfunc_get_by_name__55__Vfuncout;
    std::string __Vtask_get_full_name__56__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz54> __Vfunc_get_by_name__57__Vfuncout;
    std::string __Vtask_get_full_name__58__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_walk_seq> __Vfunc_create__59__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__61__Vfuncout;
    __Vfunc_uvm_report_enabled__61__Vfuncout = 0;
    std::string __Vtask_get_name__63__Vfuncout;
    // Body
    VL_KEEP_THIS;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_hw_reset_seq> unnamedblk1__DOT__seq;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_bit_bash_seq> unnamedblk2__DOT__seq;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_access_seq> unnamedblk3__DOT__seq;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_access_seq> unnamedblk4__DOT__seq;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq> unnamedblk5__DOT__seq;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_walk_seq> unnamedblk6__DOT__seq;
    {
        if ((VlNull{} == Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_sequence__Tz304::__PVT__model)) {
            if ((0U != ([&]() {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_mem_built_in_seq"s, __Vfunc_uvm_report_enabled__4__Vfuncout);
                        }(), __Vfunc_uvm_report_enabled__4__Vfuncout))) {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_mem_built_in_seq"s, "Not block or system specified to run sequence on"s, 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh"s, 0x00000043U, ""s, 1U);
            }
            goto __Vlabel0;
        }
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "START_SEQ"s, 
                                          VL_CVT_PACK_STR_NN(
                                                             VL_CONCATN_NNN(
                                                                            VL_CONCATN_NNN("\n\nStarting "s, 
                                                                                ([&]() {
                                this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__7__Vfuncout);
                            }(), __Vfunc_get_name__7__Vfuncout)), " sequence...\n"s)), 0x00000064U, ""s, 0U, ""s, 0U);
        if ((((0U != (1ULL & this->__PVT__tests)) && 
              (VlNull{} == ([&]() {
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz54__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                    VL_NULL_CHECK(Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_sequence__Tz304::__PVT__model, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 74)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__9__Vfuncout);
                                                }(), __Vtask_get_full_name__9__Vfuncout))), "NO_REG_TESTS"s, 0U, __Vfunc_get_by_name__8__Vfuncout);
                            }(), __Vfunc_get_by_name__8__Vfuncout))) 
             && (VlNull{} == ([&]() {
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz54__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                VL_NULL_CHECK(Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_sequence__Tz304::__PVT__model, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 76)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__11__Vfuncout);
                                            }(), __Vtask_get_full_name__11__Vfuncout))), "NO_REG_HW_RESET_TEST"s, 0U, __Vfunc_get_by_name__10__Vfuncout);
                        }(), __Vfunc_get_by_name__10__Vfuncout)))) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi164__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "reg_hw_reset_seq"s, VlNull{}, ""s, __Vfunc_create__12__Vfuncout);
            unnamedblk1__DOT__seq = __Vfunc_create__12__Vfuncout;
            VL_NULL_CHECK(unnamedblk1__DOT__seq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 79)->__PVT__model 
                = Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_sequence__Tz304::__PVT__model;
            co_await VL_NULL_CHECK(unnamedblk1__DOT__seq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 80)->__VnoInFunc_start(vlProcess, vlSymsp, VlNull{}, 
                                                                                VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_built_in_seq>{this}, 0xffffffffU, 1U);
            if ((0U != ([&]() {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "FINISH_SEQ"s, __Vfunc_uvm_report_enabled__14__Vfuncout);
                        }(), __Vfunc_uvm_report_enabled__14__Vfuncout))) {
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "FINISH_SEQ"s, 
                                                  VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Finished "s, 
                                                                                ([&]() {
                                        VL_NULL_CHECK(unnamedblk1__DOT__seq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 81)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__16__Vfuncout);
                                    }(), __Vtask_get_name__16__Vfuncout)), " sequence."s)), 0x00000064U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh"s, 0x00000051U, ""s, 1U);
            }
        }
        if ((((0U != (2ULL & this->__PVT__tests)) && 
              (VlNull{} == ([&]() {
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz54__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                    VL_NULL_CHECK(Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_sequence__Tz304::__PVT__model, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 85)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__18__Vfuncout);
                                                }(), __Vtask_get_full_name__18__Vfuncout))), "NO_REG_TESTS"s, 0U, __Vfunc_get_by_name__17__Vfuncout);
                            }(), __Vfunc_get_by_name__17__Vfuncout))) 
             && (VlNull{} == ([&]() {
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz54__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                VL_NULL_CHECK(Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_sequence__Tz304::__PVT__model, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 87)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__20__Vfuncout);
                                            }(), __Vtask_get_full_name__20__Vfuncout))), "NO_REG_BIT_BASH_TEST"s, 0U, __Vfunc_get_by_name__19__Vfuncout);
                        }(), __Vfunc_get_by_name__19__Vfuncout)))) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi166__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "reg_bit_bash_seq"s, VlNull{}, ""s, __Vfunc_create__21__Vfuncout);
            unnamedblk2__DOT__seq = __Vfunc_create__21__Vfuncout;
            VL_NULL_CHECK(unnamedblk2__DOT__seq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 90)->__PVT__model 
                = Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_sequence__Tz304::__PVT__model;
            co_await VL_NULL_CHECK(unnamedblk2__DOT__seq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 91)->__VnoInFunc_start(vlProcess, vlSymsp, VlNull{}, 
                                                                                VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_built_in_seq>{this}, 0xffffffffU, 1U);
            if ((0U != ([&]() {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "FINISH_SEQ"s, __Vfunc_uvm_report_enabled__23__Vfuncout);
                        }(), __Vfunc_uvm_report_enabled__23__Vfuncout))) {
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "FINISH_SEQ"s, 
                                                  VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Finished "s, 
                                                                                ([&]() {
                                        VL_NULL_CHECK(unnamedblk2__DOT__seq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 92)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__25__Vfuncout);
                                    }(), __Vtask_get_name__25__Vfuncout)), " sequence."s)), 0x00000064U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh"s, 0x0000005cU, ""s, 1U);
            }
        }
        if ((((0U != (4ULL & this->__PVT__tests)) && 
              (VlNull{} == ([&]() {
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz54__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                    VL_NULL_CHECK(Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_sequence__Tz304::__PVT__model, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 96)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__27__Vfuncout);
                                                }(), __Vtask_get_full_name__27__Vfuncout))), "NO_REG_TESTS"s, 0U, __Vfunc_get_by_name__26__Vfuncout);
                            }(), __Vfunc_get_by_name__26__Vfuncout))) 
             && (VlNull{} == ([&]() {
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz54__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                VL_NULL_CHECK(Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_sequence__Tz304::__PVT__model, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 98)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__29__Vfuncout);
                                            }(), __Vtask_get_full_name__29__Vfuncout))), "NO_REG_ACCESS_TEST"s, 0U, __Vfunc_get_by_name__28__Vfuncout);
                        }(), __Vfunc_get_by_name__28__Vfuncout)))) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi172__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "reg_access_seq"s, VlNull{}, ""s, __Vfunc_create__30__Vfuncout);
            unnamedblk3__DOT__seq = __Vfunc_create__30__Vfuncout;
            VL_NULL_CHECK(unnamedblk3__DOT__seq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 101)->__PVT__model 
                = Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_sequence__Tz304::__PVT__model;
            co_await VL_NULL_CHECK(unnamedblk3__DOT__seq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 102)->__VnoInFunc_start(vlProcess, vlSymsp, VlNull{}, 
                                                                                VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_built_in_seq>{this}, 0xffffffffU, 1U);
            if ((0U != ([&]() {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "FINISH_SEQ"s, __Vfunc_uvm_report_enabled__32__Vfuncout);
                        }(), __Vfunc_uvm_report_enabled__32__Vfuncout))) {
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "FINISH_SEQ"s, 
                                                  VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Finished "s, 
                                                                                ([&]() {
                                        VL_NULL_CHECK(unnamedblk3__DOT__seq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 103)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__34__Vfuncout);
                                    }(), __Vtask_get_name__34__Vfuncout)), " sequence."s)), 0x00000064U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh"s, 0x00000067U, ""s, 1U);
            }
        }
        if (((((0U != (8ULL & this->__PVT__tests)) 
               && (VlNull{} == ([&]() {
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz54__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                        VL_NULL_CHECK(Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_sequence__Tz304::__PVT__model, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 107)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__36__Vfuncout);
                                                    }(), __Vtask_get_full_name__36__Vfuncout))), "NO_REG_TESTS"s, 0U, __Vfunc_get_by_name__35__Vfuncout);
                                }(), __Vfunc_get_by_name__35__Vfuncout))) 
              && (VlNull{} == ([&]() {
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz54__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                    VL_NULL_CHECK(Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_sequence__Tz304::__PVT__model, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 109)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__38__Vfuncout);
                                                }(), __Vtask_get_full_name__38__Vfuncout))), "NO_MEM_TESTS"s, 0U, __Vfunc_get_by_name__37__Vfuncout);
                            }(), __Vfunc_get_by_name__37__Vfuncout))) 
             && (VlNull{} == ([&]() {
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz54__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                VL_NULL_CHECK(Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_sequence__Tz304::__PVT__model, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 111)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__40__Vfuncout);
                                            }(), __Vtask_get_full_name__40__Vfuncout))), "NO_MEM_ACCESS_TEST"s, 0U, __Vfunc_get_by_name__39__Vfuncout);
                        }(), __Vfunc_get_by_name__39__Vfuncout)))) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi170__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "mem_access_seq"s, VlNull{}, ""s, __Vfunc_create__41__Vfuncout);
            unnamedblk4__DOT__seq = __Vfunc_create__41__Vfuncout;
            VL_NULL_CHECK(unnamedblk4__DOT__seq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 114)->__PVT__model 
                = Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_sequence__Tz304::__PVT__model;
            co_await VL_NULL_CHECK(unnamedblk4__DOT__seq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 115)->__VnoInFunc_start(vlProcess, vlSymsp, VlNull{}, 
                                                                                VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_built_in_seq>{this}, 0xffffffffU, 1U);
            if ((0U != ([&]() {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "FINISH_SEQ"s, __Vfunc_uvm_report_enabled__43__Vfuncout);
                        }(), __Vfunc_uvm_report_enabled__43__Vfuncout))) {
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "FINISH_SEQ"s, 
                                                  VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Finished "s, 
                                                                                ([&]() {
                                        VL_NULL_CHECK(unnamedblk4__DOT__seq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 116)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__45__Vfuncout);
                                    }(), __Vtask_get_name__45__Vfuncout)), " sequence."s)), 0x00000064U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh"s, 0x00000074U, ""s, 1U);
            }
        }
        if ((((0U != (0x0000000000000010ULL & this->__PVT__tests)) 
              && (VlNull{} == ([&]() {
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz54__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                    VL_NULL_CHECK(Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_sequence__Tz304::__PVT__model, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 120)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__47__Vfuncout);
                                                }(), __Vtask_get_full_name__47__Vfuncout))), "NO_REG_TESTS"s, 0U, __Vfunc_get_by_name__46__Vfuncout);
                            }(), __Vfunc_get_by_name__46__Vfuncout))) 
             && (VlNull{} == ([&]() {
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz54__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                VL_NULL_CHECK(Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_sequence__Tz304::__PVT__model, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 122)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__49__Vfuncout);
                                            }(), __Vtask_get_full_name__49__Vfuncout))), "NO_REG_SHARED_ACCESS_TEST"s, 0U, __Vfunc_get_by_name__48__Vfuncout);
                        }(), __Vfunc_get_by_name__48__Vfuncout)))) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi176__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "shared_access_seq"s, VlNull{}, ""s, __Vfunc_create__50__Vfuncout);
            unnamedblk5__DOT__seq = __Vfunc_create__50__Vfuncout;
            VL_NULL_CHECK(unnamedblk5__DOT__seq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 125)->__PVT__model 
                = Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_sequence__Tz304::__PVT__model;
            co_await VL_NULL_CHECK(unnamedblk5__DOT__seq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 126)->__VnoInFunc_start(vlProcess, vlSymsp, VlNull{}, 
                                                                                VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_built_in_seq>{this}, 0xffffffffU, 1U);
            if ((0U != ([&]() {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "FINISH_SEQ"s, __Vfunc_uvm_report_enabled__52__Vfuncout);
                        }(), __Vfunc_uvm_report_enabled__52__Vfuncout))) {
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "FINISH_SEQ"s, 
                                                  VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Finished "s, 
                                                                                ([&]() {
                                        VL_NULL_CHECK(unnamedblk5__DOT__seq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 127)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__54__Vfuncout);
                                    }(), __Vtask_get_name__54__Vfuncout)), " sequence."s)), 0x00000064U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh"s, 0x0000007fU, ""s, 1U);
            }
        }
        if ((((0U != (0x0000000000000020ULL & this->__PVT__tests)) 
              && (VlNull{} == ([&]() {
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz54__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                    VL_NULL_CHECK(Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_sequence__Tz304::__PVT__model, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 131)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__56__Vfuncout);
                                                }(), __Vtask_get_full_name__56__Vfuncout))), "NO_REG_TESTS"s, 0U, __Vfunc_get_by_name__55__Vfuncout);
                            }(), __Vfunc_get_by_name__55__Vfuncout))) 
             && (VlNull{} == ([&]() {
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz54__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                VL_NULL_CHECK(Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_sequence__Tz304::__PVT__model, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 133)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__58__Vfuncout);
                                            }(), __Vtask_get_full_name__58__Vfuncout))), "NO_MEM_WALK_TEST"s, 0U, __Vfunc_get_by_name__57__Vfuncout);
                        }(), __Vfunc_get_by_name__57__Vfuncout)))) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi168__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "mem_walk_seq"s, VlNull{}, ""s, __Vfunc_create__59__Vfuncout);
            unnamedblk6__DOT__seq = __Vfunc_create__59__Vfuncout;
            VL_NULL_CHECK(unnamedblk6__DOT__seq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 136)->__PVT__model 
                = Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_sequence__Tz304::__PVT__model;
            co_await VL_NULL_CHECK(unnamedblk6__DOT__seq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 137)->__VnoInFunc_start(vlProcess, vlSymsp, VlNull{}, 
                                                                                VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_built_in_seq>{this}, 0xffffffffU, 1U);
            if ((0U != ([&]() {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "FINISH_SEQ"s, __Vfunc_uvm_report_enabled__61__Vfuncout);
                        }(), __Vfunc_uvm_report_enabled__61__Vfuncout))) {
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "FINISH_SEQ"s, 
                                                  VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Finished "s, 
                                                                                ([&]() {
                                        VL_NULL_CHECK(unnamedblk6__DOT__seq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh", 138)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__63__Vfuncout);
                                    }(), __Vtask_get_name__63__Vfuncout)), " sequence."s)), 0x00000064U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_built_in_seq.svh"s, 0x0000008aU, ""s, 1U);
            }
        }
        __Vlabel0: ;
    }
    co_return;}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::__VnoInFunc_randomize(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__65__Vfuncout;
    __Vfunc___VBasicRand__65__Vfuncout = 0;
    // Body
    Vvirtual_sequences_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vvirtual_sequences_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__65__Vfuncout);
            }(), __Vfunc___VBasicRand__65__Vfuncout));
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::__VnoInFunc___Vsetup_constraints(Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::__VnoInFunc___VBasicRand(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::_ctor_var_reset(Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__tests = 0;
}

Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::~Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_built_in_seq() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_built_in_seq>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_built_in_seq::to_string_middle\n"); );
    // Body
    std::string out;
    out += "tests:" + VL_TO_STRING(__PVT__tests);
    out += ", "+ Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_sequence__Tz304::to_string_middle();
    return (out);
}
