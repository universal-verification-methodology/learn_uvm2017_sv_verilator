// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"

void Vdma___024unit__03a__03aDmaDriver__Vclpkg::__VnoInFunc_get_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_component_registry__pi62> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma___024unit__03a__03aDmaDriver__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_component_registry__pi62> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi62__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vdma___024unit__03a__03aDmaDriver__Vclpkg::__VnoInFunc_type_name(Vdma__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma___024unit__03a__03aDmaDriver__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "DmaDriver"s;
}

void Vdma___024unit__03a__03aDmaDriver::__VnoInFunc_get_object_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vdma___024unit__03a__03aDmaDriver::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_component_registry__pi62> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi62__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vdma___024unit__03a__03aDmaDriver::__VnoInFunc_get_type_name(Vdma__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vdma___024unit__03a__03aDmaDriver::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "DmaDriver"s;
}

Vdma___024unit__03a__03aDmaDriver::Vdma___024unit__03a__03aDmaDriver(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string n, VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> p)
    : Vdma_uvm_pkg__03a__03auvm_driver__Tz126_TBz126(vlProcess, vlSymsp, n, p) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vdma___024unit__03a__03aDmaDriver::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vdma___024unit__03a__03aDmaDriver::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vdma___024unit__03a__03aDmaDriver::__VnoInFunc_build_phase\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_get__3__Vfuncout;
    __Vfunc_get__3__Vfuncout = 0;
    Vdma_dma_if* __Vfunc_get__3__value;
    __Vfunc_get__3__value = nullptr;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__4__Vfuncout;
    __Vfunc_uvm_report_enabled__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__4__verbosity;
    __Vfunc_uvm_report_enabled__4__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__4__severity;
    __Vfunc_uvm_report_enabled__4__severity = 0;
    std::string __Vfunc_uvm_report_enabled__4__id;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__5__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__6__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__7__Vfuncout;
    __Vtask_uvm_report_enabled__7__Vfuncout = 0;
    // Body
    Vdma_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    if ((1U & (~ ([&]() {
                        __Vfunc_get__3__value = this->__PVT__vif;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz1__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vdma___024unit__03a__03aDmaDriver>{this}, ""s, "vif"s, __Vfunc_get__3__value, __Vfunc_get__3__Vfuncout);
                        this->__PVT__vif = __Vfunc_get__3__value;
                    }(), (IData)(__Vfunc_get__3__Vfuncout))))) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__4__id = "NO_VIF"s;
                        __Vfunc_uvm_report_enabled__4__severity = 3U;
                        __Vfunc_uvm_report_enabled__4__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__5__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__5__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__6__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__6__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__4__verbosity, (IData)(__Vfunc_uvm_report_enabled__4__severity), __Vfunc_uvm_report_enabled__4__id, __Vtask_uvm_report_enabled__7__Vfuncout);
                        __Vfunc_uvm_report_enabled__4__Vfuncout 
                            = __Vtask_uvm_report_enabled__7__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__4__Vfuncout))) {
            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "NO_VIF"s, "dma_if not set"s, 0U, "dma.sv"s, 0x0000002fU, ""s, 1U);
        }
    }
}

