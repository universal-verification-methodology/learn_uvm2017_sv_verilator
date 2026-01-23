// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_simple_register_uvm.h for the primary calling header

#include "Vtest_simple_register_uvm__pch.h"

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_registry_common__pi214__Vclpkg::__VnoInFunc_type_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_registry_common__pi214__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_reg_mem_shared_access_seq"s;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_registry_common__pi214__Vclpkg::__VnoInFunc_get(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_registry_common__pi214> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_registry_common__pi214__Vclpkg::__VnoInFunc_get\n"); );
    // Body
    if ((VlNull{} == this->__PVT__get__Vstatic__m_inst)) {
        this->__PVT__get__Vstatic__m_inst = VL_NEW(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_registry_common__pi214, vlSymsp);
    }
    get__Vfuncrtn = this->__PVT__get__Vstatic__m_inst;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_registry_common__pi214__Vclpkg::__VnoInFunc_create(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component> parent, std::string contxt, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_registry_common__pi214__Vclpkg::__VnoInFunc_create\n"); );
    // Locals
    std::string __Vtask_get_full_name__1__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> __Vfunc_create_by_type__2__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_registry__pi191> __Vfunc_get__3__Vfuncout;
    std::string __Vfunc_base_type_name__4__Vfuncout;
    std::string __Vfunc_type_name__5__Vfuncout;
    std::string __Vtask_get_type_name__6__Vfuncout;
    std::string __Vtask_get_type_name__7__Vfuncout;
    // Body
    std::string unnamedblk1__DOT__msg;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> obj;
    if (((""s == contxt) & (VlNull{} != parent))) {
        VL_NULL_CHECK(parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_registry.svh", 561)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__1__Vfuncout);
        contxt = __Vtask_get_full_name__1__Vfuncout;
    }
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_object_creator__Vclpkg.__VnoInFunc_create_by_type(vlProcess, vlSymsp, 
                                                                                ([&]() {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi191__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__3__Vfuncout);
            }(), __Vfunc_get__3__Vfuncout), contxt, name, parent, __Vfunc_create_by_type__2__Vfuncout);
    obj = __Vfunc_create_by_type__2__Vfuncout;
    if ((! VL_CAST_DYNAMIC(obj, create__Vfuncrtn))) {
        unnamedblk1__DOT__msg = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                              VL_CONCATN_NNN(
                                                                             VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Factory did not return a "s, 
                                                                                ([&]() {
                                                            vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_object_creator__Vclpkg.__VnoInFunc_base_type_name(vlSymsp, __Vfunc_base_type_name__4__Vfuncout);
                                                        }(), __Vfunc_base_type_name__4__Vfuncout)), " of type '"s), 
                                                                                ([&]() {
                                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi191__Vclpkg.__VnoInFunc_type_name(vlSymsp, __Vfunc_type_name__5__Vfuncout);
                                                }(), __Vfunc_type_name__5__Vfuncout)), "'. A component of type '"s), 
                                                                                ((VlNull{} 
                                                                                == obj)
                                                                                 ? "null"s
                                                                                 : 
                                                                                ([&]() {
                                                VL_NULL_CHECK(obj, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_registry.svh", 566)
                                                                                ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__6__Vfuncout);
                                            }(), __Vtask_get_type_name__6__Vfuncout))), "' was returned instead. Name="s), name), " Parent="s), 
                                                                             ((VlNull{} 
                                                                               == parent)
                                                                               ? "null"s
                                                                               : 
                                                                              ([&]() {
                                VL_NULL_CHECK(parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_registry.svh", 568)
                                                                               ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__7__Vfuncout);
                            }(), __Vtask_get_type_name__7__Vfuncout))), " contxt="s), contxt);
        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "FCTTYP"s, unnamedblk1__DOT__msg, 0U, ""s, 0U, ""s, 0U);
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_registry_common__pi214__Vclpkg::__VnoInFunc_set_type_override(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_wrapper> override_type, CData/*0:0*/ replace) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_registry_common__pi214__Vclpkg::__VnoInFunc_set_type_override\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_factory> __Vfunc_get__9__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_registry__pi191> __Vfunc_get__11__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_factory> factory;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_factory__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__9__Vfuncout);
    factory = __Vfunc_get__9__Vfuncout;
    VL_NULL_CHECK(factory, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_registry.svh", 577)->__VnoInFunc_set_type_override_by_type(vlSymsp, 
                                                                                ([&]() {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi191__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__11__Vfuncout);
            }(), __Vfunc_get__11__Vfuncout), override_type, replace);
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_registry_common__pi214__Vclpkg::__VnoInFunc_set_inst_override(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_wrapper> override_type, std::string inst_path, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component> parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_registry_common__pi214__Vclpkg::__VnoInFunc_set_inst_override\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_factory> __Vfunc_get__12__Vfuncout;
    std::string __Vtask_get_full_name__13__Vfuncout;
    std::string __Vtask_get_full_name__14__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_registry__pi191> __Vfunc_get__16__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string full_inst_path;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_factory> factory;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_factory__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__12__Vfuncout);
    factory = __Vfunc_get__12__Vfuncout;
    if ((VlNull{} != parent)) {
        inst_path = ((""s == inst_path) ? ([&]() {
                    VL_NULL_CHECK(parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_registry.svh", 588)
                                           ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__13__Vfuncout);
                }(), __Vtask_get_full_name__13__Vfuncout)
                      : VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                      ([&]() {
                            VL_NULL_CHECK(parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_registry.svh", 590)
                                                       ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__14__Vfuncout);
                        }(), __Vtask_get_full_name__14__Vfuncout), "."s), inst_path));
    }
    VL_NULL_CHECK(factory, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_registry.svh", 592)->__VnoInFunc_set_inst_override_by_type(vlSymsp, 
                                                                                ([&]() {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi191__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__16__Vfuncout);
            }(), __Vfunc_get__16__Vfuncout), override_type, inst_path);
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_registry_common__pi214__Vclpkg::__VnoInFunc_set_type_alias(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string alias_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_registry_common__pi214__Vclpkg::__VnoInFunc_set_type_alias\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_get_core_state__17__Vfuncout;
    __Vfunc_get_core_state__17__Vfuncout = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_factory> __Vfunc_get__18__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_registry__pi191> __Vfunc_get__19__Vfuncout;
    CData/*0:0*/ __Vtask_is_type_registered__20__Vfuncout;
    __Vtask_is_type_registered__20__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_factory> unnamedblk2__DOT__factory;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_registry__pi191> unnamedblk2__DOT__rgtry;
    this->__PVT__m___05Ftype_aliases.push_back(alias_name);
    this->__PVT__m___05Ftype_aliases.sort();
    if ((0U != ([&]() {
                    __Vfunc_get_core_state__17__Vfuncout 
                        = vlSymsp->TOP__uvm_pkg.__PVT__m_uvm_core_state;
                }(), __Vfunc_get_core_state__17__Vfuncout))) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_factory__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__18__Vfuncout);
        unnamedblk2__DOT__factory = __Vfunc_get__18__Vfuncout;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi191__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__19__Vfuncout);
        unnamedblk2__DOT__rgtry = __Vfunc_get__19__Vfuncout;
        if (([&]() {
                    VL_NULL_CHECK(unnamedblk2__DOT__factory, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_registry.svh", 601)
             ->__VnoInFunc_is_type_registered(vlSymsp, unnamedblk2__DOT__rgtry, __Vtask_is_type_registered__20__Vfuncout);
                }(), (IData)(__Vtask_is_type_registered__20__Vfuncout))) {
            VL_NULL_CHECK(unnamedblk2__DOT__factory, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_registry.svh", 602)->__VnoInFunc_set_type_alias(vlProcess, vlSymsp, alias_name, unnamedblk2__DOT__rgtry);
        }
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_registry_common__pi214__Vclpkg::__VnoInFunc____05Fdeferred_init(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &___05Fdeferred_init__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_registry_common__pi214__Vclpkg::__VnoInFunc____05Fdeferred_init\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_registry__pi191> __Vfunc_get__22__Vfuncout;
    IData/*31:0*/ __Vfunc_get_core_state__23__Vfuncout;
    __Vfunc_get_core_state__23__Vfuncout = 0;
    // Body
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_registry__pi191> rgtry;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi191__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__22__Vfuncout);
    rgtry = __Vfunc_get__22__Vfuncout;
    if ((0U == ([&]() {
                    __Vfunc_get_core_state__23__Vfuncout 
                        = vlSymsp->TOP__uvm_pkg.__PVT__m_uvm_core_state;
                }(), __Vfunc_get_core_state__23__Vfuncout))) {
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_deferred_init.push_back(rgtry);
    } else {
        VL_NULL_CHECK(rgtry, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_registry.svh", 616)->__VnoInFunc_initialize(vlProcess, vlSymsp);
    }
    ___05Fdeferred_init__Vfuncrtn = 1U;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_registry_common__pi214::__VnoInFunc_get_type_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_registry_common__pi214::__VnoInFunc_get_type_name\n"); );
    // Locals
    std::string __Vfunc_type_name__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi214__Vclpkg.__VnoInFunc_type_name(vlSymsp, __Vfunc_type_name__0__Vfuncout);
    get_type_name__Vfuncrtn = __Vfunc_type_name__0__Vfuncout;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_registry_common__pi214::__VnoInFunc_initialize(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_registry_common__pi214::__VnoInFunc_initialize\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_factory> __Vfunc_get__1__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_registry__pi191> __Vfunc_get__2__Vfuncout;
    // Body
    IData/*31:0*/ unnamedblk3__DOT__i;
    unnamedblk3__DOT__i = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_factory> factory;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_factory__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__1__Vfuncout);
    factory = __Vfunc_get__1__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_registry__pi191> rgtry;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi191__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__2__Vfuncout);
    rgtry = __Vfunc_get__2__Vfuncout;
    VL_NULL_CHECK(factory, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_registry.svh", 625)->__VnoInFunc_register(vlProcess, vlSymsp, rgtry);
    unnamedblk3__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk3__DOT__i, vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi214__Vclpkg.__PVT__m___05Ftype_aliases.size())) {
        VL_NULL_CHECK(factory, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_registry.svh", 629)->__VnoInFunc_set_type_alias(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi214__Vclpkg.__PVT__m___05Ftype_aliases.at(unnamedblk3__DOT__i)), rgtry);
        unnamedblk3__DOT__i = ((IData)(1U) + unnamedblk3__DOT__i);
    }
}

Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_registry_common__pi214::Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_registry_common__pi214(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_registry_common__pi214::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_registry_common__pi214::_ctor_var_reset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_registry_common__pi214::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_registry_common__pi214>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_registry_common__pi214::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_registry_common__pi214::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_registry_common__pi214::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_registry_common__pi214::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_registry_common__pi214::to_string_middle\n"); );
    // Body
    std::string out;
    return (out);
}
