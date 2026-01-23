// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_example.h for the primary calling header

#include "Vuart_example__pch.h"

Vuart_example_uvm_pkg__03a__03auvm_port_component__Tz255::Vuart_example_uvm_pkg__03a__03auvm_port_component__Tz255(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component> parent, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_port_base__Tz223> port)
    : Vuart_example_uvm_pkg__03a__03auvm_port_component_base(vlProcess, vlSymsp, name, parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vuart_example_uvm_pkg__03a__03auvm_port_component__Tz255::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    if ((VlNull{} == port)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "Bad usage"s, "Null handle to port"s, 0U, ""s, 0U, ""s, 0U);
    }
    this->__PVT__m_port = port;
}

void Vuart_example_uvm_pkg__03a__03auvm_port_component__Tz255::__VnoInFunc_get_type_name(Vuart_example__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vuart_example_uvm_pkg__03a__03auvm_port_component__Tz255::__VnoInFunc_get_type_name\n"); );
    // Locals
    std::string __Vtask_get_type_name__2__Vfuncout;
    // Body
    {
        if ((VlNull{} == this->__PVT__m_port)) {
            get_type_name__Vfuncrtn = "uvm_port_component"s;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_port, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 130)->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__2__Vfuncout);
        get_type_name__Vfuncrtn = __Vtask_get_type_name__2__Vfuncout;
        __Vlabel0: ;
    }
}

void Vuart_example_uvm_pkg__03a__03auvm_port_component__Tz255::__VnoInFunc_resolve_bindings(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vuart_example_uvm_pkg__03a__03auvm_port_component__Tz255::__VnoInFunc_resolve_bindings\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_port, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 134)->__VnoInFunc_resolve_bindings(vlProcess, vlSymsp);
}

void Vuart_example_uvm_pkg__03a__03auvm_port_component__Tz255::__VnoInFunc_get_port(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_port_base__Tz223> &get_port__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vuart_example_uvm_pkg__03a__03auvm_port_component__Tz255::__VnoInFunc_get_port\n"); );
    // Body
    get_port__Vfuncrtn = this->__PVT__m_port;
}

void Vuart_example_uvm_pkg__03a__03auvm_port_component__Tz255::__VnoInFunc_get_connected_to(Vuart_example__Syms* __restrict vlSymsp, VlAssocArray<std::string, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_port_component_base>> &list) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vuart_example_uvm_pkg__03a__03auvm_port_component__Tz255::__VnoInFunc_get_connected_to\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_port_component_base> __Vtask_get_comp__5__Vfuncout;
    // Body
    std::string unnamedblk1__DOT__name;
    CData/*0:0*/ unnamedblk1__DOT__name__Vfirst;
    unnamedblk1__DOT__name__Vfirst = 0;
    VlAssocArray<std::string, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_port_base__Tz223>> list1;
    VL_NULL_CHECK(this->__PVT__m_port, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 153)->__VnoInFunc_get_connected_to(vlSymsp, list1);
    list.clear();
    if ((0U != list1.first(unnamedblk1__DOT__name))) {
        unnamedblk1__DOT__name__Vfirst = 1U;
        while (((IData)(unnamedblk1__DOT__name__Vfirst) 
                || (0U != list1.next(unnamedblk1__DOT__name)))) {
            unnamedblk1__DOT__name__Vfirst = 0U;
            VL_NULL_CHECK(list1.at(unnamedblk1__DOT__name), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 156)->__VnoInFunc_get_comp(vlSymsp, __Vtask_get_comp__5__Vfuncout);
            list.at(unnamedblk1__DOT__name) = __Vtask_get_comp__5__Vfuncout;
        }
    }
}

void Vuart_example_uvm_pkg__03a__03auvm_port_component__Tz255::__VnoInFunc_is_port(Vuart_example__Syms* __restrict vlSymsp, CData/*0:0*/ &is_port__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vuart_example_uvm_pkg__03a__03auvm_port_component__Tz255::__VnoInFunc_is_port\n"); );
    // Locals
    CData/*0:0*/ __Vtask_is_port__6__Vfuncout;
    __Vtask_is_port__6__Vfuncout = 0;
    // Body
    VL_NULL_CHECK(this->__PVT__m_port, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 161)->__VnoInFunc_is_port(vlSymsp, __Vtask_is_port__6__Vfuncout);
    is_port__Vfuncrtn = __Vtask_is_port__6__Vfuncout;
}

void Vuart_example_uvm_pkg__03a__03auvm_port_component__Tz255::__VnoInFunc_is_export(Vuart_example__Syms* __restrict vlSymsp, CData/*0:0*/ &is_export__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vuart_example_uvm_pkg__03a__03auvm_port_component__Tz255::__VnoInFunc_is_export\n"); );
    // Locals
    CData/*0:0*/ __Vtask_is_export__7__Vfuncout;
    __Vtask_is_export__7__Vfuncout = 0;
    // Body
    VL_NULL_CHECK(this->__PVT__m_port, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 165)->__VnoInFunc_is_export(vlSymsp, __Vtask_is_export__7__Vfuncout);
    is_export__Vfuncrtn = __Vtask_is_export__7__Vfuncout;
}

void Vuart_example_uvm_pkg__03a__03auvm_port_component__Tz255::__VnoInFunc_is_imp(Vuart_example__Syms* __restrict vlSymsp, CData/*0:0*/ &is_imp__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vuart_example_uvm_pkg__03a__03auvm_port_component__Tz255::__VnoInFunc_is_imp\n"); );
    // Locals
    CData/*0:0*/ __Vtask_is_imp__8__Vfuncout;
    __Vtask_is_imp__8__Vfuncout = 0;
    // Body
    VL_NULL_CHECK(this->__PVT__m_port, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_port_base.svh", 169)->__VnoInFunc_is_imp(vlSymsp, __Vtask_is_imp__8__Vfuncout);
    is_imp__Vfuncrtn = __Vtask_is_imp__8__Vfuncout;
}

void Vuart_example_uvm_pkg__03a__03auvm_port_component__Tz255::__VnoInFunc_randomize(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vuart_example_uvm_pkg__03a__03auvm_port_component__Tz255::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__10__Vfuncout;
    __Vfunc___Vbasic_randomize__10__Vfuncout = 0;
    // Body
    Vuart_example_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vuart_example_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__10__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__10__Vfuncout));
}

void Vuart_example_uvm_pkg__03a__03auvm_port_component__Tz255::__VnoInFunc___Vbasic_randomize(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vuart_example_uvm_pkg__03a__03auvm_port_component__Tz255::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vuart_example_uvm_pkg__03a__03auvm_port_component__Tz255::_ctor_var_reset(Vuart_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vuart_example_uvm_pkg__03a__03auvm_port_component__Tz255::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_port_component__Tz255>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vuart_example_uvm_pkg__03a__03auvm_port_component__Tz255::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vuart_example_uvm_pkg__03a__03auvm_port_component__Tz255::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vuart_example_uvm_pkg__03a__03auvm_port_component__Tz255::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vuart_example_uvm_pkg__03a__03auvm_port_component__Tz255::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vuart_example_uvm_pkg__03a__03auvm_port_component__Tz255::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_port:" + VL_TO_STRING(__PVT__m_port);
    out += ", "+ Vuart_example_uvm_pkg__03a__03auvm_port_component_base::to_string_middle();
    return (out);
}
