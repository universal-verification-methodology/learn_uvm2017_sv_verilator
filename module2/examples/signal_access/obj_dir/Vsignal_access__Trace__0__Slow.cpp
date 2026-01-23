// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vsignal_access__Syms.h"


VL_ATTR_COLD void Vsignal_access___024root__trace_init_sub__TOP__0(Vsignal_access___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsignal_access___024root__trace_init_sub__TOP__0\n"); );
    Vsignal_access__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("signal_access", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+7,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+8,0,"q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+4,0,"single_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"multi_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+6,0,"array_signal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"CLK_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"monitor_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vsignal_access___024root__trace_init_top(Vsignal_access___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsignal_access___024root__trace_init_top\n"); );
    Vsignal_access__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsignal_access___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vsignal_access___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vsignal_access___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsignal_access___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsignal_access___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vsignal_access___024root__trace_register(Vsignal_access___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsignal_access___024root__trace_register\n"); );
    Vsignal_access__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vsignal_access___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vsignal_access___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vsignal_access___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vsignal_access___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsignal_access___024root__trace_const_0_sub_0(Vsignal_access___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsignal_access___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsignal_access___024root__trace_const_0\n"); );
    // Body
    Vsignal_access___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsignal_access___024root*>(voidSelf);
    Vsignal_access__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vsignal_access___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsignal_access___024root__trace_const_0_sub_0(Vsignal_access___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsignal_access___024root__trace_const_0_sub_0\n"); );
    Vsignal_access__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+10,(0x0000000aU),32);
}

VL_ATTR_COLD void Vsignal_access___024root__trace_full_0_sub_0(Vsignal_access___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsignal_access___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsignal_access___024root__trace_full_0\n"); );
    // Body
    Vsignal_access___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsignal_access___024root*>(voidSelf);
    Vsignal_access__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vsignal_access___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsignal_access___024root__trace_full_0_sub_0(Vsignal_access___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsignal_access___024root__trace_full_0_sub_0\n"); );
    Vsignal_access__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+1,(vlSelfRef.signal_access__DOT__rst_n));
    bufp->fullBit(oldp+2,(vlSelfRef.signal_access__DOT__enable));
    bufp->fullCData(oldp+3,(vlSelfRef.signal_access__DOT__d),8);
    bufp->fullBit(oldp+4,(vlSelfRef.signal_access__DOT__single_bit));
    bufp->fullSData(oldp+5,(vlSelfRef.signal_access__DOT__multi_bit),16);
    bufp->fullIData(oldp+6,(vlSelfRef.signal_access__DOT__array_signal),32);
    bufp->fullBit(oldp+7,(vlSelfRef.signal_access__DOT__clk));
    bufp->fullCData(oldp+8,(vlSelfRef.signal_access__DOT__q),8);
    bufp->fullIData(oldp+9,(vlSelfRef.signal_access__DOT__monitor_count),32);
}
