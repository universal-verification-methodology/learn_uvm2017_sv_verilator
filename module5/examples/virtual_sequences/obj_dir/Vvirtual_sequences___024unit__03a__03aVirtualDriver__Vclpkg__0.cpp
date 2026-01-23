// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvirtual_sequences.h for the primary calling header

#include "Vvirtual_sequences__pch.h"

void Vvirtual_sequences___024unit__03a__03aVirtualDriver__Vclpkg::__VnoInFunc_get_type(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_component_registry__pi2> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences___024unit__03a__03aVirtualDriver__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_component_registry__pi2> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi2__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vvirtual_sequences___024unit__03a__03aVirtualDriver__Vclpkg::__VnoInFunc_type_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences___024unit__03a__03aVirtualDriver__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "VirtualDriver"s;
}

void Vvirtual_sequences___024unit__03a__03aVirtualDriver::__VnoInFunc_get_object_type(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aVirtualDriver::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_component_registry__pi2> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi2__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vvirtual_sequences___024unit__03a__03aVirtualDriver::__VnoInFunc_get_type_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aVirtualDriver::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "VirtualDriver"s;
}

Vvirtual_sequences___024unit__03a__03aVirtualDriver::Vvirtual_sequences___024unit__03a__03aVirtualDriver(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_component> parent)
    : Vvirtual_sequences_uvm_pkg__03a__03auvm_driver__Tz1_TBz1(vlProcess, vlSymsp, name, parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aVirtualDriver::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

VlCoroutine Vvirtual_sequences___024unit__03a__03aVirtualDriver::__VnoInFunc_run_phase(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aVirtualDriver::__VnoInFunc_run_phase\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualTransaction> __Vtask_get_next_item__2__t;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__3__Vfuncout;
    __Vfunc_uvm_report_enabled__3__Vfuncout = 0;
    std::string __Vtask_convert2string__5__Vfuncout;
    std::string __Vtemp_1;
    // Body
    VL_KEEP_THIS;
    VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualTransaction> item;
    while (true) {
        co_await VL_NULL_CHECK(Vvirtual_sequences_uvm_pkg__03a__03auvm_driver__Tz1_TBz1::__PVT__seq_item_port, "virtual_sequences.sv", 168)->__VnoInFunc_get_next_item(vlProcess, vlSymsp, __Vtask_get_next_item__2__t);
        item = __Vtask_get_next_item__2__t;
        if ((0U != ([&]() {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000000c8U, 0U, "DRIVER"s, __Vfunc_uvm_report_enabled__3__Vfuncout);
                    }(), __Vfunc_uvm_report_enabled__3__Vfuncout))) {
            __Vtemp_1 = ([&]() {
                    VL_NULL_CHECK(item, "virtual_sequences.sv", 169)
                         ->__VnoInFunc_convert2string(vlProcess, vlSymsp, __Vtask_convert2string__5__Vfuncout);
                }(), __Vtask_convert2string__5__Vfuncout);
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "DRIVER"s, VL_SFORMATF_N_NX("Driving: %@",0,
                                                                                -1,
                                                                                &(__Vtemp_1)) , 0x000000c8U, "virtual_sequences.sv"s, 0x000000a9U, ""s, 1U);
        }
        co_await vlSymsp->TOP.__VdlySched.delay(0x000000000000000aULL, 
                                                vlProcess, 
                                                "virtual_sequences.sv", 
                                                170);
        VL_NULL_CHECK(Vvirtual_sequences_uvm_pkg__03a__03auvm_driver__Tz1_TBz1::__PVT__seq_item_port, "virtual_sequences.sv", 171)->__VnoInFunc_item_done(vlProcess, vlSymsp, VlNull{});
    }
    co_return;}

void Vvirtual_sequences___024unit__03a__03aVirtualDriver::__VnoInFunc_randomize(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aVirtualDriver::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__8__Vfuncout;
    __Vfunc___VBasicRand__8__Vfuncout = 0;
    // Body
    Vvirtual_sequences_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vvirtual_sequences_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__8__Vfuncout);
            }(), __Vfunc___VBasicRand__8__Vfuncout));
}

void Vvirtual_sequences___024unit__03a__03aVirtualDriver::__VnoInFunc___Vsetup_constraints(Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aVirtualDriver::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vvirtual_sequences___024unit__03a__03aVirtualDriver::__VnoInFunc___VBasicRand(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aVirtualDriver::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vvirtual_sequences___024unit__03a__03aVirtualDriver::_ctor_var_reset(Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aVirtualDriver::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vvirtual_sequences___024unit__03a__03aVirtualDriver::~Vvirtual_sequences___024unit__03a__03aVirtualDriver() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aVirtualDriver::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualDriver>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aVirtualDriver::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vvirtual_sequences___024unit__03a__03aVirtualDriver::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aVirtualDriver::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vvirtual_sequences___024unit__03a__03aVirtualDriver::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aVirtualDriver::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vvirtual_sequences_uvm_pkg__03a__03auvm_driver__Tz1_TBz1::to_string_middle();
    return (out);
}
