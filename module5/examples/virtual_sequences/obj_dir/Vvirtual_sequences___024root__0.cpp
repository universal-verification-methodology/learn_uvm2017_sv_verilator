// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvirtual_sequences.h for the primary calling header

#include "Vvirtual_sequences__pch.h"

VlCoroutine Vvirtual_sequences___024root___eval_initial__TOP__Vtiming__0(Vvirtual_sequences___024root* vlSelf, VlProcessRef vlProcess);

void Vvirtual_sequences___024root___eval_initial(Vvirtual_sequences___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvirtual_sequences___024root___eval_initial\n"); );
    Vvirtual_sequences__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vvirtual_sequences___024root___eval_initial__TOP__Vtiming__0(vlSelf, std::make_shared<VlProcess>());
}

VlCoroutine Vvirtual_sequences___024root___eval_initial__TOP__Vtiming__0(Vvirtual_sequences___024root* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvirtual_sequences___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vvirtual_sequences__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    std::string __Vtask_run_test__0__test_name;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__1__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_root> __Vtask_get_root__2__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_root> TOP__uvm_pkg__DOT__run_test__Vstatic__top;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t> TOP__uvm_pkg__DOT__run_test__Vstatic__cs;
    // Body
    VL_WRITEF_NX("============================================================\nUVM Virtual Sequences Example\n============================================================\n\n",0);
    __Vtask_run_test__0__test_name = "VirtualSequencesTest"s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__1__Vfuncout);
    TOP__uvm_pkg__DOT__run_test__Vstatic__cs = __Vfunc_get__1__Vfuncout;
    VL_NULL_CHECK(TOP__uvm_pkg__DOT__run_test__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 49)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__2__Vfuncout);
    TOP__uvm_pkg__DOT__run_test__Vstatic__top = __Vtask_get_root__2__Vfuncout;
    co_await VL_NULL_CHECK(TOP__uvm_pkg__DOT__run_test__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 50)->__VnoInFunc_run_test(vlProcess, vlSymsp, __Vtask_run_test__0__test_name);
    vlProcess->state(VlProcess::FINISHED);
    co_return;}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvirtual_sequences___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vvirtual_sequences___024root___eval_triggers__act(Vvirtual_sequences___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvirtual_sequences___024root___eval_triggers__act\n"); );
    Vvirtual_sequences__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h5a1c11cb__0;
    __Vtrigprevexpr_h5a1c11cb__0 = 0;
    // Body
    __Vtrigprevexpr_h5a1c11cb__0 = (0U != vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.size());
    vlSelfRef.__VactTriggered[0U] = VL_EXTEND_QI(64,4, 
                                                 ((((IData)(__Vtrigprevexpr_h5a1c11cb__0) 
                                                    != (IData)(vlSelfRef.__Vtrigprevexpr_h5a1c11cb__1)) 
                                                   << 2U) 
                                                  | ((vlSelfRef.__VdynSched.evaluate() 
                                                      << 1U) 
                                                     | vlSelfRef.__VdlySched.awaitingCurrentTime())));
    vlSelfRef.__Vtrigprevexpr_h5a1c11cb__1 = __Vtrigprevexpr_h5a1c11cb__0;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered[0U] = (4ULL | vlSelfRef.__VactTriggered
                                         [0U]);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vvirtual_sequences___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    vlSelfRef.__VdynSched.doPostUpdates();
}

bool Vvirtual_sequences___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvirtual_sequences___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vvirtual_sequences___024root___timing_commit(Vvirtual_sequences___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvirtual_sequences___024root___timing_commit\n"); );
    Vvirtual_sequences__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (4ULL & vlSelfRef.__VactTriggered[0U]))) {
        vlSelfRef.__VtrigSched_hce2bd7cc__0.commit(
                                                   "@( (32'sh0 != uvm_pkg::uvm_objection__Vclpkg.m_scheduled_list.size()))");
    }
}

void Vvirtual_sequences___024root___timing_resume(Vvirtual_sequences___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvirtual_sequences___024root___timing_resume\n"); );
    Vvirtual_sequences__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdynSched.resume();
    }
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hce2bd7cc__0.resume(
                                                   "@( (32'sh0 != uvm_pkg::uvm_objection__Vclpkg.m_scheduled_list.size()))");
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vvirtual_sequences___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvirtual_sequences___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vvirtual_sequences___024root___eval_phase__act(Vvirtual_sequences___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvirtual_sequences___024root___eval_phase__act\n"); );
    Vvirtual_sequences__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vvirtual_sequences___024root___eval_triggers__act(vlSelf);
    Vvirtual_sequences___024root___timing_commit(vlSelf);
    Vvirtual_sequences___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vvirtual_sequences___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vvirtual_sequences___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

void Vvirtual_sequences___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvirtual_sequences___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vvirtual_sequences___024root___eval_phase__nba(Vvirtual_sequences___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvirtual_sequences___024root___eval_phase__nba\n"); );
    Vvirtual_sequences__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vvirtual_sequences___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vvirtual_sequences___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    if (vlSelfRef.__VnbaEventTrigger) {
        __VnbaExecute = 1U;
        vlSelfRef.__VnbaEventTrigger = 0U;
        vlSelfRef.__VnbaEvent.fire();
    }
    return (__VnbaExecute);
}

void Vvirtual_sequences___024root___eval(Vvirtual_sequences___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvirtual_sequences___024root___eval\n"); );
    Vvirtual_sequences__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vvirtual_sequences___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("virtual_sequences.sv", 226, "", "DIDNOTCONVERGE: NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vvirtual_sequences___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("virtual_sequences.sv", 226, "", "DIDNOTCONVERGE: Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vvirtual_sequences___024root___eval_phase__act(vlSelf));
    } while (Vvirtual_sequences___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vvirtual_sequences___024root___eval_debug_assertions(Vvirtual_sequences___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvirtual_sequences___024root___eval_debug_assertions\n"); );
    Vvirtual_sequences__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
