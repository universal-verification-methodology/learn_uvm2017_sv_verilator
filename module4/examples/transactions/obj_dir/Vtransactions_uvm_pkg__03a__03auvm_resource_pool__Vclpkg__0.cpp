// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransactions.h for the primary calling header

#include "Vtransactions__pch.h"

void Vtransactions_uvm_pkg__03a__03auvm_resource_pool__Vclpkg::__VnoInFunc_get(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_pool> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtransactions_uvm_pkg__03a__03auvm_resource_pool__Vclpkg::__VnoInFunc_get\n"); );
    // Locals
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__0__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_pool> __Vtask_get_resource_pool__1__Vfuncout;
    // Body
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_pool> t_rp;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> cs;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__0__Vfuncout);
    cs = __Vfunc_get__0__Vfuncout;
    VL_NULL_CHECK(cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 142)->__VnoInFunc_get_resource_pool(vlSymsp, __Vtask_get_resource_pool__1__Vfuncout);
    t_rp = __Vtask_get_resource_pool__1__Vfuncout;
    get__Vfuncrtn = t_rp;
}

void Vtransactions_uvm_pkg__03a__03auvm_resource_pool__Vclpkg::__VnoInFunc_get_highest_precedence(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_queue__Tz22> &q, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> &get_highest_precedence__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtransactions_uvm_pkg__03a__03auvm_resource_pool__Vclpkg::__VnoInFunc_get_highest_precedence\n"); );
    // Locals
    IData/*31:0*/ __Vtask_size__2__Vfuncout;
    __Vtask_size__2__Vfuncout = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> __Vtask_get__3__Vfuncout;
    IData/*31:0*/ __Vtask_size__4__Vfuncout;
    __Vtask_size__4__Vfuncout = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> __Vtask_get__5__Vfuncout;
    // Body
    IData/*31:0*/ unnamedblk6__DOT__i;
    unnamedblk6__DOT__i = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> rsrc;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> r;
    IData/*31:0*/ i;
    i = 0;
    IData/*31:0*/ prec;
    prec = 0;
    IData/*31:0*/ c_prec;
    c_prec = 0;
    {
        if ((0U == ([&]() {
                        VL_NULL_CHECK(q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 519)
                    ->__VnoInFunc_size(vlSymsp, __Vtask_size__2__Vfuncout);
                    }(), __Vtask_size__2__Vfuncout))) {
            get_highest_precedence__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        VL_NULL_CHECK(q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 523)->__VnoInFunc_get(vlProcess, vlSymsp, 0U, __Vtask_get__3__Vfuncout);
        rsrc = __Vtask_get__3__Vfuncout;
        prec = (this->__PVT__ri_tab.exists(rsrc) ? this->__PVT__ri_tab
                .at(rsrc).__PVT__precedence : 0U);
        unnamedblk6__DOT__i = 1U;
        while (VL_LTS_III(32, unnamedblk6__DOT__i, 
                          ([&]() {
                        VL_NULL_CHECK(q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 527)
                           ->__VnoInFunc_size(vlSymsp, __Vtask_size__4__Vfuncout);
                    }(), __Vtask_size__4__Vfuncout))) {
            VL_NULL_CHECK(q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 528)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk6__DOT__i, __Vtask_get__5__Vfuncout);
            r = __Vtask_get__5__Vfuncout;
            c_prec = (this->__PVT__ri_tab.exists(r)
                       ? this->__PVT__ri_tab.at(r).__PVT__precedence
                       : 0U);
            if ((c_prec > prec)) {
                rsrc = r;
                prec = c_prec;
            }
            unnamedblk6__DOT__i = ((IData)(1U) + unnamedblk6__DOT__i);
        }
        get_highest_precedence__Vfuncrtn = rsrc;
        __Vlabel0: ;
    }
}

void Vtransactions_uvm_pkg__03a__03auvm_resource_pool__Vclpkg::__VnoInFunc_sort_by_precedence(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_queue__Tz22> &q) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtransactions_uvm_pkg__03a__03auvm_resource_pool__Vclpkg::__VnoInFunc_sort_by_precedence\n"); );
    // Locals
    IData/*31:0*/ __Vtask_size__6__Vfuncout;
    __Vtask_size__6__Vfuncout = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> __Vtask_get__7__Vfuncout;
    IData/*31:0*/ __Vtask_size__11__Vfuncout;
    __Vtask_size__11__Vfuncout = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> __Vtask_get__12__Vfuncout;
    // Body
    IData/*31:0*/ unnamedblk7__DOT__i;
    unnamedblk7__DOT__i = 0;
    IData/*31:0*/ unnamedblk8__DOT__i;
    unnamedblk8__DOT__i = 0;
    CData/*0:0*/ unnamedblk8__DOT__i__Vfirst;
    unnamedblk8__DOT__i__Vfirst = 0;
    IData/*31:0*/ unnamedblk8__DOT__unnamedblk9__DOT__j;
    unnamedblk8__DOT__unnamedblk9__DOT__j = 0;
    VlAssocArray<IData/*31:0*/, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_queue__Tz22>> all;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> r;
    IData/*31:0*/ prec;
    prec = 0;
    unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk7__DOT__i, ([&]() {
                    VL_NULL_CHECK(q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 554)
                                                ->__VnoInFunc_size(vlSymsp, __Vtask_size__6__Vfuncout);
                }(), __Vtask_size__6__Vfuncout))) {
        VL_NULL_CHECK(q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 555)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk7__DOT__i, __Vtask_get__7__Vfuncout);
        r = __Vtask_get__7__Vfuncout;
        prec = (this->__PVT__ri_tab.exists(r) ? this->__PVT__ri_tab
                .at(r).__PVT__precedence : 0U);
        if ((! all.exists(prec))) {
            all.at(prec) = VL_NEW(Vtransactions_uvm_pkg__03a__03auvm_queue__Tz22, vlProcess, vlSymsp, ""s);
        }
        VL_NULL_CHECK(all.at(prec), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 559)->__VnoInFunc_push_front(vlSymsp, r);
        unnamedblk7__DOT__i = ((IData)(1U) + unnamedblk7__DOT__i);
    }
    VL_NULL_CHECK(q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 561)->__VnoInFunc_delete(vlProcess, vlSymsp, 0xffffffffU);
    if ((0U != all.first(unnamedblk8__DOT__i))) {
        unnamedblk8__DOT__i__Vfirst = 1U;
        while (((IData)(unnamedblk8__DOT__i__Vfirst) 
                || (0U != all.next(unnamedblk8__DOT__i)))) {
            unnamedblk8__DOT__i__Vfirst = 0U;
            unnamedblk8__DOT__unnamedblk9__DOT__j = 0U;
            while (VL_LTS_III(32, unnamedblk8__DOT__unnamedblk9__DOT__j, 
                              ([&]() {
                            VL_NULL_CHECK(all.at(unnamedblk8__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 563)
                               ->__VnoInFunc_size(vlSymsp, __Vtask_size__11__Vfuncout);
                        }(), __Vtask_size__11__Vfuncout))) {
                VL_NULL_CHECK(all.at(unnamedblk8__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 564)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk8__DOT__unnamedblk9__DOT__j, __Vtask_get__12__Vfuncout);
                r = __Vtask_get__12__Vfuncout;
                VL_NULL_CHECK(q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 565)->__VnoInFunc_push_front(vlSymsp, r);
                unnamedblk8__DOT__unnamedblk9__DOT__j 
                    = ((IData)(1U) + unnamedblk8__DOT__unnamedblk9__DOT__j);
            }
        }
    }
}

void Vtransactions_uvm_pkg__03a__03auvm_resource_pool__Vclpkg::__VnoInFunc_set_default_precedence(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ precedence) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtransactions_uvm_pkg__03a__03auvm_resource_pool__Vclpkg::__VnoInFunc_set_default_precedence\n"); );
    // Locals
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__14__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> cs;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__14__Vfuncout);
    cs = __Vfunc_get__14__Vfuncout;
    VL_NULL_CHECK(cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 872)->__VnoInFunc_set_resource_pool_default_precedence(vlSymsp, precedence);
}

void Vtransactions_uvm_pkg__03a__03auvm_resource_pool__Vclpkg::__VnoInFunc_get_default_precedence(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &get_default_precedence__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtransactions_uvm_pkg__03a__03auvm_resource_pool__Vclpkg::__VnoInFunc_get_default_precedence\n"); );
    // Locals
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__16__Vfuncout;
    IData/*31:0*/ __Vtask_get_resource_pool_default_precedence__17__Vfuncout;
    __Vtask_get_resource_pool_default_precedence__17__Vfuncout = 0;
    // Body
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> cs;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__16__Vfuncout);
    cs = __Vfunc_get__16__Vfuncout;
    VL_NULL_CHECK(cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 878)->__VnoInFunc_get_resource_pool_default_precedence(vlSymsp, __Vtask_get_resource_pool_default_precedence__17__Vfuncout);
    get_default_precedence__Vfuncrtn = __Vtask_get_resource_pool_default_precedence__17__Vfuncout;
}

std::string VL_TO_STRING(const Vtransactions_rsrc_info_t__struct__0& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtransactions_uvm_pkg__03a__03auvm_resource_pool__Vclpkg::VL_TO_STRING\n"); );
    // Body
    std::string out;
    out += "'{scope:" + VL_TO_STRING(obj.__PVT__scope);
    out += ", precedence:" + VL_TO_STRING(obj.__PVT__precedence);
    out += "}";
    return (out);
}

Vtransactions_uvm_pkg__03a__03auvm_resource_pool::Vtransactions_uvm_pkg__03a__03auvm_resource_pool(Vtransactions__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_resource_pool::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vtransactions_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_spell_check(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string s, CData/*0:0*/ &spell_check__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_spell_check\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_check__0__Vfuncout;
    __Vfunc_check__0__Vfuncout = 0;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_spell_chkr__Tz55__Vclpkg.__VnoInFunc_check(vlProcess, vlSymsp, this->__PVT__rtab, s, __Vfunc_check__0__Vfuncout);
    spell_check__Vfuncrtn = __Vfunc_check__0__Vfuncout;
}

void Vtransactions_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_scope(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> rsrc, std::string scope) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_scope\n"); );
    // Locals
    std::string __Vtask_uvm_report_warning__1__id;
    std::string __Vtask_uvm_report_warning__1__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__1__verbosity;
    __Vtask_uvm_report_warning__1__verbosity = 0;
    std::string __Vtask_uvm_report_warning__1__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__1__line;
    __Vtask_uvm_report_warning__1__line = 0;
    std::string __Vtask_uvm_report_warning__1__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__1__report_enabled_checked;
    __Vtask_uvm_report_warning__1__report_enabled_checked = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__2__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__3__Vfuncout;
    std::string __Vtask_get_name__5__Vfuncout;
    IData/*31:0*/ __Vtask_size__6__Vfuncout;
    __Vtask_size__6__Vfuncout = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> __Vtask_get__7__Vfuncout;
    std::string __Vfunc_uvm_glob_to_re__8__Vfuncout;
    std::string __Vfunc_uvm_glob_to_re__8__glob;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> __Vtask_get_type_handle__11__Vfuncout;
    std::string __Vfunc_uvm_glob_to_re__14__Vfuncout;
    std::string __Vfunc_uvm_glob_to_re__14__glob;
    IData/*31:0*/ __Vfunc_get_default_precedence__15__Vfuncout;
    __Vfunc_get_default_precedence__15__Vfuncout = 0;
    // Body
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_queue__Tz22> rq;
    std::string name;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> type_handle;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> r;
    IData/*31:0*/ i;
    i = 0;
    {
        if ((VlNull{} == rsrc)) {
            __Vtask_uvm_report_warning__1__report_enabled_checked = 0U;
            __Vtask_uvm_report_warning__1__context_name = ""s;
            __Vtask_uvm_report_warning__1__line = 0U;
            __Vtask_uvm_report_warning__1__filename = ""s;
            __Vtask_uvm_report_warning__1__verbosity = 0x000000c8U;
            __Vtask_uvm_report_warning__1__message = "attempting to set scope of a null resource"s;
            __Vtask_uvm_report_warning__1__id = "NULLRASRC"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__2__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__2__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__3__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__3__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__1__id, __Vtask_uvm_report_warning__1__message, __Vtask_uvm_report_warning__1__verbosity, __Vtask_uvm_report_warning__1__filename, __Vtask_uvm_report_warning__1__line, __Vtask_uvm_report_warning__1__context_name, (IData)(__Vtask_uvm_report_warning__1__report_enabled_checked));
            goto __Vlabel0;
        }
        VL_NULL_CHECK(rsrc, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 210)->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__5__Vfuncout);
        name = __Vtask_get_name__5__Vfuncout;
        if (((""s != name) && this->__PVT__rtab.exists(name))) {
            rq = this->__PVT__rtab.at(name);
            i = 0U;
            while ((i < ([&]() {
                            VL_NULL_CHECK(rq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 214)
                         ->__VnoInFunc_size(vlSymsp, __Vtask_size__6__Vfuncout);
                        }(), __Vtask_size__6__Vfuncout))) {
                VL_NULL_CHECK(rq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 215)->__VnoInFunc_get(vlProcess, vlSymsp, i, __Vtask_get__7__Vfuncout);
                r = __Vtask_get__7__Vfuncout;
                if ((r == rsrc)) {
                    __Vfunc_uvm_glob_to_re__8__glob 
                        = scope;
                    __Vfunc_uvm_glob_to_re__8__Vfuncout 
                        = __Vfunc_uvm_glob_to_re__8__glob;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__ri_tab.at(rsrc).__PVT__scope 
                        = __Vfunc_uvm_glob_to_re__8__Vfuncout;
                    goto __Vlabel0;
                }
                i = ((IData)(1U) + i);
            }
        }
        if ((VlNull{} == rq)) {
            rq = VL_NEW(Vtransactions_uvm_pkg__03a__03auvm_queue__Tz22, vlProcess, vlSymsp, name);
        }
        VL_NULL_CHECK(rq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 228)->__VnoInFunc_push_back(vlSymsp, rsrc);
        this->__PVT__rtab.at(name) = rq;
        VL_NULL_CHECK(rsrc, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 233)->__VnoInFunc_get_type_handle(vlProcess, vlSymsp, __Vtask_get_type_handle__11__Vfuncout);
        type_handle = __Vtask_get_type_handle__11__Vfuncout;
        if (this->__PVT__ttab.exists(type_handle)) {
            rq = this->__PVT__ttab.at(type_handle);
        } else {
            rq = VL_NEW(Vtransactions_uvm_pkg__03a__03auvm_queue__Tz22, vlProcess, vlSymsp, ""s);
        }
        VL_NULL_CHECK(rq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 241)->__VnoInFunc_push_back(vlSymsp, rsrc);
        this->__PVT__ttab.at(type_handle) = rq;
        __Vfunc_uvm_glob_to_re__14__glob = scope;
        __Vfunc_uvm_glob_to_re__14__Vfuncout = __Vfunc_uvm_glob_to_re__14__glob;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__ri_tab.at(rsrc).__PVT__scope 
            = __Vfunc_uvm_glob_to_re__14__Vfuncout;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get_default_precedence(vlProcess, vlSymsp, __Vfunc_get_default_precedence__15__Vfuncout);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__ri_tab.at(rsrc).__PVT__precedence 
            = __Vfunc_get_default_precedence__15__Vfuncout;
        __Vlabel0: ;
    }
}

