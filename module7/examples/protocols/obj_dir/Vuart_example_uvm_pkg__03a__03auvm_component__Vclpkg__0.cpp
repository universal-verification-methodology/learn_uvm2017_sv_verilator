// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_example.h for the primary calling header

#include "Vuart_example__pch.h"

void Vuart_example_uvm_pkg__03a__03auvm_component__Vclpkg::__VnoInFunc_type_name(Vuart_example__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03auvm_component__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_component"s;
}

void Vuart_example_uvm_pkg__03a__03auvm_component__Vclpkg::__VnoInFunc_set_type_override(Vuart_example__Syms* __restrict vlSymsp, std::string original_type_name, std::string override_type_name, CData/*0:0*/ replace) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03auvm_component__Vclpkg::__VnoInFunc_set_type_override\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__0__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_factory> __Vtask_get_factory__1__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> cs;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__0__Vfuncout);
    cs = __Vfunc_get__0__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_factory> factory;
    VL_NULL_CHECK(cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 1990)->__VnoInFunc_get_factory(vlSymsp, __Vtask_get_factory__1__Vfuncout);
    factory = __Vtask_get_factory__1__Vfuncout;
    VL_NULL_CHECK(factory, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 1991)->__VnoInFunc_set_type_override_by_name(vlProcess, vlSymsp, original_type_name, override_type_name, (IData)(replace));
}

void Vuart_example_uvm_pkg__03a__03auvm_component__Vclpkg::__VnoInFunc_set_type_override_by_type(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_wrapper> original_type, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_wrapper> override_type, CData/*0:0*/ replace) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03auvm_component__Vclpkg::__VnoInFunc_set_type_override_by_type\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__3__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_factory> __Vtask_get_factory__4__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> cs;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__3__Vfuncout);
    cs = __Vfunc_get__3__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_factory> factory;
    VL_NULL_CHECK(cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2002)->__VnoInFunc_get_factory(vlSymsp, __Vtask_get_factory__4__Vfuncout);
    factory = __Vtask_get_factory__4__Vfuncout;
    VL_NULL_CHECK(factory, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2003)->__VnoInFunc_set_type_override_by_type(vlSymsp, original_type, override_type, replace);
}

std::string VL_TO_STRING(const Vuart_example_m_verbosity_setting__struct__0& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03auvm_component__Vclpkg::VL_TO_STRING\n"); );
    // Body
    std::string out;
    out += "'{comp:" + VL_TO_STRING(obj.__PVT__comp);
    out += ", phase:" + VL_TO_STRING(obj.__PVT__phase);
    out += ", offset:" + VL_TO_STRING(obj.__PVT__offset);
    out += ", verbosity:" + VL_TO_STRING(obj.__PVT__verbosity);
    out += ", id:" + VL_TO_STRING(obj.__PVT__id);
    out += "}";
    return (out);
}

std::string VL_TO_STRING(const Vuart_example_uvm_cmdline_parsed_arg_t__struct__0& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03auvm_component__Vclpkg::VL_TO_STRING\n"); );
    // Body
    std::string out;
    out += "'{arg:" + VL_TO_STRING(obj.__PVT__arg);
    out += ", args:" + VL_TO_STRING(obj.__PVT__args);
    out += ", used:" + VL_TO_STRING(obj.__PVT__used);
    out += "}";
    return (out);
}

void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_raised(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection> objection, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_raised\n"); );
}

void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_dropped(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection> objection, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_dropped\n"); );
}

void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_all_dropped(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection> objection, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_all_dropped\n"); );
}

void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_type_name(Vuart_example__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_component"s;
}

