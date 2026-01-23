// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"

void Vdma_uvm_pkg__03a__03auvm_driver__Tz126_TBz126__Vclpkg::__VnoInFunc_get_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_component_registry__Tz139> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03auvm_driver__Tz126_TBz126__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_component_registry__Tz139> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__Tz139__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vdma_uvm_pkg__03a__03auvm_driver__Tz126_TBz126__Vclpkg::__VnoInFunc_type_name(Vdma__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03auvm_driver__Tz126_TBz126__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_driver #(REQ,RSP)"s;
}

void Vdma_uvm_pkg__03a__03auvm_driver__Tz126_TBz126::__VnoInFunc_get_object_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_driver__Tz126_TBz126::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_component_registry__Tz139> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__Tz139__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vdma_uvm_pkg__03a__03auvm_driver__Tz126_TBz126::__VnoInFunc_get_type_name(Vdma__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_driver__Tz126_TBz126::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_driver #(REQ,RSP)"s;
}

Vdma_uvm_pkg__03a__03auvm_driver__Tz126_TBz126::Vdma_uvm_pkg__03a__03auvm_driver__Tz126_TBz126(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> parent)
    : Vdma_uvm_pkg__03a__03auvm_component(vlProcess, vlSymsp, name, parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_driver__Tz126_TBz126::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    this->__PVT__seq_item_port = VL_NEW(Vdma_uvm_pkg__03a__03auvm_seq_item_pull_port__pi69, vlProcess, vlSymsp, "seq_item_port"s, 
                                        VlClassRef<Vdma_uvm_pkg__03a__03auvm_driver__Tz126_TBz126>{this}, 0U, 1U);
    this->__PVT__rsp_port = VL_NEW(Vdma_uvm_pkg__03a__03auvm_analysis_port__Tz126, vlProcess, vlSymsp, "rsp_port"s, 
                                   VlClassRef<Vdma_uvm_pkg__03a__03auvm_driver__Tz126_TBz126>{this});
    this->__PVT__seq_item_prod_if = this->__PVT__seq_item_port;
}

void Vdma_uvm_pkg__03a__03auvm_driver__Tz126_TBz126::__VnoInFunc_end_of_elaboration_phase(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_driver__Tz126_TBz126::__VnoInFunc_end_of_elaboration_phase\n"); );
    // Locals
    IData/*31:0*/ __Vtask_size__4__Vfuncout;
    __Vtask_size__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__5__Vfuncout;
    __Vfunc_uvm_report_enabled__5__Vfuncout = 0;
    // Body
    if (VL_GTS_III(32, 1U, ([&]() {
                    VL_NULL_CHECK(this->__PVT__seq_item_port, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/comps/uvm_driver.svh", 89)
                            ->__VnoInFunc_size(vlSymsp, __Vtask_size__4__Vfuncout);
                }(), __Vtask_size__4__Vfuncout))) {
        if ((0U != ([&]() {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "DRVCONNECT"s, __Vfunc_uvm_report_enabled__5__Vfuncout);
                    }(), __Vfunc_uvm_report_enabled__5__Vfuncout))) {
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "DRVCONNECT"s, "the driver is not connected to a sequencer via the standard mechanisms enabled by connect()"s, 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/comps/uvm_driver.svh"s, 0x0000005aU, ""s, 1U);
        }
    }
}

void Vdma_uvm_pkg__03a__03auvm_driver__Tz126_TBz126::__VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_driver__Tz126_TBz126::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__8__Vfuncout;
    __Vfunc___VBasicRand__8__Vfuncout = 0;
    // Body
    Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__8__Vfuncout);
            }(), __Vfunc___VBasicRand__8__Vfuncout));
}

void Vdma_uvm_pkg__03a__03auvm_driver__Tz126_TBz126::__VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_driver__Tz126_TBz126::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_driver__Tz126_TBz126::__VnoInFunc___VBasicRand(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_driver__Tz126_TBz126::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vdma_uvm_pkg__03a__03auvm_driver__Tz126_TBz126::_ctor_var_reset(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_driver__Tz126_TBz126::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vdma_uvm_pkg__03a__03auvm_driver__Tz126_TBz126::~Vdma_uvm_pkg__03a__03auvm_driver__Tz126_TBz126() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_driver__Tz126_TBz126::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_driver__Tz126_TBz126>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_driver__Tz126_TBz126::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vdma_uvm_pkg__03a__03auvm_driver__Tz126_TBz126::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_driver__Tz126_TBz126::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vdma_uvm_pkg__03a__03auvm_driver__Tz126_TBz126::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_driver__Tz126_TBz126::to_string_middle\n"); );
    // Body
    std::string out;
    out += "seq_item_port:" + VL_TO_STRING(__PVT__seq_item_port);
    out += ", seq_item_prod_if:" + VL_TO_STRING(__PVT__seq_item_prod_if);
    out += ", rsp_port:" + VL_TO_STRING(__PVT__rsp_port);
    out += ", req:" + VL_TO_STRING(__PVT__req);
    out += ", rsp:" + VL_TO_STRING(__PVT__rsp);
    out += ", "+ Vdma_uvm_pkg__03a__03auvm_component::to_string_middle();
    return (out);
}
