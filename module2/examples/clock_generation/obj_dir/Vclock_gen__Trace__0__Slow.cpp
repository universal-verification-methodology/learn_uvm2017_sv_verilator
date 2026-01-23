// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vclock_gen__Syms.h"


VL_ATTR_COLD void Vclock_gen___024root__trace_init_sub__TOP__0(Vclock_gen___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_gen___024root__trace_init_sub__TOP__0\n"); );
    Vclock_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("clock_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"clk2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"clk3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"clk_gated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"clk_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"CLK1_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"CLK2_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"CLK3_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+6,0,"clk_stop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"clk_stopped",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"clk1_edges",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+9,0,"clk2_edges",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+10,0,"clk3_edges",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vclock_gen___024root__trace_init_top(Vclock_gen___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_gen___024root__trace_init_top\n"); );
    Vclock_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vclock_gen___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vclock_gen___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vclock_gen___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vclock_gen___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vclock_gen___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vclock_gen___024root__trace_register(Vclock_gen___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_gen___024root__trace_register\n"); );
    Vclock_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vclock_gen___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vclock_gen___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vclock_gen___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vclock_gen___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vclock_gen___024root__trace_const_0_sub_0(Vclock_gen___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vclock_gen___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_gen___024root__trace_const_0\n"); );
    // Body
    Vclock_gen___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vclock_gen___024root*>(voidSelf);
    Vclock_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vclock_gen___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vclock_gen___024root__trace_const_0_sub_0(Vclock_gen___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_gen___024root__trace_const_0_sub_0\n"); );
    Vclock_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+11,(0x0000000aU),32);
    bufp->fullIData(oldp+12,(0x00000014U),32);
    bufp->fullIData(oldp+13,(5U),32);
}

VL_ATTR_COLD void Vclock_gen___024root__trace_full_0_sub_0(Vclock_gen___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vclock_gen___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_gen___024root__trace_full_0\n"); );
    // Body
    Vclock_gen___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vclock_gen___024root*>(voidSelf);
    Vclock_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vclock_gen___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vclock_gen___024root__trace_full_0_sub_0(Vclock_gen___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_gen___024root__trace_full_0_sub_0\n"); );
    Vclock_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+1,(vlSelfRef.clock_gen__DOT__clk1));
    bufp->fullBit(oldp+2,(vlSelfRef.clock_gen__DOT__clk2));
    bufp->fullBit(oldp+3,(vlSelfRef.clock_gen__DOT__clk3));
    bufp->fullBit(oldp+4,(vlSelfRef.clock_gen__DOT__clk_gated));
    bufp->fullBit(oldp+5,(vlSelfRef.clock_gen__DOT__clk_enable));
    bufp->fullBit(oldp+6,(vlSelfRef.clock_gen__DOT__clk_stop));
    bufp->fullBit(oldp+7,(vlSelfRef.clock_gen__DOT__clk_stopped));
    bufp->fullIData(oldp+8,(vlSelfRef.clock_gen__DOT__clk1_edges),32);
    bufp->fullIData(oldp+9,(vlSelfRef.clock_gen__DOT__clk2_edges),32);
    bufp->fullIData(oldp+10,(vlSelfRef.clock_gen__DOT__clk3_edges),32);
}
