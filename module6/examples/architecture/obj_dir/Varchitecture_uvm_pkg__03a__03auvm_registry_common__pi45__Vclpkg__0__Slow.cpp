// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varchitecture.h for the primary calling header

#include "Varchitecture__pch.h"

VL_ATTR_COLD void Varchitecture_uvm_pkg__03a__03auvm_registry_common__pi45__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_registry_common__pi45__Vclpkg(Varchitecture_uvm_pkg__03a__03auvm_registry_common__pi45__Vclpkg* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Varchitecture_uvm_pkg__03a__03auvm_registry_common__pi45__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_registry_common__pi45__Vclpkg\n"); );
    Varchitecture__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc____05Fdeferred_init__25__Vfuncout;
    __Vfunc____05Fdeferred_init__25__Vfuncout = 0;
    // Body
    vlSelfRef.__VnoInFunc____05Fdeferred_init(vlProcess, vlSymsp, __Vfunc____05Fdeferred_init__25__Vfuncout);
    vlSelfRef.__PVT__m___05Finitialized = __Vfunc____05Fdeferred_init__25__Vfuncout;
}

VL_ATTR_COLD void Varchitecture_uvm_pkg__03a__03auvm_registry_common__pi45__Vclpkg___ctor_var_reset(Varchitecture_uvm_pkg__03a__03auvm_registry_common__pi45__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Varchitecture_uvm_pkg__03a__03auvm_registry_common__pi45__Vclpkg___ctor_var_reset\n"); );
    Varchitecture__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__m___05Finitialized = 0;
}