VlCoroutine Vdma___024unit__03a__03aDmaDriver::__VnoInFunc_run_phase(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vdma___024unit__03a__03aDmaDriver::__VnoInFunc_run_phase\n"); );
    // Locals
    VlClassRef<Vdma___024unit__03a__03aDmaTxn> __Vtask_get_next_item__9__t;
    // Body
    VL_KEEP_THIS;
    VlClassRef<Vdma___024unit__03a__03aDmaTxn> t;
    vlSymsp->TOP.__VnbaEventTrigger = 1U;
    this->__VnoInFunc_run_phase____Vfork_1__0(vlSymsp, 0U);
    vlSymsp->TOP.__VvifTrigger_hd309e00d__2_Vtrigm_dma_start = 1U;
    while (true) {
        co_await VL_NULL_CHECK(Vdma_uvm_pkg__03a__03auvm_driver__Tz126_TBz126::__PVT__seq_item_port, "dma.sv", 53)->__VnoInFunc_get_next_item(vlProcess, vlSymsp, __Vtask_get_next_item__9__t);
        t = __Vtask_get_next_item__9__t;
        CData/*0:0*/ __VdynTrigger_h1d65dc0f__0;
        __VdynTrigger_h1d65dc0f__0 = 0;
        __VdynTrigger_h1d65dc0f__0 = 0U;
        this->__Vtrigprevexpr_h27194be2__0 = VL_NULL_CHECK(this->__PVT__vif, "dma.sv", 54)
            ->clk;
        while ((1U & (~ (IData)(__VdynTrigger_h1d65dc0f__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::DmaDriver.vif.clk)", 
                                                         "dma.sv", 
                                                         54);
            __VdynTrigger_h1d65dc0f__0 = (VL_NULL_CHECK(this->__PVT__vif, "dma.sv", 54)
                                          ->clk & (~ (IData)(this->__Vtrigprevexpr_h27194be2__0)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h1d65dc0f__0);
            this->__Vtrigprevexpr_h27194be2__0 = VL_NULL_CHECK(this->__PVT__vif, "dma.sv", 54)
                ->clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::DmaDriver.vif.clk)", 
                                                     "dma.sv", 
                                                     54);
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        IData/*31:0*/ __Vintraval_hc9f1fa1e__0;
        __Vintraval_hc9f1fa1e__0 = 0;
        __Vintraval_hc9f1fa1e__0 = VL_NULL_CHECK(t, "dma.sv", 55)
            ->__PVT__src;
        this->__VnoInFunc_run_phase____Vfork_2__0(vlSymsp, __Vintraval_hc9f1fa1e__0);
        vlSymsp->TOP.__VvifTrigger_hd309e00d__3_Vtrigm_dma_src_addr = 1U;
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        IData/*31:0*/ __Vintraval_h2b829b73__0;
        __Vintraval_h2b829b73__0 = 0;
        __Vintraval_h2b829b73__0 = VL_NULL_CHECK(t, "dma.sv", 56)
            ->__PVT__dst;
        this->__VnoInFunc_run_phase____Vfork_3__0(vlSymsp, __Vintraval_h2b829b73__0);
        vlSymsp->TOP.__VvifTrigger_hd309e00d__4_Vtrigm_dma_dst_addr = 1U;
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        SData/*15:0*/ __Vintraval_hc1c8c667__0;
        __Vintraval_hc1c8c667__0 = 0;
        __Vintraval_hc1c8c667__0 = VL_NULL_CHECK(t, "dma.sv", 57)
            ->__PVT__len;
        this->__VnoInFunc_run_phase____Vfork_4__0(vlSymsp, __Vintraval_hc1c8c667__0);
        vlSymsp->TOP.__VvifTrigger_hd309e00d__5_Vtrigm_dma_length = 1U;
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        CData/*2:0*/ __Vintraval_h0e859cd4__0;
        __Vintraval_h0e859cd4__0 = 0;
        __Vintraval_h0e859cd4__0 = VL_NULL_CHECK(t, "dma.sv", 58)
            ->__PVT__ch;
        this->__VnoInFunc_run_phase____Vfork_5__0(vlSymsp, __Vintraval_h0e859cd4__0);
        vlSymsp->TOP.__VvifTrigger_hd309e00d__6_Vtrigm_dma_channel = 1U;
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        CData/*0:0*/ __Vintraval_h9084ff9a__0;
        __Vintraval_h9084ff9a__0 = 0;
        __Vintraval_h9084ff9a__0 = 1U;
        this->__VnoInFunc_run_phase____Vfork_6__0(vlSymsp, __Vintraval_h9084ff9a__0);
        vlSymsp->TOP.__VvifTrigger_hd309e00d__2_Vtrigm_dma_start = 1U;
        CData/*0:0*/ __VdynTrigger_h1d65dc0f__1;
        __VdynTrigger_h1d65dc0f__1 = 0;
        __VdynTrigger_h1d65dc0f__1 = 0U;
        this->__Vtrigprevexpr_h27194be2__1 = VL_NULL_CHECK(this->__PVT__vif, "dma.sv", 60)
            ->clk;
        while ((1U & (~ (IData)(__VdynTrigger_h1d65dc0f__1)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::DmaDriver.vif.clk)", 
                                                         "dma.sv", 
                                                         60);
            __VdynTrigger_h1d65dc0f__1 = (VL_NULL_CHECK(this->__PVT__vif, "dma.sv", 60)
                                          ->clk & (~ (IData)(this->__Vtrigprevexpr_h27194be2__1)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h1d65dc0f__1);
            this->__Vtrigprevexpr_h27194be2__1 = VL_NULL_CHECK(this->__PVT__vif, "dma.sv", 60)
                ->clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::DmaDriver.vif.clk)", 
                                                     "dma.sv", 
                                                     60);
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        CData/*0:0*/ __Vintraval_h9084ef4e__1;
        __Vintraval_h9084ef4e__1 = 0;
        __Vintraval_h9084ef4e__1 = 0U;
        this->__VnoInFunc_run_phase____Vfork_7__0(vlSymsp, __Vintraval_h9084ef4e__1);
        vlSymsp->TOP.__VvifTrigger_hd309e00d__2_Vtrigm_dma_start = 1U;
        do {
            CData/*0:0*/ __VdynTrigger_h1d65dc0f__2;
            __VdynTrigger_h1d65dc0f__2 = 0;
            __VdynTrigger_h1d65dc0f__2 = 0U;
            this->__Vtrigprevexpr_h27194be2__2 = VL_NULL_CHECK(this->__PVT__vif, "dma.sv", 63)
                ->clk;
            while ((1U & (~ (IData)(__VdynTrigger_h1d65dc0f__2)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             vlProcess, 
                                                             "@(posedge $unit::DmaDriver.vif.clk)", 
                                                             "dma.sv", 
                                                             63);
                __VdynTrigger_h1d65dc0f__2 = (VL_NULL_CHECK(this->__PVT__vif, "dma.sv", 63)
                                              ->clk 
                                              & (~ (IData)(this->__Vtrigprevexpr_h27194be2__2)));
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h1d65dc0f__2);
                this->__Vtrigprevexpr_h27194be2__2 
                    = VL_NULL_CHECK(this->__PVT__vif, "dma.sv", 63)
                    ->clk;
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         vlProcess, 
                                                         "@(posedge $unit::DmaDriver.vif.clk)", 
                                                         "dma.sv", 
                                                         63);
        } while ((1U & (~ VL_NULL_CHECK(this->__PVT__vif, "dma.sv", 63)
                        ->dma_done)));
        VL_NULL_CHECK(Vdma_uvm_pkg__03a__03auvm_driver__Tz126_TBz126::__PVT__seq_item_port, "dma.sv", 64)->__VnoInFunc_item_done(vlProcess, vlSymsp, VlNull{});
    }
    co_return;
}

VlCoroutine Vdma___024unit__03a__03aDmaDriver::__VnoInFunc_run_phase____Vfork_7__0(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h9084ef4e__1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vdma___024unit__03a__03aDmaDriver::__VnoInFunc_run_phase____Vfork_7__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h362143b5__6;
    __VdynTrigger_h362143b5__6 = 0;
    __VdynTrigger_h362143b5__6 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h362143b5__6)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "dma.sv", 
                                                     61);
        __VdynTrigger_h362143b5__6 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h362143b5__6);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "dma.sv", 
                                                     61);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "dma.sv", 
                                                 61);
    VL_NULL_CHECK(this->__PVT__vif, "dma.sv", 61)->dma_start 
        = __Vintraval_h9084ef4e__1;
}

