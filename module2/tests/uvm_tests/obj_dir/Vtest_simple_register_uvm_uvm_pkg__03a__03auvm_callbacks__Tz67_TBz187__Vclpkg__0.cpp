// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_simple_register_uvm.h for the primary calling header

#include "Vtest_simple_register_uvm__pch.h"

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187__Vclpkg::__VnoInFunc_get(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187__Vclpkg::__VnoInFunc_get\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz67> __Vtask_m_initialize__0__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_typeid__Tz48> __Vfunc_get__1__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_typeid__Tz187> __Vfunc_get__2__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_typeid__Tz67> __Vfunc_get__3__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67> __Vfunc_get__5__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__6__Vfuncout;
    __Vfunc_uvm_report_enabled__6__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__6__verbosity;
    __Vfunc_uvm_report_enabled__6__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__6__severity;
    __Vfunc_uvm_report_enabled__6__severity = 0;
    std::string __Vfunc_uvm_report_enabled__6__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__7__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__8__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__9__Vfuncout;
    __Vtask_uvm_report_enabled__9__Vfuncout = 0;
    // Body
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_typeid_base> unnamedblk1__DOT__cb_base_type;
    if ((VlNull{} == this->__PVT__m_inst)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz67__Vclpkg.__VnoInFunc_m_initialize(vlProcess, vlSymsp, __Vtask_m_initialize__0__Vfuncout);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_typeid__Tz48__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__1__Vfuncout);
        unnamedblk1__DOT__cb_base_type = __Vfunc_get__1__Vfuncout;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_typeid__Tz187__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__2__Vfuncout);
        this->__PVT__m_cb_typeid = __Vfunc_get__2__Vfuncout;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_typeid__Tz67__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__3__Vfuncout);
        this->__PVT__m_typeid = __Vfunc_get__3__Vfuncout;
        this->__PVT__m_inst = VL_NEW(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187, vlProcess, vlSymsp);
        if (VL_UNLIKELY(((unnamedblk1__DOT__cb_base_type 
                          == this->__PVT__m_cb_typeid)))) {
            VL_WRITEF_NX("[%0t] %%Error: uvm_callback.svh:528: Assertion failed in %Nuvm_pkg.uvm_callbacks__Tz67_TBz187.get.unnamedblk1: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 528, "");
            vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz67__Vclpkg.__PVT__m_t_inst 
                = this->__PVT__m_base_inst;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_typeid_base__Vclpkg.__PVT__typeid_map.at(this->__PVT__m_typeid) 
                = this->__PVT__m_inst;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_typeid_base__Vclpkg.__PVT__type_map.at(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_b_inst) 
                = this->__PVT__m_typeid;
        } else {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz67__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__5__Vfuncout);
            this->__PVT__m_base_inst = __Vfunc_get__5__Vfuncout;
            VL_NULL_CHECK(this->__PVT__m_base_inst, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 536)->__PVT__m_this_type.push_back(this->__PVT__m_inst);
        }
        if ((VlNull{} == this->__PVT__m_inst)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__6__id = "CB/INTERNAL"s;
                            __Vfunc_uvm_report_enabled__6__severity = 3U;
                            __Vfunc_uvm_report_enabled__6__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__7__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__7__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__8__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__8__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__6__verbosity, (IData)(__Vfunc_uvm_report_enabled__6__severity), __Vfunc_uvm_report_enabled__6__id, __Vtask_uvm_report_enabled__9__Vfuncout);
                            __Vfunc_uvm_report_enabled__6__Vfuncout 
                                = __Vtask_uvm_report_enabled__9__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__6__Vfuncout))) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "CB/INTERNAL"s, "get(): m_inst is null"s, 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh"s, 0x0000021cU, ""s, 1U);
            }
        }
    }
    get__Vfuncrtn = this->__PVT__m_inst;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187__Vclpkg::__VnoInFunc_m_register_pair(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string tname, std::string cbname, CData/*0:0*/ &m_register_pair__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187__Vclpkg::__VnoInFunc_m_register_pair\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187> __Vfunc_get__11__Vfuncout;
    // Body
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187> inst;
    this->__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__11__Vfuncout);
    inst = __Vfunc_get__11__Vfuncout;
    this->__PVT__m_typename = tname;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz67__Vclpkg.__PVT__m_typename 
        = tname;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_typeid_base__Vclpkg.__PVT__typename 
        = tname;
    this->__PVT__m_cb_typename = cbname;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_typeid_base__Vclpkg.__PVT__typename 
        = cbname;
    VL_NULL_CHECK(inst, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 562)->__PVT__m_registered = 1U;
    m_register_pair__Vfuncrtn = 1U;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187__Vclpkg::__VnoInFunc_add(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_object> obj, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callback> cb, IData/*31:0*/ ordering) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187__Vclpkg::__VnoInFunc_add\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187> __Vtask_get__12__Vfuncout;
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
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__16__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__17__Vfuncout;
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
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__25__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__26__Vfuncout;
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
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__31__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__32__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_queue__Tz48> __Vtask_get__35__Vfuncout;
    IData/*31:0*/ __Vtask_size__38__Vfuncout;
    __Vtask_size__38__Vfuncout = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67> __Vtask_get__39__Vfuncout;
    IData/*31:0*/ __Vtask_size__40__Vfuncout;
    __Vtask_size__40__Vfuncout = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callback> __Vtask_get__42__Vfuncout;
    IData/*31:0*/ __Vtask_size__43__Vfuncout;
    __Vtask_size__43__Vfuncout = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callback> __Vtask_get__45__Vfuncout;
    IData/*31:0*/ __Vfunc_m_cb_find__46__Vfuncout;
    __Vfunc_m_cb_find__46__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__47__id;
    std::string __Vtask_uvm_report_warning__47__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__47__verbosity;
    __Vtask_uvm_report_warning__47__verbosity = 0;
    std::string __Vtask_uvm_report_warning__47__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__47__line;
    __Vtask_uvm_report_warning__47__line = 0;
    std::string __Vtask_uvm_report_warning__47__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__47__report_enabled_checked;
    __Vtask_uvm_report_warning__47__report_enabled_checked = 0;
    std::string __Vtask_get_name__48__Vfuncout;
    std::string __Vtask_get_full_name__49__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__50__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__51__Vfuncout;
    IData/*31:0*/ __Vtask_m_cb_find_name__53__Vfuncout;
    __Vtask_m_cb_find_name__53__Vfuncout = 0;
    std::string __Vtask_get_name__54__Vfuncout;
    std::string __Vtask_get_full_name__55__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_object> unnamedblk2__DOT__o;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_queue__Tz48> unnamedblk2__DOT__unnamedblk3__DOT__qr;
    IData/*31:0*/ unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__i;
    unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__i = 0;
    IData/*31:0*/ unnamedblk2__DOT__unnamedblk5__DOT__i;
    unnamedblk2__DOT__unnamedblk5__DOT__i = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_queue__Tz48> q;
    std::string nm;
    std::string tnm;
    {
        this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__12__Vfuncout);
        if ((VlNull{} == cb)) {
            nm = ((VlNull{} == obj) ? "(*)"s : ([&]() {
                        VL_NULL_CHECK(obj, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 608)
                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__13__Vfuncout);
                    }(), __Vtask_get_full_name__13__Vfuncout));
            tnm = ((""s != vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz67__Vclpkg.__PVT__m_typename)
                    ? vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz67__Vclpkg.__PVT__m_typename
                    : ((VlNull{} != obj) ? ([&]() {
                            VL_NULL_CHECK(obj, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 613)
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
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__17__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__17__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__15__id, __Vtask_uvm_report_error__15__message, __Vtask_uvm_report_error__15__verbosity, __Vtask_uvm_report_error__15__filename, __Vtask_uvm_report_error__15__line, __Vtask_uvm_report_error__15__context_name, (IData)(__Vtask_uvm_report_error__15__report_enabled_checked));
            goto __Vlabel0;
        }
        if ((1U & (~ ([&]() {
                            VL_NULL_CHECK(this->__PVT__m_base_inst, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 623)
                      ->__VnoInFunc_check_registration(vlSymsp, obj, cb, __Vtask_check_registration__19__Vfuncout);
                        }(), (IData)(__Vtask_check_registration__19__Vfuncout))))) {
            nm = ((VlNull{} == obj) ? "(*)"s : ([&]() {
                        VL_NULL_CHECK(obj, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 628)
                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__20__Vfuncout);
                    }(), __Vtask_get_full_name__20__Vfuncout));
            tnm = ((""s != vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz67__Vclpkg.__PVT__m_typename)
                    ? vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz67__Vclpkg.__PVT__m_typename
                    : ((VlNull{} != obj) ? ([&]() {
                            VL_NULL_CHECK(obj, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 633)
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
                                                    VL_NULL_CHECK(cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 638)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__23__Vfuncout);
                                                }(), __Vtask_get_name__23__Vfuncout)), " cannot be registered with object "s), nm), " because callback type "s), 
                                                                                ([&]() {
                                    VL_NULL_CHECK(cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 639)
                                                                                ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__24__Vfuncout);
                                }(), __Vtask_get_type_name__24__Vfuncout)), " is not registered with object type "s), tnm));
            __Vtask_uvm_report_warning__22__id = "CBUNREG"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__25__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__25__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__26__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__26__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__22__id, __Vtask_uvm_report_warning__22__message, __Vtask_uvm_report_warning__22__verbosity, __Vtask_uvm_report_warning__22__filename, __Vtask_uvm_report_warning__22__line, __Vtask_uvm_report_warning__22__context_name, (IData)(__Vtask_uvm_report_warning__22__report_enabled_checked));
        }
        if ((VlNull{} == obj)) {
            if ((0xffffffffU != ([&]() {
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz67__Vclpkg.__VnoInFunc_m_cb_find(vlProcess, vlSymsp, vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz67__Vclpkg.__PVT__m_tw_cb_q, cb, __Vfunc_m_cb_find__28__Vfuncout);
                        }(), __Vfunc_m_cb_find__28__Vfuncout))) {
                tnm = ((""s != vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz67__Vclpkg.__PVT__m_typename)
                        ? vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz67__Vclpkg.__PVT__m_typename
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
                                        VL_NULL_CHECK(cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 652)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__30__Vfuncout);
                                    }(), __Vtask_get_name__30__Vfuncout)), " is already registered with type "s), tnm));
                __Vtask_uvm_report_warning__29__id = "CBPREG"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__31__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__31__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__32__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__32__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__29__id, __Vtask_uvm_report_warning__29__message, __Vtask_uvm_report_warning__29__verbosity, __Vtask_uvm_report_warning__29__filename, __Vtask_uvm_report_warning__29__line, __Vtask_uvm_report_warning__29__context_name, (IData)(__Vtask_uvm_report_warning__29__report_enabled_checked));
            } else {
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz67__Vclpkg.__PVT__m_t_inst, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 658)->__VnoInFunc_m_add_tw_cbs(vlProcess, vlSymsp, cb, ordering);
            }
        } else {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 667)->__VnoInFunc_get(vlSymsp, obj, __Vtask_get__35__Vfuncout);
            q = __Vtask_get__35__Vfuncout;
            if ((VlNull{} == q)) {
                q = VL_NEW(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_queue__Tz48, vlProcess, vlSymsp, ""s);
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 671)->__VnoInFunc_add(vlSymsp, obj, q);
            }
            if ((0U == ([&]() {
                            VL_NULL_CHECK(q, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 674)
                        ->__VnoInFunc_size(vlSymsp, __Vtask_size__38__Vfuncout);
                        }(), __Vtask_size__38__Vfuncout))) {
                if ((0U != ([&]() {
                                unnamedblk2__DOT__o 
                                    = obj;
                            }(), 1U))) {
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz67__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__39__Vfuncout);
                    unnamedblk2__DOT__unnamedblk3__DOT__qr 
                        = vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz67__Vclpkg.__PVT__m_tw_cb_q;
                    unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__i = 0U;
                    while (VL_LTS_III(32, unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__i, 
                                      ([&]() {
                                    VL_NULL_CHECK(unnamedblk2__DOT__unnamedblk3__DOT__qr, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 683)
                                       ->__VnoInFunc_size(vlSymsp, __Vtask_size__40__Vfuncout);
                                }(), __Vtask_size__40__Vfuncout))) {
                        VL_NULL_CHECK(q, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 684)->__VnoInFunc_push_back(vlSymsp, 
                                                                                ([&]() {
                                    VL_NULL_CHECK(unnamedblk2__DOT__unnamedblk3__DOT__qr, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 684)
                                                                                ->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__i, __Vtask_get__42__Vfuncout);
                                }(), __Vtask_get__42__Vfuncout));
                        unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__i 
                            = ((IData)(1U) + unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__i);
                    }
                }
                unnamedblk2__DOT__unnamedblk5__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk2__DOT__unnamedblk5__DOT__i, 
                                  ([&]() {
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz67__Vclpkg.__PVT__m_tw_cb_q, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 687)
                                   ->__VnoInFunc_size(vlSymsp, __Vtask_size__43__Vfuncout);
                            }(), __Vtask_size__43__Vfuncout))) {
                    VL_NULL_CHECK(q, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 688)->__VnoInFunc_push_back(vlSymsp, 
                                                                                ([&]() {
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz67__Vclpkg.__PVT__m_tw_cb_q, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 688)
                                                                                ->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk2__DOT__unnamedblk5__DOT__i, __Vtask_get__45__Vfuncout);
                            }(), __Vtask_get__45__Vfuncout));
                    unnamedblk2__DOT__unnamedblk5__DOT__i 
                        = ((IData)(1U) + unnamedblk2__DOT__unnamedblk5__DOT__i);
                }
            }
            if ((0xffffffffU != ([&]() {
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz67__Vclpkg.__VnoInFunc_m_cb_find(vlProcess, vlSymsp, q, cb, __Vfunc_m_cb_find__46__Vfuncout);
                        }(), __Vfunc_m_cb_find__46__Vfuncout))) {
                __Vtask_uvm_report_warning__47__report_enabled_checked = 0U;
                __Vtask_uvm_report_warning__47__context_name = ""s;
                __Vtask_uvm_report_warning__47__line = 0U;
                __Vtask_uvm_report_warning__47__filename = ""s;
                __Vtask_uvm_report_warning__47__verbosity = 0U;
                __Vtask_uvm_report_warning__47__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Callback object "s, 
                                                                                ([&]() {
                                            VL_NULL_CHECK(cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 693)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__48__Vfuncout);
                                        }(), __Vtask_get_name__48__Vfuncout)), " is already registered"s), " with object "s), 
                                                        ([&]() {
                                VL_NULL_CHECK(obj, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 694)
                                                         ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__49__Vfuncout);
                            }(), __Vtask_get_full_name__49__Vfuncout)));
                __Vtask_uvm_report_warning__47__id = "CBPREG"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__50__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__50__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__51__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__51__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__47__id, __Vtask_uvm_report_warning__47__message, __Vtask_uvm_report_warning__47__verbosity, __Vtask_uvm_report_warning__47__filename, __Vtask_uvm_report_warning__47__line, __Vtask_uvm_report_warning__47__context_name, (IData)(__Vtask_uvm_report_warning__47__report_enabled_checked));
            } else {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz67__Vclpkg.__VnoInFunc_m_cb_find_name(vlProcess, vlSymsp, q, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                                VL_NULL_CHECK(cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 697)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__54__Vfuncout);
                            }(), __Vtask_get_name__54__Vfuncout)), 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("object instance "s, 
                                                                                ([&]() {
                                    VL_NULL_CHECK(obj, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 697)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__55__Vfuncout);
                                }(), __Vtask_get_full_name__55__Vfuncout))), __Vtask_m_cb_find_name__53__Vfuncout);
                if ((0U == ordering)) {
                    VL_NULL_CHECK(q, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 699)->__VnoInFunc_push_back(vlSymsp, cb);
                } else {
                    VL_NULL_CHECK(q, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 701)->__VnoInFunc_push_front(vlSymsp, cb);
                }
            }
        }
        __Vlabel0: ;
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187__Vclpkg::__VnoInFunc_add_by_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callback> cb, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component> root, IData/*31:0*/ ordering) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187__Vclpkg::__VnoInFunc_add_by_name\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187> __Vtask_get__58__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__59__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__60__Vfuncout;
    std::string __Vtask_uvm_report_error__61__id;
    std::string __Vtask_uvm_report_error__61__message;
    IData/*31:0*/ __Vtask_uvm_report_error__61__verbosity;
    __Vtask_uvm_report_error__61__verbosity = 0;
    std::string __Vtask_uvm_report_error__61__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__61__line;
    __Vtask_uvm_report_error__61__line = 0;
    std::string __Vtask_uvm_report_error__61__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__61__report_enabled_checked;
    __Vtask_uvm_report_error__61__report_enabled_checked = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__62__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__63__Vfuncout;
    std::string __Vtask_uvm_report_warning__66__id;
    std::string __Vtask_uvm_report_warning__66__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__66__verbosity;
    __Vtask_uvm_report_warning__66__verbosity = 0;
    std::string __Vtask_uvm_report_warning__66__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__66__line;
    __Vtask_uvm_report_warning__66__line = 0;
    std::string __Vtask_uvm_report_warning__66__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__66__report_enabled_checked;
    __Vtask_uvm_report_warning__66__report_enabled_checked = 0;
    std::string __Vtask_get_name__67__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__68__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__69__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ unnamedblk6__DOT__i;
    unnamedblk6__DOT__i = 0;
    VlQueue<VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component>> cq;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> top;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> cs;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_object> t;
    {
        this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__58__Vfuncout);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__59__Vfuncout);
        cs = __Vfunc_get__59__Vfuncout;
        VL_NULL_CHECK(cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 725)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__60__Vfuncout);
        top = __Vtask_get_root__60__Vfuncout;
        if ((VlNull{} == cb)) {
            __Vtask_uvm_report_error__61__report_enabled_checked = 0U;
            __Vtask_uvm_report_error__61__context_name = ""s;
            __Vtask_uvm_report_error__61__line = 0U;
            __Vtask_uvm_report_error__61__filename = ""s;
            __Vtask_uvm_report_error__61__verbosity = 0U;
            __Vtask_uvm_report_error__61__message = 
                VL_CVT_PACK_STR_NN(VL_CONCATN_NNN("Null callback object cannot be registered with object(s) "s, name));
            __Vtask_uvm_report_error__61__id = "CBUNREG"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__62__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__62__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__63__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__63__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__61__id, __Vtask_uvm_report_error__61__message, __Vtask_uvm_report_error__61__verbosity, __Vtask_uvm_report_error__61__filename, __Vtask_uvm_report_error__61__line, __Vtask_uvm_report_error__61__context_name, (IData)(__Vtask_uvm_report_error__61__report_enabled_checked));
            goto __Vlabel0;
        }
        VL_NULL_CHECK(top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 734)->__VnoInFunc_find_all(vlProcess, vlSymsp, name, cq, root);
        if ((0U == cq.size())) {
            __Vtask_uvm_report_warning__66__report_enabled_checked = 0U;
            __Vtask_uvm_report_warning__66__context_name = ""s;
            __Vtask_uvm_report_warning__66__line = 0U;
            __Vtask_uvm_report_warning__66__filename = ""s;
            __Vtask_uvm_report_warning__66__verbosity = 0U;
            __Vtask_uvm_report_warning__66__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("add_by_name failed to find any components matching the name "s, name), ", callback "s), 
                                                                   ([&]() {
                                VL_NULL_CHECK(cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 737)
                                                                    ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__67__Vfuncout);
                            }(), __Vtask_get_name__67__Vfuncout)), " will not be registered."s));
            __Vtask_uvm_report_warning__66__id = "CBNOMTC"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__68__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__68__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__69__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__69__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__66__id, __Vtask_uvm_report_warning__66__message, __Vtask_uvm_report_warning__66__verbosity, __Vtask_uvm_report_warning__66__filename, __Vtask_uvm_report_warning__66__line, __Vtask_uvm_report_warning__66__context_name, (IData)(__Vtask_uvm_report_warning__66__report_enabled_checked));
        }
        unnamedblk6__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk6__DOT__i, cq.size())) {
            if ((0U != ([&]() {
                            t = cq.at(unnamedblk6__DOT__i);
                        }(), 1U))) {
                this->__VnoInFunc_add(vlSymsp, t, cb, ordering);
            }
            unnamedblk6__DOT__i = ((IData)(1U) + unnamedblk6__DOT__i);
        }
        __Vlabel0: ;
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187__Vclpkg::__VnoInFunc_delete(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_object> obj, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callback> cb) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187__Vclpkg::__VnoInFunc_delete\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187> __Vtask_get__72__Vfuncout;
    CData/*0:0*/ __Vtask_m_delete_tw_cbs__73__Vfuncout;
    __Vtask_m_delete_tw_cbs__73__Vfuncout = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_queue__Tz48> __Vtask_get__74__Vfuncout;
    IData/*31:0*/ __Vfunc_m_cb_find__75__Vfuncout;
    __Vfunc_m_cb_find__75__Vfuncout = 0;
    std::string __Vtask_get_full_name__77__Vfuncout;
    std::string __Vtask_uvm_report_warning__78__id;
    std::string __Vtask_uvm_report_warning__78__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__78__verbosity;
    __Vtask_uvm_report_warning__78__verbosity = 0;
    std::string __Vtask_uvm_report_warning__78__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__78__line;
    __Vtask_uvm_report_warning__78__line = 0;
    std::string __Vtask_uvm_report_warning__78__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__78__report_enabled_checked;
    __Vtask_uvm_report_warning__78__report_enabled_checked = 0;
    std::string __Vtask_get_name__79__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__80__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__81__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string unnamedblk7__DOT__nm;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> b_obj;
    b_obj = obj;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_queue__Tz48> q;
    CData/*0:0*/ found;
    found = 0;
    IData/*31:0*/ pos;
    pos = 0;
    this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__72__Vfuncout);
    if ((VlNull{} == obj)) {
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz67__Vclpkg.__PVT__m_t_inst, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 771)->__VnoInFunc_m_delete_tw_cbs(vlProcess, vlSymsp, cb, __Vtask_m_delete_tw_cbs__73__Vfuncout);
        found = __Vtask_m_delete_tw_cbs__73__Vfuncout;
    } else {
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 776)->__VnoInFunc_get(vlSymsp, b_obj, __Vtask_get__74__Vfuncout);
        q = __Vtask_get__74__Vfuncout;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz67__Vclpkg.__VnoInFunc_m_cb_find(vlProcess, vlSymsp, q, cb, __Vfunc_m_cb_find__75__Vfuncout);
        pos = __Vfunc_m_cb_find__75__Vfuncout;
        if ((0xffffffffU != pos)) {
            VL_NULL_CHECK(q, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 779)->__VnoInFunc_delete(vlProcess, vlSymsp, pos);
            found = 1U;
        }
    }
    if ((1U & (~ (IData)(found)))) {
        unnamedblk7__DOT__nm = ((VlNull{} == obj) ? "(*)"s
                                 : ([&]() {
                    VL_NULL_CHECK(obj, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 785)
                                    ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__77__Vfuncout);
                }(), __Vtask_get_full_name__77__Vfuncout));
        __Vtask_uvm_report_warning__78__report_enabled_checked = 0U;
        __Vtask_uvm_report_warning__78__context_name = ""s;
        __Vtask_uvm_report_warning__78__line = 0U;
        __Vtask_uvm_report_warning__78__filename = ""s;
        __Vtask_uvm_report_warning__78__verbosity = 0U;
        __Vtask_uvm_report_warning__78__message = VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Callback "s, 
                                                                                ([&]() {
                                    VL_NULL_CHECK(cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 786)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__79__Vfuncout);
                                }(), __Vtask_get_name__79__Vfuncout)), " cannot be removed from object "s), unnamedblk7__DOT__nm), " because it is not currently registered to that object."s));
        __Vtask_uvm_report_warning__78__id = "CBUNREG"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__80__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__80__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__81__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__81__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__78__id, __Vtask_uvm_report_warning__78__message, __Vtask_uvm_report_warning__78__verbosity, __Vtask_uvm_report_warning__78__filename, __Vtask_uvm_report_warning__78__line, __Vtask_uvm_report_warning__78__context_name, (IData)(__Vtask_uvm_report_warning__78__report_enabled_checked));
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187__Vclpkg::__VnoInFunc_delete_by_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callback> cb, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component> root) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187__Vclpkg::__VnoInFunc_delete_by_name\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187> __Vtask_get__83__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__84__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__85__Vfuncout;
    std::string __Vtask_uvm_report_warning__87__id;
    std::string __Vtask_uvm_report_warning__87__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__87__verbosity;
    __Vtask_uvm_report_warning__87__verbosity = 0;
    std::string __Vtask_uvm_report_warning__87__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__87__line;
    __Vtask_uvm_report_warning__87__line = 0;
    std::string __Vtask_uvm_report_warning__87__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__87__report_enabled_checked;
    __Vtask_uvm_report_warning__87__report_enabled_checked = 0;
    std::string __Vtask_get_name__88__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__89__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__90__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ unnamedblk8__DOT__i;
    unnamedblk8__DOT__i = 0;
    VlQueue<VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component>> cq;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> top;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_object> t;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> cs;
    this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__83__Vfuncout);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__84__Vfuncout);
    cs = __Vfunc_get__84__Vfuncout;
    VL_NULL_CHECK(cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 809)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__85__Vfuncout);
    top = __Vtask_get_root__85__Vfuncout;
    VL_NULL_CHECK(top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 813)->__VnoInFunc_find_all(vlProcess, vlSymsp, name, cq, root);
    if ((0U == cq.size())) {
        __Vtask_uvm_report_warning__87__report_enabled_checked = 0U;
        __Vtask_uvm_report_warning__87__context_name = ""s;
        __Vtask_uvm_report_warning__87__line = 0U;
        __Vtask_uvm_report_warning__87__filename = ""s;
        __Vtask_uvm_report_warning__87__verbosity = 0U;
        __Vtask_uvm_report_warning__87__message = VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("delete_by_name failed to find any components matching the name "s, name), ", callback "s), 
                                                                                ([&]() {
                            VL_NULL_CHECK(cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 816)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__88__Vfuncout);
                        }(), __Vtask_get_name__88__Vfuncout)), " will not be unregistered."s));
        __Vtask_uvm_report_warning__87__id = "CBNOMTC"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__89__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__89__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__90__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__90__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__87__id, __Vtask_uvm_report_warning__87__message, __Vtask_uvm_report_warning__87__verbosity, __Vtask_uvm_report_warning__87__filename, __Vtask_uvm_report_warning__87__line, __Vtask_uvm_report_warning__87__context_name, (IData)(__Vtask_uvm_report_warning__87__report_enabled_checked));
    }
    unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk8__DOT__i, cq.size())) {
        if ((0U != ([&]() {
                        t = cq.at(unnamedblk8__DOT__i);
                    }(), 1U))) {
            this->__VnoInFunc_delete(vlSymsp, t, cb);
        }
        unnamedblk8__DOT__i = ((IData)(1U) + unnamedblk8__DOT__i);
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187__Vclpkg::__VnoInFunc_m_get_q(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_queue__Tz48> &q, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_object> obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187__Vclpkg::__VnoInFunc_m_get_q\n"); );
    // Locals
    IData/*31:0*/ __Vtask_exists__93__Vfuncout;
    __Vtask_exists__93__Vfuncout = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_queue__Tz48> __Vtask_get__94__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_queue__Tz48> __Vtask_m_get_tw_cb_q__97__Vfuncout;
    // Body
    if ((0U != ([&]() {
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 834)
                ->__VnoInFunc_exists(vlSymsp, obj, __Vtask_exists__93__Vfuncout);
                }(), __Vtask_exists__93__Vfuncout))) {
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 838)->__VnoInFunc_get(vlSymsp, obj, __Vtask_get__94__Vfuncout);
        q = __Vtask_get__94__Vfuncout;
        if ((VlNull{} == q)) {
            q = VL_NEW(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_queue__Tz48, vlProcess, vlSymsp, ""s);
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 841)->__VnoInFunc_add(vlSymsp, obj, q);
        }
    } else {
        q = ((VlNull{} == obj) ? vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz67__Vclpkg.__PVT__m_tw_cb_q
              : ([&]() {
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz67__Vclpkg.__PVT__m_t_inst, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 835)
                 ->__VnoInFunc_m_get_tw_cb_q(vlSymsp, obj, __Vtask_m_get_tw_cb_q__97__Vfuncout);
                }(), __Vtask_m_get_tw_cb_q__97__Vfuncout));
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187__Vclpkg::__VnoInFunc_get_first(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_object> obj, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_catcher> &get_first__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187__Vclpkg::__VnoInFunc_get_first\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187> __Vtask_get__98__Vfuncout;
    IData/*31:0*/ __Vtask_size__100__Vfuncout;
    __Vtask_size__100__Vfuncout = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callback> __Vtask_get__101__Vfuncout;
    CData/*0:0*/ __Vtask_callback_mode__102__Vfuncout;
    __Vtask_callback_mode__102__Vfuncout = 0;
    // Body
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_queue__Tz48> q;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_catcher> cb;
    {
        this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__98__Vfuncout);
        this->__VnoInFunc_m_get_q(vlProcess, vlSymsp, q, obj);
        itr = 0U;
        while (VL_LTS_III(32, itr, ([&]() {
                        VL_NULL_CHECK(q, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 865)
                                    ->__VnoInFunc_size(vlSymsp, __Vtask_size__100__Vfuncout);
                    }(), __Vtask_size__100__Vfuncout))) {
            if ((VL_CAST_DYNAMIC(([&]() {
                                VL_NULL_CHECK(q, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 866)
                                  ->__VnoInFunc_get(vlProcess, vlSymsp, itr, __Vtask_get__101__Vfuncout);
                            }(), __Vtask_get__101__Vfuncout), cb) 
                 && ([&]() {
                            VL_NULL_CHECK(cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 866)
                     ->__VnoInFunc_callback_mode(vlSymsp, 0xffffffffU, __Vtask_callback_mode__102__Vfuncout);
                        }(), (IData)(__Vtask_callback_mode__102__Vfuncout)))) {
                get_first__Vfuncrtn = cb;
                goto __Vlabel0;
            }
            itr = ((IData)(1U) + itr);
        }
        get_first__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187__Vclpkg::__VnoInFunc_get_last(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_object> obj, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_catcher> &get_last__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187__Vclpkg::__VnoInFunc_get_last\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187> __Vtask_get__103__Vfuncout;
    IData/*31:0*/ __Vtask_size__105__Vfuncout;
    __Vtask_size__105__Vfuncout = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callback> __Vtask_get__106__Vfuncout;
    CData/*0:0*/ __Vtask_callback_mode__107__Vfuncout;
    __Vtask_callback_mode__107__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_queue__Tz48> q;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_catcher> cb;
    {
        this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__103__Vfuncout);
        this->__VnoInFunc_m_get_q(vlProcess, vlSymsp, q, obj);
        itr = (([&]() {
                    VL_NULL_CHECK(q, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 889)
                ->__VnoInFunc_size(vlSymsp, __Vtask_size__105__Vfuncout);
                }(), __Vtask_size__105__Vfuncout) - (IData)(1U));
        while (VL_LTES_III(32, 0U, itr)) {
            if ((VL_CAST_DYNAMIC(([&]() {
                                VL_NULL_CHECK(q, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 890)
                                  ->__VnoInFunc_get(vlProcess, vlSymsp, itr, __Vtask_get__106__Vfuncout);
                            }(), __Vtask_get__106__Vfuncout), cb) 
                 && ([&]() {
                            VL_NULL_CHECK(cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 890)
                     ->__VnoInFunc_callback_mode(vlSymsp, 0xffffffffU, __Vtask_callback_mode__107__Vfuncout);
                        }(), (IData)(__Vtask_callback_mode__107__Vfuncout)))) {
                get_last__Vfuncrtn = cb;
                goto __Vlabel0;
            }
            itr = (itr - (IData)(1U));
        }
        get_last__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187__Vclpkg::__VnoInFunc_get_next(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_object> obj, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_catcher> &get_next__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187__Vclpkg::__VnoInFunc_get_next\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187> __Vtask_get__108__Vfuncout;
    IData/*31:0*/ __Vtask_size__110__Vfuncout;
    __Vtask_size__110__Vfuncout = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callback> __Vtask_get__111__Vfuncout;
    CData/*0:0*/ __Vtask_callback_mode__112__Vfuncout;
    __Vtask_callback_mode__112__Vfuncout = 0;
    // Body
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_queue__Tz48> q;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_catcher> cb;
    {
        this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__108__Vfuncout);
        this->__VnoInFunc_m_get_q(vlProcess, vlSymsp, q, obj);
        itr = ((IData)(1U) + itr);
        while (VL_LTS_III(32, itr, ([&]() {
                        VL_NULL_CHECK(q, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 916)
                                    ->__VnoInFunc_size(vlSymsp, __Vtask_size__110__Vfuncout);
                    }(), __Vtask_size__110__Vfuncout))) {
            if ((VL_CAST_DYNAMIC(([&]() {
                                VL_NULL_CHECK(q, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 917)
                                  ->__VnoInFunc_get(vlProcess, vlSymsp, itr, __Vtask_get__111__Vfuncout);
                            }(), __Vtask_get__111__Vfuncout), cb) 
                 && ([&]() {
                            VL_NULL_CHECK(cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 917)
                     ->__VnoInFunc_callback_mode(vlSymsp, 0xffffffffU, __Vtask_callback_mode__112__Vfuncout);
                        }(), (IData)(__Vtask_callback_mode__112__Vfuncout)))) {
                get_next__Vfuncrtn = cb;
                goto __Vlabel0;
            }
            itr = ((IData)(1U) + itr);
        }
        get_next__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187__Vclpkg::__VnoInFunc_get_prev(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_object> obj, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_catcher> &get_prev__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187__Vclpkg::__VnoInFunc_get_prev\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187> __Vtask_get__113__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callback> __Vtask_get__115__Vfuncout;
    CData/*0:0*/ __Vtask_callback_mode__116__Vfuncout;
    __Vtask_callback_mode__116__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_queue__Tz48> q;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_catcher> cb;
    {
        this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__113__Vfuncout);
        this->__VnoInFunc_m_get_q(vlProcess, vlSymsp, q, obj);
        itr = (itr - (IData)(1U));
        while (VL_LTES_III(32, 0U, itr)) {
            if ((VL_CAST_DYNAMIC(([&]() {
                                VL_NULL_CHECK(q, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 944)
                                  ->__VnoInFunc_get(vlProcess, vlSymsp, itr, __Vtask_get__115__Vfuncout);
                            }(), __Vtask_get__115__Vfuncout), cb) 
                 && ([&]() {
                            VL_NULL_CHECK(cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 944)
                     ->__VnoInFunc_callback_mode(vlSymsp, 0xffffffffU, __Vtask_callback_mode__116__Vfuncout);
                        }(), (IData)(__Vtask_callback_mode__116__Vfuncout)))) {
                get_prev__Vfuncrtn = cb;
                goto __Vlabel0;
            }
            itr = (itr - (IData)(1U));
        }
        get_prev__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187__Vclpkg::__VnoInFunc_get_all(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_catcher>> &all_callbacks, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_object> obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187__Vclpkg::__VnoInFunc_get_all\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187> __Vtask_get__117__Vfuncout;
    IData/*31:0*/ __Vtask_exists__118__Vfuncout;
    __Vtask_exists__118__Vfuncout = 0;
    IData/*31:0*/ __Vtask_size__119__Vfuncout;
    __Vtask_size__119__Vfuncout = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callback> __Vtask_get__120__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_queue__Tz48> __Vtask_get__121__Vfuncout;
    IData/*31:0*/ __Vtask_size__122__Vfuncout;
    __Vtask_size__122__Vfuncout = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callback> __Vtask_get__123__Vfuncout;
    IData/*31:0*/ __Vtask_get_inst_id__124__Vfuncout;
    __Vtask_get_inst_id__124__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ unnamedblk9__DOT__qi;
    unnamedblk9__DOT__qi = 0;
    IData/*31:0*/ unnamedblk10__DOT__qi;
    unnamedblk10__DOT__qi = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_queue__Tz48> q;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_catcher> cb;
    VlQueue<VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_catcher>> callbacks_to_append;
    VlQueue<VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_catcher>> unique_callbacks_to_append;
    this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__117__Vfuncout);
    if (((VlNull{} == obj) || (1U & (~ (0U != ([&]() {
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 974)
                                               ->__VnoInFunc_exists(vlSymsp, obj, __Vtask_exists__118__Vfuncout);
                            }(), __Vtask_exists__118__Vfuncout)))))) {
        unnamedblk9__DOT__qi = 0U;
        while (VL_LTS_III(32, unnamedblk9__DOT__qi, 
                          ([&]() {
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz67__Vclpkg.__PVT__m_tw_cb_q, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 976)
                           ->__VnoInFunc_size(vlSymsp, __Vtask_size__119__Vfuncout);
                    }(), __Vtask_size__119__Vfuncout))) {
            if (VL_CAST_DYNAMIC(([&]() {
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz67__Vclpkg.__PVT__m_tw_cb_q, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 977)
                                 ->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk9__DOT__qi, __Vtask_get__120__Vfuncout);
                        }(), __Vtask_get__120__Vfuncout), cb)) {
                callbacks_to_append.push_back(cb);
            }
            unnamedblk9__DOT__qi = ((IData)(1U) + unnamedblk9__DOT__qi);
        }
    } else {
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 983)->__VnoInFunc_get(vlSymsp, obj, __Vtask_get__121__Vfuncout);
        q = __Vtask_get__121__Vfuncout;
        unnamedblk10__DOT__qi = 0U;
        while (VL_LTS_III(32, unnamedblk10__DOT__qi, 
                          ([&]() {
                        VL_NULL_CHECK(q, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 984)
                           ->__VnoInFunc_size(vlSymsp, __Vtask_size__122__Vfuncout);
                    }(), __Vtask_size__122__Vfuncout))) {
            if (VL_CAST_DYNAMIC(([&]() {
                            VL_NULL_CHECK(q, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 985)
                                 ->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk10__DOT__qi, __Vtask_get__123__Vfuncout);
                        }(), __Vtask_get__123__Vfuncout), cb)) {
                callbacks_to_append.push_back(cb);
            }
            unnamedblk10__DOT__qi = ((IData)(1U) + unnamedblk10__DOT__qi);
        }
    }
    unique_callbacks_to_append = callbacks_to_append.unique(
                                                            [&](
                                                                IData/*31:0*/ cb___DOT__index, 
                                                                VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_catcher> cb_) -> 
                                                            IData/*31:0*/ {
            return (([&]() {
                        VL_NULL_CHECK(cb_, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 990)
                     ->__VnoInFunc_get_inst_id(vlSymsp, __Vtask_get_inst_id__124__Vfuncout);
                    }(), __Vtask_get_inst_id__124__Vfuncout));
        }
    );
    all_callbacks = VlQueue<VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_catcher>>::consCC(unique_callbacks_to_append, 
                                                                                all_callbacks);
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187__Vclpkg::__VnoInFunc_display(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_object> obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187__Vclpkg::__VnoInFunc_display\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187> __Vtask_get__125__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__125__Vfuncout);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz67__Vclpkg.__VnoInFunc_display(vlSymsp, obj);
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187::__VnoInFunc_m_is_registered(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_is_registered__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187::__VnoInFunc_m_is_registered\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_m_is_for_me__0__Vfuncout;
    __Vfunc_m_is_for_me__0__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_m_am_i_a__1__Vfuncout;
    __Vfunc_m_am_i_a__1__Vfuncout = 0;
    // Body
    if ((([&]() {
                    this->__VnoInFunc_m_is_for_me(vlSymsp, cb, __Vfunc_m_is_for_me__0__Vfuncout);
                }(), (IData)(__Vfunc_m_is_for_me__0__Vfuncout)) 
         & ([&]() {
                    this->__VnoInFunc_m_am_i_a(vlSymsp, obj, __Vfunc_m_am_i_a__1__Vfuncout);
                }(), (IData)(__Vfunc_m_am_i_a__1__Vfuncout)))) {
        m_is_registered__Vfuncrtn = this->__PVT__m_registered;
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187::__VnoInFunc_m_is_for_me(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_is_for_me__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187::__VnoInFunc_m_is_for_me\n"); );
    // Body
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_catcher> this_cb;
    m_is_for_me__Vfuncrtn = (1U & VL_CAST_DYNAMIC(cb, this_cb));
}

Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187::Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp)
    : Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz67(vlProcess, vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187::__VnoInFunc_randomize(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__4__Vfuncout;
    __Vfunc___Vbasic_randomize__4__Vfuncout = 0;
    // Body
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__4__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__4__Vfuncout));
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187::__VnoInFunc___Vbasic_randomize(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187::_ctor_var_reset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_registered = 0;
}

std::string VL_TO_STRING(const VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks__Tz67_TBz187::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_registered:" + VL_TO_STRING(__PVT__m_registered);
    out += ", "+ Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz67::to_string_middle();
    return (out);
}
