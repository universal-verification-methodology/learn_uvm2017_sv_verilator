// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtransaction_example__Syms.h"


VL_ATTR_COLD void Vtransaction_example___024root__trace_init_sub__TOP__0(Vtransaction_example___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtransaction_example___024root__trace_init_sub__TOP__0\n"); );
    Vtransaction_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
}

VL_ATTR_COLD void Vtransaction_example___024root__trace_init_top(Vtransaction_example___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtransaction_example___024root__trace_init_top\n"); );
    Vtransaction_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtransaction_example___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtransaction_example___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtransaction_example___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtransaction_example___024root__trace_register(Vtransaction_example___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtransaction_example___024root__trace_register\n"); );
    Vtransaction_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtransaction_example___024root__trace_const_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtransaction_example___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtransaction_example___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtransaction_example___024root__trace_const_0\n"); );
    // Init
    Vtransaction_example___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtransaction_example___024root*>(voidSelf);
    Vtransaction_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}
