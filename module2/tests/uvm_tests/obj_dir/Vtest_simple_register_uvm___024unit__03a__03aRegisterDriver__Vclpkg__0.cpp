// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_simple_register_uvm.h for the primary calling header

#include "Vtest_simple_register_uvm__pch.h"

void Vtest_simple_register_uvm___024unit__03a__03aRegisterDriver__Vclpkg::__VnoInFunc_get_type(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component_registry__pi62> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm___024unit__03a__03aRegisterDriver__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component_registry__pi62> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi62__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterDriver__Vclpkg::__VnoInFunc_type_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm___024unit__03a__03aRegisterDriver__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "RegisterDriver"s;
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterDriver::__VnoInFunc_get_object_type(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtest_simple_register_uvm___024unit__03a__03aRegisterDriver::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component_registry__pi62> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi62__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterDriver::__VnoInFunc_get_type_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtest_simple_register_uvm___024unit__03a__03aRegisterDriver::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "RegisterDriver"s;
}

Vtest_simple_register_uvm___024unit__03a__03aRegisterDriver::Vtest_simple_register_uvm___024unit__03a__03aRegisterDriver(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component> parent)
    : Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_driver__Tz126_TBz126(vlProcess, vlSymsp, name, parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtest_simple_register_uvm___024unit__03a__03aRegisterDriver::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterDriver::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtest_simple_register_uvm___024unit__03a__03aRegisterDriver::__VnoInFunc_build_phase\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_get__3__Vfuncout;
    __Vfunc_get__3__Vfuncout = 0;
    Vtest_simple_register_uvm_register_if* __Vfunc_get__3__value;
    __Vfunc_get__3__value = nullptr;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__4__Vfuncout;
    __Vfunc_uvm_report_enabled__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__4__verbosity;
    __Vfunc_uvm_report_enabled__4__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__4__severity;
    __Vfunc_uvm_report_enabled__4__severity = 0;
    std::string __Vfunc_uvm_report_enabled__4__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__5__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__6__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__7__Vfuncout;
    __Vtask_uvm_report_enabled__7__Vfuncout = 0;
    // Body
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    if ((1U & (~ ([&]() {
                        __Vfunc_get__3__value = this->__PVT__vif;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz1__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtest_simple_register_uvm___024unit__03a__03aRegisterDriver>{this}, ""s, "vif"s, __Vfunc_get__3__value, __Vfunc_get__3__Vfuncout);
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
            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "NO_VIF"s, "Virtual interface not found"s, 0U, "test_simple_register_uvm.sv"s, 0x0000004eU, ""s, 1U);
        }
    }
}

VlCoroutine Vtest_simple_register_uvm___024unit__03a__03aRegisterDriver::__VnoInFunc_run_phase(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtest_simple_register_uvm___024unit__03a__03aRegisterDriver::__VnoInFunc_run_phase\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm___024unit__03a__03aRegisterTransaction> __Vtask_get_next_item__9__t;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__10__Vfuncout;
    __Vfunc_uvm_report_enabled__10__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__10__verbosity;
    __Vfunc_uvm_report_enabled__10__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__10__severity;
    __Vfunc_uvm_report_enabled__10__severity = 0;
    std::string __Vfunc_uvm_report_enabled__10__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__11__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__12__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__13__Vfuncout;
    __Vtask_uvm_report_enabled__13__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__14__id;
    std::string __Vtask_uvm_report_info__14__message;
    IData/*31:0*/ __Vtask_uvm_report_info__14__verbosity;
    __Vtask_uvm_report_info__14__verbosity = 0;
    std::string __Vtask_uvm_report_info__14__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__14__line;
    __Vtask_uvm_report_info__14__line = 0;
    std::string __Vtask_uvm_report_info__14__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__14__report_enabled_checked;
    __Vtask_uvm_report_info__14__report_enabled_checked = 0;
    std::string __Vtask_convert2string__15__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__16__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__17__Vfuncout;
    std::string __Vtemp_1;
    // Body
    VL_KEEP_THIS;
    VlClassRef<Vtest_simple_register_uvm___024unit__03a__03aRegisterTransaction> txn;
    while (true) {
        co_await VL_NULL_CHECK(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_driver__Tz126_TBz126::__PVT__seq_item_port, "test_simple_register_uvm.sv", 86)->__VnoInFunc_get_next_item(vlProcess, vlSymsp, __Vtask_get_next_item__9__t);
        txn = __Vtask_get_next_item__9__t;
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        CData/*0:0*/ __Vintraval_hc11e1713__0;
        __Vintraval_hc11e1713__0 = 0;
        __Vintraval_hc11e1713__0 = 1U;
        this->__VnoInFunc_run_phase____Vfork_1__0(vlSymsp, __Vintraval_hc11e1713__0);
        vlSymsp->TOP.__VvifTrigger_he8f502e3__2_Vtrigm_enable = 1U;
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        CData/*7:0*/ __Vintraval_ha330b259__0;
        __Vintraval_ha330b259__0 = 0;
        __Vintraval_ha330b259__0 = VL_NULL_CHECK(txn, "test_simple_register_uvm.sv", 90)
            ->__PVT__data;
        this->__VnoInFunc_run_phase____Vfork_2__0(vlSymsp, __Vintraval_ha330b259__0);
        vlSymsp->TOP.__VvifTrigger_he8f502e3__3_Vtrigm_d = 1U;
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__10__id = "DRIVER"s;
                        __Vfunc_uvm_report_enabled__10__severity = 0U;
                        __Vfunc_uvm_report_enabled__10__verbosity = 0x000000c8U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__11__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__11__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__12__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__12__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__10__verbosity, (IData)(__Vfunc_uvm_report_enabled__10__severity), __Vfunc_uvm_report_enabled__10__id, __Vtask_uvm_report_enabled__13__Vfuncout);
                        __Vfunc_uvm_report_enabled__10__Vfuncout 
                            = __Vtask_uvm_report_enabled__13__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__10__Vfuncout))) {
            __Vtask_uvm_report_info__14__report_enabled_checked = 1U;
            __Vtask_uvm_report_info__14__context_name = ""s;
            __Vtask_uvm_report_info__14__line = 0x0000005cU;
            __Vtask_uvm_report_info__14__filename = "test_simple_register_uvm.sv"s;
            __Vtask_uvm_report_info__14__verbosity = 0x000000c8U;
            __Vtemp_1 = ([&]() {
                    VL_NULL_CHECK(txn, "test_simple_register_uvm.sv", 92)
                         ->__VnoInFunc_convert2string(vlProcess, vlSymsp, __Vtask_convert2string__15__Vfuncout);
                }(), __Vtask_convert2string__15__Vfuncout);
            __Vtask_uvm_report_info__14__message = VL_SFORMATF_N_NX("Driving: %@",0,
                                                                    -1,
                                                                    &(__Vtemp_1)) ;
            __Vtask_uvm_report_info__14__id = "DRIVER"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__16__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__16__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__17__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__17__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__14__id, __Vtask_uvm_report_info__14__message, __Vtask_uvm_report_info__14__verbosity, __Vtask_uvm_report_info__14__filename, __Vtask_uvm_report_info__14__line, __Vtask_uvm_report_info__14__context_name, (IData)(__Vtask_uvm_report_info__14__report_enabled_checked));
        }
        CData/*0:0*/ __VdynTrigger_h3bac8f79__0;
        __VdynTrigger_h3bac8f79__0 = 0;
        __VdynTrigger_h3bac8f79__0 = 0U;
        this->__Vtrigprevexpr_h49c2fc7c__0 = VL_NULL_CHECK(this->__PVT__vif, "test_simple_register_uvm.sv", 94)
            ->clk;
        while ((1U & (~ (IData)(__VdynTrigger_h3bac8f79__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::RegisterDriver.vif.clk)", 
                                                         "test_simple_register_uvm.sv", 
                                                         94);
            __VdynTrigger_h3bac8f79__0 = (VL_NULL_CHECK(this->__PVT__vif, "test_simple_register_uvm.sv", 94)
                                          ->clk & (~ (IData)(this->__Vtrigprevexpr_h49c2fc7c__0)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h3bac8f79__0);
            this->__Vtrigprevexpr_h49c2fc7c__0 = VL_NULL_CHECK(this->__PVT__vif, "test_simple_register_uvm.sv", 94)
                ->clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::RegisterDriver.vif.clk)", 
                                                     "test_simple_register_uvm.sv", 
                                                     94);
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000003e8ULL, 
                                                vlProcess, 
                                                "test_simple_register_uvm.sv", 
                                                95);
        VL_NULL_CHECK(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_driver__Tz126_TBz126::__PVT__seq_item_port, "test_simple_register_uvm.sv", 97)->__VnoInFunc_item_done(vlProcess, vlSymsp, VlNull{});
    }
    co_return;
}

