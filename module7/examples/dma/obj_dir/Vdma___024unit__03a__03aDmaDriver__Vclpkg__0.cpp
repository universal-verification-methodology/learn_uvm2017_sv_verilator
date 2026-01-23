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
    // Body
    Vdma_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    if ((1U & (~ ([&]() {
                        __Vfunc_get__3__value = this->__PVT__vif;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz1__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vdma___024unit__03a__03aDmaDriver>{this}, ""s, "vif"s, __Vfunc_get__3__value, __Vfunc_get__3__Vfuncout);
                        this->__PVT__vif = __Vfunc_get__3__value;
                    }(), (IData)(__Vfunc_get__3__Vfuncout))))) {
        if ((0U != ([&]() {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 3U, "NO_VIF"s, __Vfunc_uvm_report_enabled__4__Vfuncout);
                    }(), __Vfunc_uvm_report_enabled__4__Vfuncout))) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "NO_VIF"s, "dma_if not set"s, 0U, "dma.sv"s, 0x00000031U, ""s, 1U);
        }
    }
}

VlCoroutine Vdma___024unit__03a__03aDmaDriver::__VnoInFunc_run_phase(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vdma___024unit__03a__03aDmaDriver::__VnoInFunc_run_phase\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h46eedeee__2;
    __Vtrigprevexpr_h46eedeee__2 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h46eedeee__1;
    __Vtrigprevexpr_h46eedeee__1 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h46eedeee__0;
    __Vtrigprevexpr_h46eedeee__0 = 0;
    VlClassRef<Vdma___024unit__03a__03aDmaTxn> __Vtask_get_next_item__6__t;
    // Body
    VL_KEEP_THIS;
    VlClassRef<Vdma___024unit__03a__03aDmaTxn> t;
    vlSymsp->TOP.__VnbaEventTrigger = 1U;
    this->__VnoInFunc_run_phase____Vfork_1__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, 0U);
    while (true) {
        co_await VL_NULL_CHECK(Vdma_uvm_pkg__03a__03auvm_driver__Tz126_TBz126::__PVT__seq_item_port, "dma.sv", 55)->__VnoInFunc_get_next_item(vlProcess, vlSymsp, __Vtask_get_next_item__6__t);
        t = __Vtask_get_next_item__6__t;
        CData/*0:0*/ __VdynTrigger_h3d108da5__0;
        __VdynTrigger_h3d108da5__0 = 0;
        __VdynTrigger_h3d108da5__0 = 0U;
        __Vtrigprevexpr_h46eedeee__0 = VL_NULL_CHECK(this->__PVT__vif, "dma.sv", 56)
            ->clk;
        while ((1U & (~ (IData)(__VdynTrigger_h3d108da5__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::DmaDriver.vif.clk)", 
                                                         "dma.sv", 
                                                         56);
            __VdynTrigger_h3d108da5__0 = (VL_NULL_CHECK(this->__PVT__vif, "dma.sv", 56)
                                          ->clk & (~ (IData)(__Vtrigprevexpr_h46eedeee__0)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h3d108da5__0);
            __Vtrigprevexpr_h46eedeee__0 = VL_NULL_CHECK(this->__PVT__vif, "dma.sv", 56)
                ->clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::DmaDriver.vif.clk)", 
                                                     "dma.sv", 
                                                     56);
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        IData/*31:0*/ __Vintraval_h0550e6d9__0;
        __Vintraval_h0550e6d9__0 = 0;
        __Vintraval_h0550e6d9__0 = VL_NULL_CHECK(t, "dma.sv", 57)
            ->__PVT__src;
        this->__VnoInFunc_run_phase____Vfork_2__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vintraval_h0550e6d9__0);
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        IData/*31:0*/ __Vintraval_hcc568d24__0;
        __Vintraval_hcc568d24__0 = 0;
        __Vintraval_hcc568d24__0 = VL_NULL_CHECK(t, "dma.sv", 58)
            ->__PVT__dst;
        this->__VnoInFunc_run_phase____Vfork_3__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vintraval_hcc568d24__0);
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        SData/*15:0*/ __Vintraval_h155e7255__0;
        __Vintraval_h155e7255__0 = 0;
        __Vintraval_h155e7255__0 = VL_NULL_CHECK(t, "dma.sv", 59)
            ->__PVT__len;
        this->__VnoInFunc_run_phase____Vfork_4__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vintraval_h155e7255__0);
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        CData/*2:0*/ __Vintraval_h528845cf__0;
        __Vintraval_h528845cf__0 = 0;
        __Vintraval_h528845cf__0 = VL_NULL_CHECK(t, "dma.sv", 60)
            ->__PVT__ch;
        this->__VnoInFunc_run_phase____Vfork_5__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vintraval_h528845cf__0);
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        CData/*0:0*/ __Vintraval_h6206b0a0__0;
        __Vintraval_h6206b0a0__0 = 0;
        __Vintraval_h6206b0a0__0 = 1U;
        this->__VnoInFunc_run_phase____Vfork_6__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vintraval_h6206b0a0__0);
        CData/*0:0*/ __VdynTrigger_h3d108da5__1;
        __VdynTrigger_h3d108da5__1 = 0;
        __VdynTrigger_h3d108da5__1 = 0U;
        __Vtrigprevexpr_h46eedeee__1 = VL_NULL_CHECK(this->__PVT__vif, "dma.sv", 62)
            ->clk;
        while ((1U & (~ (IData)(__VdynTrigger_h3d108da5__1)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::DmaDriver.vif.clk)", 
                                                         "dma.sv", 
                                                         62);
            __VdynTrigger_h3d108da5__1 = (VL_NULL_CHECK(this->__PVT__vif, "dma.sv", 62)
                                          ->clk & (~ (IData)(__Vtrigprevexpr_h46eedeee__1)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h3d108da5__1);
            __Vtrigprevexpr_h46eedeee__1 = VL_NULL_CHECK(this->__PVT__vif, "dma.sv", 62)
                ->clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::DmaDriver.vif.clk)", 
                                                     "dma.sv", 
                                                     62);
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        CData/*0:0*/ __Vintraval_h62083daf__1;
        __Vintraval_h62083daf__1 = 0;
        __Vintraval_h62083daf__1 = 0U;
        this->__VnoInFunc_run_phase____Vfork_7__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vintraval_h62083daf__1);
        do {
            CData/*0:0*/ __VdynTrigger_h3d108da5__2;
            __VdynTrigger_h3d108da5__2 = 0;
            __VdynTrigger_h3d108da5__2 = 0U;
            __Vtrigprevexpr_h46eedeee__2 = VL_NULL_CHECK(this->__PVT__vif, "dma.sv", 65)
                ->clk;
            while ((1U & (~ (IData)(__VdynTrigger_h3d108da5__2)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             vlProcess, 
                                                             "@(posedge $unit::DmaDriver.vif.clk)", 
                                                             "dma.sv", 
                                                             65);
                __VdynTrigger_h3d108da5__2 = (VL_NULL_CHECK(this->__PVT__vif, "dma.sv", 65)
                                              ->clk 
                                              & (~ (IData)(__Vtrigprevexpr_h46eedeee__2)));
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h3d108da5__2);
                __Vtrigprevexpr_h46eedeee__2 = VL_NULL_CHECK(this->__PVT__vif, "dma.sv", 65)
                    ->clk;
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         vlProcess, 
                                                         "@(posedge $unit::DmaDriver.vif.clk)", 
                                                         "dma.sv", 
                                                         65);
        } while ((1U & (~ VL_NULL_CHECK(this->__PVT__vif, "dma.sv", 65)
                        ->dma_done)));
        VL_NULL_CHECK(Vdma_uvm_pkg__03a__03auvm_driver__Tz126_TBz126::__PVT__seq_item_port, "dma.sv", 66)->__VnoInFunc_item_done(vlProcess, vlSymsp, VlNull{});
    }
    co_return;}

