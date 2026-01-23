// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_and_gate_uvm.h for the primary calling header

#include "Vtest_and_gate_uvm__pch.h"

void Vtest_and_gate_uvm___024unit__03a__03aAndGateDriver__Vclpkg::__VnoInFunc_get_type(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_component_registry__pi62> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm___024unit__03a__03aAndGateDriver__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_component_registry__pi62> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi62__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtest_and_gate_uvm___024unit__03a__03aAndGateDriver__Vclpkg::__VnoInFunc_type_name(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm___024unit__03a__03aAndGateDriver__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "AndGateDriver"s;
}

void Vtest_and_gate_uvm___024unit__03a__03aAndGateDriver::__VnoInFunc_get_object_type(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtest_and_gate_uvm___024unit__03a__03aAndGateDriver::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_component_registry__pi62> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi62__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtest_and_gate_uvm___024unit__03a__03aAndGateDriver::__VnoInFunc_get_type_name(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtest_and_gate_uvm___024unit__03a__03aAndGateDriver::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "AndGateDriver"s;
}

Vtest_and_gate_uvm___024unit__03a__03aAndGateDriver::Vtest_and_gate_uvm___024unit__03a__03aAndGateDriver(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_component> parent)
    : Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_driver__Tz126_TBz126(vlProcess, vlSymsp, name, parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtest_and_gate_uvm___024unit__03a__03aAndGateDriver::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vtest_and_gate_uvm___024unit__03a__03aAndGateDriver::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtest_and_gate_uvm___024unit__03a__03aAndGateDriver::__VnoInFunc_build_phase\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_get__3__Vfuncout;
    __Vfunc_get__3__Vfuncout = 0;
    Vtest_and_gate_uvm_and_gate_if* __Vfunc_get__3__value;
    __Vfunc_get__3__value = nullptr;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__4__Vfuncout;
    __Vfunc_uvm_report_enabled__4__Vfuncout = 0;
    // Body
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    if ((1U & (~ ([&]() {
                        __Vfunc_get__3__value = this->__PVT__vif;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz1__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateDriver>{this}, ""s, "vif"s, __Vfunc_get__3__value, __Vfunc_get__3__Vfuncout);
                        this->__PVT__vif = __Vfunc_get__3__value;
                    }(), (IData)(__Vfunc_get__3__Vfuncout))))) {
        if ((0U != ([&]() {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 3U, "NO_VIF"s, __Vfunc_uvm_report_enabled__4__Vfuncout);
                    }(), __Vfunc_uvm_report_enabled__4__Vfuncout))) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "NO_VIF"s, "Virtual interface not found"s, 0U, "test_and_gate_uvm.sv"s, 0x00000057U, ""s, 1U);
        }
    }
}

VlCoroutine Vtest_and_gate_uvm___024unit__03a__03aAndGateDriver::__VnoInFunc_run_phase(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtest_and_gate_uvm___024unit__03a__03aAndGateDriver::__VnoInFunc_run_phase\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_hcbd9028c__0;
    __Vtrigprevexpr_hcbd9028c__0 = 0;
    VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction> __Vtask_get_next_item__6__t;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__7__Vfuncout;
    __Vfunc_uvm_report_enabled__7__Vfuncout = 0;
    std::string __Vtask_convert2string__9__Vfuncout;
    std::string __Vtemp_1;
    // Body
    VL_KEEP_THIS;
    VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction> txn;
    while (true) {
        co_await VL_NULL_CHECK(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_driver__Tz126_TBz126::__PVT__seq_item_port, "test_and_gate_uvm.sv", 95)->__VnoInFunc_get_next_item(vlProcess, vlSymsp, __Vtask_get_next_item__6__t);
        txn = __Vtask_get_next_item__6__t;
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        CData/*0:0*/ __Vintraval_h6dc6fa62__0;
        __Vintraval_h6dc6fa62__0 = 0;
        __Vintraval_h6dc6fa62__0 = VL_NULL_CHECK(txn, "test_and_gate_uvm.sv", 98)
            ->__PVT__a;
        this->__VnoInFunc_run_phase____Vfork_1__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vintraval_h6dc6fa62__0);
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        CData/*0:0*/ __Vintraval_h4116f3ac__0;
        __Vintraval_h4116f3ac__0 = 0;
        __Vintraval_h4116f3ac__0 = VL_NULL_CHECK(txn, "test_and_gate_uvm.sv", 99)
            ->__PVT__b;
        this->__VnoInFunc_run_phase____Vfork_2__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vintraval_h4116f3ac__0);
        if ((0U != ([&]() {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000000c8U, 0U, "DRIVER"s, __Vfunc_uvm_report_enabled__7__Vfuncout);
                    }(), __Vfunc_uvm_report_enabled__7__Vfuncout))) {
            __Vtemp_1 = ([&]() {
                    VL_NULL_CHECK(txn, "test_and_gate_uvm.sv", 101)
                         ->__VnoInFunc_convert2string(vlProcess, vlSymsp, __Vtask_convert2string__9__Vfuncout);
                }(), __Vtask_convert2string__9__Vfuncout);
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "DRIVER"s, VL_SFORMATF_N_NX("Driving DUT: %@",0,
                                                                                -1,
                                                                                &(__Vtemp_1)) , 0x000000c8U, "test_and_gate_uvm.sv"s, 0x00000065U, ""s, 1U);
        }
        CData/*0:0*/ __VdynTrigger_hfa26a937__0;
        __VdynTrigger_hfa26a937__0 = 0;
        __VdynTrigger_hfa26a937__0 = 0U;
        __Vtrigprevexpr_hcbd9028c__0 = VL_NULL_CHECK(this->__PVT__vif, "test_and_gate_uvm.sv", 103)
            ->clk;
        while ((1U & (~ (IData)(__VdynTrigger_hfa26a937__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::AndGateDriver.vif.clk)", 
                                                         "test_and_gate_uvm.sv", 
                                                         103);
            __VdynTrigger_hfa26a937__0 = (VL_NULL_CHECK(this->__PVT__vif, "test_and_gate_uvm.sv", 103)
                                          ->clk & (~ (IData)(__Vtrigprevexpr_hcbd9028c__0)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hfa26a937__0);
            __Vtrigprevexpr_hcbd9028c__0 = VL_NULL_CHECK(this->__PVT__vif, "test_and_gate_uvm.sv", 103)
                ->clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::AndGateDriver.vif.clk)", 
                                                     "test_and_gate_uvm.sv", 
                                                     103);
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000003e8ULL, 
                                                vlProcess, 
                                                "test_and_gate_uvm.sv", 
                                                104);
        VL_NULL_CHECK(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_driver__Tz126_TBz126::__PVT__seq_item_port, "test_and_gate_uvm.sv", 106)->__VnoInFunc_item_done(vlProcess, vlSymsp, VlNull{});
    }
    co_return;}

