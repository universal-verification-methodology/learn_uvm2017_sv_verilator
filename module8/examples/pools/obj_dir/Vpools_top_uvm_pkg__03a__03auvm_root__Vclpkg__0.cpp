// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpools_top.h for the primary calling header

#include "Vpools_top__pch.h"

void Vpools_top_uvm_pkg__03a__03auvm_root__Vclpkg::__VnoInFunc_get(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vpools_top_uvm_pkg__03a__03auvm_root__Vclpkg::__VnoInFunc_get\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__0__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__1__Vfuncout;
    // Body
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> cs;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__0__Vfuncout);
    cs = __Vfunc_get__0__Vfuncout;
    VL_NULL_CHECK(cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh", 359)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__1__Vfuncout);
    get__Vfuncrtn = __Vtask_get_root__1__Vfuncout;
}

void Vpools_top_uvm_pkg__03a__03auvm_root__Vclpkg::__VnoInFunc_m_uvm_get_root(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> &m_uvm_get_root__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vpools_top_uvm_pkg__03a__03auvm_root__Vclpkg::__VnoInFunc_m_uvm_get_root\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_domain> __Vfunc_get_uvm_domain__3__Vfuncout;
    // Body
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> unnamedblk163__DOT__top;
    {
        if ((VlNull{} == this->__PVT__m_inst)) {
            unnamedblk163__DOT__top = VL_NEW(Vpools_top_uvm_pkg__03a__03auvm_root, vlProcess, vlSymsp);
            if ((unnamedblk163__DOT__top != this->__PVT__m_inst)) {
                m_uvm_get_root__Vfuncrtn = VlNull{};
                goto __Vlabel0;
            }
            vlSymsp->TOP__uvm_pkg__03a__03auvm_domain__Vclpkg.__VnoInFunc_get_uvm_domain(vlProcess, vlSymsp, __Vfunc_get_uvm_domain__3__Vfuncout);
            VL_NULL_CHECK(unnamedblk163__DOT__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh", 404)->__PVT__m_domain 
                = __Vfunc_get_uvm_domain__3__Vfuncout;
        }
        m_uvm_get_root__Vfuncrtn = this->__PVT__m_inst;
        __Vlabel0: ;
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_get_type_name(Vpools_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_root"s;
}

void Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_die(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_die\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_server> __Vfunc_get_server__0__Vfuncout;
    // Body
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_server> l_rs;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_report_server__Vclpkg.__VnoInFunc_get_server(vlProcess, vlSymsp, __Vfunc_get_server__0__Vfuncout);
    l_rs = __Vfunc_get_server__0__Vfuncout;
    vlSymsp->TOP__uvm_pkg.__PVT__m_uvm_core_state = 8U;
    this->__VnoInFunc_m_do_pre_abort(vlSymsp);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_run_test_callback__Vclpkg.__VnoInFunc_m_do_pre_abort(vlSymsp);
    VL_NULL_CHECK(l_rs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh", 157)->__VnoInFunc_report_summarize(vlProcess, vlSymsp, 0x80000001U);
    vlSymsp->TOP__uvm_pkg.__PVT__m_uvm_core_state = 9U;
    vlProcess->disableFork();
    VL_FINISH_MT("/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh", 161, "");
}

void Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_get_finish_on_completion(Vpools_top__Syms* __restrict vlSymsp, CData/*0:0*/ &get_finish_on_completion__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_get_finish_on_completion\n"); );
    // Body
    get_finish_on_completion__Vfuncrtn = this->__PVT__finish_on_completion;
}

void Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_set_finish_on_completion(Vpools_top__Syms* __restrict vlSymsp, CData/*0:0*/ f) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_set_finish_on_completion\n"); );
    // Body
    this->__PVT__finish_on_completion = f;
}

void Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_phase_started(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_phase_started\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_server> __Vfunc_get_server__6__Vfuncout;
    IData/*31:0*/ __Vtask_get_severity_count__7__Vfuncout;
    __Vtask_get_severity_count__7__Vfuncout = 0;
    // Body
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_server> unnamedblk1__DOT__srvr;
    if ((phase == vlSymsp->TOP__uvm_pkg.__PVT__end_of_elaboration_ph)) {
        this->__VnoInFunc_do_resolve_bindings(vlProcess, vlSymsp);
        if (this->__PVT__enable_print_topology) {
            this->__VnoInFunc_print_topology(vlProcess, vlSymsp, VlNull{});
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_report_server__Vclpkg.__VnoInFunc_get_server(vlProcess, vlSymsp, __Vfunc_get_server__6__Vfuncout);
        unnamedblk1__DOT__srvr = __Vfunc_get_server__6__Vfuncout;
        if (VL_LTS_III(32, 0U, ([&]() {
                        VL_NULL_CHECK(unnamedblk1__DOT__srvr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh", 321)
                                ->__VnoInFunc_get_severity_count(vlSymsp, 2U, __Vtask_get_severity_count__7__Vfuncout);
                    }(), __Vtask_get_severity_count__7__Vfuncout))) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "BUILDERR"s, "stopping due to build errors"s, 0U, ""s, 0U, ""s, 0U);
        }
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_end_of_elaboration_phase(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_end_of_elaboration_phase\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__11__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_visitor_> __Vtask_get_component_visitor__12__Vfuncout;
    // Body
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_component_proxy> p;
    p = VL_NEW(Vpools_top_uvm_pkg__03a__03auvm_component_proxy, vlProcess, vlSymsp, "proxy"s);
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_top_down_visitor_adapter_> adapter;
    adapter = VL_NEW(Vpools_top_uvm_pkg__03a__03auvm_top_down_visitor_adapter_, vlProcess, vlSymsp, "adapter"s);
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> cs;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__11__Vfuncout);
    cs = __Vfunc_get__11__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_visitor_> v;
    VL_NULL_CHECK(cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh", 339)->__VnoInFunc_get_component_visitor(vlProcess, vlSymsp, __Vtask_get_component_visitor__12__Vfuncout);
    v = __Vtask_get_component_visitor__12__Vfuncout;
    VL_NULL_CHECK(adapter, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh", 340)->__VnoInFunc_accept(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root>{this}, v, p, 1U);
}

Vpools_top_uvm_pkg__03a__03auvm_root::Vpools_top_uvm_pkg__03a__03auvm_root(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp)
    : Vpools_top_uvm_pkg__03a__03auvm_component(vlProcess, vlSymsp, "__top__"s, VlNull{}) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_root::new\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_enabled__17__Vfuncout;
    __Vtask_uvm_report_enabled__17__Vfuncout = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_cmdline_processor> __Vfunc_get_inst__19__Vfuncout;
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__phase_timeout = 0x0020af59ebef0000ULL;
    this->__PVT__enable_print_topology = 0U;
    this->__PVT__finish_on_completion = 1U;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_handler> rh;
    {
        ;
        rh = VL_NEW(Vpools_top_uvm_pkg__03a__03auvm_report_handler, vlProcess, vlSymsp, "reporter"s);
        this->__VnoInFunc_set_report_handler(vlSymsp, rh);
        if ((VlNull{} != vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__PVT__m_inst)) {
            if ((0U != ([&]() {
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__PVT__m_inst, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh", 378)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 3U, "UVM/ROOT/MULTI"s, __Vtask_uvm_report_enabled__17__Vfuncout);
                        }(), __Vtask_uvm_report_enabled__17__Vfuncout))) {
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__PVT__m_inst, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh", 378)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "UVM/ROOT/MULTI"s, "Attempting to construct multiple roots"s, 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh"s, 0x0000017aU, ""s, 1U);
            }
            goto __Vlabel0;
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__PVT__m_inst 
            = VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root>{this};
        vlSymsp->TOP__uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg.__VnoInFunc_get_inst(vlProcess, vlSymsp, __Vfunc_get_inst__19__Vfuncout);
        this->__PVT__clp = __Vfunc_get_inst__19__Vfuncout;
        __Vlabel0: ;
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_report_header(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_report_header\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_server> __Vfunc_get_server__20__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_cmdline_processor> __Vfunc_get_inst__21__Vfuncout;
    IData/*31:0*/ __Vtask_get_arg_matches__22__Vfuncout;
    __Vtask_get_arg_matches__22__Vfuncout = 0;
    std::string __Vfunc_uvm_revision_string__23__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__24__Vfuncout;
    __Vfunc_uvm_report_enabled__24__Vfuncout = 0;
    std::string __Vfunc_m_uvm_string_queue_join__26__Vfuncout;
    // Body
    VlQueue<std::string> q;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_server> srvr;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_cmdline_processor> clp;
    VlQueue<std::string> args;
    {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_report_server__Vclpkg.__VnoInFunc_get_server(vlProcess, vlSymsp, __Vfunc_get_server__20__Vfuncout);
        srvr = __Vfunc_get_server__20__Vfuncout;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg.__VnoInFunc_get_inst(vlProcess, vlSymsp, __Vfunc_get_inst__21__Vfuncout);
        clp = __Vfunc_get_inst__21__Vfuncout;
        if ((0U != ([&]() {
                        VL_NULL_CHECK(clp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh", 419)
                    ->__VnoInFunc_get_arg_matches(vlSymsp, "+UVM_NO_RELNOTES"s, args, __Vtask_get_arg_matches__22__Vfuncout);
                    }(), __Vtask_get_arg_matches__22__Vfuncout))) {
            goto __Vlabel0;
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__PVT__m_relnotes_done)))) {
            q.push_back("\n  ***********       IMPORTANT RELEASE NOTES         ************\n"s);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__PVT__m_relnotes_done = 1U;
            q.push_back("\n  This implementation of the UVM Library deviates from the 1800.2-2017\n"s);
            q.push_back("  standard.  See the DEVIATIONS.md file contained in the release\n"s);
            q.push_back("  for more details.\n"s);
        }
        q.push_back("\n----------------------------------------------------------------\n"s);
        q.push_back(VL_CONCATN_NNN(([&]() {
                        __Vfunc_uvm_revision_string__23__Vfuncout = "Accellera:1800.2-2017:UVM:1.0"s;
                    }(), __Vfunc_uvm_revision_string__23__Vfuncout), "\n"s));
        q.push_back("\n"s);
        q.push_back("All copyright owners for this kit are listed in NOTICE.txt\n"s);
        q.push_back("All Rights Reserved Worldwide\n"s);
        q.push_back("----------------------------------------------------------------\n"s);
        if (vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__PVT__m_relnotes_done) {
            q.push_back("\n      (Specify +UVM_NO_RELNOTES to turn off this notice)\n"s);
        }
        if ((0U != ([&]() {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "UVM/RELNOTES"s, __Vfunc_uvm_report_enabled__24__Vfuncout);
                    }(), __Vfunc_uvm_report_enabled__24__Vfuncout))) {
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "UVM/RELNOTES"s, 
                                              VL_CVT_PACK_STR_NN(
                                                                 ([&]() {
                            __Vfunc_m_uvm_string_queue_join__26__Vfuncout 
                                = VL_CVT_PACK_STR_ND(
                                                     q);
                        }(), __Vfunc_m_uvm_string_queue_join__26__Vfuncout)), 0x00000064U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh"s, 0x000001c1U, ""s, 1U);
        }
        __Vlabel0: ;
    }
}

VlCoroutine Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_run_test(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string test_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_run_test\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_factory> __Vfunc_get__29__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__32__Vfuncout;
    __Vfunc_uvm_report_enabled__32__Vfuncout = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_component> __Vtask_create_component_by_name__35__Vfuncout;
    std::string __Vtask_get_type_name__39__Vfuncout;
    std::string __Vtask_get_type_name__42__Vfuncout;
    VlClassRef<Vpools_top_std__03a__03aprocess> __Vfunc_self__43__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_server> __Vfunc_get_server__49__Vfuncout;
    CData/*0:0*/ __Vfunc_get_finish_on_completion__52__Vfuncout;
    __Vfunc_get_finish_on_completion__52__Vfuncout = 0;
    // Body
    VL_KEEP_THIS;
    VlClassRef<Vpools_top_std__03a__03aprocess> unnamedblk164__DOT____VforkParent;
    VlClassRef<Vpools_top_uvm_pkg__03a__03a__VDynScope_23> __VDynScope_run_test_0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_server> l_rs;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_factory> factory;
    CData/*0:0*/ testname_plusarg;
    testname_plusarg = 0;
    IData/*31:0*/ test_name_count;
    test_name_count = 0;
    VlQueue<std::string> test_names;
    std::string msg;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_component> uvm_test_top;
    __VDynScope_run_test_0 = VL_NEW(Vpools_top_uvm_pkg__03a__03a__VDynScope_23, vlSymsp);
    {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_run_test_callback__Vclpkg.__VnoInFunc_m_do_pre_run_test(vlSymsp);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_factory__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__29__Vfuncout);
        factory = __Vfunc_get__29__Vfuncout;
        vlSymsp->TOP__uvm_pkg.__PVT__m_uvm_core_state = 4U;
        testname_plusarg = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__VnoInFunc_m_init_objections(vlProcess, vlSymsp);
        this->__VnoInFunc_m_do_dump_args(vlProcess, vlSymsp);
        if (VL_VALUEPLUSARGS_INN(64, "UVM_TESTNAME=%s"s, 
                                 test_name)) {
            if ((0U != ([&]() {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 0U, "NO_DPI_TSTNAME"s, __Vfunc_uvm_report_enabled__32__Vfuncout);
                        }(), __Vfunc_uvm_report_enabled__32__Vfuncout))) {
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "NO_DPI_TSTNAME"s, "UVM_NO_DPI defined--getting UVM_TESTNAME directly, without DPI"s, 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh"s, 0x00000205U, ""s, 1U);
            }
            testname_plusarg = 1U;
        }
        if ((""s != test_name)) {
            if (Vpools_top_uvm_pkg__03a__03auvm_component::__PVT__m_children.exists("uvm_test_top"s)) {
                this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "TTINST"s, "An uvm_test_top already exists via a previous call to run_test"s, 0U, ""s, 0U, ""s, 0U);
                co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                        vlProcess, 
                                                        "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh", 
                                                        529);
            }
            if (VL_UNLIKELY(((1U & (~ (0U != ([&]() {
                                            VL_NULL_CHECK(factory, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh", 531)
                                              ->__VnoInFunc_create_component_by_name(vlProcess, vlSymsp, test_name, ""s, "uvm_test_top"s, VlNull{}, __Vtask_create_component_by_name__35__Vfuncout);
                                            uvm_test_top 
                                                = __Vtask_create_component_by_name__35__Vfuncout;
                                        }(), 1U))))))) {
                VL_WRITEF_NX("[%0t] %%Error: uvm_root.svh:531: Assertion failed in %Nuvm_pkg.uvm_root.run_test: '$cast' failed.\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                VL_STOP_MT("/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh", 531, "");
            }
            if ((VlNull{} == uvm_test_top)) {
                msg = ((IData)(testname_plusarg) ? 
                       VL_CONCATN_NNN("command line +UVM_TESTNAME="s, test_name)
                        : VL_CONCATN_NNN(VL_CONCATN_NNN("call to run_test("s, test_name), ")"s));
                this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "INVTST"s, 
                                                   VL_CVT_PACK_STR_NN(
                                                                      VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Requested test from "s, msg), " not found."s)), 0U, ""s, 0U, ""s, 0U);
            }
        }
        if ((0U == Vpools_top_uvm_pkg__03a__03auvm_component::__PVT__m_children.size())) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "NOCOMP"s, "No components instantiated. You must either instantiate at least one component before calling run_test or use run_test to do so. To run a test using run_test, use +UVM_TESTNAME or supply the test name in the argument to run_test(). Exiting simulation."s, 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        }
        if ((""s == test_name)) {
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "RNTST"s, "Running test ..."s, 0x00000064U, ""s, 0U, ""s, 0U);
        } else if ((test_name == ([&]() {
                        VL_NULL_CHECK(uvm_test_top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh", 555)
                                  ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__39__Vfuncout);
                    }(), __Vtask_get_type_name__39__Vfuncout))) {
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "RNTST"s, 
                                              VL_CVT_PACK_STR_NN(
                                                                 VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Running test "s, test_name), "..."s)), 0x00000064U, ""s, 0U, ""s, 0U);
        } else {
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "RNTST"s, 
                                              VL_CVT_PACK_STR_NN(
                                                                 VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Running test "s, 
                                                                                ([&]() {
                                            VL_NULL_CHECK(uvm_test_top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh", 558)
                                                                                ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__42__Vfuncout);
                                        }(), __Vtask_get_type_name__42__Vfuncout)), " (via factory override for test \""s), test_name), "\")..."s)), 0x00000064U, ""s, 0U, ""s, 0U);
                }
                vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __Vfunc_self__43__Vfuncout);
                unnamedblk164__DOT____VforkParent = __Vfunc_self__43__Vfuncout;
                this->__VnoInFunc_run_test____Vfork_1__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __VDynScope_run_test_0, unnamedblk164__DOT____VforkParent);
                co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                        vlProcess, 
                                                        "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh", 
                                                        568);
                if ((1U & (~ (IData)(this->__PVT__m_phase_all_done)))) {
                    CData/*0:0*/ __VdynTrigger_h5ed64d50__0;
                    __VdynTrigger_h5ed64d50__0 = 0;
                    __VdynTrigger_h5ed64d50__0 = 0U;
                    while ((1U & (~ (IData)(__VdynTrigger_h5ed64d50__0)))) {
                        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                                     vlProcess, 
                                                                     "@([true] uvm_pkg::uvm_root.m_phase_all_done)", 
                                                                     "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh", 
                                                                     570);
                        __VdynTrigger_h5ed64d50__0 
                            = this->__PVT__m_phase_all_done;
                        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h5ed64d50__0);
                    }
                    co_await vlSymsp->TOP.__VdynSched.resumption(
                                                                 vlProcess, 
                                                                 "@([true] uvm_pkg::uvm_root.m_phase_all_done)", 
                                                                 "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh", 
                                                                 570);
                }
                vlSymsp->TOP__uvm_pkg.__PVT__m_uvm_core_state = 6U;
                VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_run_test_0, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh", 575)
                              ->__PVT__phase_runner_proc, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh", 575)
                                                                 ->__VnoInFunc_kill(vlSymsp);
                vlSymsp->TOP__uvm_pkg__03a__03auvm_report_server__Vclpkg.__VnoInFunc_get_server(vlProcess, vlSymsp, __Vfunc_get_server__49__Vfuncout);
                l_rs = __Vfunc_get_server__49__Vfuncout;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_run_test_callback__Vclpkg.__VnoInFunc_m_do_post_run_test(vlSymsp);
                VL_NULL_CHECK(l_rs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh", 581)
                                                                 ->__VnoInFunc_report_summarize(vlProcess, vlSymsp, 0x80000001U);
                vlSymsp->TOP__uvm_pkg.__PVT__m_uvm_core_state = 7U;
                if (VL_UNLIKELY((([&]() {
                                    this->__VnoInFunc_get_finish_on_completion(vlSymsp, __Vfunc_get_finish_on_completion__52__Vfuncout);
                                }(), (IData)(__Vfunc_get_finish_on_completion__52__Vfuncout))))) {
                    vlProcess->disableFork();
                    VL_FINISH_MT("/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh", 585, "");
                }
                __Vlabel0: ;
            }
            co_return;}

        VlCoroutine Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_run_test____Vfork_1__0(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03a__VDynScope_23> __VDynScope_run_test_0, VlClassRef<Vpools_top_std__03a__03aprocess> unnamedblk164__DOT____VforkParent) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_run_test____Vfork_1__0\n"); );
            // Locals
            VlClassRef<Vpools_top_std__03a__03aprocess> __Vtask___VforkTask_0__44____VforkParent;
            VlClassRef<Vpools_top_uvm_pkg__03a__03a__VDynScope_23> __Vtask___VforkTask_0__44____VDynScope_run_test_0;
            IData/*31:0*/ __Vtask_status__45__Vfuncout;
            __Vtask_status__45__Vfuncout = 0;
            VlClassRef<Vpools_top_std__03a__03aprocess> __Vfunc_self__46__Vfuncout;
            // Body
            VL_KEEP_THIS;
            CData/*0:0*/ __Vtrigprevexpr_hf24b6578__0;
            __Vtrigprevexpr_hf24b6578__0 = 0;
            __Vtask___VforkTask_0__44____VDynScope_run_test_0 
                = __VDynScope_run_test_0;
            __Vtask___VforkTask_0__44____VforkParent 
                = unnamedblk164__DOT____VforkParent;
            if ((1U == ([&]() {
                            VL_NULL_CHECK(__Vtask___VforkTask_0__44____VforkParent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh", 562)
                        ->__VnoInFunc_status(vlSymsp, __Vtask_status__45__Vfuncout);
                        }(), __Vtask_status__45__Vfuncout))) {
                CData/*0:0*/ __VdynTrigger_h1434128f__0;
                __VdynTrigger_h1434128f__0 = 0;
                __VdynTrigger_h1434128f__0 = 0U;
                while ((1U & (~ (IData)(__VdynTrigger_h1434128f__0)))) {
                    co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                                 vlProcess, 
                                                                 "@([true] (32'h1 != $_EXPRSTMT( // Function: status uvm_pkg::uvm_root.__Vtask___VforkTask_0__44____VforkParent.(uvm_pkg::uvm_root.__Vtask_status__45__Vfuncout); , ); ))", 
                                                                 "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh", 
                                                                 562);
                    __Vtrigprevexpr_hf24b6578__0 = 
                        (1U != ([&]() {
                                VL_NULL_CHECK(__Vtask___VforkTask_0__44____VforkParent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh", 562)
                                ->__VnoInFunc_status(vlSymsp, __Vtask_status__45__Vfuncout);
                            }(), __Vtask_status__45__Vfuncout));
                    __VdynTrigger_h1434128f__0 = __Vtrigprevexpr_hf24b6578__0;
                    vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h1434128f__0);
                }
                co_await vlSymsp->TOP.__VdynSched.resumption(
                                                             vlProcess, 
                                                             "@([true] (32'h1 != $_EXPRSTMT( // Function: status uvm_pkg::uvm_root.__Vtask___VforkTask_0__44____VforkParent.(uvm_pkg::uvm_root.__Vtask_status__45__Vfuncout); , ); ))", 
                                                             "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh", 
                                                             562);
            }
            vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __Vfunc_self__46__Vfuncout);
            VL_NULL_CHECK(__Vtask___VforkTask_0__44____VDynScope_run_test_0, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh", 564)
                                                                 ->__PVT__phase_runner_proc 
                = __Vfunc_self__46__Vfuncout;
            co_await vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__VnoInFunc_m_run_phases(vlProcess, vlSymsp);
            vlProcess->state(VlProcess::FINISHED);
            co_return;}

        void Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_find_all(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string comp_match, VlQueue<VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_component>> &comps, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_component> comp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_find_all\n"); );
            // Body
            if ((VlNull{} == comp)) {
                comp = VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root>{this};
            }
            this->__VnoInFunc_m_find_all_recurse(vlProcess, vlSymsp, comp_match, comps, comp);
        }

        void Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_find(Vpools_top__Syms* __restrict vlSymsp, std::string comp_match, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_component> &find__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_find\n"); );
            // Locals
            std::string __Vtask_get_full_name__56__Vfuncout;
            std::string __Vtemp_1;
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            VlQueue<VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_component>> comp_list;
            {
                this->__VnoInFunc_find_all(vlProcess, vlSymsp, comp_match, comp_list, VlNull{});
                if (VL_LTS_III(32, 1U, comp_list.size())) {
                    __Vtemp_1 = ([&]() {
                            VL_NULL_CHECK(comp_list.at(0U), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh", 614)
                                 ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__56__Vfuncout);
                        }(), __Vtask_get_full_name__56__Vfuncout);
                    this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "MMATCH"s, VL_SFORMATF_N_NX("Found %0d components matching '%@'. Returning first match, %0@.",0,
                                                                                32,
                                                                                comp_list.size(),
                                                                                -1,
                                                                                &(comp_match),
                                                                                -1,
                                                                                &(__Vtemp_1)) , 0U, ""s, 0U, ""s, 0U);
                }
                if ((0U == comp_list.size())) {
                    this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "CMPNFD"s, 
                                                         VL_CVT_PACK_STR_NN(
                                                                            VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Component matching '"s, comp_match), "' was not found in the list of uvm_components"s)), 0U, ""s, 0U, ""s, 0U);
                    find__Vfuncrtn = VlNull{};
                    goto __Vlabel0;
                }
                find__Vfuncrtn = comp_list.at(0U);
                __Vlabel0: ;
            }
        }

        void Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_print_topology(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_printer> printer) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_print_topology\n"); );
            // Locals
            VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_printer> __Vfunc_get_default__59__Vfuncout;
            IData/*31:0*/ __Vfunc_uvm_report_enabled__60__Vfuncout;
            __Vfunc_uvm_report_enabled__60__Vfuncout = 0;
            // Body
            {
                if ((0U == Vpools_top_uvm_pkg__03a__03auvm_component::__PVT__m_children.size())) {
                    this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "EMTCOMP"s, "print_topology - No UVM components to print."s, 0U, ""s, 0U, ""s, 0U);
                    goto __Vlabel0;
                }
                if ((VlNull{} == printer)) {
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_printer__Vclpkg.__VnoInFunc_get_default(vlProcess, vlSymsp, __Vfunc_get_default__59__Vfuncout);
                    printer = __Vfunc_get_default__59__Vfuncout;
                }
                if ((0U != ([&]() {
                                this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 0U, "UVMTOP"s, __Vfunc_uvm_report_enabled__60__Vfuncout);
                            }(), __Vfunc_uvm_report_enabled__60__Vfuncout))) {
                    this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "UVMTOP"s, "UVM testbench topology:"s, 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh"s, 0x00000280U, ""s, 1U);
                }
                this->__VnoInFunc_print(vlProcess, vlSymsp, printer);
                __Vlabel0: ;
            }
        }

        void Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_set_timeout(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, QData/*63:0*/ timeout, CData/*0:0*/ overridable) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_set_timeout\n"); );
            // Body
            {
                if ((1U & (~ (IData)(vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__PVT__set_timeout__Vstatic__m_uvm_timeout_overridable)))) {
                    this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "NOTIMOUTOVR"s, VL_SFORMATF_N_NX("The global timeout setting of %0# is not overridable to %0# due to a previous setting.",0,
                                                                                64,
                                                                                this->__PVT__phase_timeout,
                                                                                64,
                                                                                timeout) , 0U, ""s, 0U, ""s, 0U);
                    goto __Vlabel0;
                }
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__PVT__set_timeout__Vstatic__m_uvm_timeout_overridable 
                    = overridable;
                this->__PVT__phase_timeout = timeout;
                __Vlabel0: ;
            }
        }

        void Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_find_all_recurse(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string comp_match, VlQueue<VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_component>> &comps, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_component> comp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_find_all_recurse\n"); );
            // Locals
            IData/*31:0*/ __Vtask_get_first_child__64__Vfuncout;
            __Vtask_get_first_child__64__Vfuncout = 0;
            VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_component> __Vtask_get_child__66__Vfuncout;
            IData/*31:0*/ __Vtask_get_next_child__67__Vfuncout;
            __Vtask_get_next_child__67__Vfuncout = 0;
            CData/*0:0*/ __Vfunc_uvm_is_match__68__Vfuncout;
            __Vfunc_uvm_is_match__68__Vfuncout = 0;
            std::string __Vfunc_uvm_is_match__68__expr;
            std::string __Vfunc_uvm_is_match__68__str;
            std::string __Vtask_get_full_name__69__Vfuncout;
            std::string __Vfunc_uvm_glob_to_re__70__Vfuncout;
            std::string __Vfunc_uvm_glob_to_re__70__glob;
            IData/*31:0*/ __Vfunc_uvm_re_match__71__Vfuncout;
            __Vfunc_uvm_re_match__71__Vfuncout = 0;
            std::string __Vfunc_uvm_re_match__71__re;
            std::string __Vfunc_uvm_re_match__71__str;
            IData/*31:0*/ __Vfunc_uvm_re_match__71____Vincrement1;
            __Vfunc_uvm_re_match__71____Vincrement1 = 0;
            std::string __Vtask_get_name__72__Vfuncout;
            // Body
            std::string name;
            if ((0U != ([&]() {
                            VL_NULL_CHECK(comp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh", 670)
                        ->__VnoInFunc_get_first_child(vlSymsp, name, __Vtask_get_first_child__64__Vfuncout);
                        }(), __Vtask_get_first_child__64__Vfuncout))) {
                do {
                    this->__VnoInFunc_m_find_all_recurse(vlProcess, vlSymsp, comp_match, comps, 
                                                         ([&]() {
                                VL_NULL_CHECK(comp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh", 672)
                                                          ->__VnoInFunc_get_child(vlProcess, vlSymsp, name, __Vtask_get_child__66__Vfuncout);
                            }(), __Vtask_get_child__66__Vfuncout));
                } while ((0U != ([&]() {
                                VL_NULL_CHECK(comp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh", 674)
                                 ->__VnoInFunc_get_next_child(vlSymsp, name, __Vtask_get_next_child__67__Vfuncout);
                            }(), __Vtask_get_next_child__67__Vfuncout)));
            }
            if ((([&]() {
                            __Vfunc_uvm_is_match__68__str 
                                = VL_CVT_PACK_STR_NN(
                                                     ([&]() {
                                        VL_NULL_CHECK(comp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh", 675)
                                                      ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__69__Vfuncout);
                                    }(), __Vtask_get_full_name__69__Vfuncout));
                            __Vfunc_uvm_is_match__68__expr 
                                = comp_match;
                            __Vfunc_uvm_glob_to_re__70__glob 
                                = __Vfunc_uvm_is_match__68__expr;
                            __Vfunc_uvm_glob_to_re__70__Vfuncout 
                                = __Vfunc_uvm_glob_to_re__70__glob;
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
                                = __Vfunc_uvm_glob_to_re__70__Vfuncout;
                            __Vfunc_uvm_is_match__68__Vfuncout 
                                = (0U == ([&]() {
                                        __Vfunc_uvm_re_match__71__str 
                                            = __Vfunc_uvm_is_match__68__str;
                                        __Vfunc_uvm_re_match__71__re 
                                            = vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s;
                                        {
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                                            if ((0U 
                                                 == 
                                                 VL_LEN_IN(__Vfunc_uvm_re_match__71__re))) {
                                                __Vfunc_uvm_re_match__71__Vfuncout = 0U;
                                                goto __Vlabel0;
                                            }
                                            if ((0x5eU 
                                                 == 
                                                 VL_GETC_N(__Vfunc_uvm_re_match__71__re,0U))) {
                                                __Vfunc_uvm_re_match__71__re 
                                                    = 
                                                    VL_SUBSTR_N(__Vfunc_uvm_re_match__71__re,1U,
                                                                (VL_LEN_IN(__Vfunc_uvm_re_match__71__re) 
                                                                 - (IData)(1U)));
                                            }
                                            while (
                                                   ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                     != 
                                                     VL_LEN_IN(__Vfunc_uvm_re_match__71__str)) 
                                                    & (0x2aU 
                                                       != 
                                                       VL_GETC_N(__Vfunc_uvm_re_match__71__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                                if (
                                                    ((VL_GETC_N(__Vfunc_uvm_re_match__71__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                                      != 
                                                      VL_GETC_N(__Vfunc_uvm_re_match__71__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                                     & (0x3fU 
                                                        != 
                                                        VL_GETC_N(__Vfunc_uvm_re_match__71__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                                    __Vfunc_uvm_re_match__71__Vfuncout = 1U;
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
                                                    VL_LEN_IN(__Vfunc_uvm_re_match__71__str))) {
                                                if (
                                                    (0x2aU 
                                                     == 
                                                     VL_GETC_N(__Vfunc_uvm_re_match__71__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                        = 
                                                        ((IData)(1U) 
                                                         + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                                    if (
                                                        (vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                         == 
                                                         VL_LEN_IN(__Vfunc_uvm_re_match__71__re))) {
                                                        __Vfunc_uvm_re_match__71__Vfuncout = 0U;
                                                        goto __Vlabel0;
                                                    }
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                                                        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                                        = 
                                                        ((IData)(1U) 
                                                         + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                                } else if (
                                                           ((VL_GETC_N(__Vfunc_uvm_re_match__71__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                                             == 
                                                             VL_GETC_N(__Vfunc_uvm_re_match__71__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                                            | (0x3fU 
                                                               == 
                                                               VL_GETC_N(__Vfunc_uvm_re_match__71__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
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
                                                    __Vfunc_uvm_re_match__71____Vincrement1 
                                                        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                                        = 
                                                        ((IData)(1U) 
                                                         + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                        = __Vfunc_uvm_re_match__71____Vincrement1;
                                                }
                                            }
                                            while (
                                                   (VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                                               VL_LEN_IN(__Vfunc_uvm_re_match__71__re)) 
                                                    & (0x2aU 
                                                       == 
                                                       VL_GETC_N(__Vfunc_uvm_re_match__71__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                            }
                                            __Vfunc_uvm_re_match__71__Vfuncout 
                                                = (
                                                   (vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                    == 
                                                    VL_LEN_IN(__Vfunc_uvm_re_match__71__re))
                                                    ? 0U
                                                    : 1U);
                                            __Vlabel0: ;
                                        }
                                    }(), __Vfunc_uvm_re_match__71__Vfuncout));
                        }(), (IData)(__Vfunc_uvm_is_match__68__Vfuncout)) 
                 && (""s != ([&]() {
                                VL_NULL_CHECK(comp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh", 676)
                             ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__72__Vfuncout);
                            }(), __Vtask_get_name__72__Vfuncout)))) {
                comps.push_back(comp);
            }
        }

        void Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_add_child(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_component> child, CData/*0:0*/ &m_add_child__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_add_child\n"); );
            // Locals
            CData/*0:0*/ __Vfunc_m_add_child__73__Vfuncout;
            __Vfunc_m_add_child__73__Vfuncout = 0;
            // Body
            Vpools_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_add_child(vlProcess, vlSymsp, child, __Vfunc_m_add_child__73__Vfuncout);
            m_add_child__Vfuncrtn = __Vfunc_m_add_child__73__Vfuncout;
        }

        void Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_build_phase\n"); );
            // Body
            Vpools_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
            this->__VnoInFunc_m_set_cl_msg_args(vlProcess, vlSymsp);
            this->__VnoInFunc_m_do_verbosity_settings(vlProcess, vlSymsp);
            this->__VnoInFunc_m_do_timeout_settings(vlProcess, vlSymsp);
            this->__VnoInFunc_m_do_factory_settings(vlProcess, vlSymsp);
            this->__VnoInFunc_m_do_config_settings(vlProcess, vlSymsp);
            this->__VnoInFunc_m_do_max_quit_settings(vlProcess, vlSymsp);
        }

        void Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_verbosity_settings(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_verbosity_settings\n"); );
            // Locals
            IData/*31:0*/ __Vtask_get_arg_values__81__Vfuncout;
            __Vtask_get_arg_values__81__Vfuncout = 0;
            std::string __Vtask_uvm_split_string__82__str;
            CData/*7:0*/ __Vtask_uvm_split_string__82__sep;
            __Vtask_uvm_split_string__82__sep = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__82__s;
            __Vtask_uvm_split_string__82__s = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__82__e;
            __Vtask_uvm_split_string__82__e = 0;
            CData/*0:0*/ __Vtask_m_convert_verb__84__Vfuncout;
            __Vtask_m_convert_verb__84__Vfuncout = 0;
            IData/*31:0*/ __Vtask_m_convert_verb__84__verb_enum;
            __Vtask_m_convert_verb__84__verb_enum = 0;
            std::string __Vtemp_1;
            std::string __Vtemp_2;
            // Body
            IData/*31:0*/ unnamedblk165__DOT__i;
            unnamedblk165__DOT__i = 0;
            VlQueue<std::string> set_verbosity_settings;
            VlQueue<std::string> split_vals;
            IData/*31:0*/ tmp_verb;
            tmp_verb = 0;
            VL_NULL_CHECK(this->__PVT__clp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh", 728)
                                                                 ->__VnoInFunc_get_arg_values(vlSymsp, "+uvm_set_verbosity="s, set_verbosity_settings, __Vtask_get_arg_values__81__Vfuncout);
            unnamedblk165__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk165__DOT__i, set_verbosity_settings.size())) {
                __Vtask_uvm_split_string__82__sep = 0x2cU;
                __Vtask_uvm_split_string__82__str = 
                    VL_CVT_PACK_STR_NN(set_verbosity_settings.at(unnamedblk165__DOT__i));
                __Vtask_uvm_split_string__82__s = 0;
                __Vtask_uvm_split_string__82__s = 0U;
                __Vtask_uvm_split_string__82__e = 0;
                __Vtask_uvm_split_string__82__e = 0U;
                split_vals.clear();
                while (VL_LTS_III(32, __Vtask_uvm_split_string__82__e, 
                                  VL_LEN_IN(__Vtask_uvm_split_string__82__str))) {
                    __Vtask_uvm_split_string__82__s 
                        = __Vtask_uvm_split_string__82__e;
                    {
                        while (VL_LTS_III(32, __Vtask_uvm_split_string__82__e, 
                                          VL_LEN_IN(__Vtask_uvm_split_string__82__str))) {
                            if ((VL_GETC_N(__Vtask_uvm_split_string__82__str,__Vtask_uvm_split_string__82__e) 
                                 == (IData)(__Vtask_uvm_split_string__82__sep))) {
                                goto __Vlabel0;
                            }
                            __Vtask_uvm_split_string__82__e 
                                = ((IData)(1U) + __Vtask_uvm_split_string__82__e);
                        }
                        __Vlabel0: ;
                    }
                    if ((__Vtask_uvm_split_string__82__s 
                         != __Vtask_uvm_split_string__82__e)) {
                        split_vals.push_back(VL_SUBSTR_N(__Vtask_uvm_split_string__82__str,__Vtask_uvm_split_string__82__s,
                                                         (__Vtask_uvm_split_string__82__e 
                                                          - (IData)(1U))));
                    }
                    __Vtask_uvm_split_string__82__e 
                        = ((IData)(1U) + __Vtask_uvm_split_string__82__e);
                }
                if ((VL_GTS_III(32, 4U, split_vals.size()) 
                     | VL_LTS_III(32, 5U, split_vals.size()))) {
                    __Vtemp_1 = set_verbosity_settings.at(unnamedblk165__DOT__i);
                    this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "INVLCMDARGS"s, VL_SFORMATF_N_NX("Invalid number of arguments found on the command line for setting '+uvm_set_verbosity=%@'.  Setting ignored.",0,
                                                                                -1,
                                                                                &(__Vtemp_1)) , 0U, ""s, 0U, ""s, 0U);
                }
                if ((1U & (~ ([&]() {
                                    VL_NULL_CHECK(this->__PVT__clp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh", 738)
                              ->__VnoInFunc_m_convert_verb(vlSymsp, 
                                                           VL_CVT_PACK_STR_NN(split_vals.at(2U)), __Vtask_m_convert_verb__84__verb_enum, __Vtask_m_convert_verb__84__Vfuncout);
                                    tmp_verb = __Vtask_m_convert_verb__84__verb_enum;
                                }(), (IData)(__Vtask_m_convert_verb__84__Vfuncout))))) {
                    __Vtemp_2 = set_verbosity_settings.at(unnamedblk165__DOT__i);
                    this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "INVLCMDVERB"s, VL_SFORMATF_N_NX("Invalid verbosity found on the command line for setting '%@'.",0,
                                                                                -1,
                                                                                &(__Vtemp_2)) , 0U, ""s, 0U, ""s, 0U);
                }
                unnamedblk165__DOT__i = ((IData)(1U) 
                                         + unnamedblk165__DOT__i);
            }
        }

        void Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_timeout_settings(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_timeout_settings\n"); );
            // Locals
            IData/*31:0*/ __Vtask_get_arg_values__86__Vfuncout;
            __Vtask_get_arg_values__86__Vfuncout = 0;
            // Body
            std::string unnamedblk166__DOT__timeout_list;
            std::string unnamedblk166__DOT__sep;
            IData/*31:0*/ unnamedblk166__DOT__unnamedblk167__DOT__i;
            unnamedblk166__DOT__unnamedblk167__DOT__i = 0;
            VlQueue<std::string> timeout_settings;
            std::string timeout;
            VlQueue<std::string> split_timeout;
            IData/*31:0*/ timeout_count;
            timeout_count = 0;
            QData/*63:0*/ timeout_int;
            timeout_int = 0;
            std::string override_spec;
            VL_NULL_CHECK(this->__PVT__clp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh", 757)
                                                                 ->__VnoInFunc_get_arg_values(vlSymsp, "+UVM_TIMEOUT="s, timeout_settings, __Vtask_get_arg_values__86__Vfuncout);
            timeout_count = __Vtask_get_arg_values__86__Vfuncout;
            if ((0U != timeout_count)) {
                timeout = timeout_settings.at(0U);
                if (VL_LTS_III(32, 1U, timeout_count)) {
                    unnamedblk166__DOT__unnamedblk167__DOT__i = 0U;
                    while (VL_LTS_III(32, unnamedblk166__DOT__unnamedblk167__DOT__i, timeout_settings.size())) {
                        if ((0U != unnamedblk166__DOT__unnamedblk167__DOT__i)) {
                            unnamedblk166__DOT__sep = "; "s;
                        }
                        unnamedblk166__DOT__timeout_list 
                            = VL_CONCATN_NNN(VL_CONCATN_NNN(unnamedblk166__DOT__timeout_list, unnamedblk166__DOT__sep), timeout_settings.at(unnamedblk166__DOT__unnamedblk167__DOT__i));
                        unnamedblk166__DOT__unnamedblk167__DOT__i 
                            = ((IData)(1U) + unnamedblk166__DOT__unnamedblk167__DOT__i);
                    }
                    this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "MULTTIMOUT"s, VL_SFORMATF_N_NX("Multiple (%0d) +UVM_TIMEOUT arguments provided on the command line.  '%@' will be used.  Provided list: %@.",0,
                                                                                32,
                                                                                timeout_count,
                                                                                -1,
                                                                                &(timeout),
                                                                                -1,
                                                                                &(unnamedblk166__DOT__timeout_list)) , 0U, ""s, 0U, ""s, 0U);
                }
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "TIMOUTSET"s, VL_SFORMATF_N_NX("'+UVM_TIMEOUT=%@' provided on the command line is being applied.",0,
                                                                                -1,
                                                                                &(timeout)) , 0U, ""s, 0U, ""s, 0U);
                (void)VL_SSCANF_INNX(64,timeout,"%#,%s",0,
                                     64,&(timeout_int),
                                     -1,&(override_spec)) ;
                if (("YES"s == override_spec)) {
                    this->__VnoInFunc_set_timeout(vlProcess, vlSymsp, timeout_int, 1U);
                } else if (("NO"s == override_spec)) {
                    this->__VnoInFunc_set_timeout(vlProcess, vlSymsp, timeout_int, 0U);
                } else {
                    this->__VnoInFunc_set_timeout(vlProcess, vlSymsp, timeout_int, 1U);
                }
            }
        }

        void Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_factory_settings(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_factory_settings\n"); );
            // Locals
            IData/*31:0*/ __Vtask_get_arg_matches__92__Vfuncout;
            __Vtask_get_arg_matches__92__Vfuncout = 0;
            IData/*31:0*/ __Vtask_get_arg_matches__94__Vfuncout;
            __Vtask_get_arg_matches__94__Vfuncout = 0;
            // Body
            IData/*31:0*/ unnamedblk168__DOT__i;
            unnamedblk168__DOT__i = 0;
            IData/*31:0*/ unnamedblk169__DOT__i;
            unnamedblk169__DOT__i = 0;
            VlQueue<std::string> args;
            VL_NULL_CHECK(this->__PVT__clp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh", 792)
                                                                 ->__VnoInFunc_get_arg_matches(vlSymsp, "/^\\+(UVM_SET_INST_OVERRIDE|uvm_set_inst_override)=/"s, args, __Vtask_get_arg_matches__92__Vfuncout);
            unnamedblk168__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk168__DOT__i, args.size())) {
                this->__VnoInFunc_m_process_inst_override(vlProcess, vlSymsp, 
                                                          VL_CVT_PACK_STR_NN(
                                                                             VL_SUBSTR_N(args.at(unnamedblk168__DOT__i),0x00000017U,
                                                                                (VL_LEN_IN(args.at(unnamedblk168__DOT__i)) 
                                                                                - (IData)(1U)))));
                unnamedblk168__DOT__i = ((IData)(1U) 
                                         + unnamedblk168__DOT__i);
            }
            VL_NULL_CHECK(this->__PVT__clp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh", 796)
                                                                 ->__VnoInFunc_get_arg_matches(vlSymsp, "/^\\+(UVM_SET_TYPE_OVERRIDE|uvm_set_type_override)=/"s, args, __Vtask_get_arg_matches__94__Vfuncout);
            unnamedblk169__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk169__DOT__i, args.size())) {
                this->__VnoInFunc_m_process_type_override(vlProcess, vlSymsp, 
                                                          VL_CVT_PACK_STR_NN(
                                                                             VL_SUBSTR_N(args.at(unnamedblk169__DOT__i),0x00000017U,
                                                                                (VL_LEN_IN(args.at(unnamedblk169__DOT__i)) 
                                                                                - (IData)(1U)))));
                unnamedblk169__DOT__i = ((IData)(1U) 
                                         + unnamedblk169__DOT__i);
            }
        }

        void Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_process_inst_override(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string ovr) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_process_inst_override\n"); );
            // Locals
            VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__96__Vfuncout;
            VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_factory> __Vtask_get_factory__97__Vfuncout;
            std::string __Vtask_uvm_split_string__98__str;
            CData/*7:0*/ __Vtask_uvm_split_string__98__sep;
            __Vtask_uvm_split_string__98__sep = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__98__s;
            __Vtask_uvm_split_string__98__s = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__98__e;
            __Vtask_uvm_split_string__98__e = 0;
            // Body
            VlQueue<std::string> split_val;
            VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> cs;
            VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_factory> factory;
            {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__96__Vfuncout);
                cs = __Vfunc_get__96__Vfuncout;
                VL_NULL_CHECK(cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh", 809)
                                                                 ->__VnoInFunc_get_factory(vlSymsp, __Vtask_get_factory__97__Vfuncout);
                factory = __Vtask_get_factory__97__Vfuncout;
                __Vtask_uvm_split_string__98__sep = 0x2cU;
                __Vtask_uvm_split_string__98__str = ovr;
                __Vtask_uvm_split_string__98__s = 0;
                __Vtask_uvm_split_string__98__s = 0U;
                __Vtask_uvm_split_string__98__e = 0;
                __Vtask_uvm_split_string__98__e = 0U;
                split_val.clear();
                while (VL_LTS_III(32, __Vtask_uvm_split_string__98__e, 
                                  VL_LEN_IN(__Vtask_uvm_split_string__98__str))) {
                    __Vtask_uvm_split_string__98__s 
                        = __Vtask_uvm_split_string__98__e;
                    {
                        while (VL_LTS_III(32, __Vtask_uvm_split_string__98__e, 
                                          VL_LEN_IN(__Vtask_uvm_split_string__98__str))) {
                            if ((VL_GETC_N(__Vtask_uvm_split_string__98__str,__Vtask_uvm_split_string__98__e) 
                                 == (IData)(__Vtask_uvm_split_string__98__sep))) {
                                goto __Vlabel1;
                            }
                            __Vtask_uvm_split_string__98__e 
                                = ((IData)(1U) + __Vtask_uvm_split_string__98__e);
                        }
                        __Vlabel1: ;
                    }
                    if ((__Vtask_uvm_split_string__98__s 
                         != __Vtask_uvm_split_string__98__e)) {
                        split_val.push_back(VL_SUBSTR_N(__Vtask_uvm_split_string__98__str,__Vtask_uvm_split_string__98__s,
                                                        (__Vtask_uvm_split_string__98__e 
                                                         - (IData)(1U))));
                    }
                    __Vtask_uvm_split_string__98__e 
                        = ((IData)(1U) + __Vtask_uvm_split_string__98__e);
                }
                if ((3U != split_val.size())) {
                    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, 
                                                       VL_CVT_PACK_STR_NN(
                                                                          VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Invalid setting for +uvm_set_inst_override="s, ovr), ", setting must specify <requested_type>,<override_type>,<instance_path>"s)), 0U, ""s, 0U, ""s, 0U);
                    goto __Vlabel0;
                }
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "INSTOVR"s, 
                                                  VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN("Applying instance override from the command line: +uvm_set_inst_override="s, ovr)), 0U, ""s, 0U, ""s, 0U);
                VL_NULL_CHECK(factory, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh", 820)
                                                                 ->__VnoInFunc_set_inst_override_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(0U)), 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(1U)), 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(2U)));
                __Vlabel0: ;
            }
        }

        void Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_process_type_override(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string ovr) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_process_type_override\n"); );
            // Locals
            VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__102__Vfuncout;
            VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_factory> __Vtask_get_factory__103__Vfuncout;
            std::string __Vtask_uvm_split_string__104__str;
            CData/*7:0*/ __Vtask_uvm_split_string__104__sep;
            __Vtask_uvm_split_string__104__sep = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__104__s;
            __Vtask_uvm_split_string__104__s = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__104__e;
            __Vtask_uvm_split_string__104__e = 0;
            // Body
            VlQueue<std::string> split_val;
            IData/*31:0*/ replace;
            replace = 0;
            VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> cs;
            VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_factory> factory;
            {
                replace = 1U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__102__Vfuncout);
                cs = __Vfunc_get__102__Vfuncout;
                VL_NULL_CHECK(cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh", 831)
                                                                 ->__VnoInFunc_get_factory(vlSymsp, __Vtask_get_factory__103__Vfuncout);
                factory = __Vtask_get_factory__103__Vfuncout;
                __Vtask_uvm_split_string__104__sep = 0x2cU;
                __Vtask_uvm_split_string__104__str 
                    = ovr;
                __Vtask_uvm_split_string__104__s = 0;
                __Vtask_uvm_split_string__104__s = 0U;
                __Vtask_uvm_split_string__104__e = 0;
                __Vtask_uvm_split_string__104__e = 0U;
                split_val.clear();
                while (VL_LTS_III(32, __Vtask_uvm_split_string__104__e, 
                                  VL_LEN_IN(__Vtask_uvm_split_string__104__str))) {
                    __Vtask_uvm_split_string__104__s 
                        = __Vtask_uvm_split_string__104__e;
                    {
                        while (VL_LTS_III(32, __Vtask_uvm_split_string__104__e, 
                                          VL_LEN_IN(__Vtask_uvm_split_string__104__str))) {
                            if ((VL_GETC_N(__Vtask_uvm_split_string__104__str,__Vtask_uvm_split_string__104__e) 
                                 == (IData)(__Vtask_uvm_split_string__104__sep))) {
                                goto __Vlabel1;
                            }
                            __Vtask_uvm_split_string__104__e 
                                = ((IData)(1U) + __Vtask_uvm_split_string__104__e);
                        }
                        __Vlabel1: ;
                    }
                    if ((__Vtask_uvm_split_string__104__s 
                         != __Vtask_uvm_split_string__104__e)) {
                        split_val.push_back(VL_SUBSTR_N(__Vtask_uvm_split_string__104__str,__Vtask_uvm_split_string__104__s,
                                                        (__Vtask_uvm_split_string__104__e 
                                                         - (IData)(1U))));
                    }
                    __Vtask_uvm_split_string__104__e 
                        = ((IData)(1U) + __Vtask_uvm_split_string__104__e);
                }
                if ((VL_LTS_III(32, 3U, split_val.size()) 
                     | VL_GTS_III(32, 2U, split_val.size()))) {
                    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, 
                                                       VL_CVT_PACK_STR_NN(
                                                                          VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Invalid setting for +uvm_set_type_override="s, ovr), ", setting must specify <requested_type>,<override_type>[,<replace>]"s)), 0U, ""s, 0U, ""s, 0U);
                    goto __Vlabel0;
                }
                if ((3U == split_val.size())) {
                    if (("0"s == split_val.at(2U))) {
                        replace = 0U;
                    } else if (("1"s == split_val.at(2U))) {
                        replace = 1U;
                    } else {
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, 
                                                           VL_CVT_PACK_STR_NN(
                                                                              VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Invalid replace arg for +uvm_set_type_override="s, ovr), " value must be 0 or 1"s)), 0U, ""s, 0U, ""s, 0U);
                        goto __Vlabel0;
                    }
                }
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, 
                                                  VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN("Applying type override from the command line: +uvm_set_type_override="s, ovr)), 0U, ""s, 0U, ""s, 0U);
                VL_NULL_CHECK(factory, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh", 852)
                                                                 ->__VnoInFunc_set_type_override_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(0U)), 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(1U)), 
                                                                                (1U 
                                                                                & replace));
                __Vlabel0: ;
            }
        }

        void Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_process_config(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string cfg, CData/*0:0*/ is_int) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_process_config\n"); );
            // Locals
            VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__109__Vfuncout;
            VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__110__Vfuncout;
            std::string __Vtask_uvm_split_string__111__str;
            CData/*7:0*/ __Vtask_uvm_split_string__111__sep;
            __Vtask_uvm_split_string__111__sep = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__111__s;
            __Vtask_uvm_split_string__111__s = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__111__e;
            __Vtask_uvm_split_string__111__e = 0;
            VlWide<128>/*4095:0*/ __Vtemp_1;
            VlWide<128>/*4095:0*/ __Vtemp_2;
            VlWide<128>/*4095:0*/ __Vtemp_3;
            VlWide<128>/*4095:0*/ __Vtemp_4;
            VlWide<128>/*4095:0*/ __Vtemp_5;
            VlWide<128>/*4095:0*/ __Vtemp_6;
            VlWide<128>/*4095:0*/ __Vtemp_7;
            VlWide<128>/*4095:0*/ __Vtemp_8;
            // Body
            std::string unnamedblk170__DOT__base;
            std::string unnamedblk170__DOT__extval;
            VlWide<128>/*4095:0*/ v;
            VL_ZERO_W(4096, v);
            VlQueue<std::string> split_val;
            VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> m_uvm_top;
            VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> cs;
            {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__109__Vfuncout);
                cs = __Vfunc_get__109__Vfuncout;
                VL_NULL_CHECK(cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh", 865)
                                                                 ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__110__Vfuncout);
                m_uvm_top = __Vtask_get_root__110__Vfuncout;
                __Vtask_uvm_split_string__111__sep = 0x2cU;
                __Vtask_uvm_split_string__111__str 
                    = cfg;
                __Vtask_uvm_split_string__111__s = 0;
                __Vtask_uvm_split_string__111__s = 0U;
                __Vtask_uvm_split_string__111__e = 0;
                __Vtask_uvm_split_string__111__e = 0U;
                split_val.clear();
                while (VL_LTS_III(32, __Vtask_uvm_split_string__111__e, 
                                  VL_LEN_IN(__Vtask_uvm_split_string__111__str))) {
                    __Vtask_uvm_split_string__111__s 
                        = __Vtask_uvm_split_string__111__e;
                    {
                        while (VL_LTS_III(32, __Vtask_uvm_split_string__111__e, 
                                          VL_LEN_IN(__Vtask_uvm_split_string__111__str))) {
                            if ((VL_GETC_N(__Vtask_uvm_split_string__111__str,__Vtask_uvm_split_string__111__e) 
                                 == (IData)(__Vtask_uvm_split_string__111__sep))) {
                                goto __Vlabel1;
                            }
                            __Vtask_uvm_split_string__111__e 
                                = ((IData)(1U) + __Vtask_uvm_split_string__111__e);
                        }
                        __Vlabel1: ;
                    }
                    if ((__Vtask_uvm_split_string__111__s 
                         != __Vtask_uvm_split_string__111__e)) {
                        split_val.push_back(VL_SUBSTR_N(__Vtask_uvm_split_string__111__str,__Vtask_uvm_split_string__111__s,
                                                        (__Vtask_uvm_split_string__111__e 
                                                         - (IData)(1U))));
                    }
                    __Vtask_uvm_split_string__111__e 
                        = ((IData)(1U) + __Vtask_uvm_split_string__111__e);
                }
                if ((1U == split_val.size())) {
                    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, 
                                                       VL_CVT_PACK_STR_NN(
                                                                          VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Invalid +uvm_set_config command\""s, cfg), "\" missing field and value: component is \""s), split_val.at(0U)), "\""s)), 0U, ""s, 0U, ""s, 0U);
                                goto __Vlabel0;
                            }
                            if ((2U == split_val.size())) {
                                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, 
                                                                   VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Invalid +uvm_set_config command\""s, cfg), "\" missing value: component is \""s), split_val.at(0U)), "\"  field is \""s), split_val.at(1U)), "\""s)), 0U, ""s, 0U, ""s, 0U);
                                                    goto __Vlabel0;
                                                }
                                                if (
                                                    VL_LTS_III(32, 3U, split_val.size())) {
                                                    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, VL_SFORMATF_N_NX("Invalid +uvm_set_config command\"%@\" : expected only 3 fields (component, field and value).",0,
                                                                                -1,
                                                                                &(cfg)) , 0U, ""s, 0U, ""s, 0U);
                                                    goto __Vlabel0;
                                                }
                                                if (is_int) {
                                                    if (
                                                        VL_LTS_III(32, 2U, 
                                                                   VL_LEN_IN(split_val.at(2U)))) {
                                                        unnamedblk170__DOT__base 
                                                            = 
                                                            VL_SUBSTR_N(split_val.at(2U),0U,1U);
                                                        unnamedblk170__DOT__extval 
                                                            = 
                                                            VL_SUBSTR_N(split_val.at(2U),2U,
                                                                        (VL_LEN_IN(split_val.at(2U)) 
                                                                         - (IData)(1U)));
                                                        VL_EXTENDS_WI(4096,32, __Vtemp_1, 
                                                                      VL_ATOI_N(unnamedblk170__DOT__extval, 2));
                                                        VL_EXTENDS_WI(4096,32, __Vtemp_2, 
                                                                      VL_ATOI_N(unnamedblk170__DOT__extval, 2));
                                                        VL_EXTENDS_WI(4096,32, __Vtemp_3, 
                                                                      VL_ATOI_N(unnamedblk170__DOT__extval, 8));
                                                        VL_EXTENDS_WI(4096,32, __Vtemp_4, 
                                                                      VL_ATOI_N(unnamedblk170__DOT__extval, 10));
                                                        VL_EXTENDS_WI(4096,32, __Vtemp_5, 
                                                                      VL_ATOI_N(unnamedblk170__DOT__extval, 16));
                                                        VL_EXTENDS_WI(4096,32, __Vtemp_6, 
                                                                      VL_ATOI_N(unnamedblk170__DOT__extval, 16));
                                                        VL_EXTENDS_WI(4096,32, __Vtemp_7, 
                                                                      VL_ATOI_N(unnamedblk170__DOT__extval, 16));
                                                        VL_EXTENDS_WI(4096,32, __Vtemp_8, 
                                                                      VL_ATOI_N(split_val.at(2U), 10));
                                                        if (
                                                            ("'b"s 
                                                             == unnamedblk170__DOT__base)) {
                                                            IData/*31:0*/ __Vilp1;
                                                            __Vilp1 = 0U;
                                                            while (
                                                                   (__Vilp1 
                                                                    <= 0x0000007fU)) {
                                                                v[__Vilp1] 
                                                                    = 
                                                                    __Vtemp_1[__Vilp1];
                                                                __Vilp1 
                                                                    = 
                                                                    ((IData)(1U) 
                                                                     + __Vilp1);
                                                            }
                                                        } else if (
                                                                   ("0b"s 
                                                                    == unnamedblk170__DOT__base)) {
                                                            IData/*31:0*/ __Vilp2;
                                                            __Vilp2 = 0U;
                                                            while (
                                                                   (__Vilp2 
                                                                    <= 0x0000007fU)) {
                                                                v[__Vilp2] 
                                                                    = 
                                                                    __Vtemp_2[__Vilp2];
                                                                __Vilp2 
                                                                    = 
                                                                    ((IData)(1U) 
                                                                     + __Vilp2);
                                                            }
                                                        } else if (
                                                                   ("'o"s 
                                                                    == unnamedblk170__DOT__base)) {
                                                            IData/*31:0*/ __Vilp3;
                                                            __Vilp3 = 0U;
                                                            while (
                                                                   (__Vilp3 
                                                                    <= 0x0000007fU)) {
                                                                v[__Vilp3] 
                                                                    = 
                                                                    __Vtemp_3[__Vilp3];
                                                                __Vilp3 
                                                                    = 
                                                                    ((IData)(1U) 
                                                                     + __Vilp3);
                                                            }
                                                        } else if (
                                                                   ("'d"s 
                                                                    == unnamedblk170__DOT__base)) {
                                                            IData/*31:0*/ __Vilp4;
                                                            __Vilp4 = 0U;
                                                            while (
                                                                   (__Vilp4 
                                                                    <= 0x0000007fU)) {
                                                                v[__Vilp4] 
                                                                    = 
                                                                    __Vtemp_4[__Vilp4];
                                                                __Vilp4 
                                                                    = 
                                                                    ((IData)(1U) 
                                                                     + __Vilp4);
                                                            }
                                                        } else if (
                                                                   ("'h"s 
                                                                    == unnamedblk170__DOT__base)) {
                                                            IData/*31:0*/ __Vilp5;
                                                            __Vilp5 = 0U;
                                                            while (
                                                                   (__Vilp5 
                                                                    <= 0x0000007fU)) {
                                                                v[__Vilp5] 
                                                                    = 
                                                                    __Vtemp_5[__Vilp5];
                                                                __Vilp5 
                                                                    = 
                                                                    ((IData)(1U) 
                                                                     + __Vilp5);
                                                            }
                                                        } else if (
                                                                   ("'x"s 
                                                                    == unnamedblk170__DOT__base)) {
                                                            IData/*31:0*/ __Vilp6;
                                                            __Vilp6 = 0U;
                                                            while (
                                                                   (__Vilp6 
                                                                    <= 0x0000007fU)) {
                                                                v[__Vilp6] 
                                                                    = 
                                                                    __Vtemp_6[__Vilp6];
                                                                __Vilp6 
                                                                    = 
                                                                    ((IData)(1U) 
                                                                     + __Vilp6);
                                                            }
                                                        } else if (
                                                                   ("0x"s 
                                                                    == unnamedblk170__DOT__base)) {
                                                            IData/*31:0*/ __Vilp7;
                                                            __Vilp7 = 0U;
                                                            while (
                                                                   (__Vilp7 
                                                                    <= 0x0000007fU)) {
                                                                v[__Vilp7] 
                                                                    = 
                                                                    __Vtemp_7[__Vilp7];
                                                                __Vilp7 
                                                                    = 
                                                                    ((IData)(1U) 
                                                                     + __Vilp7);
                                                            }
                                                        } else {
                                                            IData/*31:0*/ __Vilp8;
                                                            __Vilp8 = 0U;
                                                            while (
                                                                   (__Vilp8 
                                                                    <= 0x0000007fU)) {
                                                                v[__Vilp8] 
                                                                    = 
                                                                    __Vtemp_8[__Vilp8];
                                                                __Vilp8 
                                                                    = 
                                                                    ((IData)(1U) 
                                                                     + __Vilp8);
                                                            }
                                                        }
                                                    } else {
                                                        VL_EXTENDS_WI(4096,32, v, 
                                                                      VL_ATOI_N(split_val.at(2U), 10));
                                                    }
                                                    this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("Applying config setting from the command line: +uvm_set_config_int="s, cfg)), 0U, ""s, 0U, ""s, 0U);
                                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz18__Vclpkg.__VnoInFunc_set(vlProcess, vlSymsp, m_uvm_top, 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(0U)), 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(1U)), v);
                                                } else {
                                                    this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("Applying config setting from the command line: +uvm_set_config_string="s, cfg)), 0U, ""s, 0U, ""s, 0U);
                                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz49__Vclpkg.__VnoInFunc_set(vlProcess, vlSymsp, m_uvm_top, 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(0U)), 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(1U)), 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(2U)));
                                                }
                                                __Vlabel0: ;
                                            }
                                        }

                                        void Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_process_default_sequence(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string cfg) {
                                            VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_process_default_sequence\n"); );
                                            // Locals
                                            VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__119__Vfuncout;
                                            VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__120__Vfuncout;
                                            VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_factory> __Vtask_get_factory__121__Vfuncout;
                                            std::string __Vtask_uvm_split_string__122__str;
                                            CData/*7:0*/ __Vtask_uvm_split_string__122__sep;
                                            __Vtask_uvm_split_string__122__sep = 0;
                                            IData/*31:0*/ __Vtask_uvm_split_string__122__s;
                                            __Vtask_uvm_split_string__122__s = 0;
                                            IData/*31:0*/ __Vtask_uvm_split_string__122__e;
                                            __Vtask_uvm_split_string__122__e = 0;
                                            VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_wrapper> __Vtask_find_wrapper_by_name__126__Vfuncout;
                                            std::string __Vtemp_1;
                                            // Body
                                            VlQueue<std::string> split_val;
                                            VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> cs;
                                            VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> m_uvm_top;
                                            VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_factory> f;
                                            VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_wrapper> w;
                                            {
                                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__119__Vfuncout);
                                                cs 
                                                    = __Vfunc_get__119__Vfuncout;
                                                VL_NULL_CHECK(cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh", 922)
                                                                                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__120__Vfuncout);
                                                m_uvm_top 
                                                    = __Vtask_get_root__120__Vfuncout;
                                                VL_NULL_CHECK(cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh", 923)
                                                                                ->__VnoInFunc_get_factory(vlSymsp, __Vtask_get_factory__121__Vfuncout);
                                                f = __Vtask_get_factory__121__Vfuncout;
                                                __Vtask_uvm_split_string__122__sep = 0x2cU;
                                                __Vtask_uvm_split_string__122__str 
                                                    = cfg;
                                                __Vtask_uvm_split_string__122__s = 0;
                                                __Vtask_uvm_split_string__122__s = 0U;
                                                __Vtask_uvm_split_string__122__e = 0;
                                                __Vtask_uvm_split_string__122__e = 0U;
                                                split_val.clear();
                                                while (
                                                       VL_LTS_III(32, __Vtask_uvm_split_string__122__e, 
                                                                  VL_LEN_IN(__Vtask_uvm_split_string__122__str))) {
                                                    __Vtask_uvm_split_string__122__s 
                                                        = __Vtask_uvm_split_string__122__e;
                                                    {
                                                        while (
                                                               VL_LTS_III(32, __Vtask_uvm_split_string__122__e, 
                                                                          VL_LEN_IN(__Vtask_uvm_split_string__122__str))) {
                                                            if (
                                                                (VL_GETC_N(__Vtask_uvm_split_string__122__str,__Vtask_uvm_split_string__122__e) 
                                                                 == (IData)(__Vtask_uvm_split_string__122__sep))) {
                                                                goto __Vlabel1;
                                                            }
                                                            __Vtask_uvm_split_string__122__e 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + __Vtask_uvm_split_string__122__e);
                                                        }
                                                        __Vlabel1: ;
                                                    }
                                                    if (
                                                        (__Vtask_uvm_split_string__122__s 
                                                         != __Vtask_uvm_split_string__122__e)) {
                                                        split_val.push_back(
                                                                            VL_SUBSTR_N(__Vtask_uvm_split_string__122__str,__Vtask_uvm_split_string__122__s,
                                                                                (__Vtask_uvm_split_string__122__e 
                                                                                - (IData)(1U))));
                                                    }
                                                    __Vtask_uvm_split_string__122__e 
                                                        = 
                                                        ((IData)(1U) 
                                                         + __Vtask_uvm_split_string__122__e);
                                                }
                                                if (
                                                    (1U 
                                                     == split_val.size())) {
                                                    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Invalid +uvm_set_default_sequence command\""s, cfg), "\" missing phase and type: sequencer is \""s), split_val.at(0U)), "\""s)), 0U, ""s, 0U, ""s, 0U);
                                                                goto __Vlabel0;
                                                            }
                                                            if (
                                                                (2U 
                                                                 == split_val.size())) {
                                                                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Invalid +uvm_set_default_sequence command\""s, cfg), "\" missing type: sequencer is \""s), split_val.at(0U)), "\"  phase is \""s), split_val.at(1U)), "\""s)), 0U, ""s, 0U, ""s, 0U);
                                                                                goto __Vlabel0;
                                                                                }
                                                                                if (
                                                                                VL_LTS_III(32, 3U, split_val.size())) {
                                                                                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, VL_SFORMATF_N_NX("Invalid +uvm_set_default_sequence command\"%@\" : expected only 3 fields (sequencer, phase and type).",0,
                                                                                -1,
                                                                                &(cfg)) , 0U, ""s, 0U, ""s, 0U);
                                                                                goto __Vlabel0;
                                                                                }
                                                                                VL_NULL_CHECK(f, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh", 945)
                                                                                ->__VnoInFunc_find_wrapper_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(2U)), __Vtask_find_wrapper_by_name__126__Vfuncout);
                                                                                w 
                                                                                = __Vtask_find_wrapper_by_name__126__Vfuncout;
                                                                                if (
                                                                                (VlNull{} 
                                                                                == w)) {
                                                                                __Vtemp_1 
                                                                                = split_val.at(2U);
                                                                                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, VL_SFORMATF_N_NX("Invalid type '%@' provided to +uvm_set_default_sequence",0,
                                                                                -1,
                                                                                &(__Vtemp_1)) , 0U, ""s, 0U, ""s, 0U);
                                                                                } else {
                                                                                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("Setting default sequence from the command line: +uvm_set_default_sequence="s, cfg)), 0U, ""s, 0U, ""s, 0U);
                                                                                vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz38__Vclpkg.__VnoInFunc_set(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root>{this}, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(split_val.at(0U), "."s), split_val.at(1U))), "default_sequence"s, w);
                                                                                }
                                                                                __Vlabel0: ;
                                                                            }
                                                                        }

                                                                        void Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_config_settings(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp) {
                                                                            VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_config_settings\n"); );
                                                                            // Locals
                                                                            IData/*31:0*/ __Vtask_get_arg_matches__130__Vfuncout;
                                                                            __Vtask_get_arg_matches__130__Vfuncout = 0;
                                                                            IData/*31:0*/ __Vtask_get_arg_matches__132__Vfuncout;
                                                                            __Vtask_get_arg_matches__132__Vfuncout = 0;
                                                                            IData/*31:0*/ __Vtask_get_arg_matches__134__Vfuncout;
                                                                            __Vtask_get_arg_matches__134__Vfuncout = 0;
                                                                            // Body
                                                                            IData/*31:0*/ unnamedblk171__DOT__i;
                                                                            unnamedblk171__DOT__i = 0;
                                                                            IData/*31:0*/ unnamedblk172__DOT__i;
                                                                            unnamedblk172__DOT__i = 0;
                                                                            IData/*31:0*/ unnamedblk173__DOT__i;
                                                                            unnamedblk173__DOT__i = 0;
                                                                            VlQueue<std::string> args;
                                                                            VL_NULL_CHECK(this->__PVT__clp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh", 966)
                                                                                ->__VnoInFunc_get_arg_matches(vlSymsp, "/^\\+(UVM_SET_CONFIG_INT|uvm_set_config_int)=/"s, args, __Vtask_get_arg_matches__130__Vfuncout);
                                                                            unnamedblk171__DOT__i = 0U;
                                                                            while (
                                                                                VL_LTS_III(32, unnamedblk171__DOT__i, args.size())) {
                                                                                this->__VnoInFunc_m_process_config(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_SUBSTR_N(args.at(unnamedblk171__DOT__i),0x00000014U,
                                                                                (VL_LEN_IN(args.at(unnamedblk171__DOT__i)) 
                                                                                - (IData)(1U)))), 1U);
                                                                                unnamedblk171__DOT__i 
                                                                                = 
                                                                                ((IData)(1U) 
                                                                                + unnamedblk171__DOT__i);
                                                                            }
                                                                            VL_NULL_CHECK(this->__PVT__clp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh", 970)
                                                                                ->__VnoInFunc_get_arg_matches(vlSymsp, "/^\\+(UVM_SET_CONFIG_STRING|uvm_set_config_string)=/"s, args, __Vtask_get_arg_matches__132__Vfuncout);
                                                                            unnamedblk172__DOT__i = 0U;
                                                                            while (
                                                                                VL_LTS_III(32, unnamedblk172__DOT__i, args.size())) {
                                                                                this->__VnoInFunc_m_process_config(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_SUBSTR_N(args.at(unnamedblk172__DOT__i),0x00000017U,
                                                                                (VL_LEN_IN(args.at(unnamedblk172__DOT__i)) 
                                                                                - (IData)(1U)))), 0U);
                                                                                unnamedblk172__DOT__i 
                                                                                = 
                                                                                ((IData)(1U) 
                                                                                + unnamedblk172__DOT__i);
                                                                            }
                                                                            VL_NULL_CHECK(this->__PVT__clp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh", 974)
                                                                                ->__VnoInFunc_get_arg_matches(vlSymsp, "/^\\+(UVM_SET_DEFAULT_SEQUENCE|uvm_set_default_sequence)=/"s, args, __Vtask_get_arg_matches__134__Vfuncout);
                                                                            unnamedblk173__DOT__i = 0U;
                                                                            while (
                                                                                VL_LTS_III(32, unnamedblk173__DOT__i, args.size())) {
                                                                                this->__VnoInFunc_m_process_default_sequence(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_SUBSTR_N(args.at(unnamedblk173__DOT__i),0x0000001aU,
                                                                                (VL_LEN_IN(args.at(unnamedblk173__DOT__i)) 
                                                                                - (IData)(1U)))));
                                                                                unnamedblk173__DOT__i 
                                                                                = 
                                                                                ((IData)(1U) 
                                                                                + unnamedblk173__DOT__i);
                                                                            }
                                                                        }

                                                                        void Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_max_quit_settings(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp) {
                                                                            VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_max_quit_settings\n"); );
                                                                            // Locals
                                                                            VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_server> __Vfunc_get_server__136__Vfuncout;
                                                                            IData/*31:0*/ __Vtask_get_arg_values__137__Vfuncout;
                                                                            __Vtask_get_arg_values__137__Vfuncout = 0;
                                                                            std::string __Vtask_uvm_split_string__140__str;
                                                                            CData/*7:0*/ __Vtask_uvm_split_string__140__sep;
                                                                            __Vtask_uvm_split_string__140__sep = 0;
                                                                            IData/*31:0*/ __Vtask_uvm_split_string__140__s;
                                                                            __Vtask_uvm_split_string__140__s = 0;
                                                                            IData/*31:0*/ __Vtask_uvm_split_string__140__e;
                                                                            __Vtask_uvm_split_string__140__e = 0;
                                                                            // Body
                                                                            std::string unnamedblk174__DOT__max_quit_list;
                                                                            std::string unnamedblk174__DOT__sep;
                                                                            IData/*31:0*/ unnamedblk174__DOT__unnamedblk175__DOT__i;
                                                                            unnamedblk174__DOT__unnamedblk175__DOT__i = 0;
                                                                            VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_server> srvr;
                                                                            VlQueue<std::string> max_quit_settings;
                                                                            IData/*31:0*/ max_quit_count;
                                                                            max_quit_count = 0;
                                                                            std::string max_quit;
                                                                            VlQueue<std::string> split_max_quit;
                                                                            IData/*31:0*/ max_quit_int;
                                                                            max_quit_int = 0;
                                                                            vlSymsp->TOP__uvm_pkg__03a__03auvm_report_server__Vclpkg.__VnoInFunc_get_server(vlProcess, vlSymsp, __Vfunc_get_server__136__Vfuncout);
                                                                            srvr 
                                                                                = __Vfunc_get_server__136__Vfuncout;
                                                                            VL_NULL_CHECK(this->__PVT__clp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh", 992)
                                                                                ->__VnoInFunc_get_arg_values(vlSymsp, "+UVM_MAX_QUIT_COUNT="s, max_quit_settings, __Vtask_get_arg_values__137__Vfuncout);
                                                                            max_quit_count 
                                                                                = __Vtask_get_arg_values__137__Vfuncout;
                                                                            if (
                                                                                (0U 
                                                                                != max_quit_count)) {
                                                                                max_quit 
                                                                                = max_quit_settings.at(0U);
                                                                                if (
                                                                                VL_LTS_III(32, 1U, max_quit_count)) {
                                                                                unnamedblk174__DOT__unnamedblk175__DOT__i = 0U;
                                                                                while (
                                                                                VL_LTS_III(32, unnamedblk174__DOT__unnamedblk175__DOT__i, max_quit_settings.size())) {
                                                                                if (
                                                                                (0U 
                                                                                != unnamedblk174__DOT__unnamedblk175__DOT__i)) {
                                                                                unnamedblk174__DOT__sep = "; "s;
                                                                                }
                                                                                unnamedblk174__DOT__max_quit_list 
                                                                                = 
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(unnamedblk174__DOT__max_quit_list, unnamedblk174__DOT__sep), max_quit_settings.at(unnamedblk174__DOT__unnamedblk175__DOT__i));
                                                                                unnamedblk174__DOT__unnamedblk175__DOT__i 
                                                                                = 
                                                                                ((IData)(1U) 
                                                                                + unnamedblk174__DOT__unnamedblk175__DOT__i);
                                                                                }
                                                                                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "MULTMAXQUIT"s, VL_SFORMATF_N_NX("Multiple (%0d) +UVM_MAX_QUIT_COUNT arguments provided on the command line.  '%@' will be used.  Provided list: %@.",0,
                                                                                32,
                                                                                max_quit_count,
                                                                                -1,
                                                                                &(max_quit),
                                                                                -1,
                                                                                &(unnamedblk174__DOT__max_quit_list)) , 0U, ""s, 0U, ""s, 0U);
                                                                                }
                                                                                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "MAXQUITSET"s, VL_SFORMATF_N_NX("'+UVM_MAX_QUIT_COUNT=%@' provided on the command line is being applied.",0,
                                                                                -1,
                                                                                &(max_quit)) , 0U, ""s, 0U, ""s, 0U);
                                                                                __Vtask_uvm_split_string__140__sep = 0x2cU;
                                                                                __Vtask_uvm_split_string__140__str 
                                                                                = max_quit;
                                                                                __Vtask_uvm_split_string__140__s = 0;
                                                                                __Vtask_uvm_split_string__140__s = 0U;
                                                                                __Vtask_uvm_split_string__140__e = 0;
                                                                                __Vtask_uvm_split_string__140__e = 0U;
                                                                                split_max_quit.clear();
                                                                                while (
                                                                                VL_LTS_III(32, __Vtask_uvm_split_string__140__e, 
                                                                                VL_LEN_IN(__Vtask_uvm_split_string__140__str))) {
                                                                                __Vtask_uvm_split_string__140__s 
                                                                                = __Vtask_uvm_split_string__140__e;
                                                                                {
                                                                                while (
                                                                                VL_LTS_III(32, __Vtask_uvm_split_string__140__e, 
                                                                                VL_LEN_IN(__Vtask_uvm_split_string__140__str))) {
                                                                                if (
                                                                                (VL_GETC_N(__Vtask_uvm_split_string__140__str,__Vtask_uvm_split_string__140__e) 
                                                                                == (IData)(__Vtask_uvm_split_string__140__sep))) {
                                                                                goto __Vlabel0;
                                                                                }
                                                                                __Vtask_uvm_split_string__140__e 
                                                                                = 
                                                                                ((IData)(1U) 
                                                                                + __Vtask_uvm_split_string__140__e);
                                                                                }
                                                                                __Vlabel0: ;
                                                                                }
                                                                                if (
                                                                                (__Vtask_uvm_split_string__140__s 
                                                                                != __Vtask_uvm_split_string__140__e)) {
                                                                                split_max_quit.push_back(
                                                                                VL_SUBSTR_N(__Vtask_uvm_split_string__140__str,__Vtask_uvm_split_string__140__s,
                                                                                (__Vtask_uvm_split_string__140__e 
                                                                                - (IData)(1U))));
                                                                                }
                                                                                __Vtask_uvm_split_string__140__e 
                                                                                = 
                                                                                ((IData)(1U) 
                                                                                + __Vtask_uvm_split_string__140__e);
                                                                                }
                                                                                max_quit_int 
                                                                                = 
                                                                                VL_ATOI_N(split_max_quit.at(0U), 10);
                                                                                if (
                                                                                ("YES"s 
                                                                                == split_max_quit.at(1U))) {
                                                                                VL_NULL_CHECK(srvr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh", 1014)
                                                                                ->__VnoInFunc_set_max_quit_count(vlProcess, vlSymsp, max_quit_int, 1U);
                                                                                } else if (
                                                                                ("NO"s 
                                                                                == split_max_quit.at(1U))) {
                                                                                VL_NULL_CHECK(srvr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh", 1015)
                                                                                ->__VnoInFunc_set_max_quit_count(vlProcess, vlSymsp, max_quit_int, 0U);
                                                                                } else {
                                                                                VL_NULL_CHECK(srvr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh", 1016)
                                                                                ->__VnoInFunc_set_max_quit_count(vlProcess, vlSymsp, max_quit_int, 1U);
                                                                                }
                                                                            }
                                                                        }

                                                                        void Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_dump_args(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp) {
                                                                            VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_dump_args\n"); );
                                                                            // Locals
                                                                            IData/*31:0*/ __Vtask_get_arg_matches__144__Vfuncout;
                                                                            __Vtask_get_arg_matches__144__Vfuncout = 0;
                                                                            VlQueue<std::string> __Vtask_get_args__145__args;
                                                                            std::string __Vtemp_1;
                                                                            // Body
                                                                            IData/*31:0*/ unnamedblk176__DOT__idx;
                                                                            unnamedblk176__DOT__idx = 0;
                                                                            VlQueue<std::string> dump_args;
                                                                            VlQueue<std::string> all_args;
                                                                            std::string out_string;
                                                                            if (
                                                                                (0U 
                                                                                != 
                                                                                ([&]() {
                                                                                VL_NULL_CHECK(this->__PVT__clp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh", 1029)
                                                                                ->__VnoInFunc_get_arg_matches(vlSymsp, "+UVM_DUMP_CMDLINE_ARGS"s, dump_args, __Vtask_get_arg_matches__144__Vfuncout);
                                                                                }(), __Vtask_get_arg_matches__144__Vfuncout))) {
                                                                                VL_NULL_CHECK(this->__PVT__clp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh", 1030)
                                                                                ->__VnoInFunc_get_args(vlSymsp, __Vtask_get_args__145__args);
                                                                                all_args 
                                                                                = __Vtask_get_args__145__args;
                                                                                unnamedblk176__DOT__idx = 0U;
                                                                                while (
                                                                                VL_LTS_III(32, unnamedblk176__DOT__idx, all_args.size())) {
                                                                                __Vtemp_1 
                                                                                = all_args.at(unnamedblk176__DOT__idx);
                                                                                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "DUMPARGS"s, VL_SFORMATF_N_NX("idx=%0d arg=[%@]",0,
                                                                                32,
                                                                                unnamedblk176__DOT__idx,
                                                                                -1,
                                                                                &(__Vtemp_1)) , 0U, ""s, 0U, ""s, 0U);
                                                                                unnamedblk176__DOT__idx 
                                                                                = 
                                                                                ((IData)(1U) 
                                                                                + unnamedblk176__DOT__idx);
                                                                                }
                                                                            }
                                                                        }

                                                                        void Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_check_verbosity(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp) {
                                                                            VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_check_verbosity\n"); );
                                                                            // Body
                                                                            std::string unnamedblk177__DOT__verb_list;
                                                                            std::string unnamedblk177__DOT__sep;
                                                                            IData/*31:0*/ unnamedblk177__DOT__unnamedblk178__DOT__i;
                                                                            unnamedblk177__DOT__unnamedblk178__DOT__i = 0;
                                                                            std::string verb_string;
                                                                            VlQueue<std::string> verb_settings;
                                                                            IData/*31:0*/ verb_count;
                                                                            verb_count = 0;
                                                                            IData/*31:0*/ plusarg;
                                                                            plusarg = 0;
                                                                            IData/*31:0*/ verbosity;
                                                                            verbosity = 0;
                                                                            verbosity = 0x000000c8U;
                                                                            verb_count 
                                                                                = VL_VALUEPLUSARGS_INN(64, "UVM_VERBOSITY=%s"s, 
                                                                                verb_string);
                                                                            if (
                                                                                (0U 
                                                                                != verb_count)) {
                                                                                verb_settings.push_back(verb_string);
                                                                            }
                                                                            if (
                                                                                VL_LTS_III(32, 0U, verb_count)) {
                                                                                verb_string 
                                                                                = verb_settings.at(0U);
                                                                                plusarg = 1U;
                                                                            }
                                                                            if (
                                                                                VL_LTS_III(32, 1U, verb_count)) {
                                                                                unnamedblk177__DOT__unnamedblk178__DOT__i = 0U;
                                                                                while (
                                                                                VL_LTS_III(32, unnamedblk177__DOT__unnamedblk178__DOT__i, verb_settings.size())) {
                                                                                if (
                                                                                (0U 
                                                                                != unnamedblk177__DOT__unnamedblk178__DOT__i)) {
                                                                                unnamedblk177__DOT__sep = ", "s;
                                                                                }
                                                                                unnamedblk177__DOT__verb_list 
                                                                                = 
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(unnamedblk177__DOT__verb_list, unnamedblk177__DOT__sep), verb_settings.at(unnamedblk177__DOT__unnamedblk178__DOT__i));
                                                                                unnamedblk177__DOT__unnamedblk178__DOT__i 
                                                                                = 
                                                                                ((IData)(1U) 
                                                                                + unnamedblk177__DOT__unnamedblk178__DOT__i);
                                                                                }
                                                                                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "MULTVERB"s, VL_SFORMATF_N_NX("Multiple (%0d) +UVM_VERBOSITY arguments provided on the command line.  '%@' will be used.  Provided list: %@.",0,
                                                                                32,
                                                                                verb_count,
                                                                                -1,
                                                                                &(verb_string),
                                                                                -1,
                                                                                &(unnamedblk177__DOT__verb_list)) , 0U, ""s, 0U, ""s, 0U);
                                                                            }
                                                                            if (
                                                                                (1U 
                                                                                == plusarg)) {
                                                                                if (
                                                                                (((((((("UVM_NONE"s 
                                                                                == verb_string) 
                                                                                | ("NONE"s 
                                                                                == verb_string)) 
                                                                                | ("UVM_LOW"s 
                                                                                == verb_string)) 
                                                                                | ("LOW"s 
                                                                                == verb_string)) 
                                                                                | ("UVM_MEDIUM"s 
                                                                                == verb_string)) 
                                                                                | ("MEDIUM"s 
                                                                                == verb_string)) 
                                                                                | ("UVM_HIGH"s 
                                                                                == verb_string)) 
                                                                                | ("HIGH"s 
                                                                                == verb_string))) {
                                                                                verbosity 
                                                                                = 
                                                                                (("UVM_NONE"s 
                                                                                == verb_string)
                                                                                 ? 0U
                                                                                 : 
                                                                                (("NONE"s 
                                                                                == verb_string)
                                                                                 ? 0U
                                                                                 : 
                                                                                (("UVM_LOW"s 
                                                                                == verb_string)
                                                                                 ? 0x00000064U
                                                                                 : 
                                                                                (("LOW"s 
                                                                                == verb_string)
                                                                                 ? 0x00000064U
                                                                                 : 
                                                                                (("UVM_MEDIUM"s 
                                                                                == verb_string)
                                                                                 ? 0x000000c8U
                                                                                 : 
                                                                                (("MEDIUM"s 
                                                                                == verb_string)
                                                                                 ? 0x000000c8U
                                                                                 : 0x0000012cU))))));
                                                                                } else if (
                                                                                ("UVM_FULL"s 
                                                                                == verb_string)) {
                                                                                verbosity = 0x00000190U;
                                                                                } else if (
                                                                                ("FULL"s 
                                                                                == verb_string)) {
                                                                                verbosity = 0x00000190U;
                                                                                } else if (
                                                                                ("UVM_DEBUG"s 
                                                                                == verb_string)) {
                                                                                verbosity = 0x000001f4U;
                                                                                } else if (
                                                                                ("DEBUG"s 
                                                                                == verb_string)) {
                                                                                verbosity = 0x000001f4U;
                                                                                } else {
                                                                                verbosity 
                                                                                = 
                                                                                VL_ATOI_N(verb_string, 10);
                                                                                if (
                                                                                VL_LTS_III(32, 0U, verbosity)) {
                                                                                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "NSTVERB"s, VL_SFORMATF_N_NX("Non-standard verbosity value, using provided '%0d'.",0,
                                                                                32,
                                                                                verbosity) , 0U, ""s, 0U, ""s, 0U);
                                                                                }
                                                                                if (
                                                                                (0U 
                                                                                == verbosity)) {
                                                                                verbosity = 0x000000c8U;
                                                                                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "ILLVERB"s, "Illegal verbosity value, using default of UVM_MEDIUM."s, 0U, ""s, 0U, ""s, 0U);
                                                                                }
                                                                                }
                                                                            }
                                                                            this->__VnoInFunc_set_report_verbosity_level_hier(vlProcess, vlSymsp, verbosity);
                                                                        }

                                                                        VlCoroutine Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_run_phase(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> phase) {
                                                                            VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_run_phase\n"); );
                                                                            // Locals
                                                                            IData/*31:0*/ __Vfunc_uvm_report_enabled__151__Vfuncout;
                                                                            __Vfunc_uvm_report_enabled__151__Vfuncout = 0;
                                                                            IData/*31:0*/ __Vfunc_uvm_report_enabled__153__Vfuncout;
                                                                            __Vfunc_uvm_report_enabled__153__Vfuncout = 0;
                                                                            IData/*31:0*/ __Vfunc_uvm_report_enabled__155__Vfuncout;
                                                                            __Vfunc_uvm_report_enabled__155__Vfuncout = 0;
                                                                            std::string __Vtemp_1;
                                                                            std::string __Vtemp_2;
                                                                            // Body
                                                                            VL_KEEP_THIS;
                                                                            IData/*31:0*/ unnamedblk179__DOT__idx;
                                                                            unnamedblk179__DOT__idx = 0;
                                                                            IData/*31:0*/ unnamedblk180__DOT__idx;
                                                                            unnamedblk180__DOT__idx = 0;
                                                                            unnamedblk179__DOT__idx = 0U;
                                                                            while (
                                                                                VL_LTS_III(32, unnamedblk179__DOT__idx, vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_uvm_applied_cl_action.size())) {
                                                                                if (
                                                                                (0U 
                                                                                == vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_uvm_applied_cl_action.at(unnamedblk179__DOT__idx)
                                                                                .__PVT__used)) {
                                                                                if (
                                                                                (0U 
                                                                                != 
                                                                                ([&]() {
                                                                                this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "INVLCMDARGS"s, __Vfunc_uvm_report_enabled__151__Vfuncout);
                                                                                }(), __Vfunc_uvm_report_enabled__151__Vfuncout))) {
                                                                                __Vtemp_1 
                                                                                = vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_uvm_applied_cl_action.at(unnamedblk179__DOT__idx)
                                                                                .__PVT__arg;
                                                                                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "INVLCMDARGS"s, VL_SFORMATF_N_NX("\"+uvm_set_action=%@\" never took effect due to a mismatching component pattern",0,
                                                                                -1,
                                                                                &(__Vtemp_1)) , 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh"s, 0x0000046aU, ""s, 1U);
                                                                                }
                                                                                }
                                                                                unnamedblk179__DOT__idx 
                                                                                = 
                                                                                ((IData)(1U) 
                                                                                + unnamedblk179__DOT__idx);
                                                                            }
                                                                            unnamedblk180__DOT__idx = 0U;
                                                                            while (
                                                                                VL_LTS_III(32, unnamedblk180__DOT__idx, vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_uvm_applied_cl_sev.size())) {
                                                                                if (
                                                                                (0U 
                                                                                == vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_uvm_applied_cl_sev.at(unnamedblk180__DOT__idx)
                                                                                .__PVT__used)) {
                                                                                if (
                                                                                (0U 
                                                                                != 
                                                                                ([&]() {
                                                                                this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "INVLCMDARGS"s, __Vfunc_uvm_report_enabled__153__Vfuncout);
                                                                                }(), __Vfunc_uvm_report_enabled__153__Vfuncout))) {
                                                                                __Vtemp_2 
                                                                                = vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_uvm_applied_cl_sev.at(unnamedblk180__DOT__idx)
                                                                                .__PVT__arg;
                                                                                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "INVLCMDARGS"s, VL_SFORMATF_N_NX("\"+uvm_set_severity=%@\" never took effect due to a mismatching component pattern",0,
                                                                                -1,
                                                                                &(__Vtemp_2)) , 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh"s, 0x0000046eU, ""s, 1U);
                                                                                }
                                                                                }
                                                                                unnamedblk180__DOT__idx 
                                                                                = 
                                                                                ((IData)(1U) 
                                                                                + unnamedblk180__DOT__idx);
                                                                            }
                                                                            if (
                                                                                (0ULL 
                                                                                < VL_TIME_UNITED_Q(1))) {
                                                                                if (
                                                                                (0U 
                                                                                != 
                                                                                ([&]() {
                                                                                this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 3U, "RUNPHSTIME"s, __Vfunc_uvm_report_enabled__155__Vfuncout);
                                                                                }(), __Vfunc_uvm_report_enabled__155__Vfuncout))) {
                                                                                this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "RUNPHSTIME"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("The run phase must start at time 0, current time is "s, VL_SFORMATF_N_NX("%0^",0,
                                                                                64,
                                                                                VL_TIME_UNITED_D(1),
                                                                                -12) ), ". No non-zero delays are allowed before "s), "run_test(), and pre-run user defined phases may not consume "s), "simulation time before the start of the run phase."s)), 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_root.svh"s, 0x00000475U, ""s, 1U);
                                                                                }
                                                                            }
                                                                            co_return;}

                                                                        void Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_set_enable_print_topology(Vpools_top__Syms* __restrict vlSymsp, CData/*0:0*/ enable) {
                                                                            VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_set_enable_print_topology\n"); );
                                                                            // Body
                                                                            this->__PVT__enable_print_topology 
                                                                                = enable;
                                                                        }

                                                                        void Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_get_enable_print_topology(Vpools_top__Syms* __restrict vlSymsp, CData/*0:0*/ &get_enable_print_topology__Vfuncrtn) {
                                                                            VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_get_enable_print_topology\n"); );
                                                                            // Body
                                                                            get_enable_print_topology__Vfuncrtn 
                                                                                = this->__PVT__enable_print_topology;
                                                                        }

                                                                        void Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_randomize(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
                                                                            VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_randomize\n"); );
                                                                            // Locals
                                                                            IData/*31:0*/ __Vfunc___VBasicRand__158__Vfuncout;
                                                                            __Vfunc___VBasicRand__158__Vfuncout = 0;
                                                                            // Body
                                                                            Vpools_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
                                                                            this->__VnoInFunc___Vsetup_constraints(vlSymsp);
                                                                            randomize__Vfuncrtn 
                                                                                = 
                                                                                Vpools_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
                                                                            randomize__Vfuncrtn 
                                                                                = 
                                                                                (randomize__Vfuncrtn 
                                                                                & ([&]() {
                                                                                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__158__Vfuncout);
                                                                                }(), __Vfunc___VBasicRand__158__Vfuncout));
                                                                        }

                                                                        void Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc___Vsetup_constraints(Vpools_top__Syms* __restrict vlSymsp) {
                                                                            VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc___Vsetup_constraints\n"); );
                                                                        }

                                                                        void Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc___VBasicRand(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
                                                                            VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_root::__VnoInFunc___VBasicRand\n"); );
                                                                            // Body
                                                                            __VBasicRand__Vfuncrtn = 1U;
                                                                        }

                                                                        void Vpools_top_uvm_pkg__03a__03auvm_root::_ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp) {
                                                                            VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_root::_ctor_var_reset\n"); );
                                                                            // Body
                                                                            (void)vlSymsp;  // Prevent unused variable warning
                                                                            __PVT__finish_on_completion = 0;
                                                                            __PVT__enable_print_topology = 0;
                                                                            __PVT__phase_timeout = VL_SCOPED_RAND_RESET_Q(64, 6105246902049854746ULL, 17439451696575332289ull);
                                                                            __PVT__m_phase_all_done = 0;
                                                                        }

                                                                        Vpools_top_uvm_pkg__03a__03auvm_root::~Vpools_top_uvm_pkg__03a__03auvm_root() {
                                                                            VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_root::~\n"); );
                                                                        }

                                                                        std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root>& obj) {
                                                                            VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_root::VL_TO_STRING\n"); );
                                                                            // Body
                                                                            return (
                                                                                obj ? obj->to_string() : "null");
                                                                        }

                                                                        std::string Vpools_top_uvm_pkg__03a__03auvm_root::to_string() const {
                                                                            VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_root::to_string\n"); );
                                                                            // Body
                                                                            return (
                                                                                "'{"s + to_string_middle() + "}");
                                                                        }

                                                                        std::string Vpools_top_uvm_pkg__03a__03auvm_root::to_string_middle() const {
                                                                            VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_root::to_string_middle\n"); );
                                                                            // Body
                                                                            std::string out;
                                                                            out += "clp:" + VL_TO_STRING(__PVT__clp);
                                                                            out += ", finish_on_completion:" + VL_TO_STRING(__PVT__finish_on_completion);
                                                                            out += ", enable_print_topology:" + VL_TO_STRING(__PVT__enable_print_topology);
                                                                            out += ", phase_timeout:" + VL_TO_STRING(__PVT__phase_timeout);
                                                                            out += ", m_phase_all_done:" + VL_TO_STRING(__PVT__m_phase_all_done);
                                                                            out += ", "+ Vpools_top_uvm_pkg__03a__03auvm_component::to_string_middle();
                                                                            return (
                                                                                out);
                                                                        }
