// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclass_hierarchy.h for the primary calling header

#include "Vclass_hierarchy__pch.h"

VL_ATTR_COLD void Vclass_hierarchy_uvm_pkg__03a__03auvm_registry_common__pi187__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_registry_common__pi187__Vclpkg(Vclass_hierarchy_uvm_pkg__03a__03auvm_registry_common__pi187__Vclpkg* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vclass_hierarchy_uvm_pkg__03a__03auvm_registry_common__pi187__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_registry_common__pi187__Vclpkg\n"); );
    Vclass_hierarchy__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc____05Fdeferred_init__25__Vfuncout;
    __Vfunc____05Fdeferred_init__25__Vfuncout = 0;
    // Body
    vlSelfRef.__VnoInFunc____05Fdeferred_init(vlProcess, vlSymsp, __Vfunc____05Fdeferred_init__25__Vfuncout);
    vlSelfRef.__PVT__m___05Finitialized = __Vfunc____05Fdeferred_init__25__Vfuncout;
}

VL_ATTR_COLD void Vclass_hierarchy_uvm_pkg__03a__03auvm_registry_common__pi187__Vclpkg___ctor_var_reset(Vclass_hierarchy_uvm_pkg__03a__03auvm_registry_common__pi187__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vclass_hierarchy_uvm_pkg__03a__03auvm_registry_common__pi187__Vclpkg___ctor_var_reset\n"); );
    Vclass_hierarchy__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__m___05Finitialized = 0;
}
