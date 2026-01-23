// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_example.h for the primary calling header

#include "Vuart_example__pch.h"

void Vuart_example___024unit__03a__03aUartDriver__Vclpkg::__VnoInFunc_get_type(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component_registry__pi62> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example___024unit__03a__03aUartDriver__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component_registry__pi62> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi62__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vuart_example___024unit__03a__03aUartDriver__Vclpkg::__VnoInFunc_type_name(Vuart_example__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example___024unit__03a__03aUartDriver__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "UartDriver"s;
}

void Vuart_example___024unit__03a__03aUartDriver::__VnoInFunc_get_object_type(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vuart_example___024unit__03a__03aUartDriver::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component_registry__pi62> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi62__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vuart_example___024unit__03a__03aUartDriver::__VnoInFunc_get_type_name(Vuart_example__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vuart_example___024unit__03a__03aUartDriver::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "UartDriver"s;
}

Vuart_example___024unit__03a__03aUartDriver::Vuart_example___024unit__03a__03aUartDriver(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string n, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component> p)
    : Vuart_example_uvm_pkg__03a__03auvm_driver__Tz126_TBz126(vlProcess, vlSymsp, n, p) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vuart_example___024unit__03a__03aUartDriver::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vuart_example___024unit__03a__03aUartDriver::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vuart_example___024unit__03a__03aUartDriver::__VnoInFunc_build_phase\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_get__3__Vfuncout;
    __Vfunc_get__3__Vfuncout = 0;
    Vuart_example_uart_if* __Vfunc_get__3__value;
    __Vfunc_get__3__value = nullptr;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__4__Vfuncout;
    __Vfunc_uvm_report_enabled__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__4__verbosity;
    __Vfunc_uvm_report_enabled__4__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__4__severity;
    __Vfunc_uvm_report_enabled__4__severity = 0;
    std::string __Vfunc_uvm_report_enabled__4__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__5__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__6__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__7__Vfuncout;
    __Vtask_uvm_report_enabled__7__Vfuncout = 0;
    // Body
    Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    if ((1U & (~ ([&]() {
                        __Vfunc_get__3__value = this->__PVT__vif;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz1__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vuart_example___024unit__03a__03aUartDriver>{this}, ""s, "vif"s, __Vfunc_get__3__value, __Vfunc_get__3__Vfuncout);
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
            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "NO_VIF"s, "uart_if not set"s, 0U, "uart_example.sv"s, 0x0000002dU, ""s, 1U);
        }
    }
}

VlCoroutine Vuart_example___024unit__03a__03aUartDriver::__VnoInFunc_run_phase(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vuart_example___024unit__03a__03aUartDriver::__VnoInFunc_run_phase\n"); );
    // Locals
    VlClassRef<Vuart_example___024unit__03a__03aUartTxn> __Vtask_get_next_item__9__t;
    // Body
    VL_KEEP_THIS;
    VlClassRef<Vuart_example___024unit__03a__03aUartTxn> t;
    vlSymsp->TOP.__VnbaEventTrigger = 1U;
    this->__VnoInFunc_run_phase____Vfork_1__0(vlSymsp, 0U);
    vlSymsp->TOP.__VvifTrigger_h43a827b7__2_Vtrigm_tx_start = 1U;
    while (true) {
        co_await VL_NULL_CHECK(Vuart_example_uvm_pkg__03a__03auvm_driver__Tz126_TBz126::__PVT__seq_item_port, "uart_example.sv", 51)->__VnoInFunc_get_next_item(vlProcess, vlSymsp, __Vtask_get_next_item__9__t);
        t = __Vtask_get_next_item__9__t;
        CData/*0:0*/ __VdynTrigger_hf899f69a__0;
        __VdynTrigger_hf899f69a__0 = 0;
        __VdynTrigger_hf899f69a__0 = 0U;
        this->__Vtrigprevexpr_hce555e1d__0 = VL_NULL_CHECK(this->__PVT__vif, "uart_example.sv", 52)
            ->clk;
        while ((1U & (~ (IData)(__VdynTrigger_hf899f69a__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::UartDriver.vif.clk)", 
                                                         "uart_example.sv", 
                                                         52);
            __VdynTrigger_hf899f69a__0 = (VL_NULL_CHECK(this->__PVT__vif, "uart_example.sv", 52)
                                          ->clk & (~ (IData)(this->__Vtrigprevexpr_hce555e1d__0)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hf899f69a__0);
            this->__Vtrigprevexpr_hce555e1d__0 = VL_NULL_CHECK(this->__PVT__vif, "uart_example.sv", 52)
                ->clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::UartDriver.vif.clk)", 
                                                     "uart_example.sv", 
                                                     52);
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        CData/*7:0*/ __Vintraval_hdd9dc4a4__0;
        __Vintraval_hdd9dc4a4__0 = 0;
        __Vintraval_hdd9dc4a4__0 = VL_NULL_CHECK(t, "uart_example.sv", 53)
            ->__PVT__data;
        this->__VnoInFunc_run_phase____Vfork_2__0(vlSymsp, __Vintraval_hdd9dc4a4__0);
        vlSymsp->TOP.__VvifTrigger_h43a827b7__3_Vtrigm_tx_data = 1U;
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        CData/*0:0*/ __Vintraval_h5b4f4373__0;
        __Vintraval_h5b4f4373__0 = 0;
        __Vintraval_h5b4f4373__0 = 1U;
        this->__VnoInFunc_run_phase____Vfork_3__0(vlSymsp, __Vintraval_h5b4f4373__0);
        vlSymsp->TOP.__VvifTrigger_h43a827b7__2_Vtrigm_tx_start = 1U;
        CData/*0:0*/ __VdynTrigger_hf899f69a__1;
        __VdynTrigger_hf899f69a__1 = 0;
        __VdynTrigger_hf899f69a__1 = 0U;
        this->__Vtrigprevexpr_hce555e1d__1 = VL_NULL_CHECK(this->__PVT__vif, "uart_example.sv", 55)
            ->clk;
        while ((1U & (~ (IData)(__VdynTrigger_hf899f69a__1)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::UartDriver.vif.clk)", 
                                                         "uart_example.sv", 
                                                         55);
            __VdynTrigger_hf899f69a__1 = (VL_NULL_CHECK(this->__PVT__vif, "uart_example.sv", 55)
                                          ->clk & (~ (IData)(this->__Vtrigprevexpr_hce555e1d__1)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hf899f69a__1);
            this->__Vtrigprevexpr_hce555e1d__1 = VL_NULL_CHECK(this->__PVT__vif, "uart_example.sv", 55)
                ->clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::UartDriver.vif.clk)", 
                                                     "uart_example.sv", 
                                                     55);
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        CData/*0:0*/ __Vintraval_h5b4f33a1__1;
        __Vintraval_h5b4f33a1__1 = 0;
        __Vintraval_h5b4f33a1__1 = 0U;
        this->__VnoInFunc_run_phase____Vfork_4__0(vlSymsp, __Vintraval_h5b4f33a1__1);
        vlSymsp->TOP.__VvifTrigger_h43a827b7__2_Vtrigm_tx_start = 1U;
        do {
            CData/*0:0*/ __VdynTrigger_hf899f69a__2;
            __VdynTrigger_hf899f69a__2 = 0;
            __VdynTrigger_hf899f69a__2 = 0U;
            this->__Vtrigprevexpr_hce555e1d__2 = VL_NULL_CHECK(this->__PVT__vif, "uart_example.sv", 58)
                ->clk;
            while ((1U & (~ (IData)(__VdynTrigger_hf899f69a__2)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             vlProcess, 
                                                             "@(posedge $unit::UartDriver.vif.clk)", 
                                                             "uart_example.sv", 
                                                             58);
                __VdynTrigger_hf899f69a__2 = (VL_NULL_CHECK(this->__PVT__vif, "uart_example.sv", 58)
                                              ->clk 
                                              & (~ (IData)(this->__Vtrigprevexpr_hce555e1d__2)));
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hf899f69a__2);
                this->__Vtrigprevexpr_hce555e1d__2 
                    = VL_NULL_CHECK(this->__PVT__vif, "uart_example.sv", 58)
                    ->clk;
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         vlProcess, 
                                                         "@(posedge $unit::UartDriver.vif.clk)", 
                                                         "uart_example.sv", 
                                                         58);
        } while (VL_NULL_CHECK(this->__PVT__vif, "uart_example.sv", 58)
                 ->tx_busy);
        VL_NULL_CHECK(Vuart_example_uvm_pkg__03a__03auvm_driver__Tz126_TBz126::__PVT__seq_item_port, "uart_example.sv", 59)->__VnoInFunc_item_done(vlProcess, vlSymsp, VlNull{});
    }
    co_return;
}

VlCoroutine Vuart_example___024unit__03a__03aUartDriver::__VnoInFunc_run_phase____Vfork_4__0(Vuart_example__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h5b4f33a1__1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vuart_example___024unit__03a__03aUartDriver::__VnoInFunc_run_phase____Vfork_4__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h362143b5__3;
    __VdynTrigger_h362143b5__3 = 0;
    __VdynTrigger_h362143b5__3 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h362143b5__3)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "uart_example.sv", 
                                                     56);
        __VdynTrigger_h362143b5__3 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h362143b5__3);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "uart_example.sv", 
                                                     56);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "uart_example.sv", 
                                                 56);
    VL_NULL_CHECK(this->__PVT__vif, "uart_example.sv", 56)->tx_start 
        = __Vintraval_h5b4f33a1__1;
}

