// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvirtual_sequences.h for the primary calling header

#include "Vvirtual_sequences__pch.h"

Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam::Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam_cfg> cfg, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_mem> mem) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__for_each_idx = 0xffffffffU;
    this->__PVT__cfg = cfg;
    this->__PVT__memory = mem;
    this->__PVT__default_alloc = VL_NEW(Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam_policy, vlSymsp);
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam::__VnoInFunc_reconfigure(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam_cfg> cfg, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam_cfg> &reconfigure__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam::__VnoInFunc_reconfigure\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__1__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_root> __Vtask_get_root__2__Vfuncout;
    QData/*63:0*/ __Vtask_get_start_offset__4__Vfuncout;
    __Vtask_get_start_offset__4__Vfuncout = 0;
    QData/*63:0*/ __Vtask_get_end_offset__5__Vfuncout;
    __Vtask_get_end_offset__5__Vfuncout = 0;
    QData/*63:0*/ __Vtask_get_start_offset__7__Vfuncout;
    __Vtask_get_start_offset__7__Vfuncout = 0;
    QData/*63:0*/ __Vtask_get_end_offset__8__Vfuncout;
    __Vtask_get_end_offset__8__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ unnamedblk396__DOT__i;
    unnamedblk396__DOT__i = 0;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_root> top;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t> cs;
    {
        if ((VlNull{} == cfg)) {
            reconfigure__Vfuncrtn = this->__PVT__cfg;
            goto __Vlabel0;
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__1__Vfuncout);
        cs = __Vfunc_get__1__Vfuncout;
        VL_NULL_CHECK(cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 602)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__2__Vfuncout);
        top = __Vtask_get_root__2__Vfuncout;
        if ((VL_NULL_CHECK(cfg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 605)
             ->__PVT__n_bytes != VL_NULL_CHECK(this->__PVT__cfg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 605)
             ->__PVT__n_bytes)) {
            VL_NULL_CHECK(top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 606)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_mam"s, VL_SFORMATF_N_NX("Cannot reconfigure Memory Allocation Manager with a different number of bytes (%0# !== %0#)",0,
                                                                                32,
                                                                                VL_NULL_CHECK(cfg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 608)
                                                                                ->__PVT__n_bytes,
                                                                                32,
                                                                                VL_NULL_CHECK(this->__PVT__cfg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 608)
                                                                                ->__PVT__n_bytes) , 0x00000064U, ""s, 0U, ""s, 0U);
            reconfigure__Vfuncrtn = this->__PVT__cfg;
            goto __Vlabel0;
        }
        unnamedblk396__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk396__DOT__i, this->__PVT__in_use.size())) {
            if (((([&]() {
                                VL_NULL_CHECK(this->__PVT__in_use.at(unnamedblk396__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 614)
                   ->__VnoInFunc_get_start_offset(vlSymsp, __Vtask_get_start_offset__4__Vfuncout);
                            }(), __Vtask_get_start_offset__4__Vfuncout) 
                  < VL_NULL_CHECK(cfg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 614)
                  ->__PVT__start_offset) || (([&]() {
                                VL_NULL_CHECK(this->__PVT__in_use.at(unnamedblk396__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 615)
                                              ->__VnoInFunc_get_end_offset(vlSymsp, __Vtask_get_end_offset__5__Vfuncout);
                            }(), __Vtask_get_end_offset__5__Vfuncout) 
                                             > VL_NULL_CHECK(cfg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 615)
                                             ->__PVT__end_offset))) {
                VL_NULL_CHECK(top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 616)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_mam"s, VL_SFORMATF_N_NX("Cannot reconfigure Memory Allocation Manager with a currently allocated region outside of the managed address range ([%0#:%0#] outside of [%0#:%0#])",0,
                                                                                64,
                                                                                ([&]() {
                                    VL_NULL_CHECK(this->__PVT__in_use.at(unnamedblk396__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 618)
                                                                                ->__VnoInFunc_get_start_offset(vlSymsp, __Vtask_get_start_offset__7__Vfuncout);
                                }(), __Vtask_get_start_offset__7__Vfuncout),
                                                                                64,
                                                                                ([&]() {
                                    VL_NULL_CHECK(this->__PVT__in_use.at(unnamedblk396__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 619)
                                                                                ->__VnoInFunc_get_end_offset(vlSymsp, __Vtask_get_end_offset__8__Vfuncout);
                                }(), __Vtask_get_end_offset__8__Vfuncout),
                                                                                64,
                                                                                VL_NULL_CHECK(cfg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 620)
                                                                                ->__PVT__start_offset,
                                                                                64,
                                                                                VL_NULL_CHECK(cfg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 620)
                                                                                ->__PVT__end_offset) , 0x00000064U, ""s, 0U, ""s, 0U);
                reconfigure__Vfuncrtn = this->__PVT__cfg;
                goto __Vlabel0;
            }
            unnamedblk396__DOT__i = ((IData)(1U) + unnamedblk396__DOT__i);
        }
        reconfigure__Vfuncrtn = this->__PVT__cfg;
        this->__PVT__cfg = cfg;
        __Vlabel0: ;
    }
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam::__VnoInFunc_reserve_region(Vvirtual_sequences__Syms* __restrict vlSymsp, QData/*63:0*/ start_offset, IData/*31:0*/ n_bytes, std::string fname, IData/*31:0*/ lineno, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_region> &reserve_region__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam::__VnoInFunc_reserve_region\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__9__Vfuncout;
    __Vfunc_uvm_report_enabled__9__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__9__verbosity;
    __Vfunc_uvm_report_enabled__9__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__9__severity;
    __Vfunc_uvm_report_enabled__9__severity = 0;
    std::string __Vfunc_uvm_report_enabled__9__id;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__10__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_root> __Vtask_get_root__11__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__12__Vfuncout;
    __Vtask_uvm_report_enabled__12__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__13__id;
    std::string __Vtask_uvm_report_error__13__message;
    IData/*31:0*/ __Vtask_uvm_report_error__13__verbosity;
    __Vtask_uvm_report_error__13__verbosity = 0;
    std::string __Vtask_uvm_report_error__13__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__13__line;
    __Vtask_uvm_report_error__13__line = 0;
    std::string __Vtask_uvm_report_error__13__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__13__report_enabled_checked;
    __Vtask_uvm_report_error__13__report_enabled_checked = 0;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__14__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_root> __Vtask_get_root__15__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__17__Vfuncout;
    __Vfunc_uvm_report_enabled__17__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__17__verbosity;
    __Vfunc_uvm_report_enabled__17__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__17__severity;
    __Vfunc_uvm_report_enabled__17__severity = 0;
    std::string __Vfunc_uvm_report_enabled__17__id;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__18__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_root> __Vtask_get_root__19__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__20__Vfuncout;
    __Vtask_uvm_report_enabled__20__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__21__id;
    std::string __Vtask_uvm_report_error__21__message;
    IData/*31:0*/ __Vtask_uvm_report_error__21__verbosity;
    __Vtask_uvm_report_error__21__verbosity = 0;
    std::string __Vtask_uvm_report_error__21__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__21__line;
    __Vtask_uvm_report_error__21__line = 0;
    std::string __Vtask_uvm_report_error__21__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__21__report_enabled_checked;
    __Vtask_uvm_report_error__21__report_enabled_checked = 0;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__22__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_root> __Vtask_get_root__23__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__25__Vfuncout;
    __Vfunc_uvm_report_enabled__25__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__25__verbosity;
    __Vfunc_uvm_report_enabled__25__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__25__severity;
    __Vfunc_uvm_report_enabled__25__severity = 0;
    std::string __Vfunc_uvm_report_enabled__25__id;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__26__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_root> __Vtask_get_root__27__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__28__Vfuncout;
    __Vtask_uvm_report_enabled__28__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__29__id;
    std::string __Vtask_uvm_report_error__29__message;
    IData/*31:0*/ __Vtask_uvm_report_error__29__verbosity;
    __Vtask_uvm_report_error__29__verbosity = 0;
    std::string __Vtask_uvm_report_error__29__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__29__line;
    __Vtask_uvm_report_error__29__line = 0;
    std::string __Vtask_uvm_report_error__29__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__29__report_enabled_checked;
    __Vtask_uvm_report_error__29__report_enabled_checked = 0;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__30__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_root> __Vtask_get_root__31__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__33__Vfuncout;
    __Vfunc_uvm_report_enabled__33__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__33__verbosity;
    __Vfunc_uvm_report_enabled__33__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__33__severity;
    __Vfunc_uvm_report_enabled__33__severity = 0;
    std::string __Vfunc_uvm_report_enabled__33__id;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__34__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_root> __Vtask_get_root__35__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__36__Vfuncout;
    __Vtask_uvm_report_enabled__36__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__37__id;
    std::string __Vtask_uvm_report_info__37__message;
    IData/*31:0*/ __Vtask_uvm_report_info__37__verbosity;
    __Vtask_uvm_report_info__37__verbosity = 0;
    std::string __Vtask_uvm_report_info__37__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__37__line;
    __Vtask_uvm_report_info__37__line = 0;
    std::string __Vtask_uvm_report_info__37__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__37__report_enabled_checked;
    __Vtask_uvm_report_info__37__report_enabled_checked = 0;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__38__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_root> __Vtask_get_root__39__Vfuncout;
    QData/*63:0*/ __Vtask_get_end_offset__41__Vfuncout;
    __Vtask_get_end_offset__41__Vfuncout = 0;
    QData/*63:0*/ __Vtask_get_start_offset__42__Vfuncout;
    __Vtask_get_start_offset__42__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__43__Vfuncout;
    __Vfunc_uvm_report_enabled__43__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__43__verbosity;
    __Vfunc_uvm_report_enabled__43__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__43__severity;
    __Vfunc_uvm_report_enabled__43__severity = 0;
    std::string __Vfunc_uvm_report_enabled__43__id;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__44__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_root> __Vtask_get_root__45__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__46__Vfuncout;
    __Vtask_uvm_report_enabled__46__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__47__id;
    std::string __Vtask_uvm_report_error__47__message;
    IData/*31:0*/ __Vtask_uvm_report_error__47__verbosity;
    __Vtask_uvm_report_error__47__verbosity = 0;
    std::string __Vtask_uvm_report_error__47__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__47__line;
    __Vtask_uvm_report_error__47__line = 0;
    std::string __Vtask_uvm_report_error__47__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__47__report_enabled_checked;
    __Vtask_uvm_report_error__47__report_enabled_checked = 0;
    std::string __Vtask_convert2string__48__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__49__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_root> __Vtask_get_root__50__Vfuncout;
    QData/*63:0*/ __Vtask_get_start_offset__52__Vfuncout;
    __Vtask_get_start_offset__52__Vfuncout = 0;
    std::string __Vtemp_1;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ unnamedblk397__DOT__i;
    unnamedblk397__DOT__i = 0;
    QData/*63:0*/ end_offset;
    end_offset = 0;
    {
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        if ((0U == n_bytes)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__9__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__9__severity = 2U;
                            __Vfunc_uvm_report_enabled__9__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__10__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__10__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__11__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__11__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__9__verbosity, (IData)(__Vfunc_uvm_report_enabled__9__severity), __Vfunc_uvm_report_enabled__9__id, __Vtask_uvm_report_enabled__12__Vfuncout);
                            __Vfunc_uvm_report_enabled__9__Vfuncout 
                                = __Vtask_uvm_report_enabled__12__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__9__Vfuncout))) {
                __Vtask_uvm_report_error__13__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__13__context_name = ""s;
                __Vtask_uvm_report_error__13__line = 0x0000027eU;
                __Vtask_uvm_report_error__13__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh"s;
                __Vtask_uvm_report_error__13__verbosity = 0U;
                __Vtask_uvm_report_error__13__message = "Cannot reserve 0 bytes"s;
                __Vtask_uvm_report_error__13__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__14__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__14__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__15__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__15__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__13__id, __Vtask_uvm_report_error__13__message, __Vtask_uvm_report_error__13__verbosity, __Vtask_uvm_report_error__13__filename, __Vtask_uvm_report_error__13__line, __Vtask_uvm_report_error__13__context_name, (IData)(__Vtask_uvm_report_error__13__report_enabled_checked));
            }
            reserve_region__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        if ((start_offset < VL_NULL_CHECK(this->__PVT__cfg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 642)
             ->__PVT__start_offset)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__17__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__17__severity = 2U;
                            __Vfunc_uvm_report_enabled__17__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__18__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__18__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__19__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__19__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__17__verbosity, (IData)(__Vfunc_uvm_report_enabled__17__severity), __Vfunc_uvm_report_enabled__17__id, __Vtask_uvm_report_enabled__20__Vfuncout);
                            __Vfunc_uvm_report_enabled__17__Vfuncout 
                                = __Vtask_uvm_report_enabled__20__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__17__Vfuncout))) {
                __Vtask_uvm_report_error__21__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__21__context_name = ""s;
                __Vtask_uvm_report_error__21__line = 0x00000284U;
                __Vtask_uvm_report_error__21__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh"s;
                __Vtask_uvm_report_error__21__verbosity = 0U;
                __Vtask_uvm_report_error__21__message 
                    = VL_SFORMATF_N_NX("Cannot reserve before start of memory space: 'h%x < 'h%x",0,
                                       64,start_offset,
                                       64,VL_NULL_CHECK(this->__PVT__cfg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 644)
                                       ->__PVT__start_offset) ;
                __Vtask_uvm_report_error__21__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__22__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__22__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__23__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__23__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__21__id, __Vtask_uvm_report_error__21__message, __Vtask_uvm_report_error__21__verbosity, __Vtask_uvm_report_error__21__filename, __Vtask_uvm_report_error__21__line, __Vtask_uvm_report_error__21__context_name, (IData)(__Vtask_uvm_report_error__21__report_enabled_checked));
            }
            reserve_region__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        end_offset = (start_offset + VL_DIV_QQQ(64, 
                                                ((QData)((IData)(n_bytes)) 
                                                 - 1ULL), (QData)((IData)(VL_NULL_CHECK(this->__PVT__cfg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 648)
                                                                          ->__PVT__n_bytes))));
        n_bytes = (IData)(((1ULL + (end_offset - start_offset)) 
                           * (QData)((IData)(VL_NULL_CHECK(this->__PVT__cfg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 649)
                                             ->__PVT__n_bytes))));
        if ((end_offset > VL_NULL_CHECK(this->__PVT__cfg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 651)
             ->__PVT__end_offset)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__25__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__25__severity = 2U;
                            __Vfunc_uvm_report_enabled__25__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__26__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__26__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__27__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__27__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__25__verbosity, (IData)(__Vfunc_uvm_report_enabled__25__severity), __Vfunc_uvm_report_enabled__25__id, __Vtask_uvm_report_enabled__28__Vfuncout);
                            __Vfunc_uvm_report_enabled__25__Vfuncout 
                                = __Vtask_uvm_report_enabled__28__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__25__Vfuncout))) {
                __Vtask_uvm_report_error__29__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__29__context_name = ""s;
                __Vtask_uvm_report_error__29__line = 0x0000028dU;
                __Vtask_uvm_report_error__29__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh"s;
                __Vtask_uvm_report_error__29__verbosity = 0U;
                __Vtask_uvm_report_error__29__message 
                    = VL_SFORMATF_N_NX("Cannot reserve past end of memory space: 'h%x > 'h%x",0,
                                       64,end_offset,
                                       64,VL_NULL_CHECK(this->__PVT__cfg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 653)
                                       ->__PVT__end_offset) ;
                __Vtask_uvm_report_error__29__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__30__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__30__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__31__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__31__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__29__id, __Vtask_uvm_report_error__29__message, __Vtask_uvm_report_error__29__verbosity, __Vtask_uvm_report_error__29__filename, __Vtask_uvm_report_error__29__line, __Vtask_uvm_report_error__29__context_name, (IData)(__Vtask_uvm_report_error__29__report_enabled_checked));
            }
            reserve_region__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__33__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__33__severity = 0U;
                        __Vfunc_uvm_report_enabled__33__verbosity = 0x000000c8U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__34__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__34__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__35__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__35__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__33__verbosity, (IData)(__Vfunc_uvm_report_enabled__33__severity), __Vfunc_uvm_report_enabled__33__id, __Vtask_uvm_report_enabled__36__Vfuncout);
                        __Vfunc_uvm_report_enabled__33__Vfuncout 
                            = __Vtask_uvm_report_enabled__36__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__33__Vfuncout))) {
            __Vtask_uvm_report_info__37__report_enabled_checked = 1U;
            __Vtask_uvm_report_info__37__context_name = ""s;
            __Vtask_uvm_report_info__37__line = 0x00000292U;
            __Vtask_uvm_report_info__37__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh"s;
            __Vtask_uvm_report_info__37__verbosity = 0x000000c8U;
            __Vtask_uvm_report_info__37__message = VL_SFORMATF_N_NX("Attempting to reserve ['h%x:'h%x]...",0,
                                                                    64,
                                                                    start_offset,
                                                                    64,
                                                                    end_offset) ;
            __Vtask_uvm_report_info__37__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__38__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__38__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__39__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__39__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__37__id, __Vtask_uvm_report_info__37__message, __Vtask_uvm_report_info__37__verbosity, __Vtask_uvm_report_info__37__filename, __Vtask_uvm_report_info__37__line, __Vtask_uvm_report_info__37__context_name, (IData)(__Vtask_uvm_report_info__37__report_enabled_checked));
        }
        unnamedblk397__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk397__DOT__i, this->__PVT__in_use.size())) {
            if (((start_offset <= ([&]() {
                                VL_NULL_CHECK(this->__PVT__in_use.at(unnamedblk397__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 664)
                                   ->__VnoInFunc_get_end_offset(vlSymsp, __Vtask_get_end_offset__41__Vfuncout);
                            }(), __Vtask_get_end_offset__41__Vfuncout)) 
                 && (end_offset >= ([&]() {
                                VL_NULL_CHECK(this->__PVT__in_use.at(unnamedblk397__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 665)
                                    ->__VnoInFunc_get_start_offset(vlSymsp, __Vtask_get_start_offset__42__Vfuncout);
                            }(), __Vtask_get_start_offset__42__Vfuncout)))) {
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__43__id = "RegModel"s;
                                __Vfunc_uvm_report_enabled__43__severity = 2U;
                                __Vfunc_uvm_report_enabled__43__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__44__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__44__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__45__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__45__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__43__verbosity, (IData)(__Vfunc_uvm_report_enabled__43__severity), __Vfunc_uvm_report_enabled__43__id, __Vtask_uvm_report_enabled__46__Vfuncout);
                                __Vfunc_uvm_report_enabled__43__Vfuncout 
                                    = __Vtask_uvm_report_enabled__46__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__43__Vfuncout))) {
                    __Vtask_uvm_report_error__47__report_enabled_checked = 1U;
                    __Vtask_uvm_report_error__47__context_name = ""s;
                    __Vtask_uvm_report_error__47__line = 0x0000029dU;
                    __Vtask_uvm_report_error__47__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh"s;
                    __Vtask_uvm_report_error__47__verbosity = 0U;
                    __Vtemp_1 = ([&]() {
                            VL_NULL_CHECK(this->__PVT__in_use.at(unnamedblk397__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 669)
                                 ->__VnoInFunc_convert2string(vlSymsp, __Vtask_convert2string__48__Vfuncout);
                        }(), __Vtask_convert2string__48__Vfuncout);
                    __Vtask_uvm_report_error__47__message 
                        = VL_SFORMATF_N_NX("Cannot reserve ['h%x:'h%x] because it overlaps with %@",0,
                                           64,start_offset,
                                           64,end_offset,
                                           -1,&(__Vtemp_1)) ;
                    __Vtask_uvm_report_error__47__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__49__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__49__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__50__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__50__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__47__id, __Vtask_uvm_report_error__47__message, __Vtask_uvm_report_error__47__verbosity, __Vtask_uvm_report_error__47__filename, __Vtask_uvm_report_error__47__line, __Vtask_uvm_report_error__47__context_name, (IData)(__Vtask_uvm_report_error__47__report_enabled_checked));
                }
                reserve_region__Vfuncrtn = VlNull{};
                goto __Vlabel0;
            }
            if ((start_offset > ([&]() {
                            VL_NULL_CHECK(this->__PVT__in_use.at(unnamedblk397__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 674)
                                 ->__VnoInFunc_get_start_offset(vlSymsp, __Vtask_get_start_offset__52__Vfuncout);
                        }(), __Vtask_get_start_offset__52__Vfuncout))) {
                reserve_region__Vfuncrtn = VL_NEW(Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_region, vlSymsp, start_offset, end_offset, 
                                                  ((IData)(1U) 
                                                   + 
                                                   ((IData)(end_offset) 
                                                    - (IData)(start_offset))), n_bytes, 
                                                  VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam>{this});
                this->__PVT__in_use.insert(unnamedblk397__DOT__i, reserve_region__Vfuncrtn);
                goto __Vlabel0;
            }
            unnamedblk397__DOT__i = ((IData)(1U) + unnamedblk397__DOT__i);
        }
        reserve_region__Vfuncrtn = VL_NEW(Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_region, vlSymsp, start_offset, end_offset, 
                                          ((IData)(1U) 
                                           + ((IData)(end_offset) 
                                              - (IData)(start_offset))), n_bytes, 
                                          VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam>{this});
        this->__PVT__in_use.push_back(reserve_region__Vfuncrtn);
        __Vlabel0: ;
    }
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam::__VnoInFunc_request_region(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ n_bytes, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam_policy> alloc, std::string fname, IData/*31:0*/ lineno, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_region> &request_region__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam::__VnoInFunc_request_region\n"); );
    // Locals
    IData/*31:0*/ __Vtask_randomize__55__Vfuncout;
    __Vtask_randomize__55__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__56__Vfuncout;
    __Vfunc_uvm_report_enabled__56__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__56__verbosity;
    __Vfunc_uvm_report_enabled__56__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__56__severity;
    __Vfunc_uvm_report_enabled__56__severity = 0;
    std::string __Vfunc_uvm_report_enabled__56__id;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__57__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_root> __Vtask_get_root__58__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__59__Vfuncout;
    __Vtask_uvm_report_enabled__59__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__60__id;
    std::string __Vtask_uvm_report_error__60__message;
    IData/*31:0*/ __Vtask_uvm_report_error__60__verbosity;
    __Vtask_uvm_report_error__60__verbosity = 0;
    std::string __Vtask_uvm_report_error__60__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__60__line;
    __Vtask_uvm_report_error__60__line = 0;
    std::string __Vtask_uvm_report_error__60__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__60__report_enabled_checked;
    __Vtask_uvm_report_error__60__report_enabled_checked = 0;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__61__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_root> __Vtask_get_root__62__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_region> __Vfunc_reserve_region__64__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    {
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        if ((VlNull{} == alloc)) {
            alloc = this->__PVT__default_alloc;
        }
        VL_NULL_CHECK(alloc, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 696)->__PVT__len 
            = ((IData)(1U) + VL_DIV_III(32, (n_bytes 
                                             - (IData)(1U)), VL_NULL_CHECK(this->__PVT__cfg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 696)
                                        ->__PVT__n_bytes));
        VL_NULL_CHECK(alloc, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 697)->__PVT__min_offset 
            = VL_NULL_CHECK(this->__PVT__cfg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 697)
            ->__PVT__start_offset;
        VL_NULL_CHECK(alloc, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 698)->__PVT__max_offset 
            = VL_NULL_CHECK(this->__PVT__cfg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 698)
            ->__PVT__end_offset;
        VL_NULL_CHECK(alloc, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 699)->__PVT__in_use 
            = this->__PVT__in_use;
        if ((1U & (~ (0U != ([&]() {
                                VL_NULL_CHECK(alloc, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 701)
                             ->__VnoInFunc_randomize(vlSymsp, __Vtask_randomize__55__Vfuncout);
                            }(), __Vtask_randomize__55__Vfuncout))))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__56__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__56__severity = 2U;
                            __Vfunc_uvm_report_enabled__56__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__57__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__57__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__58__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__58__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__56__verbosity, (IData)(__Vfunc_uvm_report_enabled__56__severity), __Vfunc_uvm_report_enabled__56__id, __Vtask_uvm_report_enabled__59__Vfuncout);
                            __Vfunc_uvm_report_enabled__56__Vfuncout 
                                = __Vtask_uvm_report_enabled__59__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__56__Vfuncout))) {
                __Vtask_uvm_report_error__60__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__60__context_name = ""s;
                __Vtask_uvm_report_error__60__line = 0x000002beU;
                __Vtask_uvm_report_error__60__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh"s;
                __Vtask_uvm_report_error__60__verbosity = 0U;
                __Vtask_uvm_report_error__60__message = "Unable to randomize policy"s;
                __Vtask_uvm_report_error__60__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__61__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__61__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__62__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__62__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__60__id, __Vtask_uvm_report_error__60__message, __Vtask_uvm_report_error__60__verbosity, __Vtask_uvm_report_error__60__filename, __Vtask_uvm_report_error__60__line, __Vtask_uvm_report_error__60__context_name, (IData)(__Vtask_uvm_report_error__60__report_enabled_checked));
            }
            request_region__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        this->__VnoInFunc_reserve_region(vlSymsp, VL_NULL_CHECK(alloc, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 706)
                                         ->__PVT__start_offset, n_bytes, ""s, 0U, __Vfunc_reserve_region__64__Vfuncout);
        request_region__Vfuncrtn = __Vfunc_reserve_region__64__Vfuncout;
        __Vlabel0: ;
    }
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam::__VnoInFunc_release_region(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_region> region) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam::__VnoInFunc_release_region\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__65__Vfuncout;
    __Vfunc_uvm_report_enabled__65__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__65__verbosity;
    __Vfunc_uvm_report_enabled__65__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__65__severity;
    __Vfunc_uvm_report_enabled__65__severity = 0;
    std::string __Vfunc_uvm_report_enabled__65__id;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__66__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_root> __Vtask_get_root__67__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__68__Vfuncout;
    __Vtask_uvm_report_enabled__68__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__69__id;
    std::string __Vtask_uvm_report_error__69__message;
    IData/*31:0*/ __Vtask_uvm_report_error__69__verbosity;
    __Vtask_uvm_report_error__69__verbosity = 0;
    std::string __Vtask_uvm_report_error__69__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__69__line;
    __Vtask_uvm_report_error__69__line = 0;
    std::string __Vtask_uvm_report_error__69__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__69__report_enabled_checked;
    __Vtask_uvm_report_error__69__report_enabled_checked = 0;
    std::string __Vtask_convert2string__70__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__71__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_root> __Vtask_get_root__72__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ unnamedblk398__DOT__i;
    unnamedblk398__DOT__i = 0;
    {
        if ((VlNull{} == region)) {
            goto __Vlabel0;
        }
        unnamedblk398__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk398__DOT__i, this->__PVT__in_use.size())) {
            if ((this->__PVT__in_use.at(unnamedblk398__DOT__i) 
                 == region)) {
                this->__PVT__in_use.erase(unnamedblk398__DOT__i);
                goto __Vlabel0;
            }
            unnamedblk398__DOT__i = ((IData)(1U) + unnamedblk398__DOT__i);
        }
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__65__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__65__severity = 2U;
                        __Vfunc_uvm_report_enabled__65__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__66__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__66__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__67__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__67__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__65__verbosity, (IData)(__Vfunc_uvm_report_enabled__65__severity), __Vfunc_uvm_report_enabled__65__id, __Vtask_uvm_report_enabled__68__Vfuncout);
                        __Vfunc_uvm_report_enabled__65__Vfuncout 
                            = __Vtask_uvm_report_enabled__68__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__65__Vfuncout))) {
            __Vtask_uvm_report_error__69__report_enabled_checked = 1U;
            __Vtask_uvm_report_error__69__context_name = ""s;
            __Vtask_uvm_report_error__69__line = 0x000002d1U;
            __Vtask_uvm_report_error__69__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh"s;
            __Vtask_uvm_report_error__69__verbosity = 0U;
            __Vtask_uvm_report_error__69__message = 
                VL_CVT_PACK_STR_NN(VL_CONCATN_NNN("Attempting to release unallocated region\n"s, 
                                                  ([&]() {
                            VL_NULL_CHECK(region, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 721)
                                                   ->__VnoInFunc_convert2string(vlSymsp, __Vtask_convert2string__70__Vfuncout);
                        }(), __Vtask_convert2string__70__Vfuncout)));
            __Vtask_uvm_report_error__69__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__71__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__71__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__72__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__72__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__69__id, __Vtask_uvm_report_error__69__message, __Vtask_uvm_report_error__69__verbosity, __Vtask_uvm_report_error__69__filename, __Vtask_uvm_report_error__69__line, __Vtask_uvm_report_error__69__context_name, (IData)(__Vtask_uvm_report_error__69__report_enabled_checked));
        }
        __Vlabel0: ;
    }
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam::__VnoInFunc_release_all_regions(Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam::__VnoInFunc_release_all_regions\n"); );
    // Body
    this->__PVT__in_use.clear();
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam::__VnoInFunc_convert2string(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam::__VnoInFunc_convert2string\n"); );
    // Locals
    std::string __Vtask_convert2string__74__Vfuncout;
    std::string __Vtemp_1;
    // Body
    IData/*31:0*/ unnamedblk399__DOT__i;
    unnamedblk399__DOT__i = 0;
    convert2string__Vfuncrtn = "Allocated memory regions:\n"s;
    unnamedblk399__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk399__DOT__i, this->__PVT__in_use.size())) {
        __Vtemp_1 = ([&]() {
                VL_NULL_CHECK(this->__PVT__in_use.at(unnamedblk399__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 734)
                     ->__VnoInFunc_convert2string(vlSymsp, __Vtask_convert2string__74__Vfuncout);
            }(), __Vtask_convert2string__74__Vfuncout);
        VL_SFORMAT_NX(64,convert2string__Vfuncrtn,"%@   %@\n",0,
                      -1,&(convert2string__Vfuncrtn),
                      -1,&(__Vtemp_1));
        unnamedblk399__DOT__i = ((IData)(1U) + unnamedblk399__DOT__i);
    }
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam::__VnoInFunc_for_each(Vvirtual_sequences__Syms* __restrict vlSymsp, CData/*0:0*/ reset, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_region> &for_each__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam::__VnoInFunc_for_each\n"); );
    // Body
    {
        if (reset) {
            this->__PVT__for_each_idx = 0xffffffffU;
        }
        this->__PVT__for_each_idx = ((IData)(1U) + this->__PVT__for_each_idx);
        if (VL_GTES_III(32, this->__PVT__for_each_idx, this->__PVT__in_use.size())) {
            for_each__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        for_each__Vfuncrtn = this->__PVT__in_use.at(this->__PVT__for_each_idx);
        __Vlabel0: ;
    }
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam::__VnoInFunc_get_memory(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_mem> &get_memory__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam::__VnoInFunc_get_memory\n"); );
    // Body
    get_memory__Vfuncrtn = this->__PVT__memory;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam::_ctor_var_reset(Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__for_each_idx = 0;
    __PVT__lineno = 0;
}

std::string VL_TO_STRING(const VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_mam::to_string_middle\n"); );
    // Body
    std::string out;
    out += "default_alloc:" + VL_TO_STRING(__PVT__default_alloc);
    out += ", memory:" + VL_TO_STRING(__PVT__memory);
    out += ", cfg:" + VL_TO_STRING(__PVT__cfg);
    out += ", in_use:" + VL_TO_STRING(__PVT__in_use);
    out += ", for_each_idx:" + VL_TO_STRING(__PVT__for_each_idx);
    out += ", fname:" + VL_TO_STRING(__PVT__fname);
    out += ", lineno:" + VL_TO_STRING(__PVT__lineno);
    return (out);
}