void Vtransactions_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_override(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> rsrc, std::string scope) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_override\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string s;
    s = scope;
    this->__VnoInFunc_set_scope(vlProcess, vlSymsp, rsrc, s);
    this->__VnoInFunc_set_priority(vlSymsp, rsrc, 0U);
}

void Vtransactions_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_name_override(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> rsrc, std::string scope) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_name_override\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string s;
    s = scope;
    this->__VnoInFunc_set_scope(vlProcess, vlSymsp, rsrc, s);
    this->__VnoInFunc_set_priority_name(vlProcess, vlSymsp, rsrc, 0U);
}

void Vtransactions_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_type_override(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> rsrc, std::string scope) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_type_override\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string s;
    s = scope;
    this->__VnoInFunc_set_scope(vlProcess, vlSymsp, rsrc, s);
    this->__VnoInFunc_set_priority_type(vlSymsp, rsrc, 0U);
}

void Vtransactions_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_get_scope(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> rsrc, std::string &scope, CData/*0:0*/ &get_scope__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_get_scope\n"); );
    // Locals
    std::string __Vtask_get_name__22__Vfuncout;
    IData/*31:0*/ __Vtask_size__23__Vfuncout;
    __Vtask_size__23__Vfuncout = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> __Vtask_get__24__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_queue__Tz22> rq;
    std::string name;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> r;
    IData/*31:0*/ i;
    i = 0;
    {
        if ((VlNull{} == rsrc)) {
            get_scope__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(rsrc, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 320)->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__22__Vfuncout);
        name = __Vtask_get_name__22__Vfuncout;
        if (((""s != name) && this->__PVT__rtab.exists(name))) {
            rq = this->__PVT__rtab.at(name);
            i = 0U;
            while ((i < ([&]() {
                            VL_NULL_CHECK(rq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 324)
                         ->__VnoInFunc_size(vlSymsp, __Vtask_size__23__Vfuncout);
                        }(), __Vtask_size__23__Vfuncout))) {
                VL_NULL_CHECK(rq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 325)->__VnoInFunc_get(vlProcess, vlSymsp, i, __Vtask_get__24__Vfuncout);
                r = __Vtask_get__24__Vfuncout;
                if ((r == rsrc)) {
                    scope = vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__ri_tab
                        .at(rsrc).__PVT__scope;
                    get_scope__Vfuncrtn = 1U;
                    goto __Vlabel0;
                }
                i = ((IData)(1U) + i);
            }
        }
        scope = ""s;
        get_scope__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void Vtransactions_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_delete(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> rsrc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_delete\n"); );
    // Locals
    std::string __Vtask_get_name__25__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> __Vtask_get_type_handle__26__Vfuncout;
    IData/*31:0*/ __Vtask_size__27__Vfuncout;
    __Vtask_size__27__Vfuncout = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> __Vtask_get__28__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ unnamedblk1__DOT__q_size;
    unnamedblk1__DOT__q_size = 0;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__i;
    unnamedblk1__DOT__unnamedblk2__DOT__i = 0;
    std::string name;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> type_handle;
    if ((VlNull{} != rsrc)) {
        VL_NULL_CHECK(rsrc, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 352)->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__25__Vfuncout);
        name = __Vtask_get_name__25__Vfuncout;
        if ((""s != name)) {
            if (this->__PVT__rtab.exists(name)) {
                this->__PVT__rtab.erase(name);
            }
        }
        VL_NULL_CHECK(rsrc, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 358)->__VnoInFunc_get_type_handle(vlProcess, vlSymsp, __Vtask_get_type_handle__26__Vfuncout);
        type_handle = __Vtask_get_type_handle__26__Vfuncout;
        if (this->__PVT__ttab.exists(type_handle)) {
            VL_NULL_CHECK(this->__PVT__ttab.at(type_handle), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 360)->__VnoInFunc_size(vlSymsp, __Vtask_size__27__Vfuncout);
            unnamedblk1__DOT__q_size = __Vtask_size__27__Vfuncout;
            if ((1U == unnamedblk1__DOT__q_size)) {
                this->__PVT__ttab.erase(type_handle);
            } else {
                unnamedblk1__DOT__unnamedblk2__DOT__i = 0U;
                {
                    while (VL_LTS_III(32, unnamedblk1__DOT__unnamedblk2__DOT__i, unnamedblk1__DOT__q_size)) {
                        if ((([&]() {
                                        VL_NULL_CHECK(this->__PVT__ttab
                                                      .at(type_handle), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 367)
                              ->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk1__DOT__unnamedblk2__DOT__i, __Vtask_get__28__Vfuncout);
                                    }(), __Vtask_get__28__Vfuncout) 
                             == rsrc)) {
                            VL_NULL_CHECK(this->__PVT__ttab
                                          .at(type_handle), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 368)->__VnoInFunc_delete(vlProcess, vlSymsp, unnamedblk1__DOT__unnamedblk2__DOT__i);
                            goto __Vlabel0;
                        }
                        unnamedblk1__DOT__unnamedblk2__DOT__i 
                            = ((IData)(1U) + unnamedblk1__DOT__unnamedblk2__DOT__i);
                    }
                    __Vlabel0: ;
                }
            }
        }
        if (vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__ri_tab.exists(rsrc)) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__ri_tab.erase(rsrc);
        }
    }
}

void Vtransactions_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_push_get_record(Vtransactions__Syms* __restrict vlSymsp, std::string name, std::string scope, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> rsrc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_push_get_record\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_is_auditing__30__Vfuncout;
    __Vfunc_is_auditing__30__Vfuncout = 0;
    // Body
    VlClassRef<Vtransactions_uvm_pkg__03a__03aget_t> impt;
    {
        if ((1U & (~ ([&]() {
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_options__Vclpkg.__VnoInFunc_is_auditing(vlSymsp, __Vfunc_is_auditing__30__Vfuncout);
                        }(), (IData)(__Vfunc_is_auditing__30__Vfuncout))))) {
            goto __Vlabel0;
        }
        impt = VL_NEW(Vtransactions_uvm_pkg__03a__03aget_t, vlSymsp);
        VL_NULL_CHECK(impt, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 396)->__PVT__name 
            = name;
        VL_NULL_CHECK(impt, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 397)->__PVT__scope 
            = scope;
        VL_NULL_CHECK(impt, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 398)->__PVT__rsrc 
            = rsrc;
        VL_NULL_CHECK(impt, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 399)->__PVT__t 
            = VL_RTOIROUND_Q_D(VL_TIME_UNITED_D(1));
        this->__PVT__get_record.push_back(impt);
        __Vlabel0: ;
    }
}

void Vtransactions_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_dump_get_records(Vtransactions__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_dump_get_records\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__32__Vfuncout;
    __Vfunc_uvm_report_enabled__32__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__32__verbosity;
    __Vfunc_uvm_report_enabled__32__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__32__severity;
    __Vfunc_uvm_report_enabled__32__severity = 0;
    std::string __Vfunc_uvm_report_enabled__32__id;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__33__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__34__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__35__Vfuncout;
    __Vtask_uvm_report_enabled__35__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__36__id;
    std::string __Vtask_uvm_report_info__36__message;
    IData/*31:0*/ __Vtask_uvm_report_info__36__verbosity;
    __Vtask_uvm_report_info__36__verbosity = 0;
    std::string __Vtask_uvm_report_info__36__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__36__line;
    __Vtask_uvm_report_info__36__line = 0;
    std::string __Vtask_uvm_report_info__36__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__36__report_enabled_checked;
    __Vtask_uvm_report_info__36__report_enabled_checked = 0;
    std::string __Vfunc_m_uvm_string_queue_join__37__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__38__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__39__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ unnamedblk3__DOT__i;
    unnamedblk3__DOT__i = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03aget_t> record;
    CData/*0:0*/ success;
    success = 0;
    VlQueue<std::string> qs;
    qs.push_back("--- resource get records ---\n"s);
    unnamedblk3__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk3__DOT__i, this->__PVT__get_record.size())) {
        record = this->__PVT__get_record.at(unnamedblk3__DOT__i);
        success = (VlNull{} != VL_NULL_CHECK(record, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 417)
                   ->__PVT__rsrc);
        __Vtemp_1 = VL_NULL_CHECK(record, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 419)
            ->__PVT__name;
        __Vtemp_2 = VL_NULL_CHECK(record, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 419)
            ->__PVT__scope;
        qs.push_back(VL_SFORMATF_N_NX("get: name=%@  scope=%@  %s @ %0t\n",0,
                                      -1,&(__Vtemp_1),
                                      -1,&(__Vtemp_2),
                                      56,((IData)(success)
                                           ? 0x0073756363657373ULL
                                           : 0x000000006661696cULL),
                                      64,VL_NULL_CHECK(record, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 421)
                                      ->__PVT__t,-12) );
        unnamedblk3__DOT__i = ((IData)(1U) + unnamedblk3__DOT__i);
    }
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__32__id = "UVM/RESOURCE/GETRECORD"s;
                    __Vfunc_uvm_report_enabled__32__severity = 0U;
                    __Vfunc_uvm_report_enabled__32__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__33__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__33__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__34__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__34__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__32__verbosity, (IData)(__Vfunc_uvm_report_enabled__32__severity), __Vfunc_uvm_report_enabled__32__id, __Vtask_uvm_report_enabled__35__Vfuncout);
                    __Vfunc_uvm_report_enabled__32__Vfuncout 
                        = __Vtask_uvm_report_enabled__35__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__32__Vfuncout))) {
        __Vtask_uvm_report_info__36__report_enabled_checked = 1U;
        __Vtask_uvm_report_info__36__context_name = ""s;
        __Vtask_uvm_report_info__36__line = 0x000001a7U;
        __Vtask_uvm_report_info__36__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh"s;
        __Vtask_uvm_report_info__36__verbosity = 0U;
        __Vtask_uvm_report_info__36__message = VL_CVT_PACK_STR_NN(
                                                                  ([&]() {
                    __Vfunc_m_uvm_string_queue_join__37__Vfuncout 
                        = VL_CVT_PACK_STR_ND(qs);
                }(), __Vfunc_m_uvm_string_queue_join__37__Vfuncout));
        __Vtask_uvm_report_info__36__id = "UVM/RESOURCE/GETRECORD"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__38__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
            = __Vfunc_get__38__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__39__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
            = __Vtask_get_root__39__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__36__id, __Vtask_uvm_report_info__36__message, __Vtask_uvm_report_info__36__verbosity, __Vtask_uvm_report_info__36__filename, __Vtask_uvm_report_info__36__line, __Vtask_uvm_report_info__36__context_name, (IData)(__Vtask_uvm_report_info__36__report_enabled_checked));
    }
}