VlCoroutine Vuart_example___024unit__03a__03aUartDriver::__VnoInFunc_run_phase____Vfork_3__0(Vuart_example__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h5b4f4373__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vuart_example___024unit__03a__03aUartDriver::__VnoInFunc_run_phase____Vfork_3__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h362143b5__2;
    __VdynTrigger_h362143b5__2 = 0;
    __VdynTrigger_h362143b5__2 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h362143b5__2)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "uart_example.sv", 
                                                     54);
        __VdynTrigger_h362143b5__2 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h362143b5__2);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "uart_example.sv", 
                                                     54);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "uart_example.sv", 
                                                 54);
    VL_NULL_CHECK(this->__PVT__vif, "uart_example.sv", 54)->tx_start 
        = __Vintraval_h5b4f4373__0;
}

VlCoroutine Vuart_example___024unit__03a__03aUartDriver::__VnoInFunc_run_phase____Vfork_2__0(Vuart_example__Syms* __restrict vlSymsp, CData/*7:0*/ __Vintraval_hdd9dc4a4__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vuart_example___024unit__03a__03aUartDriver::__VnoInFunc_run_phase____Vfork_2__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h362143b5__1;
    __VdynTrigger_h362143b5__1 = 0;
    __VdynTrigger_h362143b5__1 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h362143b5__1)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "uart_example.sv", 
                                                     53);
        __VdynTrigger_h362143b5__1 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h362143b5__1);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "uart_example.sv", 
                                                     53);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "uart_example.sv", 
                                                 53);
    VL_NULL_CHECK(this->__PVT__vif, "uart_example.sv", 53)->tx_data 
        = __Vintraval_hdd9dc4a4__0;
}

