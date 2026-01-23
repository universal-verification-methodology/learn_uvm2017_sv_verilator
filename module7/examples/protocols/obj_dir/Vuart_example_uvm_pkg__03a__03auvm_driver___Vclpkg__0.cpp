// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_example.h for the primary calling header

#include "Vuart_example__pch.h"

void Vuart_example_uvm_pkg__03a__03auvm_driver___Vclpkg::__VnoInFunc_get_type(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component_registry__Tz179> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03auvm_driver___Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component_registry__Tz179> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__Tz179__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vuart_example_uvm_pkg__03a__03auvm_driver___Vclpkg::__VnoInFunc_type_name(Vuart_example__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03auvm_driver___Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_driver #(REQ,RSP)"s;
}

void Vuart_example_uvm_pkg__03a__03auvm_driver_::__VnoInFunc_get_object_type(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_driver_::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component_registry__Tz179> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__Tz179__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vuart_example_uvm_pkg__03a__03auvm_driver_::__VnoInFunc_get_type_name(Vuart_example__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_driver_::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_driver #(REQ,RSP)"s;
}

Vuart_example_uvm_pkg__03a__03auvm_driver_::Vuart_example_uvm_pkg__03a__03auvm_driver_(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component> parent)
    : Vuart_example_uvm_pkg__03a__03auvm_component(vlProcess, vlSymsp, name, parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_driver_::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    this->__PVT__seq_item_port = VL_NEW(Vuart_example_uvm_pkg__03a__03auvm_seq_item_pull_port__pi91, vlProcess, vlSymsp, "seq_item_port"s, 
                                        VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_driver_>{this}, 0U, 1U);
    this->__PVT__rsp_port = VL_NEW(Vuart_example_uvm_pkg__03a__03auvm_analysis_port__Tz26, vlProcess, vlSymsp, "rsp_port"s, 
                                   VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_driver_>{this});
    this->__PVT__seq_item_prod_if = this->__PVT__seq_item_port;
}

void Vuart_example_uvm_pkg__03a__03auvm_driver_::__VnoInFunc_end_of_elaboration_phase(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_driver_::__VnoInFunc_end_of_elaboration_phase\n"); );
    // Locals
    IData/*31:0*/ __Vtask_size__4__Vfuncout;
    __Vtask_size__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__5__Vfuncout;
    __Vfunc_uvm_report_enabled__5__Vfuncout = 0;
    // Body
    if (VL_GTS_III(32, 1U, ([&]() {
                    VL_NULL_CHECK(this->__PVT__seq_item_port, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/comps/uvm_driver.svh", 89)
                            ->__VnoInFunc_size(vlSymsp, __Vtask_size__4__Vfuncout);
                }(), __Vtask_size__4__Vfuncout))) {
        if ((0U != ([&]() {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "DRVCONNECT"s, __Vfunc_uvm_report_enabled__5__Vfuncout);
                    }(), __Vfunc_uvm_report_enabled__5__Vfuncout))) {
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "DRVCONNECT"s, "the driver is not connected to a sequencer via the standard mechanisms enabled by connect()"s, 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/comps/uvm_driver.svh"s, 0x0000005aU, ""s, 1U);
        }
    }
}

void Vuart_example_uvm_pkg__03a__03auvm_driver_::__VnoInFunc_randomize(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_driver_::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__8__Vfuncout;
    __Vfunc___Vbasic_randomize__8__Vfuncout = 0;
    // Body
    Vuart_example_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vuart_example_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__8__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__8__Vfuncout));
}

void Vuart_example_uvm_pkg__03a__03auvm_driver_::__VnoInFunc___Vbasic_randomize(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_driver_::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vuart_example_uvm_pkg__03a__03auvm_driver_::_ctor_var_reset(Vuart_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_driver_::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_driver_>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_driver_::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vuart_example_uvm_pkg__03a__03auvm_driver_::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_driver_::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vuart_example_uvm_pkg__03a__03auvm_driver_::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_driver_::to_string_middle\n"); );
    // Body
    std::string out;
    out += "seq_item_port:" + VL_TO_STRING(__PVT__seq_item_port);
    out += ", seq_item_prod_if:" + VL_TO_STRING(__PVT__seq_item_prod_if);
    out += ", rsp_port:" + VL_TO_STRING(__PVT__rsp_port);
    out += ", req:" + VL_TO_STRING(__PVT__req);
    out += ", rsp:" + VL_TO_STRING(__PVT__rsp);
    out += ", "+ Vuart_example_uvm_pkg__03a__03auvm_component::to_string_middle();
    return (out);
}
