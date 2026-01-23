// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclass_hierarchy.h for the primary calling header

#include "Vclass_hierarchy__pch.h"

Vclass_hierarchy_uvm_pkg__03a__03auvm_analysis_export__Tz210::Vclass_hierarchy_uvm_pkg__03a__03auvm_analysis_export__Tz210(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component> parent)
    : Vclass_hierarchy_uvm_pkg__03a__03auvm_port_base__Tz286(vlProcess, vlSymsp, name, parent, 1U, 1U, 0xffffffffU) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vclass_hierarchy_uvm_pkg__03a__03auvm_analysis_export__Tz210::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    Vclass_hierarchy_uvm_pkg__03a__03auvm_port_base__Tz286::__PVT__m_if_mask = 0x00000100U;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_analysis_export__Tz210::__VnoInFunc_get_type_name(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vclass_hierarchy_uvm_pkg__03a__03auvm_analysis_export__Tz210::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_analysis_export"s;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_analysis_export__Tz210::__VnoInFunc_write(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vclass_hierarchy_uvm_pkg__03a__03auvm_analysis_export__Tz210::__VnoInFunc_write\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_size__1__Vfuncout;
    __Vfunc_size__1__Vfuncout = 0;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_port_base__Tz286> __Vfunc_get_if__2__Vfuncout;
    std::string __Vfunc_get_full_name__4__Vfuncout;
    // Body
    IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_tlm_if_base__Tz210_TBz210> tif;
    unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk1__DOT__i, ([&]() {
                    this->__VnoInFunc_size(vlSymsp, __Vfunc_size__1__Vfuncout);
                }(), __Vfunc_size__1__Vfuncout))) {
        this->__VnoInFunc_get_if(vlProcess, vlSymsp, unnamedblk1__DOT__i, __Vfunc_get_if__2__Vfuncout);
        tif = __Vfunc_get_if__2__Vfuncout;
        if ((VlNull{} == tif)) {
            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "NTCONN"s, 
                                                                            VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("No uvm_tlm interface is connected to "s, 
                                                                                ([&]() {
                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__4__Vfuncout);
                                }(), __Vfunc_get_full_name__4__Vfuncout)), " for executing write()"s)), 0U, ""s, 0U, ""s, 0U);
        }
        VL_NULL_CHECK(tif, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_analysis_port.svh", 153)->__VnoInFunc_write(vlProcess, vlSymsp, t);
        unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
    }
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_analysis_export__Tz210::_ctor_var_reset(Vclass_hierarchy__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vclass_hierarchy_uvm_pkg__03a__03auvm_analysis_export__Tz210::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_analysis_export__Tz210>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vclass_hierarchy_uvm_pkg__03a__03auvm_analysis_export__Tz210::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vclass_hierarchy_uvm_pkg__03a__03auvm_analysis_export__Tz210::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vclass_hierarchy_uvm_pkg__03a__03auvm_analysis_export__Tz210::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vclass_hierarchy_uvm_pkg__03a__03auvm_analysis_export__Tz210::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vclass_hierarchy_uvm_pkg__03a__03auvm_analysis_export__Tz210::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vclass_hierarchy_uvm_pkg__03a__03auvm_port_base__Tz286::to_string_middle();
    return (out);
}