VlCoroutine Vdma___024unit__03a__03aDmaDriver::__VnoInFunc_run_phase____Vfork_7__0(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h62083daf__1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vdma___024unit__03a__03aDmaDriver::__VnoInFunc_run_phase____Vfork_7__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h54bd96ae__6;
    __VdynTrigger_h54bd96ae__6 = 0;
    __VdynTrigger_h54bd96ae__6 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h54bd96ae__6)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "dma.sv", 
                                                     63);
        __VdynTrigger_h54bd96ae__6 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h54bd96ae__6);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "dma.sv", 
                                                     63);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@([event] __VnbaEvent)", 
                                                 "dma.sv", 
                                                 63);
    VL_NULL_CHECK(([&]() {
                vlSymsp->TOP.__VvifTrigger_hd309e34a__2_Vtrigm_dma_start = 1U;
            }(), this->__PVT__vif), "dma.sv", 63)->dma_start 
        = __Vintraval_h62083daf__1;
    vlProcess->state(VlProcess::FINISHED);
    co_return;}

VlCoroutine Vdma___024unit__03a__03aDmaDriver::__VnoInFunc_run_phase____Vfork_6__0(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h6206b0a0__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vdma___024unit__03a__03aDmaDriver::__VnoInFunc_run_phase____Vfork_6__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h54bd96ae__5;
    __VdynTrigger_h54bd96ae__5 = 0;
    __VdynTrigger_h54bd96ae__5 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h54bd96ae__5)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "dma.sv", 
                                                     61);
        __VdynTrigger_h54bd96ae__5 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h54bd96ae__5);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "dma.sv", 
                                                     61);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@([event] __VnbaEvent)", 
                                                 "dma.sv", 
                                                 61);
    VL_NULL_CHECK(([&]() {
                vlSymsp->TOP.__VvifTrigger_hd309e34a__2_Vtrigm_dma_start = 1U;
            }(), this->__PVT__vif), "dma.sv", 61)->dma_start 
        = __Vintraval_h6206b0a0__0;
    vlProcess->state(VlProcess::FINISHED);
    co_return;}

