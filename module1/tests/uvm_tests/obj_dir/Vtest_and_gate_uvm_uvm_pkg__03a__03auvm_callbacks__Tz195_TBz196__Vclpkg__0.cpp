// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_and_gate_uvm.h for the primary calling header

#include "Vtest_and_gate_uvm__pch.h"

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196__Vclpkg::__VnoInFunc_get(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196__Vclpkg::__VnoInFunc_get\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz195> __Vtask_m_initialize__0__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typeid__Tz48> __Vfunc_get__1__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typeid__Tz196> __Vfunc_get__2__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typeid__Tz195> __Vfunc_get__3__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195> __Vfunc_get__5__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__6__Vfuncout;
    __Vfunc_uvm_report_enabled__6__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__6__verbosity;
    __Vfunc_uvm_report_enabled__6__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__6__severity;
    __Vfunc_uvm_report_enabled__6__severity = 0;
    std::string __Vfunc_uvm_report_enabled__6__id;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__7__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__8__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__9__Vfuncout;
    __Vtask_uvm_report_enabled__9__Vfuncout = 0;
    // Body
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typeid_base> unnamedblk1__DOT__cb_base_type;
    if ((VlNull{} == this->__PVT__m_inst)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz195__Vclpkg.__VnoInFunc_m_initialize(vlProcess, vlSymsp, __Vtask_m_initialize__0__Vfuncout);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_typeid__Tz48__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__1__Vfuncout);
        unnamedblk1__DOT__cb_base_type = __Vfunc_get__1__Vfuncout;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_typeid__Tz196__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__2__Vfuncout);
        this->__PVT__m_cb_typeid = __Vfunc_get__2__Vfuncout;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_typeid__Tz195__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__3__Vfuncout);
        this->__PVT__m_typeid = __Vfunc_get__3__Vfuncout;
        this->__PVT__m_inst = VL_NEW(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196, vlProcess, vlSymsp);
        if (VL_UNLIKELY(((unnamedblk1__DOT__cb_base_type 
                          == this->__PVT__m_cb_typeid)))) {
            VL_WRITEF_NX("[%0t] %%Error: uvm_callback.svh:528: Assertion failed in %Nuvm_pkg.uvm_callbacks__Tz195_TBz196.get.unnamedblk1: '$cast' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 528, "");
            vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz195__Vclpkg.__PVT__m_t_inst 
                = this->__PVT__m_base_inst;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_typeid_base__Vclpkg.__PVT__typeid_map.at(this->__PVT__m_typeid) 
                = this->__PVT__m_inst;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_typeid_base__Vclpkg.__PVT__type_map.at(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_b_inst) 
                = this->__PVT__m_typeid;
        } else {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz195__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__5__Vfuncout);
            this->__PVT__m_base_inst = __Vfunc_get__5__Vfuncout;
            VL_NULL_CHECK(this->__PVT__m_base_inst, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 536)->__PVT__m_this_type.push_back(this->__PVT__m_inst);
        }
        if ((VlNull{} == this->__PVT__m_inst)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__6__id = "CB/INTERNAL"s;
                            __Vfunc_uvm_report_enabled__6__severity = 3U;
                            __Vfunc_uvm_report_enabled__6__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__7__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__7__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__8__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__8__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__6__verbosity, (IData)(__Vfunc_uvm_report_enabled__6__severity), __Vfunc_uvm_report_enabled__6__id, __Vtask_uvm_report_enabled__9__Vfuncout);
                            __Vfunc_uvm_report_enabled__6__Vfuncout 
                                = __Vtask_uvm_report_enabled__9__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__6__Vfuncout))) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "CB/INTERNAL"s, "get(): m_inst is null"s, 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh"s, 0x0000021cU, ""s, 1U);
            }
        }
    }
    get__Vfuncrtn = this->__PVT__m_inst;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196__Vclpkg::__VnoInFunc_m_register_pair(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string tname, std::string cbname, CData/*0:0*/ &m_register_pair__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196__Vclpkg::__VnoInFunc_m_register_pair\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196> __Vfunc_get__11__Vfuncout;
    // Body
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196> inst;
    this->__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__11__Vfuncout);
    inst = __Vfunc_get__11__Vfuncout;
    this->__PVT__m_typename = tname;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz195__Vclpkg.__PVT__m_typename 
        = tname;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_typeid_base__Vclpkg.__PVT__typename 
        = tname;
    this->__PVT__m_cb_typename = cbname;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_typeid_base__Vclpkg.__PVT__typename 
        = cbname;
    VL_NULL_CHECK(inst, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 562)->__PVT__m_registered = 1U;
    m_register_pair__Vfuncrtn = 1U;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196__Vclpkg::__VnoInFunc_add(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_vreg_field> obj, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callback> cb, IData/*31:0*/ ordering) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196__Vclpkg::__VnoInFunc_add\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196> __Vtask_get__12__Vfuncout;
    std::string __Vtask_get_full_name__13__Vfuncout;
    std::string __Vtask_get_type_name__14__Vfuncout;
    std::string __Vtask_uvm_report_error__15__id;
    std::string __Vtask_uvm_report_error__15__message;
    IData/*31:0*/ __Vtask_uvm_report_error__15__verbosity;
    __Vtask_uvm_report_error__15__verbosity = 0;
    std::string __Vtask_uvm_report_error__15__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__15__line;
    __Vtask_uvm_report_error__15__line = 0;
    std::string __Vtask_uvm_report_error__15__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__15__report_enabled_checked;
    __Vtask_uvm_report_error__15__report_enabled_checked = 0;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__16__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__17__Vfuncout;
    CData/*0:0*/ __Vtask_check_registration__19__Vfuncout;
    __Vtask_check_registration__19__Vfuncout = 0;
    std::string __Vtask_get_full_name__20__Vfuncout;
    std::string __Vtask_get_type_name__21__Vfuncout;
    std::string __Vtask_uvm_report_warning__22__id;
    std::string __Vtask_uvm_report_warning__22__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__22__verbosity;
    __Vtask_uvm_report_warning__22__verbosity = 0;
    std::string __Vtask_uvm_report_warning__22__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__22__line;
    __Vtask_uvm_report_warning__22__line = 0;
    std::string __Vtask_uvm_report_warning__22__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__22__report_enabled_checked;
    __Vtask_uvm_report_warning__22__report_enabled_checked = 0;
    std::string __Vtask_get_name__23__Vfuncout;
    std::string __Vtask_get_type_name__24__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__25__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__26__Vfuncout;
    IData/*31:0*/ __Vfunc_m_cb_find__28__Vfuncout;
    __Vfunc_m_cb_find__28__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__29__id;
    std::string __Vtask_uvm_report_warning__29__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__29__verbosity;
    __Vtask_uvm_report_warning__29__verbosity = 0;
    std::string __Vtask_uvm_report_warning__29__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__29__line;
    __Vtask_uvm_report_warning__29__line = 0;
    std::string __Vtask_uvm_report_warning__29__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__29__report_enabled_checked;
    __Vtask_uvm_report_warning__29__report_enabled_checked = 0;
    std::string __Vtask_get_name__30__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__31__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__32__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_queue__Tz48> __Vtask_get__35__Vfuncout;
    IData/*31:0*/ __Vtask_size__38__Vfuncout;
    __Vtask_size__38__Vfuncout = 0;
    IData/*31:0*/ __Vtask_size__39__Vfuncout;
    __Vtask_size__39__Vfuncout = 0;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callback> __Vtask_get__41__Vfuncout;
    IData/*31:0*/ __Vfunc_m_cb_find__42__Vfuncout;
    __Vfunc_m_cb_find__42__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__43__id;
    std::string __Vtask_uvm_report_warning__43__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__43__verbosity;
    __Vtask_uvm_report_warning__43__verbosity = 0;
    std::string __Vtask_uvm_report_warning__43__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__43__line;
    __Vtask_uvm_report_warning__43__line = 0;
    std::string __Vtask_uvm_report_warning__43__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__43__report_enabled_checked;
    __Vtask_uvm_report_warning__43__report_enabled_checked = 0;
    std::string __Vtask_get_name__44__Vfuncout;
    std::string __Vtask_get_full_name__45__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__46__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__47__Vfuncout;
    IData/*31:0*/ __Vtask_m_cb_find_name__49__Vfuncout;
    __Vtask_m_cb_find_name__49__Vfuncout = 0;
    std::string __Vtask_get_name__50__Vfuncout;
    std::string __Vtask_get_full_name__51__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_object> unnamedblk2__DOT__o;
    IData/*31:0*/ unnamedblk2__DOT__unnamedblk5__DOT__i;
    unnamedblk2__DOT__unnamedblk5__DOT__i = 0;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_queue__Tz48> q;
    std::string nm;
    std::string tnm;
    {
        this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__12__Vfuncout);
        if ((VlNull{} == cb)) {
            nm = ((VlNull{} == obj) ? "(*)"s : ([&]() {
                        VL_NULL_CHECK(obj, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 608)
                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__13__Vfuncout);
                    }(), __Vtask_get_full_name__13__Vfuncout));
            tnm = ((""s != vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz195__Vclpkg.__PVT__m_typename)
                    ? vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz195__Vclpkg.__PVT__m_typename
                    : ((VlNull{} != obj) ? ([&]() {
                            VL_NULL_CHECK(obj, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 613)
                                            ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__14__Vfuncout);
                        }(), __Vtask_get_type_name__14__Vfuncout)
                        : "uvm_object"s));
            __Vtask_uvm_report_error__15__report_enabled_checked = 0U;
            __Vtask_uvm_report_error__15__context_name = ""s;
            __Vtask_uvm_report_error__15__line = 0U;
            __Vtask_uvm_report_error__15__filename = ""s;
            __Vtask_uvm_report_error__15__verbosity = 0U;
            __Vtask_uvm_report_error__15__message = 
                VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Null callback object cannot be registered with object "s, nm), " ("s), tnm), ")"s));
            __Vtask_uvm_report_error__15__id = "CBUNREG"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__16__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__16__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__17__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__17__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__15__id, __Vtask_uvm_report_error__15__message, __Vtask_uvm_report_error__15__verbosity, __Vtask_uvm_report_error__15__filename, __Vtask_uvm_report_error__15__line, __Vtask_uvm_report_error__15__context_name, (IData)(__Vtask_uvm_report_error__15__report_enabled_checked));
            goto __Vlabel0;
        }
        if ((1U & (~ ([&]() {
                            VL_NULL_CHECK(this->__PVT__m_base_inst, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 623)
                      ->__VnoInFunc_check_registration(vlSymsp, obj, cb, __Vtask_check_registration__19__Vfuncout);
                        }(), (IData)(__Vtask_check_registration__19__Vfuncout))))) {
            nm = ((VlNull{} == obj) ? "(*)"s : ([&]() {
                        VL_NULL_CHECK(obj, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 628)
                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__20__Vfuncout);
                    }(), __Vtask_get_full_name__20__Vfuncout));
            tnm = ((""s != vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz195__Vclpkg.__PVT__m_typename)
                    ? vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz195__Vclpkg.__PVT__m_typename
                    : ((VlNull{} != obj) ? ([&]() {
                            VL_NULL_CHECK(obj, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 633)
                                            ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__21__Vfuncout);
                        }(), __Vtask_get_type_name__21__Vfuncout)
                        : "uvm_object"s));
            __Vtask_uvm_report_warning__22__report_enabled_checked = 0U;
            __Vtask_uvm_report_warning__22__context_name = ""s;
            __Vtask_uvm_report_warning__22__line = 0U;
            __Vtask_uvm_report_warning__22__filename = ""s;
            __Vtask_uvm_report_warning__22__verbosity = 0U;
            __Vtask_uvm_report_warning__22__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Callback "s, 
                                                                                ([&]() {
                                                    VL_NULL_CHECK(cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 638)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__23__Vfuncout);
                                                }(), __Vtask_get_name__23__Vfuncout)), " cannot be registered with object "s), nm), " because callback type "s), 
                                                                                ([&]() {
                                    VL_NULL_CHECK(cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 639)
                                                                                ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__24__Vfuncout);
                                }(), __Vtask_get_type_name__24__Vfuncout)), " is not registered with object type "s), tnm));
            __Vtask_uvm_report_warning__22__id = "CBUNREG"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__25__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__25__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__26__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__26__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__22__id, __Vtask_uvm_report_warning__22__message, __Vtask_uvm_report_warning__22__verbosity, __Vtask_uvm_report_warning__22__filename, __Vtask_uvm_report_warning__22__line, __Vtask_uvm_report_warning__22__context_name, (IData)(__Vtask_uvm_report_warning__22__report_enabled_checked));
        }
        if ((VlNull{} == obj)) {
            if ((0xffffffffU != ([&]() {
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz195__Vclpkg.__VnoInFunc_m_cb_find(vlProcess, vlSymsp, vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz195__Vclpkg.__PVT__m_tw_cb_q, cb, __Vfunc_m_cb_find__28__Vfuncout);
                        }(), __Vfunc_m_cb_find__28__Vfuncout))) {
                tnm = ((""s != vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz195__Vclpkg.__PVT__m_typename)
                        ? vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz195__Vclpkg.__PVT__m_typename
                        : "uvm_object"s);
                __Vtask_uvm_report_warning__29__report_enabled_checked = 0U;
                __Vtask_uvm_report_warning__29__context_name = ""s;
                __Vtask_uvm_report_warning__29__line = 0U;
                __Vtask_uvm_report_warning__29__filename = ""s;
                __Vtask_uvm_report_warning__29__verbosity = 0U;
                __Vtask_uvm_report_warning__29__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN("Callback object "s, 
                                                                                ([&]() {
                                        VL_NULL_CHECK(cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 652)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__30__Vfuncout);
                                    }(), __Vtask_get_name__30__Vfuncout)), " is already registered with type "s), tnm));
                __Vtask_uvm_report_warning__29__id = "CBPREG"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__31__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__31__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__32__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__32__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__29__id, __Vtask_uvm_report_warning__29__message, __Vtask_uvm_report_warning__29__verbosity, __Vtask_uvm_report_warning__29__filename, __Vtask_uvm_report_warning__29__line, __Vtask_uvm_report_warning__29__context_name, (IData)(__Vtask_uvm_report_warning__29__report_enabled_checked));
            } else {
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz195__Vclpkg.__PVT__m_t_inst, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 658)->__VnoInFunc_m_add_tw_cbs(vlProcess, vlSymsp, cb, ordering);
            }
        } else {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 667)->__VnoInFunc_get(vlSymsp, obj, __Vtask_get__35__Vfuncout);
            q = __Vtask_get__35__Vfuncout;
            if ((VlNull{} == q)) {
                q = VL_NEW(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_queue__Tz48, vlProcess, vlSymsp, ""s);
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 671)->__VnoInFunc_add(vlSymsp, obj, q);
            }
            if ((0U == ([&]() {
                            VL_NULL_CHECK(q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 674)
                        ->__VnoInFunc_size(vlSymsp, __Vtask_size__38__Vfuncout);
                        }(), __Vtask_size__38__Vfuncout))) {
                unnamedblk2__DOT__unnamedblk5__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk2__DOT__unnamedblk5__DOT__i, 
                                  ([&]() {
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz195__Vclpkg.__PVT__m_tw_cb_q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 687)
                                   ->__VnoInFunc_size(vlSymsp, __Vtask_size__39__Vfuncout);
                            }(), __Vtask_size__39__Vfuncout))) {
                    VL_NULL_CHECK(q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 688)->__VnoInFunc_push_back(vlSymsp, 
                                                                                ([&]() {
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz195__Vclpkg.__PVT__m_tw_cb_q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 688)
                                                                                ->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk2__DOT__unnamedblk5__DOT__i, __Vtask_get__41__Vfuncout);
                            }(), __Vtask_get__41__Vfuncout));
                    unnamedblk2__DOT__unnamedblk5__DOT__i 
                        = ((IData)(1U) + unnamedblk2__DOT__unnamedblk5__DOT__i);
                }
            }
            if ((0xffffffffU != ([&]() {
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz195__Vclpkg.__VnoInFunc_m_cb_find(vlProcess, vlSymsp, q, cb, __Vfunc_m_cb_find__42__Vfuncout);
                        }(), __Vfunc_m_cb_find__42__Vfuncout))) {
                __Vtask_uvm_report_warning__43__report_enabled_checked = 0U;
                __Vtask_uvm_report_warning__43__context_name = ""s;
                __Vtask_uvm_report_warning__43__line = 0U;
                __Vtask_uvm_report_warning__43__filename = ""s;
                __Vtask_uvm_report_warning__43__verbosity = 0U;
                __Vtask_uvm_report_warning__43__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Callback object "s, 
                                                                                ([&]() {
                                            VL_NULL_CHECK(cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 693)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__44__Vfuncout);
                                        }(), __Vtask_get_name__44__Vfuncout)), " is already registered"s), " with object "s), 
                                                        ([&]() {
                                VL_NULL_CHECK(obj, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 694)
                                                         ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__45__Vfuncout);
                            }(), __Vtask_get_full_name__45__Vfuncout)));
                __Vtask_uvm_report_warning__43__id = "CBPREG"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__46__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__46__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__47__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__47__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__43__id, __Vtask_uvm_report_warning__43__message, __Vtask_uvm_report_warning__43__verbosity, __Vtask_uvm_report_warning__43__filename, __Vtask_uvm_report_warning__43__line, __Vtask_uvm_report_warning__43__context_name, (IData)(__Vtask_uvm_report_warning__43__report_enabled_checked));
            } else {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz195__Vclpkg.__VnoInFunc_m_cb_find_name(vlProcess, vlSymsp, q, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                                VL_NULL_CHECK(cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 697)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__50__Vfuncout);
                            }(), __Vtask_get_name__50__Vfuncout)), 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("object instance "s, 
                                                                                ([&]() {
                                    VL_NULL_CHECK(obj, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 697)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__51__Vfuncout);
                                }(), __Vtask_get_full_name__51__Vfuncout))), __Vtask_m_cb_find_name__49__Vfuncout);
                if ((0U == ordering)) {
                    VL_NULL_CHECK(q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 699)->__VnoInFunc_push_back(vlSymsp, cb);
                } else {
                    VL_NULL_CHECK(q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 701)->__VnoInFunc_push_front(vlSymsp, cb);
                }
            }
        }
        __Vlabel0: ;
    }
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196__Vclpkg::__VnoInFunc_add_by_name(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callback> cb, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_component> root, IData/*31:0*/ ordering) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196__Vclpkg::__VnoInFunc_add_by_name\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196> __Vtask_get__54__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__55__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__56__Vfuncout;
    std::string __Vtask_uvm_report_error__57__id;
    std::string __Vtask_uvm_report_error__57__message;
    IData/*31:0*/ __Vtask_uvm_report_error__57__verbosity;
    __Vtask_uvm_report_error__57__verbosity = 0;
    std::string __Vtask_uvm_report_error__57__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__57__line;
    __Vtask_uvm_report_error__57__line = 0;
    std::string __Vtask_uvm_report_error__57__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__57__report_enabled_checked;
    __Vtask_uvm_report_error__57__report_enabled_checked = 0;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__58__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__59__Vfuncout;
    std::string __Vtask_uvm_report_warning__62__id;
    std::string __Vtask_uvm_report_warning__62__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__62__verbosity;
    __Vtask_uvm_report_warning__62__verbosity = 0;
    std::string __Vtask_uvm_report_warning__62__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__62__line;
    __Vtask_uvm_report_warning__62__line = 0;
    std::string __Vtask_uvm_report_warning__62__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__62__report_enabled_checked;
    __Vtask_uvm_report_warning__62__report_enabled_checked = 0;
    std::string __Vtask_get_name__63__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__64__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__65__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ unnamedblk6__DOT__i;
    unnamedblk6__DOT__i = 0;
    VlQueue<VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_component>> cq;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> top;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> cs;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_vreg_field> t;
    {
        this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__54__Vfuncout);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__55__Vfuncout);
        cs = __Vfunc_get__55__Vfuncout;
        VL_NULL_CHECK(cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 725)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__56__Vfuncout);
        top = __Vtask_get_root__56__Vfuncout;
        if ((VlNull{} == cb)) {
            __Vtask_uvm_report_error__57__report_enabled_checked = 0U;
            __Vtask_uvm_report_error__57__context_name = ""s;
            __Vtask_uvm_report_error__57__line = 0U;
            __Vtask_uvm_report_error__57__filename = ""s;
            __Vtask_uvm_report_error__57__verbosity = 0U;
            __Vtask_uvm_report_error__57__message = 
                VL_CVT_PACK_STR_NN(VL_CONCATN_NNN("Null callback object cannot be registered with object(s) "s, name));
            __Vtask_uvm_report_error__57__id = "CBUNREG"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__58__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__58__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__59__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__59__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__57__id, __Vtask_uvm_report_error__57__message, __Vtask_uvm_report_error__57__verbosity, __Vtask_uvm_report_error__57__filename, __Vtask_uvm_report_error__57__line, __Vtask_uvm_report_error__57__context_name, (IData)(__Vtask_uvm_report_error__57__report_enabled_checked));
            goto __Vlabel0;
        }
        VL_NULL_CHECK(top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 734)->__VnoInFunc_find_all(vlProcess, vlSymsp, name, cq, root);
        if ((0U == cq.size())) {
            __Vtask_uvm_report_warning__62__report_enabled_checked = 0U;
            __Vtask_uvm_report_warning__62__context_name = ""s;
            __Vtask_uvm_report_warning__62__line = 0U;
            __Vtask_uvm_report_warning__62__filename = ""s;
            __Vtask_uvm_report_warning__62__verbosity = 0U;
            __Vtask_uvm_report_warning__62__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("add_by_name failed to find any components matching the name "s, name), ", callback "s), 
                                                                   ([&]() {
                                VL_NULL_CHECK(cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 737)
                                                                    ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__63__Vfuncout);
                            }(), __Vtask_get_name__63__Vfuncout)), " will not be registered."s));
            __Vtask_uvm_report_warning__62__id = "CBNOMTC"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__64__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__64__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__65__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__65__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__62__id, __Vtask_uvm_report_warning__62__message, __Vtask_uvm_report_warning__62__verbosity, __Vtask_uvm_report_warning__62__filename, __Vtask_uvm_report_warning__62__line, __Vtask_uvm_report_warning__62__context_name, (IData)(__Vtask_uvm_report_warning__62__report_enabled_checked));
        }
        unnamedblk6__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk6__DOT__i, cq.size())) {
            unnamedblk6__DOT__i = ((IData)(1U) + unnamedblk6__DOT__i);
        }
        __Vlabel0: ;
    }
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196__Vclpkg::__VnoInFunc_delete(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_vreg_field> obj, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callback> cb) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196__Vclpkg::__VnoInFunc_delete\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196> __Vtask_get__67__Vfuncout;
    CData/*0:0*/ __Vtask_m_delete_tw_cbs__68__Vfuncout;
    __Vtask_m_delete_tw_cbs__68__Vfuncout = 0;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_queue__Tz48> __Vtask_get__69__Vfuncout;
    IData/*31:0*/ __Vfunc_m_cb_find__70__Vfuncout;
    __Vfunc_m_cb_find__70__Vfuncout = 0;
    std::string __Vtask_get_full_name__72__Vfuncout;
    std::string __Vtask_uvm_report_warning__73__id;
    std::string __Vtask_uvm_report_warning__73__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__73__verbosity;
    __Vtask_uvm_report_warning__73__verbosity = 0;
    std::string __Vtask_uvm_report_warning__73__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__73__line;
    __Vtask_uvm_report_warning__73__line = 0;
    std::string __Vtask_uvm_report_warning__73__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__73__report_enabled_checked;
    __Vtask_uvm_report_warning__73__report_enabled_checked = 0;
    std::string __Vtask_get_name__74__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__75__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__76__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string unnamedblk7__DOT__nm;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> b_obj;
    b_obj = obj;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_queue__Tz48> q;
    CData/*0:0*/ found;
    found = 0;
    IData/*31:0*/ pos;
    pos = 0;
    this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__67__Vfuncout);
    if ((VlNull{} == obj)) {
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz195__Vclpkg.__PVT__m_t_inst, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 771)->__VnoInFunc_m_delete_tw_cbs(vlProcess, vlSymsp, cb, __Vtask_m_delete_tw_cbs__68__Vfuncout);
        found = __Vtask_m_delete_tw_cbs__68__Vfuncout;
    } else {
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 776)->__VnoInFunc_get(vlSymsp, b_obj, __Vtask_get__69__Vfuncout);
        q = __Vtask_get__69__Vfuncout;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz195__Vclpkg.__VnoInFunc_m_cb_find(vlProcess, vlSymsp, q, cb, __Vfunc_m_cb_find__70__Vfuncout);
        pos = __Vfunc_m_cb_find__70__Vfuncout;
        if ((0xffffffffU != pos)) {
            VL_NULL_CHECK(q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 779)->__VnoInFunc_delete(vlProcess, vlSymsp, pos);
            found = 1U;
        }
    }
    if ((1U & (~ (IData)(found)))) {
        unnamedblk7__DOT__nm = ((VlNull{} == obj) ? "(*)"s
                                 : ([&]() {
                    VL_NULL_CHECK(obj, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 785)
                                    ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__72__Vfuncout);
                }(), __Vtask_get_full_name__72__Vfuncout));
        __Vtask_uvm_report_warning__73__report_enabled_checked = 0U;
        __Vtask_uvm_report_warning__73__context_name = ""s;
        __Vtask_uvm_report_warning__73__line = 0U;
        __Vtask_uvm_report_warning__73__filename = ""s;
        __Vtask_uvm_report_warning__73__verbosity = 0U;
        __Vtask_uvm_report_warning__73__message = VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Callback "s, 
                                                                                ([&]() {
                                    VL_NULL_CHECK(cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 786)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__74__Vfuncout);
                                }(), __Vtask_get_name__74__Vfuncout)), " cannot be removed from object "s), unnamedblk7__DOT__nm), " because it is not currently registered to that object."s));
        __Vtask_uvm_report_warning__73__id = "CBUNREG"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__75__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__75__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__76__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__76__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__73__id, __Vtask_uvm_report_warning__73__message, __Vtask_uvm_report_warning__73__verbosity, __Vtask_uvm_report_warning__73__filename, __Vtask_uvm_report_warning__73__line, __Vtask_uvm_report_warning__73__context_name, (IData)(__Vtask_uvm_report_warning__73__report_enabled_checked));
    }
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196__Vclpkg::__VnoInFunc_delete_by_name(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callback> cb, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_component> root) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196__Vclpkg::__VnoInFunc_delete_by_name\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196> __Vtask_get__78__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__79__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__80__Vfuncout;
    std::string __Vtask_uvm_report_warning__82__id;
    std::string __Vtask_uvm_report_warning__82__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__82__verbosity;
    __Vtask_uvm_report_warning__82__verbosity = 0;
    std::string __Vtask_uvm_report_warning__82__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__82__line;
    __Vtask_uvm_report_warning__82__line = 0;
    std::string __Vtask_uvm_report_warning__82__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__82__report_enabled_checked;
    __Vtask_uvm_report_warning__82__report_enabled_checked = 0;
    std::string __Vtask_get_name__83__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__84__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__85__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ unnamedblk8__DOT__i;
    unnamedblk8__DOT__i = 0;
    VlQueue<VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_component>> cq;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> top;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_vreg_field> t;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> cs;
    this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__78__Vfuncout);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__79__Vfuncout);
    cs = __Vfunc_get__79__Vfuncout;
    VL_NULL_CHECK(cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 809)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__80__Vfuncout);
    top = __Vtask_get_root__80__Vfuncout;
    VL_NULL_CHECK(top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 813)->__VnoInFunc_find_all(vlProcess, vlSymsp, name, cq, root);
    if ((0U == cq.size())) {
        __Vtask_uvm_report_warning__82__report_enabled_checked = 0U;
        __Vtask_uvm_report_warning__82__context_name = ""s;
        __Vtask_uvm_report_warning__82__line = 0U;
        __Vtask_uvm_report_warning__82__filename = ""s;
        __Vtask_uvm_report_warning__82__verbosity = 0U;
        __Vtask_uvm_report_warning__82__message = VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("delete_by_name failed to find any components matching the name "s, name), ", callback "s), 
                                                                                ([&]() {
                            VL_NULL_CHECK(cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 816)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__83__Vfuncout);
                        }(), __Vtask_get_name__83__Vfuncout)), " will not be unregistered."s));
        __Vtask_uvm_report_warning__82__id = "CBNOMTC"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__84__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__84__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__85__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__85__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__82__id, __Vtask_uvm_report_warning__82__message, __Vtask_uvm_report_warning__82__verbosity, __Vtask_uvm_report_warning__82__filename, __Vtask_uvm_report_warning__82__line, __Vtask_uvm_report_warning__82__context_name, (IData)(__Vtask_uvm_report_warning__82__report_enabled_checked));
    }
    unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk8__DOT__i, cq.size())) {
        unnamedblk8__DOT__i = ((IData)(1U) + unnamedblk8__DOT__i);
    }
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196__Vclpkg::__VnoInFunc_m_get_q(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_queue__Tz48> &q, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_vreg_field> obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196__Vclpkg::__VnoInFunc_m_get_q\n"); );
    // Locals
    IData/*31:0*/ __Vtask_exists__87__Vfuncout;
    __Vtask_exists__87__Vfuncout = 0;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_queue__Tz48> __Vtask_get__88__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_queue__Tz48> __Vtask_m_get_tw_cb_q__91__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((0U != ([&]() {
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 834)
                ->__VnoInFunc_exists(vlSymsp, obj, __Vtask_exists__87__Vfuncout);
                }(), __Vtask_exists__87__Vfuncout))) {
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 838)->__VnoInFunc_get(vlSymsp, obj, __Vtask_get__88__Vfuncout);
        q = __Vtask_get__88__Vfuncout;
        if ((VlNull{} == q)) {
            q = VL_NEW(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_queue__Tz48, vlProcess, vlSymsp, ""s);
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 841)->__VnoInFunc_add(vlSymsp, obj, q);
        }
    } else {
        q = ((VlNull{} == obj) ? vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz195__Vclpkg.__PVT__m_tw_cb_q
              : ([&]() {
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz195__Vclpkg.__PVT__m_t_inst, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 835)
                 ->__VnoInFunc_m_get_tw_cb_q(vlSymsp, obj, __Vtask_m_get_tw_cb_q__91__Vfuncout);
                }(), __Vtask_m_get_tw_cb_q__91__Vfuncout));
    }
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196__Vclpkg::__VnoInFunc_get_first(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_vreg_field> obj, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_vreg_field_cbs> &get_first__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196__Vclpkg::__VnoInFunc_get_first\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196> __Vtask_get__92__Vfuncout;
    IData/*31:0*/ __Vtask_size__94__Vfuncout;
    __Vtask_size__94__Vfuncout = 0;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callback> __Vtask_get__95__Vfuncout;
    CData/*0:0*/ __Vtask_callback_mode__96__Vfuncout;
    __Vtask_callback_mode__96__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_queue__Tz48> q;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_vreg_field_cbs> cb;
    {
        this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__92__Vfuncout);
        this->__VnoInFunc_m_get_q(vlSymsp, q, obj);
        itr = 0U;
        while (VL_LTS_III(32, itr, ([&]() {
                        VL_NULL_CHECK(q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 865)
                                    ->__VnoInFunc_size(vlSymsp, __Vtask_size__94__Vfuncout);
                    }(), __Vtask_size__94__Vfuncout))) {
            if ((VL_CAST_DYNAMIC(([&]() {
                                VL_NULL_CHECK(q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 866)
                                  ->__VnoInFunc_get(vlProcess, vlSymsp, itr, __Vtask_get__95__Vfuncout);
                            }(), __Vtask_get__95__Vfuncout), cb) 
                 && ([&]() {
                            VL_NULL_CHECK(cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 866)
                     ->__VnoInFunc_callback_mode(vlSymsp, 0xffffffffU, __Vtask_callback_mode__96__Vfuncout);
                        }(), (IData)(__Vtask_callback_mode__96__Vfuncout)))) {
                get_first__Vfuncrtn = cb;
                goto __Vlabel0;
            }
            itr = ((IData)(1U) + itr);
        }
        get_first__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196__Vclpkg::__VnoInFunc_get_last(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_vreg_field> obj, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_vreg_field_cbs> &get_last__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196__Vclpkg::__VnoInFunc_get_last\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196> __Vtask_get__97__Vfuncout;
    IData/*31:0*/ __Vtask_size__99__Vfuncout;
    __Vtask_size__99__Vfuncout = 0;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callback> __Vtask_get__100__Vfuncout;
    CData/*0:0*/ __Vtask_callback_mode__101__Vfuncout;
    __Vtask_callback_mode__101__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_queue__Tz48> q;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_vreg_field_cbs> cb;
    {
        this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__97__Vfuncout);
        this->__VnoInFunc_m_get_q(vlSymsp, q, obj);
        itr = (([&]() {
                    VL_NULL_CHECK(q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 889)
                ->__VnoInFunc_size(vlSymsp, __Vtask_size__99__Vfuncout);
                }(), __Vtask_size__99__Vfuncout) - (IData)(1U));
        while (VL_LTES_III(32, 0U, itr)) {
            if ((VL_CAST_DYNAMIC(([&]() {
                                VL_NULL_CHECK(q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 890)
                                  ->__VnoInFunc_get(vlProcess, vlSymsp, itr, __Vtask_get__100__Vfuncout);
                            }(), __Vtask_get__100__Vfuncout), cb) 
                 && ([&]() {
                            VL_NULL_CHECK(cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 890)
                     ->__VnoInFunc_callback_mode(vlSymsp, 0xffffffffU, __Vtask_callback_mode__101__Vfuncout);
                        }(), (IData)(__Vtask_callback_mode__101__Vfuncout)))) {
                get_last__Vfuncrtn = cb;
                goto __Vlabel0;
            }
            itr = (itr - (IData)(1U));
        }
        get_last__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196__Vclpkg::__VnoInFunc_get_next(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_vreg_field> obj, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_vreg_field_cbs> &get_next__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196__Vclpkg::__VnoInFunc_get_next\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196> __Vtask_get__102__Vfuncout;
    IData/*31:0*/ __Vtask_size__104__Vfuncout;
    __Vtask_size__104__Vfuncout = 0;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callback> __Vtask_get__105__Vfuncout;
    CData/*0:0*/ __Vtask_callback_mode__106__Vfuncout;
    __Vtask_callback_mode__106__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_queue__Tz48> q;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_vreg_field_cbs> cb;
    {
        this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__102__Vfuncout);
        this->__VnoInFunc_m_get_q(vlSymsp, q, obj);
        itr = ((IData)(1U) + itr);
        while (VL_LTS_III(32, itr, ([&]() {
                        VL_NULL_CHECK(q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 916)
                                    ->__VnoInFunc_size(vlSymsp, __Vtask_size__104__Vfuncout);
                    }(), __Vtask_size__104__Vfuncout))) {
            if ((VL_CAST_DYNAMIC(([&]() {
                                VL_NULL_CHECK(q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 917)
                                  ->__VnoInFunc_get(vlProcess, vlSymsp, itr, __Vtask_get__105__Vfuncout);
                            }(), __Vtask_get__105__Vfuncout), cb) 
                 && ([&]() {
                            VL_NULL_CHECK(cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 917)
                     ->__VnoInFunc_callback_mode(vlSymsp, 0xffffffffU, __Vtask_callback_mode__106__Vfuncout);
                        }(), (IData)(__Vtask_callback_mode__106__Vfuncout)))) {
                get_next__Vfuncrtn = cb;
                goto __Vlabel0;
            }
            itr = ((IData)(1U) + itr);
        }
        get_next__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196__Vclpkg::__VnoInFunc_get_prev(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_vreg_field> obj, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_vreg_field_cbs> &get_prev__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196__Vclpkg::__VnoInFunc_get_prev\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196> __Vtask_get__107__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callback> __Vtask_get__109__Vfuncout;
    CData/*0:0*/ __Vtask_callback_mode__110__Vfuncout;
    __Vtask_callback_mode__110__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_queue__Tz48> q;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_vreg_field_cbs> cb;
    {
        this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__107__Vfuncout);
        this->__VnoInFunc_m_get_q(vlSymsp, q, obj);
        itr = (itr - (IData)(1U));
        while (VL_LTES_III(32, 0U, itr)) {
            if ((VL_CAST_DYNAMIC(([&]() {
                                VL_NULL_CHECK(q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 944)
                                  ->__VnoInFunc_get(vlProcess, vlSymsp, itr, __Vtask_get__109__Vfuncout);
                            }(), __Vtask_get__109__Vfuncout), cb) 
                 && ([&]() {
                            VL_NULL_CHECK(cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 944)
                     ->__VnoInFunc_callback_mode(vlSymsp, 0xffffffffU, __Vtask_callback_mode__110__Vfuncout);
                        }(), (IData)(__Vtask_callback_mode__110__Vfuncout)))) {
                get_prev__Vfuncrtn = cb;
                goto __Vlabel0;
            }
            itr = (itr - (IData)(1U));
        }
        get_prev__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196__Vclpkg::__VnoInFunc_get_all(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_vreg_field_cbs>> &all_callbacks, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_vreg_field> obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196__Vclpkg::__VnoInFunc_get_all\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196> __Vtask_get__111__Vfuncout;
    IData/*31:0*/ __Vtask_exists__112__Vfuncout;
    __Vtask_exists__112__Vfuncout = 0;
    IData/*31:0*/ __Vtask_size__113__Vfuncout;
    __Vtask_size__113__Vfuncout = 0;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callback> __Vtask_get__114__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_queue__Tz48> __Vtask_get__115__Vfuncout;
    IData/*31:0*/ __Vtask_size__116__Vfuncout;
    __Vtask_size__116__Vfuncout = 0;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callback> __Vtask_get__117__Vfuncout;
    IData/*31:0*/ __Vtask_get_inst_id__118__Vfuncout;
    __Vtask_get_inst_id__118__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ unnamedblk9__DOT__qi;
    unnamedblk9__DOT__qi = 0;
    IData/*31:0*/ unnamedblk10__DOT__qi;
    unnamedblk10__DOT__qi = 0;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_queue__Tz48> q;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_vreg_field_cbs> cb;
    VlQueue<VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_vreg_field_cbs>> callbacks_to_append;
    VlQueue<VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_vreg_field_cbs>> unique_callbacks_to_append;
    this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__111__Vfuncout);
    if (((VlNull{} == obj) || (1U & (~ (0U != ([&]() {
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 974)
                                               ->__VnoInFunc_exists(vlSymsp, obj, __Vtask_exists__112__Vfuncout);
                            }(), __Vtask_exists__112__Vfuncout)))))) {
        unnamedblk9__DOT__qi = 0U;
        while (VL_LTS_III(32, unnamedblk9__DOT__qi, 
                          ([&]() {
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz195__Vclpkg.__PVT__m_tw_cb_q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 976)
                           ->__VnoInFunc_size(vlSymsp, __Vtask_size__113__Vfuncout);
                    }(), __Vtask_size__113__Vfuncout))) {
            if (VL_CAST_DYNAMIC(([&]() {
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz195__Vclpkg.__PVT__m_tw_cb_q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 977)
                                 ->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk9__DOT__qi, __Vtask_get__114__Vfuncout);
                        }(), __Vtask_get__114__Vfuncout), cb)) {
                callbacks_to_append.push_back(cb);
            }
            unnamedblk9__DOT__qi = ((IData)(1U) + unnamedblk9__DOT__qi);
        }
    } else {
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 983)->__VnoInFunc_get(vlSymsp, obj, __Vtask_get__115__Vfuncout);
        q = __Vtask_get__115__Vfuncout;
        unnamedblk10__DOT__qi = 0U;
        while (VL_LTS_III(32, unnamedblk10__DOT__qi, 
                          ([&]() {
                        VL_NULL_CHECK(q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 984)
                           ->__VnoInFunc_size(vlSymsp, __Vtask_size__116__Vfuncout);
                    }(), __Vtask_size__116__Vfuncout))) {
            if (VL_CAST_DYNAMIC(([&]() {
                            VL_NULL_CHECK(q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 985)
                                 ->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk10__DOT__qi, __Vtask_get__117__Vfuncout);
                        }(), __Vtask_get__117__Vfuncout), cb)) {
                callbacks_to_append.push_back(cb);
            }
            unnamedblk10__DOT__qi = ((IData)(1U) + unnamedblk10__DOT__qi);
        }
    }
    unique_callbacks_to_append = callbacks_to_append.unique(
                                                            [&](
                                                                IData/*31:0*/ cb___DOT__index, 
                                                                VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_vreg_field_cbs> cb_) -> 
                                                            IData/*31:0*/ {
            return (([&]() {
                        VL_NULL_CHECK(cb_, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 990)
                     ->__VnoInFunc_get_inst_id(vlSymsp, __Vtask_get_inst_id__118__Vfuncout);
                    }(), __Vtask_get_inst_id__118__Vfuncout));
        }
    );
    all_callbacks = VlQueue<VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_vreg_field_cbs>>::consCC(unique_callbacks_to_append, 
                                                                                all_callbacks);
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196__Vclpkg::__VnoInFunc_display(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_vreg_field> obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196__Vclpkg::__VnoInFunc_display\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196> __Vtask_get__119__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__119__Vfuncout);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz195__Vclpkg.__VnoInFunc_display(vlSymsp, obj);
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196::__VnoInFunc_m_is_registered(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_is_registered__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196::__VnoInFunc_m_is_registered\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_m_is_for_me__0__Vfuncout;
    __Vfunc_m_is_for_me__0__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_m_am_i_a__1__Vfuncout;
    __Vfunc_m_am_i_a__1__Vfuncout = 0;
    // Body
    if ((([&]() {
                    this->__VnoInFunc_m_is_for_me(vlSymsp, cb, __Vfunc_m_is_for_me__0__Vfuncout);
                }(), (IData)(__Vfunc_m_is_for_me__0__Vfuncout)) 
         && ([&]() {
                    this->__VnoInFunc_m_am_i_a(vlSymsp, obj, __Vfunc_m_am_i_a__1__Vfuncout);
                }(), (IData)(__Vfunc_m_am_i_a__1__Vfuncout)))) {
        m_is_registered__Vfuncrtn = this->__PVT__m_registered;
    }
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196::__VnoInFunc_m_is_for_me(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_is_for_me__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196::__VnoInFunc_m_is_for_me\n"); );
    // Body
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_vreg_field_cbs> this_cb;
    m_is_for_me__Vfuncrtn = (1U & VL_CAST_DYNAMIC(cb, this_cb));
}

Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196::Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp)
    : Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz195(vlProcess, vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196::__VnoInFunc_randomize(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__4__Vfuncout;
    __Vfunc___VBasicRand__4__Vfuncout = 0;
    // Body
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__4__Vfuncout);
            }(), __Vfunc___VBasicRand__4__Vfuncout));
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196::__VnoInFunc___Vsetup_constraints(Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196::__VnoInFunc___VBasicRand(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196::_ctor_var_reset(Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_registered = 0;
}

Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196::~Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks__Tz195_TBz196::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_registered:" + VL_TO_STRING(__PVT__m_registered);
    out += ", "+ Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz195::to_string_middle();
    return (out);
}
