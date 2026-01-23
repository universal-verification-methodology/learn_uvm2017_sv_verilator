// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpackage_example__Syms.h"


void Vpackage_example___024root__trace_chg_0_sub_0(Vpackage_example___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vpackage_example___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpackage_example___024root__trace_chg_0\n"); );
    // Body
    Vpackage_example___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpackage_example___024root*>(voidSelf);
    Vpackage_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vpackage_example___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vpackage_example___024root__trace_chg_0_sub_0(Vpackage_example___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpackage_example___024root__trace_chg_0_sub_0\n"); );
    Vpackage_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    bufp->chgCData(oldp+0,(vlSelfRef.package_example__DOT__current_state),2);
    bufp->chgQData(oldp+1,(vlSelfRef.package_example__DOT__trans),49);
    bufp->chgBit(oldp+3,(vlSelfRef.package_example__DOT__condition));
    bufp->chgIData(oldp+4,(vlSelfRef.package_example__DOT__unnamedblk1__DOT__timeout_val),32);
}

void Vpackage_example___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpackage_example___024root__trace_cleanup\n"); );
    // Locals
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    Vpackage_example___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpackage_example___024root*>(voidSelf);
    Vpackage_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