VlCoroutine Vdma___024unit__03a__03aDmaDriver::__VnoInFunc_run_phase____Vfork_6__0(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h9084ff9a__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vdma___024unit__03a__03aDmaDriver::__VnoInFunc_run_phase____Vfork_6__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h362143b5__5;
    __VdynTrigger_h362143b5__5 = 0;
    __VdynTrigger_h362143b5__5 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h362143b5__5)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "dma.sv", 
                                                     59);
        __VdynTrigger_h362143b5__5 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h362143b5__5);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "dma.sv", 
                                                     59);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "dma.sv", 
                                                 59);
    VL_NULL_CHECK(this->__PVT__vif, "dma.sv", 59)->dma_start 
        = __Vintraval_h9084ff9a__0;
}

VlCoroutine Vdma___024unit__03a__03aDmaDriver::__VnoInFunc_run_phase____Vfork_5__0(Vdma__Syms* __restrict vlSymsp, CData/*2:0*/ __Vintraval_h0e859cd4__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vdma___024unit__03a__03aDmaDriver::__VnoInFunc_run_phase____Vfork_5__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h362143b5__4;
    __VdynTrigger_h362143b5__4 = 0;
    __VdynTrigger_h362143b5__4 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h362143b5__4)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "dma.sv", 
                                                     58);
        __VdynTrigger_h362143b5__4 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h362143b5__4);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "dma.sv", 
                                                     58);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "dma.sv", 
                                                 58);
    VL_NULL_CHECK(this->__PVT__vif, "dma.sv", 58)->dma_channel 
        = __Vintraval_h0e859cd4__0;
}

