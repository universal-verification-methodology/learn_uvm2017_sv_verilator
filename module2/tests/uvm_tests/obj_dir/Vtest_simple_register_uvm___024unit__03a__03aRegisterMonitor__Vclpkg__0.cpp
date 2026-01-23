// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_simple_register_uvm.h for the primary calling header

#include "Vtest_simple_register_uvm__pch.h"

void Vtest_simple_register_uvm___024unit__03a__03aRegisterMonitor__Vclpkg::__VnoInFunc_get_type(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component_registry__pi63> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm___024unit__03a__03aRegisterMonitor__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component_registry__pi63> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi63__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterMonitor__Vclpkg::__VnoInFunc_type_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm___024unit__03a__03aRegisterMonitor__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "RegisterMonitor"s;
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterMonitor::__VnoInFunc_get_object_type(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtest_simple_register_uvm___024unit__03a__03aRegisterMonitor::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component_registry__pi63> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi63__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterMonitor::__VnoInFunc_get_type_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtest_simple_register_uvm___024unit__03a__03aRegisterMonitor::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "RegisterMonitor"s;
}

Vtest_simple_register_uvm___024unit__03a__03aRegisterMonitor::Vtest_simple_register_uvm___024unit__03a__03aRegisterMonitor(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component> parent)
    : Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_monitor(vlProcess, vlSymsp, name, parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtest_simple_register_uvm___024unit__03a__03aRegisterMonitor::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    this->__PVT__ap = VL_NEW(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_analysis_port__Tz126, vlProcess, vlSymsp, "ap"s, 
                             VlClassRef<Vtest_simple_register_uvm___024unit__03a__03aRegisterMonitor>{this});
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterMonitor::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtest_simple_register_uvm___024unit__03a__03aRegisterMonitor::__VnoInFunc_build_phase\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_get__4__Vfuncout;
    __Vfunc_get__4__Vfuncout = 0;
    Vtest_simple_register_uvm_register_if* __Vfunc_get__4__value;
    __Vfunc_get__4__value = nullptr;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__5__Vfuncout;
    __Vfunc_uvm_report_enabled__5__Vfuncout = 0;
    // Body
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    if ((1U & (~ ([&]() {
                        __Vfunc_get__4__value = this->__PVT__vif;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz1__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtest_simple_register_uvm___024unit__03a__03aRegisterMonitor>{this}, ""s, "vif"s, __Vfunc_get__4__value, __Vfunc_get__4__Vfuncout);
                        this->__PVT__vif = __Vfunc_get__4__value;
                    }(), (IData)(__Vfunc_get__4__Vfuncout))))) {
        if ((0U != ([&]() {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 3U, "NO_VIF"s, __Vfunc_uvm_report_enabled__5__Vfuncout);
                    }(), __Vfunc_uvm_report_enabled__5__Vfuncout))) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "NO_VIF"s, "Virtual interface not found"s, 0U, "test_simple_register_uvm.sv"s, 0x00000077U, ""s, 1U);
        }
    }
}

