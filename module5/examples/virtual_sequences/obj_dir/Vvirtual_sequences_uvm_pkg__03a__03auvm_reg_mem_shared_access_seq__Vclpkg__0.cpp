// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvirtual_sequences.h for the primary calling header

#include "Vvirtual_sequences__pch.h"

void Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq__Vclpkg::__VnoInFunc_get_type(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_registry__pi176> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_registry__pi176> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi176__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq__Vclpkg::__VnoInFunc_type_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_reg_mem_shared_access_seq"s;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc_get_object_type(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_registry__pi176> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi176__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc_create(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq> tmp;
    tmp = ((""s == name) ? VL_NEW(Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq, vlProcess, vlSymsp, "uvm_reg_mem_shared_access_seq"s)
            : VL_NEW(Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc_get_type_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_mem_shared_access_seq"s;
}

Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name)
    : Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_sequence__Tz304(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

VlCoroutine Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc_body(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc_body\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__4__Vfuncout;
    __Vfunc_uvm_report_enabled__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__4__verbosity;
    __Vfunc_uvm_report_enabled__4__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__4__severity;
    __Vfunc_uvm_report_enabled__4__severity = 0;
    std::string __Vfunc_uvm_report_enabled__4__id;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__5__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_root> __Vtask_get_root__6__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__7__Vfuncout;
    __Vtask_uvm_report_enabled__7__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__8__id;
    std::string __Vtask_uvm_report_error__8__message;
    IData/*31:0*/ __Vtask_uvm_report_error__8__verbosity;
    __Vtask_uvm_report_error__8__verbosity = 0;
    std::string __Vtask_uvm_report_error__8__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__8__line;
    __Vtask_uvm_report_error__8__line = 0;
    std::string __Vtask_uvm_report_error__8__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__8__report_enabled_checked;
    __Vtask_uvm_report_error__8__report_enabled_checked = 0;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__9__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_root> __Vtask_get_root__10__Vfuncout;
    std::string __Vtask_uvm_report_info__12__id;
    std::string __Vtask_uvm_report_info__12__message;
    IData/*31:0*/ __Vtask_uvm_report_info__12__verbosity;
    __Vtask_uvm_report_info__12__verbosity = 0;
    std::string __Vtask_uvm_report_info__12__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__12__line;
    __Vtask_uvm_report_info__12__line = 0;
    std::string __Vtask_uvm_report_info__12__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__12__report_enabled_checked;
    __Vtask_uvm_report_info__12__report_enabled_checked = 0;
    std::string __Vfunc_get_name__13__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__14__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_root> __Vtask_get_root__15__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_shared_access_seq> __Vfunc_create__17__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_shared_access_seq> __Vfunc_create__18__Vfuncout;
    // Body
    VL_KEEP_THIS;
    {
        if ((VlNull{} == Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_sequence__Tz304::__PVT__model)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__4__id = "uvm_reg_mem_shared_access_seq"s;
                            __Vfunc_uvm_report_enabled__4__severity = 2U;
                            __Vfunc_uvm_report_enabled__4__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__5__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__5__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__6__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__6__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__4__verbosity, (IData)(__Vfunc_uvm_report_enabled__4__severity), __Vfunc_uvm_report_enabled__4__id, __Vtask_uvm_report_enabled__7__Vfuncout);
                            __Vfunc_uvm_report_enabled__4__Vfuncout 
                                = __Vtask_uvm_report_enabled__7__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__4__Vfuncout))) {
                __Vtask_uvm_report_error__8__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__8__context_name = ""s;
                __Vtask_uvm_report_error__8__line = 0x0000018dU;
                __Vtask_uvm_report_error__8__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s;
                __Vtask_uvm_report_error__8__verbosity = 0U;
                __Vtask_uvm_report_error__8__message = "No register model specified to run sequence on"s;
                __Vtask_uvm_report_error__8__id = "uvm_reg_mem_shared_access_seq"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__9__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__9__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__10__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__10__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__8__id, __Vtask_uvm_report_error__8__message, __Vtask_uvm_report_error__8__verbosity, __Vtask_uvm_report_error__8__filename, __Vtask_uvm_report_error__8__line, __Vtask_uvm_report_error__8__context_name, (IData)(__Vtask_uvm_report_error__8__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        __Vtask_uvm_report_info__12__report_enabled_checked = 0U;
        __Vtask_uvm_report_info__12__context_name = ""s;
        __Vtask_uvm_report_info__12__line = 0U;
        __Vtask_uvm_report_info__12__filename = ""s;
        __Vtask_uvm_report_info__12__verbosity = 0x00000064U;
        __Vtask_uvm_report_info__12__message = VL_CVT_PACK_STR_NN(
                                                                  VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("\n\nStarting "s, 
                                                                                ([&]() {
                            this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__13__Vfuncout);
                        }(), __Vfunc_get_name__13__Vfuncout)), " sequence...\n"s));
        __Vtask_uvm_report_info__12__id = "STARTING_SEQ"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__14__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
            = __Vfunc_get__14__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__15__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
            = __Vtask_get_root__15__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__12__id, __Vtask_uvm_report_info__12__message, __Vtask_uvm_report_info__12__verbosity, __Vtask_uvm_report_info__12__filename, __Vtask_uvm_report_info__12__line, __Vtask_uvm_report_info__12__context_name, (IData)(__Vtask_uvm_report_info__12__report_enabled_checked));
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi174__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "reg_shared_access_seq"s, VlNull{}, ""s, __Vfunc_create__17__Vfuncout);
        this->__PVT__reg_seq = __Vfunc_create__17__Vfuncout;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi175__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "reg_shared_access_seq"s, VlNull{}, ""s, __Vfunc_create__18__Vfuncout);
        this->__PVT__mem_seq = __Vfunc_create__18__Vfuncout;
        this->__VnoInFunc_reset_blk(vlSymsp, Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_sequence__Tz304::__PVT__model);
        VL_NULL_CHECK(Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_sequence__Tz304::__PVT__model, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 407)->__VnoInFunc_reset(vlSymsp, "HARD"s);
        co_await this->__VnoInFunc_do_block(vlProcess, vlSymsp, Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_sequence__Tz304::__PVT__model);
        __Vlabel0: ;
    }
}