Vuart_example_uvm_pkg__03a__03auvm_component::Vuart_example_uvm_pkg__03a__03auvm_component(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component> parent)
    : Vuart_example_uvm_pkg__03a__03auvm_report_object(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::new\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__2__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__3__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_domain> __Vfunc_get_common_domain__4__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> __Vtask_find__5__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_build_phase> __Vfunc_get__6__Vfuncout;
    IData/*31:0*/ __Vtask_get_state__8__Vfuncout;
    __Vtask_get_state__8__Vfuncout = 0;
    std::string __Vtask_get_full_name__10__Vfuncout;
    std::string __Vtask_get_full_name__11__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__12__Vfuncout;
    __Vfunc_uvm_report_enabled__12__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__14__Vfuncout;
    __Vfunc_uvm_report_enabled__14__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__15__Vfuncout;
    __Vfunc_uvm_report_enabled__15__Vfuncout = 0;
    std::string __Vtask_get_full_name__17__Vfuncout;
    IData/*31:0*/ __Vtask_has_child__18__Vfuncout;
    __Vtask_has_child__18__Vfuncout = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component> __Vtask_get_child__19__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__20__Vfuncout;
    __Vfunc_uvm_report_enabled__20__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__22__Vfuncout;
    __Vfunc_uvm_report_enabled__22__Vfuncout = 0;
    std::string __Vtask_get_full_name__24__Vfuncout;
    CData/*0:0*/ __Vtask_m_add_child__26__Vfuncout;
    __Vtask_m_add_child__26__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_get__29__Vfuncout;
    __Vfunc_get__29__Vfuncout = 0;
    VlWide<128>/*4095:0*/ __Vfunc_get__29__value;
    VL_ZERO_W(4096, __Vfunc_get__29__value);
    CData/*0:0*/ __Vtask_get__30__Vfuncout;
    __Vtask_get__30__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get__30__value;
    __Vtask_get__30__value = 0;
    std::string __Vfunc_get_full_name__32__Vfuncout;
    IData/*31:0*/ __Vtask_get_report_verbosity_level__34__Vfuncout;
    __Vtask_get_report_verbosity_level__34__Vfuncout = 0;
    std::string __Vtemp_1;
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__m_unsupported_resource_base = VlNull{};
    this->__PVT__recording_detail = 0U;
    this->__PVT__print_enabled = 1U;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> unnamedblk179__DOT__bld;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_domain> unnamedblk179__DOT__common;
    std::string error_str;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> top;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> cs;
    {
        ;
        if (((VlNull{} == parent) & ("__top__"s == name))) {
            this->__VnoInFunc_set_name(vlProcess, vlSymsp, ""s);
            goto __Vlabel0;
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__2__Vfuncout);
        cs = __Vfunc_get__2__Vfuncout;
        VL_NULL_CHECK(cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 1609)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__3__Vfuncout);
        top = __Vtask_get_root__3__Vfuncout;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_domain__Vclpkg.__VnoInFunc_get_common_domain(vlProcess, vlSymsp, __Vfunc_get_common_domain__4__Vfuncout);
        unnamedblk179__DOT__common = __Vfunc_get_common_domain__4__Vfuncout;
        VL_NULL_CHECK(unnamedblk179__DOT__common, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 1616)->__VnoInFunc_find(vlProcess, vlSymsp, 
                                                                                ([&]() {
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_build_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__6__Vfuncout);
                }(), __Vfunc_get__6__Vfuncout), 1U, __Vtask_find__5__Vfuncout);
        unnamedblk179__DOT__bld = __Vtask_find__5__Vfuncout;
        if ((VlNull{} == unnamedblk179__DOT__bld)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "COMP/INTERNAL"s, "attempt to find build phase object failed"s, 0U, ""s, 0U, ""s, 0U);
        }
        if ((0x00000100U == ([&]() {
                        VL_NULL_CHECK(unnamedblk179__DOT__bld, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 1620)
                             ->__VnoInFunc_get_state(vlSymsp, __Vtask_get_state__8__Vfuncout);
                    }(), __Vtask_get_state__8__Vfuncout))) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "ILLCRT"s, 
                                               VL_CVT_PACK_STR_NN(
                                                                  VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("It is illegal to create a component ('"s, name), "' under '"s), 
                                                                                ((VlNull{} 
                                                                                == parent)
                                                                                 ? 
                                                                                ([&]() {
                                        VL_NULL_CHECK(top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 1623)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__10__Vfuncout);
                                    }(), __Vtask_get_full_name__10__Vfuncout)
                                                                                 : 
                                                                                ([&]() {
                                        VL_NULL_CHECK(parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 1623)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__11__Vfuncout);
                                    }(), __Vtask_get_full_name__11__Vfuncout))), "') after the build phase has ended."s)), 0U, ""s, 0U, ""s, 0U);
        }
        if ((""s == name)) {
            name = VL_SFORMATF_N_NX("%0d",0,32,vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT__m_inst_count) ;
            name = VL_CONCATN_NNN("COMP_"s, name);
        }
        if ((parent == VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component>{this})) {
            if ((0U != ([&]() {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 3U, "THISPARENT"s, __Vfunc_uvm_report_enabled__12__Vfuncout);
                        }(), __Vfunc_uvm_report_enabled__12__Vfuncout))) {
                this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "THISPARENT"s, "cannot set the parent of a component to itself"s, 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh"s, 0x00000663U, ""s, 1U);
            }
        }
        if ((VlNull{} == parent)) {
            parent = top;
        }
        if ((0U != ([&]() {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000000c9U, 0U, "NEWCOMP"s, __Vfunc_uvm_report_enabled__14__Vfuncout);
                    }(), __Vfunc_uvm_report_enabled__14__Vfuncout))) {
            if ((0U != ([&]() {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000000c9U, 0U, "NEWCOMP"s, __Vfunc_uvm_report_enabled__15__Vfuncout);
                        }(), __Vfunc_uvm_report_enabled__15__Vfuncout))) {
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "NEWCOMP"s, 
                                                  VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Creating "s, 
                                                                                ((parent 
                                                                                == top)
                                                                                 ? "uvm_top"s
                                                                                 : 
                                                                                ([&]() {
                                                VL_NULL_CHECK(parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 1643)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__17__Vfuncout);
                                            }(), __Vtask_get_full_name__17__Vfuncout))), "."s), name)), 0x000000c9U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh"s, 0x0000066bU, ""s, 1U);
            }
        }
        if (((0U != ([&]() {
                            VL_NULL_CHECK(parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 1645)
                     ->__VnoInFunc_has_child(vlSymsp, name, __Vtask_has_child__18__Vfuncout);
                        }(), __Vtask_has_child__18__Vfuncout)) 
             && (VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component>{this} 
                 != ([&]() {
                            VL_NULL_CHECK(parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 1645)
                     ->__VnoInFunc_get_child(vlProcess, vlSymsp, name, __Vtask_get_child__19__Vfuncout);
                        }(), __Vtask_get_child__19__Vfuncout)))) {
            if ((parent == top)) {
                error_str = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                          VL_CONCATN_NNN(
                                                                         VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Name '"s, name), "' is not unique to other top-level "s), "instances. If parent is a module, build a unique name by combining the "s), "the module name and component name: $sformatf(\"%m.%s\",\""s), name), "\")."s);
                        if ((0U != ([&]() {
                                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 3U, "CLDEXT"s, __Vfunc_uvm_report_enabled__20__Vfuncout);
                                    }(), __Vfunc_uvm_report_enabled__20__Vfuncout))) {
                            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "CLDEXT"s, error_str, 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh"s, 0x00000672U, ""s, 1U);
                        }
                    } else if ((0U != ([&]() {
                                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 3U, "CLDEXT"s, __Vfunc_uvm_report_enabled__22__Vfuncout);
                                }(), __Vfunc_uvm_report_enabled__22__Vfuncout))) {
                        __Vtemp_1 = ([&]() {
                                VL_NULL_CHECK(parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 1656)
                                     ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__24__Vfuncout);
                            }(), __Vtask_get_full_name__24__Vfuncout);
                        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "CLDEXT"s, VL_SFORMATF_N_NX("Cannot set '%@' as a child of '%@', which already has a child by that name.",0,
                                                                                -1,
                                                                                &(name),
                                                                                -1,
                                                                                &(__Vtemp_1)) , 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh"s, 0x00000678U, ""s, 1U);
                    }
                    goto __Vlabel0;
                }
                this->__PVT__m_parent = parent;
                this->__VnoInFunc_set_name(vlProcess, vlSymsp, name);
                if ((1U & (~ ([&]() {
                                    VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 1664)
                              ->__VnoInFunc_m_add_child(vlProcess, vlSymsp, 
                                                        VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component>{this}, __Vtask_m_add_child__26__Vfuncout);
                                }(), (IData)(__Vtask_m_add_child__26__Vfuncout))))) {
                    this->__PVT__m_parent = VlNull{};
                }
                this->__PVT__event_pool = VL_NEW(Vuart_example_uvm_pkg__03a__03auvm_object_string_pool__Tz7, vlProcess, vlSymsp, "event_pool"s);
                this->__PVT__m_domain = VL_NULL_CHECK(parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 1669)
                    ->__PVT__m_domain;
                this->__VnoInFunc_reseed(vlProcess, vlSymsp);
                if ((1U & (~ ([&]() {
                                    __Vfunc_get__29__value[0U] 
                                        = this->__PVT__recording_detail;
                                    __Vfunc_get__29__value[1U] = 0U;
                                    __Vfunc_get__29__value[2U] = 0U;
                                    __Vfunc_get__29__value[3U] = 0U;
                                    __Vfunc_get__29__value[4U] = 0U;
                                    __Vfunc_get__29__value[5U] = 0U;
                                    __Vfunc_get__29__value[6U] = 0U;
                                    __Vfunc_get__29__value[7U] = 0U;
                                    __Vfunc_get__29__value[8U] = 0U;
                                    __Vfunc_get__29__value[9U] = 0U;
                                    __Vfunc_get__29__value[0x0000000aU] = 0U;
                                    __Vfunc_get__29__value[0x0000000bU] = 0U;
                                    __Vfunc_get__29__value[0x0000000cU] = 0U;
                                    __Vfunc_get__29__value[0x0000000dU] = 0U;
                                    __Vfunc_get__29__value[0x0000000eU] = 0U;
                                    __Vfunc_get__29__value[0x0000000fU] = 0U;
                                    __Vfunc_get__29__value[0x00000010U] = 0U;
                                    __Vfunc_get__29__value[0x00000011U] = 0U;
                                    __Vfunc_get__29__value[0x00000012U] = 0U;
                                    __Vfunc_get__29__value[0x00000013U] = 0U;
                                    __Vfunc_get__29__value[0x00000014U] = 0U;
                                    __Vfunc_get__29__value[0x00000015U] = 0U;
                                    __Vfunc_get__29__value[0x00000016U] = 0U;
                                    __Vfunc_get__29__value[0x00000017U] = 0U;
                                    __Vfunc_get__29__value[0x00000018U] = 0U;
                                    __Vfunc_get__29__value[0x00000019U] = 0U;
                                    __Vfunc_get__29__value[0x0000001aU] = 0U;
                                    __Vfunc_get__29__value[0x0000001bU] = 0U;
                                    __Vfunc_get__29__value[0x0000001cU] = 0U;
                                    __Vfunc_get__29__value[0x0000001dU] = 0U;
                                    __Vfunc_get__29__value[0x0000001eU] = 0U;
                                    __Vfunc_get__29__value[0x0000001fU] = 0U;
                                    __Vfunc_get__29__value[0x00000020U] = 0U;
                                    __Vfunc_get__29__value[0x00000021U] = 0U;
                                    __Vfunc_get__29__value[0x00000022U] = 0U;
                                    __Vfunc_get__29__value[0x00000023U] = 0U;
                                    __Vfunc_get__29__value[0x00000024U] = 0U;
                                    __Vfunc_get__29__value[0x00000025U] = 0U;
                                    __Vfunc_get__29__value[0x00000026U] = 0U;
                                    __Vfunc_get__29__value[0x00000027U] = 0U;
                                    __Vfunc_get__29__value[0x00000028U] = 0U;
                                    __Vfunc_get__29__value[0x00000029U] = 0U;
                                    __Vfunc_get__29__value[0x0000002aU] = 0U;
                                    __Vfunc_get__29__value[0x0000002bU] = 0U;
                                    __Vfunc_get__29__value[0x0000002cU] = 0U;
                                    __Vfunc_get__29__value[0x0000002dU] = 0U;
                                    __Vfunc_get__29__value[0x0000002eU] = 0U;
                                    __Vfunc_get__29__value[0x0000002fU] = 0U;
                                    __Vfunc_get__29__value[0x00000030U] = 0U;
                                    __Vfunc_get__29__value[0x00000031U] = 0U;
                                    __Vfunc_get__29__value[0x00000032U] = 0U;
                                    __Vfunc_get__29__value[0x00000033U] = 0U;
                                    __Vfunc_get__29__value[0x00000034U] = 0U;
                                    __Vfunc_get__29__value[0x00000035U] = 0U;
                                    __Vfunc_get__29__value[0x00000036U] = 0U;
                                    __Vfunc_get__29__value[0x00000037U] = 0U;
                                    __Vfunc_get__29__value[0x00000038U] = 0U;
                                    __Vfunc_get__29__value[0x00000039U] = 0U;
                                    __Vfunc_get__29__value[0x0000003aU] = 0U;
                                    __Vfunc_get__29__value[0x0000003bU] = 0U;
                                    __Vfunc_get__29__value[0x0000003cU] = 0U;
                                    __Vfunc_get__29__value[0x0000003dU] = 0U;
                                    __Vfunc_get__29__value[0x0000003eU] = 0U;
                                    __Vfunc_get__29__value[0x0000003fU] = 0U;
                                    __Vfunc_get__29__value[0x00000040U] = 0U;
                                    __Vfunc_get__29__value[0x00000041U] = 0U;
                                    __Vfunc_get__29__value[0x00000042U] = 0U;
                                    __Vfunc_get__29__value[0x00000043U] = 0U;
                                    __Vfunc_get__29__value[0x00000044U] = 0U;
                                    __Vfunc_get__29__value[0x00000045U] = 0U;
                                    __Vfunc_get__29__value[0x00000046U] = 0U;
                                    __Vfunc_get__29__value[0x00000047U] = 0U;
                                    __Vfunc_get__29__value[0x00000048U] = 0U;
                                    __Vfunc_get__29__value[0x00000049U] = 0U;
                                    __Vfunc_get__29__value[0x0000004aU] = 0U;
                                    __Vfunc_get__29__value[0x0000004bU] = 0U;
                                    __Vfunc_get__29__value[0x0000004cU] = 0U;
                                    __Vfunc_get__29__value[0x0000004dU] = 0U;
                                    __Vfunc_get__29__value[0x0000004eU] = 0U;
                                    __Vfunc_get__29__value[0x0000004fU] = 0U;
                                    __Vfunc_get__29__value[0x00000050U] = 0U;
                                    __Vfunc_get__29__value[0x00000051U] = 0U;
                                    __Vfunc_get__29__value[0x00000052U] = 0U;
                                    __Vfunc_get__29__value[0x00000053U] = 0U;
                                    __Vfunc_get__29__value[0x00000054U] = 0U;
                                    __Vfunc_get__29__value[0x00000055U] = 0U;
                                    __Vfunc_get__29__value[0x00000056U] = 0U;
                                    __Vfunc_get__29__value[0x00000057U] = 0U;
                                    __Vfunc_get__29__value[0x00000058U] = 0U;
                                    __Vfunc_get__29__value[0x00000059U] = 0U;
                                    __Vfunc_get__29__value[0x0000005aU] = 0U;
                                    __Vfunc_get__29__value[0x0000005bU] = 0U;
                                    __Vfunc_get__29__value[0x0000005cU] = 0U;
                                    __Vfunc_get__29__value[0x0000005dU] = 0U;
                                    __Vfunc_get__29__value[0x0000005eU] = 0U;
                                    __Vfunc_get__29__value[0x0000005fU] = 0U;
                                    __Vfunc_get__29__value[0x00000060U] = 0U;
                                    __Vfunc_get__29__value[0x00000061U] = 0U;
                                    __Vfunc_get__29__value[0x00000062U] = 0U;
                                    __Vfunc_get__29__value[0x00000063U] = 0U;
                                    __Vfunc_get__29__value[0x00000064U] = 0U;
                                    __Vfunc_get__29__value[0x00000065U] = 0U;
                                    __Vfunc_get__29__value[0x00000066U] = 0U;
                                    __Vfunc_get__29__value[0x00000067U] = 0U;
                                    __Vfunc_get__29__value[0x00000068U] = 0U;
                                    __Vfunc_get__29__value[0x00000069U] = 0U;
                                    __Vfunc_get__29__value[0x0000006aU] = 0U;
                                    __Vfunc_get__29__value[0x0000006bU] = 0U;
                                    __Vfunc_get__29__value[0x0000006cU] = 0U;
                                    __Vfunc_get__29__value[0x0000006dU] = 0U;
                                    __Vfunc_get__29__value[0x0000006eU] = 0U;
                                    __Vfunc_get__29__value[0x0000006fU] = 0U;
                                    __Vfunc_get__29__value[0x00000070U] = 0U;
                                    __Vfunc_get__29__value[0x00000071U] = 0U;
                                    __Vfunc_get__29__value[0x00000072U] = 0U;
                                    __Vfunc_get__29__value[0x00000073U] = 0U;
                                    __Vfunc_get__29__value[0x00000074U] = 0U;
                                    __Vfunc_get__29__value[0x00000075U] = 0U;
                                    __Vfunc_get__29__value[0x00000076U] = 0U;
                                    __Vfunc_get__29__value[0x00000077U] = 0U;
                                    __Vfunc_get__29__value[0x00000078U] = 0U;
                                    __Vfunc_get__29__value[0x00000079U] = 0U;
                                    __Vfunc_get__29__value[0x0000007aU] = 0U;
                                    __Vfunc_get__29__value[0x0000007bU] = 0U;
                                    __Vfunc_get__29__value[0x0000007cU] = 0U;
                                    __Vfunc_get__29__value[0x0000007dU] = 0U;
                                    __Vfunc_get__29__value[0x0000007eU] = 0U;
                                    __Vfunc_get__29__value[0x0000007fU] = 0U;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz8__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component>{this}, ""s, "recording_detail"s, __Vfunc_get__29__value, __Vfunc_get__29__Vfuncout);
                                    this->__PVT__recording_detail 
                                        = __Vfunc_get__29__value[0U];
                                }(), (IData)(__Vfunc_get__29__Vfuncout))))) {
                    __Vtask_get__30__value = this->__PVT__recording_detail;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db___Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component>{this}, ""s, "recording_detail"s, __Vtask_get__30__value, __Vtask_get__30__Vfuncout);
                    this->__PVT__recording_detail = __Vtask_get__30__value;
                }
                VL_NULL_CHECK(Vuart_example_uvm_pkg__03a__03auvm_report_object::__PVT__m_rh, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 1678)
                                           ->__VnoInFunc_set_name(vlProcess, vlSymsp, 
                                                                  VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__32__Vfuncout);
                            }(), __Vfunc_get_full_name__32__Vfuncout)));
                this->__VnoInFunc_set_report_verbosity_level(vlProcess, vlSymsp, 
                                                             ([&]() {
                            VL_NULL_CHECK(parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 1679)
                                                              ->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, ""s, __Vtask_get_report_verbosity_level__34__Vfuncout);
                        }(), __Vtask_get_report_verbosity_level__34__Vfuncout));
                this->__VnoInFunc_m_set_cl_msg_args(vlProcess, vlSymsp);
                __Vlabel0: ;
            }
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_add_child(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component> child, CData/*0:0*/ &m_add_child__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_add_child\n"); );
            // Locals
            std::string __Vtask_get_name__36__Vfuncout;
            std::string __Vtask_get_name__37__Vfuncout;
            IData/*31:0*/ __Vfunc_uvm_report_enabled__38__Vfuncout;
            __Vfunc_uvm_report_enabled__38__Vfuncout = 0;
            std::string __Vtask_get_name__40__Vfuncout;
            std::string __Vtask_get_type_name__41__Vfuncout;
            std::string __Vtask_get_name__42__Vfuncout;
            IData/*31:0*/ __Vfunc_uvm_report_enabled__43__Vfuncout;
            __Vfunc_uvm_report_enabled__43__Vfuncout = 0;
            std::string __Vtask_get_name__45__Vfuncout;
            std::string __Vtask_get_name__46__Vfuncout;
            std::string __Vtask_get_name__47__Vfuncout;
            std::string __Vtemp_1;
            std::string __Vtemp_2;
            std::string __Vtemp_3;
            std::string __Vtemp_4;
            // Body
            {
                if ((this->__PVT__m_children.exists(
                                                    ([&]() {
                                    VL_NULL_CHECK(child, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 1691)
                                                     ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__36__Vfuncout);
                                }(), __Vtask_get_name__36__Vfuncout)) 
                     && (this->__PVT__m_children.at(
                                                    ([&]() {
                                        VL_NULL_CHECK(child, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 1692)
                                                     ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__37__Vfuncout);
                                    }(), __Vtask_get_name__37__Vfuncout)) 
                         != child))) {
                    if ((0U != ([&]() {
                                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "BDCLD"s, __Vfunc_uvm_report_enabled__38__Vfuncout);
                                }(), __Vfunc_uvm_report_enabled__38__Vfuncout))) {
                        __Vtemp_1 = ([&]() {
                                VL_NULL_CHECK(child, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 1695)
                                     ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__40__Vfuncout);
                            }(), __Vtask_get_name__40__Vfuncout);
                        __Vtemp_2 = ([&]() {
                                VL_NULL_CHECK(this->__PVT__m_children
                                              .at(([&]() {
                                                VL_NULL_CHECK(child, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 1695)
                                                   ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__42__Vfuncout);
                                            }(), __Vtask_get_name__42__Vfuncout)), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 1695)
                                     ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__41__Vfuncout);
                            }(), __Vtask_get_type_name__41__Vfuncout);
                        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "BDCLD"s, VL_SFORMATF_N_NX("A child with the name '%0@' (type=%0@) already exists.",0,
                                                                                -1,
                                                                                &(__Vtemp_1),
                                                                                -1,
                                                                                &(__Vtemp_2)) , 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh"s, 0x0000069fU, ""s, 1U);
                    }
                    m_add_child__Vfuncrtn = 0U;
                    goto __Vlabel0;
                }
                if (this->__PVT__m_children_by_handle.exists(child)) {
                    if ((0U != ([&]() {
                                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "BDCHLD"s, __Vfunc_uvm_report_enabled__43__Vfuncout);
                                }(), __Vfunc_uvm_report_enabled__43__Vfuncout))) {
                        __Vtemp_3 = ([&]() {
                                VL_NULL_CHECK(child, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 1704)
                                     ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__45__Vfuncout);
                            }(), __Vtask_get_name__45__Vfuncout);
                        __Vtemp_4 = ([&]() {
                                VL_NULL_CHECK(this->__PVT__m_children_by_handle
                                              .at(child), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 1704)
                                     ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__46__Vfuncout);
                            }(), __Vtask_get_name__46__Vfuncout);
                        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "BDCHLD"s, VL_SFORMATF_N_NX("A child with the name '%0@' already exists in parent under name ' %0@'",0,
                                                                                -1,
                                                                                &(__Vtemp_3),
                                                                                -1,
                                                                                &(__Vtemp_4)) , 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh"s, 0x000006a8U, ""s, 1U);
                    }
                    m_add_child__Vfuncrtn = 0U;
                    goto __Vlabel0;
                }
                this->__PVT__m_children.at(([&]() {
                            VL_NULL_CHECK(child, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 1708)
                                            ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__47__Vfuncout);
                        }(), __Vtask_get_name__47__Vfuncout)) 
                    = child;
                this->__PVT__m_children_by_handle.at(child) 
                    = child;
                m_add_child__Vfuncrtn = 1U;
                __Vlabel0: ;
            }
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_children(Vuart_example__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component>> &children) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_children\n"); );
            // Body
            std::string unnamedblk180__DOT__i;
            CData/*0:0*/ unnamedblk180__DOT__i__Vfirst;
            unnamedblk180__DOT__i__Vfirst = 0;
            if ((0U != this->__PVT__m_children.first(unnamedblk180__DOT__i))) {
                unnamedblk180__DOT__i__Vfirst = 1U;
                while (((IData)(unnamedblk180__DOT__i__Vfirst) 
                        || (0U != this->__PVT__m_children.next(unnamedblk180__DOT__i)))) {
                    unnamedblk180__DOT__i__Vfirst = 0U;
                    children.push_back(this->__PVT__m_children
                                       .at(unnamedblk180__DOT__i));
                }
            }
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_first_child(Vuart_example__Syms* __restrict vlSymsp, std::string &name, IData/*31:0*/ &get_first_child__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_first_child\n"); );
            // Body
            get_first_child__Vfuncrtn = this->__PVT__m_children.first(name);
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_next_child(Vuart_example__Syms* __restrict vlSymsp, std::string &name, IData/*31:0*/ &get_next_child__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_next_child\n"); );
            // Body
            get_next_child__Vfuncrtn = this->__PVT__m_children.next(name);
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_child(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component> &get_child__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_child\n"); );
            // Locals
            IData/*31:0*/ __Vfunc_uvm_report_enabled__48__Vfuncout;
            __Vfunc_uvm_report_enabled__48__Vfuncout = 0;
            std::string __Vfunc_get_full_name__50__Vfuncout;
            // Body
            {
                if (this->__PVT__m_children.exists(name)) {
                    get_child__Vfuncrtn = this->__PVT__m_children
                        .at(name);
                    goto __Vlabel0;
                }
                if ((0U != ([&]() {
                                this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "NOCHILD"s, __Vfunc_uvm_report_enabled__48__Vfuncout);
                            }(), __Vfunc_uvm_report_enabled__48__Vfuncout))) {
                    this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "NOCHILD"s, 
                                                         VL_CVT_PACK_STR_NN(
                                                                            VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Component with name '"s, name), "' is not a child of component '"s), 
                                                                                ([&]() {
                                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__50__Vfuncout);
                                        }(), __Vfunc_get_full_name__50__Vfuncout)), "'"s)), 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh"s, 0x000006daU, ""s, 1U);
                }
                get_child__Vfuncrtn = VlNull{};
                __Vlabel0: ;
            }
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_has_child(Vuart_example__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ &has_child__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_has_child\n"); );
            // Body
            has_child__Vfuncrtn = this->__PVT__m_children.exists(name);
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_num_children(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_children__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_num_children\n"); );
            // Body
            get_num_children__Vfuncrtn = this->__PVT__m_children.size();
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_full_name(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_full_name\n"); );
            // Locals
            std::string __Vfunc_get_name__51__Vfuncout;
            // Body
            get_full_name__Vfuncrtn = ((""s == this->__PVT__m_name)
                                        ? ([&]() {
                        this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__51__Vfuncout);
                    }(), __Vfunc_get_name__51__Vfuncout)
                                        : this->__PVT__m_name);
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_parent(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component> &get_parent__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_parent\n"); );
            // Body
            get_parent__Vfuncrtn = this->__PVT__m_parent;
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_name(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string name) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_name\n"); );
            // Locals
            IData/*31:0*/ __Vfunc_uvm_report_enabled__52__Vfuncout;
            __Vfunc_uvm_report_enabled__52__Vfuncout = 0;
            // Body
            {
                if ((""s != this->__PVT__m_name)) {
                    if ((0U != ([&]() {
                                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "INVSTNM"s, __Vfunc_uvm_report_enabled__52__Vfuncout);
                                }(), __Vfunc_uvm_report_enabled__52__Vfuncout))) {
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "INVSTNM"s, VL_SFORMATF_N_NX("It is illegal to change the name of a component. The component name will not be changed to \"%@\"",0,
                                                                                -1,
                                                                                &(name)) , 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh"s, 0x00000709U, ""s, 1U);
                    }
                    goto __Vlabel0;
                }
                Vuart_example_uvm_pkg__03a__03auvm_object::__VnoInFunc_set_name(vlProcess, vlSymsp, name);
                this->__VnoInFunc_m_set_full_name(vlProcess, vlSymsp);
                __Vlabel0: ;
            }
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_full_name(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_full_name\n"); );
            // Locals
            std::string __Vfunc_get_name__56__Vfuncout;
            std::string __Vtask_get_full_name__57__Vfuncout;
            std::string __Vfunc_get_name__58__Vfuncout;
            // Body
            std::string unnamedblk181__DOT__c;
            CData/*0:0*/ unnamedblk181__DOT__c__Vfirst;
            unnamedblk181__DOT__c__Vfirst = 0;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component> unnamedblk181__DOT__unnamedblk182__DOT__tmp;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> top;
            if ((VL_CAST_DYNAMIC(this->__PVT__m_parent, top) 
                 || (VlNull{} == this->__PVT__m_parent))) {
                this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__56__Vfuncout);
                this->__PVT__m_name = __Vfunc_get_name__56__Vfuncout;
            } else {
                this->__PVT__m_name = VL_CONCATN_NNN(
                                                     VL_CONCATN_NNN(
                                                                    ([&]() {
                                VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 1818)
                                                                     ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__57__Vfuncout);
                            }(), __Vtask_get_full_name__57__Vfuncout), "."s), 
                                                     ([&]() {
                            this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__58__Vfuncout);
                        }(), __Vfunc_get_name__58__Vfuncout));
            }
            if ((0U != this->__PVT__m_children.first(unnamedblk181__DOT__c))) {
                unnamedblk181__DOT__c__Vfirst = 1U;
                while (((IData)(unnamedblk181__DOT__c__Vfirst) 
                        || (0U != this->__PVT__m_children.next(unnamedblk181__DOT__c)))) {
                    unnamedblk181__DOT__c__Vfirst = 0U;
                    unnamedblk181__DOT__unnamedblk182__DOT__tmp 
                        = this->__PVT__m_children.at(unnamedblk181__DOT__c);
                    VL_NULL_CHECK(unnamedblk181__DOT__unnamedblk182__DOT__tmp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 1823)
                                           ->__VnoInFunc_m_set_full_name(vlProcess, vlSymsp);
                }
            }
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_lookup(Vuart_example__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component> &lookup__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_lookup\n"); );
            // Locals
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__60__Vfuncout;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__61__Vfuncout;
            std::string __Vtask_m_extract_name__62__leaf;
            std::string __Vtask_m_extract_name__62__remainder;
            std::string __Vtask_m_extract_name__63__leaf;
            std::string __Vtask_m_extract_name__63__remainder;
            IData/*31:0*/ __Vtask_has_child__64__Vfuncout;
            __Vtask_has_child__64__Vfuncout = 0;
            IData/*31:0*/ __Vfunc_uvm_report_enabled__65__Vfuncout;
            __Vfunc_uvm_report_enabled__65__Vfuncout = 0;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component> __Vtask_lookup__67__Vfuncout;
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            std::string leaf;
            std::string remainder;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component> comp;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> top;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> cs;
            {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__60__Vfuncout);
                cs = __Vfunc_get__60__Vfuncout;
                VL_NULL_CHECK(cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 1839)
                                           ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__61__Vfuncout);
                top = __Vtask_get_root__61__Vfuncout;
                comp = VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component>{this};
                this->__VnoInFunc_m_extract_name(vlSymsp, name, __Vtask_m_extract_name__62__leaf, __Vtask_m_extract_name__62__remainder);
                leaf = __Vtask_m_extract_name__62__leaf;
                remainder = __Vtask_m_extract_name__62__remainder;
                if ((""s == leaf)) {
                    comp = top;
                    this->__VnoInFunc_m_extract_name(vlSymsp, remainder, __Vtask_m_extract_name__63__leaf, __Vtask_m_extract_name__63__remainder);
                    leaf = __Vtask_m_extract_name__63__leaf;
                    remainder = __Vtask_m_extract_name__63__remainder;
                }
                if ((1U & (~ (0U != ([&]() {
                                        VL_NULL_CHECK(comp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 1850)
                                     ->__VnoInFunc_has_child(vlSymsp, leaf, __Vtask_has_child__64__Vfuncout);
                                    }(), __Vtask_has_child__64__Vfuncout))))) {
                    if ((0U != ([&]() {
                                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "Lookup Error"s, __Vfunc_uvm_report_enabled__65__Vfuncout);
                                }(), __Vfunc_uvm_report_enabled__65__Vfuncout))) {
                        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "Lookup Error"s, VL_SFORMATF_N_NX("Cannot find child %0@",0,
                                                                                -1,
                                                                                &(leaf)) , 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh"s, 0x0000073cU, ""s, 1U);
                    }
                    lookup__Vfuncrtn = VlNull{};
                    goto __Vlabel0;
                }
                if ((""s != remainder)) {
                    VL_NULL_CHECK(VL_NULL_CHECK(comp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 1857)
                                  ->__PVT__m_children
                                  .at(leaf), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 1857)
                                           ->__VnoInFunc_lookup(vlSymsp, remainder, __Vtask_lookup__67__Vfuncout);
                    lookup__Vfuncrtn = __Vtask_lookup__67__Vfuncout;
                    goto __Vlabel0;
                }
                lookup__Vfuncrtn = VL_NULL_CHECK(comp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 1859)
                    ->__PVT__m_children.at(leaf);
                __Vlabel0: ;
            }
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_depth(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &get_depth__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_depth\n"); );
            // Body
            IData/*31:0*/ unnamedblk183__DOT__i;
            unnamedblk183__DOT__i = 0;
            {
                if ((""s == this->__PVT__m_name)) {
                    get_depth__Vfuncrtn = 0U;
                    goto __Vlabel0;
                }
                get_depth__Vfuncrtn = 1U;
                unnamedblk183__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk183__DOT__i, 
                                  VL_LEN_IN(this->__PVT__m_name))) {
                    if ((0x2eU == VL_GETC_N(this->__PVT__m_name,unnamedblk183__DOT__i))) {
                        get_depth__Vfuncrtn = ((IData)(1U) 
                                               + get_depth__Vfuncrtn);
                    }
                    unnamedblk183__DOT__i = ((IData)(1U) 
                                             + unnamedblk183__DOT__i);
                }
                __Vlabel0: ;
            }
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_extract_name(Vuart_example__Syms* __restrict vlSymsp, std::string name, std::string &leaf, std::string &remainder) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_extract_name\n"); );
            // Body
            IData/*31:0*/ i;
            i = 0;
            IData/*31:0*/ len;
            len = 0;
            {
                len = VL_LEN_IN(name);
                i = 0U;
                {
                    while (VL_LTS_III(32, i, VL_LEN_IN(name))) {
                        if ((0x2eU == VL_GETC_N(name,i))) {
                            goto __Vlabel1;
                        }
                        i = ((IData)(1U) + i);
                    }
                    __Vlabel1: ;
                }
                if ((i == len)) {
                    leaf = name;
                    remainder = ""s;
                    goto __Vlabel0;
                }
                leaf = VL_SUBSTR_N(name,0U,(i - (IData)(1U)));
                remainder = VL_SUBSTR_N(name,((IData)(1U) 
                                              + i),
                                        (len - (IData)(1U)));
                __Vlabel0: ;
            }
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_flush(Vuart_example__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_flush\n"); );
            // Body
            std::string unnamedblk184__DOT__s;
            CData/*0:0*/ unnamedblk184__DOT__s__Vfirst;
            unnamedblk184__DOT__s__Vfirst = 0;
            if ((0U != this->__PVT__m_children.first(unnamedblk184__DOT__s))) {
                unnamedblk184__DOT__s__Vfirst = 1U;
                while (((IData)(unnamedblk184__DOT__s__Vfirst) 
                        || (0U != this->__PVT__m_children.next(unnamedblk184__DOT__s)))) {
                    unnamedblk184__DOT__s__Vfirst = 0U;
                    VL_NULL_CHECK(this->__PVT__m_children
                                  .at(unnamedblk184__DOT__s), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 1916)
                                           ->__VnoInFunc_do_flush(vlSymsp);
                }
            }
            this->__VnoInFunc_flush(vlSymsp);
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_create(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_create\n"); );
            // Locals
            IData/*31:0*/ __Vfunc_uvm_report_enabled__70__Vfuncout;
            __Vfunc_uvm_report_enabled__70__Vfuncout = 0;
            // Body
            if ((0U != ([&]() {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "ILLCRT"s, __Vfunc_uvm_report_enabled__70__Vfuncout);
                        }(), __Vfunc_uvm_report_enabled__70__Vfuncout))) {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "ILLCRT"s, "create cannot be called on a uvm_component. Use create_component instead."s, 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh"s, 0x0000078eU, ""s, 1U);
            }
            create__Vfuncrtn = VlNull{};
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_clone(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_clone\n"); );
            // Locals
            IData/*31:0*/ __Vfunc_uvm_report_enabled__72__Vfuncout;
            __Vfunc_uvm_report_enabled__72__Vfuncout = 0;
            std::string __Vfunc_get_full_name__74__Vfuncout;
            std::string __Vtemp_1;
            // Body
            if ((0U != ([&]() {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "ILLCLN"s, __Vfunc_uvm_report_enabled__72__Vfuncout);
                        }(), __Vfunc_uvm_report_enabled__72__Vfuncout))) {
                __Vtemp_1 = ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__74__Vfuncout);
                    }(), __Vfunc_get_full_name__74__Vfuncout);
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "ILLCLN"s, VL_SFORMATF_N_NX("Attempting to clone '%@'.  Clone cannot be called on a uvm_component.  The clone target variable will be set to null.",0,
                                                                                -1,
                                                                                &(__Vtemp_1)) , 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh"s, 0x00000797U, ""s, 1U);
            }
            clone__Vfuncrtn = VlNull{};
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_print_override_info(Vuart_example__Syms* __restrict vlSymsp, std::string requested_type_name, std::string name) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_print_override_info\n"); );
            // Locals
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__75__Vfuncout;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_factory> __Vtask_get_factory__76__Vfuncout;
            std::string __Vfunc_get_full_name__78__Vfuncout;
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> cs;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__75__Vfuncout);
            cs = __Vfunc_get__75__Vfuncout;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_factory> factory;
            VL_NULL_CHECK(cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 1954)
                                           ->__VnoInFunc_get_factory(vlSymsp, __Vtask_get_factory__76__Vfuncout);
            factory = __Vtask_get_factory__76__Vfuncout;
            VL_NULL_CHECK(factory, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 1955)
                                           ->__VnoInFunc_debug_create_by_name(vlSymsp, requested_type_name, 
                                                                              VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__78__Vfuncout);
                        }(), __Vfunc_get_full_name__78__Vfuncout)), name);
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_create_component(Vuart_example__Syms* __restrict vlSymsp, std::string requested_type_name, std::string name, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component> &create_component__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_create_component\n"); );
            // Locals
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__79__Vfuncout;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_factory> __Vtask_get_factory__80__Vfuncout;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component> __Vtask_create_component_by_name__81__Vfuncout;
            std::string __Vfunc_get_full_name__82__Vfuncout;
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> cs;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_factory> factory;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__79__Vfuncout);
            cs = __Vfunc_get__79__Vfuncout;
            VL_NULL_CHECK(cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 1965)
                                           ->__VnoInFunc_get_factory(vlSymsp, __Vtask_get_factory__80__Vfuncout);
            factory = __Vtask_get_factory__80__Vfuncout;
            VL_NULL_CHECK(factory, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 1966)
                                           ->__VnoInFunc_create_component_by_name(vlProcess, vlSymsp, requested_type_name, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__82__Vfuncout);
                        }(), __Vfunc_get_full_name__82__Vfuncout)), name, 
                                                                                VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component>{this}, __Vtask_create_component_by_name__81__Vfuncout);
            create_component__Vfuncrtn = __Vtask_create_component_by_name__81__Vfuncout;
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_create_object(Vuart_example__Syms* __restrict vlSymsp, std::string requested_type_name, std::string name, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> &create_object__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_create_object\n"); );
            // Locals
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__83__Vfuncout;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_factory> __Vtask_get_factory__84__Vfuncout;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> __Vtask_create_object_by_name__85__Vfuncout;
            std::string __Vfunc_get_full_name__86__Vfuncout;
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> cs;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_factory> factory;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__83__Vfuncout);
            cs = __Vfunc_get__83__Vfuncout;
            VL_NULL_CHECK(cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 1977)
                                           ->__VnoInFunc_get_factory(vlSymsp, __Vtask_get_factory__84__Vfuncout);
            factory = __Vtask_get_factory__84__Vfuncout;
            VL_NULL_CHECK(factory, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 1978)
                                           ->__VnoInFunc_create_object_by_name(vlSymsp, requested_type_name, 
                                                                               VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__86__Vfuncout);
                        }(), __Vfunc_get_full_name__86__Vfuncout)), name, __Vtask_create_object_by_name__85__Vfuncout);
            create_object__Vfuncrtn = __Vtask_create_object_by_name__85__Vfuncout;
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_inst_override(Vuart_example__Syms* __restrict vlSymsp, std::string relative_inst_path, std::string original_type_name, std::string override_type_name) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_inst_override\n"); );
            // Locals
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__87__Vfuncout;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_factory> __Vtask_get_factory__88__Vfuncout;
            std::string __Vfunc_get_full_name__89__Vfuncout;
            std::string __Vfunc_get_full_name__90__Vfuncout;
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            std::string full_inst_path;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> cs;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__87__Vfuncout);
            cs = __Vfunc_get__87__Vfuncout;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_factory> factory;
            VL_NULL_CHECK(cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2015)
                                           ->__VnoInFunc_get_factory(vlSymsp, __Vtask_get_factory__88__Vfuncout);
            factory = __Vtask_get_factory__88__Vfuncout;
            full_inst_path = ((""s == relative_inst_path)
                               ? ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__89__Vfuncout);
                    }(), __Vfunc_get_full_name__89__Vfuncout)
                               : VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                               ([&]() {
                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__90__Vfuncout);
                            }(), __Vfunc_get_full_name__90__Vfuncout), "."s), relative_inst_path));
            VL_NULL_CHECK(factory, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2022)
                                           ->__VnoInFunc_set_inst_override_by_name(vlProcess, vlSymsp, original_type_name, override_type_name, full_inst_path);
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_inst_override_by_type(Vuart_example__Syms* __restrict vlSymsp, std::string relative_inst_path, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_wrapper> original_type, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_wrapper> override_type) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_inst_override_by_type\n"); );
            // Locals
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__92__Vfuncout;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_factory> __Vtask_get_factory__93__Vfuncout;
            std::string __Vfunc_get_full_name__94__Vfuncout;
            std::string __Vfunc_get_full_name__95__Vfuncout;
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            std::string full_inst_path;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> cs;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__92__Vfuncout);
            cs = __Vfunc_get__92__Vfuncout;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_factory> factory;
            VL_NULL_CHECK(cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2037)
                                           ->__VnoInFunc_get_factory(vlSymsp, __Vtask_get_factory__93__Vfuncout);
            factory = __Vtask_get_factory__93__Vfuncout;
            full_inst_path = ((""s == relative_inst_path)
                               ? ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__94__Vfuncout);
                    }(), __Vfunc_get_full_name__94__Vfuncout)
                               : VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                               ([&]() {
                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__95__Vfuncout);
                            }(), __Vfunc_get_full_name__95__Vfuncout), "."s), relative_inst_path));
            VL_NULL_CHECK(factory, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2044)
                                           ->__VnoInFunc_set_inst_override_by_type(vlSymsp, original_type, override_type, full_inst_path);
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_id_verbosity_hier(Vuart_example__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ verbosity) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_id_verbosity_hier\n"); );
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            std::string unnamedblk185__DOT__c;
            CData/*0:0*/ unnamedblk185__DOT__c__Vfirst;
            unnamedblk185__DOT__c__Vfirst = 0;
            this->__VnoInFunc_set_report_id_verbosity(vlProcess, vlSymsp, id, verbosity);
            if ((0U != this->__PVT__m_children.first(unnamedblk185__DOT__c))) {
                unnamedblk185__DOT__c__Vfirst = 1U;
                while (((IData)(unnamedblk185__DOT__c__Vfirst) 
                        || (0U != this->__PVT__m_children.next(unnamedblk185__DOT__c)))) {
                    unnamedblk185__DOT__c__Vfirst = 0U;
                    VL_NULL_CHECK(this->__PVT__m_children
                                  .at(unnamedblk185__DOT__c), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2062)
                                           ->__VnoInFunc_set_report_id_verbosity_hier(vlSymsp, id, verbosity);
                }
            }
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_severity_id_verbosity_hier(Vuart_example__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ verbosity) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_severity_id_verbosity_hier\n"); );
            // Body
            std::string unnamedblk186__DOT__c;
            CData/*0:0*/ unnamedblk186__DOT__c__Vfirst;
            unnamedblk186__DOT__c__Vfirst = 0;
            this->__VnoInFunc_set_report_severity_id_verbosity(vlSymsp, severity, id, verbosity);
            if ((0U != this->__PVT__m_children.first(unnamedblk186__DOT__c))) {
                unnamedblk186__DOT__c__Vfirst = 1U;
                while (((IData)(unnamedblk186__DOT__c__Vfirst) 
                        || (0U != this->__PVT__m_children.next(unnamedblk186__DOT__c)))) {
                    unnamedblk186__DOT__c__Vfirst = 0U;
                    VL_NULL_CHECK(this->__PVT__m_children
                                  .at(unnamedblk186__DOT__c), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2074)
                                           ->__VnoInFunc_set_report_severity_id_verbosity_hier(vlSymsp, severity, id, verbosity);
                }
            }
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_severity_action_hier(Vuart_example__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ action) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_severity_action_hier\n"); );
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            std::string unnamedblk187__DOT__c;
            CData/*0:0*/ unnamedblk187__DOT__c__Vfirst;
            unnamedblk187__DOT__c__Vfirst = 0;
            this->__VnoInFunc_set_report_severity_action(vlProcess, vlSymsp, severity, action);
            if ((0U != this->__PVT__m_children.first(unnamedblk187__DOT__c))) {
                unnamedblk187__DOT__c__Vfirst = 1U;
                while (((IData)(unnamedblk187__DOT__c__Vfirst) 
                        || (0U != this->__PVT__m_children.next(unnamedblk187__DOT__c)))) {
                    unnamedblk187__DOT__c__Vfirst = 0U;
                    VL_NULL_CHECK(this->__PVT__m_children
                                  .at(unnamedblk187__DOT__c), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2085)
                                           ->__VnoInFunc_set_report_severity_action_hier(vlSymsp, severity, action);
                }
            }
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_id_action_hier(Vuart_example__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ action) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_id_action_hier\n"); );
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            std::string unnamedblk188__DOT__c;
            CData/*0:0*/ unnamedblk188__DOT__c__Vfirst;
            unnamedblk188__DOT__c__Vfirst = 0;
            this->__VnoInFunc_set_report_id_action(vlProcess, vlSymsp, id, action);
            if ((0U != this->__PVT__m_children.first(unnamedblk188__DOT__c))) {
                unnamedblk188__DOT__c__Vfirst = 1U;
                while (((IData)(unnamedblk188__DOT__c__Vfirst) 
                        || (0U != this->__PVT__m_children.next(unnamedblk188__DOT__c)))) {
                    unnamedblk188__DOT__c__Vfirst = 0U;
                    VL_NULL_CHECK(this->__PVT__m_children
                                  .at(unnamedblk188__DOT__c), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2095)
                                           ->__VnoInFunc_set_report_id_action_hier(vlSymsp, id, action);
                }
            }
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_severity_id_action_hier(Vuart_example__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ action) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_severity_id_action_hier\n"); );
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            std::string unnamedblk189__DOT__c;
            CData/*0:0*/ unnamedblk189__DOT__c__Vfirst;
            unnamedblk189__DOT__c__Vfirst = 0;
            this->__VnoInFunc_set_report_severity_id_action(vlProcess, vlSymsp, severity, id, action);
            if ((0U != this->__PVT__m_children.first(unnamedblk189__DOT__c))) {
                unnamedblk189__DOT__c__Vfirst = 1U;
                while (((IData)(unnamedblk189__DOT__c__Vfirst) 
                        || (0U != this->__PVT__m_children.next(unnamedblk189__DOT__c)))) {
                    unnamedblk189__DOT__c__Vfirst = 0U;
                    VL_NULL_CHECK(this->__PVT__m_children
                                  .at(unnamedblk189__DOT__c), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2107)
                                           ->__VnoInFunc_set_report_severity_id_action_hier(vlSymsp, severity, id, action);
                }
            }
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_severity_file_hier(Vuart_example__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ file) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_severity_file_hier\n"); );
            // Body
            std::string unnamedblk190__DOT__c;
            CData/*0:0*/ unnamedblk190__DOT__c__Vfirst;
            unnamedblk190__DOT__c__Vfirst = 0;
            this->__VnoInFunc_set_report_severity_file(vlSymsp, severity, file);
            if ((0U != this->__PVT__m_children.first(unnamedblk190__DOT__c))) {
                unnamedblk190__DOT__c__Vfirst = 1U;
                while (((IData)(unnamedblk190__DOT__c__Vfirst) 
                        || (0U != this->__PVT__m_children.next(unnamedblk190__DOT__c)))) {
                    unnamedblk190__DOT__c__Vfirst = 0U;
                    VL_NULL_CHECK(this->__PVT__m_children
                                  .at(unnamedblk190__DOT__c), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2118)
                                           ->__VnoInFunc_set_report_severity_file_hier(vlSymsp, severity, file);
                }
            }
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_default_file_hier(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ file) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_default_file_hier\n"); );
            // Body
            std::string unnamedblk191__DOT__c;
            CData/*0:0*/ unnamedblk191__DOT__c__Vfirst;
            unnamedblk191__DOT__c__Vfirst = 0;
            this->__VnoInFunc_set_report_default_file(vlSymsp, file);
            if ((0U != this->__PVT__m_children.first(unnamedblk191__DOT__c))) {
                unnamedblk191__DOT__c__Vfirst = 1U;
                while (((IData)(unnamedblk191__DOT__c__Vfirst) 
                        || (0U != this->__PVT__m_children.next(unnamedblk191__DOT__c)))) {
                    unnamedblk191__DOT__c__Vfirst = 0U;
                    VL_NULL_CHECK(this->__PVT__m_children
                                  .at(unnamedblk191__DOT__c), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2128)
                                           ->__VnoInFunc_set_report_default_file_hier(vlSymsp, file);
                }
            }
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_id_file_hier(Vuart_example__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ file) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_id_file_hier\n"); );
            // Body
            std::string unnamedblk192__DOT__c;
            CData/*0:0*/ unnamedblk192__DOT__c__Vfirst;
            unnamedblk192__DOT__c__Vfirst = 0;
            this->__VnoInFunc_set_report_id_file(vlSymsp, id, file);
            if ((0U != this->__PVT__m_children.first(unnamedblk192__DOT__c))) {
                unnamedblk192__DOT__c__Vfirst = 1U;
                while (((IData)(unnamedblk192__DOT__c__Vfirst) 
                        || (0U != this->__PVT__m_children.next(unnamedblk192__DOT__c)))) {
                    unnamedblk192__DOT__c__Vfirst = 0U;
                    VL_NULL_CHECK(this->__PVT__m_children
                                  .at(unnamedblk192__DOT__c), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2138)
                                           ->__VnoInFunc_set_report_id_file_hier(vlSymsp, id, file);
                }
            }
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_severity_id_file_hier(Vuart_example__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ file) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_severity_id_file_hier\n"); );
            // Body
            std::string unnamedblk193__DOT__c;
            CData/*0:0*/ unnamedblk193__DOT__c__Vfirst;
            unnamedblk193__DOT__c__Vfirst = 0;
            this->__VnoInFunc_set_report_severity_id_file(vlSymsp, severity, id, file);
            if ((0U != this->__PVT__m_children.first(unnamedblk193__DOT__c))) {
                unnamedblk193__DOT__c__Vfirst = 1U;
                while (((IData)(unnamedblk193__DOT__c__Vfirst) 
                        || (0U != this->__PVT__m_children.next(unnamedblk193__DOT__c)))) {
                    unnamedblk193__DOT__c__Vfirst = 0U;
                    VL_NULL_CHECK(this->__PVT__m_children
                                  .at(unnamedblk193__DOT__c), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2150)
                                           ->__VnoInFunc_set_report_severity_id_file_hier(vlSymsp, severity, id, file);
                }
            }
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_verbosity_level_hier(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ verbosity) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_report_verbosity_level_hier\n"); );
            // Body
            std::string unnamedblk194__DOT__c;
            CData/*0:0*/ unnamedblk194__DOT__c__Vfirst;
            unnamedblk194__DOT__c__Vfirst = 0;
            this->__VnoInFunc_set_report_verbosity_level(vlProcess, vlSymsp, verbosity);
            if ((0U != this->__PVT__m_children.first(unnamedblk194__DOT__c))) {
                unnamedblk194__DOT__c__Vfirst = 1U;
                while (((IData)(unnamedblk194__DOT__c__Vfirst) 
                        || (0U != this->__PVT__m_children.next(unnamedblk194__DOT__c)))) {
                    unnamedblk194__DOT__c__Vfirst = 0U;
                    VL_NULL_CHECK(this->__PVT__m_children
                                  .at(unnamedblk194__DOT__c), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2160)
                                           ->__VnoInFunc_set_report_verbosity_level_hier(vlProcess, vlSymsp, verbosity);
                }
            }
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase\n"); );
            // Locals
            CData/*0:0*/ __Vfunc_use_automatic_config__117__Vfuncout;
            __Vfunc_use_automatic_config__117__Vfuncout = 0;
            // Body
            this->__PVT__m_build_done = 1U;
            if (([&]() {
                        this->__VnoInFunc_use_automatic_config(vlSymsp, __Vfunc_use_automatic_config__117__Vfuncout);
                    }(), (IData)(__Vfunc_use_automatic_config__117__Vfuncout))) {
                this->__VnoInFunc_apply_config_settings(vlProcess, vlSymsp, vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__print_config_matches);
            }
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_connect_phase(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_connect_phase\n"); );
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_start_of_simulation_phase(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_start_of_simulation_phase\n"); );
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_end_of_elaboration_phase(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_end_of_elaboration_phase\n"); );
        }

        VlCoroutine Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_run_phase(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_run_phase\n"); );
            // Body
            VL_KEEP_THIS;
            co_return;
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_extract_phase(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_extract_phase\n"); );
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_check_phase(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_check_phase\n"); );
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_report_phase(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_report_phase\n"); );
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_final_phase(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_final_phase\n"); );
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_pre_reset_phase(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_pre_reset_phase\n"); );
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_reset_phase(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_reset_phase\n"); );
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_post_reset_phase(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_post_reset_phase\n"); );
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_pre_configure_phase(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_pre_configure_phase\n"); );
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_configure_phase(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_configure_phase\n"); );
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_post_configure_phase(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_post_configure_phase\n"); );
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_pre_main_phase(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_pre_main_phase\n"); );
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_main_phase(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_main_phase\n"); );
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_post_main_phase(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_post_main_phase\n"); );
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_pre_shutdown_phase(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_pre_shutdown_phase\n"); );
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_shutdown_phase(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_shutdown_phase\n"); );
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_post_shutdown_phase(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_post_shutdown_phase\n"); );
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_phase_started(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_phase_started\n"); );
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_phase_ended(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_phase_ended\n"); );
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_phase_ready_to_end(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_phase_ready_to_end\n"); );
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_define_domain(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_domain> domain) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_define_domain\n"); );
            // Locals
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> __Vtask_find_by_name__119__Vfuncout;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_domain> __Vfunc_get_common_domain__123__Vfuncout;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> __Vtask_find__124__Vfuncout;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_run_phase> __Vfunc_get__126__Vfuncout;
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_domain> unnamedblk195__DOT__common;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> schedule;
            VL_NULL_CHECK(domain, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2337)
                                           ->__VnoInFunc_find_by_name(vlSymsp, "uvm_sched"s, 1U, __Vtask_find_by_name__119__Vfuncout);
            schedule = __Vtask_find_by_name__119__Vfuncout;
            if ((VlNull{} == schedule)) {
                schedule = VL_NEW(Vuart_example_uvm_pkg__03a__03auvm_phase, vlProcess, vlSymsp, "uvm_sched"s, 3U, VlNull{});
                vlSymsp->TOP__uvm_pkg__03a__03auvm_domain__Vclpkg.__VnoInFunc_add_uvm_phases(vlProcess, vlSymsp, schedule);
                VL_NULL_CHECK(domain, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2342)
                                           ->__VnoInFunc_add(vlProcess, vlSymsp, schedule, VlNull{}, VlNull{}, VlNull{}, VlNull{}, VlNull{});
                vlSymsp->TOP__uvm_pkg__03a__03auvm_domain__Vclpkg.__VnoInFunc_get_common_domain(vlProcess, vlSymsp, __Vfunc_get_common_domain__123__Vfuncout);
                unnamedblk195__DOT__common = __Vfunc_get_common_domain__123__Vfuncout;
                if ((VlNull{} == ([&]() {
                                VL_NULL_CHECK(unnamedblk195__DOT__common, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2344)
                                  ->__VnoInFunc_find(vlProcess, vlSymsp, domain, 0U, __Vtask_find__124__Vfuncout);
                            }(), __Vtask_find__124__Vfuncout))) {
                    VL_NULL_CHECK(unnamedblk195__DOT__common, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2345)
                                           ->__VnoInFunc_add(vlProcess, vlSymsp, domain, 
                                                             ([&]() {
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_run_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__126__Vfuncout);
                            }(), __Vfunc_get__126__Vfuncout), VlNull{}, VlNull{}, VlNull{}, VlNull{});
                }
            }
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_domain(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_domain> domain, IData/*31:0*/ hier) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_domain\n"); );
            // Body
            std::string unnamedblk196__DOT__c;
            CData/*0:0*/ unnamedblk196__DOT__c__Vfirst;
            unnamedblk196__DOT__c__Vfirst = 0;
            this->__PVT__m_domain = domain;
            this->__VnoInFunc_define_domain(vlSymsp, domain);
            if ((0U != hier)) {
                if ((0U != this->__PVT__m_children.first(unnamedblk196__DOT__c))) {
                    unnamedblk196__DOT__c__Vfirst = 1U;
                    while (((IData)(unnamedblk196__DOT__c__Vfirst) 
                            || (0U != this->__PVT__m_children.next(unnamedblk196__DOT__c)))) {
                        unnamedblk196__DOT__c__Vfirst = 0U;
                        VL_NULL_CHECK(this->__PVT__m_children
                                      .at(unnamedblk196__DOT__c), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2365)
                                           ->__VnoInFunc_set_domain(vlSymsp, domain, 1U);
                    }
                }
            }
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_domain(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_domain> &get_domain__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_domain\n"); );
            // Body
            get_domain__Vfuncrtn = this->__PVT__m_domain;
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_suspend(Vuart_example__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_suspend\n"); );
            // Locals
            IData/*31:0*/ __Vfunc_uvm_report_enabled__129__Vfuncout;
            __Vfunc_uvm_report_enabled__129__Vfuncout = 0;
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            if ((0U != ([&]() {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "COMP/SPND/UNIMP"s, __Vfunc_uvm_report_enabled__129__Vfuncout);
                        }(), __Vfunc_uvm_report_enabled__129__Vfuncout))) {
                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "COMP/SPND/UNIMP"s, "suspend() not implemented"s, 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh"s, 0x0000095bU, ""s, 1U);
            }
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_resume(Vuart_example__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_resume\n"); );
            // Locals
            IData/*31:0*/ __Vfunc_uvm_report_enabled__131__Vfuncout;
            __Vfunc_uvm_report_enabled__131__Vfuncout = 0;
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            if ((0U != ([&]() {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "COMP/RSUM/UNIMP"s, __Vfunc_uvm_report_enabled__131__Vfuncout);
                        }(), __Vfunc_uvm_report_enabled__131__Vfuncout))) {
                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "COMP/RSUM/UNIMP"s, "resume() not implemented"s, 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh"s, 0x00000963U, ""s, 1U);
            }
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_resolve_bindings(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_resolve_bindings\n"); );
            // Body
            std::string unnamedblk197__DOT__s;
            CData/*0:0*/ unnamedblk197__DOT__s__Vfirst;
            unnamedblk197__DOT__s__Vfirst = 0;
            if ((0U != this->__PVT__m_children.first(unnamedblk197__DOT__s))) {
                unnamedblk197__DOT__s__Vfirst = 1U;
                while (((IData)(unnamedblk197__DOT__s__Vfirst) 
                        || (0U != this->__PVT__m_children.next(unnamedblk197__DOT__s)))) {
                    unnamedblk197__DOT__s__Vfirst = 0U;
                    VL_NULL_CHECK(this->__PVT__m_children
                                  .at(unnamedblk197__DOT__s), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2420)
                                           ->__VnoInFunc_do_resolve_bindings(vlProcess, vlSymsp);
                }
            }
            this->__VnoInFunc_resolve_bindings(vlProcess, vlSymsp);
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_accept_tr(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_transaction> tr, QData/*63:0*/ accept_time) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_accept_tr\n"); );
            // Locals
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_event_> __Vtask_get__137__Vfuncout;
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_event_> e;
            {
                if ((VlNull{} == tr)) {
                    goto __Vlabel0;
                }
                VL_NULL_CHECK(tr, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2442)
                                           ->__VnoInFunc_accept_tr(vlSymsp, accept_time);
                this->__VnoInFunc_do_accept_tr(vlSymsp, tr);
                VL_NULL_CHECK(this->__PVT__event_pool, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2444)
                                           ->__VnoInFunc_get(vlProcess, vlSymsp, "accept_tr"s, __Vtask_get__137__Vfuncout);
                e = __Vtask_get__137__Vfuncout;
                if ((VlNull{} != e)) {
                    VL_NULL_CHECK(e, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2446)
                                           ->__VnoInFunc_trigger__Vtcwrap_1(vlProcess, vlSymsp);
                }
                __Vlabel0: ;
            }
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_begin_tr(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_transaction> tr, std::string stream_name, std::string label, std::string desc, QData/*63:0*/ begin_time, IData/*31:0*/ parent_handle, IData/*31:0*/ &begin_tr__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_begin_tr\n"); );
            // Locals
            IData/*31:0*/ __Vfunc_m_begin_tr__139__Vfuncout;
            __Vfunc_m_begin_tr__139__Vfuncout = 0;
            // Body
            this->__VnoInFunc_m_begin_tr(vlProcess, vlSymsp, tr, parent_handle, stream_name, label, desc, begin_time, __Vfunc_m_begin_tr__139__Vfuncout);
            begin_tr__Vfuncrtn = __Vfunc_m_begin_tr__139__Vfuncout;
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_tr_database(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_tr_database> &get_tr_database__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_tr_database\n"); );
            // Locals
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__140__Vfuncout;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_tr_database> __Vtask_get_default_tr_database__141__Vfuncout;
            // Body
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> unnamedblk198__DOT__cs;
            if ((VlNull{} == this->__PVT__tr_database)) {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__140__Vfuncout);
                unnamedblk198__DOT__cs = __Vfunc_get__140__Vfuncout;
                VL_NULL_CHECK(unnamedblk198__DOT__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2499)
                                           ->__VnoInFunc_get_default_tr_database(vlProcess, vlSymsp, __Vtask_get_default_tr_database__141__Vfuncout);
                this->__PVT__tr_database = __Vtask_get_default_tr_database__141__Vfuncout;
            }
            get_tr_database__Vfuncrtn = this->__PVT__tr_database;
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_tr_database(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_tr_database> db) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_tr_database\n"); );
            // Body
            this->__PVT__tr_database = db;
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_tr_stream(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string name, std::string stream_type_name, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_tr_stream> &get_tr_stream__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_get_tr_stream\n"); );
            // Locals
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_tr_database> __Vfunc_get_tr_database__142__Vfuncout;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_tr_stream> __Vtask_open_stream__143__Vfuncout;
            std::string __Vfunc_get_full_name__144__Vfuncout;
            // Body
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_tr_database> db;
            this->__VnoInFunc_get_tr_database(vlProcess, vlSymsp, __Vfunc_get_tr_database__142__Vfuncout);
            db = __Vfunc_get_tr_database__142__Vfuncout;
            if (((! this->__PVT__m_streams.exists(name)) 
                 || (! this->__PVT__m_streams.at(name).exists(stream_type_name)))) {
                VL_NULL_CHECK(db, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2517)
                                           ->__VnoInFunc_open_stream(vlProcess, vlSymsp, name, 
                                                                     VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__144__Vfuncout);
                            }(), __Vfunc_get_full_name__144__Vfuncout)), stream_type_name, __Vtask_open_stream__143__Vfuncout);
                this->__PVT__m_streams.at(name).at(stream_type_name) 
                    = __Vtask_open_stream__143__Vfuncout;
            }
            get_tr_stream__Vfuncrtn = this->__PVT__m_streams
                .at(name).at(stream_type_name);
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_free_tr_stream(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_tr_stream> stream) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_free_tr_stream\n"); );
            // Locals
            std::string __Vtask_get_name__145__Vfuncout;
            std::string __Vtask_get_name__146__Vfuncout;
            std::string __Vtask_get_stream_type_name__147__Vfuncout;
            std::string __Vtask_get_name__148__Vfuncout;
            std::string __Vtask_get_stream_type_name__149__Vfuncout;
            std::string __Vtask_get_name__150__Vfuncout;
            std::string __Vtask_get_type_name__151__Vfuncout;
            std::string __Vtask_get_name__152__Vfuncout;
            std::string __Vtask_get_name__153__Vfuncout;
            CData/*0:0*/ __Vtask_is_open__154__Vfuncout;
            __Vtask_is_open__154__Vfuncout = 0;
            CData/*0:0*/ __Vtask_is_closed__155__Vfuncout;
            __Vtask_is_closed__155__Vfuncout = 0;
            // Body
            {
                if ((VlNull{} == stream)) {
                    goto __Vlabel0;
                }
                if (((! this->__PVT__m_streams.exists(
                                                      ([&]() {
                                        VL_NULL_CHECK(stream, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2529)
                                                       ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__145__Vfuncout);
                                    }(), __Vtask_get_name__145__Vfuncout))) 
                     || (! this->__PVT__m_streams.at(
                                                     ([&]() {
                                        VL_NULL_CHECK(stream, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2530)
                                                      ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__146__Vfuncout);
                                    }(), __Vtask_get_name__146__Vfuncout)).exists(
                                                                                ([&]() {
                                        VL_NULL_CHECK(stream, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2530)
                                                                                ->__VnoInFunc_get_stream_type_name(vlSymsp, __Vtask_get_stream_type_name__147__Vfuncout);
                                    }(), __Vtask_get_stream_type_name__147__Vfuncout))))) {
                    goto __Vlabel0;
                }
                if ((this->__PVT__m_streams.at(([&]() {
                                    VL_NULL_CHECK(stream, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2534)
                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__148__Vfuncout);
                                }(), __Vtask_get_name__148__Vfuncout))
                     .at(([&]() {
                                    VL_NULL_CHECK(stream, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2534)
                          ->__VnoInFunc_get_stream_type_name(vlSymsp, __Vtask_get_stream_type_name__149__Vfuncout);
                                }(), __Vtask_get_stream_type_name__149__Vfuncout)) 
                     != stream)) {
                    goto __Vlabel0;
                }
                this->__PVT__m_streams.at(([&]() {
                            VL_NULL_CHECK(stream, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2538)
                                           ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__150__Vfuncout);
                        }(), __Vtask_get_name__150__Vfuncout)).erase(
                                                                     ([&]() {
                            VL_NULL_CHECK(stream, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2538)
                                                                      ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__151__Vfuncout);
                        }(), __Vtask_get_type_name__151__Vfuncout));
                if ((0U == this->__PVT__m_streams.at(
                                                     ([&]() {
                                    VL_NULL_CHECK(stream, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2539)
                                                      ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__152__Vfuncout);
                                }(), __Vtask_get_name__152__Vfuncout)).size())) {
                    this->__PVT__m_streams.erase(([&]() {
                                VL_NULL_CHECK(stream, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2540)
                                                  ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__153__Vfuncout);
                            }(), __Vtask_get_name__153__Vfuncout));
                }
                if ((([&]() {
                                VL_NULL_CHECK(stream, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2543)
                      ->__VnoInFunc_is_open(vlSymsp, __Vtask_is_open__154__Vfuncout);
                            }(), (IData)(__Vtask_is_open__154__Vfuncout)) 
                     || ([&]() {
                                VL_NULL_CHECK(stream, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2543)
                         ->__VnoInFunc_is_closed(vlSymsp, __Vtask_is_closed__155__Vfuncout);
                            }(), (IData)(__Vtask_is_closed__155__Vfuncout)))) {
                    VL_NULL_CHECK(stream, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2544)
                                           ->__VnoInFunc_free(vlSymsp);
                }
                __Vlabel0: ;
            }
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_begin_tr(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_transaction> tr, IData/*31:0*/ parent_handle, std::string stream_name, std::string label, std::string desc, QData/*63:0*/ begin_time, IData/*31:0*/ &m_begin_tr__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_begin_tr\n"); );
            // Locals
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_tr_database> __Vfunc_get_tr_database__157__Vfuncout;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_recorder> __Vfunc_get_recorder_from_handle__158__Vfuncout;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_sequence_base> __Vtask_get_parent_sequence__159__Vfuncout;
            IData/*31:0*/ __Vtask_begin_child_tr__160__Vfuncout;
            __Vtask_begin_child_tr__160__Vfuncout = 0;
            IData/*31:0*/ __Vtask_get_handle__161__Vfuncout;
            __Vtask_get_handle__161__Vfuncout = 0;
            IData/*31:0*/ __Vtask_begin_tr__162__Vfuncout;
            __Vtask_begin_tr__162__Vfuncout = 0;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_recorder> __Vfunc_get_recorder_from_handle__163__Vfuncout;
            std::string __Vtask_get_name__164__Vfuncout;
            std::string __Vtask_get_name__165__Vfuncout;
            std::string __Vtask_get_type_name__166__Vfuncout;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_tr_stream> __Vfunc_get_tr_stream__167__Vfuncout;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_recorder> __Vtask_open_recorder__168__Vfuncout;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_parent_child_link> __Vfunc_get_link__172__Vfuncout;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_related_link> __Vfunc_get_link__174__Vfuncout;
            IData/*31:0*/ __Vtask_get_handle__175__Vfuncout;
            __Vtask_get_handle__175__Vfuncout = 0;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_event_> __Vtask_get__177__Vfuncout;
            VlWide<6>/*191:0*/ __Vtemp_4;
            // Body
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_sequence_item> unnamedblk199__DOT__seq;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_sequence_base> unnamedblk199__DOT__unnamedblk200__DOT__parent_seq;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_event_> e;
            std::string name;
            std::string kind;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_tr_database> db;
            IData/*31:0*/ handle;
            handle = 0;
            IData/*31:0*/ link_handle;
            link_handle = 0;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_tr_stream> stream;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_recorder> recorder;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_recorder> parent_recorder;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_recorder> link_recorder;
            {
                if ((VlNull{} == tr)) {
                    m_begin_tr__Vfuncrtn = 0U;
                    goto __Vlabel0;
                }
                this->__VnoInFunc_get_tr_database(vlProcess, vlSymsp, __Vfunc_get_tr_database__157__Vfuncout);
                db = __Vfunc_get_tr_database__157__Vfuncout;
                if ((0U != parent_handle)) {
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__VnoInFunc_get_recorder_from_handle(vlSymsp, parent_handle, __Vfunc_get_recorder_from_handle__158__Vfuncout);
                    parent_recorder = __Vfunc_get_recorder_from_handle__158__Vfuncout;
                }
                if ((VlNull{} == parent_recorder)) {
                    if (VL_CAST_DYNAMIC(tr, unnamedblk199__DOT__seq)) {
                        VL_NULL_CHECK(unnamedblk199__DOT__seq, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2576)
                                           ->__VnoInFunc_get_parent_sequence(vlSymsp, __Vtask_get_parent_sequence__159__Vfuncout);
                        unnamedblk199__DOT__unnamedblk200__DOT__parent_seq 
                            = __Vtask_get_parent_sequence__159__Vfuncout;
                        if ((VlNull{} != unnamedblk199__DOT__unnamedblk200__DOT__parent_seq)) {
                            parent_recorder = VL_NULL_CHECK(unnamedblk199__DOT__unnamedblk200__DOT__parent_seq, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2578)
                                ->__PVT__m_tr_recorder;
                        }
                    }
                }
                link_handle = ((VlNull{} != parent_recorder)
                                ? ([&]() {
                            VL_NULL_CHECK(tr, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2584)
                                   ->__VnoInFunc_begin_child_tr(vlProcess, vlSymsp, begin_time, 
                                                                ([&]() {
                                        VL_NULL_CHECK(parent_recorder, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2584)
                                                                 ->__VnoInFunc_get_handle(vlSymsp, __Vtask_get_handle__161__Vfuncout);
                                    }(), __Vtask_get_handle__161__Vfuncout), __Vtask_begin_child_tr__160__Vfuncout);
                        }(), __Vtask_begin_child_tr__160__Vfuncout)
                                : ([&]() {
                            VL_NULL_CHECK(tr, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2587)
                                   ->__VnoInFunc_begin_tr(vlProcess, vlSymsp, begin_time, __Vtask_begin_tr__162__Vfuncout);
                        }(), __Vtask_begin_tr__162__Vfuncout));
                if ((0U != link_handle)) {
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__VnoInFunc_get_recorder_from_handle(vlSymsp, link_handle, __Vfunc_get_recorder_from_handle__163__Vfuncout);
                    link_recorder = __Vfunc_get_recorder_from_handle__163__Vfuncout;
                }
                name = ((""s != ([&]() {
                                VL_NULL_CHECK(tr, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2594)
                                 ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__164__Vfuncout);
                            }(), __Vtask_get_name__164__Vfuncout))
                         ? ([&]() {
                            VL_NULL_CHECK(tr, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2595)
                            ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__165__Vfuncout);
                        }(), __Vtask_get_name__165__Vfuncout)
                         : ([&]() {
                            VL_NULL_CHECK(tr, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2597)
                            ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__166__Vfuncout);
                        }(), __Vtask_get_type_name__166__Vfuncout));
                if ((0U != this->__PVT__recording_detail)) {
                    if ((""s == stream_name)) {
                        stream_name = "main"s;
                    }
                    this->__VnoInFunc_get_tr_stream(vlProcess, vlSymsp, stream_name, "TVM"s, __Vfunc_get_tr_stream__167__Vfuncout);
                    stream = __Vfunc_get_tr_stream__167__Vfuncout;
                    if ((VlNull{} != stream)) {
                        __Vtemp_4[0U] = 0x4c696e6bU;
                        if ((VlNull{} == parent_recorder)) {
                            __Vtemp_4[1U] = 0x6e742c20U;
                            __Vtemp_4[2U] = 0x50617265U;
                            __Vtemp_4[3U] = 0x5f4e6f5fU;
                            __Vtemp_4[4U] = 0x6567696eU;
                            __Vtemp_4[5U] = 0x00000042U;
                        } else {
                            __Vtemp_4[1U] = 0x6e642c20U;
                            __Vtemp_4[2U] = 0x696e5f45U;
                            __Vtemp_4[3U] = 0x00426567U;
                            __Vtemp_4[4U] = 0U;
                            __Vtemp_4[5U] = 0U;
                        }
                        kind = VL_CVT_PACK_STR_NW(6, __Vtemp_4);
                        VL_NULL_CHECK(stream, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2608)
                                           ->__VnoInFunc_open_recorder(vlProcess, vlSymsp, name, begin_time, kind, __Vtask_open_recorder__168__Vfuncout);
                        recorder = __Vtask_open_recorder__168__Vfuncout;
                        if ((VlNull{} != recorder)) {
                            if ((""s != label)) {
                                VL_NULL_CHECK(recorder, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2612)
                                           ->__VnoInFunc_record_string(vlProcess, vlSymsp, "label"s, label);
                            }
                            if ((""s != desc)) {
                                VL_NULL_CHECK(recorder, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2614)
                                           ->__VnoInFunc_record_string(vlProcess, vlSymsp, "desc"s, desc);
                            }
                            if ((VlNull{} != parent_recorder)) {
                                VL_NULL_CHECK(this->__PVT__tr_database, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2617)
                                           ->__VnoInFunc_establish_link(vlProcess, vlSymsp, 
                                                                        ([&]() {
                                            vlSymsp->TOP__uvm_pkg__03a__03auvm_parent_child_link__Vclpkg.__VnoInFunc_get_link(vlProcess, vlSymsp, parent_recorder, recorder, "pc_link"s, __Vfunc_get_link__172__Vfuncout);
                                        }(), __Vfunc_get_link__172__Vfuncout));
                            }
                            if ((VlNull{} != link_recorder)) {
                                VL_NULL_CHECK(this->__PVT__tr_database, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2622)
                                           ->__VnoInFunc_establish_link(vlProcess, vlSymsp, 
                                                                        ([&]() {
                                            vlSymsp->TOP__uvm_pkg__03a__03auvm_related_link__Vclpkg.__VnoInFunc_get_link(vlProcess, vlSymsp, recorder, link_recorder, "ce_link"s, __Vfunc_get_link__174__Vfuncout);
                                        }(), __Vfunc_get_link__174__Vfuncout));
                            }
                            this->__PVT__m_tr_h.at(tr) 
                                = recorder;
                        }
                    }
                    handle = ((VlNull{} == recorder)
                               ? 0U : ([&]() {
                                VL_NULL_CHECK(recorder, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2629)
                                       ->__VnoInFunc_get_handle(vlSymsp, __Vtask_get_handle__175__Vfuncout);
                            }(), __Vtask_get_handle__175__Vfuncout));
                    this->__VnoInFunc_do_begin_tr(vlSymsp, tr, stream_name, handle);
                }
                VL_NULL_CHECK(this->__PVT__event_pool, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2634)
                                           ->__VnoInFunc_get(vlProcess, vlSymsp, "begin_tr"s, __Vtask_get__177__Vfuncout);
                e = __Vtask_get__177__Vfuncout;
                if ((VlNull{} != e)) {
                    VL_NULL_CHECK(e, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2636)
                                           ->__VnoInFunc_trigger(vlProcess, vlSymsp, tr);
                }
                m_begin_tr__Vfuncrtn = handle;
                __Vlabel0: ;
            }
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_end_tr(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_transaction> tr, QData/*63:0*/ end_time, CData/*0:0*/ free_handle) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_end_tr\n"); );
            // Locals
            IData/*31:0*/ __Vtask_get_handle__181__Vfuncout;
            __Vtask_get_handle__181__Vfuncout = 0;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_event_> __Vtask_get__186__Vfuncout;
            // Body
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_event_> e;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_recorder> recorder;
            {
                if ((VlNull{} == tr)) {
                    goto __Vlabel0;
                }
                VL_NULL_CHECK(tr, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2655)
                                           ->__VnoInFunc_end_tr(vlProcess, vlSymsp, end_time, (IData)(free_handle));
                if ((0U != this->__PVT__recording_detail)) {
                    if (this->__PVT__m_tr_h.exists(tr)) {
                        recorder = this->__PVT__m_tr_h
                            .at(tr);
                        this->__VnoInFunc_do_end_tr(vlSymsp, tr, 
                                                    ([&]() {
                                    VL_NULL_CHECK(recorder, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2663)
                                                     ->__VnoInFunc_get_handle(vlSymsp, __Vtask_get_handle__181__Vfuncout);
                                }(), __Vtask_get_handle__181__Vfuncout));
                        this->__PVT__m_tr_h.erase(tr);
                        VL_NULL_CHECK(tr, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2667)
                                           ->__VnoInFunc_record(vlProcess, vlSymsp, recorder);
                        VL_NULL_CHECK(recorder, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2669)
                                           ->__VnoInFunc_close(vlSymsp, end_time);
                        if (free_handle) {
                            VL_NULL_CHECK(recorder, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2672)
                                           ->__VnoInFunc_free(vlProcess, vlSymsp, 0ULL);
                        }
                    } else {
                        this->__VnoInFunc_do_end_tr(vlSymsp, tr, 0U);
                    }
                }
                VL_NULL_CHECK(this->__PVT__event_pool, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2681)
                                           ->__VnoInFunc_get(vlProcess, vlSymsp, "end_tr"s, __Vtask_get__186__Vfuncout);
                e = __Vtask_get__186__Vfuncout;
                if ((VlNull{} != e)) {
                    VL_NULL_CHECK(e, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2683)
                                           ->__VnoInFunc_trigger__Vtcwrap_1(vlProcess, vlSymsp);
                }
                __Vlabel0: ;
            }
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_record_error_tr(Vuart_example__Syms* __restrict vlSymsp, std::string stream_name, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> info, std::string label, std::string desc, QData/*63:0*/ error_time, CData/*0:0*/ keep_active, IData/*31:0*/ &record_error_tr__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_record_error_tr\n"); );
            // Locals
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_tr_stream> __Vfunc_get_tr_stream__188__Vfuncout;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_recorder> __Vtask_open_recorder__189__Vfuncout;
            IData/*31:0*/ __Vtask_get_handle__194__Vfuncout;
            __Vtask_get_handle__194__Vfuncout = 0;
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_recorder> recorder;
            std::string etype;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_tr_stream> stream;
            IData/*31:0*/ handle;
            handle = 0;
            etype = ((IData)(keep_active) ? "Error, Link"s
                      : "Error"s);
            if ((0ULL == error_time)) {
                error_time = VL_RTOIROUND_Q_D(VL_TIME_UNITED_D(1000));
            }
            if ((""s == stream_name)) {
                stream_name = "main"s;
            }
            this->__VnoInFunc_get_tr_stream(vlProcess, vlSymsp, stream_name, "TVM"s, __Vfunc_get_tr_stream__188__Vfuncout);
            stream = __Vfunc_get_tr_stream__188__Vfuncout;
            handle = 0U;
            if ((VlNull{} != stream)) {
                VL_NULL_CHECK(stream, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2715)
                                           ->__VnoInFunc_open_recorder(vlProcess, vlSymsp, label, error_time, etype, __Vtask_open_recorder__189__Vfuncout);
                recorder = __Vtask_open_recorder__189__Vfuncout;
                if ((VlNull{} != recorder)) {
                    if ((""s != label)) {
                        VL_NULL_CHECK(recorder, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2721)
                                           ->__VnoInFunc_record_string(vlProcess, vlSymsp, "label"s, label);
                    }
                    if ((""s != desc)) {
                        VL_NULL_CHECK(recorder, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2723)
                                           ->__VnoInFunc_record_string(vlProcess, vlSymsp, "desc"s, desc);
                    }
                    if ((VlNull{} != info)) {
                        VL_NULL_CHECK(info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2725)
                                           ->__VnoInFunc_record(vlProcess, vlSymsp, recorder);
                    }
                    VL_NULL_CHECK(recorder, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2727)
                                           ->__VnoInFunc_close(vlSymsp, error_time);
                    if (keep_active) {
                        VL_NULL_CHECK(recorder, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2733)
                                           ->__VnoInFunc_get_handle(vlSymsp, __Vtask_get_handle__194__Vfuncout);
                        handle = __Vtask_get_handle__194__Vfuncout;
                    } else {
                        VL_NULL_CHECK(recorder, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2730)
                                           ->__VnoInFunc_free(vlProcess, vlSymsp, 0ULL);
                    }
                }
            }
            record_error_tr__Vfuncrtn = handle;
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_record_event_tr(Vuart_example__Syms* __restrict vlSymsp, std::string stream_name, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> info, std::string label, std::string desc, QData/*63:0*/ event_time, CData/*0:0*/ keep_active, IData/*31:0*/ &record_event_tr__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_record_event_tr\n"); );
            // Locals
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_tr_stream> __Vfunc_get_tr_stream__196__Vfuncout;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_recorder> __Vtask_open_recorder__197__Vfuncout;
            IData/*31:0*/ __Vtask_get_handle__202__Vfuncout;
            __Vtask_get_handle__202__Vfuncout = 0;
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_recorder> recorder;
            std::string etype;
            IData/*31:0*/ handle;
            handle = 0;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_tr_stream> stream;
            etype = ((IData)(keep_active) ? "Event, Link"s
                      : "Event"s);
            if ((0ULL == event_time)) {
                event_time = VL_RTOIROUND_Q_D(VL_TIME_UNITED_D(1000));
            }
            if ((""s == stream_name)) {
                stream_name = "main"s;
            }
            this->__VnoInFunc_get_tr_stream(vlProcess, vlSymsp, stream_name, "TVM"s, __Vfunc_get_tr_stream__196__Vfuncout);
            stream = __Vfunc_get_tr_stream__196__Vfuncout;
            handle = 0U;
            if ((VlNull{} != stream)) {
                VL_NULL_CHECK(stream, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2768)
                                           ->__VnoInFunc_open_recorder(vlProcess, vlSymsp, label, event_time, etype, __Vtask_open_recorder__197__Vfuncout);
                recorder = __Vtask_open_recorder__197__Vfuncout;
                if ((VlNull{} != recorder)) {
                    if ((""s != label)) {
                        VL_NULL_CHECK(recorder, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2774)
                                           ->__VnoInFunc_record_string(vlProcess, vlSymsp, "label"s, label);
                    }
                    if ((""s != desc)) {
                        VL_NULL_CHECK(recorder, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2776)
                                           ->__VnoInFunc_record_string(vlProcess, vlSymsp, "desc"s, desc);
                    }
                    if ((VlNull{} != info)) {
                        VL_NULL_CHECK(info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2778)
                                           ->__VnoInFunc_record(vlProcess, vlSymsp, recorder);
                    }
                    VL_NULL_CHECK(recorder, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2780)
                                           ->__VnoInFunc_close(vlSymsp, event_time);
                    if (keep_active) {
                        VL_NULL_CHECK(recorder, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2786)
                                           ->__VnoInFunc_get_handle(vlSymsp, __Vtask_get_handle__202__Vfuncout);
                        handle = __Vtask_get_handle__202__Vfuncout;
                    } else {
                        VL_NULL_CHECK(recorder, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2783)
                                           ->__VnoInFunc_free(vlProcess, vlSymsp, 0ULL);
                    }
                }
            }
            record_event_tr__Vfuncrtn = handle;
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_accept_tr(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_transaction> tr) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_accept_tr\n"); );
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_begin_tr(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_transaction> tr, std::string stream_name, IData/*31:0*/ tr_handle) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_begin_tr\n"); );
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_end_tr(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_transaction> tr, IData/*31:0*/ tr_handle) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_end_tr\n"); );
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_massage_scope(Vuart_example__Syms* __restrict vlSymsp, std::string scope, std::string &massage_scope__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_massage_scope\n"); );
            // Locals
            std::string __Vfunc_get_full_name__204__Vfuncout;
            std::string __Vfunc_get_full_name__205__Vfuncout;
            std::string __Vfunc_get_full_name__206__Vfuncout;
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            {
                if ((""s == scope)) {
                    massage_scope__Vfuncrtn = "^$"s;
                    goto __Vlabel0;
                }
                if (("*"s == scope)) {
                    massage_scope__Vfuncrtn = VL_CONCATN_NNN(
                                                             ([&]() {
                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__204__Vfuncout);
                            }(), __Vfunc_get_full_name__204__Vfuncout), ".*"s);
                    goto __Vlabel0;
                }
                if (("uvm_test_top"s == scope)) {
                    massage_scope__Vfuncrtn = "uvm_test_top"s;
                    goto __Vlabel0;
                }
                if ((0x2eU == VL_GETC_N(scope,0U))) {
                    massage_scope__Vfuncrtn = VL_CONCATN_NNN(
                                                             ([&]() {
                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__205__Vfuncout);
                            }(), __Vfunc_get_full_name__205__Vfuncout), scope);
                    goto __Vlabel0;
                }
                massage_scope__Vfuncrtn = VL_CONCATN_NNN(
                                                         VL_CONCATN_NNN(
                                                                        ([&]() {
                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__206__Vfuncout);
                            }(), __Vfunc_get_full_name__206__Vfuncout), "."s), scope);
                __Vlabel0: ;
            }
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_use_automatic_config(Vuart_example__Syms* __restrict vlSymsp, CData/*0:0*/ &use_automatic_config__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_use_automatic_config\n"); );
            // Body
            use_automatic_config__Vfuncrtn = 1U;
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_apply_config_settings(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, CData/*0:0*/ verbose) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_apply_config_settings\n"); );
            // Locals
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_resource_pool> __Vfunc_get__207__Vfuncout;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_queue__Tz5> __Vtask_lookup_scope__208__Vfuncout;
            std::string __Vfunc_get_full_name__209__Vfuncout;
            IData/*31:0*/ __Vtask_size__211__Vfuncout;
            __Vtask_size__211__Vfuncout = 0;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_resource_base> __Vtask_get__212__Vfuncout;
            std::string __Vtask_get_name__214__Vfuncout;
            std::string __Vtemp_1;
            // Body
            IData/*31:0*/ unnamedblk201__DOT__i;
            unnamedblk201__DOT__i = 0;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_resource_pool> rp;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__207__Vfuncout);
            rp = __Vfunc_get__207__Vfuncout;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_queue__Tz5> rq;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_resource_base> r;
            VL_NULL_CHECK(rp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2890)
                                           ->__VnoInFunc_lookup_scope(vlProcess, vlSymsp, 
                                                                      VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__209__Vfuncout);
                        }(), __Vfunc_get_full_name__209__Vfuncout)), __Vtask_lookup_scope__208__Vfuncout);
            rq = __Vtask_lookup_scope__208__Vfuncout;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_sort_by_precedence(vlProcess, vlSymsp, rq);
            unnamedblk201__DOT__i = (([&]() {
                        VL_NULL_CHECK(rq, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2895)
                                      ->__VnoInFunc_size(vlSymsp, __Vtask_size__211__Vfuncout);
                    }(), __Vtask_size__211__Vfuncout) 
                                     - (IData)(1U));
            while (VL_LTES_III(32, 0U, unnamedblk201__DOT__i)) {
                VL_NULL_CHECK(rq, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2896)
                                           ->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk201__DOT__i, __Vtask_get__212__Vfuncout);
                r = __Vtask_get__212__Vfuncout;
                if (verbose) {
                    __Vtemp_1 = ([&]() {
                            VL_NULL_CHECK(r, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2899)
                                 ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__214__Vfuncout);
                        }(), __Vtask_get_name__214__Vfuncout);
                    this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "CFGAPL"s, VL_SFORMATF_N_NX("applying configuration to field %@",0,
                                                                                -1,
                                                                                &(__Vtemp_1)) , 0U, ""s, 0U, ""s, 0U);
                }
                this->__VnoInFunc_set_local(vlProcess, vlSymsp, r);
                unnamedblk201__DOT__i = (unnamedblk201__DOT__i 
                                         - (IData)(1U));
            }
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_print_config(Vuart_example__Syms* __restrict vlSymsp, CData/*0:0*/ recurse, CData/*0:0*/ audit) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_print_config\n"); );
            // Locals
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_resource_pool> __Vfunc_get__216__Vfuncout;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_queue__Tz5> __Vtask_lookup_scope__219__Vfuncout;
            std::string __Vfunc_get_full_name__220__Vfuncout;
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component> unnamedblk202__DOT__c;
            std::string unnamedblk202__DOT__unnamedblk203__DOT__name;
            CData/*0:0*/ unnamedblk202__DOT__unnamedblk203__DOT__name__Vfirst;
            unnamedblk202__DOT__unnamedblk203__DOT__name__Vfirst = 0;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_resource_pool> rp;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__216__Vfuncout);
            rp = __Vfunc_get__216__Vfuncout;
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "CFGPRT"s, "visible resources:"s, 0U, ""s, 0U, ""s, 0U);
            VL_NULL_CHECK(rp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2916)
                                           ->__VnoInFunc_print_resources(vlSymsp, 
                                                                         ([&]() {
                        VL_NULL_CHECK(rp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2916)
                                                                          ->__VnoInFunc_lookup_scope(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__220__Vfuncout);
                                    }(), __Vfunc_get_full_name__220__Vfuncout)), __Vtask_lookup_scope__219__Vfuncout);
                    }(), __Vtask_lookup_scope__219__Vfuncout), audit);
            if (recurse) {
                if ((0U != this->__PVT__m_children.first(unnamedblk202__DOT__unnamedblk203__DOT__name))) {
                    unnamedblk202__DOT__unnamedblk203__DOT__name__Vfirst = 1U;
                    while (((IData)(unnamedblk202__DOT__unnamedblk203__DOT__name__Vfirst) 
                            || (0U != this->__PVT__m_children.next(unnamedblk202__DOT__unnamedblk203__DOT__name)))) {
                        unnamedblk202__DOT__unnamedblk203__DOT__name__Vfirst = 0U;
                        unnamedblk202__DOT__c = this->__PVT__m_children
                            .at(unnamedblk202__DOT__unnamedblk203__DOT__name);
                        VL_NULL_CHECK(unnamedblk202__DOT__c, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2922)
                                           ->__VnoInFunc_print_config(vlSymsp, recurse, (IData)(audit));
                    }
                }
            }
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_print_config_with_audit(Vuart_example__Syms* __restrict vlSymsp, CData/*0:0*/ recurse) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_print_config_with_audit\n"); );
            // Body
            this->__VnoInFunc_print_config(vlSymsp, recurse, 1U);
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_print(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_printer> printer) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_print\n"); );
            // Body
            Vuart_example_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
            if ((0U != this->__PVT__recording_detail)) {
                if ((0x00000064U == this->__PVT__recording_detail)) {
                    VL_NULL_CHECK(printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2962)
                                           ->__VnoInFunc_print_generic(vlProcess, vlSymsp, "recording_detail"s, "uvm_verbosity"s, 0x00000020U, "UVM_LOW"s, 0x2eU);
                } else if ((0x000000c8U == this->__PVT__recording_detail)) {
                    VL_NULL_CHECK(printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2964)
                                           ->__VnoInFunc_print_generic(vlProcess, vlSymsp, "recording_detail"s, "uvm_verbosity"s, 0x00000020U, "UVM_MEDIUM"s, 0x2eU);
                } else if ((0x0000012cU == this->__PVT__recording_detail)) {
                    VL_NULL_CHECK(printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2966)
                                           ->__VnoInFunc_print_generic(vlProcess, vlSymsp, "recording_detail"s, "uvm_verbosity"s, 0x00000020U, "UVM_HIGH"s, 0x2eU);
                } else if ((0x00000190U == this->__PVT__recording_detail)) {
                    VL_NULL_CHECK(printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2968)
                                           ->__VnoInFunc_print_generic(vlProcess, vlSymsp, "recording_detail"s, "uvm_verbosity"s, 0x00000020U, "UVM_FULL"s, 0x2eU);
                } else {
                    VL_NULL_CHECK(printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 2970)
                                           ->__VnoInFunc_print_field_int(vlProcess, vlSymsp, "recording_detail"s, (QData)((IData)(this->__PVT__recording_detail)), 0x00000020U, 0x02000000U, 0x2eU, "integral"s);
                }
            }
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_local(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_resource_base> rsrc) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_set_local\n"); );
            // Locals
            std::string __Vtask_get_name__229__Vfuncout;
            QData/*63:0*/ __Vtask_read__230__Vfuncout;
            __Vtask_read__230__Vfuncout = 0;
            VlWide<128>/*4095:0*/ __Vtask_read__231__Vfuncout;
            VL_ZERO_W(4096, __Vtask_read__231__Vfuncout);
            IData/*31:0*/ __Vtask_read__232__Vfuncout;
            __Vtask_read__232__Vfuncout = 0;
            IData/*31:0*/ __Vtask_read__233__Vfuncout;
            __Vtask_read__233__Vfuncout = 0;
            // Body
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_resource__Tz9> unnamedblk204__DOT_____05Ftmp_rsrc___05F;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_resource__Tz8> unnamedblk205__DOT_____05Ftmp_rsrc___05F;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_resource_> unnamedblk206__DOT_____05Ftmp_rsrc___05F;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_resource__Tz10> unnamedblk207__DOT_____05Ftmp_rsrc___05F;
            CData/*0:0*/ success;
            success = 0;
            if (((VlNull{} != rsrc) && ("recording_detail"s 
                                        == ([&]() {
                                VL_NULL_CHECK(rsrc, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 3005)
                                            ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__229__Vfuncout);
                            }(), __Vtask_get_name__229__Vfuncout)))) {
                success = (1U & VL_CAST_DYNAMIC(rsrc, unnamedblk204__DOT_____05Ftmp_rsrc___05F));
                if (success) {
                    this->__PVT__recording_detail = (IData)(
                                                            ([&]() {
                                VL_NULL_CHECK(unnamedblk204__DOT_____05Ftmp_rsrc___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 3009)
                                                             ->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component>{this}, __Vtask_read__230__Vfuncout);
                            }(), __Vtask_read__230__Vfuncout));
                }
                if ((1U & (~ (IData)(success)))) {
                    success = (1U & VL_CAST_DYNAMIC(rsrc, unnamedblk205__DOT_____05Ftmp_rsrc___05F));
                    if (success) {
                        this->__PVT__recording_detail 
                            = VL_SEL_IWII(4096, ([&]() {
                                    VL_NULL_CHECK(unnamedblk205__DOT_____05Ftmp_rsrc___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 3009)
                                                 ->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component>{this}, __Vtask_read__231__Vfuncout);
                                }(), __Vtask_read__231__Vfuncout), 0U, 32);
                    }
                }
                if ((1U & (~ (IData)(success)))) {
                    success = (1U & VL_CAST_DYNAMIC(rsrc, unnamedblk206__DOT_____05Ftmp_rsrc___05F));
                    if (success) {
                        VL_NULL_CHECK(unnamedblk206__DOT_____05Ftmp_rsrc___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 3009)
                                           ->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                              VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component>{this}, __Vtask_read__232__Vfuncout);
                        this->__PVT__recording_detail 
                            = __Vtask_read__232__Vfuncout;
                    }
                }
                if ((1U & (~ (IData)(success)))) {
                    success = (1U & VL_CAST_DYNAMIC(rsrc, unnamedblk207__DOT_____05Ftmp_rsrc___05F));
                    if (success) {
                        VL_NULL_CHECK(unnamedblk207__DOT_____05Ftmp_rsrc___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 3009)
                                           ->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                              VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component>{this}, __Vtask_read__233__Vfuncout);
                        this->__PVT__recording_detail 
                            = __Vtask_read__233__Vfuncout;
                    }
                }
            }
            if ((1U & (~ (IData)(success)))) {
                Vuart_example_uvm_pkg__03a__03auvm_object::__VnoInFunc_set_local(vlProcess, vlSymsp, rsrc);
            }
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_unsupported_set_local(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_resource_base> rsrc) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_unsupported_set_local\n"); );
            // Body
            this->__PVT__m_unsupported_resource_base 
                = rsrc;
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_cl_msg_args(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_cl_msg_args\n"); );
            // Locals
            VlClassRef<Vuart_example_std__03a__03aprocess> __Vfunc_self__235__Vfuncout;
            std::string __Vtask_get_randstate__236__Vfuncout;
            IData/*31:0*/ __Vfunc_uvm_report_enabled__237__Vfuncout;
            __Vfunc_uvm_report_enabled__237__Vfuncout = 0;
            // Body
            std::string s_;
            VlClassRef<Vuart_example_std__03a__03aprocess> p_;
            vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __Vfunc_self__235__Vfuncout);
            p_ = __Vfunc_self__235__Vfuncout;
            if ((VlNull{} != p_)) {
                VL_NULL_CHECK(p_, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 3041)
                                           ->__VnoInFunc_get_randstate(vlSymsp, __Vtask_get_randstate__236__Vfuncout);
                s_ = __Vtask_get_randstate__236__Vfuncout;
            } else if ((0U != ([&]() {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "UVM"s, __Vfunc_uvm_report_enabled__237__Vfuncout);
                        }(), __Vfunc_uvm_report_enabled__237__Vfuncout))) {
                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "UVM"s, "run_test() invoked from a non process context"s, 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh"s, 0x00000be3U, ""s, 1U);
            }
            this->__VnoInFunc_m_set_cl_verb(vlProcess, vlSymsp);
            this->__VnoInFunc_m_set_cl_action(vlProcess, vlSymsp);
            this->__VnoInFunc_m_set_cl_sev(vlProcess, vlSymsp);
            if ((VlNull{} != p_)) {
                VL_NULL_CHECK(p_, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 3050)
                                           ->__VnoInFunc_set_randstate(vlSymsp, s_);
            }
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_cl_verb(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_cl_verb\n"); );
            // Locals
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_cmdline_processor> __Vfunc_get_inst__243__Vfuncout;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__244__Vfuncout;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__245__Vfuncout;
            IData/*31:0*/ __Vtask_get_arg_values__246__Vfuncout;
            __Vtask_get_arg_values__246__Vfuncout = 0;
            std::string __Vtask_uvm_split_string__247__str;
            CData/*7:0*/ __Vtask_uvm_split_string__247__sep;
            __Vtask_uvm_split_string__247__sep = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__247__s;
            __Vtask_uvm_split_string__247__s = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__247__e;
            __Vtask_uvm_split_string__247__e = 0;
            CData/*0:0*/ __Vtask_m_convert_verb__248__Vfuncout;
            __Vtask_m_convert_verb__248__Vfuncout = 0;
            IData/*31:0*/ __Vtask_m_convert_verb__248__verb_enum;
            __Vtask_m_convert_verb__248__verb_enum = 0;
            std::string __Vtask_uvm_split_string__250__str;
            CData/*7:0*/ __Vtask_uvm_split_string__250__sep;
            __Vtask_uvm_split_string__250__sep = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__250__s;
            __Vtask_uvm_split_string__250__s = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__250__e;
            __Vtask_uvm_split_string__250__e = 0;
            CData/*0:0*/ __Vtask_m_convert_verb__251__Vfuncout;
            __Vtask_m_convert_verb__251__Vfuncout = 0;
            IData/*31:0*/ __Vtask_m_convert_verb__251__verb_enum;
            __Vtask_m_convert_verb__251__verb_enum = 0;
            CData/*0:0*/ __Vfunc_uvm_is_match__252__Vfuncout;
            __Vfunc_uvm_is_match__252__Vfuncout = 0;
            std::string __Vfunc_uvm_is_match__252__expr;
            std::string __Vfunc_uvm_is_match__252__str;
            std::string __Vfunc_get_full_name__253__Vfuncout;
            std::string __Vfunc_uvm_glob_to_re__254__Vfuncout;
            std::string __Vfunc_uvm_glob_to_re__254__glob;
            IData/*31:0*/ __Vfunc_uvm_re_match__255__Vfuncout;
            __Vfunc_uvm_re_match__255__Vfuncout = 0;
            std::string __Vfunc_uvm_re_match__255__re;
            std::string __Vfunc_uvm_re_match__255__str;
            IData/*31:0*/ __Vfunc_uvm_re_match__255____Vincrement1;
            __Vfunc_uvm_re_match__255____Vincrement1 = 0;
            std::string __Vtemp_1;
            // Body
            VlQueue<std::string> unnamedblk208__DOT__t;
            Vuart_example_m_verbosity_setting__struct__0 unnamedblk208__DOT__setting;
            unnamedblk208__DOT__setting.__PVT__offset = 0;
            unnamedblk208__DOT__setting.__PVT__verbosity = 0;
            IData/*31:0*/ unnamedblk208__DOT__unnamedblk209__DOT__i;
            unnamedblk208__DOT__unnamedblk209__DOT__i = 0;
            IData/*31:0*/ unnamedblk210__DOT__i;
            unnamedblk210__DOT__i = 0;
            Vuart_example_m_verbosity_setting__struct__0 unnamedblk210__DOT__unnamedblk211__DOT__setting;
            unnamedblk210__DOT__unnamedblk211__DOT__setting.__PVT__offset = 0;
            unnamedblk210__DOT__unnamedblk211__DOT__setting.__PVT__verbosity = 0;
            VlQueue<std::string> args;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_cmdline_processor> clp;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg.__VnoInFunc_get_inst(vlProcess, vlSymsp, __Vfunc_get_inst__243__Vfuncout);
            clp = __Vfunc_get_inst__243__Vfuncout;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> top;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> cs;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__244__Vfuncout);
            cs = __Vfunc_get__244__Vfuncout;
            VL_NULL_CHECK(cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 3069)
                                           ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__245__Vfuncout);
            top = __Vtask_get_root__245__Vfuncout;
            if (vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_verb__Vstatic__first) {
                VL_NULL_CHECK(clp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 3074)
                                           ->__VnoInFunc_get_arg_values(vlSymsp, "+uvm_set_verbosity="s, vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_verb__Vstatic__values, __Vtask_get_arg_values__246__Vfuncout);
                unnamedblk208__DOT__unnamedblk209__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk208__DOT__unnamedblk209__DOT__i, vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_verb__Vstatic__values.size())) {
                    args.clear();
                    __Vtask_uvm_split_string__247__sep = 0x2cU;
                    __Vtask_uvm_split_string__247__str 
                        = VL_CVT_PACK_STR_NN(vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_verb__Vstatic__values.at(unnamedblk208__DOT__unnamedblk209__DOT__i));
                    __Vtask_uvm_split_string__247__s = 0;
                    __Vtask_uvm_split_string__247__s = 0U;
                    __Vtask_uvm_split_string__247__e = 0;
                    __Vtask_uvm_split_string__247__e = 0U;
                    args.clear();
                    while (VL_LTS_III(32, __Vtask_uvm_split_string__247__e, 
                                      VL_LEN_IN(__Vtask_uvm_split_string__247__str))) {
                        __Vtask_uvm_split_string__247__s 
                            = __Vtask_uvm_split_string__247__e;
                        {
                            while (VL_LTS_III(32, __Vtask_uvm_split_string__247__e, 
                                              VL_LEN_IN(__Vtask_uvm_split_string__247__str))) {
                                if ((VL_GETC_N(__Vtask_uvm_split_string__247__str,__Vtask_uvm_split_string__247__e) 
                                     == (IData)(__Vtask_uvm_split_string__247__sep))) {
                                    goto __Vlabel0;
                                }
                                __Vtask_uvm_split_string__247__e 
                                    = ((IData)(1U) 
                                       + __Vtask_uvm_split_string__247__e);
                            }
                            __Vlabel0: ;
                        }
                        if ((__Vtask_uvm_split_string__247__s 
                             != __Vtask_uvm_split_string__247__e)) {
                            args.push_back(VL_SUBSTR_N(__Vtask_uvm_split_string__247__str,__Vtask_uvm_split_string__247__s,
                                                       (__Vtask_uvm_split_string__247__e 
                                                        - (IData)(1U))));
                        }
                        __Vtask_uvm_split_string__247__e 
                            = ((IData)(1U) + __Vtask_uvm_split_string__247__e);
                    }
                    if ((((4U == args.size()) | (5U 
                                                 == args.size())) 
                         && ([&]() {
                                    VL_NULL_CHECK(clp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 3078)
                             ->__VnoInFunc_m_convert_verb(vlSymsp, 
                                                          VL_CVT_PACK_STR_NN(args.at(2U)), __Vtask_m_convert_verb__248__verb_enum, __Vtask_m_convert_verb__248__Vfuncout);
                                    unnamedblk208__DOT__setting
                             .__PVT__verbosity = __Vtask_m_convert_verb__248__verb_enum;
                                }(), (IData)(__Vtask_m_convert_verb__248__Vfuncout)))) {
                        unnamedblk208__DOT__t.push_back(vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_verb__Vstatic__values.at(unnamedblk208__DOT__unnamedblk209__DOT__i));
                    } else {
                        __Vtemp_1 = vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_verb__Vstatic__values.at(unnamedblk208__DOT__unnamedblk209__DOT__i);
                        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "UVM/CMDLINE"s, VL_SFORMATF_N_NX("argument %@ not recognized and therefore dropped",0,
                                                                                -1,
                                                                                &(__Vtemp_1)) , 0x000000c8U, ""s, 0U, ""s, 0U);
                    }
                    unnamedblk208__DOT__unnamedblk209__DOT__i 
                        = ((IData)(1U) + unnamedblk208__DOT__unnamedblk209__DOT__i);
                }
                vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_verb__Vstatic__values 
                    = unnamedblk208__DOT__t;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_verb__Vstatic__first = 0U;
            }
            unnamedblk210__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk210__DOT__i, vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_verb__Vstatic__values.size())) {
                args.clear();
                __Vtask_uvm_split_string__250__sep = 0x2cU;
                __Vtask_uvm_split_string__250__str 
                    = VL_CVT_PACK_STR_NN(vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_verb__Vstatic__values.at(unnamedblk210__DOT__i));
                __Vtask_uvm_split_string__250__s = 0;
                __Vtask_uvm_split_string__250__s = 0U;
                __Vtask_uvm_split_string__250__e = 0;
                __Vtask_uvm_split_string__250__e = 0U;
                args.clear();
                while (VL_LTS_III(32, __Vtask_uvm_split_string__250__e, 
                                  VL_LEN_IN(__Vtask_uvm_split_string__250__str))) {
                    __Vtask_uvm_split_string__250__s 
                        = __Vtask_uvm_split_string__250__e;
                    {
                        while (VL_LTS_III(32, __Vtask_uvm_split_string__250__e, 
                                          VL_LEN_IN(__Vtask_uvm_split_string__250__str))) {
                            if ((VL_GETC_N(__Vtask_uvm_split_string__250__str,__Vtask_uvm_split_string__250__e) 
                                 == (IData)(__Vtask_uvm_split_string__250__sep))) {
                                goto __Vlabel1;
                            }
                            __Vtask_uvm_split_string__250__e 
                                = ((IData)(1U) + __Vtask_uvm_split_string__250__e);
                        }
                        __Vlabel1: ;
                    }
                    if ((__Vtask_uvm_split_string__250__s 
                         != __Vtask_uvm_split_string__250__e)) {
                        args.push_back(VL_SUBSTR_N(__Vtask_uvm_split_string__250__str,__Vtask_uvm_split_string__250__s,
                                                   (__Vtask_uvm_split_string__250__e 
                                                    - (IData)(1U))));
                    }
                    __Vtask_uvm_split_string__250__e 
                        = ((IData)(1U) + __Vtask_uvm_split_string__250__e);
                }
                unnamedblk210__DOT__unnamedblk211__DOT__setting
                                           .__PVT__comp 
                    = args.at(0U);
                unnamedblk210__DOT__unnamedblk211__DOT__setting
                                           .__PVT__id 
                    = args.at(1U);
                VL_NULL_CHECK(clp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 3096)
                                           ->__VnoInFunc_m_convert_verb(vlSymsp, 
                                                                        VL_CVT_PACK_STR_NN(args.at(2U)), __Vtask_m_convert_verb__251__verb_enum, __Vtask_m_convert_verb__251__Vfuncout);
                unnamedblk210__DOT__unnamedblk211__DOT__setting
                                           .__PVT__verbosity 
                    = __Vtask_m_convert_verb__251__verb_enum;
                unnamedblk210__DOT__unnamedblk211__DOT__setting
                                           .__PVT__phase 
                    = args.at(3U);
                unnamedblk210__DOT__unnamedblk211__DOT__setting
                                           .__PVT__offset = 0ULL;
                if ((5U == args.size())) {
                    unnamedblk210__DOT__unnamedblk211__DOT__setting
                                           .__PVT__offset 
                        = VL_EXTENDS_QI(64,32, VL_ATOI_N(args.at(4U), 10));
                }
                if ((("time"s == unnamedblk210__DOT__unnamedblk211__DOT__setting
                      .__PVT__phase) & (VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component>{this} 
                                        == top))) {
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_time_settings.push_back(unnamedblk210__DOT__unnamedblk211__DOT__setting);
                }
                if (([&]() {
                            __Vfunc_uvm_is_match__252__str 
                                = VL_CVT_PACK_STR_NN(
                                                     ([&]() {
                                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__253__Vfuncout);
                                    }(), __Vfunc_get_full_name__253__Vfuncout));
                            __Vfunc_uvm_is_match__252__expr 
                                = VL_CVT_PACK_STR_NN(unnamedblk210__DOT__unnamedblk211__DOT__setting
                                                     .__PVT__comp);
                            __Vfunc_uvm_glob_to_re__254__glob 
                                = __Vfunc_uvm_is_match__252__expr;
                            __Vfunc_uvm_glob_to_re__254__Vfuncout 
                                = __Vfunc_uvm_glob_to_re__254__glob;
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
                                = __Vfunc_uvm_glob_to_re__254__Vfuncout;
                            __Vfunc_uvm_is_match__252__Vfuncout 
                                = (0U == ([&]() {
                                        __Vfunc_uvm_re_match__255__str 
                                            = __Vfunc_uvm_is_match__252__str;
                                        __Vfunc_uvm_re_match__255__re 
                                            = vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s;
                                        {
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                                            if ((0U 
                                                 == 
                                                 VL_LEN_IN(__Vfunc_uvm_re_match__255__re))) {
                                                __Vfunc_uvm_re_match__255__Vfuncout = 0U;
                                                goto __Vlabel2;
                                            }
                                            if ((0x5eU 
                                                 == 
                                                 VL_GETC_N(__Vfunc_uvm_re_match__255__re,0U))) {
                                                __Vfunc_uvm_re_match__255__re 
                                                    = 
                                                    VL_SUBSTR_N(__Vfunc_uvm_re_match__255__re,1U,
                                                                (VL_LEN_IN(__Vfunc_uvm_re_match__255__re) 
                                                                 - (IData)(1U)));
                                            }
                                            while (
                                                   ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                     != 
                                                     VL_LEN_IN(__Vfunc_uvm_re_match__255__str)) 
                                                    & (0x2aU 
                                                       != 
                                                       VL_GETC_N(__Vfunc_uvm_re_match__255__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                                if (
                                                    ((VL_GETC_N(__Vfunc_uvm_re_match__255__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                                      != 
                                                      VL_GETC_N(__Vfunc_uvm_re_match__255__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                                     & (0x3fU 
                                                        != 
                                                        VL_GETC_N(__Vfunc_uvm_re_match__255__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                                    __Vfunc_uvm_re_match__255__Vfuncout = 1U;
                                                    goto __Vlabel2;
                                                }
                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                            }
                                            while (
                                                   (vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                    != 
                                                    VL_LEN_IN(__Vfunc_uvm_re_match__255__str))) {
                                                if (
                                                    (0x2aU 
                                                     == 
                                                     VL_GETC_N(__Vfunc_uvm_re_match__255__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                        = 
                                                        ((IData)(1U) 
                                                         + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                                    if (
                                                        (vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                         == 
                                                         VL_LEN_IN(__Vfunc_uvm_re_match__255__re))) {
                                                        __Vfunc_uvm_re_match__255__Vfuncout = 0U;
                                                        goto __Vlabel2;
                                                    }
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                                                        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                                        = 
                                                        ((IData)(1U) 
                                                         + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                                } else if (
                                                           ((VL_GETC_N(__Vfunc_uvm_re_match__255__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                                             == 
                                                             VL_GETC_N(__Vfunc_uvm_re_match__255__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                                            | (0x3fU 
                                                               == 
                                                               VL_GETC_N(__Vfunc_uvm_re_match__255__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                        = 
                                                        ((IData)(1U) 
                                                         + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                        = 
                                                        ((IData)(1U) 
                                                         + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                                } else {
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                                                    __Vfunc_uvm_re_match__255____Vincrement1 
                                                        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                                        = 
                                                        ((IData)(1U) 
                                                         + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                        = __Vfunc_uvm_re_match__255____Vincrement1;
                                                }
                                            }
                                            while (
                                                   (VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                                               VL_LEN_IN(__Vfunc_uvm_re_match__255__re)) 
                                                    & (0x2aU 
                                                       == 
                                                       VL_GETC_N(__Vfunc_uvm_re_match__255__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                            }
                                            __Vfunc_uvm_re_match__255__Vfuncout 
                                                = (
                                                   (vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                    == 
                                                    VL_LEN_IN(__Vfunc_uvm_re_match__255__re))
                                                    ? 0U
                                                    : 1U);
                                            __Vlabel2: ;
                                        }
                                    }(), __Vfunc_uvm_re_match__255__Vfuncout));
                        }(), (IData)(__Vfunc_uvm_is_match__252__Vfuncout))) {
                    if (((((""s == unnamedblk210__DOT__unnamedblk211__DOT__setting
                            .__PVT__phase) | ("build"s 
                                              == unnamedblk210__DOT__unnamedblk211__DOT__setting
                                              .__PVT__phase)) 
                          | ("time"s == unnamedblk210__DOT__unnamedblk211__DOT__setting
                             .__PVT__phase)) & (0ULL 
                                                == unnamedblk210__DOT__unnamedblk211__DOT__setting
                                                .__PVT__offset))) {
                        if (("_ALL_"s == unnamedblk210__DOT__unnamedblk211__DOT__setting
                             .__PVT__id)) {
                            this->__VnoInFunc_set_report_verbosity_level(vlProcess, vlSymsp, unnamedblk210__DOT__unnamedblk211__DOT__setting
                                                                         .__PVT__verbosity);
                        } else {
                            this->__VnoInFunc_set_report_id_verbosity(vlProcess, vlSymsp, 
                                                                      VL_CVT_PACK_STR_NN(unnamedblk210__DOT__unnamedblk211__DOT__setting
                                                                                .__PVT__id), unnamedblk210__DOT__unnamedblk211__DOT__setting
                                                                      .__PVT__verbosity);
                        }
                    } else if (("time"s != unnamedblk210__DOT__unnamedblk211__DOT__setting
                                .__PVT__phase)) {
                        this->__PVT__m_verbosity_settings.push_back(unnamedblk210__DOT__unnamedblk211__DOT__setting);
                    }
                }
                unnamedblk210__DOT__i = ((IData)(1U) 
                                         + unnamedblk210__DOT__i);
            }
            if ((VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component>{this} 
                 == top)) {
                this->__VnoInFunc_m_set_cl_verb____Vfork_1__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, top);
            }
        }

        VlCoroutine Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_cl_verb____Vfork_1__0(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> top) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_cl_verb____Vfork_1__0\n"); );
            // Locals
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask___VforkTask_0__258__top;
            IData/*31:0*/ __Vtask___VforkTask_0__258__unnamedblk213__DOT__i;
            __Vtask___VforkTask_0__258__unnamedblk213__DOT__i = 0;
            VlQueue<VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component>> __Vtask___VforkTask_0__258__unnamedblk213__DOT__unnamedblk214__DOT__comps;
            IData/*31:0*/ __Vtask___VforkTask_0__258__unnamedblk213__DOT__unnamedblk214__DOT__unnamedblk215__DOT__j;
            __Vtask___VforkTask_0__258__unnamedblk213__DOT__unnamedblk214__DOT__unnamedblk215__DOT__j = 0;
            IData/*31:0*/ __Vtask___VforkTask_0__258__unnamedblk213__DOT__unnamedblk214__DOT__unnamedblk216__DOT__j;
            __Vtask___VforkTask_0__258__unnamedblk213__DOT__unnamedblk214__DOT__unnamedblk216__DOT__j = 0;
            QData/*63:0*/ __Vtask___VforkTask_0__258__last_time;
            __Vtask___VforkTask_0__258__last_time = 0;
            // Body
            VL_KEEP_THIS;
            __Vtask___VforkTask_0__258__top = top;
            __Vtask___VforkTask_0__258__unnamedblk213__DOT__i = 0;
            __Vtask___VforkTask_0__258__unnamedblk213__DOT__unnamedblk214__DOT__comps.clear();
            __Vtask___VforkTask_0__258__unnamedblk213__DOT__unnamedblk214__DOT__unnamedblk215__DOT__j = 0;
            __Vtask___VforkTask_0__258__unnamedblk213__DOT__unnamedblk214__DOT__unnamedblk216__DOT__j = 0;
            __Vtask___VforkTask_0__258__last_time = 0;
            __Vtask___VforkTask_0__258__last_time = 0ULL;
            if (VL_LTS_III(32, 0U, vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_time_settings.size())) {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_time_settings.sort(
                                                                                [&](
                                                                                IData/*31:0*/ item__DOT__index, 
                                                                                Vuart_example_m_verbosity_setting__struct__0 item) -> 
                                                                                QData/*63:0*/ {
                        return (item.__PVT__offset);
                    }
                );
            }
            __Vtask___VforkTask_0__258__unnamedblk213__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask___VforkTask_0__258__unnamedblk213__DOT__i, vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_time_settings.size())) {
                VL_NULL_CHECK(__Vtask___VforkTask_0__258__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 3129)
                                           ->__VnoInFunc_find_all(vlProcess, vlSymsp, 
                                                                  VL_CVT_PACK_STR_NN(vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_time_settings.at(__Vtask___VforkTask_0__258__unnamedblk213__DOT__i)
                                                                                .__PVT__comp), __Vtask___VforkTask_0__258__unnamedblk213__DOT__unnamedblk214__DOT__comps, VlNull{});
                co_await vlSymsp->TOP.__VdlySched.delay(
                                                        (0x00000000000003e8ULL 
                                                         * 
                                                         (vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_time_settings.at(__Vtask___VforkTask_0__258__unnamedblk213__DOT__i)
                                                          .__PVT__offset 
                                                          - __Vtask___VforkTask_0__258__last_time)), 
                                                        vlProcess, 
                                                        "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 
                                                        3130);
                __Vtask___VforkTask_0__258__last_time 
                    = vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_time_settings.at(__Vtask___VforkTask_0__258__unnamedblk213__DOT__i)
                    .__PVT__offset;
                if (("_ALL_"s == vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_time_settings.at(__Vtask___VforkTask_0__258__unnamedblk213__DOT__i)
                     .__PVT__id)) {
                    __Vtask___VforkTask_0__258__unnamedblk213__DOT__unnamedblk214__DOT__unnamedblk215__DOT__j = 0U;
                    while (VL_LTS_III(32, __Vtask___VforkTask_0__258__unnamedblk213__DOT__unnamedblk214__DOT__unnamedblk215__DOT__j, __Vtask___VforkTask_0__258__unnamedblk213__DOT__unnamedblk214__DOT__comps.size())) {
                        VL_NULL_CHECK(__Vtask___VforkTask_0__258__unnamedblk213__DOT__unnamedblk214__DOT__comps.at(__Vtask___VforkTask_0__258__unnamedblk213__DOT__unnamedblk214__DOT__unnamedblk215__DOT__j), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 3134)
                                           ->__VnoInFunc_set_report_verbosity_level(vlProcess, vlSymsp, vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_time_settings.at(__Vtask___VforkTask_0__258__unnamedblk213__DOT__i)
                                                                                .__PVT__verbosity);
                        __Vtask___VforkTask_0__258__unnamedblk213__DOT__unnamedblk214__DOT__unnamedblk215__DOT__j 
                            = ((IData)(1U) + __Vtask___VforkTask_0__258__unnamedblk213__DOT__unnamedblk214__DOT__unnamedblk215__DOT__j);
                    }
                } else {
                    __Vtask___VforkTask_0__258__unnamedblk213__DOT__unnamedblk214__DOT__unnamedblk216__DOT__j = 0U;
                    while (VL_LTS_III(32, __Vtask___VforkTask_0__258__unnamedblk213__DOT__unnamedblk214__DOT__unnamedblk216__DOT__j, __Vtask___VforkTask_0__258__unnamedblk213__DOT__unnamedblk214__DOT__comps.size())) {
                        VL_NULL_CHECK(__Vtask___VforkTask_0__258__unnamedblk213__DOT__unnamedblk214__DOT__comps.at(__Vtask___VforkTask_0__258__unnamedblk213__DOT__unnamedblk214__DOT__unnamedblk216__DOT__j), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 3139)
                                           ->__VnoInFunc_set_report_id_verbosity(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_time_settings.at(__Vtask___VforkTask_0__258__unnamedblk213__DOT__i)
                                                                                .__PVT__id), vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_time_settings.at(__Vtask___VforkTask_0__258__unnamedblk213__DOT__i)
                                                                                .__PVT__verbosity);
                        __Vtask___VforkTask_0__258__unnamedblk213__DOT__unnamedblk214__DOT__unnamedblk216__DOT__j 
                            = ((IData)(1U) + __Vtask___VforkTask_0__258__unnamedblk213__DOT__unnamedblk214__DOT__unnamedblk216__DOT__j);
                    }
                }
                __Vtask___VforkTask_0__258__unnamedblk213__DOT__i 
                    = ((IData)(1U) + __Vtask___VforkTask_0__258__unnamedblk213__DOT__i);
            }
            vlProcess->state(VlProcess::FINISHED);
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_cl_action(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_cl_action\n"); );
            // Locals
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_cmdline_processor> __Vfunc_get_inst__262__Vfuncout;
            IData/*31:0*/ __Vtask_get_arg_values__263__Vfuncout;
            __Vtask_get_arg_values__263__Vfuncout = 0;
            std::string __Vtask_uvm_split_string__264__str;
            CData/*7:0*/ __Vtask_uvm_split_string__264__sep;
            __Vtask_uvm_split_string__264__sep = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__264__s;
            __Vtask_uvm_split_string__264__s = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__264__e;
            __Vtask_uvm_split_string__264__e = 0;
            IData/*31:0*/ __Vfunc_uvm_report_enabled__265__Vfuncout;
            __Vfunc_uvm_report_enabled__265__Vfuncout = 0;
            CData/*0:0*/ __Vfunc_uvm_string_to_severity__267__Vfuncout;
            __Vfunc_uvm_string_to_severity__267__Vfuncout = 0;
            std::string __Vfunc_uvm_string_to_severity__267__sev_str;
            CData/*1:0*/ __Vfunc_uvm_string_to_severity__267__sev;
            __Vfunc_uvm_string_to_severity__267__sev = 0;
            IData/*31:0*/ __Vfunc_uvm_report_enabled__268__Vfuncout;
            __Vfunc_uvm_report_enabled__268__Vfuncout = 0;
            CData/*0:0*/ __Vfunc_uvm_string_to_action__270__Vfuncout;
            __Vfunc_uvm_string_to_action__270__Vfuncout = 0;
            std::string __Vfunc_uvm_string_to_action__270__action_str;
            IData/*31:0*/ __Vfunc_uvm_string_to_action__270__action;
            __Vfunc_uvm_string_to_action__270__action = 0;
            IData/*31:0*/ __Vfunc_uvm_string_to_action__270__unnamedblk8__DOT__i;
            __Vfunc_uvm_string_to_action__270__unnamedblk8__DOT__i = 0;
            VlQueue<std::string> __Vfunc_uvm_string_to_action__270__actions;
            std::string __Vtask_uvm_split_string__271__str;
            CData/*7:0*/ __Vtask_uvm_split_string__271__sep;
            __Vtask_uvm_split_string__271__sep = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__271__s;
            __Vtask_uvm_split_string__271__s = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__271__e;
            __Vtask_uvm_split_string__271__e = 0;
            IData/*31:0*/ __Vfunc_uvm_report_enabled__272__Vfuncout;
            __Vfunc_uvm_report_enabled__272__Vfuncout = 0;
            CData/*0:0*/ __Vfunc_uvm_is_match__274__Vfuncout;
            __Vfunc_uvm_is_match__274__Vfuncout = 0;
            std::string __Vfunc_uvm_is_match__274__expr;
            std::string __Vfunc_uvm_is_match__274__str;
            std::string __Vfunc_get_full_name__275__Vfuncout;
            std::string __Vfunc_uvm_glob_to_re__276__Vfuncout;
            std::string __Vfunc_uvm_glob_to_re__276__glob;
            IData/*31:0*/ __Vfunc_uvm_re_match__277__Vfuncout;
            __Vfunc_uvm_re_match__277__Vfuncout = 0;
            std::string __Vfunc_uvm_re_match__277__re;
            std::string __Vfunc_uvm_re_match__277__str;
            IData/*31:0*/ __Vfunc_uvm_re_match__277____Vincrement1;
            __Vfunc_uvm_re_match__277____Vincrement1 = 0;
            std::string __Vtask_uvm_string_to_severity__278__sev_str;
            CData/*1:0*/ __Vtask_uvm_string_to_severity__278__sev;
            __Vtask_uvm_string_to_severity__278__sev = 0;
            std::string __Vtask_uvm_string_to_action__279__action_str;
            IData/*31:0*/ __Vtask_uvm_string_to_action__279__action;
            __Vtask_uvm_string_to_action__279__action = 0;
            IData/*31:0*/ __Vtask_uvm_string_to_action__279__unnamedblk8__DOT__i;
            __Vtask_uvm_string_to_action__279__unnamedblk8__DOT__i = 0;
            VlQueue<std::string> __Vtask_uvm_string_to_action__279__actions;
            std::string __Vtask_uvm_split_string__280__str;
            CData/*7:0*/ __Vtask_uvm_split_string__280__sep;
            __Vtask_uvm_split_string__280__sep = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__280__s;
            __Vtask_uvm_split_string__280__s = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__280__e;
            __Vtask_uvm_split_string__280__e = 0;
            std::string __Vtemp_1;
            std::string __Vtemp_2;
            std::string __Vtemp_3;
            std::string __Vtemp_4;
            std::string __Vtemp_5;
            // Body
            VlQueue<std::string> unnamedblk217__DOT__values;
            IData/*31:0*/ unnamedblk217__DOT__unnamedblk218__DOT__idx;
            unnamedblk217__DOT__unnamedblk218__DOT__idx = 0;
            Vuart_example_uvm_cmdline_parsed_arg_t__struct__0 unnamedblk217__DOT__unnamedblk218__DOT__unnamedblk219__DOT__t;
            unnamedblk217__DOT__unnamedblk218__DOT__unnamedblk219__DOT__t.__PVT__used = 0;
            VlQueue<std::string> unnamedblk217__DOT__unnamedblk218__DOT__unnamedblk219__DOT__args;
            IData/*31:0*/ unnamedblk220__DOT__i;
            unnamedblk220__DOT__i = 0;
            VlQueue<std::string> unnamedblk220__DOT__unnamedblk221__DOT__args;
            CData/*1:0*/ sev;
            sev = 0;
            IData/*31:0*/ action;
            action = 0;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_cmdline_processor> uvm_cmdline_proc;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg.__VnoInFunc_get_inst(vlProcess, vlSymsp, __Vfunc_get_inst__262__Vfuncout);
            uvm_cmdline_proc = __Vfunc_get_inst__262__Vfuncout;
            if ((1U & (~ (IData)(vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_action__Vstatic__initialized)))) {
                VL_NULL_CHECK(uvm_cmdline_proc, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 3162)
                                           ->__VnoInFunc_get_arg_values(vlSymsp, "+uvm_set_action="s, unnamedblk217__DOT__values, __Vtask_get_arg_values__263__Vfuncout);
                unnamedblk217__DOT__unnamedblk218__DOT__idx = 0U;
                while (VL_LTS_III(32, unnamedblk217__DOT__unnamedblk218__DOT__idx, unnamedblk217__DOT__values.size())) {
                    {
                        __Vtask_uvm_split_string__264__sep = 0x2cU;
                        __Vtask_uvm_split_string__264__str 
                            = VL_CVT_PACK_STR_NN(unnamedblk217__DOT__values.at(unnamedblk217__DOT__unnamedblk218__DOT__idx));
                        __Vtask_uvm_split_string__264__s = 0;
                        __Vtask_uvm_split_string__264__s = 0U;
                        __Vtask_uvm_split_string__264__e = 0;
                        __Vtask_uvm_split_string__264__e = 0U;
                        unnamedblk217__DOT__unnamedblk218__DOT__unnamedblk219__DOT__args.clear();
                        while (VL_LTS_III(32, __Vtask_uvm_split_string__264__e, 
                                          VL_LEN_IN(__Vtask_uvm_split_string__264__str))) {
                            __Vtask_uvm_split_string__264__s 
                                = __Vtask_uvm_split_string__264__e;
                            {
                                while (VL_LTS_III(32, __Vtask_uvm_split_string__264__e, 
                                                  VL_LEN_IN(__Vtask_uvm_split_string__264__str))) {
                                    if ((VL_GETC_N(__Vtask_uvm_split_string__264__str,__Vtask_uvm_split_string__264__e) 
                                         == (IData)(__Vtask_uvm_split_string__264__sep))) {
                                        goto __Vlabel1;
                                    }
                                    __Vtask_uvm_split_string__264__e 
                                        = ((IData)(1U) 
                                           + __Vtask_uvm_split_string__264__e);
                                }
                                __Vlabel1: ;
                            }
                            if ((__Vtask_uvm_split_string__264__s 
                                 != __Vtask_uvm_split_string__264__e)) {
                                unnamedblk217__DOT__unnamedblk218__DOT__unnamedblk219__DOT__args.push_back(
                                                                                VL_SUBSTR_N(__Vtask_uvm_split_string__264__str,__Vtask_uvm_split_string__264__s,
                                                                                (__Vtask_uvm_split_string__264__e 
                                                                                - (IData)(1U))));
                            }
                            __Vtask_uvm_split_string__264__e 
                                = ((IData)(1U) + __Vtask_uvm_split_string__264__e);
                        }
                        if ((4U != unnamedblk217__DOT__unnamedblk218__DOT__unnamedblk219__DOT__args.size())) {
                            if ((0U != ([&]() {
                                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "INVLCMDARGS"s, __Vfunc_uvm_report_enabled__265__Vfuncout);
                                        }(), __Vfunc_uvm_report_enabled__265__Vfuncout))) {
                                __Vtemp_1 = unnamedblk217__DOT__values.at(unnamedblk217__DOT__unnamedblk218__DOT__idx);
                                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "INVLCMDARGS"s, VL_SFORMATF_N_NX("+uvm_set_action requires 4 arguments, but %0d given for command +uvm_set_action=%@, Usage: +uvm_set_action=<comp>,<id>,<severity>,<action[|action]>",0,
                                                                                32,
                                                                                unnamedblk217__DOT__unnamedblk218__DOT__unnamedblk219__DOT__args.size(),
                                                                                -1,
                                                                                &(__Vtemp_1)) , 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh"s, 0x00000c61U, ""s, 1U);
                            }
                            goto __Vlabel0;
                        }
                        if ((("_ALL_"s != unnamedblk217__DOT__unnamedblk218__DOT__unnamedblk219__DOT__args.at(2U)) 
                             & (~ ([&]() {
                                            __Vfunc_uvm_string_to_severity__267__sev_str 
                                                = VL_CVT_PACK_STR_NN(unnamedblk217__DOT__unnamedblk218__DOT__unnamedblk219__DOT__args.at(2U));
                                            {
                                                if (
                                                    ("UVM_INFO"s 
                                                     == __Vfunc_uvm_string_to_severity__267__sev_str)) {
                                                    __Vfunc_uvm_string_to_severity__267__sev = 0U;
                                                } else if (
                                                           ("UVM_WARNING"s 
                                                            == __Vfunc_uvm_string_to_severity__267__sev_str)) {
                                                    __Vfunc_uvm_string_to_severity__267__sev = 1U;
                                                } else if (
                                                           ("UVM_ERROR"s 
                                                            == __Vfunc_uvm_string_to_severity__267__sev_str)) {
                                                    __Vfunc_uvm_string_to_severity__267__sev = 2U;
                                                } else if (
                                                           ("UVM_FATAL"s 
                                                            == __Vfunc_uvm_string_to_severity__267__sev_str)) {
                                                    __Vfunc_uvm_string_to_severity__267__sev = 3U;
                                                } else {
                                                    __Vfunc_uvm_string_to_severity__267__Vfuncout = 0U;
                                                    goto __Vlabel2;
                                                }
                                                __Vfunc_uvm_string_to_severity__267__Vfuncout = 1U;
                                                __Vlabel2: ;
                                            }
                                            sev = __Vfunc_uvm_string_to_severity__267__sev;
                                        }(), (IData)(__Vfunc_uvm_string_to_severity__267__Vfuncout))))) {
                            if ((0U != ([&]() {
                                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "INVLCMDARGS"s, __Vfunc_uvm_report_enabled__268__Vfuncout);
                                        }(), __Vfunc_uvm_report_enabled__268__Vfuncout))) {
                                __Vtemp_2 = unnamedblk217__DOT__unnamedblk218__DOT__unnamedblk219__DOT__args.at(2U);
                                __Vtemp_3 = unnamedblk217__DOT__values.at(unnamedblk217__DOT__unnamedblk218__DOT__idx);
                                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "INVLCMDARGS"s, VL_SFORMATF_N_NX("Bad severity argument \"%@\" given to command +uvm_set_action=%@, Usage: +uvm_set_action=<comp>,<id>,<severity>,<action[|action]>",0,
                                                                                -1,
                                                                                &(__Vtemp_2),
                                                                                -1,
                                                                                &(__Vtemp_3)) , 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh"s, 0x00000c65U, ""s, 1U);
                            }
                            goto __Vlabel0;
                        }
                        if ((1U & (~ ([&]() {
                                            __Vfunc_uvm_string_to_action__270__action_str 
                                                = VL_CVT_PACK_STR_NN(unnamedblk217__DOT__unnamedblk218__DOT__unnamedblk219__DOT__args.at(3U));
                                            __Vfunc_uvm_string_to_action__270__unnamedblk8__DOT__i = 0;
                                            __Vfunc_uvm_string_to_action__270__actions.clear();
                                            __Vfunc_uvm_string_to_action__270__actions.atDefault().clear();
                                            __Vtask_uvm_split_string__271__sep = 0x7cU;
                                            __Vtask_uvm_split_string__271__str 
                                                = __Vfunc_uvm_string_to_action__270__action_str;
                                            __Vtask_uvm_split_string__271__s = 0;
                                            __Vtask_uvm_split_string__271__s = 0U;
                                            __Vtask_uvm_split_string__271__e = 0;
                                            __Vtask_uvm_split_string__271__e = 0U;
                                            __Vfunc_uvm_string_to_action__270__actions.clear();
                                            while (
                                                   VL_LTS_III(32, __Vtask_uvm_split_string__271__e, 
                                                              VL_LEN_IN(__Vtask_uvm_split_string__271__str))) {
                                                __Vtask_uvm_split_string__271__s 
                                                    = __Vtask_uvm_split_string__271__e;
                                                {
                                                    while (
                                                           VL_LTS_III(32, __Vtask_uvm_split_string__271__e, 
                                                                      VL_LEN_IN(__Vtask_uvm_split_string__271__str))) {
                                                        if (
                                                            (VL_GETC_N(__Vtask_uvm_split_string__271__str,__Vtask_uvm_split_string__271__e) 
                                                             == (IData)(__Vtask_uvm_split_string__271__sep))) {
                                                            goto __Vlabel3;
                                                        }
                                                        __Vtask_uvm_split_string__271__e 
                                                            = 
                                                            ((IData)(1U) 
                                                             + __Vtask_uvm_split_string__271__e);
                                                    }
                                                    __Vlabel3: ;
                                                }
                                                if (
                                                    (__Vtask_uvm_split_string__271__s 
                                                     != __Vtask_uvm_split_string__271__e)) {
                                                    __Vfunc_uvm_string_to_action__270__actions.push_back(
                                                                                VL_SUBSTR_N(__Vtask_uvm_split_string__271__str,__Vtask_uvm_split_string__271__s,
                                                                                (__Vtask_uvm_split_string__271__e 
                                                                                - (IData)(1U))));
                                                }
                                                __Vtask_uvm_split_string__271__e 
                                                    = 
                                                    ((IData)(1U) 
                                                     + __Vtask_uvm_split_string__271__e);
                                            }
                                            __Vfunc_uvm_string_to_action__270__Vfuncout = 1U;
                                            __Vfunc_uvm_string_to_action__270__action = 0U;
                                            __Vfunc_uvm_string_to_action__270__unnamedblk8__DOT__i = 0U;
                                            while (
                                                   VL_LTS_III(32, __Vfunc_uvm_string_to_action__270__unnamedblk8__DOT__i, __Vfunc_uvm_string_to_action__270__actions.size())) {
                                                if (
                                                    (((((((("UVM_NO_ACTION"s 
                                                            == __Vfunc_uvm_string_to_action__270__actions.at(__Vfunc_uvm_string_to_action__270__unnamedblk8__DOT__i)) 
                                                           | ("UVM_DISPLAY"s 
                                                              == __Vfunc_uvm_string_to_action__270__actions.at(__Vfunc_uvm_string_to_action__270__unnamedblk8__DOT__i))) 
                                                          | ("UVM_LOG"s 
                                                             == __Vfunc_uvm_string_to_action__270__actions.at(__Vfunc_uvm_string_to_action__270__unnamedblk8__DOT__i))) 
                                                         | ("UVM_COUNT"s 
                                                            == __Vfunc_uvm_string_to_action__270__actions.at(__Vfunc_uvm_string_to_action__270__unnamedblk8__DOT__i))) 
                                                        | ("UVM_EXIT"s 
                                                           == __Vfunc_uvm_string_to_action__270__actions.at(__Vfunc_uvm_string_to_action__270__unnamedblk8__DOT__i))) 
                                                       | ("UVM_CALL_HOOK"s 
                                                          == __Vfunc_uvm_string_to_action__270__actions.at(__Vfunc_uvm_string_to_action__270__unnamedblk8__DOT__i))) 
                                                      | ("UVM_STOP"s 
                                                         == __Vfunc_uvm_string_to_action__270__actions.at(__Vfunc_uvm_string_to_action__270__unnamedblk8__DOT__i))) 
                                                     | ("UVM_RM_RECORD"s 
                                                        == __Vfunc_uvm_string_to_action__270__actions.at(__Vfunc_uvm_string_to_action__270__unnamedblk8__DOT__i)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ("UVM_NO_ACTION"s 
                                                             == __Vfunc_uvm_string_to_action__270__actions.at(__Vfunc_uvm_string_to_action__270__unnamedblk8__DOT__i))))) {
                                                        __Vfunc_uvm_string_to_action__270__action 
                                                            = 
                                                            (("UVM_DISPLAY"s 
                                                              == __Vfunc_uvm_string_to_action__270__actions.at(__Vfunc_uvm_string_to_action__270__unnamedblk8__DOT__i))
                                                              ? 
                                                             (1U 
                                                              | __Vfunc_uvm_string_to_action__270__action)
                                                              : 
                                                             (("UVM_LOG"s 
                                                               == __Vfunc_uvm_string_to_action__270__actions.at(__Vfunc_uvm_string_to_action__270__unnamedblk8__DOT__i))
                                                               ? 
                                                              (2U 
                                                               | __Vfunc_uvm_string_to_action__270__action)
                                                               : 
                                                              (("UVM_COUNT"s 
                                                                == __Vfunc_uvm_string_to_action__270__actions.at(__Vfunc_uvm_string_to_action__270__unnamedblk8__DOT__i))
                                                                ? 
                                                               (4U 
                                                                | __Vfunc_uvm_string_to_action__270__action)
                                                                : 
                                                               (("UVM_EXIT"s 
                                                                 == __Vfunc_uvm_string_to_action__270__actions.at(__Vfunc_uvm_string_to_action__270__unnamedblk8__DOT__i))
                                                                 ? 
                                                                (8U 
                                                                 | __Vfunc_uvm_string_to_action__270__action)
                                                                 : 
                                                                (("UVM_CALL_HOOK"s 
                                                                  == __Vfunc_uvm_string_to_action__270__actions.at(__Vfunc_uvm_string_to_action__270__unnamedblk8__DOT__i))
                                                                  ? 
                                                                 (0x00000010U 
                                                                  | __Vfunc_uvm_string_to_action__270__action)
                                                                  : 
                                                                 (("UVM_STOP"s 
                                                                   == __Vfunc_uvm_string_to_action__270__actions.at(__Vfunc_uvm_string_to_action__270__unnamedblk8__DOT__i))
                                                                   ? 
                                                                  (0x00000020U 
                                                                   | __Vfunc_uvm_string_to_action__270__action)
                                                                   : 
                                                                  (0x00000040U 
                                                                   | __Vfunc_uvm_string_to_action__270__action)))))));
                                                    }
                                                } else {
                                                    __Vfunc_uvm_string_to_action__270__Vfuncout = 0U;
                                                }
                                                __Vfunc_uvm_string_to_action__270__unnamedblk8__DOT__i 
                                                    = 
                                                    ((IData)(1U) 
                                                     + __Vfunc_uvm_string_to_action__270__unnamedblk8__DOT__i);
                                            }
                                            action 
                                                = __Vfunc_uvm_string_to_action__270__action;
                                        }(), (IData)(__Vfunc_uvm_string_to_action__270__Vfuncout))))) {
                            if ((0U != ([&]() {
                                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "INVLCMDARGS"s, __Vfunc_uvm_report_enabled__272__Vfuncout);
                                        }(), __Vfunc_uvm_report_enabled__272__Vfuncout))) {
                                __Vtemp_4 = unnamedblk217__DOT__unnamedblk218__DOT__unnamedblk219__DOT__args.at(3U);
                                __Vtemp_5 = unnamedblk217__DOT__values.at(unnamedblk217__DOT__unnamedblk218__DOT__idx);
                                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "INVLCMDARGS"s, VL_SFORMATF_N_NX("Bad action argument \"%@\" given to command +uvm_set_action=%@, Usage: +uvm_set_action=<comp>,<id>,<severity>,<action[|action]>",0,
                                                                                -1,
                                                                                &(__Vtemp_4),
                                                                                -1,
                                                                                &(__Vtemp_5)) , 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh"s, 0x00000c69U, ""s, 1U);
                            }
                            goto __Vlabel0;
                        }
                        unnamedblk217__DOT__unnamedblk218__DOT__unnamedblk219__DOT__t
                                           .__PVT__args 
                            = unnamedblk217__DOT__unnamedblk218__DOT__unnamedblk219__DOT__args;
                        unnamedblk217__DOT__unnamedblk218__DOT__unnamedblk219__DOT__t
                                           .__PVT__arg 
                            = unnamedblk217__DOT__values.at(unnamedblk217__DOT__unnamedblk218__DOT__idx);
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_uvm_applied_cl_action.push_back(unnamedblk217__DOT__unnamedblk218__DOT__unnamedblk219__DOT__t);
                        __Vlabel0: ;
                    }
                    unnamedblk217__DOT__unnamedblk218__DOT__idx 
                        = ((IData)(1U) + unnamedblk217__DOT__unnamedblk218__DOT__idx);
                }
                vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_action__Vstatic__initialized = 1U;
            }
            unnamedblk220__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk220__DOT__i, vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_uvm_applied_cl_action.size())) {
                {
                    unnamedblk220__DOT__unnamedblk221__DOT__args 
                        = vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_uvm_applied_cl_action.at(unnamedblk220__DOT__i)
                        .__PVT__args;
                    if ((1U & (~ ([&]() {
                                        __Vfunc_uvm_is_match__274__str 
                                            = VL_CVT_PACK_STR_NN(
                                                                 ([&]() {
                                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__275__Vfuncout);
                                                }(), __Vfunc_get_full_name__275__Vfuncout));
                                        __Vfunc_uvm_is_match__274__expr 
                                            = VL_CVT_PACK_STR_NN(unnamedblk220__DOT__unnamedblk221__DOT__args.at(0U));
                                        __Vfunc_uvm_glob_to_re__276__glob 
                                            = __Vfunc_uvm_is_match__274__expr;
                                        __Vfunc_uvm_glob_to_re__276__Vfuncout 
                                            = __Vfunc_uvm_glob_to_re__276__glob;
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
                                            = __Vfunc_uvm_glob_to_re__276__Vfuncout;
                                        __Vfunc_uvm_is_match__274__Vfuncout 
                                            = (0U == 
                                               ([&]() {
                                                    __Vfunc_uvm_re_match__277__str 
                                                        = __Vfunc_uvm_is_match__274__str;
                                                    __Vfunc_uvm_re_match__277__re 
                                                        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s;
                                                    {
                                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                                                        if (
                                                            (0U 
                                                             == 
                                                             VL_LEN_IN(__Vfunc_uvm_re_match__277__re))) {
                                                            __Vfunc_uvm_re_match__277__Vfuncout = 0U;
                                                            goto __Vlabel5;
                                                        }
                                                        if (
                                                            (0x5eU 
                                                             == 
                                                             VL_GETC_N(__Vfunc_uvm_re_match__277__re,0U))) {
                                                            __Vfunc_uvm_re_match__277__re 
                                                                = 
                                                                VL_SUBSTR_N(__Vfunc_uvm_re_match__277__re,1U,
                                                                            (VL_LEN_IN(__Vfunc_uvm_re_match__277__re) 
                                                                             - (IData)(1U)));
                                                        }
                                                        while (
                                                               ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                                 != 
                                                                 VL_LEN_IN(__Vfunc_uvm_re_match__277__str)) 
                                                                & (0x2aU 
                                                                   != 
                                                                   VL_GETC_N(__Vfunc_uvm_re_match__277__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                                            if (
                                                                ((VL_GETC_N(__Vfunc_uvm_re_match__277__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                                                  != 
                                                                  VL_GETC_N(__Vfunc_uvm_re_match__277__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                                                 & (0x3fU 
                                                                    != 
                                                                    VL_GETC_N(__Vfunc_uvm_re_match__277__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                                                __Vfunc_uvm_re_match__277__Vfuncout = 1U;
                                                                goto __Vlabel5;
                                                            }
                                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                                        }
                                                        while (
                                                               (vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                                != 
                                                                VL_LEN_IN(__Vfunc_uvm_re_match__277__str))) {
                                                            if (
                                                                (0x2aU 
                                                                 == 
                                                                 VL_GETC_N(__Vfunc_uvm_re_match__277__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                                    = 
                                                                    ((IData)(1U) 
                                                                     + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                                                if (
                                                                    (vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                                     == 
                                                                     VL_LEN_IN(__Vfunc_uvm_re_match__277__re))) {
                                                                    __Vfunc_uvm_re_match__277__Vfuncout = 0U;
                                                                    goto __Vlabel5;
                                                                }
                                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                                                                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                                                    = 
                                                                    ((IData)(1U) 
                                                                     + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                                            } else if (
                                                                       ((VL_GETC_N(__Vfunc_uvm_re_match__277__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                                                         == 
                                                                         VL_GETC_N(__Vfunc_uvm_re_match__277__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                                                        | (0x3fU 
                                                                           == 
                                                                           VL_GETC_N(__Vfunc_uvm_re_match__277__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                                    = 
                                                                    ((IData)(1U) 
                                                                     + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                                    = 
                                                                    ((IData)(1U) 
                                                                     + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                                            } else {
                                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                                                                __Vfunc_uvm_re_match__277____Vincrement1 
                                                                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                                                    = 
                                                                    ((IData)(1U) 
                                                                     + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                                    = __Vfunc_uvm_re_match__277____Vincrement1;
                                                            }
                                                        }
                                                        while (
                                                               (VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                                                           VL_LEN_IN(__Vfunc_uvm_re_match__277__re)) 
                                                                & (0x2aU 
                                                                   == 
                                                                   VL_GETC_N(__Vfunc_uvm_re_match__277__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                                        }
                                                        __Vfunc_uvm_re_match__277__Vfuncout 
                                                            = 
                                                            ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                              == 
                                                              VL_LEN_IN(__Vfunc_uvm_re_match__277__re))
                                                              ? 0U
                                                              : 1U);
                                                        __Vlabel5: ;
                                                    }
                                                }(), __Vfunc_uvm_re_match__277__Vfuncout));
                                    }(), (IData)(__Vfunc_uvm_is_match__274__Vfuncout))))) {
                        goto __Vlabel4;
                    }
                    __Vtask_uvm_string_to_severity__278__sev_str 
                        = VL_CVT_PACK_STR_NN(unnamedblk220__DOT__unnamedblk221__DOT__args.at(2U));
                    if (("UVM_INFO"s == __Vtask_uvm_string_to_severity__278__sev_str)) {
                        __Vtask_uvm_string_to_severity__278__sev = 0U;
                    } else if (("UVM_WARNING"s == __Vtask_uvm_string_to_severity__278__sev_str)) {
                        __Vtask_uvm_string_to_severity__278__sev = 1U;
                    } else if (("UVM_ERROR"s == __Vtask_uvm_string_to_severity__278__sev_str)) {
                        __Vtask_uvm_string_to_severity__278__sev = 2U;
                    } else if (("UVM_FATAL"s == __Vtask_uvm_string_to_severity__278__sev_str)) {
                        __Vtask_uvm_string_to_severity__278__sev = 3U;
                    }
                    sev = __Vtask_uvm_string_to_severity__278__sev;
                    __Vtask_uvm_string_to_action__279__action_str 
                        = VL_CVT_PACK_STR_NN(unnamedblk220__DOT__unnamedblk221__DOT__args.at(3U));
                    __Vtask_uvm_string_to_action__279__unnamedblk8__DOT__i = 0;
                    __Vtask_uvm_string_to_action__279__actions.clear();
                    __Vtask_uvm_string_to_action__279__actions.atDefault().clear();
                    __Vtask_uvm_split_string__280__sep = 0x7cU;
                    __Vtask_uvm_split_string__280__str 
                        = __Vtask_uvm_string_to_action__279__action_str;
                    __Vtask_uvm_split_string__280__s = 0;
                    __Vtask_uvm_split_string__280__s = 0U;
                    __Vtask_uvm_split_string__280__e = 0;
                    __Vtask_uvm_split_string__280__e = 0U;
                    __Vtask_uvm_string_to_action__279__actions.clear();
                    while (VL_LTS_III(32, __Vtask_uvm_split_string__280__e, 
                                      VL_LEN_IN(__Vtask_uvm_split_string__280__str))) {
                        __Vtask_uvm_split_string__280__s 
                            = __Vtask_uvm_split_string__280__e;
                        {
                            while (VL_LTS_III(32, __Vtask_uvm_split_string__280__e, 
                                              VL_LEN_IN(__Vtask_uvm_split_string__280__str))) {
                                if ((VL_GETC_N(__Vtask_uvm_split_string__280__str,__Vtask_uvm_split_string__280__e) 
                                     == (IData)(__Vtask_uvm_split_string__280__sep))) {
                                    goto __Vlabel6;
                                }
                                __Vtask_uvm_split_string__280__e 
                                    = ((IData)(1U) 
                                       + __Vtask_uvm_split_string__280__e);
                            }
                            __Vlabel6: ;
                        }
                        if ((__Vtask_uvm_split_string__280__s 
                             != __Vtask_uvm_split_string__280__e)) {
                            __Vtask_uvm_string_to_action__279__actions.push_back(
                                                                                VL_SUBSTR_N(__Vtask_uvm_split_string__280__str,__Vtask_uvm_split_string__280__s,
                                                                                (__Vtask_uvm_split_string__280__e 
                                                                                - (IData)(1U))));
                        }
                        __Vtask_uvm_split_string__280__e 
                            = ((IData)(1U) + __Vtask_uvm_split_string__280__e);
                    }
                    __Vtask_uvm_string_to_action__279__action = 0U;
                    __Vtask_uvm_string_to_action__279__unnamedblk8__DOT__i = 0U;
                    while (VL_LTS_III(32, __Vtask_uvm_string_to_action__279__unnamedblk8__DOT__i, __Vtask_uvm_string_to_action__279__actions.size())) {
                        if ((((((((("UVM_NO_ACTION"s 
                                    == __Vtask_uvm_string_to_action__279__actions.at(__Vtask_uvm_string_to_action__279__unnamedblk8__DOT__i)) 
                                   | ("UVM_DISPLAY"s 
                                      == __Vtask_uvm_string_to_action__279__actions.at(__Vtask_uvm_string_to_action__279__unnamedblk8__DOT__i))) 
                                  | ("UVM_LOG"s == __Vtask_uvm_string_to_action__279__actions.at(__Vtask_uvm_string_to_action__279__unnamedblk8__DOT__i))) 
                                 | ("UVM_COUNT"s == __Vtask_uvm_string_to_action__279__actions.at(__Vtask_uvm_string_to_action__279__unnamedblk8__DOT__i))) 
                                | ("UVM_EXIT"s == __Vtask_uvm_string_to_action__279__actions.at(__Vtask_uvm_string_to_action__279__unnamedblk8__DOT__i))) 
                               | ("UVM_CALL_HOOK"s 
                                  == __Vtask_uvm_string_to_action__279__actions.at(__Vtask_uvm_string_to_action__279__unnamedblk8__DOT__i))) 
                              | ("UVM_STOP"s == __Vtask_uvm_string_to_action__279__actions.at(__Vtask_uvm_string_to_action__279__unnamedblk8__DOT__i))) 
                             | ("UVM_RM_RECORD"s == __Vtask_uvm_string_to_action__279__actions.at(__Vtask_uvm_string_to_action__279__unnamedblk8__DOT__i)))) {
                            if ((1U & (~ ("UVM_NO_ACTION"s 
                                          == __Vtask_uvm_string_to_action__279__actions.at(__Vtask_uvm_string_to_action__279__unnamedblk8__DOT__i))))) {
                                __Vtask_uvm_string_to_action__279__action 
                                    = (("UVM_DISPLAY"s 
                                        == __Vtask_uvm_string_to_action__279__actions.at(__Vtask_uvm_string_to_action__279__unnamedblk8__DOT__i))
                                        ? (1U | __Vtask_uvm_string_to_action__279__action)
                                        : (("UVM_LOG"s 
                                            == __Vtask_uvm_string_to_action__279__actions.at(__Vtask_uvm_string_to_action__279__unnamedblk8__DOT__i))
                                            ? (2U | __Vtask_uvm_string_to_action__279__action)
                                            : (("UVM_COUNT"s 
                                                == __Vtask_uvm_string_to_action__279__actions.at(__Vtask_uvm_string_to_action__279__unnamedblk8__DOT__i))
                                                ? (4U 
                                                   | __Vtask_uvm_string_to_action__279__action)
                                                : (
                                                   ("UVM_EXIT"s 
                                                    == __Vtask_uvm_string_to_action__279__actions.at(__Vtask_uvm_string_to_action__279__unnamedblk8__DOT__i))
                                                    ? 
                                                   (8U 
                                                    | __Vtask_uvm_string_to_action__279__action)
                                                    : 
                                                   (("UVM_CALL_HOOK"s 
                                                     == __Vtask_uvm_string_to_action__279__actions.at(__Vtask_uvm_string_to_action__279__unnamedblk8__DOT__i))
                                                     ? 
                                                    (0x00000010U 
                                                     | __Vtask_uvm_string_to_action__279__action)
                                                     : 
                                                    (("UVM_STOP"s 
                                                      == __Vtask_uvm_string_to_action__279__actions.at(__Vtask_uvm_string_to_action__279__unnamedblk8__DOT__i))
                                                      ? 
                                                     (0x00000020U 
                                                      | __Vtask_uvm_string_to_action__279__action)
                                                      : 
                                                     (0x00000040U 
                                                      | __Vtask_uvm_string_to_action__279__action)))))));
                            }
                        }
                        __Vtask_uvm_string_to_action__279__unnamedblk8__DOT__i 
                            = ((IData)(1U) + __Vtask_uvm_string_to_action__279__unnamedblk8__DOT__i);
                    }
                    action = __Vtask_uvm_string_to_action__279__action;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_uvm_applied_cl_action.atWriteAppend(unnamedblk220__DOT__i)
                                           .__PVT__used 
                        = ((IData)(1U) + vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_uvm_applied_cl_action.at(unnamedblk220__DOT__i)
                           .__PVT__used);
                    if (("_ALL_"s == unnamedblk220__DOT__unnamedblk221__DOT__args.at(1U))) {
                        if (("_ALL_"s == unnamedblk220__DOT__unnamedblk221__DOT__args.at(2U))) {
                            this->__VnoInFunc_set_report_severity_action(vlProcess, vlSymsp, 0U, action);
                            this->__VnoInFunc_set_report_severity_action(vlProcess, vlSymsp, 1U, action);
                            this->__VnoInFunc_set_report_severity_action(vlProcess, vlSymsp, 2U, action);
                            this->__VnoInFunc_set_report_severity_action(vlProcess, vlSymsp, 3U, action);
                        } else {
                            this->__VnoInFunc_set_report_severity_action(vlProcess, vlSymsp, sev, action);
                        }
                    } else if (("_ALL_"s == unnamedblk220__DOT__unnamedblk221__DOT__args.at(2U))) {
                        this->__VnoInFunc_set_report_id_action(vlProcess, vlSymsp, 
                                                               VL_CVT_PACK_STR_NN(unnamedblk220__DOT__unnamedblk221__DOT__args.at(1U)), action);
                    } else {
                        this->__VnoInFunc_set_report_severity_id_action(vlProcess, vlSymsp, sev, 
                                                                        VL_CVT_PACK_STR_NN(unnamedblk220__DOT__unnamedblk221__DOT__args.at(1U)), action);
                    }
                    __Vlabel4: ;
                }
                unnamedblk220__DOT__i = ((IData)(1U) 
                                         + unnamedblk220__DOT__i);
            }
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_cl_sev(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_set_cl_sev\n"); );
            // Locals
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_cmdline_processor> __Vfunc_get_inst__288__Vfuncout;
            IData/*31:0*/ __Vtask_get_arg_values__289__Vfuncout;
            __Vtask_get_arg_values__289__Vfuncout = 0;
            std::string __Vtask_uvm_split_string__290__str;
            CData/*7:0*/ __Vtask_uvm_split_string__290__sep;
            __Vtask_uvm_split_string__290__sep = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__290__s;
            __Vtask_uvm_split_string__290__s = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__290__e;
            __Vtask_uvm_split_string__290__e = 0;
            IData/*31:0*/ __Vfunc_uvm_report_enabled__291__Vfuncout;
            __Vfunc_uvm_report_enabled__291__Vfuncout = 0;
            CData/*0:0*/ __Vfunc_uvm_string_to_severity__293__Vfuncout;
            __Vfunc_uvm_string_to_severity__293__Vfuncout = 0;
            std::string __Vfunc_uvm_string_to_severity__293__sev_str;
            CData/*1:0*/ __Vfunc_uvm_string_to_severity__293__sev;
            __Vfunc_uvm_string_to_severity__293__sev = 0;
            IData/*31:0*/ __Vfunc_uvm_report_enabled__294__Vfuncout;
            __Vfunc_uvm_report_enabled__294__Vfuncout = 0;
            CData/*0:0*/ __Vfunc_uvm_string_to_severity__296__Vfuncout;
            __Vfunc_uvm_string_to_severity__296__Vfuncout = 0;
            std::string __Vfunc_uvm_string_to_severity__296__sev_str;
            CData/*1:0*/ __Vfunc_uvm_string_to_severity__296__sev;
            __Vfunc_uvm_string_to_severity__296__sev = 0;
            IData/*31:0*/ __Vfunc_uvm_report_enabled__297__Vfuncout;
            __Vfunc_uvm_report_enabled__297__Vfuncout = 0;
            CData/*0:0*/ __Vfunc_uvm_is_match__299__Vfuncout;
            __Vfunc_uvm_is_match__299__Vfuncout = 0;
            std::string __Vfunc_uvm_is_match__299__expr;
            std::string __Vfunc_uvm_is_match__299__str;
            std::string __Vfunc_get_full_name__300__Vfuncout;
            std::string __Vfunc_uvm_glob_to_re__301__Vfuncout;
            std::string __Vfunc_uvm_glob_to_re__301__glob;
            IData/*31:0*/ __Vfunc_uvm_re_match__302__Vfuncout;
            __Vfunc_uvm_re_match__302__Vfuncout = 0;
            std::string __Vfunc_uvm_re_match__302__re;
            std::string __Vfunc_uvm_re_match__302__str;
            IData/*31:0*/ __Vfunc_uvm_re_match__302____Vincrement1;
            __Vfunc_uvm_re_match__302____Vincrement1 = 0;
            std::string __Vtask_uvm_string_to_severity__303__sev_str;
            CData/*1:0*/ __Vtask_uvm_string_to_severity__303__sev;
            __Vtask_uvm_string_to_severity__303__sev = 0;
            std::string __Vtask_uvm_string_to_severity__304__sev_str;
            CData/*1:0*/ __Vtask_uvm_string_to_severity__304__sev;
            __Vtask_uvm_string_to_severity__304__sev = 0;
            std::string __Vtemp_1;
            std::string __Vtemp_2;
            std::string __Vtemp_3;
            std::string __Vtemp_4;
            std::string __Vtemp_5;
            // Body
            VlQueue<std::string> unnamedblk222__DOT__values;
            IData/*31:0*/ unnamedblk222__DOT__unnamedblk223__DOT__idx;
            unnamedblk222__DOT__unnamedblk223__DOT__idx = 0;
            Vuart_example_uvm_cmdline_parsed_arg_t__struct__0 unnamedblk222__DOT__unnamedblk223__DOT__unnamedblk224__DOT__t;
            unnamedblk222__DOT__unnamedblk223__DOT__unnamedblk224__DOT__t.__PVT__used = 0;
            VlQueue<std::string> unnamedblk222__DOT__unnamedblk223__DOT__unnamedblk224__DOT__args;
            IData/*31:0*/ unnamedblk225__DOT__i;
            unnamedblk225__DOT__i = 0;
            VlQueue<std::string> unnamedblk225__DOT__unnamedblk226__DOT__args;
            CData/*1:0*/ orig_sev;
            orig_sev = 0;
            CData/*1:0*/ sev;
            sev = 0;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_cmdline_processor> uvm_cmdline_proc;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg.__VnoInFunc_get_inst(vlProcess, vlSymsp, __Vfunc_get_inst__288__Vfuncout);
            uvm_cmdline_proc = __Vfunc_get_inst__288__Vfuncout;
            if ((1U & (~ (IData)(vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_sev__Vstatic__initialized)))) {
                VL_NULL_CHECK(uvm_cmdline_proc, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 3234)
                                           ->__VnoInFunc_get_arg_values(vlSymsp, "+uvm_set_severity="s, unnamedblk222__DOT__values, __Vtask_get_arg_values__289__Vfuncout);
                unnamedblk222__DOT__unnamedblk223__DOT__idx = 0U;
                while (VL_LTS_III(32, unnamedblk222__DOT__unnamedblk223__DOT__idx, unnamedblk222__DOT__values.size())) {
                    {
                        __Vtask_uvm_split_string__290__sep = 0x2cU;
                        __Vtask_uvm_split_string__290__str 
                            = VL_CVT_PACK_STR_NN(unnamedblk222__DOT__values.at(unnamedblk222__DOT__unnamedblk223__DOT__idx));
                        __Vtask_uvm_split_string__290__s = 0;
                        __Vtask_uvm_split_string__290__s = 0U;
                        __Vtask_uvm_split_string__290__e = 0;
                        __Vtask_uvm_split_string__290__e = 0U;
                        unnamedblk222__DOT__unnamedblk223__DOT__unnamedblk224__DOT__args.clear();
                        while (VL_LTS_III(32, __Vtask_uvm_split_string__290__e, 
                                          VL_LEN_IN(__Vtask_uvm_split_string__290__str))) {
                            __Vtask_uvm_split_string__290__s 
                                = __Vtask_uvm_split_string__290__e;
                            {
                                while (VL_LTS_III(32, __Vtask_uvm_split_string__290__e, 
                                                  VL_LEN_IN(__Vtask_uvm_split_string__290__str))) {
                                    if ((VL_GETC_N(__Vtask_uvm_split_string__290__str,__Vtask_uvm_split_string__290__e) 
                                         == (IData)(__Vtask_uvm_split_string__290__sep))) {
                                        goto __Vlabel1;
                                    }
                                    __Vtask_uvm_split_string__290__e 
                                        = ((IData)(1U) 
                                           + __Vtask_uvm_split_string__290__e);
                                }
                                __Vlabel1: ;
                            }
                            if ((__Vtask_uvm_split_string__290__s 
                                 != __Vtask_uvm_split_string__290__e)) {
                                unnamedblk222__DOT__unnamedblk223__DOT__unnamedblk224__DOT__args.push_back(
                                                                                VL_SUBSTR_N(__Vtask_uvm_split_string__290__str,__Vtask_uvm_split_string__290__s,
                                                                                (__Vtask_uvm_split_string__290__e 
                                                                                - (IData)(1U))));
                            }
                            __Vtask_uvm_split_string__290__e 
                                = ((IData)(1U) + __Vtask_uvm_split_string__290__e);
                        }
                        if ((4U != unnamedblk222__DOT__unnamedblk223__DOT__unnamedblk224__DOT__args.size())) {
                            if ((0U != ([&]() {
                                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "INVLCMDARGS"s, __Vfunc_uvm_report_enabled__291__Vfuncout);
                                        }(), __Vfunc_uvm_report_enabled__291__Vfuncout))) {
                                __Vtemp_1 = unnamedblk222__DOT__values.at(unnamedblk222__DOT__unnamedblk223__DOT__idx);
                                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "INVLCMDARGS"s, VL_SFORMATF_N_NX("+uvm_set_severity requires 4 arguments, but %0d given for command +uvm_set_severity=%@, Usage: +uvm_set_severity=<comp>,<id>,<orig_severity>,<new_severity>",0,
                                                                                32,
                                                                                unnamedblk222__DOT__unnamedblk223__DOT__unnamedblk224__DOT__args.size(),
                                                                                -1,
                                                                                &(__Vtemp_1)) , 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh"s, 0x00000ca8U, ""s, 1U);
                            }
                            goto __Vlabel0;
                        }
                        if ((("_ALL_"s != unnamedblk222__DOT__unnamedblk223__DOT__unnamedblk224__DOT__args.at(2U)) 
                             & (~ ([&]() {
                                            __Vfunc_uvm_string_to_severity__293__sev_str 
                                                = VL_CVT_PACK_STR_NN(unnamedblk222__DOT__unnamedblk223__DOT__unnamedblk224__DOT__args.at(2U));
                                            {
                                                if (
                                                    ("UVM_INFO"s 
                                                     == __Vfunc_uvm_string_to_severity__293__sev_str)) {
                                                    __Vfunc_uvm_string_to_severity__293__sev = 0U;
                                                } else if (
                                                           ("UVM_WARNING"s 
                                                            == __Vfunc_uvm_string_to_severity__293__sev_str)) {
                                                    __Vfunc_uvm_string_to_severity__293__sev = 1U;
                                                } else if (
                                                           ("UVM_ERROR"s 
                                                            == __Vfunc_uvm_string_to_severity__293__sev_str)) {
                                                    __Vfunc_uvm_string_to_severity__293__sev = 2U;
                                                } else if (
                                                           ("UVM_FATAL"s 
                                                            == __Vfunc_uvm_string_to_severity__293__sev_str)) {
                                                    __Vfunc_uvm_string_to_severity__293__sev = 3U;
                                                } else {
                                                    __Vfunc_uvm_string_to_severity__293__Vfuncout = 0U;
                                                    goto __Vlabel2;
                                                }
                                                __Vfunc_uvm_string_to_severity__293__Vfuncout = 1U;
                                                __Vlabel2: ;
                                            }
                                            orig_sev 
                                                = __Vfunc_uvm_string_to_severity__293__sev;
                                        }(), (IData)(__Vfunc_uvm_string_to_severity__293__Vfuncout))))) {
                            if ((0U != ([&]() {
                                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "INVLCMDARGS"s, __Vfunc_uvm_report_enabled__294__Vfuncout);
                                        }(), __Vfunc_uvm_report_enabled__294__Vfuncout))) {
                                __Vtemp_2 = unnamedblk222__DOT__unnamedblk223__DOT__unnamedblk224__DOT__args.at(2U);
                                __Vtemp_3 = unnamedblk222__DOT__values.at(unnamedblk222__DOT__unnamedblk223__DOT__idx);
                                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "INVLCMDARGS"s, VL_SFORMATF_N_NX("Bad severity argument \"%@\" given to command +uvm_set_severity=%@, Usage: +uvm_set_severity=<comp>,<id>,<orig_severity>,<new_severity>",0,
                                                                                -1,
                                                                                &(__Vtemp_2),
                                                                                -1,
                                                                                &(__Vtemp_3)) , 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh"s, 0x00000cacU, ""s, 1U);
                            }
                            goto __Vlabel0;
                        }
                        if ((1U & (~ ([&]() {
                                            __Vfunc_uvm_string_to_severity__296__sev_str 
                                                = VL_CVT_PACK_STR_NN(unnamedblk222__DOT__unnamedblk223__DOT__unnamedblk224__DOT__args.at(3U));
                                            {
                                                if (
                                                    ("UVM_INFO"s 
                                                     == __Vfunc_uvm_string_to_severity__296__sev_str)) {
                                                    __Vfunc_uvm_string_to_severity__296__sev = 0U;
                                                } else if (
                                                           ("UVM_WARNING"s 
                                                            == __Vfunc_uvm_string_to_severity__296__sev_str)) {
                                                    __Vfunc_uvm_string_to_severity__296__sev = 1U;
                                                } else if (
                                                           ("UVM_ERROR"s 
                                                            == __Vfunc_uvm_string_to_severity__296__sev_str)) {
                                                    __Vfunc_uvm_string_to_severity__296__sev = 2U;
                                                } else if (
                                                           ("UVM_FATAL"s 
                                                            == __Vfunc_uvm_string_to_severity__296__sev_str)) {
                                                    __Vfunc_uvm_string_to_severity__296__sev = 3U;
                                                } else {
                                                    __Vfunc_uvm_string_to_severity__296__Vfuncout = 0U;
                                                    goto __Vlabel3;
                                                }
                                                __Vfunc_uvm_string_to_severity__296__Vfuncout = 1U;
                                                __Vlabel3: ;
                                            }
                                            sev = __Vfunc_uvm_string_to_severity__296__sev;
                                        }(), (IData)(__Vfunc_uvm_string_to_severity__296__Vfuncout))))) {
                            if ((0U != ([&]() {
                                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "INVLCMDARGS"s, __Vfunc_uvm_report_enabled__297__Vfuncout);
                                        }(), __Vfunc_uvm_report_enabled__297__Vfuncout))) {
                                __Vtemp_4 = unnamedblk222__DOT__unnamedblk223__DOT__unnamedblk224__DOT__args.at(3U);
                                __Vtemp_5 = unnamedblk222__DOT__values.at(unnamedblk222__DOT__unnamedblk223__DOT__idx);
                                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "INVLCMDARGS"s, VL_SFORMATF_N_NX("Bad severity argument \"%@\" given to command +uvm_set_severity=%@, Usage: +uvm_set_severity=<comp>,<id>,<orig_severity>,<new_severity>",0,
                                                                                -1,
                                                                                &(__Vtemp_4),
                                                                                -1,
                                                                                &(__Vtemp_5)) , 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh"s, 0x00000cb0U, ""s, 1U);
                            }
                            goto __Vlabel0;
                        }
                        unnamedblk222__DOT__unnamedblk223__DOT__unnamedblk224__DOT__t
                                           .__PVT__args 
                            = unnamedblk222__DOT__unnamedblk223__DOT__unnamedblk224__DOT__args;
                        unnamedblk222__DOT__unnamedblk223__DOT__unnamedblk224__DOT__t
                                           .__PVT__arg 
                            = unnamedblk222__DOT__values.at(unnamedblk222__DOT__unnamedblk223__DOT__idx);
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_uvm_applied_cl_sev.push_back(unnamedblk222__DOT__unnamedblk223__DOT__unnamedblk224__DOT__t);
                        __Vlabel0: ;
                    }
                    unnamedblk222__DOT__unnamedblk223__DOT__idx 
                        = ((IData)(1U) + unnamedblk222__DOT__unnamedblk223__DOT__idx);
                }
                vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_set_cl_sev__Vstatic__initialized = 1U;
            }
            unnamedblk225__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk225__DOT__i, vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_uvm_applied_cl_sev.size())) {
                {
                    unnamedblk225__DOT__unnamedblk226__DOT__args 
                        = vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_uvm_applied_cl_sev.at(unnamedblk225__DOT__i)
                        .__PVT__args;
                    if ((1U & (~ ([&]() {
                                        __Vfunc_uvm_is_match__299__str 
                                            = VL_CVT_PACK_STR_NN(
                                                                 ([&]() {
                                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__300__Vfuncout);
                                                }(), __Vfunc_get_full_name__300__Vfuncout));
                                        __Vfunc_uvm_is_match__299__expr 
                                            = VL_CVT_PACK_STR_NN(unnamedblk225__DOT__unnamedblk226__DOT__args.at(0U));
                                        __Vfunc_uvm_glob_to_re__301__glob 
                                            = __Vfunc_uvm_is_match__299__expr;
                                        __Vfunc_uvm_glob_to_re__301__Vfuncout 
                                            = __Vfunc_uvm_glob_to_re__301__glob;
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
                                            = __Vfunc_uvm_glob_to_re__301__Vfuncout;
                                        __Vfunc_uvm_is_match__299__Vfuncout 
                                            = (0U == 
                                               ([&]() {
                                                    __Vfunc_uvm_re_match__302__str 
                                                        = __Vfunc_uvm_is_match__299__str;
                                                    __Vfunc_uvm_re_match__302__re 
                                                        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s;
                                                    {
                                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                                                        if (
                                                            (0U 
                                                             == 
                                                             VL_LEN_IN(__Vfunc_uvm_re_match__302__re))) {
                                                            __Vfunc_uvm_re_match__302__Vfuncout = 0U;
                                                            goto __Vlabel5;
                                                        }
                                                        if (
                                                            (0x5eU 
                                                             == 
                                                             VL_GETC_N(__Vfunc_uvm_re_match__302__re,0U))) {
                                                            __Vfunc_uvm_re_match__302__re 
                                                                = 
                                                                VL_SUBSTR_N(__Vfunc_uvm_re_match__302__re,1U,
                                                                            (VL_LEN_IN(__Vfunc_uvm_re_match__302__re) 
                                                                             - (IData)(1U)));
                                                        }
                                                        while (
                                                               ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                                 != 
                                                                 VL_LEN_IN(__Vfunc_uvm_re_match__302__str)) 
                                                                & (0x2aU 
                                                                   != 
                                                                   VL_GETC_N(__Vfunc_uvm_re_match__302__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                                            if (
                                                                ((VL_GETC_N(__Vfunc_uvm_re_match__302__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                                                  != 
                                                                  VL_GETC_N(__Vfunc_uvm_re_match__302__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                                                 & (0x3fU 
                                                                    != 
                                                                    VL_GETC_N(__Vfunc_uvm_re_match__302__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                                                __Vfunc_uvm_re_match__302__Vfuncout = 1U;
                                                                goto __Vlabel5;
                                                            }
                                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                                        }
                                                        while (
                                                               (vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                                != 
                                                                VL_LEN_IN(__Vfunc_uvm_re_match__302__str))) {
                                                            if (
                                                                (0x2aU 
                                                                 == 
                                                                 VL_GETC_N(__Vfunc_uvm_re_match__302__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                                    = 
                                                                    ((IData)(1U) 
                                                                     + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                                                if (
                                                                    (vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                                     == 
                                                                     VL_LEN_IN(__Vfunc_uvm_re_match__302__re))) {
                                                                    __Vfunc_uvm_re_match__302__Vfuncout = 0U;
                                                                    goto __Vlabel5;
                                                                }
                                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                                                                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                                                    = 
                                                                    ((IData)(1U) 
                                                                     + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                                            } else if (
                                                                       ((VL_GETC_N(__Vfunc_uvm_re_match__302__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                                                         == 
                                                                         VL_GETC_N(__Vfunc_uvm_re_match__302__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                                                        | (0x3fU 
                                                                           == 
                                                                           VL_GETC_N(__Vfunc_uvm_re_match__302__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                                    = 
                                                                    ((IData)(1U) 
                                                                     + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                                    = 
                                                                    ((IData)(1U) 
                                                                     + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                                            } else {
                                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                                                                __Vfunc_uvm_re_match__302____Vincrement1 
                                                                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                                                    = 
                                                                    ((IData)(1U) 
                                                                     + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                                    = __Vfunc_uvm_re_match__302____Vincrement1;
                                                            }
                                                        }
                                                        while (
                                                               (VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                                                           VL_LEN_IN(__Vfunc_uvm_re_match__302__re)) 
                                                                & (0x2aU 
                                                                   == 
                                                                   VL_GETC_N(__Vfunc_uvm_re_match__302__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                                        }
                                                        __Vfunc_uvm_re_match__302__Vfuncout 
                                                            = 
                                                            ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                              == 
                                                              VL_LEN_IN(__Vfunc_uvm_re_match__302__re))
                                                              ? 0U
                                                              : 1U);
                                                        __Vlabel5: ;
                                                    }
                                                }(), __Vfunc_uvm_re_match__302__Vfuncout));
                                    }(), (IData)(__Vfunc_uvm_is_match__299__Vfuncout))))) {
                        goto __Vlabel4;
                    }
                    __Vtask_uvm_string_to_severity__303__sev_str 
                        = VL_CVT_PACK_STR_NN(unnamedblk225__DOT__unnamedblk226__DOT__args.at(2U));
                    if (("UVM_INFO"s == __Vtask_uvm_string_to_severity__303__sev_str)) {
                        __Vtask_uvm_string_to_severity__303__sev = 0U;
                    } else if (("UVM_WARNING"s == __Vtask_uvm_string_to_severity__303__sev_str)) {
                        __Vtask_uvm_string_to_severity__303__sev = 1U;
                    } else if (("UVM_ERROR"s == __Vtask_uvm_string_to_severity__303__sev_str)) {
                        __Vtask_uvm_string_to_severity__303__sev = 2U;
                    } else if (("UVM_FATAL"s == __Vtask_uvm_string_to_severity__303__sev_str)) {
                        __Vtask_uvm_string_to_severity__303__sev = 3U;
                    }
                    orig_sev = __Vtask_uvm_string_to_severity__303__sev;
                    __Vtask_uvm_string_to_severity__304__sev_str 
                        = VL_CVT_PACK_STR_NN(unnamedblk225__DOT__unnamedblk226__DOT__args.at(3U));
                    if (("UVM_INFO"s == __Vtask_uvm_string_to_severity__304__sev_str)) {
                        __Vtask_uvm_string_to_severity__304__sev = 0U;
                    } else if (("UVM_WARNING"s == __Vtask_uvm_string_to_severity__304__sev_str)) {
                        __Vtask_uvm_string_to_severity__304__sev = 1U;
                    } else if (("UVM_ERROR"s == __Vtask_uvm_string_to_severity__304__sev_str)) {
                        __Vtask_uvm_string_to_severity__304__sev = 2U;
                    } else if (("UVM_FATAL"s == __Vtask_uvm_string_to_severity__304__sev_str)) {
                        __Vtask_uvm_string_to_severity__304__sev = 3U;
                    }
                    sev = __Vtask_uvm_string_to_severity__304__sev;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_uvm_applied_cl_sev.atWriteAppend(unnamedblk225__DOT__i)
                                           .__PVT__used 
                        = ((IData)(1U) + vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_uvm_applied_cl_sev.at(unnamedblk225__DOT__i)
                           .__PVT__used);
                    if ((("_ALL_"s == unnamedblk225__DOT__unnamedblk226__DOT__args.at(1U)) 
                         & ("_ALL_"s == unnamedblk225__DOT__unnamedblk226__DOT__args.at(2U)))) {
                        this->__VnoInFunc_set_report_severity_override(vlProcess, vlSymsp, 0U, (IData)(sev));
                        this->__VnoInFunc_set_report_severity_override(vlProcess, vlSymsp, 1U, (IData)(sev));
                        this->__VnoInFunc_set_report_severity_override(vlProcess, vlSymsp, 2U, (IData)(sev));
                        this->__VnoInFunc_set_report_severity_override(vlProcess, vlSymsp, 3U, (IData)(sev));
                    } else if (("_ALL_"s == unnamedblk225__DOT__unnamedblk226__DOT__args.at(1U))) {
                        this->__VnoInFunc_set_report_severity_override(vlProcess, vlSymsp, orig_sev, (IData)(sev));
                    } else if (("_ALL_"s == unnamedblk225__DOT__unnamedblk226__DOT__args.at(2U))) {
                        this->__VnoInFunc_set_report_severity_id_override(vlProcess, vlSymsp, 0U, 
                                                                          VL_CVT_PACK_STR_NN(unnamedblk225__DOT__unnamedblk226__DOT__args.at(1U)), (IData)(sev));
                        this->__VnoInFunc_set_report_severity_id_override(vlProcess, vlSymsp, 1U, 
                                                                          VL_CVT_PACK_STR_NN(unnamedblk225__DOT__unnamedblk226__DOT__args.at(1U)), (IData)(sev));
                        this->__VnoInFunc_set_report_severity_id_override(vlProcess, vlSymsp, 2U, 
                                                                          VL_CVT_PACK_STR_NN(unnamedblk225__DOT__unnamedblk226__DOT__args.at(1U)), (IData)(sev));
                        this->__VnoInFunc_set_report_severity_id_override(vlProcess, vlSymsp, 3U, 
                                                                          VL_CVT_PACK_STR_NN(unnamedblk225__DOT__unnamedblk226__DOT__args.at(1U)), (IData)(sev));
                    } else {
                        this->__VnoInFunc_set_report_severity_id_override(vlProcess, vlSymsp, orig_sev, 
                                                                          VL_CVT_PACK_STR_NN(unnamedblk225__DOT__unnamedblk226__DOT__args.at(1U)), (IData)(sev));
                    }
                    __Vlabel4: ;
                }
                unnamedblk225__DOT__i = ((IData)(1U) 
                                         + unnamedblk225__DOT__i);
            }
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_apply_verbosity_settings(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_apply_verbosity_settings\n"); );
            // Locals
            std::string __Vtask_get_name__315__Vfuncout;
            VlClassRef<Vuart_example_std__03a__03aprocess> __Vfunc_self__318__Vfuncout;
            std::string __Vtask_get_randstate__319__Vfuncout;
            // Body
            VlClassRef<Vuart_example_std__03a__03aprocess> unnamedblk227__DOT__p;
            std::string unnamedblk227__DOT__p_rand;
            IData/*31:0*/ i;
            i = 0;
            while (VL_LTS_III(32, i, this->__PVT__m_verbosity_settings.size())) {
                {
                    if ((([&]() {
                                    VL_NULL_CHECK(phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 3295)
                          ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__315__Vfuncout);
                                }(), __Vtask_get_name__315__Vfuncout) 
                         == this->__PVT__m_verbosity_settings.at(i)
                         .__PVT__phase)) {
                        if ((0ULL == this->__PVT__m_verbosity_settings.at(i)
                             .__PVT__offset)) {
                            if (("_ALL_"s == this->__PVT__m_verbosity_settings.at(i)
                                 .__PVT__id)) {
                                this->__VnoInFunc_set_report_verbosity_level(vlProcess, vlSymsp, this->__PVT__m_verbosity_settings.at(i)
                                                                             .__PVT__verbosity);
                            } else {
                                this->__VnoInFunc_set_report_id_verbosity(vlProcess, vlSymsp, 
                                                                          VL_CVT_PACK_STR_NN(this->__PVT__m_verbosity_settings.at(i)
                                                                                .__PVT__id), this->__PVT__m_verbosity_settings.at(i)
                                                                          .__PVT__verbosity);
                            }
                        } else {
                            vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __Vfunc_self__318__Vfuncout);
                            unnamedblk227__DOT__p = __Vfunc_self__318__Vfuncout;
                            VL_NULL_CHECK(unnamedblk227__DOT__p, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 3304)
                                           ->__VnoInFunc_get_randstate(vlSymsp, __Vtask_get_randstate__319__Vfuncout);
                            unnamedblk227__DOT__p_rand 
                                = __Vtask_get_randstate__319__Vfuncout;
                            this->__VnoInFunc_m_apply_verbosity_settings____Vfork_2__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, i);
                            VL_NULL_CHECK(unnamedblk227__DOT__p, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 3313)
                                           ->__VnoInFunc_set_randstate(vlSymsp, unnamedblk227__DOT__p_rand);
                        }
                        this->__PVT__m_verbosity_settings.erase(i);
                        goto __Vlabel0;
                    }
                    i = ((IData)(1U) + i);
                    __Vlabel0: ;
                }
            }
        }

        VlCoroutine Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_apply_verbosity_settings____Vfork_2__0(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ i) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_apply_verbosity_settings____Vfork_2__0\n"); );
            // Locals
            IData/*31:0*/ __Vtask___VforkTask_1__320__i;
            __Vtask___VforkTask_1__320__i = 0;
            Vuart_example_m_verbosity_setting__struct__0 __Vtask___VforkTask_1__320__setting;
            __Vtask___VforkTask_1__320__setting.__PVT__offset = 0;
            __Vtask___VforkTask_1__320__setting.__PVT__verbosity = 0;
            // Body
            VL_KEEP_THIS;
            __Vtask___VforkTask_1__320__i = i;
            __Vtask___VforkTask_1__320__setting.__PVT__comp.clear();
            __Vtask___VforkTask_1__320__setting.__PVT__phase.clear();
            __Vtask___VforkTask_1__320__setting.__PVT__offset = 0;
            __Vtask___VforkTask_1__320__setting.__PVT__verbosity = 0;
            __Vtask___VforkTask_1__320__setting.__PVT__id.clear();
            __Vtask___VforkTask_1__320__setting = this->__PVT__m_verbosity_settings.at(__Vtask___VforkTask_1__320__i);
            co_await vlSymsp->TOP.__VdlySched.delay(
                                                    (0x00000000000003e8ULL 
                                                     * __Vtask___VforkTask_1__320__setting
                                                     .__PVT__offset), 
                                                    vlProcess, 
                                                    "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 
                                                    3307);
            if (("_ALL_"s == __Vtask___VforkTask_1__320__setting
                 .__PVT__id)) {
                this->__VnoInFunc_set_report_verbosity_level(vlProcess, vlSymsp, __Vtask___VforkTask_1__320__setting
                                                             .__PVT__verbosity);
            } else {
                this->__VnoInFunc_set_report_id_verbosity(vlProcess, vlSymsp, 
                                                          VL_CVT_PACK_STR_NN(__Vtask___VforkTask_1__320__setting
                                                                             .__PVT__id), __Vtask___VforkTask_1__320__setting
                                                          .__PVT__verbosity);
            }
            vlProcess->state(VlProcess::FINISHED);
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_do_pre_abort(Vuart_example__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_do_pre_abort\n"); );
            // Body
            std::string unnamedblk229__DOT__i;
            CData/*0:0*/ unnamedblk229__DOT__i__Vfirst;
            unnamedblk229__DOT__i__Vfirst = 0;
            if ((0U != this->__PVT__m_children.first(unnamedblk229__DOT__i))) {
                unnamedblk229__DOT__i__Vfirst = 1U;
                while (((IData)(unnamedblk229__DOT__i__Vfirst) 
                        || (0U != this->__PVT__m_children.next(unnamedblk229__DOT__i)))) {
                    unnamedblk229__DOT__i__Vfirst = 0U;
                    VL_NULL_CHECK(this->__PVT__m_children
                                  .at(unnamedblk229__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_component.svh", 3329)
                                           ->__VnoInFunc_m_do_pre_abort(vlSymsp);
                }
            }
            this->__VnoInFunc_pre_abort(vlSymsp);
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_randomize(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_randomize\n"); );
            // Locals
            IData/*31:0*/ __Vfunc___Vbasic_randomize__327__Vfuncout;
            __Vfunc___Vbasic_randomize__327__Vfuncout = 0;
            // Body
            Vuart_example_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
            this->__VnoInFunc___Vsetup_constraints(vlSymsp);
            randomize__Vfuncrtn = Vuart_example_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
            randomize__Vfuncrtn = (randomize__Vfuncrtn 
                                   & ([&]() {
                        this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__327__Vfuncout);
                    }(), __Vfunc___Vbasic_randomize__327__Vfuncout));
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc___Vbasic_randomize(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc___Vbasic_randomize\n"); );
            // Body
            __Vbasic_randomize__Vfuncrtn = 1U;
        }

        void Vuart_example_uvm_pkg__03a__03auvm_component::_ctor_var_reset(Vuart_example__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::_ctor_var_reset\n"); );
            // Body
            (void)vlSymsp;  // Prevent unused variable warning
            __PVT__print_enabled = 0;
            __PVT__m_build_done = 0;
            __PVT__m_phasing_active = 0;
            __PVT__recording_detail = 0;
            __PVT__m_verbosity_settings.atDefault().__PVT__offset = VL_SCOPED_RAND_RESET_Q(64, 11392884900788368740ULL, 1112267310700633147ull);
            __PVT__m_verbosity_settings.atDefault().__PVT__verbosity = 0;
        }

        std::string VL_TO_STRING(const VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component>& obj) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::VL_TO_STRING\n"); );
            // Body
            return (obj ? obj->to_string() : "null");
        }

        std::string Vuart_example_uvm_pkg__03a__03auvm_component::to_string() const {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::to_string\n"); );
            // Body
            return ("'{"s + to_string_middle() + "}");
        }

        std::string Vuart_example_uvm_pkg__03a__03auvm_component::to_string_middle() const {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_component::to_string_middle\n"); );
            // Body
            std::string out;
            out += "print_enabled:" + VL_TO_STRING(__PVT__print_enabled);
            out += ", tr_database:" + VL_TO_STRING(__PVT__tr_database);
            out += ", m_domain:" + VL_TO_STRING(__PVT__m_domain);
            out += ", m_phase_imps:" + VL_TO_STRING(__PVT__m_phase_imps);
            out += ", m_current_phase:" + VL_TO_STRING(__PVT__m_current_phase);
            out += ", m_phase_process:" + VL_TO_STRING(__PVT__m_phase_process);
            out += ", m_build_done:" + VL_TO_STRING(__PVT__m_build_done);
            out += ", m_phasing_active:" + VL_TO_STRING(__PVT__m_phasing_active);
            out += ", m_parent:" + VL_TO_STRING(__PVT__m_parent);
            out += ", m_children:" + VL_TO_STRING(__PVT__m_children);
            out += ", m_children_by_handle:" + VL_TO_STRING(__PVT__m_children_by_handle);
            out += ", m_streams:" + VL_TO_STRING(__PVT__m_streams);
            out += ", m_tr_h:" + VL_TO_STRING(__PVT__m_tr_h);
            out += ", m_name:" + VL_TO_STRING(__PVT__m_name);
            out += ", event_pool:" + VL_TO_STRING(__PVT__event_pool);
            out += ", recording_detail:" + VL_TO_STRING(__PVT__recording_detail);
            out += ", m_verbosity_settings:" + VL_TO_STRING(__PVT__m_verbosity_settings);
            out += ", m_unsupported_resource_base:" + VL_TO_STRING(__PVT__m_unsupported_resource_base);
            out += ", "+ Vuart_example_uvm_pkg__03a__03auvm_report_object::to_string_middle();
            return (out);
        }