VlCoroutine Vtest_simple_register_uvm___024unit__03a__03aRegisterMonitor::__VnoInFunc_run_phase(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtest_simple_register_uvm___024unit__03a__03aRegisterMonitor::__VnoInFunc_run_phase\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm___024unit__03a__03aRegisterTransaction> __Vfunc_create__7__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__8__Vfuncout;
    __Vfunc_uvm_report_enabled__8__Vfuncout = 0;
    // Body
    VL_KEEP_THIS;
    VlClassRef<Vtest_simple_register_uvm___024unit__03a__03aRegisterTransaction> txn;
    while (true) {
        CData/*0:0*/ __VdynTrigger_h8a8c6577__0;
        __VdynTrigger_h8a8c6577__0 = 0;
        __VdynTrigger_h8a8c6577__0 = 0U;
        this->__Vtrigprevexpr_h7c62d22a__0 = VL_NULL_CHECK(this->__PVT__vif, "test_simple_register_uvm.sv", 127)
            ->clk;
        while ((1U & (~ (IData)(__VdynTrigger_h8a8c6577__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(posedge $unit::RegisterMonitor.vif.clk)", 
                                                         "test_simple_register_uvm.sv", 
                                                         127);
            __VdynTrigger_h8a8c6577__0 = (VL_NULL_CHECK(this->__PVT__vif, "test_simple_register_uvm.sv", 127)
                                          ->clk & (~ (IData)(this->__Vtrigprevexpr_h7c62d22a__0)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h8a8c6577__0);
            this->__Vtrigprevexpr_h7c62d22a__0 = VL_NULL_CHECK(this->__PVT__vif, "test_simple_register_uvm.sv", 127)
                ->clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(posedge $unit::RegisterMonitor.vif.clk)", 
                                                     "test_simple_register_uvm.sv", 
                                                     127);
        co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000003e8ULL, 
                                                vlProcess, 
                                                "test_simple_register_uvm.sv", 
                                                128);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi60__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "txn"s, VlNull{}, ""s, __Vfunc_create__7__Vfuncout);
        txn = __Vfunc_create__7__Vfuncout;
        VL_NULL_CHECK(txn, "test_simple_register_uvm.sv", 131)->__PVT__data 
            = VL_NULL_CHECK(this->__PVT__vif, "test_simple_register_uvm.sv", 131)
            ->d;
        VL_NULL_CHECK(txn, "test_simple_register_uvm.sv", 132)->__PVT__expected_q 
            = VL_NULL_CHECK(this->__PVT__vif, "test_simple_register_uvm.sv", 132)
            ->q;
        if ((0U != ([&]() {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000000c8U, 0U, "MONITOR"s, __Vfunc_uvm_report_enabled__8__Vfuncout);
                    }(), __Vfunc_uvm_report_enabled__8__Vfuncout))) {
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "MONITOR"s, VL_SFORMATF_N_NX("Observed: q=0x%02x",0,
                                                                                8,
                                                                                VL_NULL_CHECK(this->__PVT__vif, "test_simple_register_uvm.sv", 134)
                                                                                ->q) , 0x000000c8U, "test_simple_register_uvm.sv"s, 0x00000086U, ""s, 1U);
        }
        VL_NULL_CHECK(this->__PVT__ap, "test_simple_register_uvm.sv", 136)->__VnoInFunc_write(vlProcess, vlSymsp, txn);
    }
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterMonitor::__VnoInFunc_randomize(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtest_simple_register_uvm___024unit__03a__03aRegisterMonitor::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__12__Vfuncout;
    __Vfunc___Vbasic_randomize__12__Vfuncout = 0;
    // Body
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__12__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__12__Vfuncout));
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterMonitor::__VnoInFunc___Vbasic_randomize(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtest_simple_register_uvm___024unit__03a__03aRegisterMonitor::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterMonitor::_ctor_var_reset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtest_simple_register_uvm___024unit__03a__03aRegisterMonitor::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__vif = nullptr;
    __Vtrigprevexpr_h7c62d22a__0 = VL_SCOPED_RAND_RESET_I(1, 8126698935361081869ULL, 3742412969918159096ull);
}

std::string VL_TO_STRING(const VlClassRef<Vtest_simple_register_uvm___024unit__03a__03aRegisterMonitor>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtest_simple_register_uvm___024unit__03a__03aRegisterMonitor::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtest_simple_register_uvm___024unit__03a__03aRegisterMonitor::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtest_simple_register_uvm___024unit__03a__03aRegisterMonitor::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtest_simple_register_uvm___024unit__03a__03aRegisterMonitor::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtest_simple_register_uvm___024unit__03a__03aRegisterMonitor::to_string_middle\n"); );
    // Body
    std::string out;
    out += "vif:" + VL_TO_STRING(__PVT__vif);
    out += ", ap:" + VL_TO_STRING(__PVT__ap);
    out += ", "+ Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_monitor::to_string_middle();
    return (out);
}
