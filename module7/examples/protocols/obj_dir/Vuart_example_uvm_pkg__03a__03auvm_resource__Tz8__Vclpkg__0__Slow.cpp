// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_example.h for the primary calling header

#include "Vuart_example__pch.h"

VL_ATTR_COLD void Vuart_example_uvm_pkg__03a__03auvm_resource__Tz8__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_resource__Tz8__Vclpkg(Vuart_example_uvm_pkg__03a__03auvm_resource__Tz8__Vclpkg* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03auvm_resource__Tz8__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_resource__Tz8__Vclpkg\n"); );
    Vuart_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_resource__Tz8> __Vfunc_get_type__0__Vfuncout;
    // Body
    vlSelfRef.__VnoInFunc_get_type(vlProcess, vlSymsp, __Vfunc_get_type__0__Vfuncout);
    vlSelfRef.__PVT__my_type = __Vfunc_get_type__0__Vfuncout;
}

VL_ATTR_COLD void Vuart_example_uvm_pkg__03a__03auvm_resource__Tz8__Vclpkg___ctor_var_reset(Vuart_example_uvm_pkg__03a__03auvm_resource__Tz8__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03auvm_resource__Tz8__Vclpkg___ctor_var_reset\n"); );
    Vuart_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
}
