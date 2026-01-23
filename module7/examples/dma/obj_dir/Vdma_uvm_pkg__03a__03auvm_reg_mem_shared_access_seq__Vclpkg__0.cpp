// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"

void Vdma_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq__Vclpkg::__VnoInFunc_get_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__pi180> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__pi180> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi180__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vdma_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq__Vclpkg::__VnoInFunc_type_name(Vdma__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_reg_mem_shared_access_seq"s;
}

void Vdma_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc_get_object_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__pi180> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi180__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vdma_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc_create(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq> tmp;
    tmp = ((""s == name) ? VL_NEW(Vdma_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq, vlProcess, vlSymsp, "uvm_reg_mem_shared_access_seq"s)
            : VL_NEW(Vdma_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vdma_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc_get_type_name(Vdma__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_mem_shared_access_seq"s;
}

Vdma_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::Vdma_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name)
    : Vdma_uvm_pkg__03a__03auvm_reg_sequence__Tz307(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

VlCoroutine Vdma_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc_body(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc_body\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__4__Vfuncout;
    __Vfunc_uvm_report_enabled__4__Vfuncout = 0;
    std::string __Vfunc_get_name__7__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_shared_access_seq> __Vfunc_create__8__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_mem_shared_access_seq> __Vfunc_create__9__Vfuncout;
    // Body
    VL_KEEP_THIS;
    {
        if ((VlNull{} == Vdma_uvm_pkg__03a__03auvm_reg_sequence__Tz307::__PVT__model)) {
            if ((0U != ([&]() {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_mem_shared_access_seq"s, __Vfunc_uvm_report_enabled__4__Vfuncout);
                        }(), __Vfunc_uvm_report_enabled__4__Vfuncout))) {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_mem_shared_access_seq"s, "No register model specified to run sequence on"s, 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x0000018dU, ""s, 1U);
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
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi178__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "reg_shared_access_seq"s, VlNull{}, ""s, __Vfunc_create__8__Vfuncout);
        this->__PVT__reg_seq = __Vfunc_create__8__Vfuncout;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi179__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "reg_shared_access_seq"s, VlNull{}, ""s, __Vfunc_create__9__Vfuncout);
        this->__PVT__mem_seq = __Vfunc_create__9__Vfuncout;
        this->__VnoInFunc_reset_blk(vlSymsp, Vdma_uvm_pkg__03a__03auvm_reg_sequence__Tz307::__PVT__model);
        VL_NULL_CHECK(Vdma_uvm_pkg__03a__03auvm_reg_sequence__Tz307::__PVT__model, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 407)->__VnoInFunc_reset(vlSymsp, "HARD"s);
        co_await this->__VnoInFunc_do_block(vlProcess, vlSymsp, Vdma_uvm_pkg__03a__03auvm_reg_sequence__Tz307::__PVT__model);
        __Vlabel0: ;
    }
    co_return;}

VlCoroutine Vdma_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc_do_block(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_block> blk) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc_do_block\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_resource__Tz30> __Vfunc_get_by_name__13__Vfuncout;
    std::string __Vtask_get_full_name__14__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_resource__Tz30> __Vfunc_get_by_name__15__Vfuncout;
    std::string __Vtask_get_full_name__16__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_resource__Tz30> __Vfunc_get_by_name__17__Vfuncout;
    std::string __Vtask_get_full_name__18__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_resource__Tz30> __Vfunc_get_by_name__19__Vfuncout;
    std::string __Vtask_get_full_name__20__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_resource__Tz30> __Vfunc_get_by_name__24__Vfuncout;
    std::string __Vtask_get_full_name__25__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_resource__Tz30> __Vfunc_get_by_name__26__Vfuncout;
    std::string __Vtask_get_full_name__27__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequencer_base> __Vfunc_get_sequencer__29__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_resource__Tz30> __Vfunc_get_by_name__31__Vfuncout;
    std::string __Vtask_get_full_name__32__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_resource__Tz30> __Vfunc_get_by_name__33__Vfuncout;
    std::string __Vtask_get_full_name__34__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_resource__Tz30> __Vfunc_get_by_name__35__Vfuncout;
    std::string __Vtask_get_full_name__36__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_resource__Tz30> __Vfunc_get_by_name__37__Vfuncout;
    std::string __Vtask_get_full_name__38__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequencer_base> __Vfunc_get_sequencer__40__Vfuncout;
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0;
    IData/*31:0*/ unnamedblk2__DOT__i;
    unnamedblk2__DOT__i = 0;
    VlQueue<VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_block>> unnamedblk3__DOT__blks;
    IData/*31:0*/ unnamedblk3__DOT__unnamedblk4__DOT__i;
    unnamedblk3__DOT__unnamedblk4__DOT__i = 0;
    VlQueue<VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg>> regs;
    VlQueue<VlClassRef<Vdma_uvm_pkg__03a__03auvm_mem>> mems;
    {
        if (((((VlNull{} != ([&]() {
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                        VL_NULL_CHECK(blk, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 421)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__14__Vfuncout);
                                                    }(), __Vtask_get_full_name__14__Vfuncout))), "NO_REG_TESTS"s, 0U, __Vfunc_get_by_name__13__Vfuncout);
                                }(), __Vfunc_get_by_name__13__Vfuncout)) 
               || (VlNull{} != ([&]() {
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                        VL_NULL_CHECK(blk, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 423)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__16__Vfuncout);
                                                    }(), __Vtask_get_full_name__16__Vfuncout))), "NO_MEM_TESTS"s, 0U, __Vfunc_get_by_name__15__Vfuncout);
                                }(), __Vfunc_get_by_name__15__Vfuncout))) 
              || (VlNull{} != ([&]() {
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                    VL_NULL_CHECK(blk, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 425)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__18__Vfuncout);
                                                }(), __Vtask_get_full_name__18__Vfuncout))), "NO_REG_SHARED_ACCESS_TEST"s, 0U, __Vfunc_get_by_name__17__Vfuncout);
                            }(), __Vfunc_get_by_name__17__Vfuncout))) 
             || (VlNull{} != ([&]() {
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                VL_NULL_CHECK(blk, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 427)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__20__Vfuncout);
                                            }(), __Vtask_get_full_name__20__Vfuncout))), "NO_MEM_SHARED_ACCESS_TEST"s, 0U, __Vfunc_get_by_name__19__Vfuncout);
                        }(), __Vfunc_get_by_name__19__Vfuncout)))) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_reset_blk(vlSymsp, Vdma_uvm_pkg__03a__03auvm_reg_sequence__Tz307::__PVT__model);
        VL_NULL_CHECK(Vdma_uvm_pkg__03a__03auvm_reg_sequence__Tz307::__PVT__model, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 432)->__VnoInFunc_reset(vlSymsp, "HARD"s);
        VL_NULL_CHECK(blk, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 435)->__VnoInFunc_get_registers(vlSymsp, regs, 0U);
        unnamedblk1__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk1__DOT__i, regs.size())) {
            {
                if (((VlNull{} != ([&]() {
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                        VL_NULL_CHECK(regs.at(unnamedblk1__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 438)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__25__Vfuncout);
                                                    }(), __Vtask_get_full_name__25__Vfuncout))), "NO_REG_TESTS"s, 0U, __Vfunc_get_by_name__24__Vfuncout);
                                }(), __Vfunc_get_by_name__24__Vfuncout)) 
                     || (VlNull{} != ([&]() {
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                        VL_NULL_CHECK(regs.at(unnamedblk1__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 440)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__27__Vfuncout);
                                                    }(), __Vtask_get_full_name__27__Vfuncout))), "NO_REG_SHARED_ACCESS_TEST"s, 0U, __Vfunc_get_by_name__26__Vfuncout);
                                }(), __Vfunc_get_by_name__26__Vfuncout)))) {
                    goto __Vlabel1;
                }
                VL_NULL_CHECK(this->__PVT__reg_seq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 443)->__PVT__rg 
                    = regs.at(unnamedblk1__DOT__i);
                co_await VL_NULL_CHECK(this->__PVT__reg_seq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 444)->__VnoInFunc_start(vlProcess, vlSymsp, 
                                                                                ([&]() {
                            this->__VnoInFunc_get_sequencer(vlSymsp, __Vfunc_get_sequencer__29__Vfuncout);
                        }(), __Vfunc_get_sequencer__29__Vfuncout), 
                                                                                VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq>{this}, 0xffffffffU, 1U);
                __Vlabel1: ;
            }
            unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
        }
        VL_NULL_CHECK(blk, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 448)->__VnoInFunc_get_memories(vlSymsp, mems, 0U);
        unnamedblk2__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk2__DOT__i, mems.size())) {
            {
                if (((((VlNull{} != ([&]() {
                                            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                                VL_NULL_CHECK(mems.at(unnamedblk2__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 451)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__32__Vfuncout);
                                                            }(), __Vtask_get_full_name__32__Vfuncout))), "NO_REG_TESTS"s, 0U, __Vfunc_get_by_name__31__Vfuncout);
                                        }(), __Vfunc_get_by_name__31__Vfuncout)) 
                       || (VlNull{} != ([&]() {
                                            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                                VL_NULL_CHECK(mems.at(unnamedblk2__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 453)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__34__Vfuncout);
                                                            }(), __Vtask_get_full_name__34__Vfuncout))), "NO_MEM_TESTS"s, 0U, __Vfunc_get_by_name__33__Vfuncout);
                                        }(), __Vfunc_get_by_name__33__Vfuncout))) 
                      || (VlNull{} != ([&]() {
                                        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                            VL_NULL_CHECK(mems.at(unnamedblk2__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 455)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__36__Vfuncout);
                                                        }(), __Vtask_get_full_name__36__Vfuncout))), "NO_REG_SHARED_ACCESS_TEST"s, 0U, __Vfunc_get_by_name__35__Vfuncout);
                                    }(), __Vfunc_get_by_name__35__Vfuncout))) 
                     || (VlNull{} != ([&]() {
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                        VL_NULL_CHECK(mems.at(unnamedblk2__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 457)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__38__Vfuncout);
                                                    }(), __Vtask_get_full_name__38__Vfuncout))), "NO_MEM_SHARED_ACCESS_TEST"s, 0U, __Vfunc_get_by_name__37__Vfuncout);
                                }(), __Vfunc_get_by_name__37__Vfuncout)))) {
                    goto __Vlabel2;
                }
                VL_NULL_CHECK(this->__PVT__mem_seq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 460)->__PVT__mem 
                    = mems.at(unnamedblk2__DOT__i);
                co_await VL_NULL_CHECK(this->__PVT__mem_seq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 461)->__VnoInFunc_start(vlProcess, vlSymsp, 
                                                                                ([&]() {
                            this->__VnoInFunc_get_sequencer(vlSymsp, __Vfunc_get_sequencer__40__Vfuncout);
                        }(), __Vfunc_get_sequencer__40__Vfuncout), 
                                                                                VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq>{this}, 0xffffffffU, 1U);
                __Vlabel2: ;
            }
            unnamedblk2__DOT__i = ((IData)(1U) + unnamedblk2__DOT__i);
        }
        VL_NULL_CHECK(blk, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 467)->__VnoInFunc_get_blocks(vlSymsp, unnamedblk3__DOT__blks, 1U);
        unnamedblk3__DOT__unnamedblk4__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk3__DOT__unnamedblk4__DOT__i, unnamedblk3__DOT__blks.size())) {
            co_await this->__VnoInFunc_do_block(vlProcess, vlSymsp, unnamedblk3__DOT__blks.at(unnamedblk3__DOT__unnamedblk4__DOT__i));
            unnamedblk3__DOT__unnamedblk4__DOT__i = 
                ((IData)(1U) + unnamedblk3__DOT__unnamedblk4__DOT__i);
        }
        __Vlabel0: ;
    }
    co_return;}

void Vdma_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc_reset_blk(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_block> blk) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc_reset_blk\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__44__Vfuncout;
    __Vfunc___VBasicRand__44__Vfuncout = 0;
    // Body
    Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__44__Vfuncout);
            }(), __Vfunc___VBasicRand__44__Vfuncout));
}

void Vdma_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc___VBasicRand(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vdma_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::_ctor_var_reset(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vdma_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::~Vdma_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vdma_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vdma_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::to_string_middle\n"); );
    // Body
    std::string out;
    out += "reg_seq:" + VL_TO_STRING(__PVT__reg_seq);
    out += ", mem_seq:" + VL_TO_STRING(__PVT__mem_seq);
    out += ", "+ Vdma_uvm_pkg__03a__03auvm_reg_sequence__Tz307::to_string_middle();
    return (out);
}
