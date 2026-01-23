// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpools_top.h for the primary calling header

#include "Vpools_top__pch.h"

void Vpools_top_uvm_pkg__03a__03auvm_report_catcher__Vclpkg::__VnoInFunc_print_catcher(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vpools_top_uvm_pkg__03a__03auvm_report_catcher__Vclpkg::__VnoInFunc_print_catcher\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_catcher> __Vtask_first__2__Vfuncout;
    CData/*0:0*/ __Vtask_callback_mode__3__Vfuncout;
    __Vtask_callback_mode__3__Vfuncout = 0;
    std::string __Vtask_get_name__4__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_catcher> __Vtask_next__5__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__6__Vfuncout;
    __Vtask_uvm_report_enabled__6__Vfuncout = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__7__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__9__Vfuncout;
    std::string __Vfunc_m_uvm_string_queue_join__10__Vfuncout;
    std::string __Vtemp_1;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string msg;
    std::string enabled;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_catcher> catcher;
    VlQueue<std::string> q;
    q.push_back("-------------UVM REPORT CATCHERS----------------------------\n"s);
    VL_NULL_CHECK(this->__PVT__print_catcher__Vstatic__iter, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 359)->__VnoInFunc_first(vlSymsp, __Vtask_first__2__Vfuncout);
    catcher = __Vtask_first__2__Vfuncout;
    while ((VlNull{} != catcher)) {
        enabled = (([&]() {
                    VL_NULL_CHECK(catcher, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 361)
                    ->__VnoInFunc_callback_mode(vlSymsp, 0xffffffffU, __Vtask_callback_mode__3__Vfuncout);
                }(), (IData)(__Vtask_callback_mode__3__Vfuncout))
                    ? "ON"s : "OFF"s);
        __Vtemp_1 = ([&]() {
                VL_NULL_CHECK(catcher, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 366)
                     ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__4__Vfuncout);
            }(), __Vtask_get_name__4__Vfuncout);
        q.push_back(VL_SFORMATF_N_NX("%20@ : %@\n",0,
                                     -1,&(__Vtemp_1),
                                     -1,&(enabled)) );
        VL_NULL_CHECK(this->__PVT__print_catcher__Vstatic__iter, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 367)->__VnoInFunc_next(vlSymsp, __Vtask_next__5__Vfuncout);
        catcher = __Vtask_next__5__Vfuncout;
    }
    q.push_back("--------------------------------------------------------------\n"s);
    if ((0U != ([&]() {
                    VL_NULL_CHECK(([&]() {
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__7__Vfuncout);
                            }(), __Vfunc_get__7__Vfuncout), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 371)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "UVM/REPORT/CATCHER"s, __Vtask_uvm_report_enabled__6__Vfuncout);
                }(), __Vtask_uvm_report_enabled__6__Vfuncout))) {
        VL_NULL_CHECK(([&]() {
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__9__Vfuncout);
                }(), __Vfunc_get__9__Vfuncout), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 371)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "UVM/REPORT/CATCHER"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                        __Vfunc_m_uvm_string_queue_join__10__Vfuncout 
                            = VL_CVT_PACK_STR_ND(q);
                    }(), __Vfunc_m_uvm_string_queue_join__10__Vfuncout)), 0x00000064U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh"s, 0x00000173U, ""s, 1U);
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_report_catcher__Vclpkg::__VnoInFunc_debug_report_catcher(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ what) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vpools_top_uvm_pkg__03a__03auvm_report_catcher__Vclpkg::__VnoInFunc_debug_report_catcher\n"); );
    // Body
    this->__PVT__m_debug_flags = what;
}