VlCoroutine Vtest_simple_register_uvm___024unit__03a__03aRegisterDriver::__VnoInFunc_run_phase____Vfork_2__0(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, CData/*7:0*/ __Vintraval_ha330b259__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtest_simple_register_uvm___024unit__03a__03aRegisterDriver::__VnoInFunc_run_phase____Vfork_2__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h362143b5__1;
    __VdynTrigger_h362143b5__1 = 0;
    __VdynTrigger_h362143b5__1 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h362143b5__1)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "test_simple_register_uvm.sv", 
                                                     90);
        __VdynTrigger_h362143b5__1 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h362143b5__1);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "test_simple_register_uvm.sv", 
                                                     90);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "test_simple_register_uvm.sv", 
                                                 90);
    VL_NULL_CHECK(this->__PVT__vif, "test_simple_register_uvm.sv", 90)->d 
        = __Vintraval_ha330b259__0;
}

VlCoroutine Vtest_simple_register_uvm___024unit__03a__03aRegisterDriver::__VnoInFunc_run_phase____Vfork_1__0(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_hc11e1713__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtest_simple_register_uvm___024unit__03a__03aRegisterDriver::__VnoInFunc_run_phase____Vfork_1__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h362143b5__0;
    __VdynTrigger_h362143b5__0 = 0;
    __VdynTrigger_h362143b5__0 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h362143b5__0)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "test_simple_register_uvm.sv", 
                                                     89);
        __VdynTrigger_h362143b5__0 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h362143b5__0);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "test_simple_register_uvm.sv", 
                                                     89);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "test_simple_register_uvm.sv", 
                                                 89);
    VL_NULL_CHECK(this->__PVT__vif, "test_simple_register_uvm.sv", 89)->enable 
        = __Vintraval_hc11e1713__0;
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterDriver::__VnoInFunc_randomize(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtest_simple_register_uvm___024unit__03a__03aRegisterDriver::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__21__Vfuncout;
    __Vfunc___Vbasic_randomize__21__Vfuncout = 0;
    // Body
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__21__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__21__Vfuncout));
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterDriver::__VnoInFunc___Vbasic_randomize(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtest_simple_register_uvm___024unit__03a__03aRegisterDriver::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterDriver::_ctor_var_reset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtest_simple_register_uvm___024unit__03a__03aRegisterDriver::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__vif = nullptr;
    __Vtrigprevexpr_h49c2fc7c__0 = VL_SCOPED_RAND_RESET_I(1, 5091140251568403599ULL, 11965650621467405531ull);
}

std::string VL_TO_STRING(const VlClassRef<Vtest_simple_register_uvm___024unit__03a__03aRegisterDriver>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtest_simple_register_uvm___024unit__03a__03aRegisterDriver::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtest_simple_register_uvm___024unit__03a__03aRegisterDriver::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtest_simple_register_uvm___024unit__03a__03aRegisterDriver::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtest_simple_register_uvm___024unit__03a__03aRegisterDriver::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtest_simple_register_uvm___024unit__03a__03aRegisterDriver::to_string_middle\n"); );
    // Body
    std::string out;
    out += "vif:" + VL_TO_STRING(__PVT__vif);
    out += ", "+ Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_driver__Tz126_TBz126::to_string_middle();
    return (out);
}
