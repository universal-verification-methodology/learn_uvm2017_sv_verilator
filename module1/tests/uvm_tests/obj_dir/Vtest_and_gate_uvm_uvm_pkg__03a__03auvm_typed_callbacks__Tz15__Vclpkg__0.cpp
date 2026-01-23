// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_and_gate_uvm.h for the primary calling header

#include "Vtest_and_gate_uvm__pch.h"

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz15__Vclpkg::__VnoInFunc_m_initialize(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz15> &m_initialize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz15__Vclpkg::__VnoInFunc_m_initialize\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks_base> __Vtask_m_initialize__0__Vfuncout;
    // Body
    if ((VlNull{} == this->__PVT__m_t_inst)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__VnoInFunc_m_initialize(vlProcess, vlSymsp, __Vtask_m_initialize__0__Vfuncout);
        this->__PVT__m_t_inst = VL_NEW(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz15, vlProcess, vlSymsp);
        this->__PVT__m_tw_cb_q = VL_NEW(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_queue__Tz48, vlProcess, vlSymsp, "typewide_queue"s);
    }
    m_initialize__Vfuncrtn = this->__PVT__m_t_inst;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz15__Vclpkg::__VnoInFunc_m_cb_find(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_queue__Tz48> q, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callback> cb, IData/*31:0*/ &m_cb_find__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz15__Vclpkg::__VnoInFunc_m_cb_find\n"); );
    // Locals
    IData/*31:0*/ __Vtask_size__3__Vfuncout;
    __Vtask_size__3__Vfuncout = 0;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callback> __Vtask_get__4__Vfuncout;
    // Body
    IData/*31:0*/ unnamedblk3__DOT__i;
    unnamedblk3__DOT__i = 0;
    {
        unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk3__DOT__i, 
                          ([&]() {
                        VL_NULL_CHECK(q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 227)
                           ->__VnoInFunc_size(vlSymsp, __Vtask_size__3__Vfuncout);
                    }(), __Vtask_size__3__Vfuncout))) {
            if ((([&]() {
                            VL_NULL_CHECK(q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 228)
                  ->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk3__DOT__i, __Vtask_get__4__Vfuncout);
                        }(), __Vtask_get__4__Vfuncout) 
                 == cb)) {
                m_cb_find__Vfuncrtn = unnamedblk3__DOT__i;
                goto __Vlabel0;
            }
            unnamedblk3__DOT__i = ((IData)(1U) + unnamedblk3__DOT__i);
        }
        m_cb_find__Vfuncrtn = 0xffffffffU;
        __Vlabel0: ;
    }
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz15__Vclpkg::__VnoInFunc_m_cb_find_name(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_queue__Tz48> q, std::string name, std::string where, IData/*31:0*/ &m_cb_find_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz15__Vclpkg::__VnoInFunc_m_cb_find_name\n"); );
    // Locals
    IData/*31:0*/ __Vtask_size__5__Vfuncout;
    __Vtask_size__5__Vfuncout = 0;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callback> __Vtask_get__6__Vfuncout;
    std::string __Vtask_get_name__7__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__8__Vfuncout;
    __Vfunc_uvm_report_enabled__8__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__8__verbosity;
    __Vfunc_uvm_report_enabled__8__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__8__severity;
    __Vfunc_uvm_report_enabled__8__severity = 0;
    std::string __Vfunc_uvm_report_enabled__8__id;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__9__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__10__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__11__Vfuncout;
    __Vtask_uvm_report_enabled__11__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__12__id;
    std::string __Vtask_uvm_report_warning__12__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__12__verbosity;
    __Vtask_uvm_report_warning__12__verbosity = 0;
    std::string __Vtask_uvm_report_warning__12__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__12__line;
    __Vtask_uvm_report_warning__12__line = 0;
    std::string __Vtask_uvm_report_warning__12__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__12__report_enabled_checked;
    __Vtask_uvm_report_warning__12__report_enabled_checked = 0;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__13__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__14__Vfuncout;
    // Body
    IData/*31:0*/ unnamedblk4__DOT__i;
    unnamedblk4__DOT__i = 0;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callback> cb;
    {
        unnamedblk4__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk4__DOT__i, 
                          ([&]() {
                        VL_NULL_CHECK(q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 235)
                           ->__VnoInFunc_size(vlSymsp, __Vtask_size__5__Vfuncout);
                    }(), __Vtask_size__5__Vfuncout))) {
            VL_NULL_CHECK(q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 236)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk4__DOT__i, __Vtask_get__6__Vfuncout);
            cb = __Vtask_get__6__Vfuncout;
            if ((([&]() {
                            VL_NULL_CHECK(cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 237)
                  ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__7__Vfuncout);
                        }(), __Vtask_get_name__7__Vfuncout) 
                 == name)) {
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__8__id = "UVM/CB/NAM/SAM"s;
                                __Vfunc_uvm_report_enabled__8__severity = 1U;
                                __Vfunc_uvm_report_enabled__8__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__9__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__9__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__10__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__10__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__8__verbosity, (IData)(__Vfunc_uvm_report_enabled__8__severity), __Vfunc_uvm_report_enabled__8__id, __Vtask_uvm_report_enabled__11__Vfuncout);
                                __Vfunc_uvm_report_enabled__8__Vfuncout 
                                    = __Vtask_uvm_report_enabled__11__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__8__Vfuncout))) {
                    __Vtask_uvm_report_warning__12__report_enabled_checked = 1U;
                    __Vtask_uvm_report_warning__12__context_name = ""s;
                    __Vtask_uvm_report_warning__12__line = 0x000000efU;
                    __Vtask_uvm_report_warning__12__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh"s;
                    __Vtask_uvm_report_warning__12__verbosity = 0U;
                    __Vtask_uvm_report_warning__12__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN("A callback named \""s, name), "\" is already registered with "s), where));
                        __Vtask_uvm_report_warning__12__id = "UVM/CB/NAM/SAM"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__13__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                            = __Vfunc_get__13__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__14__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                            = __Vtask_get_root__14__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                        ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__12__id, __Vtask_uvm_report_warning__12__message, __Vtask_uvm_report_warning__12__verbosity, __Vtask_uvm_report_warning__12__filename, __Vtask_uvm_report_warning__12__line, __Vtask_uvm_report_warning__12__context_name, (IData)(__Vtask_uvm_report_warning__12__report_enabled_checked));
                    }
                    m_cb_find_name__Vfuncrtn = 1U;
                    goto __Vlabel0;
                }
                unnamedblk4__DOT__i = ((IData)(1U) 
                                       + unnamedblk4__DOT__i);
            }
            m_cb_find_name__Vfuncrtn = 0U;
            __Vlabel0: ;
        }
    }

    void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz15__Vclpkg::__VnoInFunc_display(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_objection> obj) {
        VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz15__Vclpkg::__VnoInFunc_display\n"); );
        // Locals
        std::string __Vtask_get_type_name__16__Vfuncout;
        IData/*31:0*/ __Vtask_size__17__Vfuncout;
        __Vtask_size__17__Vfuncout = 0;
        VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callback> __Vtask_get__18__Vfuncout;
        std::string __Vtask_get_name__19__Vfuncout;
        CData/*0:0*/ __Vtask_is_enabled__20__Vfuncout;
        __Vtask_is_enabled__20__Vfuncout = 0;
        std::string __Vtask_get_name__21__Vfuncout;
        IData/*31:0*/ __Vtask_first__22__Vfuncout;
        __Vtask_first__22__Vfuncout = 0;
        IData/*31:0*/ __Vtask_next__23__Vfuncout;
        __Vtask_next__23__Vfuncout = 0;
        IData/*31:0*/ __Vtask_size__24__Vfuncout;
        __Vtask_size__24__Vfuncout = 0;
        VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_queue__Tz48> __Vtask_get__25__Vfuncout;
        IData/*31:0*/ __Vtask_size__28__Vfuncout;
        __Vtask_size__28__Vfuncout = 0;
        VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callback> __Vtask_get__29__Vfuncout;
        std::string __Vtask_get_name__30__Vfuncout;
        std::string __Vtask_get_full_name__31__Vfuncout;
        CData/*0:0*/ __Vtask_is_enabled__32__Vfuncout;
        __Vtask_is_enabled__32__Vfuncout = 0;
        std::string __Vtask_get_name__33__Vfuncout;
        std::string __Vtask_get_full_name__34__Vfuncout;
        IData/*31:0*/ __Vtask_next__35__Vfuncout;
        __Vtask_next__35__Vfuncout = 0;
        IData/*31:0*/ __Vtask_exists__36__Vfuncout;
        __Vtask_exists__36__Vfuncout = 0;
        IData/*31:0*/ __Vtask_size__37__Vfuncout;
        __Vtask_size__37__Vfuncout = 0;
        std::string __Vtask_get_full_name__38__Vfuncout;
        IData/*31:0*/ __Vtask_exists__39__Vfuncout;
        __Vtask_exists__39__Vfuncout = 0;
        VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_queue__Tz48> __Vtask_get__40__Vfuncout;
        IData/*31:0*/ __Vtask_size__43__Vfuncout;
        __Vtask_size__43__Vfuncout = 0;
        VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callback> __Vtask_get__44__Vfuncout;
        std::string __Vtask_get_name__45__Vfuncout;
        std::string __Vtask_get_full_name__46__Vfuncout;
        CData/*0:0*/ __Vtask_is_enabled__47__Vfuncout;
        __Vtask_is_enabled__47__Vfuncout = 0;
        std::string __Vtask_get_name__48__Vfuncout;
        std::string __Vtask_get_full_name__49__Vfuncout;
        std::string __Vtask_get_full_name__50__Vfuncout;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__51__Vfuncout;
        __Vfunc_uvm_report_enabled__51__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__51__verbosity;
        __Vfunc_uvm_report_enabled__51__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__51__severity;
        __Vfunc_uvm_report_enabled__51__severity = 0;
        std::string __Vfunc_uvm_report_enabled__51__id;
        VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__52__Vfuncout;
        VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__53__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_enabled__54__Vfuncout;
        __Vtask_uvm_report_enabled__54__Vfuncout = 0;
        std::string __Vtask_uvm_report_info__55__id;
        std::string __Vtask_uvm_report_info__55__message;
        IData/*31:0*/ __Vtask_uvm_report_info__55__verbosity;
        __Vtask_uvm_report_info__55__verbosity = 0;
        std::string __Vtask_uvm_report_info__55__filename;
        IData/*31:0*/ __Vtask_uvm_report_info__55__line;
        __Vtask_uvm_report_info__55__line = 0;
        std::string __Vtask_uvm_report_info__55__context_name;
        CData/*0:0*/ __Vtask_uvm_report_info__55__report_enabled_checked;
        __Vtask_uvm_report_info__55__report_enabled_checked = 0;
        std::string __Vfunc_m_uvm_string_queue_join__56__Vfuncout;
        VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__57__Vfuncout;
        VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__58__Vfuncout;
        std::string __Vtemp_1;
        std::string __Vtemp_2;
        std::string __Vtemp_3;
        std::string __Vtemp_4;
        std::string __Vtemp_5;
        std::string __Vtemp_6;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        IData/*31:0*/ unnamedblk7__DOT__i;
        unnamedblk7__DOT__i = 0;
        IData/*31:0*/ unnamedblk8__DOT__i;
        unnamedblk8__DOT__i = 0;
        IData/*31:0*/ unnamedblk9__DOT__i;
        unnamedblk9__DOT__i = 0;
        IData/*31:0*/ unnamedblk10__DOT__i;
        unnamedblk10__DOT__i = 0;
        VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_objection> me;
        VlQueue<std::string> cbq;
        VlQueue<std::string> inst_q;
        VlQueue<std::string> mode_q;
        VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callback> cb;
        std::string blanks;
        blanks = "                             "s;
        VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> bobj;
        bobj = obj;
        VlQueue<std::string> qs;
        VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_queue__Tz48> q;
        std::string tname;
        std::string str;
        IData/*31:0*/ max_cb_name;
        max_cb_name = 0;
        max_cb_name = 0U;
        IData/*31:0*/ max_inst_name;
        max_inst_name = 0;
        max_inst_name = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_tracing = 0U;
        tname = ((""s != this->__PVT__m_typename) ? this->__PVT__m_typename
                  : ((VlNull{} != obj) ? ([&]() {
                        VL_NULL_CHECK(obj, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 340)
                                          ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__16__Vfuncout);
                    }(), __Vtask_get_type_name__16__Vfuncout)
                      : "*"s));
        q = this->__PVT__m_tw_cb_q;
        unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk7__DOT__i, 
                          ([&]() {
                        VL_NULL_CHECK(q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 344)
                           ->__VnoInFunc_size(vlSymsp, __Vtask_size__17__Vfuncout);
                    }(), __Vtask_size__17__Vfuncout))) {
            VL_NULL_CHECK(q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 345)
                        ->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk7__DOT__i, __Vtask_get__18__Vfuncout);
            cb = __Vtask_get__18__Vfuncout;
            cbq.push_back(([&]() {
                        VL_NULL_CHECK(cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 346)
                           ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__19__Vfuncout);
                    }(), __Vtask_get_name__19__Vfuncout));
            inst_q.push_back("(*)"s);
            if (([&]() {
                        VL_NULL_CHECK(cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 348)
                 ->__VnoInFunc_is_enabled(vlSymsp, __Vtask_is_enabled__20__Vfuncout);
                    }(), (IData)(__Vtask_is_enabled__20__Vfuncout))) {
                mode_q.push_back("ON"s);
            } else {
                mode_q.push_back("OFF"s);
            }
            VL_NULL_CHECK(cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 351)
                        ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__21__Vfuncout);
            str = __Vtask_get_name__21__Vfuncout;
            max_cb_name = (VL_GTS_III(32, max_cb_name, 
                                      VL_LEN_IN(str))
                            ? max_cb_name : VL_LEN_IN(str));
            str = "(*)"s;
            max_inst_name = (VL_GTS_III(32, max_inst_name, 
                                        VL_LEN_IN(str))
                              ? max_inst_name : VL_LEN_IN(str));
            unnamedblk7__DOT__i = ((IData)(1U) + unnamedblk7__DOT__i);
        }
        if ((VlNull{} == obj)) {
            if ((0U != ([&]() {
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 358)
                        ->__VnoInFunc_first(vlSymsp, bobj, __Vtask_first__22__Vfuncout);
                        }(), __Vtask_first__22__Vfuncout))) {
                {
                    do {
                        if (VL_CAST_DYNAMIC(bobj, me)) {
                            goto __Vlabel0;
                        }
                    } while ((0U != ([&]() {
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 361)
                                     ->__VnoInFunc_next(vlSymsp, bobj, __Vtask_next__23__Vfuncout);
                                }(), __Vtask_next__23__Vfuncout)));
                    __Vlabel0: ;
                }
            }
            if (((VlNull{} != me) || (0U != ([&]() {
                                VL_NULL_CHECK(this->__PVT__m_tw_cb_q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 363)
                                             ->__VnoInFunc_size(vlSymsp, __Vtask_size__24__Vfuncout);
                            }(), __Vtask_size__24__Vfuncout)))) {
                qs.push_back(VL_SFORMATF_N_NX("Registered callbacks for all instances of %@\n",0,
                                              -1,&(tname)) );
                qs.push_back("---------------------------------------------------------------\n"s);
            }
            if ((VlNull{} != me)) {
                do {
                    if (VL_CAST_DYNAMIC(bobj, me)) {
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 370)
                        ->__VnoInFunc_get(vlSymsp, bobj, __Vtask_get__25__Vfuncout);
                        q = __Vtask_get__25__Vfuncout;
                        if ((VlNull{} == q)) {
                            q = VL_NEW(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_queue__Tz48, vlProcess, vlSymsp, ""s);
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 373)
                        ->__VnoInFunc_add(vlSymsp, bobj, q);
                        }
                        unnamedblk8__DOT__i = 0U;
                        while (VL_LTS_III(32, unnamedblk8__DOT__i, 
                                          ([&]() {
                                        VL_NULL_CHECK(q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 375)
                                           ->__VnoInFunc_size(vlSymsp, __Vtask_size__28__Vfuncout);
                                    }(), __Vtask_size__28__Vfuncout))) {
                            VL_NULL_CHECK(q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 376)
                        ->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk8__DOT__i, __Vtask_get__29__Vfuncout);
                            cb = __Vtask_get__29__Vfuncout;
                            cbq.push_back(([&]() {
                                        VL_NULL_CHECK(cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 377)
                                           ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__30__Vfuncout);
                                    }(), __Vtask_get_name__30__Vfuncout));
                            inst_q.push_back(([&]() {
                                        VL_NULL_CHECK(bobj, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 378)
                                              ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__31__Vfuncout);
                                    }(), __Vtask_get_full_name__31__Vfuncout));
                            if (([&]() {
                                        VL_NULL_CHECK(cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 379)
                                 ->__VnoInFunc_is_enabled(vlSymsp, __Vtask_is_enabled__32__Vfuncout);
                                    }(), (IData)(__Vtask_is_enabled__32__Vfuncout))) {
                                mode_q.push_back("ON"s);
                            } else {
                                mode_q.push_back("OFF"s);
                            }
                            VL_NULL_CHECK(cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 382)
                        ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__33__Vfuncout);
                            str = __Vtask_get_name__33__Vfuncout;
                            max_cb_name = (VL_GTS_III(32, max_cb_name, 
                                                      VL_LEN_IN(str))
                                            ? max_cb_name
                                            : VL_LEN_IN(str));
                            VL_NULL_CHECK(bobj, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 384)
                        ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__34__Vfuncout);
                            str = __Vtask_get_full_name__34__Vfuncout;
                            max_inst_name = (VL_GTS_III(32, max_inst_name, 
                                                        VL_LEN_IN(str))
                                              ? max_inst_name
                                              : VL_LEN_IN(str));
                            unnamedblk8__DOT__i = ((IData)(1U) 
                                                   + unnamedblk8__DOT__i);
                        }
                    }
                } while ((0U != ([&]() {
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 388)
                                 ->__VnoInFunc_next(vlSymsp, bobj, __Vtask_next__35__Vfuncout);
                            }(), __Vtask_next__35__Vfuncout)));
            } else {
                qs.push_back(VL_SFORMATF_N_NX("No callbacks registered for any instances of type %@\n",0,
                                              -1,&(tname)) );
            }
        } else {
            if (((0U != ([&]() {
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 395)
                         ->__VnoInFunc_exists(vlSymsp, bobj, __Vtask_exists__36__Vfuncout);
                            }(), __Vtask_exists__36__Vfuncout)) 
                 || (0U != ([&]() {
                                VL_NULL_CHECK(this->__PVT__m_tw_cb_q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 395)
                            ->__VnoInFunc_size(vlSymsp, __Vtask_size__37__Vfuncout);
                            }(), __Vtask_size__37__Vfuncout)))) {
                __Vtemp_1 = ([&]() {
                        VL_NULL_CHECK(obj, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 396)
                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__38__Vfuncout);
                    }(), __Vtask_get_full_name__38__Vfuncout);
                qs.push_back(VL_SFORMATF_N_NX("Registered callbacks for instance %@ of %@\n",0,
                                              -1,&(__Vtemp_1),
                                              -1,&(tname)) );
                qs.push_back("---------------------------------------------------------------\n"s);
            }
            if ((0U != ([&]() {
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 399)
                        ->__VnoInFunc_exists(vlSymsp, bobj, __Vtask_exists__39__Vfuncout);
                        }(), __Vtask_exists__39__Vfuncout))) {
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 400)
                        ->__VnoInFunc_get(vlSymsp, bobj, __Vtask_get__40__Vfuncout);
                q = __Vtask_get__40__Vfuncout;
                if ((VlNull{} == q)) {
                    q = VL_NEW(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_queue__Tz48, vlProcess, vlSymsp, ""s);
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 403)
                        ->__VnoInFunc_add(vlSymsp, bobj, q);
                }
                unnamedblk9__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk9__DOT__i, 
                                  ([&]() {
                                VL_NULL_CHECK(q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 405)
                                   ->__VnoInFunc_size(vlSymsp, __Vtask_size__43__Vfuncout);
                            }(), __Vtask_size__43__Vfuncout))) {
                    VL_NULL_CHECK(q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 406)
                        ->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk9__DOT__i, __Vtask_get__44__Vfuncout);
                    cb = __Vtask_get__44__Vfuncout;
                    cbq.push_back(([&]() {
                                VL_NULL_CHECK(cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 407)
                                   ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__45__Vfuncout);
                            }(), __Vtask_get_name__45__Vfuncout));
                    inst_q.push_back(([&]() {
                                VL_NULL_CHECK(bobj, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 408)
                                      ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__46__Vfuncout);
                            }(), __Vtask_get_full_name__46__Vfuncout));
                    if (([&]() {
                                VL_NULL_CHECK(cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 409)
                         ->__VnoInFunc_is_enabled(vlSymsp, __Vtask_is_enabled__47__Vfuncout);
                            }(), (IData)(__Vtask_is_enabled__47__Vfuncout))) {
                        mode_q.push_back("ON"s);
                    } else {
                        mode_q.push_back("OFF"s);
                    }
                    VL_NULL_CHECK(cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 412)
                        ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__48__Vfuncout);
                    str = __Vtask_get_name__48__Vfuncout;
                    max_cb_name = (VL_GTS_III(32, max_cb_name, 
                                              VL_LEN_IN(str))
                                    ? max_cb_name : 
                                   VL_LEN_IN(str));
                    VL_NULL_CHECK(bobj, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 414)
                        ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__49__Vfuncout);
                    str = __Vtask_get_full_name__49__Vfuncout;
                    max_inst_name = (VL_GTS_III(32, max_inst_name, 
                                                VL_LEN_IN(str))
                                      ? max_inst_name
                                      : VL_LEN_IN(str));
                    unnamedblk9__DOT__i = ((IData)(1U) 
                                           + unnamedblk9__DOT__i);
                }
            }
        }
        if ((1U & (~ (0U != cbq.size())))) {
            str = ((VlNull{} == obj) ? "*"s : ([&]() {
                        VL_NULL_CHECK(obj, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 421)
                                               ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__50__Vfuncout);
                    }(), __Vtask_get_full_name__50__Vfuncout));
            qs.push_back(VL_SFORMATF_N_NX("No callbacks registered for instance %@ of type %@\n",0,
                                          -1,&(str),
                                          -1,&(tname)) );
        }
        unnamedblk10__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk10__DOT__i, cbq.size())) {
            __Vtemp_2 = cbq.at(unnamedblk10__DOT__i);
            __Vtemp_3 = VL_SUBSTR_N(blanks,0U,((max_cb_name 
                                                - VL_LEN_IN(cbq.at(unnamedblk10__DOT__i))) 
                                               - (IData)(1U)));
            __Vtemp_4 = inst_q.at(unnamedblk10__DOT__i);
            __Vtemp_5 = VL_SUBSTR_N(blanks,0U,((max_inst_name 
                                                - VL_LEN_IN(inst_q.at(unnamedblk10__DOT__i))) 
                                               - (IData)(1U)));
            __Vtemp_6 = mode_q.at(unnamedblk10__DOT__i);
            qs.push_back(VL_SFORMATF_N_NX("%@  %@ %@ on %@  %@\n",0,
                                          -1,&(__Vtemp_2),
                                          -1,&(__Vtemp_3),
                                          -1,&(__Vtemp_4),
                                          -1,&(__Vtemp_5),
                                          -1,&(__Vtemp_6)) );
            unnamedblk10__DOT__i = ((IData)(1U) + unnamedblk10__DOT__i);
        }
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__51__id = "UVM/CB/DISPLAY"s;
                        __Vfunc_uvm_report_enabled__51__severity = 0U;
                        __Vfunc_uvm_report_enabled__51__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__52__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__52__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__53__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__53__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__51__verbosity, (IData)(__Vfunc_uvm_report_enabled__51__severity), __Vfunc_uvm_report_enabled__51__id, __Vtask_uvm_report_enabled__54__Vfuncout);
                        __Vfunc_uvm_report_enabled__51__Vfuncout 
                            = __Vtask_uvm_report_enabled__54__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__51__Vfuncout))) {
            __Vtask_uvm_report_info__55__report_enabled_checked = 1U;
            __Vtask_uvm_report_info__55__context_name = ""s;
            __Vtask_uvm_report_info__55__line = 0x000001acU;
            __Vtask_uvm_report_info__55__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh"s;
            __Vtask_uvm_report_info__55__verbosity = 0U;
            __Vtask_uvm_report_info__55__message = 
                VL_CVT_PACK_STR_NN(([&]() {
                        __Vfunc_m_uvm_string_queue_join__56__Vfuncout 
                            = VL_CVT_PACK_STR_ND(qs);
                    }(), __Vfunc_m_uvm_string_queue_join__56__Vfuncout));
            __Vtask_uvm_report_info__55__id = "UVM/CB/DISPLAY"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__57__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__57__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__58__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__58__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)
                        ->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__55__id, __Vtask_uvm_report_info__55__message, __Vtask_uvm_report_info__55__verbosity, __Vtask_uvm_report_info__55__filename, __Vtask_uvm_report_info__55__line, __Vtask_uvm_report_info__55__context_name, (IData)(__Vtask_uvm_report_info__55__report_enabled_checked));
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_tracing = 1U;
    }

    void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz15::__VnoInFunc_m_am_i_a(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> obj, CData/*0:0*/ &m_am_i_a__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+                Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz15::__VnoInFunc_m_am_i_a\n"); );
        // Body
        VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_objection> this_type;
        {
            if ((VlNull{} == obj)) {
                m_am_i_a__Vfuncrtn = 1U;
                goto __Vlabel0;
            }
            m_am_i_a__Vfuncrtn = (1U & VL_CAST_DYNAMIC(obj, this_type));
            __Vlabel0: ;
        }
    }

    void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz15::__VnoInFunc_m_get_tw_cb_q(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_queue__Tz48> &m_get_tw_cb_q__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+                Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz15::__VnoInFunc_m_get_tw_cb_q\n"); );
        // Locals
        CData/*0:0*/ __Vfunc_m_am_i_a__0__Vfuncout;
        __Vfunc_m_am_i_a__0__Vfuncout = 0;
        VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_queue__Tz48> __Vtask_m_get_tw_cb_q__1__Vfuncout;
        // Body
        IData/*31:0*/ unnamedblk1__DOT__i;
        unnamedblk1__DOT__i = 0;
        VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks_base> unnamedblk1__DOT__unnamedblk2__DOT__dt;
        {
            if (([&]() {
                        this->__VnoInFunc_m_am_i_a(vlSymsp, obj, __Vfunc_m_am_i_a__0__Vfuncout);
                    }(), (IData)(__Vfunc_m_am_i_a__0__Vfuncout))) {
                unnamedblk1__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk1__DOT__i, Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks_base::__PVT__m_derived_types.size())) {
                    unnamedblk1__DOT__unnamedblk2__DOT__dt 
                        = vlSymsp->TOP__uvm_pkg__03a__03auvm_typeid_base__Vclpkg.__PVT__typeid_map
                        .at(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks_base::__PVT__m_derived_types.at(unnamedblk1__DOT__i));
                    if (((VlNull{} != unnamedblk1__DOT__unnamedblk2__DOT__dt) 
                         & (unnamedblk1__DOT__unnamedblk2__DOT__dt 
                            != VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz15>{this}))) {
                        VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__dt, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 215)
                        ->__VnoInFunc_m_get_tw_cb_q(vlSymsp, obj, __Vtask_m_get_tw_cb_q__1__Vfuncout);
                        m_get_tw_cb_q__Vfuncrtn = __Vtask_m_get_tw_cb_q__1__Vfuncout;
                        if ((VlNull{} != m_get_tw_cb_q__Vfuncrtn)) {
                            goto __Vlabel0;
                        }
                    }
                    unnamedblk1__DOT__i = ((IData)(1U) 
                                           + unnamedblk1__DOT__i);
                }
                m_get_tw_cb_q__Vfuncrtn = vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz15__Vclpkg.__PVT__m_tw_cb_q;
            } else {
                m_get_tw_cb_q__Vfuncrtn = VlNull{};
            }
            __Vlabel0: ;
        }
    }

    void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz15::__VnoInFunc_m_add_tw_cbs(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callback> cb, IData/*31:0*/ ordering) {
        VL_DEBUG_IF(VL_DBG_MSGF("+                Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz15::__VnoInFunc_m_add_tw_cbs\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_m_cb_find__2__Vfuncout;
        __Vfunc_m_cb_find__2__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_m_cb_find_name__3__Vfuncout;
        __Vfunc_m_cb_find_name__3__Vfuncout = 0;
        std::string __Vtask_get_name__4__Vfuncout;
        IData/*31:0*/ __Vtask_first__7__Vfuncout;
        __Vtask_first__7__Vfuncout = 0;
        VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_queue__Tz48> __Vtask_get__8__Vfuncout;
        IData/*31:0*/ __Vfunc_m_cb_find__11__Vfuncout;
        __Vfunc_m_cb_find__11__Vfuncout = 0;
        IData/*31:0*/ __Vtask_m_cb_find_name__12__Vfuncout;
        __Vtask_m_cb_find_name__12__Vfuncout = 0;
        std::string __Vtask_get_name__13__Vfuncout;
        std::string __Vtask_get_full_name__14__Vfuncout;
        IData/*31:0*/ __Vtask_next__17__Vfuncout;
        __Vtask_next__17__Vfuncout = 0;
        // Body
        IData/*31:0*/ unnamedblk5__DOT__i;
        unnamedblk5__DOT__i = 0;
        VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks_base> cb_pair;
        VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> obj;
        VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_objection> me;
        CData/*0:0*/ warned;
        warned = 0;
        VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_queue__Tz48> q;
        if ((0xffffffffU == ([&]() {
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz15__Vclpkg.__VnoInFunc_m_cb_find(vlProcess, vlSymsp, vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz15__Vclpkg.__PVT__m_tw_cb_q, cb, __Vfunc_m_cb_find__2__Vfuncout);
                    }(), __Vfunc_m_cb_find__2__Vfuncout))) {
            warned = (1U & ([&]() {
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz15__Vclpkg.__VnoInFunc_m_cb_find_name(vlProcess, vlSymsp, vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz15__Vclpkg.__PVT__m_tw_cb_q, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                                        VL_NULL_CHECK(cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 254)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__4__Vfuncout);
                                    }(), __Vtask_get_name__4__Vfuncout)), "type"s, __Vfunc_m_cb_find_name__3__Vfuncout);
                    }(), __Vfunc_m_cb_find_name__3__Vfuncout));
            if ((0U == ordering)) {
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz15__Vclpkg.__PVT__m_tw_cb_q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 256)
                        ->__VnoInFunc_push_back(vlSymsp, cb);
            } else {
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz15__Vclpkg.__PVT__m_tw_cb_q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 258)
                        ->__VnoInFunc_push_front(vlSymsp, cb);
            }
        }
        if ((0U != ([&]() {
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 260)
                    ->__VnoInFunc_first(vlSymsp, obj, __Vtask_first__7__Vfuncout);
                    }(), __Vtask_first__7__Vfuncout))) {
            do {
                if (VL_CAST_DYNAMIC(obj, me)) {
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 263)
                        ->__VnoInFunc_get(vlSymsp, obj, __Vtask_get__8__Vfuncout);
                    q = __Vtask_get__8__Vfuncout;
                    if ((VlNull{} == q)) {
                        q = VL_NEW(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_queue__Tz48, vlProcess, vlSymsp, ""s);
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 266)
                        ->__VnoInFunc_add(vlSymsp, obj, q);
                    }
                    if ((0xffffffffU == ([&]() {
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz15__Vclpkg.__VnoInFunc_m_cb_find(vlProcess, vlSymsp, q, cb, __Vfunc_m_cb_find__11__Vfuncout);
                                }(), __Vfunc_m_cb_find__11__Vfuncout))) {
                        if ((1U & (~ (IData)(warned)))) {
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz15__Vclpkg.__VnoInFunc_m_cb_find_name(vlProcess, vlSymsp, q, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                                            VL_NULL_CHECK(cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 270)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__13__Vfuncout);
                                        }(), __Vtask_get_name__13__Vfuncout)), 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("object instance "s, 
                                                                                ([&]() {
                                                VL_NULL_CHECK(me, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 270)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__14__Vfuncout);
                                            }(), __Vtask_get_full_name__14__Vfuncout))), __Vtask_m_cb_find_name__12__Vfuncout);
                        }
                        if ((0U == ordering)) {
                            VL_NULL_CHECK(q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 273)
                        ->__VnoInFunc_push_back(vlSymsp, cb);
                        } else {
                            VL_NULL_CHECK(q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 275)
                        ->__VnoInFunc_push_front(vlSymsp, cb);
                        }
                    }
                }
            } while ((0U != ([&]() {
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 278)
                             ->__VnoInFunc_next(vlSymsp, obj, __Vtask_next__17__Vfuncout);
                        }(), __Vtask_next__17__Vfuncout)));
        }
        unnamedblk5__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk5__DOT__i, Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks_base::__PVT__m_derived_types.size())) {
            cb_pair = vlSymsp->TOP__uvm_pkg__03a__03auvm_typeid_base__Vclpkg.__PVT__typeid_map
                .at(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks_base::__PVT__m_derived_types.at(unnamedblk5__DOT__i));
            if ((cb_pair != VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz15>{this})) {
                VL_NULL_CHECK(cb_pair, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 283)
                        ->__VnoInFunc_m_add_tw_cbs(vlProcess, vlSymsp, cb, ordering);
            }
            unnamedblk5__DOT__i = ((IData)(1U) + unnamedblk5__DOT__i);
        }
    }

    void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz15::__VnoInFunc_m_delete_tw_cbs(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_delete_tw_cbs__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+                Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz15::__VnoInFunc_m_delete_tw_cbs\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_m_cb_find__19__Vfuncout;
        __Vfunc_m_cb_find__19__Vfuncout = 0;
        IData/*31:0*/ __Vtask_first__21__Vfuncout;
        __Vtask_first__21__Vfuncout = 0;
        VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_queue__Tz48> __Vtask_get__22__Vfuncout;
        IData/*31:0*/ __Vfunc_m_cb_find__25__Vfuncout;
        __Vfunc_m_cb_find__25__Vfuncout = 0;
        IData/*31:0*/ __Vtask_next__27__Vfuncout;
        __Vtask_next__27__Vfuncout = 0;
        CData/*0:0*/ __Vtask_m_delete_tw_cbs__28__Vfuncout;
        __Vtask_m_delete_tw_cbs__28__Vfuncout = 0;
        // Body
        IData/*31:0*/ unnamedblk6__DOT__i;
        unnamedblk6__DOT__i = 0;
        VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks_base> cb_pair;
        VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> obj;
        VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_queue__Tz48> q;
        IData/*31:0*/ pos;
        pos = 0;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz15__Vclpkg.__VnoInFunc_m_cb_find(vlProcess, vlSymsp, vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz15__Vclpkg.__PVT__m_tw_cb_q, cb, __Vfunc_m_cb_find__19__Vfuncout);
        pos = __Vfunc_m_cb_find__19__Vfuncout;
        if ((0xffffffffU != pos)) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz15__Vclpkg.__PVT__m_tw_cb_q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 296)
                        ->__VnoInFunc_delete(vlProcess, vlSymsp, pos);
            m_delete_tw_cbs__Vfuncrtn = 1U;
        }
        if ((0U != ([&]() {
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 300)
                    ->__VnoInFunc_first(vlSymsp, obj, __Vtask_first__21__Vfuncout);
                    }(), __Vtask_first__21__Vfuncout))) {
            do {
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 302)
                        ->__VnoInFunc_get(vlSymsp, obj, __Vtask_get__22__Vfuncout);
                q = __Vtask_get__22__Vfuncout;
                if ((VlNull{} == q)) {
                    q = VL_NEW(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_queue__Tz48, vlProcess, vlSymsp, ""s);
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 305)
                        ->__VnoInFunc_add(vlSymsp, obj, q);
                }
                vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz15__Vclpkg.__VnoInFunc_m_cb_find(vlProcess, vlSymsp, q, cb, __Vfunc_m_cb_find__25__Vfuncout);
                pos = __Vfunc_m_cb_find__25__Vfuncout;
                if ((0xffffffffU != pos)) {
                    VL_NULL_CHECK(q, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 309)
                        ->__VnoInFunc_delete(vlProcess, vlSymsp, pos);
                    m_delete_tw_cbs__Vfuncrtn = 1U;
                }
            } while ((0U != ([&]() {
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 312)
                             ->__VnoInFunc_next(vlSymsp, obj, __Vtask_next__27__Vfuncout);
                        }(), __Vtask_next__27__Vfuncout)));
        }
        unnamedblk6__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk6__DOT__i, Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks_base::__PVT__m_derived_types.size())) {
            cb_pair = vlSymsp->TOP__uvm_pkg__03a__03auvm_typeid_base__Vclpkg.__PVT__typeid_map
                .at(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks_base::__PVT__m_derived_types.at(unnamedblk6__DOT__i));
            if ((cb_pair != VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz15>{this})) {
                m_delete_tw_cbs__Vfuncrtn = ((IData)(m_delete_tw_cbs__Vfuncrtn) 
                                             | ([&]() {
                            VL_NULL_CHECK(cb_pair, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 317)
                                                ->__VnoInFunc_m_delete_tw_cbs(vlProcess, vlSymsp, cb, __Vtask_m_delete_tw_cbs__28__Vfuncout);
                        }(), (IData)(__Vtask_m_delete_tw_cbs__28__Vfuncout)));
            }
            unnamedblk6__DOT__i = ((IData)(1U) + unnamedblk6__DOT__i);
        }
    }

    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz15::Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz15(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp)
      : Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks_base(vlProcess, vlSymsp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+                Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz15::new\n"); );
        // Body
        _ctor_var_reset(vlSymsp);
        ;
    }

    void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz15::__VnoInFunc_randomize(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+                Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz15::__VnoInFunc_randomize\n"); );
        // Locals
        IData/*31:0*/ __Vfunc___VBasicRand__31__Vfuncout;
        __Vfunc___VBasicRand__31__Vfuncout = 0;
        // Body
        Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
        this->__VnoInFunc___Vsetup_constraints(vlSymsp);
        randomize__Vfuncrtn = Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
        randomize__Vfuncrtn = (randomize__Vfuncrtn 
                               & ([&]() {
                    this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__31__Vfuncout);
                }(), __Vfunc___VBasicRand__31__Vfuncout));
    }

    void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz15::__VnoInFunc___Vsetup_constraints(Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+                Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz15::__VnoInFunc___Vsetup_constraints\n"); );
    }

    void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz15::__VnoInFunc___VBasicRand(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+                Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz15::__VnoInFunc___VBasicRand\n"); );
        // Body
        __VBasicRand__Vfuncrtn = 1U;
    }

    void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz15::_ctor_var_reset(Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+                Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz15::_ctor_var_reset\n"); );
        // Body
        (void)vlSymsp;  // Prevent unused variable warning
    }

    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz15::~Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz15() {
        VL_DEBUG_IF(VL_DBG_MSGF("+                Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz15::~\n"); );
    }

    std::string VL_TO_STRING(const VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz15>& obj) {
        VL_DEBUG_IF(VL_DBG_MSGF("+                Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz15::VL_TO_STRING\n"); );
        // Body
        return (obj ? obj->to_string() : "null");
    }

    std::string Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz15::to_string() const {
        VL_DEBUG_IF(VL_DBG_MSGF("+                Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz15::to_string\n"); );
        // Body
        return ("'{"s + to_string_middle() + "}");
    }

    std::string Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz15::to_string_middle() const {
        VL_DEBUG_IF(VL_DBG_MSGF("+                Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz15::to_string_middle\n"); );
        // Body
        std::string out;
        out += Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_callbacks_base::to_string_middle();
        return (out);
    }