VlCoroutine Vdma___024unit__03a__03aDmaDriver::__VnoInFunc_run_phase____Vfork_4__0(Vdma__Syms* __restrict vlSymsp, SData/*15:0*/ __Vintraval_hc1c8c667__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vdma___024unit__03a__03aDmaDriver::__VnoInFunc_run_phase____Vfork_4__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h362143b5__3;
    __VdynTrigger_h362143b5__3 = 0;
    __VdynTrigger_h362143b5__3 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h362143b5__3)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "dma.sv", 
                                                     57);
        __VdynTrigger_h362143b5__3 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h362143b5__3);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "dma.sv", 
                                                     57);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "dma.sv", 
                                                 57);
    VL_NULL_CHECK(this->__PVT__vif, "dma.sv", 57)->dma_length 
        = __Vintraval_hc1c8c667__0;
}

VlCoroutine Vdma___024unit__03a__03aDmaDriver::__VnoInFunc_run_phase____Vfork_3__0(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_h2b829b73__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vdma___024unit__03a__03aDmaDriver::__VnoInFunc_run_phase____Vfork_3__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h362143b5__2;
    __VdynTrigger_h362143b5__2 = 0;
    __VdynTrigger_h362143b5__2 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h362143b5__2)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "dma.sv", 
                                                     56);
        __VdynTrigger_h362143b5__2 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h362143b5__2);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "dma.sv", 
                                                     56);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "dma.sv", 
                                                 56);
    VL_NULL_CHECK(this->__PVT__vif, "dma.sv", 56)->dma_dst_addr 
        = __Vintraval_h2b829b73__0;
}

VlCoroutine Vdma___024unit__03a__03aDmaDriver::__VnoInFunc_run_phase____Vfork_2__0(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_hc9f1fa1e__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vdma___024unit__03a__03aDmaDriver::__VnoInFunc_run_phase____Vfork_2__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h362143b5__1;
    __VdynTrigger_h362143b5__1 = 0;
    __VdynTrigger_h362143b5__1 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h362143b5__1)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "dma.sv", 
                                                     55);
        __VdynTrigger_h362143b5__1 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h362143b5__1);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "dma.sv", 
                                                     55);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "dma.sv", 
                                                 55);
    VL_NULL_CHECK(this->__PVT__vif, "dma.sv", 55)->dma_src_addr 
        = __Vintraval_hc9f1fa1e__0;
}

VlCoroutine Vdma___024unit__03a__03aDmaDriver::__VnoInFunc_run_phase____Vfork_1__0(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h9084ef4e__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vdma___024unit__03a__03aDmaDriver::__VnoInFunc_run_phase____Vfork_1__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h362143b5__0;
    __VdynTrigger_h362143b5__0 = 0;
    __VdynTrigger_h362143b5__0 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h362143b5__0)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "dma.sv", 
                                                     51);
        __VdynTrigger_h362143b5__0 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h362143b5__0);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "dma.sv", 
                                                     51);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "dma.sv", 
                                                 51);
    VL_NULL_CHECK(this->__PVT__vif, "dma.sv", 51)->dma_start 
        = __Vintraval_h9084ef4e__0;
}

void Vdma___024unit__03a__03aDmaDriver::__VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vdma___024unit__03a__03aDmaDriver::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__12__Vfuncout;
    __Vfunc___Vbasic_randomize__12__Vfuncout = 0;
    // Body
    Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__12__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__12__Vfuncout));
}

void Vdma___024unit__03a__03aDmaDriver::__VnoInFunc___Vbasic_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vdma___024unit__03a__03aDmaDriver::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vdma___024unit__03a__03aDmaDriver::_ctor_var_reset(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vdma___024unit__03a__03aDmaDriver::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__vif = nullptr;
    __Vtrigprevexpr_h27194be2__0 = VL_SCOPED_RAND_RESET_I(1, 4990591076665587348ULL, 16504278236823394090ull);
    __Vtrigprevexpr_h27194be2__1 = VL_SCOPED_RAND_RESET_I(1, 4990591076665587348ULL, 6430937668963958873ull);
    __Vtrigprevexpr_h27194be2__2 = VL_SCOPED_RAND_RESET_I(1, 4990591076665587348ULL, 145218210376982696ull);
}

std::string VL_TO_STRING(const VlClassRef<Vdma___024unit__03a__03aDmaDriver>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vdma___024unit__03a__03aDmaDriver::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vdma___024unit__03a__03aDmaDriver::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vdma___024unit__03a__03aDmaDriver::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vdma___024unit__03a__03aDmaDriver::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vdma___024unit__03a__03aDmaDriver::to_string_middle\n"); );
    // Body
    std::string out;
    out += "vif:" + VL_TO_STRING(__PVT__vif);
    out += ", "+ Vdma_uvm_pkg__03a__03auvm_driver__Tz126_TBz126::to_string_middle();
    return (out);
}
