// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vvirtual_sequences__Syms.h"


VL_ATTR_COLD void Vvirtual_sequences___024root__trace_init_sub__TOP__uvm_pkg__0(Vvirtual_sequences___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vvirtual_sequences___024root__trace_init_sub__TOP__0(Vvirtual_sequences___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvirtual_sequences___024root__trace_init_sub__TOP__0\n"); );
    Vvirtual_sequences__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("uvm_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vvirtual_sequences___024root__trace_init_sub__TOP__uvm_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vvirtual_sequences___024root__trace_init_sub__TOP__uvm_pkg__0(Vvirtual_sequences___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvirtual_sequences___024root__trace_init_sub__TOP__uvm_pkg__0\n"); );
    Vvirtual_sequences__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+16,0,"UVM_HDL_MAX_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+5,0,"uvm_re_match__Vstatic__e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+6,0,"uvm_re_match__Vstatic__es",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+7,0,"uvm_re_match__Vstatic__s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+8,0,"uvm_re_match__Vstatic__ss",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+17,0,"UVM_STREAMBITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"UVM_FIELD_FLAG_RESERVED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"UVM_RADIX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"UVM_RECURSION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+21,0,"UVM_MACRO_NUMFLAGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 27,0);
    tracep->declBus(c+22,0,"UVM_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 27,0);
    tracep->declBus(c+23,0,"UVM_ALL_ON",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 27,0);
    tracep->declBus(c+23,0,"UVM_FLAGS_ON",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 27,0);
    tracep->declBus(c+24,0,"UVM_FLAGS_OFF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 27,0);
    tracep->declBus(c+25,0,"UVM_COPY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 27,0);
    tracep->declBus(c+26,0,"UVM_NOCOPY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 27,0);
    tracep->declBus(c+27,0,"UVM_COMPARE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 27,0);
    tracep->declBus(c+28,0,"UVM_NOCOMPARE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 27,0);
    tracep->declBus(c+29,0,"UVM_PRINT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 27,0);
    tracep->declBus(c+30,0,"UVM_NOPRINT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 27,0);
    tracep->declBus(c+31,0,"UVM_RECORD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 27,0);
    tracep->declBus(c+32,0,"UVM_NORECORD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 27,0);
    tracep->declBus(c+33,0,"UVM_PACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 27,0);
    tracep->declBus(c+34,0,"UVM_NOPACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 27,0);
    tracep->declBus(c+35,0,"UVM_UNPACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 27,0);
    tracep->declBus(c+34,0,"UVM_NOUNPACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 27,0);
    tracep->declBus(c+36,0,"UVM_SET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 27,0);
    tracep->declBus(c+37,0,"UVM_NOSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 27,0);
    tracep->declBus(c+38,0,"UVM_NODEFPRINT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 27,0);
    tracep->declBus(c+39,0,"UVM_MACRO_EXTRAS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 27,0);
    tracep->declBus(c+40,0,"UVM_FLAGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 27,0);
    tracep->declBus(c+41,0,"UVM_CHECK_FIELDS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 27,0);
    tracep->declBus(c+42,0,"UVM_END_DATA_EXTRA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 27,0);
    tracep->declBus(c+43,0,"UVM_START_FUNCS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 27,0);
    tracep->declBus(c+44,0,"UVM_END_FUNCS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 27,0);
    tracep->declBus(c+45,0,"UVM_STDIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+46,0,"UVM_STDOUT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+47,0,"UVM_STDERR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+9,0,"m_uvm_core_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+48,0,"UVM_CORE_POST_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1,0,"uvm_global_random_seed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+10,0,"uvm_instance_scope__Vstatic__c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BYTE, false,-1, 7,0);
    tracep->declBus(c+11,0,"uvm_instance_scope__Vstatic__pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+49,0,"UVM_STR_CRC_POLYNOMIAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+12,0,"uvm_oneway_hash__Vstatic__msb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+13,0,"uvm_oneway_hash__Vstatic__current_byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, false,-1, 7,0);
    tracep->declBus(c+14,0,"uvm_oneway_hash__Vstatic__crc1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBus(c+2,0,"uvm_leaf_scope__Vstatic__bracket_match",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BYTE, false,-1, 7,0);
    tracep->declBus(c+3,0,"uvm_leaf_scope__Vstatic__pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+4,0,"uvm_leaf_scope__Vstatic__bmatches",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+50,0,"uvm_get_array_index_int__Vstatic__i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+51,0,"uvm_get_array_index_string__Vstatic__i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+52,0,"UVM_LINE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"UVM_NUM_LINES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"UVM_SMALL_STRING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"UVM_LARGE_STRING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"uvm_wait_for_nba_region__Vstatic__next_nba",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+55,0,"UVM_UNBOUNDED_CONNECTIONS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vvirtual_sequences___024root__trace_init_top(Vvirtual_sequences___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvirtual_sequences___024root__trace_init_top\n"); );
    Vvirtual_sequences__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vvirtual_sequences___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vvirtual_sequences___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vvirtual_sequences___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vvirtual_sequences___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vvirtual_sequences___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vvirtual_sequences___024root__trace_register(Vvirtual_sequences___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvirtual_sequences___024root__trace_register\n"); );
    Vvirtual_sequences__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vvirtual_sequences___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vvirtual_sequences___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vvirtual_sequences___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vvirtual_sequences___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vvirtual_sequences___024root__trace_const_0_sub_0(Vvirtual_sequences___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vvirtual_sequences___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvirtual_sequences___024root__trace_const_0\n"); );
    // Body
    Vvirtual_sequences___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vvirtual_sequences___024root*>(voidSelf);
    Vvirtual_sequences__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vvirtual_sequences___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vvirtual_sequences___024root__trace_const_0_sub_0(Vvirtual_sequences___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvirtual_sequences___024root__trace_const_0_sub_0\n"); );
    Vvirtual_sequences__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+16,(0x00000400U),32);
    bufp->fullIData(oldp+17,(0x00001000U),32);
    bufp->fullIData(oldp+18,(0x0000001cU),32);
    bufp->fullIData(oldp+19,(0x0f000000U),32);
    bufp->fullIData(oldp+20,(0x00070000U),28);
    bufp->fullIData(oldp+21,(0x00000013U),28);
    bufp->fullIData(oldp+22,(0x00000555U),28);
    bufp->fullIData(oldp+23,(0x00000155U),28);
    bufp->fullIData(oldp+24,(0U),28);
    bufp->fullIData(oldp+25,(1U),28);
    bufp->fullIData(oldp+26,(2U),28);
    bufp->fullIData(oldp+27,(4U),28);
    bufp->fullIData(oldp+28,(8U),28);
    bufp->fullIData(oldp+29,(0x00000010U),28);
    bufp->fullIData(oldp+30,(0x00000020U),28);
    bufp->fullIData(oldp+31,(0x00000040U),28);
    bufp->fullIData(oldp+32,(0x00000080U),28);
    bufp->fullIData(oldp+33,(0x00000100U),28);
    bufp->fullIData(oldp+34,(0x00000200U),28);
    bufp->fullIData(oldp+35,(0x00000400U),28);
    bufp->fullIData(oldp+36,(0x00000800U),28);
    bufp->fullIData(oldp+37,(0x00001000U),28);
    bufp->fullIData(oldp+38,(0x00008000U),28);
    bufp->fullIData(oldp+39,(0x00080000U),28);
    bufp->fullIData(oldp+40,(0x00080001U),28);
    bufp->fullIData(oldp+41,(0x00080002U),28);
    bufp->fullIData(oldp+42,(0x00080003U),28);
    bufp->fullIData(oldp+43,(0x00080004U),28);
    bufp->fullIData(oldp+44,(0x00080005U),28);
    bufp->fullIData(oldp+45,(0x80000000U),32);
    bufp->fullIData(oldp+46,(0x80000001U),32);
    bufp->fullIData(oldp+47,(0x80000002U),32);
    bufp->fullIData(oldp+48,(3U),32);
    bufp->fullIData(oldp+49,(0x04c11db6U),32);
    bufp->fullIData(oldp+50,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_get_array_index_int__Vstatic__i),32);
    bufp->fullIData(oldp+51,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_get_array_index_string__Vstatic__i),32);
    bufp->fullIData(oldp+52,(0x00000078U),32);
    bufp->fullIData(oldp+53,(0x000003bfU),32);
    bufp->fullIData(oldp+54,(0x0001c1ffU),32);
    bufp->fullIData(oldp+55,(0xffffffffU),32);
}

VL_ATTR_COLD void Vvirtual_sequences___024root__trace_full_0_sub_0(Vvirtual_sequences___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vvirtual_sequences___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvirtual_sequences___024root__trace_full_0\n"); );
    // Body
    Vvirtual_sequences___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vvirtual_sequences___024root*>(voidSelf);
    Vvirtual_sequences__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vvirtual_sequences___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vvirtual_sequences___024root__trace_full_0_sub_0(Vvirtual_sequences___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvirtual_sequences___024root__trace_full_0_sub_0\n"); );
    Vvirtual_sequences__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+1,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_global_random_seed),32);
    bufp->fullCData(oldp+2,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match),8);
    bufp->fullIData(oldp+3,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos),32);
    bufp->fullIData(oldp+4,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bmatches),32);
    bufp->fullIData(oldp+5,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e),32);
    bufp->fullIData(oldp+6,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es),32);
    bufp->fullIData(oldp+7,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s),32);
    bufp->fullIData(oldp+8,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss),32);
    bufp->fullIData(oldp+9,(vlSymsp->TOP__uvm_pkg.__PVT__m_uvm_core_state),32);
    bufp->fullCData(oldp+10,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__c),8);
    bufp->fullIData(oldp+11,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos),32);
    bufp->fullBit(oldp+12,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb));
    bufp->fullCData(oldp+13,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte),8);
    bufp->fullIData(oldp+14,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1),32);
    bufp->fullIData(oldp+15,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba),32);
}
