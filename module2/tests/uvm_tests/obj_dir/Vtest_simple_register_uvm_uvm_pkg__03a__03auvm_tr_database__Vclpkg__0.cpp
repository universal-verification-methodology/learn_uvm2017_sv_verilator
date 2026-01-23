// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_simple_register_uvm.h for the primary calling header

#include "Vtest_simple_register_uvm__pch.h"

Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database::Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name)
    : Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_open_db(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &open_db__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_open_db\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_do_open_db__1__Vfuncout;
    __Vfunc_do_open_db__1__Vfuncout = 0;
    // Body
    if ((1U & (~ (IData)(this->__PVT__m_is_opened)))) {
        this->__VnoInFunc_do_open_db(vlSymsp, __Vfunc_do_open_db__1__Vfuncout);
        this->__PVT__m_is_opened = __Vfunc_do_open_db__1__Vfuncout;
    }
    open_db__Vfuncrtn = this->__PVT__m_is_opened;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_close_db(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &close_db__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_close_db\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_do_close_db__2__Vfuncout;
    __Vfunc_do_close_db__2__Vfuncout = 0;
    // Body
    if (this->__PVT__m_is_opened) {
        if (([&]() {
                    this->__VnoInFunc_do_close_db(vlSymsp, __Vfunc_do_close_db__2__Vfuncout);
                }(), (IData)(__Vfunc_do_close_db__2__Vfuncout))) {
            this->__PVT__m_is_opened = 0U;
        }
    }
    close_db__Vfuncrtn = (1U & (~ (IData)(this->__PVT__m_is_opened)));
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_is_open(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &is_open__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_is_open\n"); );
    // Body
    is_open__Vfuncrtn = this->__PVT__m_is_opened;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_open_stream(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name, std::string scope, std::string type_name, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream> &open_stream__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_open_stream\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_open_db__3__Vfuncout;
    __Vfunc_open_db__3__Vfuncout = 0;
    VlClassRef<Vtest_simple_register_uvm_std__03a__03aprocess> __Vfunc_self__4__Vfuncout;
    std::string __Vtask_get_randstate__5__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream> __Vfunc_do_open_stream__6__Vfuncout;
    // Body
    VlClassRef<Vtest_simple_register_uvm_std__03a__03aprocess> unnamedblk1__DOT__p;
    std::string unnamedblk1__DOT__s;
    if (([&]() {
                this->__VnoInFunc_open_db(vlSymsp, __Vfunc_open_db__3__Vfuncout);
            }(), (IData)(__Vfunc_open_db__3__Vfuncout))) {
        vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __Vfunc_self__4__Vfuncout);
        unnamedblk1__DOT__p = __Vfunc_self__4__Vfuncout;
        if ((VlNull{} != unnamedblk1__DOT__p)) {
            VL_NULL_CHECK(unnamedblk1__DOT__p, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 110)->__VnoInFunc_get_randstate(vlSymsp, __Vtask_get_randstate__5__Vfuncout);
            unnamedblk1__DOT__s = __Vtask_get_randstate__5__Vfuncout;
        }
        this->__VnoInFunc_do_open_stream(vlProcess, vlSymsp, name, scope, type_name, __Vfunc_do_open_stream__6__Vfuncout);
        open_stream__Vfuncrtn = __Vfunc_do_open_stream__6__Vfuncout;
        if ((VlNull{} != open_stream__Vfuncrtn)) {
            this->__PVT__m_streams.at(open_stream__Vfuncrtn) = 1U;
            VL_NULL_CHECK(open_stream__Vfuncrtn, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 117)->__VnoInFunc_m_do_open(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database>{this}, scope, type_name);
        }
        if ((VlNull{} != unnamedblk1__DOT__p)) {
            VL_NULL_CHECK(unnamedblk1__DOT__p, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 121)->__VnoInFunc_set_randstate(vlSymsp, unnamedblk1__DOT__s);
        }
    } else {
        open_stream__Vfuncrtn = VlNull{};
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_m_free_stream(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream> stream) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_m_free_stream\n"); );
    // Body
    if (this->__PVT__m_streams.exists(stream)) {
        this->__PVT__m_streams.erase(stream);
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_get_streams(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream>> &q, CData/*0:0*/ &get_streams__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_get_streams\n"); );
    // Body
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream> unnamedblk2__DOT__idx;
    CData/*0:0*/ unnamedblk2__DOT__idx__Vfirst;
    unnamedblk2__DOT__idx__Vfirst = 0;
    q.clear();
    if ((0U != this->__PVT__m_streams.first(unnamedblk2__DOT__idx))) {
        unnamedblk2__DOT__idx__Vfirst = 1U;
        while (((IData)(unnamedblk2__DOT__idx__Vfirst) 
                || (0U != this->__PVT__m_streams.next(unnamedblk2__DOT__idx)))) {
            unnamedblk2__DOT__idx__Vfirst = 0U;
            q.push_back(unnamedblk2__DOT__idx);
        }
    }
    get_streams__Vfuncrtn = (1U & q.size());
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_establish_link(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_link_base> link) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_establish_link\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> __Vtask_get_lhs__9__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> __Vtask_get_rhs__10__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__11__Vfuncout;
    __Vfunc_uvm_report_enabled__11__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__11__verbosity;
    __Vfunc_uvm_report_enabled__11__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__11__severity;
    __Vfunc_uvm_report_enabled__11__severity = 0;
    std::string __Vfunc_uvm_report_enabled__11__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__12__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__13__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__14__Vfuncout;
    __Vtask_uvm_report_enabled__14__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__15__id;
    std::string __Vtask_uvm_report_warning__15__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__15__verbosity;
    __Vtask_uvm_report_warning__15__verbosity = 0;
    std::string __Vtask_uvm_report_warning__15__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__15__line;
    __Vtask_uvm_report_warning__15__line = 0;
    std::string __Vtask_uvm_report_warning__15__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__15__report_enabled_checked;
    __Vtask_uvm_report_warning__15__report_enabled_checked = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__16__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__17__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__19__Vfuncout;
    __Vfunc_uvm_report_enabled__19__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__19__verbosity;
    __Vfunc_uvm_report_enabled__19__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__19__severity;
    __Vfunc_uvm_report_enabled__19__severity = 0;
    std::string __Vfunc_uvm_report_enabled__19__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__20__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__21__Vfuncout;
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
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__24__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__25__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__27__Vfuncout;
    __Vfunc_uvm_report_enabled__27__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__27__verbosity;
    __Vfunc_uvm_report_enabled__27__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__27__severity;
    __Vfunc_uvm_report_enabled__27__severity = 0;
    std::string __Vfunc_uvm_report_enabled__27__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__28__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__29__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__30__Vfuncout;
    __Vtask_uvm_report_enabled__30__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__31__id;
    std::string __Vtask_uvm_report_warning__31__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__31__verbosity;
    __Vtask_uvm_report_warning__31__verbosity = 0;
    std::string __Vtask_uvm_report_warning__31__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__31__line;
    __Vtask_uvm_report_warning__31__line = 0;
    std::string __Vtask_uvm_report_warning__31__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__31__report_enabled_checked;
    __Vtask_uvm_report_warning__31__report_enabled_checked = 0;
    std::string __Vtask_get_type_name__32__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__33__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__34__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__36__Vfuncout;
    __Vfunc_uvm_report_enabled__36__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__36__verbosity;
    __Vfunc_uvm_report_enabled__36__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__36__severity;
    __Vfunc_uvm_report_enabled__36__severity = 0;
    std::string __Vfunc_uvm_report_enabled__36__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__37__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__38__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__39__Vfuncout;
    __Vtask_uvm_report_enabled__39__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__40__id;
    std::string __Vtask_uvm_report_warning__40__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__40__verbosity;
    __Vtask_uvm_report_warning__40__verbosity = 0;
    std::string __Vtask_uvm_report_warning__40__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__40__line;
    __Vtask_uvm_report_warning__40__line = 0;
    std::string __Vtask_uvm_report_warning__40__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__40__report_enabled_checked;
    __Vtask_uvm_report_warning__40__report_enabled_checked = 0;
    std::string __Vtask_get_type_name__41__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__42__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__43__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream> __Vtask_get_stream__45__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream> __Vtask_get_stream__46__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database> __Vtask_get_db__47__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database> __Vtask_get_db__48__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__49__Vfuncout;
    __Vfunc_uvm_report_enabled__49__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__49__verbosity;
    __Vfunc_uvm_report_enabled__49__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__49__severity;
    __Vfunc_uvm_report_enabled__49__severity = 0;
    std::string __Vfunc_uvm_report_enabled__49__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__50__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__51__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__52__Vfuncout;
    __Vtask_uvm_report_enabled__52__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__53__id;
    std::string __Vtask_uvm_report_warning__53__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__53__verbosity;
    __Vtask_uvm_report_warning__53__verbosity = 0;
    std::string __Vtask_uvm_report_warning__53__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__53__line;
    __Vtask_uvm_report_warning__53__line = 0;
    std::string __Vtask_uvm_report_warning__53__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__53__report_enabled_checked;
    __Vtask_uvm_report_warning__53__report_enabled_checked = 0;
    std::string __Vtask_get_name__54__Vfuncout;
    std::string __Vfunc_get_name__55__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__56__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__57__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database> __Vtask_get_db__59__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database> __Vtask_get_db__60__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__61__Vfuncout;
    __Vfunc_uvm_report_enabled__61__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__61__verbosity;
    __Vfunc_uvm_report_enabled__61__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__61__severity;
    __Vfunc_uvm_report_enabled__61__severity = 0;
    std::string __Vfunc_uvm_report_enabled__61__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__62__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__63__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__64__Vfuncout;
    __Vtask_uvm_report_enabled__64__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__65__id;
    std::string __Vtask_uvm_report_warning__65__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__65__verbosity;
    __Vtask_uvm_report_warning__65__verbosity = 0;
    std::string __Vtask_uvm_report_warning__65__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__65__line;
    __Vtask_uvm_report_warning__65__line = 0;
    std::string __Vtask_uvm_report_warning__65__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__65__report_enabled_checked;
    __Vtask_uvm_report_warning__65__report_enabled_checked = 0;
    std::string __Vtask_get_name__66__Vfuncout;
    std::string __Vfunc_get_name__67__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__68__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__69__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    std::string __Vtemp_6;
    // Body
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream> s_lhs;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream> s_rhs;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_recorder> r_lhs;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_recorder> r_rhs;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> lhs;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> rhs;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database> db;
    {
        VL_NULL_CHECK(link, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 152)->__VnoInFunc_get_lhs(vlSymsp, __Vtask_get_lhs__9__Vfuncout);
        lhs = __Vtask_get_lhs__9__Vfuncout;
        VL_NULL_CHECK(link, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 153)->__VnoInFunc_get_rhs(vlSymsp, __Vtask_get_rhs__10__Vfuncout);
        rhs = __Vtask_get_rhs__10__Vfuncout;
        if ((VlNull{} == lhs)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__11__id = "UVM/TR_DB/BAD_LINK"s;
                            __Vfunc_uvm_report_enabled__11__severity = 1U;
                            __Vfunc_uvm_report_enabled__11__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__12__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__12__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__13__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__13__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__11__verbosity, (IData)(__Vfunc_uvm_report_enabled__11__severity), __Vfunc_uvm_report_enabled__11__id, __Vtask_uvm_report_enabled__14__Vfuncout);
                            __Vfunc_uvm_report_enabled__11__Vfuncout 
                                = __Vtask_uvm_report_enabled__14__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__11__Vfuncout))) {
                __Vtask_uvm_report_warning__15__report_enabled_checked = 1U;
                __Vtask_uvm_report_warning__15__context_name = ""s;
                __Vtask_uvm_report_warning__15__line = 0x0000009eU;
                __Vtask_uvm_report_warning__15__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_tr_database.svh"s;
                __Vtask_uvm_report_warning__15__verbosity = 0U;
                __Vtask_uvm_report_warning__15__message = "left hand side '<null>' is not supported in links for 'uvm_tr_database'"s;
                __Vtask_uvm_report_warning__15__id = "UVM/TR_DB/BAD_LINK"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__16__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__16__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__17__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__17__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__15__id, __Vtask_uvm_report_warning__15__message, __Vtask_uvm_report_warning__15__verbosity, __Vtask_uvm_report_warning__15__filename, __Vtask_uvm_report_warning__15__line, __Vtask_uvm_report_warning__15__context_name, (IData)(__Vtask_uvm_report_warning__15__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        if ((VlNull{} == rhs)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__19__id = "UVM/TR_DB/BAD_LINK"s;
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
                __Vtask_uvm_report_warning__23__line = 0x000000a3U;
                __Vtask_uvm_report_warning__23__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_tr_database.svh"s;
                __Vtask_uvm_report_warning__23__verbosity = 0U;
                __Vtask_uvm_report_warning__23__message = "right hand side '<null>' is not supported in links for 'uvm_tr_database'"s;
                __Vtask_uvm_report_warning__23__id = "UVM/TR_DB/BAD_LINK"s;
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
        if (((! VL_CAST_DYNAMIC(lhs, s_lhs)) && (! 
                                                 VL_CAST_DYNAMIC(lhs, r_lhs)))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__27__id = "UVM/TR_DB/BAD_LINK"s;
                            __Vfunc_uvm_report_enabled__27__severity = 1U;
                            __Vfunc_uvm_report_enabled__27__verbosity = 0U;
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
                __Vtask_uvm_report_warning__31__report_enabled_checked = 1U;
                __Vtask_uvm_report_warning__31__context_name = ""s;
                __Vtask_uvm_report_warning__31__line = 0x000000abU;
                __Vtask_uvm_report_warning__31__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_tr_database.svh"s;
                __Vtask_uvm_report_warning__31__verbosity = 0U;
                __Vtemp_1 = ([&]() {
                        VL_NULL_CHECK(lhs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 171)
                             ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__32__Vfuncout);
                    }(), __Vtask_get_type_name__32__Vfuncout);
                __Vtask_uvm_report_warning__31__message 
                    = VL_SFORMATF_N_NX("left hand side of type '%@' not supported in links for 'uvm_tr_database'",0,
                                       -1,&(__Vtemp_1)) ;
                __Vtask_uvm_report_warning__31__id = "UVM/TR_DB/BAD_LINK"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__33__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__33__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__34__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__34__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__31__id, __Vtask_uvm_report_warning__31__message, __Vtask_uvm_report_warning__31__verbosity, __Vtask_uvm_report_warning__31__filename, __Vtask_uvm_report_warning__31__line, __Vtask_uvm_report_warning__31__context_name, (IData)(__Vtask_uvm_report_warning__31__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        if (((! VL_CAST_DYNAMIC(rhs, s_rhs)) && (! 
                                                 VL_CAST_DYNAMIC(rhs, r_rhs)))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__36__id = "UVM/TR_DB/BAD_LINK"s;
                            __Vfunc_uvm_report_enabled__36__severity = 1U;
                            __Vfunc_uvm_report_enabled__36__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__37__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__37__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__38__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__38__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__36__verbosity, (IData)(__Vfunc_uvm_report_enabled__36__severity), __Vfunc_uvm_report_enabled__36__id, __Vtask_uvm_report_enabled__39__Vfuncout);
                            __Vfunc_uvm_report_enabled__36__Vfuncout 
                                = __Vtask_uvm_report_enabled__39__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__36__Vfuncout))) {
                __Vtask_uvm_report_warning__40__report_enabled_checked = 1U;
                __Vtask_uvm_report_warning__40__context_name = ""s;
                __Vtask_uvm_report_warning__40__line = 0x000000b2U;
                __Vtask_uvm_report_warning__40__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_tr_database.svh"s;
                __Vtask_uvm_report_warning__40__verbosity = 0U;
                __Vtemp_2 = ([&]() {
                        VL_NULL_CHECK(rhs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 178)
                             ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__41__Vfuncout);
                    }(), __Vtask_get_type_name__41__Vfuncout);
                __Vtask_uvm_report_warning__40__message 
                    = VL_SFORMATF_N_NX("right hand side of type '%@' not supported in links for 'uvm_record_datbasae'",0,
                                       -1,&(__Vtemp_2)) ;
                __Vtask_uvm_report_warning__40__id = "UVM/TR_DB/BAD_LINK"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__42__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__42__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__43__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__43__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__40__id, __Vtask_uvm_report_warning__40__message, __Vtask_uvm_report_warning__40__verbosity, __Vtask_uvm_report_warning__40__filename, __Vtask_uvm_report_warning__40__line, __Vtask_uvm_report_warning__40__context_name, (IData)(__Vtask_uvm_report_warning__40__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        if ((VlNull{} != r_lhs)) {
            VL_NULL_CHECK(r_lhs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 183)->__VnoInFunc_get_stream(vlProcess, vlSymsp, __Vtask_get_stream__45__Vfuncout);
            s_lhs = __Vtask_get_stream__45__Vfuncout;
        }
        if ((VlNull{} != r_rhs)) {
            VL_NULL_CHECK(r_rhs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 186)->__VnoInFunc_get_stream(vlProcess, vlSymsp, __Vtask_get_stream__46__Vfuncout);
            s_rhs = __Vtask_get_stream__46__Vfuncout;
        }
        if (((VlNull{} != s_lhs) && (([&]() {
                            VL_NULL_CHECK(s_lhs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 189)
                                      ->__VnoInFunc_get_db(vlProcess, vlSymsp, __Vtask_get_db__47__Vfuncout);
                        }(), __Vtask_get_db__47__Vfuncout) 
                                     != VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database>{this}))) {
            VL_NULL_CHECK(s_lhs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 190)->__VnoInFunc_get_db(vlProcess, vlSymsp, __Vtask_get_db__48__Vfuncout);
            db = __Vtask_get_db__48__Vfuncout;
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__49__id = "UVM/TR_DB/BAD_LINK"s;
                            __Vfunc_uvm_report_enabled__49__severity = 1U;
                            __Vfunc_uvm_report_enabled__49__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__50__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__50__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__51__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__51__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__49__verbosity, (IData)(__Vfunc_uvm_report_enabled__49__severity), __Vfunc_uvm_report_enabled__49__id, __Vtask_uvm_report_enabled__52__Vfuncout);
                            __Vfunc_uvm_report_enabled__49__Vfuncout 
                                = __Vtask_uvm_report_enabled__52__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__49__Vfuncout))) {
                __Vtask_uvm_report_warning__53__report_enabled_checked = 1U;
                __Vtask_uvm_report_warning__53__context_name = ""s;
                __Vtask_uvm_report_warning__53__line = 0x000000c1U;
                __Vtask_uvm_report_warning__53__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_tr_database.svh"s;
                __Vtask_uvm_report_warning__53__verbosity = 0U;
                __Vtemp_3 = ([&]() {
                        VL_NULL_CHECK(db, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 193)
                             ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__54__Vfuncout);
                    }(), __Vtask_get_name__54__Vfuncout);
                __Vtemp_4 = ([&]() {
                        this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__55__Vfuncout);
                    }(), __Vfunc_get_name__55__Vfuncout);
                __Vtask_uvm_report_warning__53__message 
                    = VL_SFORMATF_N_NX("attempt to link stream from '%@' into '%@'",0,
                                       -1,&(__Vtemp_3),
                                       -1,&(__Vtemp_4)) ;
                __Vtask_uvm_report_warning__53__id = "UVM/TR_DB/BAD_LINK"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__56__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__56__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__57__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__57__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__53__id, __Vtask_uvm_report_warning__53__message, __Vtask_uvm_report_warning__53__verbosity, __Vtask_uvm_report_warning__53__filename, __Vtask_uvm_report_warning__53__line, __Vtask_uvm_report_warning__53__context_name, (IData)(__Vtask_uvm_report_warning__53__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        if (((VlNull{} != s_rhs) && (([&]() {
                            VL_NULL_CHECK(s_rhs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 196)
                                      ->__VnoInFunc_get_db(vlProcess, vlSymsp, __Vtask_get_db__59__Vfuncout);
                        }(), __Vtask_get_db__59__Vfuncout) 
                                     != VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database>{this}))) {
            VL_NULL_CHECK(s_rhs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 197)->__VnoInFunc_get_db(vlProcess, vlSymsp, __Vtask_get_db__60__Vfuncout);
            db = __Vtask_get_db__60__Vfuncout;
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__61__id = "UVM/TR_DB/BAD_LINK"s;
                            __Vfunc_uvm_report_enabled__61__severity = 1U;
                            __Vfunc_uvm_report_enabled__61__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__62__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__62__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__63__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__63__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__61__verbosity, (IData)(__Vfunc_uvm_report_enabled__61__severity), __Vfunc_uvm_report_enabled__61__id, __Vtask_uvm_report_enabled__64__Vfuncout);
                            __Vfunc_uvm_report_enabled__61__Vfuncout 
                                = __Vtask_uvm_report_enabled__64__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__61__Vfuncout))) {
                __Vtask_uvm_report_warning__65__report_enabled_checked = 1U;
                __Vtask_uvm_report_warning__65__context_name = ""s;
                __Vtask_uvm_report_warning__65__line = 0x000000c8U;
                __Vtask_uvm_report_warning__65__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_tr_database.svh"s;
                __Vtask_uvm_report_warning__65__verbosity = 0U;
                __Vtemp_5 = ([&]() {
                        VL_NULL_CHECK(db, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_tr_database.svh", 200)
                             ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__66__Vfuncout);
                    }(), __Vtask_get_name__66__Vfuncout);
                __Vtemp_6 = ([&]() {
                        this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__67__Vfuncout);
                    }(), __Vfunc_get_name__67__Vfuncout);
                __Vtask_uvm_report_warning__65__message 
                    = VL_SFORMATF_N_NX("attempt to link stream from '%@' into '%@'",0,
                                       -1,&(__Vtemp_5),
                                       -1,&(__Vtemp_6)) ;
                __Vtask_uvm_report_warning__65__id = "UVM/TR_DB/BAD_LINK"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__68__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__68__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__69__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__69__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__65__id, __Vtask_uvm_report_warning__65__message, __Vtask_uvm_report_warning__65__verbosity, __Vtask_uvm_report_warning__65__filename, __Vtask_uvm_report_warning__65__line, __Vtask_uvm_report_warning__65__context_name, (IData)(__Vtask_uvm_report_warning__65__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        this->__VnoInFunc_do_establish_link(vlSymsp, link);
        __Vlabel0: ;
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_do_open_db(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &do_open_db__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_do_open_db\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_do_close_db(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &do_close_db__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_do_close_db\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_do_open_stream(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name, std::string scope, std::string type_name, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream> &do_open_stream__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_do_open_stream\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_do_establish_link(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_link_base> link) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_do_establish_link\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_randomize(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__73__Vfuncout;
    __Vfunc___VBasicRand__73__Vfuncout = 0;
    // Body
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__73__Vfuncout);
            }(), __Vfunc___VBasicRand__73__Vfuncout));
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc___Vsetup_constraints(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc___VBasicRand(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database::_ctor_var_reset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_is_opened = 0;
    __PVT__m_streams.atDefault() = 0;
}

Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database::~Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_is_opened:" + VL_TO_STRING(__PVT__m_is_opened);
    out += ", m_streams:" + VL_TO_STRING(__PVT__m_streams);
    out += ", "+ Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
