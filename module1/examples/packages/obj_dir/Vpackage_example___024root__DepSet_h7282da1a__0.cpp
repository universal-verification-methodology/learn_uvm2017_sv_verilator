// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpackage_example.h for the primary calling header

#include "Vpackage_example__pch.h"
#include "Vpackage_example__Syms.h"
#include "Vpackage_example___024root.h"

VL_INLINE_OPT VlCoroutine Vpackage_example___024root___eval_initial__TOP__Vtiming__0____Vfork_1__1(Vpackage_example___024root* vlSelf, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpackage_example___024root___eval_initial__TOP__Vtiming__0____Vfork_1__1\n"); );
    Vpackage_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_wait_for_condition__3__count;
    __Vtask_wait_for_condition__3__count = 0;
    // Body
    vlSelfRef.package_example__DOT__unnamedblk1__DOT__timeout_val = 0x3e8U;
    __Vtask_wait_for_condition__3__count = 0;
    __Vtask_wait_for_condition__3__count = 0U;
    while (((~ (IData)(vlSelfRef.package_example__DOT__condition)) 
            & VL_LTS_III(32, __Vtask_wait_for_condition__3__count, vlSelfRef.package_example__DOT__unnamedblk1__DOT__timeout_val))) {
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "package_example.sv", 
                                             50);
        __Vtask_wait_for_condition__3__count = ((IData)(1U) 
                                                + __Vtask_wait_for_condition__3__count);
    }
    if (VL_UNLIKELY((VL_GTES_III(32, __Vtask_wait_for_condition__3__count, vlSelfRef.package_example__DOT__unnamedblk1__DOT__timeout_val)))) {
        VL_WRITEF_NX("[%0t] %%Error: package_example.sv:54: Assertion failed in %Nverification_pkg.wait_for_condition: Timeout waiting for condition\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("package_example.sv", 54, "");
    }
    __Vfork_1__sync.done("package_example.sv", 114);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpackage_example___024root___dump_triggers__act(Vpackage_example___024root* vlSelf);
#endif  // VL_DEBUG

void Vpackage_example___024root___eval_triggers__act(Vpackage_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpackage_example___024root___eval_triggers__act\n"); );
    Vpackage_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, vlSelfRef.__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vpackage_example___024root___dump_triggers__act(vlSelf);
    }
#endif
}
