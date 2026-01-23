// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vreset_patterns__Syms.h"


VL_ATTR_COLD void Vreset_patterns___024root__trace_init_sub__TOP__0(Vreset_patterns___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreset_patterns___024root__trace_init_sub__TOP__0\n"); );
    Vreset_patterns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("reset_patterns", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"reg_async",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+5,0,"reg_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+6,0,"CLK_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vreset_patterns___024root__trace_init_top(Vreset_patterns___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreset_patterns___024root__trace_init_top\n"); );
    Vreset_patterns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vreset_patterns___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vreset_patterns___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vreset_patterns___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vreset_patterns___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vreset_patterns___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vreset_patterns___024root__trace_register(Vreset_patterns___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreset_patterns___024root__trace_register\n"); );
    Vreset_patterns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vreset_patterns___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vreset_patterns___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vreset_patterns___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vreset_patterns___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vreset_patterns___024root__trace_const_0_sub_0(Vreset_patterns___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vreset_patterns___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreset_patterns___024root__trace_const_0\n"); );
    // Body
    Vreset_patterns___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vreset_patterns___024root*>(voidSelf);
    Vreset_patterns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vreset_patterns___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vreset_patterns___024root__trace_const_0_sub_0(Vreset_patterns___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreset_patterns___024root__trace_const_0_sub_0\n"); );
    Vreset_patterns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+6,(0x0000000aU),32);
}

VL_ATTR_COLD void Vreset_patterns___024root__trace_full_0_sub_0(Vreset_patterns___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vreset_patterns___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreset_patterns___024root__trace_full_0\n"); );
    // Body
    Vreset_patterns___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vreset_patterns___024root*>(voidSelf);
    Vreset_patterns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vreset_patterns___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vreset_patterns___024root__trace_full_0_sub_0(Vreset_patterns___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreset_patterns___024root__trace_full_0_sub_0\n"); );
    Vreset_patterns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+1,(vlSelfRef.reset_patterns__DOT__clk));
    bufp->fullBit(oldp+2,(vlSelfRef.reset_patterns__DOT__rst_n));
    bufp->fullBit(oldp+3,(vlSelfRef.reset_patterns__DOT__rst_sync));
    bufp->fullCData(oldp+4,(vlSelfRef.reset_patterns__DOT__reg_async),8);
    bufp->fullCData(oldp+5,(vlSelfRef.reset_patterns__DOT__reg_sync),8);
}