void Vtransactions_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_lookup_name(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> type_handle, CData/*0:0*/ rpterr, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_queue__Tz22> &lookup_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_lookup_name\n"); );
    // Locals
    VlClassRef<Vtransactions_std__03a__03aprocess> __Vfunc_self__41__Vfuncout;
    std::string __Vtask_get_randstate__42__Vfuncout;
    CData/*0:0*/ __Vtask_spell_check__45__Vfuncout;
    __Vtask_spell_check__45__Vfuncout = 0;
    IData/*31:0*/ __Vtask_size__46__Vfuncout;
    __Vtask_size__46__Vfuncout = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> __Vtask_get__47__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> __Vtask_get_type_handle__48__Vfuncout;
    CData/*0:0*/ __Vfunc_uvm_is_match__49__Vfuncout;
    __Vfunc_uvm_is_match__49__Vfuncout = 0;
    std::string __Vfunc_uvm_is_match__49__expr;
    std::string __Vfunc_uvm_is_match__49__str;
    std::string __Vfunc_uvm_glob_to_re__50__Vfuncout;
    std::string __Vfunc_uvm_glob_to_re__50__glob;
    IData/*31:0*/ __Vfunc_uvm_re_match__51__Vfuncout;
    __Vfunc_uvm_re_match__51__Vfuncout = 0;
    std::string __Vfunc_uvm_re_match__51__re;
    std::string __Vfunc_uvm_re_match__51__str;
    IData/*31:0*/ __Vfunc_uvm_re_match__51____Vincrement1;
    __Vfunc_uvm_re_match__51____Vincrement1 = 0;
    // Body
    VlClassRef<Vtransactions_std__03a__03aprocess> unnamedblk4__DOT__p;
    std::string unnamedblk4__DOT__s;
    IData/*31:0*/ unnamedblk5__DOT__i;
    unnamedblk5__DOT__i = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_queue__Tz22> rq;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_queue__Tz22> q;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> rsrc;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> r;
    std::string rsrcs;
    {
        vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __Vfunc_self__41__Vfuncout);
        unnamedblk4__DOT__p = __Vfunc_self__41__Vfuncout;
        if ((VlNull{} != unnamedblk4__DOT__p)) {
            VL_NULL_CHECK(unnamedblk4__DOT__p, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 470)->__VnoInFunc_get_randstate(vlSymsp, __Vtask_get_randstate__42__Vfuncout);
            unnamedblk4__DOT__s = __Vtask_get_randstate__42__Vfuncout;
        }
        q = VL_NEW(Vtransactions_uvm_pkg__03a__03auvm_queue__Tz22, vlProcess, vlSymsp, ""s);
        if ((VlNull{} != unnamedblk4__DOT__p)) {
            VL_NULL_CHECK(unnamedblk4__DOT__p, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 472)->__VnoInFunc_set_randstate(vlSymsp, unnamedblk4__DOT__s);
        }
        if ((""s == name)) {
            lookup_name__Vfuncrtn = q;
            goto __Vlabel0;
        }
        if ((! this->__PVT__rtab.exists(name))) {
            if (rpterr) {
                this->__VnoInFunc_spell_check(vlProcess, vlSymsp, name, __Vtask_spell_check__45__Vfuncout);
            }
            lookup_name__Vfuncrtn = q;
            goto __Vlabel0;
        }
        rsrc = VlNull{};
        rq = this->__PVT__rtab.at(name);
        unnamedblk5__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk5__DOT__i, 
                          ([&]() {
                        VL_NULL_CHECK(rq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 489)
                           ->__VnoInFunc_size(vlSymsp, __Vtask_size__46__Vfuncout);
                    }(), __Vtask_size__46__Vfuncout))) {
            VL_NULL_CHECK(rq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 490)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk5__DOT__i, __Vtask_get__47__Vfuncout);
            r = __Vtask_get__47__Vfuncout;
            rsrcs = (vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__ri_tab.exists(r)
                      ? vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__ri_tab
                     .at(r).__PVT__scope : ""s);
            if ((((VlNull{} == type_handle) || (([&]() {
                                    VL_NULL_CHECK(r, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 493)
                                                 ->__VnoInFunc_get_type_handle(vlProcess, vlSymsp, __Vtask_get_type_handle__48__Vfuncout);
                                }(), __Vtask_get_type_handle__48__Vfuncout) 
                                                == type_handle)) 
                 && ([&]() {
                            __Vfunc_uvm_is_match__49__str 
                                = scope;
                            __Vfunc_uvm_is_match__49__expr 
                                = rsrcs;
                            __Vfunc_uvm_glob_to_re__50__glob 
                                = __Vfunc_uvm_is_match__49__expr;
                            __Vfunc_uvm_glob_to_re__50__Vfuncout 
                                = __Vfunc_uvm_glob_to_re__50__glob;
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
                                = __Vfunc_uvm_glob_to_re__50__Vfuncout;
                            __Vfunc_uvm_is_match__49__Vfuncout 
                                = (0U == ([&]() {
                                        __Vfunc_uvm_re_match__51__str 
                                            = __Vfunc_uvm_is_match__49__str;
                                        __Vfunc_uvm_re_match__51__re 
                                            = vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s;
                                        {
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                                            if ((0U 
                                                 == 
                                                 VL_LEN_IN(__Vfunc_uvm_re_match__51__re))) {
                                                __Vfunc_uvm_re_match__51__Vfuncout = 0U;
                                                goto __Vlabel1;
                                            }
                                            if ((0x5eU 
                                                 == 
                                                 VL_GETC_N(__Vfunc_uvm_re_match__51__re,0U))) {
                                                __Vfunc_uvm_re_match__51__re 
                                                    = 
                                                    VL_SUBSTR_N(__Vfunc_uvm_re_match__51__re,1U,
                                                                (VL_LEN_IN(__Vfunc_uvm_re_match__51__re) 
                                                                 - (IData)(1U)));
                                            }
                                            while (
                                                   ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                     != 
                                                     VL_LEN_IN(__Vfunc_uvm_re_match__51__str)) 
                                                    & (0x2aU 
                                                       != 
                                                       VL_GETC_N(__Vfunc_uvm_re_match__51__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                                if (
                                                    ((VL_GETC_N(__Vfunc_uvm_re_match__51__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                                      != 
                                                      VL_GETC_N(__Vfunc_uvm_re_match__51__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                                     & (0x3fU 
                                                        != 
                                                        VL_GETC_N(__Vfunc_uvm_re_match__51__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                                    __Vfunc_uvm_re_match__51__Vfuncout = 1U;
                                                    goto __Vlabel1;
                                                }
                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                            }
                                            while (
                                                   (vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                    != 
                                                    VL_LEN_IN(__Vfunc_uvm_re_match__51__str))) {
                                                if (
                                                    (0x2aU 
                                                     == 
                                                     VL_GETC_N(__Vfunc_uvm_re_match__51__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                        = 
                                                        ((IData)(1U) 
                                                         + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                                    if (
                                                        (vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                         == 
                                                         VL_LEN_IN(__Vfunc_uvm_re_match__51__re))) {
                                                        __Vfunc_uvm_re_match__51__Vfuncout = 0U;
                                                        goto __Vlabel1;
                                                    }
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                                                        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                                        = 
                                                        ((IData)(1U) 
                                                         + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                                } else if (
                                                           ((VL_GETC_N(__Vfunc_uvm_re_match__51__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                                             == 
                                                             VL_GETC_N(__Vfunc_uvm_re_match__51__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                                            | (0x3fU 
                                                               == 
                                                               VL_GETC_N(__Vfunc_uvm_re_match__51__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                        = 
                                                        ((IData)(1U) 
                                                         + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                        = 
                                                        ((IData)(1U) 
                                                         + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                                } else {
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                                                    __Vfunc_uvm_re_match__51____Vincrement1 
                                                        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                                        = 
                                                        ((IData)(1U) 
                                                         + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                        = __Vfunc_uvm_re_match__51____Vincrement1;
                                                }
                                            }
                                            while (
                                                   (VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                                               VL_LEN_IN(__Vfunc_uvm_re_match__51__re)) 
                                                    & (0x2aU 
                                                       == 
                                                       VL_GETC_N(__Vfunc_uvm_re_match__51__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                            }
                                            __Vfunc_uvm_re_match__51__Vfuncout 
                                                = (
                                                   (vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                    == 
                                                    VL_LEN_IN(__Vfunc_uvm_re_match__51__re))
                                                    ? 0U
                                                    : 1U);
                                            __Vlabel1: ;
                                        }
                                    }(), __Vfunc_uvm_re_match__51__Vfuncout));
                        }(), (IData)(__Vfunc_uvm_is_match__49__Vfuncout)))) {
                VL_NULL_CHECK(q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 495)->__VnoInFunc_push_back(vlSymsp, r);
            }
            unnamedblk5__DOT__i = ((IData)(1U) + unnamedblk5__DOT__i);
        }
        lookup_name__Vfuncrtn = q;
        __Vlabel0: ;
    }
}

void Vtransactions_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_get_by_name(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> type_handle, CData/*0:0*/ rpterr, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> &get_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_get_by_name\n"); );
    // Locals
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_queue__Tz22> __Vfunc_lookup_name__53__Vfuncout;
    IData/*31:0*/ __Vtask_size__54__Vfuncout;
    __Vtask_size__54__Vfuncout = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> __Vfunc_get_highest_precedence__56__Vfuncout;
    // Body
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_queue__Tz22> q;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> rsrc;
    {
        this->__VnoInFunc_lookup_name(vlProcess, vlSymsp, scope, name, type_handle, rpterr, __Vfunc_lookup_name__53__Vfuncout);
        q = __Vfunc_lookup_name__53__Vfuncout;
        if ((0U == ([&]() {
                        VL_NULL_CHECK(q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 591)
                    ->__VnoInFunc_size(vlSymsp, __Vtask_size__54__Vfuncout);
                    }(), __Vtask_size__54__Vfuncout))) {
            this->__VnoInFunc_push_get_record(vlSymsp, name, scope, VlNull{});
            get_by_name__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get_highest_precedence(vlProcess, vlSymsp, q, __Vfunc_get_highest_precedence__56__Vfuncout);
        rsrc = __Vfunc_get_highest_precedence__56__Vfuncout;
        this->__VnoInFunc_push_get_record(vlSymsp, name, scope, rsrc);
        get_by_name__Vfuncrtn = rsrc;
        __Vlabel0: ;
    }
}

void Vtransactions_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_lookup_type(Vtransactions__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> type_handle, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_queue__Tz22> &lookup_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_lookup_type\n"); );
    // Locals
    IData/*31:0*/ __Vtask_size__59__Vfuncout;
    __Vtask_size__59__Vfuncout = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> __Vtask_get__60__Vfuncout;
    CData/*0:0*/ __Vfunc_uvm_is_match__61__Vfuncout;
    __Vfunc_uvm_is_match__61__Vfuncout = 0;
    std::string __Vfunc_uvm_is_match__61__expr;
    std::string __Vfunc_uvm_is_match__61__str;
    std::string __Vfunc_uvm_glob_to_re__62__Vfuncout;
    std::string __Vfunc_uvm_glob_to_re__62__glob;
    IData/*31:0*/ __Vfunc_uvm_re_match__63__Vfuncout;
    __Vfunc_uvm_re_match__63__Vfuncout = 0;
    std::string __Vfunc_uvm_re_match__63__re;
    std::string __Vfunc_uvm_re_match__63__str;
    IData/*31:0*/ __Vfunc_uvm_re_match__63____Vincrement1;
    __Vfunc_uvm_re_match__63____Vincrement1 = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ unnamedblk10__DOT__i;
    unnamedblk10__DOT__i = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_queue__Tz22> q;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_queue__Tz22> rq;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> r;
    IData/*31:0*/ i;
    i = 0;
    {
        q = VL_NEW(Vtransactions_uvm_pkg__03a__03auvm_queue__Tz22, vlProcess, vlSymsp, ""s);
        if (((VlNull{} == type_handle) | (! this->__PVT__ttab.exists(type_handle)))) {
            lookup_type__Vfuncrtn = q;
            goto __Vlabel0;
        }
        rq = this->__PVT__ttab.at(type_handle);
        unnamedblk10__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk10__DOT__i, 
                          ([&]() {
                        VL_NULL_CHECK(rq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 623)
                           ->__VnoInFunc_size(vlSymsp, __Vtask_size__59__Vfuncout);
                    }(), __Vtask_size__59__Vfuncout))) {
            VL_NULL_CHECK(rq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 624)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk10__DOT__i, __Vtask_get__60__Vfuncout);
            r = __Vtask_get__60__Vfuncout;
            if ((vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__ri_tab.exists(r) 
                 && ([&]() {
                            __Vfunc_uvm_is_match__61__str 
                                = scope;
                            __Vfunc_uvm_is_match__61__expr 
                                = VL_CVT_PACK_STR_NN(vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__ri_tab
                                                     .at(r)
                                                     .__PVT__scope);
                            __Vfunc_uvm_glob_to_re__62__glob 
                                = __Vfunc_uvm_is_match__61__expr;
                            __Vfunc_uvm_glob_to_re__62__Vfuncout 
                                = __Vfunc_uvm_glob_to_re__62__glob;
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
                                = __Vfunc_uvm_glob_to_re__62__Vfuncout;
                            __Vfunc_uvm_is_match__61__Vfuncout 
                                = (0U == ([&]() {
                                        __Vfunc_uvm_re_match__63__str 
                                            = __Vfunc_uvm_is_match__61__str;
                                        __Vfunc_uvm_re_match__63__re 
                                            = vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s;
                                        {
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                                            if ((0U 
                                                 == 
                                                 VL_LEN_IN(__Vfunc_uvm_re_match__63__re))) {
                                                __Vfunc_uvm_re_match__63__Vfuncout = 0U;
                                                goto __Vlabel1;
                                            }
                                            if ((0x5eU 
                                                 == 
                                                 VL_GETC_N(__Vfunc_uvm_re_match__63__re,0U))) {
                                                __Vfunc_uvm_re_match__63__re 
                                                    = 
                                                    VL_SUBSTR_N(__Vfunc_uvm_re_match__63__re,1U,
                                                                (VL_LEN_IN(__Vfunc_uvm_re_match__63__re) 
                                                                 - (IData)(1U)));
                                            }
                                            while (
                                                   ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                     != 
                                                     VL_LEN_IN(__Vfunc_uvm_re_match__63__str)) 
                                                    & (0x2aU 
                                                       != 
                                                       VL_GETC_N(__Vfunc_uvm_re_match__63__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                                if (
                                                    ((VL_GETC_N(__Vfunc_uvm_re_match__63__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                                      != 
                                                      VL_GETC_N(__Vfunc_uvm_re_match__63__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                                     & (0x3fU 
                                                        != 
                                                        VL_GETC_N(__Vfunc_uvm_re_match__63__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                                    __Vfunc_uvm_re_match__63__Vfuncout = 1U;
                                                    goto __Vlabel1;
                                                }
                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                            }
                                            while (
                                                   (vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                    != 
                                                    VL_LEN_IN(__Vfunc_uvm_re_match__63__str))) {
                                                if (
                                                    (0x2aU 
                                                     == 
                                                     VL_GETC_N(__Vfunc_uvm_re_match__63__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                        = 
                                                        ((IData)(1U) 
                                                         + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                                    if (
                                                        (vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                         == 
                                                         VL_LEN_IN(__Vfunc_uvm_re_match__63__re))) {
                                                        __Vfunc_uvm_re_match__63__Vfuncout = 0U;
                                                        goto __Vlabel1;
                                                    }
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                                                        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                                        = 
                                                        ((IData)(1U) 
                                                         + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                                } else if (
                                                           ((VL_GETC_N(__Vfunc_uvm_re_match__63__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                                             == 
                                                             VL_GETC_N(__Vfunc_uvm_re_match__63__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                                            | (0x3fU 
                                                               == 
                                                               VL_GETC_N(__Vfunc_uvm_re_match__63__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                        = 
                                                        ((IData)(1U) 
                                                         + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                        = 
                                                        ((IData)(1U) 
                                                         + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                                } else {
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                                                    __Vfunc_uvm_re_match__63____Vincrement1 
                                                        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                                        = 
                                                        ((IData)(1U) 
                                                         + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                        = __Vfunc_uvm_re_match__63____Vincrement1;
                                                }
                                            }
                                            while (
                                                   (VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                                               VL_LEN_IN(__Vfunc_uvm_re_match__63__re)) 
                                                    & (0x2aU 
                                                       == 
                                                       VL_GETC_N(__Vfunc_uvm_re_match__63__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                            }
                                            __Vfunc_uvm_re_match__63__Vfuncout 
                                                = (
                                                   (vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                    == 
                                                    VL_LEN_IN(__Vfunc_uvm_re_match__63__re))
                                                    ? 0U
                                                    : 1U);
                                            __Vlabel1: ;
                                        }
                                    }(), __Vfunc_uvm_re_match__63__Vfuncout));
                        }(), (IData)(__Vfunc_uvm_is_match__61__Vfuncout)))) {
                VL_NULL_CHECK(q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 626)->__VnoInFunc_push_back(vlSymsp, r);
            }
            unnamedblk10__DOT__i = ((IData)(1U) + unnamedblk10__DOT__i);
        }
        lookup_type__Vfuncrtn = q;
        __Vlabel0: ;
    }
}

void Vtransactions_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_get_by_type(Vtransactions__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> type_handle, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> &get_by_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_get_by_type\n"); );
    // Locals
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_queue__Tz22> __Vfunc_lookup_type__65__Vfuncout;
    IData/*31:0*/ __Vtask_size__66__Vfuncout;
    __Vtask_size__66__Vfuncout = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> __Vtask_get__68__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_queue__Tz22> q;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> rsrc;
    {
        this->__VnoInFunc_lookup_type(vlSymsp, scope, type_handle, __Vfunc_lookup_type__65__Vfuncout);
        q = __Vfunc_lookup_type__65__Vfuncout;
        if ((0U == ([&]() {
                        VL_NULL_CHECK(q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 647)
                    ->__VnoInFunc_size(vlSymsp, __Vtask_size__66__Vfuncout);
                    }(), __Vtask_size__66__Vfuncout))) {
            this->__VnoInFunc_push_get_record(vlSymsp, "<type>"s, scope, VlNull{});
            get_by_type__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        VL_NULL_CHECK(q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 652)->__VnoInFunc_get(vlProcess, vlSymsp, 0U, __Vtask_get__68__Vfuncout);
        rsrc = __Vtask_get__68__Vfuncout;
        this->__VnoInFunc_push_get_record(vlSymsp, "<type>"s, scope, rsrc);
        get_by_type__Vfuncrtn = rsrc;
        __Vlabel0: ;
    }
}

void Vtransactions_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_lookup_regex_names(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> type_handle, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_queue__Tz22> &lookup_regex_names__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_lookup_regex_names\n"); );
    // Locals
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_queue__Tz22> __Vfunc_lookup_name__70__Vfuncout;
    // Body
    this->__VnoInFunc_lookup_name(vlProcess, vlSymsp, scope, name, type_handle, 0U, __Vfunc_lookup_name__70__Vfuncout);
    lookup_regex_names__Vfuncrtn = __Vfunc_lookup_name__70__Vfuncout;
}

void Vtransactions_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_lookup_regex(Vtransactions__Syms* __restrict vlSymsp, std::string re, std::string scope, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_queue__Tz22> &lookup_regex__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_lookup_regex\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_uvm_is_match__72__Vfuncout;
    __Vfunc_uvm_is_match__72__Vfuncout = 0;
    std::string __Vfunc_uvm_is_match__72__expr;
    std::string __Vfunc_uvm_is_match__72__str;
    std::string __Vfunc_uvm_glob_to_re__73__Vfuncout;
    std::string __Vfunc_uvm_glob_to_re__73__glob;
    IData/*31:0*/ __Vfunc_uvm_re_match__74__Vfuncout;
    __Vfunc_uvm_re_match__74__Vfuncout = 0;
    std::string __Vfunc_uvm_re_match__74__re;
    std::string __Vfunc_uvm_re_match__74__str;
    IData/*31:0*/ __Vfunc_uvm_re_match__74____Vincrement1;
    __Vfunc_uvm_re_match__74____Vincrement1 = 0;
    IData/*31:0*/ __Vtask_size__75__Vfuncout;
    __Vtask_size__75__Vfuncout = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> __Vtask_get__76__Vfuncout;
    CData/*0:0*/ __Vfunc_uvm_is_match__77__Vfuncout;
    __Vfunc_uvm_is_match__77__Vfuncout = 0;
    std::string __Vfunc_uvm_is_match__77__expr;
    std::string __Vfunc_uvm_is_match__77__str;
    std::string __Vfunc_uvm_glob_to_re__78__Vfuncout;
    std::string __Vfunc_uvm_glob_to_re__78__glob;
    IData/*31:0*/ __Vfunc_uvm_re_match__79__Vfuncout;
    __Vfunc_uvm_re_match__79__Vfuncout = 0;
    std::string __Vfunc_uvm_re_match__79__re;
    std::string __Vfunc_uvm_re_match__79__str;
    IData/*31:0*/ __Vfunc_uvm_re_match__79____Vincrement1;
    __Vfunc_uvm_re_match__79____Vincrement1 = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string unnamedblk11__DOT__name;
    CData/*0:0*/ unnamedblk11__DOT__name__Vfirst;
    unnamedblk11__DOT__name__Vfirst = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_queue__Tz22> rq;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_queue__Tz22> result_q;
    IData/*31:0*/ i;
    i = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> r;
    std::string s;
    result_q = VL_NEW(Vtransactions_uvm_pkg__03a__03auvm_queue__Tz22, vlProcess, vlSymsp, ""s);
    if ((0U != this->__PVT__rtab.first(unnamedblk11__DOT__name))) {
        unnamedblk11__DOT__name__Vfirst = 1U;
        while (((IData)(unnamedblk11__DOT__name__Vfirst) 
                || (0U != this->__PVT__rtab.next(unnamedblk11__DOT__name)))) {
            unnamedblk11__DOT__name__Vfirst = 0U;
            {
                if ((1U & (~ ([&]() {
                                    __Vfunc_uvm_is_match__72__str 
                                        = unnamedblk11__DOT__name;
                                    __Vfunc_uvm_is_match__72__expr 
                                        = re;
                                    __Vfunc_uvm_glob_to_re__73__glob 
                                        = __Vfunc_uvm_is_match__72__expr;
                                    __Vfunc_uvm_glob_to_re__73__Vfuncout 
                                        = __Vfunc_uvm_glob_to_re__73__glob;
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
                                        = __Vfunc_uvm_glob_to_re__73__Vfuncout;
                                    __Vfunc_uvm_is_match__72__Vfuncout 
                                        = (0U == ([&]() {
                                                __Vfunc_uvm_re_match__74__str 
                                                    = __Vfunc_uvm_is_match__72__str;
                                                __Vfunc_uvm_re_match__74__re 
                                                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s;
                                                {
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                                                    if (
                                                        (0U 
                                                         == 
                                                         VL_LEN_IN(__Vfunc_uvm_re_match__74__re))) {
                                                        __Vfunc_uvm_re_match__74__Vfuncout = 0U;
                                                        goto __Vlabel1;
                                                    }
                                                    if (
                                                        (0x5eU 
                                                         == 
                                                         VL_GETC_N(__Vfunc_uvm_re_match__74__re,0U))) {
                                                        __Vfunc_uvm_re_match__74__re 
                                                            = 
                                                            VL_SUBSTR_N(__Vfunc_uvm_re_match__74__re,1U,
                                                                        (VL_LEN_IN(__Vfunc_uvm_re_match__74__re) 
                                                                         - (IData)(1U)));
                                                    }
                                                    while (
                                                           ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                             != 
                                                             VL_LEN_IN(__Vfunc_uvm_re_match__74__str)) 
                                                            & (0x2aU 
                                                               != 
                                                               VL_GETC_N(__Vfunc_uvm_re_match__74__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                                        if (
                                                            ((VL_GETC_N(__Vfunc_uvm_re_match__74__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                                              != 
                                                              VL_GETC_N(__Vfunc_uvm_re_match__74__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                                             & (0x3fU 
                                                                != 
                                                                VL_GETC_N(__Vfunc_uvm_re_match__74__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                                            __Vfunc_uvm_re_match__74__Vfuncout = 1U;
                                                            goto __Vlabel1;
                                                        }
                                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                            = 
                                                            ((IData)(1U) 
                                                             + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                            = 
                                                            ((IData)(1U) 
                                                             + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                                    }
                                                    while (
                                                           (vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                            != 
                                                            VL_LEN_IN(__Vfunc_uvm_re_match__74__str))) {
                                                        if (
                                                            (0x2aU 
                                                             == 
                                                             VL_GETC_N(__Vfunc_uvm_re_match__74__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                                            if (
                                                                (vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                                 == 
                                                                 VL_LEN_IN(__Vfunc_uvm_re_match__74__re))) {
                                                                __Vfunc_uvm_re_match__74__Vfuncout = 0U;
                                                                goto __Vlabel1;
                                                            }
                                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                                                                = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                                        } else if (
                                                                   ((VL_GETC_N(__Vfunc_uvm_re_match__74__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                                                     == 
                                                                     VL_GETC_N(__Vfunc_uvm_re_match__74__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                                                    | (0x3fU 
                                                                       == 
                                                                       VL_GETC_N(__Vfunc_uvm_re_match__74__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                                        } else {
                                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                                = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                                                            __Vfunc_uvm_re_match__74____Vincrement1 
                                                                = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                                = __Vfunc_uvm_re_match__74____Vincrement1;
                                                        }
                                                    }
                                                    while (
                                                           (VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                                                       VL_LEN_IN(__Vfunc_uvm_re_match__74__re)) 
                                                            & (0x2aU 
                                                               == 
                                                               VL_GETC_N(__Vfunc_uvm_re_match__74__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                            = 
                                                            ((IData)(1U) 
                                                             + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                                    }
                                                    __Vfunc_uvm_re_match__74__Vfuncout 
                                                        = 
                                                        ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                          == 
                                                          VL_LEN_IN(__Vfunc_uvm_re_match__74__re))
                                                          ? 0U
                                                          : 1U);
                                                    __Vlabel1: ;
                                                }
                                            }(), __Vfunc_uvm_re_match__74__Vfuncout));
                                }(), (IData)(__Vfunc_uvm_is_match__72__Vfuncout))))) {
                    goto __Vlabel0;
                }
                rq = this->__PVT__rtab.at(unnamedblk11__DOT__name);
                i = 0U;
                while ((i < ([&]() {
                                VL_NULL_CHECK(rq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 692)
                             ->__VnoInFunc_size(vlSymsp, __Vtask_size__75__Vfuncout);
                            }(), __Vtask_size__75__Vfuncout))) {
                    VL_NULL_CHECK(rq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 693)->__VnoInFunc_get(vlProcess, vlSymsp, i, __Vtask_get__76__Vfuncout);
                    r = __Vtask_get__76__Vfuncout;
                    if ((vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__ri_tab.exists(r) 
                         && ([&]() {
                                    __Vfunc_uvm_is_match__77__str 
                                        = scope;
                                    __Vfunc_uvm_is_match__77__expr 
                                        = VL_CVT_PACK_STR_NN(vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__ri_tab
                                                             .at(r)
                                                             .__PVT__scope);
                                    __Vfunc_uvm_glob_to_re__78__glob 
                                        = __Vfunc_uvm_is_match__77__expr;
                                    __Vfunc_uvm_glob_to_re__78__Vfuncout 
                                        = __Vfunc_uvm_glob_to_re__78__glob;
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
                                        = __Vfunc_uvm_glob_to_re__78__Vfuncout;
                                    __Vfunc_uvm_is_match__77__Vfuncout 
                                        = (0U == ([&]() {
                                                __Vfunc_uvm_re_match__79__str 
                                                    = __Vfunc_uvm_is_match__77__str;
                                                __Vfunc_uvm_re_match__79__re 
                                                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s;
                                                {
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                                                    if (
                                                        (0U 
                                                         == 
                                                         VL_LEN_IN(__Vfunc_uvm_re_match__79__re))) {
                                                        __Vfunc_uvm_re_match__79__Vfuncout = 0U;
                                                        goto __Vlabel2;
                                                    }
                                                    if (
                                                        (0x5eU 
                                                         == 
                                                         VL_GETC_N(__Vfunc_uvm_re_match__79__re,0U))) {
                                                        __Vfunc_uvm_re_match__79__re 
                                                            = 
                                                            VL_SUBSTR_N(__Vfunc_uvm_re_match__79__re,1U,
                                                                        (VL_LEN_IN(__Vfunc_uvm_re_match__79__re) 
                                                                         - (IData)(1U)));
                                                    }
                                                    while (
                                                           ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                             != 
                                                             VL_LEN_IN(__Vfunc_uvm_re_match__79__str)) 
                                                            & (0x2aU 
                                                               != 
                                                               VL_GETC_N(__Vfunc_uvm_re_match__79__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                                        if (
                                                            ((VL_GETC_N(__Vfunc_uvm_re_match__79__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                                              != 
                                                              VL_GETC_N(__Vfunc_uvm_re_match__79__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                                             & (0x3fU 
                                                                != 
                                                                VL_GETC_N(__Vfunc_uvm_re_match__79__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                                            __Vfunc_uvm_re_match__79__Vfuncout = 1U;
                                                            goto __Vlabel2;
                                                        }
                                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                            = 
                                                            ((IData)(1U) 
                                                             + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                            = 
                                                            ((IData)(1U) 
                                                             + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                                    }
                                                    while (
                                                           (vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                            != 
                                                            VL_LEN_IN(__Vfunc_uvm_re_match__79__str))) {
                                                        if (
                                                            (0x2aU 
                                                             == 
                                                             VL_GETC_N(__Vfunc_uvm_re_match__79__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                                            if (
                                                                (vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                                 == 
                                                                 VL_LEN_IN(__Vfunc_uvm_re_match__79__re))) {
                                                                __Vfunc_uvm_re_match__79__Vfuncout = 0U;
                                                                goto __Vlabel2;
                                                            }
                                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                                                                = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                                        } else if (
                                                                   ((VL_GETC_N(__Vfunc_uvm_re_match__79__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                                                     == 
                                                                     VL_GETC_N(__Vfunc_uvm_re_match__79__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                                                    | (0x3fU 
                                                                       == 
                                                                       VL_GETC_N(__Vfunc_uvm_re_match__79__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                                        } else {
                                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                                = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                                                            __Vfunc_uvm_re_match__79____Vincrement1 
                                                                = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                                = __Vfunc_uvm_re_match__79____Vincrement1;
                                                        }
                                                    }
                                                    while (
                                                           (VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                                                       VL_LEN_IN(__Vfunc_uvm_re_match__79__re)) 
                                                            & (0x2aU 
                                                               == 
                                                               VL_GETC_N(__Vfunc_uvm_re_match__79__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                            = 
                                                            ((IData)(1U) 
                                                             + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                                    }
                                                    __Vfunc_uvm_re_match__79__Vfuncout 
                                                        = 
                                                        ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                          == 
                                                          VL_LEN_IN(__Vfunc_uvm_re_match__79__re))
                                                          ? 0U
                                                          : 1U);
                                                    __Vlabel2: ;
                                                }
                                            }(), __Vfunc_uvm_re_match__79__Vfuncout));
                                }(), (IData)(__Vfunc_uvm_is_match__77__Vfuncout)))) {
                        VL_NULL_CHECK(result_q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 695)->__VnoInFunc_push_back(vlSymsp, r);
                    }
                    i = ((IData)(1U) + i);
                }
                __Vlabel0: ;
            }
        }
    }
    lookup_regex__Vfuncrtn = result_q;
}

void Vtransactions_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_lookup_scope(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_queue__Tz22> &lookup_scope__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_lookup_scope\n"); );
    // Locals
    IData/*31:0*/ __Vtask_size__82__Vfuncout;
    __Vtask_size__82__Vfuncout = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> __Vtask_get__83__Vfuncout;
    CData/*0:0*/ __Vfunc_uvm_is_match__84__Vfuncout;
    __Vfunc_uvm_is_match__84__Vfuncout = 0;
    std::string __Vfunc_uvm_is_match__84__expr;
    std::string __Vfunc_uvm_is_match__84__str;
    std::string __Vfunc_uvm_glob_to_re__85__Vfuncout;
    std::string __Vfunc_uvm_glob_to_re__85__glob;
    IData/*31:0*/ __Vfunc_uvm_re_match__86__Vfuncout;
    __Vfunc_uvm_re_match__86__Vfuncout = 0;
    std::string __Vfunc_uvm_re_match__86__re;
    std::string __Vfunc_uvm_re_match__86__str;
    IData/*31:0*/ __Vfunc_uvm_re_match__86____Vincrement1;
    __Vfunc_uvm_re_match__86____Vincrement1 = 0;
    // Body
    IData/*31:0*/ unnamedblk12__DOT__i;
    unnamedblk12__DOT__i = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_queue__Tz22> rq;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> r;
    IData/*31:0*/ i;
    i = 0;
    IData/*31:0*/ err;
    err = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_queue__Tz22> q;
    std::string name;
    q = VL_NEW(Vtransactions_uvm_pkg__03a__03auvm_queue__Tz22, vlProcess, vlSymsp, ""s);
    if ((0U != this->__PVT__rtab.last(name))) {
        do {
            rq = this->__PVT__rtab.at(name);
            unnamedblk12__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk12__DOT__i, 
                              ([&]() {
                            VL_NULL_CHECK(rq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 729)
                               ->__VnoInFunc_size(vlSymsp, __Vtask_size__82__Vfuncout);
                        }(), __Vtask_size__82__Vfuncout))) {
                VL_NULL_CHECK(rq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 730)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk12__DOT__i, __Vtask_get__83__Vfuncout);
                r = __Vtask_get__83__Vfuncout;
                if ((vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__ri_tab.exists(r) 
                     && ([&]() {
                                __Vfunc_uvm_is_match__84__str 
                                    = scope;
                                __Vfunc_uvm_is_match__84__expr 
                                    = VL_CVT_PACK_STR_NN(vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__ri_tab
                                                         .at(r)
                                                         .__PVT__scope);
                                __Vfunc_uvm_glob_to_re__85__glob 
                                    = __Vfunc_uvm_is_match__84__expr;
                                __Vfunc_uvm_glob_to_re__85__Vfuncout 
                                    = __Vfunc_uvm_glob_to_re__85__glob;
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
                                    = __Vfunc_uvm_glob_to_re__85__Vfuncout;
                                __Vfunc_uvm_is_match__84__Vfuncout 
                                    = (0U == ([&]() {
                                            __Vfunc_uvm_re_match__86__str 
                                                = __Vfunc_uvm_is_match__84__str;
                                            __Vfunc_uvm_re_match__86__re 
                                                = vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s;
                                            {
                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                                                if (
                                                    (0U 
                                                     == 
                                                     VL_LEN_IN(__Vfunc_uvm_re_match__86__re))) {
                                                    __Vfunc_uvm_re_match__86__Vfuncout = 0U;
                                                    goto __Vlabel0;
                                                }
                                                if (
                                                    (0x5eU 
                                                     == 
                                                     VL_GETC_N(__Vfunc_uvm_re_match__86__re,0U))) {
                                                    __Vfunc_uvm_re_match__86__re 
                                                        = 
                                                        VL_SUBSTR_N(__Vfunc_uvm_re_match__86__re,1U,
                                                                    (VL_LEN_IN(__Vfunc_uvm_re_match__86__re) 
                                                                     - (IData)(1U)));
                                                }
                                                while (
                                                       ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                         != 
                                                         VL_LEN_IN(__Vfunc_uvm_re_match__86__str)) 
                                                        & (0x2aU 
                                                           != 
                                                           VL_GETC_N(__Vfunc_uvm_re_match__86__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                                    if (
                                                        ((VL_GETC_N(__Vfunc_uvm_re_match__86__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                                          != 
                                                          VL_GETC_N(__Vfunc_uvm_re_match__86__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                                         & (0x3fU 
                                                            != 
                                                            VL_GETC_N(__Vfunc_uvm_re_match__86__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                                        __Vfunc_uvm_re_match__86__Vfuncout = 1U;
                                                        goto __Vlabel0;
                                                    }
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                        = 
                                                        ((IData)(1U) 
                                                         + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                        = 
                                                        ((IData)(1U) 
                                                         + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                                }
                                                while (
                                                       (vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                        != 
                                                        VL_LEN_IN(__Vfunc_uvm_re_match__86__str))) {
                                                    if (
                                                        (0x2aU 
                                                         == 
                                                         VL_GETC_N(__Vfunc_uvm_re_match__86__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                            = 
                                                            ((IData)(1U) 
                                                             + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                                        if (
                                                            (vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                             == 
                                                             VL_LEN_IN(__Vfunc_uvm_re_match__86__re))) {
                                                            __Vfunc_uvm_re_match__86__Vfuncout = 0U;
                                                            goto __Vlabel0;
                                                        }
                                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                                                            = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                                            = 
                                                            ((IData)(1U) 
                                                             + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                                    } else if (
                                                               ((VL_GETC_N(__Vfunc_uvm_re_match__86__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                                                 == 
                                                                 VL_GETC_N(__Vfunc_uvm_re_match__86__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                                                | (0x3fU 
                                                                   == 
                                                                   VL_GETC_N(__Vfunc_uvm_re_match__86__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                            = 
                                                            ((IData)(1U) 
                                                             + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                            = 
                                                            ((IData)(1U) 
                                                             + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                                    } else {
                                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                            = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                                                        __Vfunc_uvm_re_match__86____Vincrement1 
                                                            = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                                            = 
                                                            ((IData)(1U) 
                                                             + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                            = __Vfunc_uvm_re_match__86____Vincrement1;
                                                    }
                                                }
                                                while (
                                                       (VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                                                   VL_LEN_IN(__Vfunc_uvm_re_match__86__re)) 
                                                        & (0x2aU 
                                                           == 
                                                           VL_GETC_N(__Vfunc_uvm_re_match__86__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                        = 
                                                        ((IData)(1U) 
                                                         + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                                }
                                                __Vfunc_uvm_re_match__86__Vfuncout 
                                                    = 
                                                    ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                      == 
                                                      VL_LEN_IN(__Vfunc_uvm_re_match__86__re))
                                                      ? 0U
                                                      : 1U);
                                                __Vlabel0: ;
                                            }
                                        }(), __Vfunc_uvm_re_match__86__Vfuncout));
                            }(), (IData)(__Vfunc_uvm_is_match__84__Vfuncout)))) {
                    VL_NULL_CHECK(q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 732)->__VnoInFunc_push_back(vlSymsp, r);
                }
                unnamedblk12__DOT__i = ((IData)(1U) 
                                        + unnamedblk12__DOT__i);
            }
        } while ((0U != this->__PVT__rtab.prev(name)));
    }
    lookup_scope__Vfuncrtn = q;
}

void Vtransactions_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_priority_queue(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> rsrc, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_queue__Tz22> &q, IData/*31:0*/ &pri) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_priority_queue\n"); );
    // Locals
    std::string __Vtask_get_name__88__Vfuncout;
    IData/*31:0*/ __Vtask_size__89__Vfuncout;
    __Vtask_size__89__Vfuncout = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> __Vtask_get__90__Vfuncout;
    std::string __Vtask_uvm_report_error__91__id;
    std::string __Vtask_uvm_report_error__91__message;
    IData/*31:0*/ __Vtask_uvm_report_error__91__verbosity;
    __Vtask_uvm_report_error__91__verbosity = 0;
    std::string __Vtask_uvm_report_error__91__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__91__line;
    __Vtask_uvm_report_error__91__line = 0;
    std::string __Vtask_uvm_report_error__91__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__91__report_enabled_checked;
    __Vtask_uvm_report_error__91__report_enabled_checked = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__92__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__93__Vfuncout;
    // Body
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> r;
    IData/*31:0*/ i;
    i = 0;
    std::string msg;
    std::string name;
    {
        VL_NULL_CHECK(rsrc, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 769)->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__88__Vfuncout);
        name = __Vtask_get_name__88__Vfuncout;
        i = 0U;
        {
            while ((i < ([&]() {
                            VL_NULL_CHECK(q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 771)
                         ->__VnoInFunc_size(vlSymsp, __Vtask_size__89__Vfuncout);
                        }(), __Vtask_size__89__Vfuncout))) {
                VL_NULL_CHECK(q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 772)->__VnoInFunc_get(vlProcess, vlSymsp, i, __Vtask_get__90__Vfuncout);
                r = __Vtask_get__90__Vfuncout;
                if ((r == rsrc)) {
                    goto __Vlabel1;
                }
                i = ((IData)(1U) + i);
            }
            __Vlabel1: ;
        }
        if ((r != rsrc)) {
            VL_SFORMAT_NX(64,msg,"Handle for resource named %@ is not in the name name; cannot change its priority",0,
                          -1,&(name));
            __Vtask_uvm_report_error__91__report_enabled_checked = 0U;
            __Vtask_uvm_report_error__91__context_name = ""s;
            __Vtask_uvm_report_error__91__line = 0U;
            __Vtask_uvm_report_error__91__filename = ""s;
            __Vtask_uvm_report_error__91__verbosity = 0U;
            __Vtask_uvm_report_error__91__message = msg;
            __Vtask_uvm_report_error__91__id = "NORSRC"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__92__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__92__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__93__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__93__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__91__id, __Vtask_uvm_report_error__91__message, __Vtask_uvm_report_error__91__verbosity, __Vtask_uvm_report_error__91__filename, __Vtask_uvm_report_error__91__line, __Vtask_uvm_report_error__91__context_name, (IData)(__Vtask_uvm_report_error__91__report_enabled_checked));
            goto __Vlabel0;
        }
        VL_NULL_CHECK(q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 782)->__VnoInFunc_delete(vlProcess, vlSymsp, i);
        if ((0U == pri)) {
            VL_NULL_CHECK(q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 785)->__VnoInFunc_push_front(vlSymsp, rsrc);
        } else if ((1U == pri)) {
            VL_NULL_CHECK(q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 786)->__VnoInFunc_push_back(vlSymsp, rsrc);
        }
        __Vlabel0: ;
    }
}

void Vtransactions_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_priority_type(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> rsrc, IData/*31:0*/ pri) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_priority_type\n"); );
    // Locals
    std::string __Vtask_uvm_report_warning__98__id;
    std::string __Vtask_uvm_report_warning__98__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__98__verbosity;
    __Vtask_uvm_report_warning__98__verbosity = 0;
    std::string __Vtask_uvm_report_warning__98__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__98__line;
    __Vtask_uvm_report_warning__98__line = 0;
    std::string __Vtask_uvm_report_warning__98__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__98__report_enabled_checked;
    __Vtask_uvm_report_warning__98__report_enabled_checked = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__99__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__100__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> __Vtask_get_type_handle__102__Vfuncout;
    std::string __Vtask_get_name__103__Vfuncout;
    std::string __Vtask_uvm_report_error__104__id;
    std::string __Vtask_uvm_report_error__104__message;
    IData/*31:0*/ __Vtask_uvm_report_error__104__verbosity;
    __Vtask_uvm_report_error__104__verbosity = 0;
    std::string __Vtask_uvm_report_error__104__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__104__line;
    __Vtask_uvm_report_error__104__line = 0;
    std::string __Vtask_uvm_report_error__104__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__104__report_enabled_checked;
    __Vtask_uvm_report_error__104__report_enabled_checked = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__105__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__106__Vfuncout;
    std::string __Vtemp_1;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> type_handle;
    std::string msg;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_queue__Tz22> q;
    {
        if ((VlNull{} == rsrc)) {
            __Vtask_uvm_report_warning__98__report_enabled_checked = 0U;
            __Vtask_uvm_report_warning__98__context_name = ""s;
            __Vtask_uvm_report_warning__98__line = 0U;
            __Vtask_uvm_report_warning__98__filename = ""s;
            __Vtask_uvm_report_warning__98__verbosity = 0x000000c8U;
            __Vtask_uvm_report_warning__98__message = "attempting to change the serach priority of a null resource"s;
            __Vtask_uvm_report_warning__98__id = "NULLRASRC"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__99__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__99__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__100__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__100__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__98__id, __Vtask_uvm_report_warning__98__message, __Vtask_uvm_report_warning__98__verbosity, __Vtask_uvm_report_warning__98__filename, __Vtask_uvm_report_warning__98__line, __Vtask_uvm_report_warning__98__context_name, (IData)(__Vtask_uvm_report_warning__98__report_enabled_checked));
            goto __Vlabel0;
        }
        VL_NULL_CHECK(rsrc, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 811)->__VnoInFunc_get_type_handle(vlProcess, vlSymsp, __Vtask_get_type_handle__102__Vfuncout);
        type_handle = __Vtask_get_type_handle__102__Vfuncout;
        if ((! this->__PVT__ttab.exists(type_handle))) {
            __Vtemp_1 = ([&]() {
                    VL_NULL_CHECK(rsrc, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 813)
                         ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__103__Vfuncout);
                }(), __Vtask_get_name__103__Vfuncout);
            VL_SFORMAT_NX(64,msg,"Type handle for resrouce named %@ not found in type map; cannot change its search priority",0,
                          -1,&(__Vtemp_1));
            __Vtask_uvm_report_error__104__report_enabled_checked = 0U;
            __Vtask_uvm_report_error__104__context_name = ""s;
            __Vtask_uvm_report_error__104__line = 0U;
            __Vtask_uvm_report_error__104__filename = ""s;
            __Vtask_uvm_report_error__104__verbosity = 0U;
            __Vtask_uvm_report_error__104__message 
                = msg;
            __Vtask_uvm_report_error__104__id = "RNFTYPE"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__105__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__105__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__106__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__106__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__104__id, __Vtask_uvm_report_error__104__message, __Vtask_uvm_report_error__104__verbosity, __Vtask_uvm_report_error__104__filename, __Vtask_uvm_report_error__104__line, __Vtask_uvm_report_error__104__context_name, (IData)(__Vtask_uvm_report_error__104__report_enabled_checked));
            goto __Vlabel0;
        }
        q = this->__PVT__ttab.at(type_handle);
        this->__VnoInFunc_set_priority_queue(vlProcess, vlSymsp, rsrc, q, pri);
        __Vlabel0: ;
    }
}

void Vtransactions_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_priority_name(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> rsrc, IData/*31:0*/ pri) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_priority_name\n"); );
    // Locals
    std::string __Vtask_uvm_report_warning__109__id;
    std::string __Vtask_uvm_report_warning__109__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__109__verbosity;
    __Vtask_uvm_report_warning__109__verbosity = 0;
    std::string __Vtask_uvm_report_warning__109__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__109__line;
    __Vtask_uvm_report_warning__109__line = 0;
    std::string __Vtask_uvm_report_warning__109__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__109__report_enabled_checked;
    __Vtask_uvm_report_warning__109__report_enabled_checked = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__110__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__111__Vfuncout;
    std::string __Vtask_get_name__113__Vfuncout;
    std::string __Vtask_uvm_report_error__114__id;
    std::string __Vtask_uvm_report_error__114__message;
    IData/*31:0*/ __Vtask_uvm_report_error__114__verbosity;
    __Vtask_uvm_report_error__114__verbosity = 0;
    std::string __Vtask_uvm_report_error__114__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__114__line;
    __Vtask_uvm_report_error__114__line = 0;
    std::string __Vtask_uvm_report_error__114__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__114__report_enabled_checked;
    __Vtask_uvm_report_error__114__report_enabled_checked = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__115__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__116__Vfuncout;
    // Body
    std::string name;
    std::string msg;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_queue__Tz22> q;
    {
        if ((VlNull{} == rsrc)) {
            __Vtask_uvm_report_warning__109__report_enabled_checked = 0U;
            __Vtask_uvm_report_warning__109__context_name = ""s;
            __Vtask_uvm_report_warning__109__line = 0U;
            __Vtask_uvm_report_warning__109__filename = ""s;
            __Vtask_uvm_report_warning__109__verbosity = 0x000000c8U;
            __Vtask_uvm_report_warning__109__message = "attempting to change the serach priority of a null resource"s;
            __Vtask_uvm_report_warning__109__id = "NULLRASRC"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__110__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__110__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__111__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__111__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__109__id, __Vtask_uvm_report_warning__109__message, __Vtask_uvm_report_warning__109__verbosity, __Vtask_uvm_report_warning__109__filename, __Vtask_uvm_report_warning__109__line, __Vtask_uvm_report_warning__109__context_name, (IData)(__Vtask_uvm_report_warning__109__report_enabled_checked));
            goto __Vlabel0;
        }
        VL_NULL_CHECK(rsrc, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 842)->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__113__Vfuncout);
        name = __Vtask_get_name__113__Vfuncout;
        if ((! this->__PVT__rtab.exists(name))) {
            VL_SFORMAT_NX(64,msg,"Resrouce named %@ not found in name map; cannot change its search priority",0,
                          -1,&(name));
            __Vtask_uvm_report_error__114__report_enabled_checked = 0U;
            __Vtask_uvm_report_error__114__context_name = ""s;
            __Vtask_uvm_report_error__114__line = 0U;
            __Vtask_uvm_report_error__114__filename = ""s;
            __Vtask_uvm_report_error__114__verbosity = 0U;
            __Vtask_uvm_report_error__114__message 
                = msg;
            __Vtask_uvm_report_error__114__id = "RNFNAME"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__115__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__115__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__116__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__116__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__114__id, __Vtask_uvm_report_error__114__message, __Vtask_uvm_report_error__114__verbosity, __Vtask_uvm_report_error__114__filename, __Vtask_uvm_report_error__114__line, __Vtask_uvm_report_error__114__context_name, (IData)(__Vtask_uvm_report_error__114__report_enabled_checked));
            goto __Vlabel0;
        }
        q = this->__PVT__rtab.at(name);
        this->__VnoInFunc_set_priority_queue(vlProcess, vlSymsp, rsrc, q, pri);
        __Vlabel0: ;
    }
}

void Vtransactions_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_priority(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> rsrc, IData/*31:0*/ pri) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_priority\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_set_priority_type(vlSymsp, rsrc, pri);
    this->__VnoInFunc_set_priority_name(vlProcess, vlSymsp, rsrc, pri);
}

void Vtransactions_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_precedence(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> r, IData/*31:0*/ p) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_set_precedence\n"); );
    // Locals
    std::string __Vtask_uvm_report_warning__121__id;
    std::string __Vtask_uvm_report_warning__121__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__121__verbosity;
    __Vtask_uvm_report_warning__121__verbosity = 0;
    std::string __Vtask_uvm_report_warning__121__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__121__line;
    __Vtask_uvm_report_warning__121__line = 0;
    std::string __Vtask_uvm_report_warning__121__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__121__report_enabled_checked;
    __Vtask_uvm_report_warning__121__report_enabled_checked = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__122__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__123__Vfuncout;
    std::string __Vtask_get_name__125__Vfuncout;
    IData/*31:0*/ __Vtask_size__126__Vfuncout;
    __Vtask_size__126__Vfuncout = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> __Vtask_get__127__Vfuncout;
    std::string __Vtask_uvm_report_warning__128__id;
    std::string __Vtask_uvm_report_warning__128__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__128__verbosity;
    __Vtask_uvm_report_warning__128__verbosity = 0;
    std::string __Vtask_uvm_report_warning__128__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__128__line;
    __Vtask_uvm_report_warning__128__line = 0;
    std::string __Vtask_uvm_report_warning__128__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__128__report_enabled_checked;
    __Vtask_uvm_report_warning__128__report_enabled_checked = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__129__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__130__Vfuncout;
    // Body
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_queue__Tz22> q;
    std::string name;
    IData/*31:0*/ i;
    i = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> rsrc;
    {
        if ((VlNull{} == r)) {
            __Vtask_uvm_report_warning__121__report_enabled_checked = 0U;
            __Vtask_uvm_report_warning__121__context_name = ""s;
            __Vtask_uvm_report_warning__121__line = 0U;
            __Vtask_uvm_report_warning__121__filename = ""s;
            __Vtask_uvm_report_warning__121__verbosity = 0x000000c8U;
            __Vtask_uvm_report_warning__121__message = "attempting to set precedence of a null resource"s;
            __Vtask_uvm_report_warning__121__id = "NULLRASRC"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__122__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__122__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__123__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__123__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__121__id, __Vtask_uvm_report_warning__121__message, __Vtask_uvm_report_warning__121__verbosity, __Vtask_uvm_report_warning__121__filename, __Vtask_uvm_report_warning__121__line, __Vtask_uvm_report_warning__121__context_name, (IData)(__Vtask_uvm_report_warning__121__report_enabled_checked));
            goto __Vlabel0;
        }
        VL_NULL_CHECK(r, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 896)->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__125__Vfuncout);
        name = __Vtask_get_name__125__Vfuncout;
        if (this->__PVT__rtab.exists(name)) {
            q = this->__PVT__rtab.at(name);
            i = 0U;
            {
                while ((i < ([&]() {
                                VL_NULL_CHECK(q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 900)
                             ->__VnoInFunc_size(vlSymsp, __Vtask_size__126__Vfuncout);
                            }(), __Vtask_size__126__Vfuncout))) {
                    VL_NULL_CHECK(q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 901)->__VnoInFunc_get(vlProcess, vlSymsp, i, __Vtask_get__127__Vfuncout);
                    rsrc = __Vtask_get__127__Vfuncout;
                    if ((rsrc == r)) {
                        goto __Vlabel1;
                    }
                    i = ((IData)(1U) + i);
                }
                __Vlabel1: ;
            }
        }
        if ((r != rsrc)) {
            __Vtask_uvm_report_warning__128__report_enabled_checked = 0U;
            __Vtask_uvm_report_warning__128__context_name = ""s;
            __Vtask_uvm_report_warning__128__line = 0U;
            __Vtask_uvm_report_warning__128__filename = ""s;
            __Vtask_uvm_report_warning__128__verbosity = 0x000000c8U;
            __Vtask_uvm_report_warning__128__message 
                = VL_SFORMATF_N_NX("resource named %@ is not placed within the pool",0,
                                   -1,&(name)) ;
            __Vtask_uvm_report_warning__128__id = "NORSRC"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__129__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__129__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__130__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__130__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__128__id, __Vtask_uvm_report_warning__128__message, __Vtask_uvm_report_warning__128__verbosity, __Vtask_uvm_report_warning__128__filename, __Vtask_uvm_report_warning__128__line, __Vtask_uvm_report_warning__128__context_name, (IData)(__Vtask_uvm_report_warning__128__report_enabled_checked));
            goto __Vlabel0;
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__ri_tab.at(r).__PVT__precedence 
            = p;
        __Vlabel0: ;
    }
}

void Vtransactions_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_get_precedence(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> r, IData/*31:0*/ &get_precedence__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_get_precedence\n"); );
    // Locals
    std::string __Vtask_uvm_report_warning__132__id;
    std::string __Vtask_uvm_report_warning__132__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__132__verbosity;
    __Vtask_uvm_report_warning__132__verbosity = 0;
    std::string __Vtask_uvm_report_warning__132__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__132__line;
    __Vtask_uvm_report_warning__132__line = 0;
    std::string __Vtask_uvm_report_warning__132__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__132__report_enabled_checked;
    __Vtask_uvm_report_warning__132__report_enabled_checked = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__133__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__134__Vfuncout;
    IData/*31:0*/ __Vfunc_get_default_precedence__136__Vfuncout;
    __Vfunc_get_default_precedence__136__Vfuncout = 0;
    std::string __Vtask_get_name__137__Vfuncout;
    IData/*31:0*/ __Vtask_size__138__Vfuncout;
    __Vtask_size__138__Vfuncout = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> __Vtask_get__139__Vfuncout;
    std::string __Vtask_uvm_report_warning__140__id;
    std::string __Vtask_uvm_report_warning__140__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__140__verbosity;
    __Vtask_uvm_report_warning__140__verbosity = 0;
    std::string __Vtask_uvm_report_warning__140__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__140__line;
    __Vtask_uvm_report_warning__140__line = 0;
    std::string __Vtask_uvm_report_warning__140__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__140__report_enabled_checked;
    __Vtask_uvm_report_warning__140__report_enabled_checked = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__141__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__142__Vfuncout;
    IData/*31:0*/ __Vfunc_get_default_precedence__144__Vfuncout;
    __Vfunc_get_default_precedence__144__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_queue__Tz22> q;
    std::string name;
    IData/*31:0*/ i;
    i = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> rsrc;
    {
        if ((VlNull{} == r)) {
            __Vtask_uvm_report_warning__132__report_enabled_checked = 0U;
            __Vtask_uvm_report_warning__132__context_name = ""s;
            __Vtask_uvm_report_warning__132__line = 0U;
            __Vtask_uvm_report_warning__132__filename = ""s;
            __Vtask_uvm_report_warning__132__verbosity = 0x000000c8U;
            __Vtask_uvm_report_warning__132__message = "attempting to get precedence of a null resource"s;
            __Vtask_uvm_report_warning__132__id = "NULLRASRC"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__133__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__133__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__134__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__134__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__132__id, __Vtask_uvm_report_warning__132__message, __Vtask_uvm_report_warning__132__verbosity, __Vtask_uvm_report_warning__132__filename, __Vtask_uvm_report_warning__132__line, __Vtask_uvm_report_warning__132__context_name, (IData)(__Vtask_uvm_report_warning__132__report_enabled_checked));
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get_default_precedence(vlProcess, vlSymsp, __Vfunc_get_default_precedence__136__Vfuncout);
            get_precedence__Vfuncrtn = __Vfunc_get_default_precedence__136__Vfuncout;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(r, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 928)->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__137__Vfuncout);
        name = __Vtask_get_name__137__Vfuncout;
        if (this->__PVT__rtab.exists(name)) {
            q = this->__PVT__rtab.at(name);
            i = 0U;
            {
                while ((i < ([&]() {
                                VL_NULL_CHECK(q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 932)
                             ->__VnoInFunc_size(vlSymsp, __Vtask_size__138__Vfuncout);
                            }(), __Vtask_size__138__Vfuncout))) {
                    VL_NULL_CHECK(q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 933)->__VnoInFunc_get(vlProcess, vlSymsp, i, __Vtask_get__139__Vfuncout);
                    rsrc = __Vtask_get__139__Vfuncout;
                    if ((rsrc == r)) {
                        goto __Vlabel1;
                    }
                    i = ((IData)(1U) + i);
                }
                __Vlabel1: ;
            }
        }
        if ((r != rsrc)) {
            __Vtask_uvm_report_warning__140__report_enabled_checked = 0U;
            __Vtask_uvm_report_warning__140__context_name = ""s;
            __Vtask_uvm_report_warning__140__line = 0U;
            __Vtask_uvm_report_warning__140__filename = ""s;
            __Vtask_uvm_report_warning__140__verbosity = 0x000000c8U;
            __Vtask_uvm_report_warning__140__message 
                = VL_SFORMATF_N_NX("resource named %@ is not placed within the pool",0,
                                   -1,&(name)) ;
            __Vtask_uvm_report_warning__140__id = "NORSRC"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__141__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__141__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__142__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__142__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__140__id, __Vtask_uvm_report_warning__140__message, __Vtask_uvm_report_warning__140__verbosity, __Vtask_uvm_report_warning__140__filename, __Vtask_uvm_report_warning__140__line, __Vtask_uvm_report_warning__140__context_name, (IData)(__Vtask_uvm_report_warning__140__report_enabled_checked));
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get_default_precedence(vlProcess, vlSymsp, __Vfunc_get_default_precedence__144__Vfuncout);
            get_precedence__Vfuncrtn = __Vfunc_get_default_precedence__144__Vfuncout;
            goto __Vlabel0;
        }
        get_precedence__Vfuncrtn = vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__ri_tab
            .at(r).__PVT__precedence;
        __Vlabel0: ;
    }
}

void Vtransactions_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_m_print_resources(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_printer> printer, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_queue__Tz22> rq, CData/*0:0*/ audit) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_m_print_resources\n"); );
    // Locals
    std::string __Vtask_get_name__146__Vfuncout;
    IData/*31:0*/ __Vtask_size__147__Vfuncout;
    __Vtask_size__147__Vfuncout = 0;
    std::string __Vfunc_uvm_object_value_str__148__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> __Vfunc_uvm_object_value_str__148__v;
    IData/*31:0*/ __Vtask_get_inst_id__149__Vfuncout;
    __Vtask_get_inst_id__149__Vfuncout = 0;
    IData/*31:0*/ __Vtask_size__150__Vfuncout;
    __Vtask_size__150__Vfuncout = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> __Vtask_get__152__Vfuncout;
    CData/*0:0*/ __Vtask_get_scope__153__Vfuncout;
    __Vtask_get_scope__153__Vfuncout = 0;
    std::string __Vtask_get_scope__153__scope;
    std::string __Vtask_get_name__155__Vfuncout;
    std::string __Vtask_m_value_type_name__157__Vfuncout;
    std::string __Vtask_m_value_as_string__158__Vfuncout;
    IData/*31:0*/ __Vfunc_get_precedence__161__Vfuncout;
    __Vfunc_get_precedence__161__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ unnamedblk13__DOT__i;
    unnamedblk13__DOT__i = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> unnamedblk13__DOT__unnamedblk14__DOT__r;
    std::string unnamedblk13__DOT__unnamedblk14__DOT__scope;
    std::string unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__i;
    CData/*0:0*/ unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__i__Vfirst;
    unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__i__Vfirst = 0;
    VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 993)->__VnoInFunc_push_element(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                    VL_NULL_CHECK(rq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 993)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__146__Vfuncout);
                }(), __Vtask_get_name__146__Vfuncout)), "uvm_queue#(uvm_resource_base)"s, VL_SFORMATF_N_NX("%0d",0,
                                                                                32,
                                                                                ([&]() {
                        VL_NULL_CHECK(rq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 995)
                                                                                ->__VnoInFunc_size(vlSymsp, __Vtask_size__147__Vfuncout);
                    }(), __Vtask_size__147__Vfuncout)) , 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                    __Vfunc_uvm_object_value_str__148__v 
                        = rq;
                    {
                        if ((VlNull{} == __Vfunc_uvm_object_value_str__148__v)) {
                            __Vfunc_uvm_object_value_str__148__Vfuncout = "<null>"s;
                            goto __Vlabel0;
                        }
                        __Vfunc_uvm_object_value_str__148__Vfuncout 
                            = VL_SFORMATF_N_NX("%0d",0,
                                               32,([&]() {
                                        VL_NULL_CHECK(__Vfunc_uvm_object_value_str__148__v, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_misc.svh", 198)
                                                   ->__VnoInFunc_get_inst_id(vlSymsp, __Vtask_get_inst_id__149__Vfuncout);
                                    }(), __Vtask_get_inst_id__149__Vfuncout)) ;
                        __Vfunc_uvm_object_value_str__148__Vfuncout 
                            = VL_CONCATN_NNN("@"s, __Vfunc_uvm_object_value_str__148__Vfuncout);
                        __Vlabel0: ;
                    }
                }(), __Vfunc_uvm_object_value_str__148__Vfuncout)));
    unnamedblk13__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk13__DOT__i, ([&]() {
                    VL_NULL_CHECK(rq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 998)
                                                 ->__VnoInFunc_size(vlSymsp, __Vtask_size__150__Vfuncout);
                }(), __Vtask_size__150__Vfuncout))) {
        VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 1001)->__VnoInFunc_push_element(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%0d]",0,
                                                                                32,
                                                                                unnamedblk13__DOT__i) , "uvm_resource"s, "-"s, "-"s);
        VL_NULL_CHECK(rq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 1006)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk13__DOT__i, __Vtask_get__152__Vfuncout);
        unnamedblk13__DOT__unnamedblk14__DOT__r = __Vtask_get__152__Vfuncout;
        this->__VnoInFunc_get_scope(vlSymsp, unnamedblk13__DOT__unnamedblk14__DOT__r, __Vtask_get_scope__153__scope, __Vtask_get_scope__153__Vfuncout);
        unnamedblk13__DOT__unnamedblk14__DOT__scope 
            = __Vtask_get_scope__153__scope;
        VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 1009)->__VnoInFunc_print_string(vlProcess, vlSymsp, "name"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                        VL_NULL_CHECK(unnamedblk13__DOT__unnamedblk14__DOT__r, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 1009)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__155__Vfuncout);
                    }(), __Vtask_get_name__155__Vfuncout)), 0x2eU);
        VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 1011)->__VnoInFunc_print_generic_element(vlProcess, vlSymsp, "value"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                        VL_NULL_CHECK(unnamedblk13__DOT__unnamedblk14__DOT__r, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 1012)
                                                                                ->__VnoInFunc_m_value_type_name(vlSymsp, __Vtask_m_value_type_name__157__Vfuncout);
                    }(), __Vtask_m_value_type_name__157__Vfuncout)), ""s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                        VL_NULL_CHECK(unnamedblk13__DOT__unnamedblk14__DOT__r, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 1014)
                                                                                ->__VnoInFunc_m_value_as_string(vlSymsp, __Vtask_m_value_as_string__158__Vfuncout);
                    }(), __Vtask_m_value_as_string__158__Vfuncout)));
        VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 1016)->__VnoInFunc_print_string(vlProcess, vlSymsp, "scope"s, unnamedblk13__DOT__unnamedblk14__DOT__scope, 0x2eU);
        VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 1018)->__VnoInFunc_print_field_int(vlProcess, vlSymsp, "precedence"s, 
                                                                                VL_EXTEND_QI(64,32, 
                                                                                ([&]() {
                        this->__VnoInFunc_get_precedence(vlSymsp, unnamedblk13__DOT__unnamedblk14__DOT__r, __Vfunc_get_precedence__161__Vfuncout);
                    }(), __Vfunc_get_precedence__161__Vfuncout)), 0x00000020U, 0x03000000U, 0x2eU, ""s);
        if (((IData)(audit) && (0U != VL_NULL_CHECK(unnamedblk13__DOT__unnamedblk14__DOT__r, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 1020)
                                ->__PVT__access.size()))) {
            VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 1021)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "accesses"s, VL_NULL_CHECK(unnamedblk13__DOT__unnamedblk14__DOT__r, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 1022)
                                                                                ->__PVT__access.size(), "queue"s, 0x2eU);
            if ((0U != VL_NULL_CHECK(unnamedblk13__DOT__unnamedblk14__DOT__r, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 1024)
                 ->__PVT__access.first(unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__i))) {
                unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__i__Vfirst = 1U;
                while (((IData)(unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__i__Vfirst) 
                        || (0U != VL_NULL_CHECK(unnamedblk13__DOT__unnamedblk14__DOT__r, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 1024)
                            ->__PVT__access.next(unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__i)))) {
                    unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__i__Vfirst = 0U;
                    VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 1025)->__VnoInFunc_print_string(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%@]",0,
                                                                                -1,
                                                                                &(unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__i)) , VL_SFORMATF_N_NX("reads: %0# @ %0t  writes: %0# @ %0t",0,
                                                                                32,
                                                                                VL_NULL_CHECK(unnamedblk13__DOT__unnamedblk14__DOT__r, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 1027)
                                                                                ->__PVT__access
                                                                                .at(unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__i)
                                                                                .__PVT__read_count,
                                                                                64,
                                                                                VL_NULL_CHECK(unnamedblk13__DOT__unnamedblk14__DOT__r, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 1028)
                                                                                ->__PVT__access
                                                                                .at(unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__i)
                                                                                .__PVT__read_time,
                                                                                -12,
                                                                                32,
                                                                                VL_NULL_CHECK(unnamedblk13__DOT__unnamedblk14__DOT__r, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 1029)
                                                                                ->__PVT__access
                                                                                .at(unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__i)
                                                                                .__PVT__write_count,
                                                                                64,
                                                                                VL_NULL_CHECK(unnamedblk13__DOT__unnamedblk14__DOT__r, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 1030)
                                                                                ->__PVT__access
                                                                                .at(unnamedblk13__DOT__unnamedblk14__DOT__unnamedblk15__DOT__i)
                                                                                .__PVT__write_time,
                                                                                -12) , 0x2eU);
                }
            }
            VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 1033)->__VnoInFunc_print_array_footer(vlSymsp, VL_NULL_CHECK(unnamedblk13__DOT__unnamedblk14__DOT__r, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 1033)
                                                                                ->__PVT__access.size());
        }
        VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 1036)->__VnoInFunc_pop_element(vlSymsp);
        unnamedblk13__DOT__i = ((IData)(1U) + unnamedblk13__DOT__i);
    }
    VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 1039)->__VnoInFunc_pop_element(vlSymsp);
}

void Vtransactions_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_print_resources(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_queue__Tz22> rq, CData/*0:0*/ audit) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_print_resources\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__170__Vfuncout;
    __Vfunc_uvm_report_enabled__170__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__170__verbosity;
    __Vfunc_uvm_report_enabled__170__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__170__severity;
    __Vfunc_uvm_report_enabled__170__severity = 0;
    std::string __Vfunc_uvm_report_enabled__170__id;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__171__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__172__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__173__Vfuncout;
    __Vtask_uvm_report_enabled__173__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__174__id;
    std::string __Vtask_uvm_report_info__174__message;
    IData/*31:0*/ __Vtask_uvm_report_info__174__verbosity;
    __Vtask_uvm_report_info__174__verbosity = 0;
    std::string __Vtask_uvm_report_info__174__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__174__line;
    __Vtask_uvm_report_info__174__line = 0;
    std::string __Vtask_uvm_report_info__174__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__174__report_enabled_checked;
    __Vtask_uvm_report_info__174__report_enabled_checked = 0;
    std::string __Vtask_emit__175__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__176__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__177__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ i;
    i = 0;
    std::string id;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__print_resources__Vstatic__printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 1061)->__VnoInFunc_flush(vlProcess, vlSymsp);
    if ((VlNull{} == rq)) {
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__print_resources__Vstatic__printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 1063)->__VnoInFunc_print_generic_element(vlProcess, vlSymsp, ""s, "uvm_queue#(uvm_resource_base)"s, ""s, "<null>"s);
    } else {
        this->__VnoInFunc_m_print_resources(vlSymsp, vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__print_resources__Vstatic__printer, rq, audit);
    }
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__170__id = "UVM/RESOURCE_POOL/PRINT_QUEUE"s;
                    __Vfunc_uvm_report_enabled__170__severity = 0U;
                    __Vfunc_uvm_report_enabled__170__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__171__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__171__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__172__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__172__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__170__verbosity, (IData)(__Vfunc_uvm_report_enabled__170__severity), __Vfunc_uvm_report_enabled__170__id, __Vtask_uvm_report_enabled__173__Vfuncout);
                    __Vfunc_uvm_report_enabled__170__Vfuncout 
                        = __Vtask_uvm_report_enabled__173__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__170__Vfuncout))) {
        __Vtask_uvm_report_info__174__report_enabled_checked = 1U;
        __Vtask_uvm_report_info__174__context_name = ""s;
        __Vtask_uvm_report_info__174__line = 0x0000042fU;
        __Vtask_uvm_report_info__174__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh"s;
        __Vtask_uvm_report_info__174__verbosity = 0U;
        __Vtask_uvm_report_info__174__message = VL_CVT_PACK_STR_NN(
                                                                   ([&]() {
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__print_resources__Vstatic__printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 1071)
                                                                    ->__VnoInFunc_emit(vlProcess, vlSymsp, __Vtask_emit__175__Vfuncout);
                }(), __Vtask_emit__175__Vfuncout));
        __Vtask_uvm_report_info__174__id = "UVM/RESOURCE_POOL/PRINT_QUEUE"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__176__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
            = __Vfunc_get__176__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__177__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
            = __Vtask_get_root__177__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__174__id, __Vtask_uvm_report_info__174__message, __Vtask_uvm_report_info__174__verbosity, __Vtask_uvm_report_info__174__filename, __Vtask_uvm_report_info__174__line, __Vtask_uvm_report_info__174__context_name, (IData)(__Vtask_uvm_report_info__174__report_enabled_checked));
    }
}

void Vtransactions_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_dump(Vtransactions__Syms* __restrict vlSymsp, CData/*0:0*/ audit, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_resource_pool::__VnoInFunc_dump\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__185__Vfuncout;
    __Vfunc_uvm_report_enabled__185__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__185__verbosity;
    __Vfunc_uvm_report_enabled__185__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__185__severity;
    __Vfunc_uvm_report_enabled__185__severity = 0;
    std::string __Vfunc_uvm_report_enabled__185__id;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__186__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__187__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__188__Vfuncout;
    __Vtask_uvm_report_enabled__188__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__189__id;
    std::string __Vtask_uvm_report_info__189__message;
    IData/*31:0*/ __Vtask_uvm_report_info__189__verbosity;
    __Vtask_uvm_report_info__189__verbosity = 0;
    std::string __Vtask_uvm_report_info__189__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__189__line;
    __Vtask_uvm_report_info__189__line = 0;
    std::string __Vtask_uvm_report_info__189__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__189__report_enabled_checked;
    __Vtask_uvm_report_info__189__report_enabled_checked = 0;
    std::string __Vtask_emit__190__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__191__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__192__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string unnamedblk16__DOT__name;
    CData/*0:0*/ unnamedblk16__DOT__name__Vfirst;
    unnamedblk16__DOT__name__Vfirst = 0;
    std::string name;
    if ((VlNull{} == vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__dump__Vstatic__m_printer)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__dump__Vstatic__m_printer 
            = VL_NEW(Vtransactions_uvm_pkg__03a__03auvm_tree_printer, vlProcess, vlSymsp, ""s);
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__dump__Vstatic__m_printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 1089)->__VnoInFunc_set_type_name_enabled(vlSymsp, 1U);
    }
    if ((VlNull{} == printer)) {
        printer = vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__PVT__dump__Vstatic__m_printer;
    }
    VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 1096)->__VnoInFunc_flush(vlProcess, vlSymsp);
    VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 1097)->__VnoInFunc_push_element(vlProcess, vlSymsp, "uvm_resource_pool"s, ""s, VL_SFORMATF_N_NX("%0d",0,
                                                                                32,
                                                                                this->__PVT__rtab.size()) , ""s);
    if ((0U != this->__PVT__rtab.first(unnamedblk16__DOT__name))) {
        unnamedblk16__DOT__name__Vfirst = 1U;
        while (((IData)(unnamedblk16__DOT__name__Vfirst) 
                || (0U != this->__PVT__rtab.next(unnamedblk16__DOT__name)))) {
            unnamedblk16__DOT__name__Vfirst = 0U;
            this->__VnoInFunc_m_print_resources(vlSymsp, printer, this->__PVT__rtab
                                                .at(unnamedblk16__DOT__name), audit);
        }
    }
    VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 1106)->__VnoInFunc_pop_element(vlSymsp);
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__185__id = "UVM/RESOURCE/DUMP"s;
                    __Vfunc_uvm_report_enabled__185__severity = 0U;
                    __Vfunc_uvm_report_enabled__185__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__186__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__186__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__187__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__187__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__185__verbosity, (IData)(__Vfunc_uvm_report_enabled__185__severity), __Vfunc_uvm_report_enabled__185__id, __Vtask_uvm_report_enabled__188__Vfuncout);
                    __Vfunc_uvm_report_enabled__185__Vfuncout 
                        = __Vtask_uvm_report_enabled__188__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__185__Vfuncout))) {
        __Vtask_uvm_report_info__189__report_enabled_checked = 1U;
        __Vtask_uvm_report_info__189__context_name = ""s;
        __Vtask_uvm_report_info__189__line = 0x00000454U;
        __Vtask_uvm_report_info__189__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh"s;
        __Vtask_uvm_report_info__189__verbosity = 0U;
        __Vtask_uvm_report_info__189__message = VL_CVT_PACK_STR_NN(
                                                                   ([&]() {
                    VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 1108)
                                                                    ->__VnoInFunc_emit(vlProcess, vlSymsp, __Vtask_emit__190__Vfuncout);
                }(), __Vtask_emit__190__Vfuncout));
        __Vtask_uvm_report_info__189__id = "UVM/RESOURCE/DUMP"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__191__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
            = __Vfunc_get__191__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__192__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
            = __Vtask_get_root__192__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__189__id, __Vtask_uvm_report_info__189__message, __Vtask_uvm_report_info__189__verbosity, __Vtask_uvm_report_info__189__filename, __Vtask_uvm_report_info__189__line, __Vtask_uvm_report_info__189__context_name, (IData)(__Vtask_uvm_report_info__189__report_enabled_checked));
    }
}

void Vtransactions_uvm_pkg__03a__03auvm_resource_pool::_ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_resource_pool::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_pool>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_resource_pool::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtransactions_uvm_pkg__03a__03auvm_resource_pool::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_resource_pool::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtransactions_uvm_pkg__03a__03auvm_resource_pool::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_resource_pool::to_string_middle\n"); );
    // Body
    std::string out;
    out += "rtab:" + VL_TO_STRING(__PVT__rtab);
    out += ", ttab:" + VL_TO_STRING(__PVT__ttab);
    out += ", get_record:" + VL_TO_STRING(__PVT__get_record);
    return (out);
}
