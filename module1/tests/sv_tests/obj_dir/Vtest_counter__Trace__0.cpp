// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtest_counter__Syms.h"


void Vtest_counter___024root__trace_chg_0_sub_0(Vtest_counter___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtest_counter___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_counter___024root__trace_chg_0\n"); );
    // Body
    Vtest_counter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_counter___024root*>(voidSelf);
    Vtest_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtest_counter___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtest_counter___024root__trace_chg_0_sub_0(Vtest_counter___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_counter___024root__trace_chg_0_sub_0\n"); );
    Vtest_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    bufp->chgBit(oldp+0,(vlSelfRef.test_counter__DOT__clk));
    bufp->chgBit(oldp+1,(vlSelfRef.test_counter__DOT__rst_n));
    bufp->chgBit(oldp+2,(vlSelfRef.test_counter__DOT__enable));
    bufp->chgCData(oldp+3,(vlSelfRef.test_counter__DOT__count),8);
}

void Vtest_counter___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_counter___024root__trace_cleanup\n"); );
    // Locals
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    Vtest_counter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_counter___024root*>(voidSelf);
    Vtest_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