VlCoroutine Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc_do_block(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_block> blk) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc_do_block\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz54> __Vfunc_get_by_name__22__Vfuncout;
    std::string __Vtask_get_full_name__23__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz54> __Vfunc_get_by_name__24__Vfuncout;
    std::string __Vtask_get_full_name__25__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz54> __Vfunc_get_by_name__26__Vfuncout;
    std::string __Vtask_get_full_name__27__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz54> __Vfunc_get_by_name__28__Vfuncout;
    std::string __Vtask_get_full_name__29__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz54> __Vfunc_get_by_name__33__Vfuncout;
    std::string __Vtask_get_full_name__34__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz54> __Vfunc_get_by_name__35__Vfuncout;
    std::string __Vtask_get_full_name__36__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer_base> __Vfunc_get_sequencer__38__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz54> __Vfunc_get_by_name__40__Vfuncout;
    std::string __Vtask_get_full_name__41__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz54> __Vfunc_get_by_name__42__Vfuncout;
    std::string __Vtask_get_full_name__43__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz54> __Vfunc_get_by_name__44__Vfuncout;
    std::string __Vtask_get_full_name__45__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz54> __Vfunc_get_by_name__46__Vfuncout;
    std::string __Vtask_get_full_name__47__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer_base> __Vfunc_get_sequencer__49__Vfuncout;
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0;
    IData/*31:0*/ unnamedblk2__DOT__i;
    unnamedblk2__DOT__i = 0;
    VlQueue<VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_block>> unnamedblk3__DOT__blks;
    IData/*31:0*/ unnamedblk3__DOT__unnamedblk4__DOT__i;
    unnamedblk3__DOT__unnamedblk4__DOT__i = 0;
    VlQueue<VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg>> regs;
    VlQueue<VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_mem>> mems;
    {
        if (((((VlNull{} != ([&]() {
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz54__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                        VL_NULL_CHECK(blk, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 421)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__23__Vfuncout);
                                                    }(), __Vtask_get_full_name__23__Vfuncout))), "NO_REG_TESTS"s, 0U, __Vfunc_get_by_name__22__Vfuncout);
                                }(), __Vfunc_get_by_name__22__Vfuncout)) 
               || (VlNull{} != ([&]() {
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz54__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                        VL_NULL_CHECK(blk, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 423)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__25__Vfuncout);
                                                    }(), __Vtask_get_full_name__25__Vfuncout))), "NO_MEM_TESTS"s, 0U, __Vfunc_get_by_name__24__Vfuncout);
                                }(), __Vfunc_get_by_name__24__Vfuncout))) 
              || (VlNull{} != ([&]() {
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz54__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                    VL_NULL_CHECK(blk, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 425)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__27__Vfuncout);
                                                }(), __Vtask_get_full_name__27__Vfuncout))), "NO_REG_SHARED_ACCESS_TEST"s, 0U, __Vfunc_get_by_name__26__Vfuncout);
                            }(), __Vfunc_get_by_name__26__Vfuncout))) 
             || (VlNull{} != ([&]() {
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz54__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                VL_NULL_CHECK(blk, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 427)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__29__Vfuncout);
                                            }(), __Vtask_get_full_name__29__Vfuncout))), "NO_MEM_SHARED_ACCESS_TEST"s, 0U, __Vfunc_get_by_name__28__Vfuncout);
                        }(), __Vfunc_get_by_name__28__Vfuncout)))) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_reset_blk(vlSymsp, Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_sequence__Tz304::__PVT__model);
        VL_NULL_CHECK(Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_sequence__Tz304::__PVT__model, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 432)->__VnoInFunc_reset(vlSymsp, "HARD"s);
        VL_NULL_CHECK(blk, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 435)->__VnoInFunc_get_registers(vlSymsp, regs, 0U);
        unnamedblk1__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk1__DOT__i, regs.size())) {
            {
                if (((VlNull{} != ([&]() {
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz54__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                        VL_NULL_CHECK(regs.at(unnamedblk1__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 438)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__34__Vfuncout);
                                                    }(), __Vtask_get_full_name__34__Vfuncout))), "NO_REG_TESTS"s, 0U, __Vfunc_get_by_name__33__Vfuncout);
                                }(), __Vfunc_get_by_name__33__Vfuncout)) 
                     || (VlNull{} != ([&]() {
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz54__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                        VL_NULL_CHECK(regs.at(unnamedblk1__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 440)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__36__Vfuncout);
                                                    }(), __Vtask_get_full_name__36__Vfuncout))), "NO_REG_SHARED_ACCESS_TEST"s, 0U, __Vfunc_get_by_name__35__Vfuncout);
                                }(), __Vfunc_get_by_name__35__Vfuncout)))) {
                    goto __Vlabel1;
                }
                VL_NULL_CHECK(this->__PVT__reg_seq, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 443)->__PVT__rg 
                    = regs.at(unnamedblk1__DOT__i);
                co_await VL_NULL_CHECK(this->__PVT__reg_seq, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 444)->__VnoInFunc_start(vlProcess, vlSymsp, 
                                                                                ([&]() {
                            this->__VnoInFunc_get_sequencer(vlSymsp, __Vfunc_get_sequencer__38__Vfuncout);
                        }(), __Vfunc_get_sequencer__38__Vfuncout), 
                                                                                VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq>{this}, 0xffffffffU, 1U);
                __Vlabel1: ;
            }
            unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
        }
        VL_NULL_CHECK(blk, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 448)->__VnoInFunc_get_memories(vlSymsp, mems, 0U);
        unnamedblk2__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk2__DOT__i, mems.size())) {
            {
                if (((((VlNull{} != ([&]() {
                                            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz54__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                                VL_NULL_CHECK(mems.at(unnamedblk2__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 451)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__41__Vfuncout);
                                                            }(), __Vtask_get_full_name__41__Vfuncout))), "NO_REG_TESTS"s, 0U, __Vfunc_get_by_name__40__Vfuncout);
                                        }(), __Vfunc_get_by_name__40__Vfuncout)) 
                       || (VlNull{} != ([&]() {
                                            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz54__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                                VL_NULL_CHECK(mems.at(unnamedblk2__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 453)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__43__Vfuncout);
                                                            }(), __Vtask_get_full_name__43__Vfuncout))), "NO_MEM_TESTS"s, 0U, __Vfunc_get_by_name__42__Vfuncout);
                                        }(), __Vfunc_get_by_name__42__Vfuncout))) 
                      || (VlNull{} != ([&]() {
                                        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz54__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                            VL_NULL_CHECK(mems.at(unnamedblk2__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 455)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__45__Vfuncout);
                                                        }(), __Vtask_get_full_name__45__Vfuncout))), "NO_REG_SHARED_ACCESS_TEST"s, 0U, __Vfunc_get_by_name__44__Vfuncout);
                                    }(), __Vfunc_get_by_name__44__Vfuncout))) 
                     || (VlNull{} != ([&]() {
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz54__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                        VL_NULL_CHECK(mems.at(unnamedblk2__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 457)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__47__Vfuncout);
                                                    }(), __Vtask_get_full_name__47__Vfuncout))), "NO_MEM_SHARED_ACCESS_TEST"s, 0U, __Vfunc_get_by_name__46__Vfuncout);
                                }(), __Vfunc_get_by_name__46__Vfuncout)))) {
                    goto __Vlabel2;
                }
                VL_NULL_CHECK(this->__PVT__mem_seq, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 460)->__PVT__mem 
                    = mems.at(unnamedblk2__DOT__i);
                co_await VL_NULL_CHECK(this->__PVT__mem_seq, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 461)->__VnoInFunc_start(vlProcess, vlSymsp, 
                                                                                ([&]() {
                            this->__VnoInFunc_get_sequencer(vlSymsp, __Vfunc_get_sequencer__49__Vfuncout);
                        }(), __Vfunc_get_sequencer__49__Vfuncout), 
                                                                                VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq>{this}, 0xffffffffU, 1U);
                __Vlabel2: ;
            }
            unnamedblk2__DOT__i = ((IData)(1U) + unnamedblk2__DOT__i);
        }
        VL_NULL_CHECK(blk, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 467)->__VnoInFunc_get_blocks(vlSymsp, unnamedblk3__DOT__blks, 1U);
        unnamedblk3__DOT__unnamedblk4__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk3__DOT__unnamedblk4__DOT__i, unnamedblk3__DOT__blks.size())) {
            co_await this->__VnoInFunc_do_block(vlProcess, vlSymsp, unnamedblk3__DOT__blks.at(unnamedblk3__DOT__unnamedblk4__DOT__i));
            unnamedblk3__DOT__unnamedblk4__DOT__i = 
                ((IData)(1U) + unnamedblk3__DOT__unnamedblk4__DOT__i);
        }
        __Vlabel0: ;
    }
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc_reset_blk(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_block> blk) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc_reset_blk\n"); );
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc_randomize(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__53__Vfuncout;
    __Vfunc___Vbasic_randomize__53__Vfuncout = 0;
    // Body
    Vvirtual_sequences_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vvirtual_sequences_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__53__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__53__Vfuncout));
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc___Vbasic_randomize(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::_ctor_var_reset(Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::to_string_middle\n"); );
    // Body
    std::string out;
    out += "reg_seq:" + VL_TO_STRING(__PVT__reg_seq);
    out += ", mem_seq:" + VL_TO_STRING(__PVT__mem_seq);
    out += ", "+ Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_sequence__Tz304::to_string_middle();
    return (out);
}