VlCoroutine Vdma___024unit__03a__03aDmaDriver::__VnoInFunc_run_phase____Vfork_5__0(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, CData/*2:0*/ __Vintraval_h528845cf__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vdma___024unit__03a__03aDmaDriver::__VnoInFunc_run_phase____Vfork_5__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h54bd96ae__4;
    __VdynTrigger_h54bd96ae__4 = 0;
    __VdynTrigger_h54bd96ae__4 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h54bd96ae__4)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "dma.sv", 
                                                     60);
        __VdynTrigger_h54bd96ae__4 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h54bd96ae__4);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "dma.sv", 
                                                     60);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@([event] __VnbaEvent)", 
                                                 "dma.sv", 
                                                 60);
    VL_NULL_CHECK(([&]() {
                vlSymsp->TOP.__VvifTrigger_hd309e34a__6_Vtrigm_dma_channel = 1U;
            }(), this->__PVT__vif), "dma.sv", 60)->dma_channel 
        = __Vintraval_h528845cf__0;
    vlProcess->state(VlProcess::FINISHED);
    co_return;}

VlCoroutine Vdma___024unit__03a__03aDmaDriver::__VnoInFunc_run_phase____Vfork_4__0(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, SData/*15:0*/ __Vintraval_h155e7255__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vdma___024unit__03a__03aDmaDriver::__VnoInFunc_run_phase____Vfork_4__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h54bd96ae__3;
    __VdynTrigger_h54bd96ae__3 = 0;
    __VdynTrigger_h54bd96ae__3 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h54bd96ae__3)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "dma.sv", 
                                                     59);
        __VdynTrigger_h54bd96ae__3 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h54bd96ae__3);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "dma.sv", 
                                                     59);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@([event] __VnbaEvent)", 
                                                 "dma.sv", 
                                                 59);
    VL_NULL_CHECK(([&]() {
                vlSymsp->TOP.__VvifTrigger_hd309e34a__5_Vtrigm_dma_length = 1U;
            }(), this->__PVT__vif), "dma.sv", 59)->dma_length 
        = __Vintraval_h155e7255__0;
    vlProcess->state(VlProcess::FINISHED);
    co_return;}