VlCoroutine Vtest_and_gate_uvm___024unit__03a__03aAndGateDriver::__VnoInFunc_run_phase____Vfork_2__0(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h4116f3ac__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtest_and_gate_uvm___024unit__03a__03aAndGateDriver::__VnoInFunc_run_phase____Vfork_2__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h54bd96ae__1;
    __VdynTrigger_h54bd96ae__1 = 0;
    __VdynTrigger_h54bd96ae__1 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h54bd96ae__1)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "test_and_gate_uvm.sv", 
                                                     99);
        __VdynTrigger_h54bd96ae__1 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h54bd96ae__1);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "test_and_gate_uvm.sv", 
                                                     99);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@([event] __VnbaEvent)", 
                                                 "test_and_gate_uvm.sv", 
                                                 99);
    VL_NULL_CHECK(([&]() {
                vlSymsp->TOP.__VvifTrigger_h6d5a1410__3_Vtrigm_b = 1U;
            }(), this->__PVT__vif), "test_and_gate_uvm.sv", 99)->b 
        = __Vintraval_h4116f3ac__0;
    vlProcess->state(VlProcess::FINISHED);
    co_return;}

VlCoroutine Vtest_and_gate_uvm___024unit__03a__03aAndGateDriver::__VnoInFunc_run_phase____Vfork_1__0(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h6dc6fa62__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtest_and_gate_uvm___024unit__03a__03aAndGateDriver::__VnoInFunc_run_phase____Vfork_1__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h54bd96ae__0;
    __VdynTrigger_h54bd96ae__0 = 0;
    __VdynTrigger_h54bd96ae__0 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h54bd96ae__0)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "test_and_gate_uvm.sv", 
                                                     98);
        __VdynTrigger_h54bd96ae__0 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h54bd96ae__0);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "test_and_gate_uvm.sv", 
                                                     98);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@([event] __VnbaEvent)", 
                                                 "test_and_gate_uvm.sv", 
                                                 98);
    VL_NULL_CHECK(([&]() {
                vlSymsp->TOP.__VvifTrigger_h6d5a1410__2_Vtrigm_a = 1U;
            }(), this->__PVT__vif), "test_and_gate_uvm.sv", 98)->a 
        = __Vintraval_h6dc6fa62__0;
    vlProcess->state(VlProcess::FINISHED);
    co_return;}

void Vtest_and_gate_uvm___024unit__03a__03aAndGateDriver::__VnoInFunc_randomize(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtest_and_gate_uvm___024unit__03a__03aAndGateDriver::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__12__Vfuncout;
    __Vfunc___VBasicRand__12__Vfuncout = 0;
    // Body
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__12__Vfuncout);
            }(), __Vfunc___VBasicRand__12__Vfuncout));
}

void Vtest_and_gate_uvm___024unit__03a__03aAndGateDriver::__VnoInFunc___Vsetup_constraints(Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtest_and_gate_uvm___024unit__03a__03aAndGateDriver::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtest_and_gate_uvm___024unit__03a__03aAndGateDriver::__VnoInFunc___VBasicRand(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtest_and_gate_uvm___024unit__03a__03aAndGateDriver::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtest_and_gate_uvm___024unit__03a__03aAndGateDriver::_ctor_var_reset(Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtest_and_gate_uvm___024unit__03a__03aAndGateDriver::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__vif = nullptr;
}

Vtest_and_gate_uvm___024unit__03a__03aAndGateDriver::~Vtest_and_gate_uvm___024unit__03a__03aAndGateDriver() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtest_and_gate_uvm___024unit__03a__03aAndGateDriver::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateDriver>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtest_and_gate_uvm___024unit__03a__03aAndGateDriver::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtest_and_gate_uvm___024unit__03a__03aAndGateDriver::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtest_and_gate_uvm___024unit__03a__03aAndGateDriver::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtest_and_gate_uvm___024unit__03a__03aAndGateDriver::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtest_and_gate_uvm___024unit__03a__03aAndGateDriver::to_string_middle\n"); );
    // Body
    std::string out;
    out += "vif:" + VL_TO_STRING(__PVT__vif);
    out += ", "+ Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_driver__Tz126_TBz126::to_string_middle();
    return (out);
}
