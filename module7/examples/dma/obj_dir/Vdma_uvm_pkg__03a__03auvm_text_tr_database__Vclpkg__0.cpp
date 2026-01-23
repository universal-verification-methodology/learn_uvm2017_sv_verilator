// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"

void Vdma_uvm_pkg__03a__03auvm_text_tr_database__Vclpkg::__VnoInFunc_get_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__pi99> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03auvm_text_tr_database__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__pi99> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi99__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vdma_uvm_pkg__03a__03auvm_text_tr_database__Vclpkg::__VnoInFunc_type_name(Vdma__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03auvm_text_tr_database__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_text_tr_database"s;
}

void Vdma_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_get_object_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__pi99> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi99__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vdma_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_create(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_text_tr_database> tmp;
    tmp = ((""s == name) ? VL_NEW(Vdma_uvm_pkg__03a__03auvm_text_tr_database, vlProcess, vlSymsp, "unnamed-uvm_text_tr_database"s)
            : VL_NEW(Vdma_uvm_pkg__03a__03auvm_text_tr_database, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vdma_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_get_type_name(Vdma__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_text_tr_database"s;
}

Vdma_uvm_pkg__03a__03auvm_text_tr_database::Vdma_uvm_pkg__03a__03auvm_text_tr_database(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name)
    : Vdma_uvm_pkg__03a__03auvm_tr_database(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_text_tr_database::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    this->__PVT__m_filename_dap = VL_NEW(Vdma_uvm_pkg__03a__03auvm_simple_lock_dap__Tz2, vlProcess, vlSymsp, "filename_dap"s);
    VL_NULL_CHECK(this->__PVT__m_filename_dap, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_text_tr_database.svh", 77)->__VnoInFunc_set(vlProcess, vlSymsp, "tr_db.log"s);
}

void Vdma_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_do_open_db(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &do_open_db__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_do_open_db\n"); );
    // Locals
    std::string __Vtask_get__6__Vfuncout;
    // Body
    if (VL_UNLIKELY(((0U == this->__PVT__m_file)))) {
        this->__PVT__m_file = VL_FOPEN_NN(([&]() {
                    VL_NULL_CHECK(this->__PVT__m_filename_dap, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_text_tr_database.svh", 97)
                                           ->__VnoInFunc_get(vlSymsp, __Vtask_get__6__Vfuncout);
                }(), __Vtask_get__6__Vfuncout), "a+"s);
        ;
        if ((0U != this->__PVT__m_file)) {
            VL_NULL_CHECK(this->__PVT__m_filename_dap, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_text_tr_database.svh", 99)->__VnoInFunc_lock(vlSymsp);
        }
    }
    do_open_db__Vfuncrtn = (0U != this->__PVT__m_file);
}

void Vdma_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_do_close_db(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &do_close_db__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_do_close_db\n"); );
    // Locals
    VlClassRef<Vdma_std__03a__03aprocess> __Vfunc_self__8__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vdma_std__03a__03aprocess> unnamedblk1__DOT____VforkParent;
    if ((0U != this->__PVT__m_file)) {
        vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __Vfunc_self__8__Vfuncout);
        unnamedblk1__DOT____VforkParent = __Vfunc_self__8__Vfuncout;
        this->__VnoInFunc_do_close_db____Vfork_1__0(std::make_shared<VlProcess>(), vlSymsp, unnamedblk1__DOT____VforkParent);
        VL_NULL_CHECK(this->__PVT__m_filename_dap, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_text_tr_database.svh", 120)->__VnoInFunc_unlock(vlSymsp);
    }
    do_close_db__Vfuncrtn = 1U;
}

VlCoroutine Vdma_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_do_close_db____Vfork_1__0(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_std__03a__03aprocess> unnamedblk1__DOT____VforkParent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_do_close_db____Vfork_1__0\n"); );
    // Locals
    VlClassRef<Vdma_std__03a__03aprocess> __Vtask___VforkTask_0__9____VforkParent;
    IData/*31:0*/ __Vtask_status__10__Vfuncout;
    __Vtask_status__10__Vfuncout = 0;
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __Vtrigprevexpr_hf5e44486__0;
    __Vtrigprevexpr_hf5e44486__0 = 0;
    __Vtask___VforkTask_0__9____VforkParent = unnamedblk1__DOT____VforkParent;
    if ((1U == ([&]() {
                    VL_NULL_CHECK(__Vtask___VforkTask_0__9____VforkParent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_text_tr_database.svh", 117)
                ->__VnoInFunc_status(vlSymsp, __Vtask_status__10__Vfuncout);
                }(), __Vtask_status__10__Vfuncout))) {
        CData/*0:0*/ __VdynTrigger_h100ae98d__0;
        __VdynTrigger_h100ae98d__0 = 0;
        __VdynTrigger_h100ae98d__0 = 0U;
        while ((1U & (~ (IData)(__VdynTrigger_h100ae98d__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@([true] (32'h1 != $_EXPRSTMT( // Function: status uvm_pkg::uvm_text_tr_database.__Vtask___VforkTask_0__9____VforkParent.(uvm_pkg::uvm_text_tr_database.__Vtask_status__10__Vfuncout); , ); ))", 
                                                         "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_text_tr_database.svh", 
                                                         117);
            __Vtrigprevexpr_hf5e44486__0 = (1U != ([&]() {
                        VL_NULL_CHECK(__Vtask___VforkTask_0__9____VforkParent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_text_tr_database.svh", 117)
                                                   ->__VnoInFunc_status(vlSymsp, __Vtask_status__10__Vfuncout);
                    }(), __Vtask_status__10__Vfuncout));
            __VdynTrigger_h100ae98d__0 = __Vtrigprevexpr_hf5e44486__0;
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h100ae98d__0);
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@([true] (32'h1 != $_EXPRSTMT( // Function: status uvm_pkg::uvm_text_tr_database.__Vtask___VforkTask_0__9____VforkParent.(uvm_pkg::uvm_text_tr_database.__Vtask_status__10__Vfuncout); , ); ))", 
                                                     "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_text_tr_database.svh", 
                                                     117);
    }
    VL_FCLOSE_I(this->__PVT__m_file); vlProcess->state(VlProcess::FINISHED);
    co_return;}

void Vdma_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_do_open_stream(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, std::string scope, std::string type_name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_tr_stream> &do_open_stream__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_do_open_stream\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_text_tr_stream> __Vfunc_create__12__Vfuncout;
    // Body
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_text_tr_stream> m_stream;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi106__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, name, VlNull{}, ""s, __Vfunc_create__12__Vfuncout);
    m_stream = __Vfunc_create__12__Vfuncout;
    do_open_stream__Vfuncrtn = m_stream;
}

void Vdma_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_do_establish_link(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_link_base> link) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_do_establish_link\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> __Vtask_get_lhs__13__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> __Vtask_get_rhs__14__Vfuncout;
    IData/*31:0*/ __Vtask_get_handle__15__Vfuncout;
    __Vtask_get_handle__15__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_handle__16__Vfuncout;
    __Vtask_get_handle__16__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_handle__17__Vfuncout;
    __Vtask_get_handle__17__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_handle__18__Vfuncout;
    __Vtask_get_handle__18__Vfuncout = 0;
    // Body
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_parent_child_link> unnamedblk2__DOT__pc_link;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_related_link> unnamedblk2__DOT__re_link;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_recorder> r_lhs;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_recorder> r_rhs;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> lhs;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> rhs;
    VL_NULL_CHECK(link, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_text_tr_database.svh", 147)->__VnoInFunc_get_lhs(vlSymsp, __Vtask_get_lhs__13__Vfuncout);
    lhs = __Vtask_get_lhs__13__Vfuncout;
    VL_NULL_CHECK(link, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_text_tr_database.svh", 148)->__VnoInFunc_get_rhs(vlSymsp, __Vtask_get_rhs__14__Vfuncout);
    rhs = __Vtask_get_rhs__14__Vfuncout;
    (void)VL_CAST_DYNAMIC(lhs, r_lhs);
    (void)VL_CAST_DYNAMIC(rhs, r_rhs);
    if ((1U & (~ ((VlNull{} == r_lhs) | (VlNull{} == r_rhs))))) {
        if (VL_UNLIKELY((VL_CAST_DYNAMIC(link, unnamedblk2__DOT__pc_link)))) {
            VL_FWRITEF_NX(this->__PVT__m_file,"  LINK @%0t {TXH1:%0d TXH2:%0d RELATION=child}\n",0,
                          64,VL_TIME_UNITED_Q(1000),
                          -9,32,([&]() {
                            VL_NULL_CHECK(r_lhs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_text_tr_database.svh", 162)
                                 ->__VnoInFunc_get_handle(vlSymsp, __Vtask_get_handle__15__Vfuncout);
                        }(), __Vtask_get_handle__15__Vfuncout),
                          32,([&]() {
                            VL_NULL_CHECK(r_rhs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_text_tr_database.svh", 163)
                              ->__VnoInFunc_get_handle(vlSymsp, __Vtask_get_handle__16__Vfuncout);
                        }(), __Vtask_get_handle__16__Vfuncout));
        } else if (VL_UNLIKELY((VL_CAST_DYNAMIC(link, unnamedblk2__DOT__re_link)))) {
            VL_FWRITEF_NX(this->__PVT__m_file,"  LINK @%0t {TXH1:%0d TXH2:%0d RELATION=}\n",0,
                          64,VL_TIME_UNITED_Q(1000),
                          -9,32,([&]() {
                            VL_NULL_CHECK(r_lhs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_text_tr_database.svh", 170)
                                 ->__VnoInFunc_get_handle(vlSymsp, __Vtask_get_handle__17__Vfuncout);
                        }(), __Vtask_get_handle__17__Vfuncout),
                          32,([&]() {
                            VL_NULL_CHECK(r_rhs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_text_tr_database.svh", 171)
                              ->__VnoInFunc_get_handle(vlSymsp, __Vtask_get_handle__18__Vfuncout);
                        }(), __Vtask_get_handle__18__Vfuncout));
        }
    }
}

void Vdma_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_set_file_name(Vdma__Syms* __restrict vlSymsp, std::string filename) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_set_file_name\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__19__Vfuncout;
    __Vfunc_uvm_report_enabled__19__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__19__verbosity;
    __Vfunc_uvm_report_enabled__19__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__19__severity;
    __Vfunc_uvm_report_enabled__19__severity = 0;
    std::string __Vfunc_uvm_report_enabled__19__id;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__20__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__21__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__22__Vfuncout;
    __Vtask_uvm_report_enabled__22__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__23__id;
    std::string __Vtask_uvm_report_warning__23__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__23__verbosity;
    __Vtask_uvm_report_warning__23__verbosity = 0;
    std::string __Vtask_uvm_report_warning__23__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__23__line;
    __Vtask_uvm_report_warning__23__line = 0;
    std::string __Vtask_uvm_report_warning__23__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__23__report_enabled_checked;
    __Vtask_uvm_report_warning__23__report_enabled_checked = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__24__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__25__Vfuncout;
    CData/*0:0*/ __Vtask_try_set__27__Vfuncout;
    __Vtask_try_set__27__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__28__Vfuncout;
    __Vfunc_uvm_report_enabled__28__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__28__verbosity;
    __Vfunc_uvm_report_enabled__28__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__28__severity;
    __Vfunc_uvm_report_enabled__28__severity = 0;
    std::string __Vfunc_uvm_report_enabled__28__id;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__29__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__30__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__31__Vfuncout;
    __Vtask_uvm_report_enabled__31__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__32__id;
    std::string __Vtask_uvm_report_warning__32__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__32__verbosity;
    __Vtask_uvm_report_warning__32__verbosity = 0;
    std::string __Vtask_uvm_report_warning__32__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__32__line;
    __Vtask_uvm_report_warning__32__line = 0;
    std::string __Vtask_uvm_report_warning__32__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__32__report_enabled_checked;
    __Vtask_uvm_report_warning__32__report_enabled_checked = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__33__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__34__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    {
        if ((""s == filename)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__19__id = "UVM/TXT_DB/EMPTY_NAME"s;
                            __Vfunc_uvm_report_enabled__19__severity = 1U;
                            __Vfunc_uvm_report_enabled__19__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__20__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__20__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__21__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__21__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__19__verbosity, (IData)(__Vfunc_uvm_report_enabled__19__severity), __Vfunc_uvm_report_enabled__19__id, __Vtask_uvm_report_enabled__22__Vfuncout);
                            __Vfunc_uvm_report_enabled__19__Vfuncout 
                                = __Vtask_uvm_report_enabled__22__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__19__Vfuncout))) {
                __Vtask_uvm_report_warning__23__report_enabled_checked = 1U;
                __Vtask_uvm_report_warning__23__context_name = ""s;
                __Vtask_uvm_report_warning__23__line = 0x000000bfU;
                __Vtask_uvm_report_warning__23__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_text_tr_database.svh"s;
                __Vtask_uvm_report_warning__23__verbosity = 0U;
                __Vtask_uvm_report_warning__23__message = "Ignoring attempt to set file name to ''!"s;
                __Vtask_uvm_report_warning__23__id = "UVM/TXT_DB/EMPTY_NAME"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__24__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__24__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__25__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__25__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__23__id, __Vtask_uvm_report_warning__23__message, __Vtask_uvm_report_warning__23__verbosity, __Vtask_uvm_report_warning__23__filename, __Vtask_uvm_report_warning__23__line, __Vtask_uvm_report_warning__23__context_name, (IData)(__Vtask_uvm_report_warning__23__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        if ((1U & (~ ([&]() {
                            VL_NULL_CHECK(this->__PVT__m_filename_dap, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_text_tr_database.svh", 195)
                      ->__VnoInFunc_try_set(vlSymsp, filename, __Vtask_try_set__27__Vfuncout);
                        }(), (IData)(__Vtask_try_set__27__Vfuncout))))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__28__id = "UVM/TXT_DB/SET_AFTER_OPEN"s;
                            __Vfunc_uvm_report_enabled__28__severity = 1U;
                            __Vfunc_uvm_report_enabled__28__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__29__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__29__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__30__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__30__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__28__verbosity, (IData)(__Vfunc_uvm_report_enabled__28__severity), __Vfunc_uvm_report_enabled__28__id, __Vtask_uvm_report_enabled__31__Vfuncout);
                            __Vfunc_uvm_report_enabled__28__Vfuncout 
                                = __Vtask_uvm_report_enabled__31__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__28__Vfuncout))) {
                __Vtask_uvm_report_warning__32__report_enabled_checked = 1U;
                __Vtask_uvm_report_warning__32__context_name = ""s;
                __Vtask_uvm_report_warning__32__line = 0x000000c5U;
                __Vtask_uvm_report_warning__32__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_text_tr_database.svh"s;
                __Vtask_uvm_report_warning__32__verbosity = 0U;
                __Vtask_uvm_report_warning__32__message = "Ignoring attempt to change file name after opening the db!"s;
                __Vtask_uvm_report_warning__32__id = "UVM/TXT_DB/SET_AFTER_OPEN"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__33__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__33__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__34__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__34__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__32__id, __Vtask_uvm_report_warning__32__message, __Vtask_uvm_report_warning__32__verbosity, __Vtask_uvm_report_warning__32__filename, __Vtask_uvm_report_warning__32__line, __Vtask_uvm_report_warning__32__context_name, (IData)(__Vtask_uvm_report_warning__32__report_enabled_checked));
            }
        }
        __Vlabel0: ;
    }
}

void Vdma_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__37__Vfuncout;
    __Vfunc___VBasicRand__37__Vfuncout = 0;
    // Body
    Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__37__Vfuncout);
            }(), __Vfunc___VBasicRand__37__Vfuncout));
}

void Vdma_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc___VBasicRand(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vdma_uvm_pkg__03a__03auvm_text_tr_database::_ctor_var_reset(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_text_tr_database::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_file = 0;
}

Vdma_uvm_pkg__03a__03auvm_text_tr_database::~Vdma_uvm_pkg__03a__03auvm_text_tr_database() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_text_tr_database::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_text_tr_database>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_text_tr_database::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vdma_uvm_pkg__03a__03auvm_text_tr_database::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_text_tr_database::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vdma_uvm_pkg__03a__03auvm_text_tr_database::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_text_tr_database::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_filename_dap:" + VL_TO_STRING(__PVT__m_filename_dap);
    out += ", m_file:" + VL_TO_STRING(__PVT__m_file);
    out += ", "+ Vdma_uvm_pkg__03a__03auvm_tr_database::to_string_middle();
    return (out);
}
