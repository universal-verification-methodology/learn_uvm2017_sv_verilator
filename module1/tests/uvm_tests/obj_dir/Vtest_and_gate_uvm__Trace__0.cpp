// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtest_and_gate_uvm__Syms.h"


void Vtest_and_gate_uvm___024root__trace_chg_0_sub_0(Vtest_and_gate_uvm___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtest_and_gate_uvm___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_and_gate_uvm___024root__trace_chg_0\n"); );
    // Body
    Vtest_and_gate_uvm___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_and_gate_uvm___024root*>(voidSelf);
    Vtest_and_gate_uvm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtest_and_gate_uvm___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtest_and_gate_uvm___024root__trace_chg_0_sub_0(Vtest_and_gate_uvm___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_and_gate_uvm___024root__trace_chg_0_sub_0\n"); );
    Vtest_and_gate_uvm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgIData(oldp+0,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_global_random_seed),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgCData(oldp+1,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match),8);
        bufp->chgIData(oldp+2,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos),32);
        bufp->chgIData(oldp+3,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bmatches),32);
    }
    bufp->chgBit(oldp+4,(vlSelfRef.test_and_gate_uvm__DOT__clk));
    bufp->chgIData(oldp+5,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e),32);
    bufp->chgIData(oldp+6,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es),32);
    bufp->chgIData(oldp+7,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s),32);
    bufp->chgIData(oldp+8,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss),32);
    bufp->chgIData(oldp+9,(vlSymsp->TOP__uvm_pkg.__PVT__m_uvm_core_state),32);
    bufp->chgCData(oldp+10,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__c),8);
    bufp->chgIData(oldp+11,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos),32);
    bufp->chgBit(oldp+12,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb));
    bufp->chgCData(oldp+13,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte),8);
    bufp->chgIData(oldp+14,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1),32);
    bufp->chgIData(oldp+15,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba),32);
    bufp->chgBit(oldp+16,(vlSymsp->TOP__test_and_gate_uvm__DOT__bus.clk));
    bufp->chgBit(oldp+17,(vlSymsp->TOP__test_and_gate_uvm__DOT__bus.y));
}

void Vtest_and_gate_uvm___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_and_gate_uvm___024root__trace_cleanup\n"); );
    // Body
    Vtest_and_gate_uvm___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_and_gate_uvm___024root*>(voidSelf);
    Vtest_and_gate_uvm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
