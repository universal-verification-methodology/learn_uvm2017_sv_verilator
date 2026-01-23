// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varchitecture.h for the primary calling header

#include "Varchitecture__pch.h"

Varchitecture_uvm_pkg__03a__03auvm_factory_override::Varchitecture_uvm_pkg__03a__03auvm_factory_override(Varchitecture__Syms* __restrict vlSymsp, std::string full_inst_path, std::string orig_type_name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_wrapper> orig_type, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_wrapper> ovrd_type, std::string ovrd_type_name, CData/*0:0*/ replace) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_factory_override::new\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_m_has_wildcard__0__Vfuncout;
    __Vfunc_m_has_wildcard__0__Vfuncout = 0;
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__full_inst_path = full_inst_path;
    this->__PVT__orig.__PVT__m_type_name = orig_type_name;
    this->__PVT__orig.__PVT__m_type = orig_type;
    this->__PVT__ovrd.__PVT__m_type_name = ovrd_type_name;
    this->__PVT__ovrd.__PVT__m_type = ovrd_type;
    this->__PVT__replace = replace;
    this->__VnoInFunc_m_has_wildcard(vlSymsp, full_inst_path, __Vfunc_m_has_wildcard__0__Vfuncout);
    this->__PVT__has_wildcard = __Vfunc_m_has_wildcard__0__Vfuncout;
}

void Varchitecture_uvm_pkg__03a__03auvm_factory_override::__VnoInFunc_m_has_wildcard(Varchitecture__Syms* __restrict vlSymsp, std::string nm, CData/*0:0*/ &m_has_wildcard__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_factory_override::__VnoInFunc_m_has_wildcard\n"); );
    // Body
    IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0;
    {
        unnamedblk1__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk1__DOT__i, 
                          VL_LEN_IN(nm))) {
            if (((0x2aU == VL_GETC_N(nm,unnamedblk1__DOT__i)) 
                 | (0x3fU == VL_GETC_N(nm,unnamedblk1__DOT__i)))) {
                m_has_wildcard__Vfuncrtn = 1U;
                goto __Vlabel0;
            }
            unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
        }
        m_has_wildcard__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_factory_override::_ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_factory_override::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__replace = 0;
    __PVT__selected = 0;
    __PVT__used = 0;
    __PVT__has_wildcard = 0;
}

std::string VL_TO_STRING(const VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_factory_override>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_factory_override::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Varchitecture_uvm_pkg__03a__03auvm_factory_override::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_factory_override::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Varchitecture_uvm_pkg__03a__03auvm_factory_override::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_factory_override::to_string_middle\n"); );
    // Body
    std::string out;
    out += "full_inst_path:" + VL_TO_STRING(__PVT__full_inst_path);
    out += ", orig:" + VL_TO_STRING(__PVT__orig);
    out += ", ovrd:" + VL_TO_STRING(__PVT__ovrd);
    out += ", replace:" + VL_TO_STRING(__PVT__replace);
    out += ", selected:" + VL_TO_STRING(__PVT__selected);
    out += ", used:" + VL_TO_STRING(__PVT__used);
    out += ", has_wildcard:" + VL_TO_STRING(__PVT__has_wildcard);
    return (out);
}
