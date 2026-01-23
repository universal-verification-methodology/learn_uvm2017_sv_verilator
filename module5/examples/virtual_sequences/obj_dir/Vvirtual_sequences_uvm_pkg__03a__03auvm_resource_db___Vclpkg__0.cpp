// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvirtual_sequences.h for the primary calling header

#include "Vvirtual_sequences__pch.h"

void Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db___Vclpkg::__VnoInFunc_get_by_type(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz91> &get_by_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db___Vclpkg::__VnoInFunc_get_by_type\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_pool> __Vfunc_get__0__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz91> __Vfunc_get_type__1__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_base> __Vtask_get_by_type__2__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__3__Vfuncout;
    __Vfunc_uvm_report_enabled__3__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__3__verbosity;
    __Vfunc_uvm_report_enabled__3__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__3__severity;
    __Vfunc_uvm_report_enabled__3__severity = 0;
    std::string __Vfunc_uvm_report_enabled__3__id;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__4__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_root> __Vtask_get_root__5__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__6__Vfuncout;
    __Vtask_uvm_report_enabled__6__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__7__id;
    std::string __Vtask_uvm_report_warning__7__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__7__verbosity;
    __Vtask_uvm_report_warning__7__verbosity = 0;
    std::string __Vtask_uvm_report_warning__7__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__7__line;
    __Vtask_uvm_report_warning__7__line = 0;
    std::string __Vtask_uvm_report_warning__7__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__7__report_enabled_checked;
    __Vtask_uvm_report_warning__7__report_enabled_checked = 0;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__8__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_root> __Vtask_get_root__9__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_pool> rp;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_base> rsrc_base;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz91> rsrc;
    std::string msg;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_base> type_handle;
    {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__0__Vfuncout);
        rp = __Vfunc_get__0__Vfuncout;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource__Tz91__Vclpkg.__VnoInFunc_get_type(vlProcess, vlSymsp, __Vfunc_get_type__1__Vfuncout);
        type_handle = __Vfunc_get_type__1__Vfuncout;
        if ((VlNull{} == type_handle)) {
            get_by_type__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        VL_NULL_CHECK(rp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource_db.svh", 81)->__VnoInFunc_get_by_type(vlSymsp, scope, type_handle, __Vtask_get_by_type__2__Vfuncout);
        rsrc_base = __Vtask_get_by_type__2__Vfuncout;
        if ((! VL_CAST_DYNAMIC(rsrc_base, rsrc))) {
            VL_SFORMAT_NX(64,msg,"Resource with specified type handle in scope %@ was not located",0,
                          -1,&(scope));
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__3__id = "RSRCNF"s;
                            __Vfunc_uvm_report_enabled__3__severity = 1U;
                            __Vfunc_uvm_report_enabled__3__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__4__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__4__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__5__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__5__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__3__verbosity, (IData)(__Vfunc_uvm_report_enabled__3__severity), __Vfunc_uvm_report_enabled__3__id, __Vtask_uvm_report_enabled__6__Vfuncout);
                            __Vfunc_uvm_report_enabled__3__Vfuncout 
                                = __Vtask_uvm_report_enabled__6__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__3__Vfuncout))) {
                __Vtask_uvm_report_warning__7__report_enabled_checked = 1U;
                __Vtask_uvm_report_warning__7__context_name = ""s;
                __Vtask_uvm_report_warning__7__line = 0x00000054U;
                __Vtask_uvm_report_warning__7__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource_db.svh"s;
                __Vtask_uvm_report_warning__7__verbosity = 0U;
                __Vtask_uvm_report_warning__7__message 
                    = msg;
                __Vtask_uvm_report_warning__7__id = "RSRCNF"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__8__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__8__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__9__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__9__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__7__id, __Vtask_uvm_report_warning__7__message, __Vtask_uvm_report_warning__7__verbosity, __Vtask_uvm_report_warning__7__filename, __Vtask_uvm_report_warning__7__line, __Vtask_uvm_report_warning__7__context_name, (IData)(__Vtask_uvm_report_warning__7__report_enabled_checked));
            }
            get_by_type__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        get_by_type__Vfuncrtn = rsrc;
        __Vlabel0: ;
    }
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db___Vclpkg::__VnoInFunc_get_by_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string scope, std::string name, CData/*0:0*/ rpterr, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz91> &get_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db___Vclpkg::__VnoInFunc_get_by_name\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_pool> __Vfunc_get__11__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_base> __Vtask_get_by_name__12__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz91> __Vfunc_get_type__13__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__14__Vfuncout;
    __Vfunc_uvm_report_enabled__14__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__14__verbosity;
    __Vfunc_uvm_report_enabled__14__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__14__severity;
    __Vfunc_uvm_report_enabled__14__severity = 0;
    std::string __Vfunc_uvm_report_enabled__14__id;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__15__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_root> __Vtask_get_root__16__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__17__Vfuncout;
    __Vtask_uvm_report_enabled__17__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__18__id;
    std::string __Vtask_uvm_report_warning__18__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__18__verbosity;
    __Vtask_uvm_report_warning__18__verbosity = 0;
    std::string __Vtask_uvm_report_warning__18__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__18__line;
    __Vtask_uvm_report_warning__18__line = 0;
    std::string __Vtask_uvm_report_warning__18__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__18__report_enabled_checked;
    __Vtask_uvm_report_warning__18__report_enabled_checked = 0;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__19__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_root> __Vtask_get_root__20__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_pool> rp;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_base> rsrc_base;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz91> rsrc;
    std::string msg;
    {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__11__Vfuncout);
        rp = __Vfunc_get__11__Vfuncout;
        VL_NULL_CHECK(rp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource_db.svh", 108)->__VnoInFunc_get_by_name(vlProcess, vlSymsp, scope, name, 
                                                                                ([&]() {
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource__Tz91__Vclpkg.__VnoInFunc_get_type(vlProcess, vlSymsp, __Vfunc_get_type__13__Vfuncout);
                }(), __Vfunc_get_type__13__Vfuncout), rpterr, __Vtask_get_by_name__12__Vfuncout);
        rsrc_base = __Vtask_get_by_name__12__Vfuncout;
        if ((VlNull{} == rsrc_base)) {
            get_by_name__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        if ((! VL_CAST_DYNAMIC(rsrc_base, rsrc))) {
            if (rpterr) {
                VL_SFORMAT_NX(64,msg,"Resource with name %@ in scope %@ has incorrect type",0,
                              -1,&(name),-1,&(scope));
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__14__id = "RSRCTYPE"s;
                                __Vfunc_uvm_report_enabled__14__severity = 1U;
                                __Vfunc_uvm_report_enabled__14__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__15__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__15__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__16__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__16__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__14__verbosity, (IData)(__Vfunc_uvm_report_enabled__14__severity), __Vfunc_uvm_report_enabled__14__id, __Vtask_uvm_report_enabled__17__Vfuncout);
                                __Vfunc_uvm_report_enabled__14__Vfuncout 
                                    = __Vtask_uvm_report_enabled__17__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__14__Vfuncout))) {
                    __Vtask_uvm_report_warning__18__report_enabled_checked = 1U;
                    __Vtask_uvm_report_warning__18__context_name = ""s;
                    __Vtask_uvm_report_warning__18__line = 0x00000073U;
                    __Vtask_uvm_report_warning__18__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource_db.svh"s;
                    __Vtask_uvm_report_warning__18__verbosity = 0U;
                    __Vtask_uvm_report_warning__18__message 
                        = msg;
                    __Vtask_uvm_report_warning__18__id = "RSRCTYPE"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__19__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__19__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__20__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__20__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__18__id, __Vtask_uvm_report_warning__18__message, __Vtask_uvm_report_warning__18__verbosity, __Vtask_uvm_report_warning__18__filename, __Vtask_uvm_report_warning__18__line, __Vtask_uvm_report_warning__18__context_name, (IData)(__Vtask_uvm_report_warning__18__report_enabled_checked));
                }
            }
            get_by_name__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        get_by_name__Vfuncrtn = rsrc;
        __Vlabel0: ;
    }
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db___Vclpkg::__VnoInFunc_set_default(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz91> &set_default__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db___Vclpkg::__VnoInFunc_set_default\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_pool> __Vfunc_get__22__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz91> r;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_pool> rp;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__22__Vfuncout);
    rp = __Vfunc_get__22__Vfuncout;
    r = VL_NEW(Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz91, vlProcess, vlSymsp, name);
    VL_NULL_CHECK(rp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource_db.svh", 136)->__VnoInFunc_set_scope(vlProcess, vlSymsp, r, scope);
    set_default__Vfuncrtn = r;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db___Vclpkg::__VnoInFunc_m_show_msg(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string id, std::string rtype, std::string action, std::string scope, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> accessor, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz91> rsrc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db___Vclpkg::__VnoInFunc_m_show_msg\n"); );
    // Locals
    std::string __Vtask_get_full_name__25__Vfuncout;
    std::string __Vtask_convert2string__26__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__27__Vfuncout;
    __Vfunc_uvm_report_enabled__27__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__27__verbosity;
    __Vfunc_uvm_report_enabled__27__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__27__severity;
    __Vfunc_uvm_report_enabled__27__severity = 0;
    std::string __Vfunc_uvm_report_enabled__27__id;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__28__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_root> __Vtask_get_root__29__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__30__Vfuncout;
    __Vtask_uvm_report_enabled__30__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__31__id;
    std::string __Vtask_uvm_report_info__31__message;
    IData/*31:0*/ __Vtask_uvm_report_info__31__verbosity;
    __Vtask_uvm_report_info__31__verbosity = 0;
    std::string __Vtask_uvm_report_info__31__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__31__line;
    __Vtask_uvm_report_info__31__line = 0;
    std::string __Vtask_uvm_report_info__31__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__31__report_enabled_checked;
    __Vtask_uvm_report_info__31__report_enabled_checked = 0;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__32__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_root> __Vtask_get_root__33__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> foo;
    std::string msg;
    msg = "PARAMTYPEDTYPE 'T'"s;
    __Vtemp_1 = ((VlNull{} != accessor) ? ([&]() {
                VL_NULL_CHECK(accessor, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource_db.svh", 158)
                                           ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__25__Vfuncout);
            }(), __Vtask_get_full_name__25__Vfuncout)
                  : "<unknown>"s);
    __Vtemp_2 = ((VlNull{} == rsrc) ? "null (failed lookup)"s
                  : ([&]() {
                VL_NULL_CHECK(rsrc, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource_db.svh", 159)
                     ->__VnoInFunc_convert2string(vlProcess, vlSymsp, __Vtask_convert2string__26__Vfuncout);
            }(), __Vtask_convert2string__26__Vfuncout));
    VL_SFORMAT_NX(64,msg,"%@ scope='%@' name='%@' (type PARAMTYPEDTYPE 'T') %@ accessor=%@ = %@",0,
                  -1,&(rtype),-1,&(scope),-1,&(name),
                  -1,&(action),-1,&(__Vtemp_1),-1,&(__Vtemp_2));
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__27__id 
                        = id;
                    __Vfunc_uvm_report_enabled__27__severity = 0U;
                    __Vfunc_uvm_report_enabled__27__verbosity = 0x00000064U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__28__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__28__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__29__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__29__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__27__verbosity, (IData)(__Vfunc_uvm_report_enabled__27__severity), __Vfunc_uvm_report_enabled__27__id, __Vtask_uvm_report_enabled__30__Vfuncout);
                    __Vfunc_uvm_report_enabled__27__Vfuncout 
                        = __Vtask_uvm_report_enabled__30__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__27__Vfuncout))) {
        __Vtask_uvm_report_info__31__report_enabled_checked = 1U;
        __Vtask_uvm_report_info__31__context_name = ""s;
        __Vtask_uvm_report_info__31__line = 0x000000a1U;
        __Vtask_uvm_report_info__31__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource_db.svh"s;
        __Vtask_uvm_report_info__31__verbosity = 0x00000064U;
        __Vtask_uvm_report_info__31__message = msg;
        __Vtask_uvm_report_info__31__id = id;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__32__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
            = __Vfunc_get__32__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__33__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
            = __Vtask_get_root__33__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__31__id, __Vtask_uvm_report_info__31__message, __Vtask_uvm_report_info__31__verbosity, __Vtask_uvm_report_info__31__filename, __Vtask_uvm_report_info__31__line, __Vtask_uvm_report_info__31__context_name, (IData)(__Vtask_uvm_report_info__31__report_enabled_checked));
    }
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db___Vclpkg::__VnoInFunc_set(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> val, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> accessor) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db___Vclpkg::__VnoInFunc_set\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_pool> __Vfunc_get__35__Vfuncout;
    CData/*0:0*/ __Vfunc_is_tracing__39__Vfuncout;
    __Vfunc_is_tracing__39__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_pool> rp;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__35__Vfuncout);
    rp = __Vfunc_get__35__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz91> rsrc;
    rsrc = VL_NEW(Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz91, vlProcess, vlSymsp, name);
    VL_NULL_CHECK(rsrc, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource_db.svh", 171)->__VnoInFunc_write(vlSymsp, val, accessor);
    VL_NULL_CHECK(rp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource_db.svh", 172)->__VnoInFunc_set_scope(vlProcess, vlSymsp, rsrc, scope);
    if (([&]() {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db_options__Vclpkg.__VnoInFunc_is_tracing(vlSymsp, __Vfunc_is_tracing__39__Vfuncout);
            }(), (IData)(__Vfunc_is_tracing__39__Vfuncout))) {
        this->__VnoInFunc_m_show_msg(vlSymsp, "RSRCDB/SET"s, "Resource"s, "set"s, scope, name, accessor, rsrc);
    }
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db___Vclpkg::__VnoInFunc_set_anonymous(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> val, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> accessor) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db___Vclpkg::__VnoInFunc_set_anonymous\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_pool> __Vfunc_get__41__Vfuncout;
    CData/*0:0*/ __Vfunc_is_tracing__45__Vfuncout;
    __Vfunc_is_tracing__45__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_pool> rp;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__41__Vfuncout);
    rp = __Vfunc_get__41__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz91> rsrc;
    rsrc = VL_NEW(Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz91, vlProcess, vlSymsp, ""s);
    VL_NULL_CHECK(rsrc, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource_db.svh", 185)->__VnoInFunc_write(vlSymsp, val, accessor);
    VL_NULL_CHECK(rp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource_db.svh", 186)->__VnoInFunc_set_scope(vlProcess, vlSymsp, rsrc, scope);
    if (([&]() {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db_options__Vclpkg.__VnoInFunc_is_tracing(vlSymsp, __Vfunc_is_tracing__45__Vfuncout);
            }(), (IData)(__Vfunc_is_tracing__45__Vfuncout))) {
        this->__VnoInFunc_m_show_msg(vlSymsp, "RSRCDB/SETANON"s, "Resource"s, "set"s, scope, ""s, accessor, rsrc);
    }
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db___Vclpkg::__VnoInFunc_set_override(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> val, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> accessor) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db___Vclpkg::__VnoInFunc_set_override\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_pool> __Vfunc_get__47__Vfuncout;
    CData/*0:0*/ __Vfunc_is_tracing__51__Vfuncout;
    __Vfunc_is_tracing__51__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_pool> rp;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__47__Vfuncout);
    rp = __Vfunc_get__47__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz91> rsrc;
    rsrc = VL_NEW(Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz91, vlProcess, vlSymsp, name);
    VL_NULL_CHECK(rsrc, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource_db.svh", 204)->__VnoInFunc_write(vlSymsp, val, accessor);
    VL_NULL_CHECK(rp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource_db.svh", 205)->__VnoInFunc_set_override(vlSymsp, rsrc, scope);
    if (([&]() {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db_options__Vclpkg.__VnoInFunc_is_tracing(vlSymsp, __Vfunc_is_tracing__51__Vfuncout);
            }(), (IData)(__Vfunc_is_tracing__51__Vfuncout))) {
        this->__VnoInFunc_m_show_msg(vlSymsp, "RSRCDB/SETOVRD"s, "Resource"s, "set"s, scope, name, accessor, rsrc);
    }
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db___Vclpkg::__VnoInFunc_set_override_type(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> val, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> accessor) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db___Vclpkg::__VnoInFunc_set_override_type\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_pool> __Vfunc_get__53__Vfuncout;
    CData/*0:0*/ __Vfunc_is_tracing__57__Vfuncout;
    __Vfunc_is_tracing__57__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_pool> rp;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__53__Vfuncout);
    rp = __Vfunc_get__53__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz91> rsrc;
    rsrc = VL_NEW(Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz91, vlProcess, vlSymsp, name);
    VL_NULL_CHECK(rsrc, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource_db.svh", 226)->__VnoInFunc_write(vlSymsp, val, accessor);
    VL_NULL_CHECK(rp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource_db.svh", 227)->__VnoInFunc_set_type_override(vlSymsp, rsrc, scope);
    if (([&]() {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db_options__Vclpkg.__VnoInFunc_is_tracing(vlSymsp, __Vfunc_is_tracing__57__Vfuncout);
            }(), (IData)(__Vfunc_is_tracing__57__Vfuncout))) {
        this->__VnoInFunc_m_show_msg(vlSymsp, "RSRCDB/SETOVRDTYP"s, "Resource"s, "set"s, scope, name, accessor, rsrc);
    }
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db___Vclpkg::__VnoInFunc_set_override_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> val, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> accessor) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db___Vclpkg::__VnoInFunc_set_override_name\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_pool> __Vfunc_get__59__Vfuncout;
    CData/*0:0*/ __Vfunc_is_tracing__63__Vfuncout;
    __Vfunc_is_tracing__63__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_pool> rp;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__59__Vfuncout);
    rp = __Vfunc_get__59__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz91> rsrc;
    rsrc = VL_NEW(Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz91, vlProcess, vlSymsp, name);
    VL_NULL_CHECK(rsrc, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource_db.svh", 246)->__VnoInFunc_write(vlSymsp, val, accessor);
    VL_NULL_CHECK(rp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource_db.svh", 247)->__VnoInFunc_set_name_override(vlSymsp, rsrc, scope);
    if (([&]() {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db_options__Vclpkg.__VnoInFunc_is_tracing(vlSymsp, __Vfunc_is_tracing__63__Vfuncout);
            }(), (IData)(__Vfunc_is_tracing__63__Vfuncout))) {
        this->__VnoInFunc_m_show_msg(vlSymsp, "RSRCDB/SETOVRDNAM"s, "Resource"s, "set"s, scope, name, accessor, rsrc);
    }
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db___Vclpkg::__VnoInFunc_read_by_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> &val, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &read_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db___Vclpkg::__VnoInFunc_read_by_name\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz91> __Vfunc_get_by_name__65__Vfuncout;
    CData/*0:0*/ __Vfunc_is_tracing__66__Vfuncout;
    __Vfunc_is_tracing__66__Vfuncout = 0;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> __Vtask_read__68__Vfuncout;
    // Body
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz91> rsrc;
    {
        this->__VnoInFunc_get_by_name(vlSymsp, scope, name, 1U, __Vfunc_get_by_name__65__Vfuncout);
        rsrc = __Vfunc_get_by_name__65__Vfuncout;
        if (([&]() {
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db_options__Vclpkg.__VnoInFunc_is_tracing(vlSymsp, __Vfunc_is_tracing__66__Vfuncout);
                }(), (IData)(__Vfunc_is_tracing__66__Vfuncout))) {
            this->__VnoInFunc_m_show_msg(vlSymsp, "RSRCDB/RDBYNAM"s, "Resource"s, "read"s, scope, name, accessor, rsrc);
        }
        if ((VlNull{} == rsrc)) {
            read_by_name__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(rsrc, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource_db.svh", 287)->__VnoInFunc_read(vlSymsp, accessor, __Vtask_read__68__Vfuncout);
        val = __Vtask_read__68__Vfuncout;
        read_by_name__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db___Vclpkg::__VnoInFunc_read_by_type(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> &val, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &read_by_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db___Vclpkg::__VnoInFunc_read_by_type\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz91> __Vfunc_get_by_type__69__Vfuncout;
    CData/*0:0*/ __Vfunc_is_tracing__70__Vfuncout;
    __Vfunc_is_tracing__70__Vfuncout = 0;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> __Vtask_read__72__Vfuncout;
    // Body
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz91> rsrc;
    {
        this->__VnoInFunc_get_by_type(vlSymsp, scope, __Vfunc_get_by_type__69__Vfuncout);
        rsrc = __Vfunc_get_by_type__69__Vfuncout;
        if (([&]() {
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db_options__Vclpkg.__VnoInFunc_is_tracing(vlSymsp, __Vfunc_is_tracing__70__Vfuncout);
                }(), (IData)(__Vfunc_is_tracing__70__Vfuncout))) {
            this->__VnoInFunc_m_show_msg(vlSymsp, "RSRCDB/RDBYTYP"s, "Resource"s, "read"s, scope, ""s, accessor, rsrc);
        }
        if ((VlNull{} == rsrc)) {
            read_by_type__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(rsrc, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource_db.svh", 325)->__VnoInFunc_read(vlSymsp, accessor, __Vtask_read__72__Vfuncout);
        val = __Vtask_read__72__Vfuncout;
        read_by_type__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db___Vclpkg::__VnoInFunc_write_by_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> val, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &write_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db___Vclpkg::__VnoInFunc_write_by_name\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz91> __Vfunc_get_by_name__73__Vfuncout;
    CData/*0:0*/ __Vfunc_is_tracing__74__Vfuncout;
    __Vfunc_is_tracing__74__Vfuncout = 0;
    // Body
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz91> rsrc;
    {
        this->__VnoInFunc_get_by_name(vlSymsp, scope, name, 1U, __Vfunc_get_by_name__73__Vfuncout);
        rsrc = __Vfunc_get_by_name__73__Vfuncout;
        if (([&]() {
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db_options__Vclpkg.__VnoInFunc_is_tracing(vlSymsp, __Vfunc_is_tracing__74__Vfuncout);
                }(), (IData)(__Vfunc_is_tracing__74__Vfuncout))) {
            this->__VnoInFunc_m_show_msg(vlSymsp, "RSRCDB/WR"s, "Resource"s, "written"s, scope, name, accessor, rsrc);
        }
        if ((VlNull{} == rsrc)) {
            write_by_name__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(rsrc, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource_db.svh", 344)->__VnoInFunc_write(vlSymsp, val, accessor);
        write_by_name__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db___Vclpkg::__VnoInFunc_write_by_type(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> val, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &write_by_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db___Vclpkg::__VnoInFunc_write_by_type\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz91> __Vfunc_get_by_type__77__Vfuncout;
    CData/*0:0*/ __Vfunc_is_tracing__78__Vfuncout;
    __Vfunc_is_tracing__78__Vfuncout = 0;
    // Body
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz91> rsrc;
    {
        this->__VnoInFunc_get_by_type(vlSymsp, scope, __Vfunc_get_by_type__77__Vfuncout);
        rsrc = __Vfunc_get_by_type__77__Vfuncout;
        if (([&]() {
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db_options__Vclpkg.__VnoInFunc_is_tracing(vlSymsp, __Vfunc_is_tracing__78__Vfuncout);
                }(), (IData)(__Vfunc_is_tracing__78__Vfuncout))) {
            this->__VnoInFunc_m_show_msg(vlSymsp, "RSRCDB/WRTYP"s, "Resource"s, "written"s, scope, ""s, accessor, rsrc);
        }
        if ((VlNull{} == rsrc)) {
            write_by_type__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(rsrc, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource_db.svh", 363)->__VnoInFunc_write(vlSymsp, val, accessor);
        write_by_type__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db___Vclpkg::__VnoInFunc_dump(Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db___Vclpkg::__VnoInFunc_dump\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_pool> __Vfunc_get__81__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_pool> rp;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__81__Vfuncout);
    rp = __Vfunc_get__81__Vfuncout;
    VL_NULL_CHECK(rp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource_db.svh", 377)->__VnoInFunc_dump(vlSymsp, 0U, VlNull{});
}

Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db_::Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db_(Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db_::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db_::_ctor_var_reset(Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db_::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db_::~Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db_() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db_::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db_>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db_::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db_::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db_::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db_::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db_::to_string_middle\n"); );
    // Body
    std::string out;
    return (out);
}
