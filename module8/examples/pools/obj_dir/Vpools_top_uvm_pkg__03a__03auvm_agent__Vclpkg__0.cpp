// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpools_top.h for the primary calling header

#include "Vpools_top__pch.h"

void Vpools_top_uvm_pkg__03a__03auvm_agent__Vclpkg::__VnoInFunc_get_type(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_abstract_component_registry__pi143> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vpools_top_uvm_pkg__03a__03auvm_agent__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_abstract_component_registry__pi143> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_abstract_component_registry__pi143__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vpools_top_uvm_pkg__03a__03auvm_agent__Vclpkg::__VnoInFunc_type_name(Vpools_top__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vpools_top_uvm_pkg__03a__03auvm_agent__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_agent"s;
}

void Vpools_top_uvm_pkg__03a__03auvm_agent::__VnoInFunc_get_object_type(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_agent::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_abstract_component_registry__pi143> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_abstract_component_registry__pi143__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vpools_top_uvm_pkg__03a__03auvm_agent::__VnoInFunc_get_type_name(Vpools_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_agent::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_agent"s;
}

Vpools_top_uvm_pkg__03a__03auvm_agent::Vpools_top_uvm_pkg__03a__03auvm_agent(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_component> parent)
    : Vpools_top_uvm_pkg__03a__03auvm_component(vlProcess, vlSymsp, name, parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_agent::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__is_active = 1U;
    ;
}

void Vpools_top_uvm_pkg__03a__03auvm_agent::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_agent::__VnoInFunc_build_phase\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource_pool> __Vfunc_get__3__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_queue__Tz19> __Vtask_lookup_name__4__Vfuncout;
    std::string __Vfunc_get_full_name__5__Vfuncout;
    IData/*31:0*/ __Vtask_size__7__Vfuncout;
    __Vtask_size__7__Vfuncout = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource_base> __Vtask_get__8__Vfuncout;
    CData/*0:0*/ __Vtask_read__9__Vfuncout;
    __Vtask_read__9__Vfuncout = 0;
    std::string __Vtask_read__10__Vfuncout;
    CData/*0:0*/ __Vfunc_from_name__11__Vfuncout;
    __Vfunc_from_name__11__Vfuncout = 0;
    CData/*0:0*/ __Vtask_read__12__Vfuncout;
    __Vtask_read__12__Vfuncout = 0;
    QData/*63:0*/ __Vtask_read__13__Vfuncout;
    __Vtask_read__13__Vfuncout = 0;
    VlWide<128>/*4095:0*/ __Vtask_read__14__Vfuncout;
    VL_ZERO_W(4096, __Vtask_read__14__Vfuncout);
    IData/*31:0*/ __Vtask_read__15__Vfuncout;
    __Vtask_read__15__Vfuncout = 0;
    IData/*31:0*/ __Vtask_read__16__Vfuncout;
    __Vtask_read__16__Vfuncout = 0;
    // Body
    IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource_base> unnamedblk1__DOT__unnamedblk2__DOT__rsrc;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource__Tz268> unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT_____05Ftmp_rsrc___05F;
    CData/*0:0*/ unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT_____05Ftmp_val___05F;
    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT_____05Ftmp_val___05F = 0;
    std::string unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT_____05Ftmp_string_val___05F;
    CData/*0:0*/ unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT_____05Ftmp_success_val___05F;
    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT_____05Ftmp_success_val___05F = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource__Tz49> unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT__unnamedblk5__DOT_____05Ftmp_rsrc___05F;
    CData/*0:0*/ unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_int_val___05F;
    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_int_val___05F = 0;
    CData/*0:0*/ unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F;
    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource__Tz269> unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT__unnamedblk7__DOT_____05Ftmp_rsrc___05F;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource__Tz20> unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT__unnamedblk8__DOT_____05Ftmp_rsrc___05F;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource__Tz18> unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT__unnamedblk9__DOT_____05Ftmp_rsrc___05F;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource_> unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT__unnamedblk10__DOT_____05Ftmp_rsrc___05F;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource__Tz21> unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT__unnamedblk11__DOT_____05Ftmp_rsrc___05F;
    IData/*31:0*/ active;
    active = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource_pool> rp;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_queue__Tz19> rq;
    CData/*0:0*/ found;
    found = 0;
    Vpools_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__3__Vfuncout);
    rp = __Vfunc_get__3__Vfuncout;
    VL_NULL_CHECK(rp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/comps/uvm_agent.svh", 75)->__VnoInFunc_lookup_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__5__Vfuncout);
                }(), __Vfunc_get_full_name__5__Vfuncout)), "is_active"s, VlNull{}, 0U, __Vtask_lookup_name__4__Vfuncout);
    rq = __Vtask_lookup_name__4__Vfuncout;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_sort_by_precedence(vlProcess, vlSymsp, rq);
    unnamedblk1__DOT__i = 0U;
    while ((VL_LTS_III(32, unnamedblk1__DOT__i, ([&]() {
                        VL_NULL_CHECK(rq, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/comps/uvm_agent.svh", 77)
                                                 ->__VnoInFunc_size(vlSymsp, __Vtask_size__7__Vfuncout);
                    }(), __Vtask_size__7__Vfuncout)) 
            && (1U & (~ (IData)(found))))) {
        VL_NULL_CHECK(rq, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/comps/uvm_agent.svh", 78)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk1__DOT__i, __Vtask_get__8__Vfuncout);
        unnamedblk1__DOT__unnamedblk2__DOT__rsrc = __Vtask_get__8__Vfuncout;
        found = (1U & VL_CAST_DYNAMIC(unnamedblk1__DOT__unnamedblk2__DOT__rsrc, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT_____05Ftmp_rsrc___05F));
        if (found) {
            VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT_____05Ftmp_rsrc___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_agent>{this}, __Vtask_read__9__Vfuncout);
            this->__PVT__is_active = __Vtask_read__9__Vfuncout;
        }
        if ((1U & (~ (IData)(found)))) {
            unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT_____05Ftmp_success_val___05F 
                = (1U & VL_CAST_DYNAMIC(unnamedblk1__DOT__unnamedblk2__DOT__rsrc, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT__unnamedblk5__DOT_____05Ftmp_rsrc___05F));
            if (unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT_____05Ftmp_success_val___05F) {
                VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT__unnamedblk5__DOT_____05Ftmp_rsrc___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_agent>{this}, __Vtask_read__10__Vfuncout);
                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT_____05Ftmp_string_val___05F 
                    = __Vtask_read__10__Vfuncout;
            }
            if (((IData)(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT_____05Ftmp_success_val___05F) 
                 && ([&]() {
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_enum_wrapper___Vclpkg.__VnoInFunc_from_name(vlSymsp, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT_____05Ftmp_string_val___05F, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT_____05Ftmp_val___05F, __Vfunc_from_name__11__Vfuncout);
                        }(), (IData)(__Vfunc_from_name__11__Vfuncout)))) {
                this->__PVT__is_active = unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT_____05Ftmp_val___05F;
                found = unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT_____05Ftmp_success_val___05F;
            }
        }
        if ((1U & (~ (IData)(found)))) {
            unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F 
                = (1U & VL_CAST_DYNAMIC(unnamedblk1__DOT__unnamedblk2__DOT__rsrc, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT__unnamedblk7__DOT_____05Ftmp_rsrc___05F));
            if (unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F) {
                VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT__unnamedblk7__DOT_____05Ftmp_rsrc___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_agent>{this}, __Vtask_read__12__Vfuncout);
                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_int_val___05F 
                    = __Vtask_read__12__Vfuncout;
            }
            if ((1U & (~ (IData)(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F)))) {
                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F 
                    = (1U & VL_CAST_DYNAMIC(unnamedblk1__DOT__unnamedblk2__DOT__rsrc, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT__unnamedblk8__DOT_____05Ftmp_rsrc___05F));
                if (unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F) {
                    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_int_val___05F 
                        = (1U & (IData)(([&]() {
                                    VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT__unnamedblk8__DOT_____05Ftmp_rsrc___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83)
                                         ->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                            VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_agent>{this}, __Vtask_read__13__Vfuncout);
                                }(), __Vtask_read__13__Vfuncout)));
                }
                if ((1U & (~ (IData)(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F)))) {
                    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F 
                        = (1U & VL_CAST_DYNAMIC(unnamedblk1__DOT__unnamedblk2__DOT__rsrc, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT__unnamedblk9__DOT_____05Ftmp_rsrc___05F));
                    if (unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F) {
                        unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_int_val___05F 
                            = (1U & VL_BITSEL_IWII(4096, 
                                                   ([&]() {
                                        VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT__unnamedblk9__DOT_____05Ftmp_rsrc___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83)
                                                    ->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                       VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_agent>{this}, __Vtask_read__14__Vfuncout);
                                    }(), __Vtask_read__14__Vfuncout), 0U));
                    }
                }
                if ((1U & (~ (IData)(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F)))) {
                    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F 
                        = (1U & VL_CAST_DYNAMIC(unnamedblk1__DOT__unnamedblk2__DOT__rsrc, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT__unnamedblk10__DOT_____05Ftmp_rsrc___05F));
                    if (unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F) {
                        unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_int_val___05F 
                            = (1U & ([&]() {
                                    VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT__unnamedblk10__DOT_____05Ftmp_rsrc___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83)
                                     ->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                        VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_agent>{this}, __Vtask_read__15__Vfuncout);
                                }(), __Vtask_read__15__Vfuncout));
                    }
                }
                if ((1U & (~ (IData)(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F)))) {
                    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F 
                        = (1U & VL_CAST_DYNAMIC(unnamedblk1__DOT__unnamedblk2__DOT__rsrc, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT__unnamedblk11__DOT_____05Ftmp_rsrc___05F));
                    if (unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F) {
                        unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_int_val___05F 
                            = (1U & ([&]() {
                                    VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT__unnamedblk11__DOT_____05Ftmp_rsrc___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/comps/uvm_agent.svh", 83)
                                     ->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                        VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_agent>{this}, __Vtask_read__16__Vfuncout);
                                }(), __Vtask_read__16__Vfuncout));
                    }
                }
            }
            if (unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F) {
                this->__PVT__is_active = unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_int_val___05F;
                found = unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk6__DOT_____05Ftmp_success_val___05F;
            }
        }
        unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_agent::__VnoInFunc_get_is_active(Vpools_top__Syms* __restrict vlSymsp, CData/*0:0*/ &get_is_active__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_agent::__VnoInFunc_get_is_active\n"); );
    // Body
    get_is_active__Vfuncrtn = this->__PVT__is_active;
}

void Vpools_top_uvm_pkg__03a__03auvm_agent::__VnoInFunc_randomize(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_agent::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__18__Vfuncout;
    __Vfunc___Vbasic_randomize__18__Vfuncout = 0;
    // Body
    Vpools_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vpools_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__18__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__18__Vfuncout));
}

void Vpools_top_uvm_pkg__03a__03auvm_agent::__VnoInFunc___Vbasic_randomize(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_agent::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vpools_top_uvm_pkg__03a__03auvm_agent::_ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_agent::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__is_active = 0;
}

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_agent>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_agent::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vpools_top_uvm_pkg__03a__03auvm_agent::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_agent::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vpools_top_uvm_pkg__03a__03auvm_agent::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_agent::to_string_middle\n"); );
    // Body
    std::string out;
    out += "is_active:" + VL_TO_STRING(__PVT__is_active);
    out += ", "+ Vpools_top_uvm_pkg__03a__03auvm_component::to_string_middle();
    return (out);
}