void Vpools_top_uvm_pkg__03a__03auvm_report_catcher__Vclpkg::__VnoInFunc_process_all_report_catchers(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_message> rm, IData/*31:0*/ &process_all_report_catchers__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vpools_top_uvm_pkg__03a__03auvm_report_catcher__Vclpkg::__VnoInFunc_process_all_report_catchers\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_object> __Vtask_get_report_object__11__Vfuncout;
    CData/*1:0*/ __Vtask_get_severity__12__Vfuncout;
    __Vtask_get_severity__12__Vfuncout = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_catcher> __Vfunc_get_first__13__Vfuncout;
    VlClassRef<Vpools_top_std__03a__03aprocess> __Vfunc_self__14__Vfuncout;
    std::string __Vtask_get_randstate__15__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> __Vtask_clone__16__Vfuncout;
    CData/*0:0*/ __Vtask_callback_mode__18__Vfuncout;
    __Vtask_callback_mode__18__Vfuncout = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_catcher> __Vfunc_get_next__19__Vfuncout;
    CData/*1:0*/ __Vtask_get_severity__20__Vfuncout;
    __Vtask_get_severity__20__Vfuncout = 0;
    IData/*31:0*/ __Vtask_process_report_catcher__21__Vfuncout;
    __Vtask_process_report_catcher__21__Vfuncout = 0;
    CData/*1:0*/ __Vtask_get_severity__22__Vfuncout;
    __Vtask_get_severity__22__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_action__23__Vfuncout;
    __Vtask_get_action__23__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_report_action__24__Vfuncout;
    __Vtask_get_report_action__24__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_report_action__26__Vfuncout;
    __Vtask_get_report_action__26__Vfuncout = 0;
    CData/*1:0*/ __Vtask_get_severity__27__Vfuncout;
    __Vtask_get_severity__27__Vfuncout = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_catcher> __Vfunc_get_next__28__Vfuncout;
    CData/*1:0*/ __Vtask_get_severity__29__Vfuncout;
    __Vtask_get_severity__29__Vfuncout = 0;
    CData/*1:0*/ __Vtask_get_severity__30__Vfuncout;
    __Vtask_get_severity__30__Vfuncout = 0;
    CData/*1:0*/ __Vtask_get_severity__31__Vfuncout;
    __Vtask_get_severity__31__Vfuncout = 0;
    // Body
    VlClassRef<Vpools_top_std__03a__03aprocess> unnamedblk3__DOT__p;
    std::string unnamedblk3__DOT__randstate;
    CData/*1:0*/ unnamedblk4__DOT__prev_sev;
    unnamedblk4__DOT__prev_sev = 0;
    IData/*31:0*/ iter;
    iter = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_catcher> catcher;
    IData/*31:0*/ thrown;
    thrown = 0;
    CData/*1:0*/ orig_severity;
    orig_severity = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_object> l_report_object;
    {
        thrown = 1U;
        VL_NULL_CHECK(rm, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 552)->__VnoInFunc_get_report_object(vlSymsp, __Vtask_get_report_object__11__Vfuncout);
        l_report_object = __Vtask_get_report_object__11__Vfuncout;
        if (this->__PVT__process_all_report_catchers__Vstatic__in_catcher) {
            process_all_report_catchers__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        this->__PVT__process_all_report_catchers__Vstatic__in_catcher = 1U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_tracing = 0U;
        VL_NULL_CHECK(rm, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 560)->__VnoInFunc_get_severity(vlSymsp, __Vtask_get_severity__12__Vfuncout);
        orig_severity = __Vtask_get_severity__12__Vfuncout;
        this->__PVT__m_modified_report_message = rm;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz63_TBz134__Vclpkg.__VnoInFunc_get_first(vlProcess, vlSymsp, iter, l_report_object, __Vfunc_get_first__13__Vfuncout);
        catcher = __Vfunc_get_first__13__Vfuncout;
        if ((VlNull{} != catcher)) {
            if ((0U != (2U & this->__PVT__m_debug_flags))) {
                vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __Vfunc_self__14__Vfuncout);
                unnamedblk3__DOT__p = __Vfunc_self__14__Vfuncout;
                if ((VlNull{} != unnamedblk3__DOT__p)) {
                    VL_NULL_CHECK(unnamedblk3__DOT__p, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 569)->__VnoInFunc_get_randstate(vlSymsp, __Vtask_get_randstate__15__Vfuncout);
                    unnamedblk3__DOT__randstate = __Vtask_get_randstate__15__Vfuncout;
                }
                if (VL_UNLIKELY(((! VL_CAST_DYNAMIC(
                                                    ([&]() {
                                            VL_NULL_CHECK(rm, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 570)
                                                     ->__VnoInFunc_clone(vlProcess, vlSymsp, __Vtask_clone__16__Vfuncout);
                                        }(), __Vtask_clone__16__Vfuncout), this->__PVT__m_orig_report_message))))) {
                    VL_WRITEF_NX("[%0t] %%Error: uvm_report_catcher.svh:570: Assertion failed in %Nuvm_pkg.uvm_report_catcher.process_all_report_catchers.unnamedblk3: '$cast' failed.\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name());
                    VL_STOP_MT("/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 570, "");
                }
                if ((VlNull{} != unnamedblk3__DOT__p)) {
                    VL_NULL_CHECK(unnamedblk3__DOT__p, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 572)->__VnoInFunc_set_randstate(vlSymsp, unnamedblk3__DOT__randstate);
                }
            }
        }
        {
            while ((VlNull{} != catcher)) {
                {
                    if ((1U & (~ ([&]() {
                                        VL_NULL_CHECK(catcher, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 578)
                                  ->__VnoInFunc_callback_mode(vlSymsp, 0xffffffffU, __Vtask_callback_mode__18__Vfuncout);
                                    }(), (IData)(__Vtask_callback_mode__18__Vfuncout))))) {
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz63_TBz134__Vclpkg.__VnoInFunc_get_next(vlProcess, vlSymsp, iter, l_report_object, __Vfunc_get_next__19__Vfuncout);
                        catcher = __Vfunc_get_next__19__Vfuncout;
                        goto __Vlabel2;
                    }
                    VL_NULL_CHECK(this->__PVT__m_modified_report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 583)->__VnoInFunc_get_severity(vlSymsp, __Vtask_get_severity__20__Vfuncout);
                    unnamedblk4__DOT__prev_sev = __Vtask_get_severity__20__Vfuncout;
                    this->__PVT__m_set_action_called = 0U;
                    VL_NULL_CHECK(catcher, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 585)->__VnoInFunc_process_report_catcher(vlProcess, vlSymsp, __Vtask_process_report_catcher__21__Vfuncout);
                    thrown = __Vtask_process_report_catcher__21__Vfuncout;
                    if ((((1U & (~ (IData)(this->__PVT__m_set_action_called))) 
                          && (([&]() {
                                            VL_NULL_CHECK(this->__PVT__m_modified_report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 591)
                               ->__VnoInFunc_get_severity(vlSymsp, __Vtask_get_severity__22__Vfuncout);
                                        }(), (IData)(__Vtask_get_severity__22__Vfuncout)) 
                              != (IData)(unnamedblk4__DOT__prev_sev))) 
                         && (([&]() {
                                        VL_NULL_CHECK(this->__PVT__m_modified_report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 592)
                              ->__VnoInFunc_get_action(vlSymsp, __Vtask_get_action__23__Vfuncout);
                                    }(), __Vtask_get_action__23__Vfuncout) 
                             == ([&]() {
                                        VL_NULL_CHECK(l_report_object, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 593)
                                 ->__VnoInFunc_get_report_action(vlProcess, vlSymsp, unnamedblk4__DOT__prev_sev, "*@&*^*^*#"s, __Vtask_get_report_action__24__Vfuncout);
                                    }(), __Vtask_get_report_action__24__Vfuncout)))) {
                        VL_NULL_CHECK(this->__PVT__m_modified_report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 595)->__VnoInFunc_set_action(vlSymsp, 
                                                                                ([&]() {
                                    VL_NULL_CHECK(l_report_object, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 596)
                                                                                ->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 
                                                                                ([&]() {
                                                VL_NULL_CHECK(this->__PVT__m_modified_report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 596)
                                                                                ->__VnoInFunc_get_severity(vlSymsp, __Vtask_get_severity__27__Vfuncout);
                                            }(), (IData)(__Vtask_get_severity__27__Vfuncout)), "*@&*^*^*#"s, __Vtask_get_report_action__26__Vfuncout);
                                }(), __Vtask_get_report_action__26__Vfuncout));
                    }
                    if ((0U == thrown)) {
                        if ((3U == (IData)(orig_severity))) {
                            this->__PVT__m_caught_fatal 
                                = ((IData)(1U) + this->__PVT__m_caught_fatal);
                        } else if ((2U == (IData)(orig_severity))) {
                            this->__PVT__m_caught_error 
                                = ((IData)(1U) + this->__PVT__m_caught_error);
                        } else if ((1U == (IData)(orig_severity))) {
                            this->__PVT__m_caught_warning 
                                = ((IData)(1U) + this->__PVT__m_caught_warning);
                        }
                        goto __Vlabel1;
                    }
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz63_TBz134__Vclpkg.__VnoInFunc_get_next(vlProcess, vlSymsp, iter, l_report_object, __Vfunc_get_next__28__Vfuncout);
                    catcher = __Vfunc_get_next__28__Vfuncout;
                    __Vlabel2: ;
                }
            }
            __Vlabel1: ;
        }
        if ((3U == (IData)(orig_severity))) {
            if ((([&]() {
                            VL_NULL_CHECK(this->__PVT__m_modified_report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 613)
                  ->__VnoInFunc_get_severity(vlSymsp, __Vtask_get_severity__29__Vfuncout);
                        }(), (IData)(__Vtask_get_severity__29__Vfuncout)) 
                 < (IData)(orig_severity))) {
                this->__PVT__m_demoted_fatal = ((IData)(1U) 
                                                + this->__PVT__m_demoted_fatal);
            }
        } else if ((2U == (IData)(orig_severity))) {
            if ((([&]() {
                            VL_NULL_CHECK(this->__PVT__m_modified_report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 616)
                  ->__VnoInFunc_get_severity(vlSymsp, __Vtask_get_severity__30__Vfuncout);
                        }(), (IData)(__Vtask_get_severity__30__Vfuncout)) 
                 < (IData)(orig_severity))) {
                this->__PVT__m_demoted_error = ((IData)(1U) 
                                                + this->__PVT__m_demoted_error);
            }
        } else if ((1U == (IData)(orig_severity))) {
            if ((([&]() {
                            VL_NULL_CHECK(this->__PVT__m_modified_report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 619)
                  ->__VnoInFunc_get_severity(vlSymsp, __Vtask_get_severity__31__Vfuncout);
                        }(), (IData)(__Vtask_get_severity__31__Vfuncout)) 
                 < (IData)(orig_severity))) {
                this->__PVT__m_demoted_warning = ((IData)(1U) 
                                                  + this->__PVT__m_demoted_warning);
            }
        }
        this->__PVT__process_all_report_catchers__Vstatic__in_catcher = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_tracing = 1U;
        process_all_report_catchers__Vfuncrtn = thrown;
        __Vlabel0: ;
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_report_catcher__Vclpkg::__VnoInFunc_summarize(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vpools_top_uvm_pkg__03a__03auvm_report_catcher__Vclpkg::__VnoInFunc_summarize\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_enabled__32__Vfuncout;
    __Vtask_uvm_report_enabled__32__Vfuncout = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__33__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__35__Vfuncout;
    std::string __Vfunc_m_uvm_string_queue_join__36__Vfuncout;
    // Body
    std::string s;
    VlQueue<std::string> q;
    if (this->__PVT__do_report) {
        q.push_back("\n--- UVM Report catcher Summary ---\n\n\n"s);
        q.push_back(VL_SFORMATF_N_NX("Number of demoted UVM_FATAL reports  :%5d\n",0,
                                     32,this->__PVT__m_demoted_fatal) );
        q.push_back(VL_SFORMATF_N_NX("Number of demoted UVM_ERROR reports  :%5d\n",0,
                                     32,this->__PVT__m_demoted_error) );
        q.push_back(VL_SFORMATF_N_NX("Number of demoted UVM_WARNING reports:%5d\n",0,
                                     32,this->__PVT__m_demoted_warning) );
        q.push_back(VL_SFORMATF_N_NX("Number of caught UVM_FATAL reports   :%5d\n",0,
                                     32,this->__PVT__m_caught_fatal) );
        q.push_back(VL_SFORMATF_N_NX("Number of caught UVM_ERROR reports   :%5d\n",0,
                                     32,this->__PVT__m_caught_error) );
        q.push_back(VL_SFORMATF_N_NX("Number of caught UVM_WARNING reports :%5d\n",0,
                                     32,this->__PVT__m_caught_warning) );
        if ((0U != ([&]() {
                        VL_NULL_CHECK(([&]() {
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__33__Vfuncout);
                                }(), __Vfunc_get__33__Vfuncout), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 675)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "UVM/REPORT/CATCHER"s, __Vtask_uvm_report_enabled__32__Vfuncout);
                    }(), __Vtask_uvm_report_enabled__32__Vfuncout))) {
            VL_NULL_CHECK(([&]() {
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__35__Vfuncout);
                    }(), __Vfunc_get__35__Vfuncout), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 675)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "UVM/REPORT/CATCHER"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                            __Vfunc_m_uvm_string_queue_join__36__Vfuncout 
                                = VL_CVT_PACK_STR_ND(
                                                     q);
                        }(), __Vfunc_m_uvm_string_queue_join__36__Vfuncout)), 0x00000064U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh"s, 0x000002a3U, ""s, 1U);
        }
    }
}

