// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrecorders_top.h for the primary calling header

#include "Vrecorders_top__pch.h"

Vrecorders_top_uvm_pkg__03a__03auvm_analysis_port__Tz174::Vrecorders_top_uvm_pkg__03a__03auvm_analysis_port__Tz174(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_component> parent)
    : Vrecorders_top_uvm_pkg__03a__03auvm_port_base__Tz251(vlProcess, vlSymsp, name, parent, 0U, 0U, 0xffffffffU) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrecorders_top_uvm_pkg__03a__03auvm_analysis_port__Tz174::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    Vrecorders_top_uvm_pkg__03a__03auvm_port_base__Tz251::__PVT__m_if_mask = 0x00000100U;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_analysis_port__Tz174::__VnoInFunc_get_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrecorders_top_uvm_pkg__03a__03auvm_analysis_port__Tz174::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_analysis_port"s;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_analysis_port__Tz174::__VnoInFunc_write(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrecorders_top_uvm_pkg__03a__03auvm_analysis_port__Tz174::__VnoInFunc_write\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_size__1__Vfuncout;
    __Vfunc_size__1__Vfuncout = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_port_base__Tz251> __Vfunc_get_if__2__Vfuncout;
    std::string __Vfunc_get_full_name__4__Vfuncout;
    // Body
    IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_tlm_if_base__Tz174_TBz174> tif;
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
        VL_NULL_CHECK(tif, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_analysis_port.svh", 78)->__VnoInFunc_write(vlProcess, vlSymsp, t);
        unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_analysis_port__Tz174::_ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrecorders_top_uvm_pkg__03a__03auvm_analysis_port__Tz174::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vrecorders_top_uvm_pkg__03a__03auvm_analysis_port__Tz174::~Vrecorders_top_uvm_pkg__03a__03auvm_analysis_port__Tz174() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrecorders_top_uvm_pkg__03a__03auvm_analysis_port__Tz174::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_analysis_port__Tz174>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrecorders_top_uvm_pkg__03a__03auvm_analysis_port__Tz174::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vrecorders_top_uvm_pkg__03a__03auvm_analysis_port__Tz174::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrecorders_top_uvm_pkg__03a__03auvm_analysis_port__Tz174::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vrecorders_top_uvm_pkg__03a__03auvm_analysis_port__Tz174::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrecorders_top_uvm_pkg__03a__03auvm_analysis_port__Tz174::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vrecorders_top_uvm_pkg__03a__03auvm_port_base__Tz251::to_string_middle();
    return (out);
}