VlCoroutine Vuart_example___024unit__03a__03aUartDriver::__VnoInFunc_run_phase____Vfork_1__0(Vuart_example__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h5b4f33a1__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vuart_example___024unit__03a__03aUartDriver::__VnoInFunc_run_phase____Vfork_1__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h362143b5__0;
    __VdynTrigger_h362143b5__0 = 0;
    __VdynTrigger_h362143b5__0 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h362143b5__0)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "uart_example.sv", 
                                                     49);
        __VdynTrigger_h362143b5__0 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h362143b5__0);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "uart_example.sv", 
                                                     49);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "uart_example.sv", 
                                                 49);
    VL_NULL_CHECK(this->__PVT__vif, "uart_example.sv", 49)->tx_start 
        = __Vintraval_h5b4f33a1__0;
}

void Vuart_example___024unit__03a__03aUartDriver::__VnoInFunc_randomize(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vuart_example___024unit__03a__03aUartDriver::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__12__Vfuncout;
    __Vfunc___Vbasic_randomize__12__Vfuncout = 0;
    // Body
    Vuart_example_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vuart_example_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__12__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__12__Vfuncout));
}

void Vuart_example___024unit__03a__03aUartDriver::__VnoInFunc___Vbasic_randomize(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vuart_example___024unit__03a__03aUartDriver::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vuart_example___024unit__03a__03aUartDriver::_ctor_var_reset(Vuart_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vuart_example___024unit__03a__03aUartDriver::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__vif = nullptr;
    __Vtrigprevexpr_hce555e1d__0 = VL_SCOPED_RAND_RESET_I(1, 5702338660532620669ULL, 16384289750843362574ull);
    __Vtrigprevexpr_hce555e1d__1 = VL_SCOPED_RAND_RESET_I(1, 5702338660532620669ULL, 18409545180571199504ull);
    __Vtrigprevexpr_hce555e1d__2 = VL_SCOPED_RAND_RESET_I(1, 5702338660532620669ULL, 18344504075924249187ull);
}

std::string VL_TO_STRING(const VlClassRef<Vuart_example___024unit__03a__03aUartDriver>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vuart_example___024unit__03a__03aUartDriver::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vuart_example___024unit__03a__03aUartDriver::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vuart_example___024unit__03a__03aUartDriver::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vuart_example___024unit__03a__03aUartDriver::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vuart_example___024unit__03a__03aUartDriver::to_string_middle\n"); );
    // Body
    std::string out;
    out += "vif:" + VL_TO_STRING(__PVT__vif);
    out += ", "+ Vuart_example_uvm_pkg__03a__03auvm_driver__Tz126_TBz126::to_string_middle();
    return (out);
}