Vpools_top_uvm_pkg__03a__03auvm_report_catcher::Vpools_top_uvm_pkg__03a__03auvm_report_catcher(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name)
    : Vpools_top_uvm_pkg__03a__03auvm_callback(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_catcher::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__do_report = 1U;
}

void Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_client(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_object> &get_client__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_client\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_object> __Vtask_get_report_object__1__Vfuncout;
    // Body
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 106)->__VnoInFunc_get_report_object(vlSymsp, __Vtask_get_report_object__1__Vfuncout);
    get_client__Vfuncrtn = __Vtask_get_report_object__1__Vfuncout;
}

void Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_severity(Vpools_top__Syms* __restrict vlSymsp, CData/*1:0*/ &get_severity__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_severity\n"); );
    // Locals
    CData/*1:0*/ __Vtask_get_severity__2__Vfuncout;
    __Vtask_get_severity__2__Vfuncout = 0;
    // Body
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 118)->__VnoInFunc_get_severity(vlSymsp, __Vtask_get_severity__2__Vfuncout);
    get_severity__Vfuncrtn = __Vtask_get_severity__2__Vfuncout;
}

void Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_context(Vpools_top__Syms* __restrict vlSymsp, std::string &get_context__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_context\n"); );
    // Locals
    std::string __Vtask_get_context__3__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_handler> __Vtask_get_report_handler__4__Vfuncout;
    std::string __Vtask_get_full_name__5__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_handler> unnamedblk1__DOT__rh;
    std::string context_str;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 132)->__VnoInFunc_get_context(vlSymsp, __Vtask_get_context__3__Vfuncout);
    context_str = __Vtask_get_context__3__Vfuncout;
    if ((""s == context_str)) {
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 134)->__VnoInFunc_get_report_handler(vlSymsp, __Vtask_get_report_handler__4__Vfuncout);
        unnamedblk1__DOT__rh = __Vtask_get_report_handler__4__Vfuncout;
        VL_NULL_CHECK(unnamedblk1__DOT__rh, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 135)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__5__Vfuncout);
        context_str = __Vtask_get_full_name__5__Vfuncout;
    }
    get_context__Vfuncrtn = context_str;
}

void Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_verbosity(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_verbosity__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_verbosity\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_verbosity__6__Vfuncout;
    __Vtask_get_verbosity__6__Vfuncout = 0;
    // Body
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 150)->__VnoInFunc_get_verbosity(vlSymsp, __Vtask_get_verbosity__6__Vfuncout);
    get_verbosity__Vfuncrtn = __Vtask_get_verbosity__6__Vfuncout;
}

void Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_id(Vpools_top__Syms* __restrict vlSymsp, std::string &get_id__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_id\n"); );
    // Locals
    std::string __Vtask_get_id__7__Vfuncout;
    // Body
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 162)->__VnoInFunc_get_id(vlSymsp, __Vtask_get_id__7__Vfuncout);
    get_id__Vfuncrtn = __Vtask_get_id__7__Vfuncout;
}

void Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_message(Vpools_top__Syms* __restrict vlSymsp, std::string &get_message__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_message\n"); );
    // Locals
    std::string __Vtask_get_message__8__Vfuncout;
    // Body
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 174)->__VnoInFunc_get_message(vlSymsp, __Vtask_get_message__8__Vfuncout);
    get_message__Vfuncrtn = __Vtask_get_message__8__Vfuncout;
}

void Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_action(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_action__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_action\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_action__9__Vfuncout;
    __Vtask_get_action__9__Vfuncout = 0;
    // Body
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 186)->__VnoInFunc_get_action(vlSymsp, __Vtask_get_action__9__Vfuncout);
    get_action__Vfuncrtn = __Vtask_get_action__9__Vfuncout;
}

void Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_fname(Vpools_top__Syms* __restrict vlSymsp, std::string &get_fname__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_fname\n"); );
    // Locals
    std::string __Vtask_get_filename__10__Vfuncout;
    // Body
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 195)->__VnoInFunc_get_filename(vlSymsp, __Vtask_get_filename__10__Vfuncout);
    get_fname__Vfuncrtn = __Vtask_get_filename__10__Vfuncout;
}

void Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_line(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_line__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_line\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_line__11__Vfuncout;
    __Vtask_get_line__11__Vfuncout = 0;
    // Body
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 204)->__VnoInFunc_get_line(vlSymsp, __Vtask_get_line__11__Vfuncout);
    get_line__Vfuncrtn = __Vtask_get_line__11__Vfuncout;
}

void Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_element_container(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_message_element_container> &get_element_container__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_element_container\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_message_element_container> __Vtask_get_element_container__12__Vfuncout;
    // Body
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 212)->__VnoInFunc_get_element_container(vlSymsp, __Vtask_get_element_container__12__Vfuncout);
    get_element_container__Vfuncrtn = __Vtask_get_element_container__12__Vfuncout;
}

void Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_set_severity(Vpools_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_set_severity\n"); );
    // Body
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 225)->__VnoInFunc_set_severity(vlSymsp, severity);
}

void Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_set_verbosity(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ verbosity) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_set_verbosity\n"); );
    // Body
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 235)->__VnoInFunc_set_verbosity(vlSymsp, verbosity);
}

void Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_set_id(Vpools_top__Syms* __restrict vlSymsp, std::string id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_set_id\n"); );
    // Body
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 245)->__VnoInFunc_set_id(vlSymsp, id);
}

void Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_set_message(Vpools_top__Syms* __restrict vlSymsp, std::string message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_set_message\n"); );
    // Body
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 255)->__VnoInFunc_set_message(vlSymsp, message);
}

void Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_set_action(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_set_action\n"); );
    // Body
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 265)->__VnoInFunc_set_action(vlSymsp, action);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_set_action_called = 1U;
}

void Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_set_context(Vpools_top__Syms* __restrict vlSymsp, std::string context_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_set_context\n"); );
    // Body
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 276)->__VnoInFunc_set_context(vlSymsp, context_str);
}

void Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_add_int(Vpools_top__Syms* __restrict vlSymsp, std::string name, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size, IData/*27:0*/ radix, IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_add_int\n"); );
    // Body
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 293)->__VnoInFunc_add_int(vlSymsp, name, value, size, radix, action);
}

void Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_add_string(Vpools_top__Syms* __restrict vlSymsp, std::string name, std::string value, IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_add_string\n"); );
    // Body
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 307)->__VnoInFunc_add_string(vlSymsp, name, value, action);
}

void Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_add_object(Vpools_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> obj, IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_add_object\n"); );
    // Body
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 321)->__VnoInFunc_add_object(vlSymsp, name, obj, action);
}

void Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_catch(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &catch__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_catch\n"); );
}

void Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_uvm_report_fatal(Vpools_top__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string fname, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_uvm_report_fatal\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_uvm_report(vlProcess, vlSymsp, 3U, id, message, 0U, fname, line, context_name, (IData)(report_enabled_checked));
}

void Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_uvm_report_error(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string fname, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_uvm_report_error\n"); );
    // Body
    this->__VnoInFunc_uvm_report(vlProcess, vlSymsp, 2U, id, message, 0U, fname, line, context_name, (IData)(report_enabled_checked));
}

void Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_uvm_report_warning(Vpools_top__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string fname, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_uvm_report_warning\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_uvm_report(vlProcess, vlSymsp, 1U, id, message, 0U, fname, line, context_name, (IData)(report_enabled_checked));
}

void Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_uvm_report_info(Vpools_top__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string fname, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_uvm_report_info\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_uvm_report(vlProcess, vlSymsp, 0U, id, message, verbosity, fname, line, context_name, (IData)(report_enabled_checked));
}

void Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_uvm_report(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, std::string message, IData/*31:0*/ verbosity, std::string fname, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_uvm_report\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__26__Vfuncout;
    __Vfunc_uvm_report_enabled__26__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__26__verbosity;
    __Vfunc_uvm_report_enabled__26__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__26__severity;
    __Vfunc_uvm_report_enabled__26__severity = 0;
    std::string __Vfunc_uvm_report_enabled__26__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__27__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__28__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__29__Vfuncout;
    __Vtask_uvm_report_enabled__29__Vfuncout = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_message> __Vfunc_new_report_message__30__Vfuncout;
    // Body
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_message> l_report_message;
    {
        if ((1U & (~ (IData)(report_enabled_checked)))) {
            if ((1U & (~ (0U != ([&]() {
                                    __Vfunc_uvm_report_enabled__26__id 
                                        = id;
                                    __Vfunc_uvm_report_enabled__26__severity 
                                        = severity;
                                    __Vfunc_uvm_report_enabled__26__verbosity 
                                        = verbosity;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__27__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                        = __Vfunc_get__27__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                 ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__28__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                        = __Vtask_get_root__28__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                 ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__26__verbosity, (IData)(__Vfunc_uvm_report_enabled__26__severity), __Vfunc_uvm_report_enabled__26__id, __Vtask_uvm_report_enabled__29__Vfuncout);
                                    __Vfunc_uvm_report_enabled__26__Vfuncout 
                                        = __Vtask_uvm_report_enabled__29__Vfuncout;
                                }(), __Vfunc_uvm_report_enabled__26__Vfuncout))))) {
                goto __Vlabel0;
            }
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_report_message__Vclpkg.__VnoInFunc_new_report_message(vlProcess, vlSymsp, "uvm_report_message"s, __Vfunc_new_report_message__30__Vfuncout);
        l_report_message = __Vfunc_new_report_message__30__Vfuncout;
        VL_NULL_CHECK(l_report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 494)->__VnoInFunc_set_report_message(vlSymsp, severity, id, message, verbosity, fname, line, context_name);
        this->__VnoInFunc_uvm_process_report_message(vlProcess, vlSymsp, l_report_message);
        __Vlabel0: ;
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_uvm_process_report_message(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_message> msg) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_uvm_process_report_message\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_object> __Vtask_get_report_object__33__Vfuncout;
    IData/*31:0*/ __Vtask_get_report_action__34__Vfuncout;
    __Vtask_get_report_action__34__Vfuncout = 0;
    CData/*1:0*/ __Vtask_get_severity__35__Vfuncout;
    __Vtask_get_severity__35__Vfuncout = 0;
    std::string __Vtask_get_id__36__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_server> __Vtask_get_report_server__37__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_handler> __Vtask_get_report_handler__40__Vfuncout;
    IData/*31:0*/ __Vtask_get_report_file_handle__43__Vfuncout;
    __Vtask_get_report_file_handle__43__Vfuncout = 0;
    CData/*1:0*/ __Vtask_get_severity__44__Vfuncout;
    __Vtask_get_severity__44__Vfuncout = 0;
    std::string __Vtask_get_id__45__Vfuncout;
    std::string __Vtask_compose_report_message__47__Vfuncout;
    // Body
    std::string unnamedblk2__DOT__composed_message;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_server> unnamedblk2__DOT__rs;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_object> ro;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 500)->__VnoInFunc_get_report_object(vlSymsp, __Vtask_get_report_object__33__Vfuncout);
    ro = __Vtask_get_report_object__33__Vfuncout;
    IData/*31:0*/ a;
    a = 0;
    VL_NULL_CHECK(ro, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 501)->__VnoInFunc_get_report_action(vlProcess, vlSymsp, 
                                                                                ([&]() {
                VL_NULL_CHECK(msg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 501)
                                                                                ->__VnoInFunc_get_severity(vlSymsp, __Vtask_get_severity__35__Vfuncout);
            }(), (IData)(__Vtask_get_severity__35__Vfuncout)), 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                    VL_NULL_CHECK(msg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 501)
                                                                                ->__VnoInFunc_get_id(vlSymsp, __Vtask_get_id__36__Vfuncout);
                }(), __Vtask_get_id__36__Vfuncout)), __Vtask_get_report_action__34__Vfuncout);
    a = __Vtask_get_report_action__34__Vfuncout;
    if ((0U != a)) {
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 505)->__VnoInFunc_get_report_server(vlSymsp, __Vtask_get_report_server__37__Vfuncout);
        unnamedblk2__DOT__rs = __Vtask_get_report_server__37__Vfuncout;
        VL_NULL_CHECK(msg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 507)->__VnoInFunc_set_report_object(vlSymsp, ro);
        VL_NULL_CHECK(msg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 508)->__VnoInFunc_set_report_handler(vlSymsp, 
                                                                                ([&]() {
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 508)
                                                                                ->__VnoInFunc_get_report_handler(vlSymsp, __Vtask_get_report_handler__40__Vfuncout);
                }(), __Vtask_get_report_handler__40__Vfuncout));
        VL_NULL_CHECK(msg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 509)->__VnoInFunc_set_report_server(vlSymsp, unnamedblk2__DOT__rs);
        VL_NULL_CHECK(msg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 510)->__VnoInFunc_set_file(vlSymsp, 
                                                                                ([&]() {
                    VL_NULL_CHECK(ro, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 510)
                                                                                ->__VnoInFunc_get_report_file_handle(vlProcess, vlSymsp, 
                                                                                ([&]() {
                                VL_NULL_CHECK(msg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 510)
                                                                                ->__VnoInFunc_get_severity(vlSymsp, __Vtask_get_severity__44__Vfuncout);
                            }(), (IData)(__Vtask_get_severity__44__Vfuncout)), 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                                    VL_NULL_CHECK(msg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 510)
                                                                                ->__VnoInFunc_get_id(vlSymsp, __Vtask_get_id__45__Vfuncout);
                                }(), __Vtask_get_id__45__Vfuncout)), __Vtask_get_report_file_handle__43__Vfuncout);
                }(), __Vtask_get_report_file_handle__43__Vfuncout));
        VL_NULL_CHECK(msg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 511)->__VnoInFunc_set_action(vlSymsp, a);
        if ((0U != (3U & a))) {
            VL_NULL_CHECK(unnamedblk2__DOT__rs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 515)->__VnoInFunc_compose_report_message(vlProcess, vlSymsp, msg, ""s, __Vtask_compose_report_message__47__Vfuncout);
            unnamedblk2__DOT__composed_message = __Vtask_compose_report_message__47__Vfuncout;
        }
        VL_NULL_CHECK(unnamedblk2__DOT__rs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 516)->__VnoInFunc_execute_report_message(vlProcess, vlSymsp, msg, unnamedblk2__DOT__composed_message);
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_issue(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_issue\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_server> __Vtask_get_report_server__49__Vfuncout;
    IData/*31:0*/ __Vtask_get_action__50__Vfuncout;
    __Vtask_get_action__50__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_action__51__Vfuncout;
    __Vtask_get_action__51__Vfuncout = 0;
    std::string __Vtask_compose_report_message__52__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string composed_message;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_server> rs;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 530)->__VnoInFunc_get_report_server(vlSymsp, __Vtask_get_report_server__49__Vfuncout);
    rs = __Vtask_get_report_server__49__Vfuncout;
    if ((0U != ([&]() {
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 532)
                ->__VnoInFunc_get_action(vlSymsp, __Vtask_get_action__50__Vfuncout);
                }(), __Vtask_get_action__50__Vfuncout))) {
        if ((0U != (3U & ([&]() {
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 535)
                          ->__VnoInFunc_get_action(vlSymsp, __Vtask_get_action__51__Vfuncout);
                        }(), __Vtask_get_action__51__Vfuncout)))) {
            VL_NULL_CHECK(rs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 536)->__VnoInFunc_compose_report_message(vlProcess, vlSymsp, vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, ""s, __Vtask_compose_report_message__52__Vfuncout);
            composed_message = __Vtask_compose_report_message__52__Vfuncout;
        }
        VL_NULL_CHECK(rs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 537)->__VnoInFunc_execute_report_message(vlProcess, vlSymsp, vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, composed_message);
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_process_report_catcher(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &process_report_catcher__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_process_report_catcher\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_catch__54__Vfuncout;
    __Vfunc_catch__54__Vfuncout = 0;
    std::string __Vfunc_get_name__56__Vfuncout;
    // Body
    IData/*31:0*/ act;
    act = 0;
    {
        this->__VnoInFunc_catch(vlSymsp, __Vfunc_catch__54__Vfuncout);
        act = __Vfunc_catch__54__Vfuncout;
        if ((0U == act)) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "RPTCTHR"s, 
                                               VL_CVT_PACK_STR_NN(
                                                                  VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("uvm_report_this.catch() in catcher instance "s, 
                                                                                ([&]() {
                                    this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__56__Vfuncout);
                                }(), __Vfunc_get_name__56__Vfuncout)), " must return THROW or CAUGHT"s)), 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh"s, 0x00000282U, ""s, 0U);
        }
        if ((0U != (2U & vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_debug_flags))) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_catcher.svh", 645)->__VnoInFunc_copy(vlProcess, vlSymsp, vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_orig_report_message, VlNull{});
        }
        if (((2U == act) & (~ (0U != (1U & vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_debug_flags))))) {
            process_report_catcher__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        process_report_catcher__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_randomize(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__59__Vfuncout;
    __Vfunc___VBasicRand__59__Vfuncout = 0;
    // Body
    Vpools_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vpools_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__59__Vfuncout);
            }(), __Vfunc___VBasicRand__59__Vfuncout));
}

void Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc___Vsetup_constraints(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc___VBasicRand(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vpools_top_uvm_pkg__03a__03auvm_report_catcher::_ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_catcher::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vpools_top_uvm_pkg__03a__03auvm_report_catcher::~Vpools_top_uvm_pkg__03a__03auvm_report_catcher() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_catcher::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_catcher>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_catcher::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vpools_top_uvm_pkg__03a__03auvm_report_catcher::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_catcher::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vpools_top_uvm_pkg__03a__03auvm_report_catcher::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_catcher::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vpools_top_uvm_pkg__03a__03auvm_callback::to_string_middle();
    return (out);
}
