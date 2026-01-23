// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpools_top.h for the primary calling header

#include "Vpools_top__pch.h"

void Vpools_top_uvm_pkg__03a__03auvm_config_db___Vclpkg::__VnoInFunc_get(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name, IData/*31:0*/ &value, CData/*0:0*/ &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vpools_top_uvm_pkg__03a__03auvm_config_db___Vclpkg::__VnoInFunc_get\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource_pool> __Vfunc_get__0__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__1__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__2__Vfuncout;
    std::string __Vtask_get_full_name__3__Vfuncout;
    std::string __Vtask_get_full_name__4__Vfuncout;
    std::string __Vtask_get_full_name__5__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_queue__Tz19> __Vtask_lookup_regex_names__6__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource_> __Vfunc_get_type__7__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource_> __Vfunc_get_highest_precedence__8__Vfuncout;
    CData/*0:0*/ __Vfunc_is_tracing__9__Vfuncout;
    __Vfunc_is_tracing__9__Vfuncout = 0;
    IData/*31:0*/ __Vtask_read__11__Vfuncout;
    __Vtask_read__11__Vfuncout = 0;
    // Body
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource_> r;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource_pool> rp;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_queue__Tz19> rq;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> cs;
    {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__0__Vfuncout);
        rp = __Vfunc_get__0__Vfuncout;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__1__Vfuncout);
        cs = __Vfunc_get__1__Vfuncout;
        if ((VlNull{} == cntxt)) {
            VL_NULL_CHECK(cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_config_db.svh", 96)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__2__Vfuncout);
            cntxt = __Vtask_get_root__2__Vfuncout;
        }
        if ((""s == inst_name)) {
            VL_NULL_CHECK(cntxt, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_config_db.svh", 98)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__3__Vfuncout);
            inst_name = __Vtask_get_full_name__3__Vfuncout;
        } else if ((""s != ([&]() {
                        VL_NULL_CHECK(cntxt, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_config_db.svh", 99)
                            ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__4__Vfuncout);
                    }(), __Vtask_get_full_name__4__Vfuncout))) {
            inst_name = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                      ([&]() {
                            VL_NULL_CHECK(cntxt, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_config_db.svh", 100)
                                                       ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__5__Vfuncout);
                        }(), __Vtask_get_full_name__5__Vfuncout), "."s), inst_name);
        }
        VL_NULL_CHECK(rp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_config_db.svh", 102)->__VnoInFunc_lookup_regex_names(vlProcess, vlSymsp, inst_name, field_name, 
                                                                                ([&]() {
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource___Vclpkg.__VnoInFunc_get_type(vlProcess, vlSymsp, __Vfunc_get_type__7__Vfuncout);
                }(), __Vfunc_get_type__7__Vfuncout), __Vtask_lookup_regex_names__6__Vfuncout);
        rq = __Vtask_lookup_regex_names__6__Vfuncout;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource___Vclpkg.__VnoInFunc_get_highest_precedence(vlProcess, vlSymsp, rq, __Vfunc_get_highest_precedence__8__Vfuncout);
        r = __Vfunc_get_highest_precedence__8__Vfuncout;
        if (([&]() {
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db_options__Vclpkg.__VnoInFunc_is_tracing(vlProcess, vlSymsp, __Vfunc_is_tracing__9__Vfuncout);
                }(), (IData)(__Vfunc_is_tracing__9__Vfuncout))) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz50__Vclpkg.__VnoInFunc_m_show_msg(vlProcess, vlSymsp, "CFGDB/GET"s, "Configuration"s, "read"s, inst_name, field_name, cntxt, r);
        }
        if ((VlNull{} == r)) {
            get__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(r, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_config_db.svh", 111)->__VnoInFunc_read(vlProcess, vlSymsp, cntxt, __Vtask_read__11__Vfuncout);
        value = __Vtask_read__11__Vfuncout;
        get__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_config_db___Vclpkg::__VnoInFunc_set(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name, IData/*31:0*/ value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vpools_top_uvm_pkg__03a__03auvm_config_db___Vclpkg::__VnoInFunc_set\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__12__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource_pool> __Vtask_get_resource_pool__13__Vfuncout;
    VlClassRef<Vpools_top_std__03a__03aprocess> __Vfunc_self__14__Vfuncout;
    std::string __Vtask_get_randstate__15__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__16__Vfuncout;
    std::string __Vtask_get_full_name__17__Vfuncout;
    std::string __Vtask_get_full_name__18__Vfuncout;
    std::string __Vtask_get_full_name__19__Vfuncout;
    IData/*31:0*/ __Vtask_exists__21__Vfuncout;
    __Vtask_exists__21__Vfuncout = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource_> __Vtask_get__22__Vfuncout;
    std::string __Vtask_get_name__26__Vfuncout;
    IData/*31:0*/ __Vtask_get_resource_pool_default_precedence__27__Vfuncout;
    __Vtask_get_resource_pool_default_precedence__27__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_depth__28__Vfuncout;
    __Vtask_get_depth__28__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_resource_pool_default_precedence__29__Vfuncout;
    __Vtask_get_resource_pool_default_precedence__29__Vfuncout = 0;
    IData/*31:0*/ __Vtask_size__33__Vfuncout;
    __Vtask_size__33__Vfuncout = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03am_uvm_waiter> __Vtask_get__34__Vfuncout;
    CData/*0:0*/ __Vfunc_uvm_is_match__35__Vfuncout;
    __Vfunc_uvm_is_match__35__Vfuncout = 0;
    std::string __Vfunc_uvm_is_match__35__expr;
    std::string __Vfunc_uvm_is_match__35__str;
    std::string __Vfunc_uvm_glob_to_re__36__Vfuncout;
    std::string __Vfunc_uvm_glob_to_re__36__glob;
    IData/*31:0*/ __Vfunc_uvm_re_match__37__Vfuncout;
    __Vfunc_uvm_re_match__37__Vfuncout = 0;
    std::string __Vfunc_uvm_re_match__37__re;
    std::string __Vfunc_uvm_re_match__37__str;
    IData/*31:0*/ __Vfunc_uvm_re_match__37____Vincrement1;
    __Vfunc_uvm_re_match__37____Vincrement1 = 0;
    CData/*0:0*/ __Vfunc_is_tracing__39__Vfuncout;
    __Vfunc_is_tracing__39__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vpools_top_uvm_pkg__03a__03am_uvm_waiter> unnamedblk1__DOT__w;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__i;
    unnamedblk1__DOT__unnamedblk2__DOT__i = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> top;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> curr_phase;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource_> r;
    CData/*0:0*/ exists;
    exists = 0;
    std::string lookup;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_pool__Tz49_TBz74> pool;
    std::string rstate;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> cs;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__12__Vfuncout);
    cs = __Vfunc_get__12__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource_pool> rp;
    VL_NULL_CHECK(cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_config_db.svh", 161)->__VnoInFunc_get_resource_pool(vlSymsp, __Vtask_get_resource_pool__13__Vfuncout);
    rp = __Vtask_get_resource_pool__13__Vfuncout;
    IData/*31:0*/ precedence;
    precedence = 0;
    VlClassRef<Vpools_top_std__03a__03aprocess> p;
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __Vfunc_self__14__Vfuncout);
    p = __Vfunc_self__14__Vfuncout;
    if ((VlNull{} != p)) {
        VL_NULL_CHECK(p, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_config_db.svh", 167)->__VnoInFunc_get_randstate(vlSymsp, __Vtask_get_randstate__15__Vfuncout);
        rstate = __Vtask_get_randstate__15__Vfuncout;
    }
    VL_NULL_CHECK(cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_config_db.svh", 169)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__16__Vfuncout);
    top = __Vtask_get_root__16__Vfuncout;
    curr_phase = VL_NULL_CHECK(top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_config_db.svh", 171)
        ->__PVT__m_current_phase;
    if ((VlNull{} == cntxt)) {
        cntxt = top;
    }
    if ((""s == inst_name)) {
        VL_NULL_CHECK(cntxt, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_config_db.svh", 176)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__17__Vfuncout);
        inst_name = __Vtask_get_full_name__17__Vfuncout;
    } else if ((""s != ([&]() {
                    VL_NULL_CHECK(cntxt, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_config_db.svh", 177)
                        ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__18__Vfuncout);
                }(), __Vtask_get_full_name__18__Vfuncout))) {
        inst_name = VL_CONCATN_NNN(VL_CONCATN_NNN(([&]() {
                        VL_NULL_CHECK(cntxt, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_config_db.svh", 178)
                                                   ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__19__Vfuncout);
                    }(), __Vtask_get_full_name__19__Vfuncout), "."s), inst_name);
    }
    if ((! this->__PVT__m_rsc.exists(cntxt))) {
        this->__PVT__m_rsc.at(cntxt) = VL_NEW(Vpools_top_uvm_pkg__03a__03auvm_pool__Tz49_TBz74, vlProcess, vlSymsp, ""s);
    }
    pool = this->__PVT__m_rsc.at(cntxt);
    lookup = VL_CONCATN_NNN(VL_CONCATN_NNN(inst_name, "__M_UVM__"s), field_name);
    if ((0U != ([&]() {
                    VL_NULL_CHECK(pool, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_config_db.svh", 191)
                ->__VnoInFunc_exists(vlSymsp, lookup, __Vtask_exists__21__Vfuncout);
                }(), __Vtask_exists__21__Vfuncout))) {
        VL_NULL_CHECK(pool, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_config_db.svh", 197)->__VnoInFunc_get(vlSymsp, lookup, __Vtask_get__22__Vfuncout);
        r = __Vtask_get__22__Vfuncout;
        exists = 1U;
    } else {
        r = VL_NEW(Vpools_top_uvm_pkg__03a__03auvm_resource_, vlProcess, vlSymsp, field_name);
        VL_NULL_CHECK(rp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_config_db.svh", 193)->__VnoInFunc_set_scope(vlProcess, vlSymsp, r, inst_name);
        VL_NULL_CHECK(pool, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_config_db.svh", 194)->__VnoInFunc_add(vlSymsp, lookup, r);
    }
    precedence = (((VlNull{} != curr_phase) && ("build"s 
                                                == 
                                                ([&]() {
                        VL_NULL_CHECK(curr_phase, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_config_db.svh", 201)
                                                 ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__26__Vfuncout);
                    }(), __Vtask_get_name__26__Vfuncout)))
                   ? (([&]() {
                    VL_NULL_CHECK(cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_config_db.svh", 202)
                       ->__VnoInFunc_get_resource_pool_default_precedence(vlSymsp, __Vtask_get_resource_pool_default_precedence__27__Vfuncout);
                }(), __Vtask_get_resource_pool_default_precedence__27__Vfuncout) 
                      - ([&]() {
                    VL_NULL_CHECK(cntxt, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_config_db.svh", 202)
                         ->__VnoInFunc_get_depth(vlSymsp, __Vtask_get_depth__28__Vfuncout);
                }(), __Vtask_get_depth__28__Vfuncout))
                   : ([&]() {
                VL_NULL_CHECK(cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_config_db.svh", 204)
                      ->__VnoInFunc_get_resource_pool_default_precedence(vlSymsp, __Vtask_get_resource_pool_default_precedence__29__Vfuncout);
            }(), __Vtask_get_resource_pool_default_precedence__29__Vfuncout));
    VL_NULL_CHECK(rp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_config_db.svh", 206)->__VnoInFunc_set_precedence(vlProcess, vlSymsp, r, precedence);
    VL_NULL_CHECK(r, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_config_db.svh", 207)->__VnoInFunc_write(vlSymsp, value, cntxt);
    VL_NULL_CHECK(rp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_config_db.svh", 209)->__VnoInFunc_set_priority_name(vlProcess, vlSymsp, r, 0U);
    if (this->__PVT__m_waiters.exists(field_name)) {
        unnamedblk1__DOT__unnamedblk2__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk1__DOT__unnamedblk2__DOT__i, 
                          ([&]() {
                        VL_NULL_CHECK(this->__PVT__m_waiters
                                      .at(field_name), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_config_db.svh", 214)
                           ->__VnoInFunc_size(vlSymsp, __Vtask_size__33__Vfuncout);
                    }(), __Vtask_size__33__Vfuncout))) {
            VL_NULL_CHECK(this->__PVT__m_waiters.at(field_name), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_config_db.svh", 215)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk1__DOT__unnamedblk2__DOT__i, __Vtask_get__34__Vfuncout);
            unnamedblk1__DOT__w = __Vtask_get__34__Vfuncout;
            if (([&]() {
                        __Vfunc_uvm_is_match__35__str 
                            = VL_CVT_PACK_STR_NN(VL_NULL_CHECK(unnamedblk1__DOT__w, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_config_db.svh", 216)
                                                 ->__PVT__inst_name);
                        __Vfunc_uvm_is_match__35__expr 
                            = inst_name;
                        __Vfunc_uvm_glob_to_re__36__glob 
                            = __Vfunc_uvm_is_match__35__expr;
                        __Vfunc_uvm_glob_to_re__36__Vfuncout 
                            = __Vfunc_uvm_glob_to_re__36__glob;
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
                            = __Vfunc_uvm_glob_to_re__36__Vfuncout;
                        __Vfunc_uvm_is_match__35__Vfuncout 
                            = (0U == ([&]() {
                                    __Vfunc_uvm_re_match__37__str 
                                        = __Vfunc_uvm_is_match__35__str;
                                    __Vfunc_uvm_re_match__37__re 
                                        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s;
                                    {
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                                        if ((0U == 
                                             VL_LEN_IN(__Vfunc_uvm_re_match__37__re))) {
                                            __Vfunc_uvm_re_match__37__Vfuncout = 0U;
                                            goto __Vlabel0;
                                        }
                                        if ((0x5eU 
                                             == VL_GETC_N(__Vfunc_uvm_re_match__37__re,0U))) {
                                            __Vfunc_uvm_re_match__37__re 
                                                = VL_SUBSTR_N(__Vfunc_uvm_re_match__37__re,1U,
                                                              (VL_LEN_IN(__Vfunc_uvm_re_match__37__re) 
                                                               - (IData)(1U)));
                                        }
                                        while (((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                 != 
                                                 VL_LEN_IN(__Vfunc_uvm_re_match__37__str)) 
                                                & (0x2aU 
                                                   != 
                                                   VL_GETC_N(__Vfunc_uvm_re_match__37__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                            if (((VL_GETC_N(__Vfunc_uvm_re_match__37__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                                  != 
                                                  VL_GETC_N(__Vfunc_uvm_re_match__37__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                                 & (0x3fU 
                                                    != 
                                                    VL_GETC_N(__Vfunc_uvm_re_match__37__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                                __Vfunc_uvm_re_match__37__Vfuncout = 1U;
                                                goto __Vlabel0;
                                            }
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                = ((IData)(1U) 
                                                   + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                = ((IData)(1U) 
                                                   + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                        }
                                        while ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                != 
                                                VL_LEN_IN(__Vfunc_uvm_re_match__37__str))) {
                                            if ((0x2aU 
                                                 == 
                                                 VL_GETC_N(__Vfunc_uvm_re_match__37__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                                if (
                                                    (vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                     == 
                                                     VL_LEN_IN(__Vfunc_uvm_re_match__37__re))) {
                                                    __Vfunc_uvm_re_match__37__Vfuncout = 0U;
                                                    goto __Vlabel0;
                                                }
                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                                                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                            } else if (
                                                       ((VL_GETC_N(__Vfunc_uvm_re_match__37__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                                         == 
                                                         VL_GETC_N(__Vfunc_uvm_re_match__37__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                                        | (0x3fU 
                                                           == 
                                                           VL_GETC_N(__Vfunc_uvm_re_match__37__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
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
                                                __Vfunc_uvm_re_match__37____Vincrement1 
                                                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                    = __Vfunc_uvm_re_match__37____Vincrement1;
                                            }
                                        }
                                        while ((VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                                           VL_LEN_IN(__Vfunc_uvm_re_match__37__re)) 
                                                & (0x2aU 
                                                   == 
                                                   VL_GETC_N(__Vfunc_uvm_re_match__37__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                = ((IData)(1U) 
                                                   + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                        }
                                        __Vfunc_uvm_re_match__37__Vfuncout 
                                            = ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                == 
                                                VL_LEN_IN(__Vfunc_uvm_re_match__37__re))
                                                ? 0U
                                                : 1U);
                                        __Vlabel0: ;
                                    }
                                }(), __Vfunc_uvm_re_match__37__Vfuncout));
                    }(), (IData)(__Vfunc_uvm_is_match__35__Vfuncout))) {
                vlSymsp->fireEvent(VL_NULL_CHECK(unnamedblk1__DOT__w, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_config_db.svh", 217)
                                   ->__PVT__trigger);
            }
            unnamedblk1__DOT__unnamedblk2__DOT__i = 
                ((IData)(1U) + unnamedblk1__DOT__unnamedblk2__DOT__i);
        }
    }
    if ((VlNull{} != p)) {
        VL_NULL_CHECK(p, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_config_db.svh", 222)->__VnoInFunc_set_randstate(vlSymsp, rstate);
    }
    if (([&]() {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db_options__Vclpkg.__VnoInFunc_is_tracing(vlProcess, vlSymsp, __Vfunc_is_tracing__39__Vfuncout);
            }(), (IData)(__Vfunc_is_tracing__39__Vfuncout))) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz50__Vclpkg.__VnoInFunc_m_show_msg(vlProcess, vlSymsp, "CFGDB/SET"s, "Configuration"s, "set"s, inst_name, field_name, cntxt, r);
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_config_db___Vclpkg::__VnoInFunc_exists(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name, CData/*0:0*/ spell_chk, CData/*0:0*/ &exists__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vpools_top_uvm_pkg__03a__03auvm_config_db___Vclpkg::__VnoInFunc_exists\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__41__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__42__Vfuncout;
    std::string __Vtask_get_full_name__43__Vfuncout;
    std::string __Vtask_get_full_name__44__Vfuncout;
    std::string __Vtask_get_full_name__45__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource_> __Vfunc_get_by_name__46__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> cs;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__41__Vfuncout);
    cs = __Vfunc_get__41__Vfuncout;
    if ((VlNull{} == cntxt)) {
        VL_NULL_CHECK(cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_config_db.svh", 247)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__42__Vfuncout);
        cntxt = __Vtask_get_root__42__Vfuncout;
    }
    if ((""s == inst_name)) {
        VL_NULL_CHECK(cntxt, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_config_db.svh", 249)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__43__Vfuncout);
        inst_name = __Vtask_get_full_name__43__Vfuncout;
    } else if ((""s != ([&]() {
                    VL_NULL_CHECK(cntxt, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_config_db.svh", 250)
                        ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__44__Vfuncout);
                }(), __Vtask_get_full_name__44__Vfuncout))) {
        inst_name = VL_CONCATN_NNN(VL_CONCATN_NNN(([&]() {
                        VL_NULL_CHECK(cntxt, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_config_db.svh", 251)
                                                   ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__45__Vfuncout);
                    }(), __Vtask_get_full_name__45__Vfuncout), "."s), inst_name);
    }
    exists__Vfuncrtn = (VlNull{} != ([&]() {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz50__Vclpkg.__VnoInFunc_get_by_name(vlSymsp, inst_name, field_name, (IData)(spell_chk), __Vfunc_get_by_name__46__Vfuncout);
            }(), __Vfunc_get_by_name__46__Vfuncout));
}

VlCoroutine Vpools_top_uvm_pkg__03a__03auvm_config_db___Vclpkg::__VnoInFunc_wait_modified(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vpools_top_uvm_pkg__03a__03auvm_config_db___Vclpkg::__VnoInFunc_wait_modified\n"); );
    // Locals
    VlClassRef<Vpools_top_std__03a__03aprocess> __Vfunc_self__47__Vfuncout;
    std::string __Vtask_get_randstate__48__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__49__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__50__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__51__Vfuncout;
    std::string __Vtask_get_full_name__52__Vfuncout;
    std::string __Vtask_get_full_name__53__Vfuncout;
    IData/*31:0*/ __Vtask_size__58__Vfuncout;
    __Vtask_size__58__Vfuncout = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03am_uvm_waiter> __Vtask_get__59__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ unnamedblk3__DOT__i;
    unnamedblk3__DOT__i = 0;
    VlClassRef<Vpools_top_std__03a__03aprocess> p;
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __Vfunc_self__47__Vfuncout);
    p = __Vfunc_self__47__Vfuncout;
    std::string rstate;
    VL_NULL_CHECK(p, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_config_db.svh", 267)->__VnoInFunc_get_randstate(vlSymsp, __Vtask_get_randstate__48__Vfuncout);
    rstate = __Vtask_get_randstate__48__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03am_uvm_waiter> waiter;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> cs;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__49__Vfuncout);
    cs = __Vfunc_get__49__Vfuncout;
    if ((VlNull{} == cntxt)) {
        VL_NULL_CHECK(cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_config_db.svh", 272)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__50__Vfuncout);
        cntxt = __Vtask_get_root__50__Vfuncout;
    }
    if ((cntxt != ([&]() {
                    VL_NULL_CHECK(cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_config_db.svh", 273)
                   ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__51__Vfuncout);
                }(), __Vtask_get_root__51__Vfuncout))) {
        inst_name = ((""s != inst_name) ? VL_CONCATN_NNN(
                                                         VL_CONCATN_NNN(
                                                                        ([&]() {
                            VL_NULL_CHECK(cntxt, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_config_db.svh", 275)
                                                                         ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__52__Vfuncout);
                        }(), __Vtask_get_full_name__52__Vfuncout), "."s), inst_name)
                      : ([&]() {
                    VL_NULL_CHECK(cntxt, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_config_db.svh", 277)
                         ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__53__Vfuncout);
                }(), __Vtask_get_full_name__53__Vfuncout));
    }
    waiter = VL_NEW(Vpools_top_uvm_pkg__03a__03am_uvm_waiter, vlSymsp, inst_name, field_name);
    if ((! this->__PVT__m_waiters.exists(field_name))) {
        this->__PVT__m_waiters.at(field_name) = VL_NEW(Vpools_top_uvm_pkg__03a__03auvm_queue__Tz73, vlProcess, vlSymsp, ""s);
    }
    VL_NULL_CHECK(this->__PVT__m_waiters.at(field_name), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_config_db.svh", 284)->__VnoInFunc_push_back(vlSymsp, waiter);
    VL_NULL_CHECK(p, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_config_db.svh", 286)->__VnoInFunc_set_randstate(vlSymsp, rstate);
    CData/*0:0*/ __VdynTrigger_hfec37c43__0;
    __VdynTrigger_hfec37c43__0 = 0;
    __VdynTrigger_hfec37c43__0 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_hfec37c43__0)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@([event] uvm_pkg::uvm_config_db___Vclpkg.waiter.trigger)", 
                                                     "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_config_db.svh", 
                                                     289);
        __VdynTrigger_hfec37c43__0 = VL_NULL_CHECK(waiter, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_config_db.svh", 289)
            ->__PVT__trigger.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hfec37c43__0);
        VL_NULL_CHECK(waiter, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_config_db.svh", 289)->__PVT__trigger.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@([event] uvm_pkg::uvm_config_db___Vclpkg.waiter.trigger)", 
                                                 "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_config_db.svh", 
                                                 289);
    unnamedblk3__DOT__i = 0U;
    {
        while (VL_LTS_III(32, unnamedblk3__DOT__i, 
                          ([&]() {
                        VL_NULL_CHECK(this->__PVT__m_waiters
                                      .at(field_name), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_config_db.svh", 292)
                           ->__VnoInFunc_size(vlSymsp, __Vtask_size__58__Vfuncout);
                    }(), __Vtask_size__58__Vfuncout))) {
            if ((([&]() {
                            VL_NULL_CHECK(this->__PVT__m_waiters
                                          .at(field_name), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_config_db.svh", 293)
                  ->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk3__DOT__i, __Vtask_get__59__Vfuncout);
                        }(), __Vtask_get__59__Vfuncout) 
                 == waiter)) {
                VL_NULL_CHECK(this->__PVT__m_waiters
                              .at(field_name), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_config_db.svh", 294)->__VnoInFunc_delete(vlSymsp, unnamedblk3__DOT__i);
                goto __Vlabel0;
            }
            unnamedblk3__DOT__i = ((IData)(1U) + unnamedblk3__DOT__i);
        }
        __Vlabel0: ;
    }
    co_return;}

Vpools_top_uvm_pkg__03a__03auvm_config_db_::Vpools_top_uvm_pkg__03a__03auvm_config_db_(Vpools_top__Syms* __restrict vlSymsp)
    : Vpools_top_uvm_pkg__03a__03auvm_resource_db__Tz50(vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vpools_top_uvm_pkg__03a__03auvm_config_db_::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vpools_top_uvm_pkg__03a__03auvm_config_db_::_ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vpools_top_uvm_pkg__03a__03auvm_config_db_::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vpools_top_uvm_pkg__03a__03auvm_config_db_::~Vpools_top_uvm_pkg__03a__03auvm_config_db_() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vpools_top_uvm_pkg__03a__03auvm_config_db_::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_config_db_>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vpools_top_uvm_pkg__03a__03auvm_config_db_::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vpools_top_uvm_pkg__03a__03auvm_config_db_::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vpools_top_uvm_pkg__03a__03auvm_config_db_::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vpools_top_uvm_pkg__03a__03auvm_config_db_::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vpools_top_uvm_pkg__03a__03auvm_config_db_::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vpools_top_uvm_pkg__03a__03auvm_resource_db__Tz50::to_string_middle();
    return (out);
}
