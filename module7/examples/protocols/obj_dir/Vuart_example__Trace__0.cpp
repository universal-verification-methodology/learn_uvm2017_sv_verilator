// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vuart_example__Syms.h"


void Vuart_example___024root__trace_chg_0_sub_0(Vuart_example___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vuart_example___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_example___024root__trace_chg_0\n"); );
    // Body
    Vuart_example___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vuart_example___024root*>(voidSelf);
    Vuart_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vuart_example___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vuart_example___024root__trace_chg_0_sub_0(Vuart_example___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_example___024root__trace_chg_0_sub_0\n"); );
    Vuart_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgIData(oldp+0,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_global_random_seed),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+1,(vlSelfRef.uart_example__DOT____Vcellout__dut__tx));
        bufp->chgBit(oldp+2,(vlSelfRef.uart_example__DOT____Vcellout__dut__tx_busy));
        bufp->chgCData(oldp+3,(vlSelfRef.uart_example__DOT____Vcellout__dut__rx_data),8);
        bufp->chgBit(oldp+4,(vlSelfRef.uart_example__DOT____Vcellout__dut__rx_ready));
        bufp->chgCData(oldp+5,(vlSelfRef.uart_example__DOT__dut__DOT__tx_state),4);
        bufp->chgCData(oldp+6,(vlSelfRef.uart_example__DOT__dut__DOT__tx_shift),8);
        bufp->chgCData(oldp+7,(vlSelfRef.uart_example__DOT__dut__DOT__tx_bit_count),4);
        bufp->chgCData(oldp+8,(vlSelfRef.uart_example__DOT__dut__DOT__rx_state),4);
        bufp->chgCData(oldp+9,(vlSelfRef.uart_example__DOT__dut__DOT__rx_shift),8);
        bufp->chgCData(oldp+10,(vlSelfRef.uart_example__DOT__dut__DOT__rx_bit_count),4);
        bufp->chgBit(oldp+11,(vlSymsp->TOP__uart_example__DOT__vif.tx_busy));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+12,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match),8);
        bufp->chgIData(oldp+13,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos),32);
        bufp->chgIData(oldp+14,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bmatches),32);
    }
    bufp->chgBit(oldp+15,(vlSelfRef.uart_example__DOT__clk));
    bufp->chgBit(oldp+16,(vlSymsp->TOP__uart_example__DOT__vif.rst_n));
    bufp->chgCData(oldp+17,(vlSymsp->TOP__uart_example__DOT__vif.tx_data),8);
    bufp->chgBit(oldp+18,(vlSymsp->TOP__uart_example__DOT__vif.tx_start));
    bufp->chgIData(oldp+19,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e),32);
    bufp->chgIData(oldp+20,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es),32);
    bufp->chgIData(oldp+21,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s),32);
    bufp->chgIData(oldp+22,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss),32);
    bufp->chgIData(oldp+23,(vlSymsp->TOP__uvm_pkg.__PVT__m_uvm_core_state),32);
    bufp->chgCData(oldp+24,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__c),8);
    bufp->chgIData(oldp+25,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos),32);
    bufp->chgBit(oldp+26,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb));
    bufp->chgCData(oldp+27,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte),8);
    bufp->chgIData(oldp+28,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1),32);
    bufp->chgIData(oldp+29,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba),32);
    bufp->chgBit(oldp+30,(vlSymsp->TOP__uart_example__DOT__vif.clk));
}

void Vuart_example___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_example___024root__trace_cleanup\n"); );
    // Body
    Vuart_example___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vuart_example___024root*>(voidSelf);
    Vuart_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
