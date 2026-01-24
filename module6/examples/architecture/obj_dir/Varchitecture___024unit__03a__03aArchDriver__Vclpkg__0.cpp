// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varchitecture.h for the primary calling header

#include "Varchitecture__pch.h"

void Varchitecture___024unit__03a__03aArchDriver__Vclpkg::__VnoInFunc_get_type(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_component_registry__pi2> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Varchitecture___024unit__03a__03aArchDriver__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_component_registry__pi2> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi2__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Varchitecture___024unit__03a__03aArchDriver__Vclpkg::__VnoInFunc_type_name(Varchitecture__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Varchitecture___024unit__03a__03aArchDriver__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "ArchDriver"s;
}

void Varchitecture___024unit__03a__03aArchDriver::__VnoInFunc_get_object_type(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Varchitecture___024unit__03a__03aArchDriver::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_component_registry__pi2> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi2__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Varchitecture___024unit__03a__03aArchDriver::__VnoInFunc_get_type_name(Varchitecture__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Varchitecture___024unit__03a__03aArchDriver::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "ArchDriver"s;
}

Varchitecture___024unit__03a__03aArchDriver::Varchitecture___024unit__03a__03aArchDriver(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_component> parent)
    : Varchitecture_uvm_pkg__03a__03auvm_driver__Tz1_TBz1(vlProcess, vlSymsp, name, parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Varchitecture___024unit__03a__03aArchDriver::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

VlCoroutine Varchitecture___024unit__03a__03aArchDriver::__VnoInFunc_run_phase(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Varchitecture___024unit__03a__03aArchDriver::__VnoInFunc_run_phase\n"); );
    // Locals
    VlClassRef<Varchitecture___024unit__03a__03aArchTxn> __Vtask_get_next_item__2__t;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__3__Vfuncout;
    __Vfunc_uvm_report_enabled__3__Vfuncout = 0;
    std::string __Vtask_convert2string__5__Vfuncout;
    // Body
    VL_KEEP_THIS;
    VlClassRef<Varchitecture___024unit__03a__03aArchTxn> t;
    while (true) {
        co_await VL_NULL_CHECK(Varchitecture_uvm_pkg__03a__03auvm_driver__Tz1_TBz1::__PVT__seq_item_port, "architecture.sv", 213)->__VnoInFunc_get_next_item(vlProcess, vlSymsp, __Vtask_get_next_item__2__t);
        t = __Vtask_get_next_item__2__t;
        if ((0U != ([&]() {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000000c8U, 0U, "ARCH_DRV"s, __Vfunc_uvm_report_enabled__3__Vfuncout);
                    }(), __Vfunc_uvm_report_enabled__3__Vfuncout))) {
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "ARCH_DRV"s, 
                                              VL_CVT_PACK_STR_NN(
                                                                 VL_CONCATN_NNN("drive: "s, 
                                                                                ([&]() {
                                VL_NULL_CHECK(t, "architecture.sv", 223)
                                                                                ->__VnoInFunc_convert2string(vlProcess, vlSymsp, __Vtask_convert2string__5__Vfuncout);
                            }(), __Vtask_convert2string__5__Vfuncout))), 0x000000c8U, "architecture.sv"s, 0x000000dfU, ""s, 1U);
        }
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000001388ULL, 
                                                vlProcess, 
                                                "architecture.sv", 
                                                233);
        VL_NULL_CHECK(Varchitecture_uvm_pkg__03a__03auvm_driver__Tz1_TBz1::__PVT__seq_item_port, "architecture.sv", 243)->__VnoInFunc_item_done(vlProcess, vlSymsp, VlNull{});
    }
    co_return;}

void Varchitecture___024unit__03a__03aArchDriver::__VnoInFunc_randomize(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Varchitecture___024unit__03a__03aArchDriver::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__8__Vfuncout;
    __Vfunc___VBasicRand__8__Vfuncout = 0;
    // Body
    Varchitecture_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Varchitecture_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__8__Vfuncout);
            }(), __Vfunc___VBasicRand__8__Vfuncout));
}

void Varchitecture___024unit__03a__03aArchDriver::__VnoInFunc___Vsetup_constraints(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Varchitecture___024unit__03a__03aArchDriver::__VnoInFunc___Vsetup_constraints\n"); );
}

void Varchitecture___024unit__03a__03aArchDriver::__VnoInFunc___VBasicRand(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Varchitecture___024unit__03a__03aArchDriver::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Varchitecture___024unit__03a__03aArchDriver::_ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Varchitecture___024unit__03a__03aArchDriver::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Varchitecture___024unit__03a__03aArchDriver::~Varchitecture___024unit__03a__03aArchDriver() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Varchitecture___024unit__03a__03aArchDriver::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Varchitecture___024unit__03a__03aArchDriver>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Varchitecture___024unit__03a__03aArchDriver::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Varchitecture___024unit__03a__03aArchDriver::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Varchitecture___024unit__03a__03aArchDriver::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Varchitecture___024unit__03a__03aArchDriver::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Varchitecture___024unit__03a__03aArchDriver::to_string_middle\n"); );
    // Body
    std::string out;
    out += Varchitecture_uvm_pkg__03a__03auvm_driver__Tz1_TBz1::to_string_middle();
    return (out);
}