VlCoroutine Vdma___024unit__03a__03aDmaDriver::__VnoInFunc_run_phase____Vfork_3__0(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_hcc568d24__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vdma___024unit__03a__03aDmaDriver::__VnoInFunc_run_phase____Vfork_3__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h54bd96ae__2;
    __VdynTrigger_h54bd96ae__2 = 0;
    __VdynTrigger_h54bd96ae__2 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h54bd96ae__2)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "dma.sv", 
                                                     58);
        __VdynTrigger_h54bd96ae__2 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h54bd96ae__2);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "dma.sv", 
                                                     58);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@([event] __VnbaEvent)", 
                                                 "dma.sv", 
                                                 58);
    VL_NULL_CHECK(([&]() {
                vlSymsp->TOP.__VvifTrigger_hd309e34a__4_Vtrigm_dma_dst_addr = 1U;
            }(), this->__PVT__vif), "dma.sv", 58)->dma_dst_addr 
        = __Vintraval_hcc568d24__0;
    vlProcess->state(VlProcess::FINISHED);
    co_return;}

VlCoroutine Vdma___024unit__03a__03aDmaDriver::__VnoInFunc_run_phase____Vfork_2__0(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_h0550e6d9__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vdma___024unit__03a__03aDmaDriver::__VnoInFunc_run_phase____Vfork_2__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h54bd96ae__1;
    __VdynTrigger_h54bd96ae__1 = 0;
    __VdynTrigger_h54bd96ae__1 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h54bd96ae__1)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "dma.sv", 
                                                     57);
        __VdynTrigger_h54bd96ae__1 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h54bd96ae__1);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "dma.sv", 
                                                     57);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@([event] __VnbaEvent)", 
                                                 "dma.sv", 
                                                 57);
    VL_NULL_CHECK(([&]() {
                vlSymsp->TOP.__VvifTrigger_hd309e34a__3_Vtrigm_dma_src_addr = 1U;
            }(), this->__PVT__vif), "dma.sv", 57)->dma_src_addr 
        = __Vintraval_h0550e6d9__0;
    vlProcess->state(VlProcess::FINISHED);
    co_return;}

VlCoroutine Vdma___024unit__03a__03aDmaDriver::__VnoInFunc_run_phase____Vfork_1__0(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h62083daf__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vdma___024unit__03a__03aDmaDriver::__VnoInFunc_run_phase____Vfork_1__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h54bd96ae__0;
    __VdynTrigger_h54bd96ae__0 = 0;
    __VdynTrigger_h54bd96ae__0 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h54bd96ae__0)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "dma.sv", 
                                                     53);
        __VdynTrigger_h54bd96ae__0 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h54bd96ae__0);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "dma.sv", 
                                                     53);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@([event] __VnbaEvent)", 
                                                 "dma.sv", 
                                                 53);
    VL_NULL_CHECK(([&]() {
                vlSymsp->TOP.__VvifTrigger_hd309e34a__2_Vtrigm_dma_start = 1U;
            }(), this->__PVT__vif), "dma.sv", 53)->dma_start 
        = __Vintraval_h62083daf__0;
    vlProcess->state(VlProcess::FINISHED);
    co_return;}

void Vdma___024unit__03a__03aDmaDriver::__VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vdma___024unit__03a__03aDmaDriver::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__9__Vfuncout;
    __Vfunc___VBasicRand__9__Vfuncout = 0;
    // Body
    Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__9__Vfuncout);
            }(), __Vfunc___VBasicRand__9__Vfuncout));
}

void Vdma___024unit__03a__03aDmaDriver::__VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vdma___024unit__03a__03aDmaDriver::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vdma___024unit__03a__03aDmaDriver::__VnoInFunc___VBasicRand(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vdma___024unit__03a__03aDmaDriver::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vdma___024unit__03a__03aDmaDriver::_ctor_var_reset(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vdma___024unit__03a__03aDmaDriver::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__vif = nullptr;
}

Vdma___024unit__03a__03aDmaDriver::~Vdma___024unit__03a__03aDmaDriver() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vdma___024unit__03a__03aDmaDriver::~\n"); );
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
