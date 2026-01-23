// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclass_hierarchy.h for the primary calling header

#include "Vclass_hierarchy__pch.h"

void Vclass_hierarchy_uvm_pkg__03a__03auvm_object__Vclpkg::__VnoInFunc_get_uvm_seeding(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*0:0*/ &get_uvm_seeding__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vclass_hierarchy_uvm_pkg__03a__03auvm_object__Vclpkg::__VnoInFunc_get_uvm_seeding\n"); );
    // Locals
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__0__Vfuncout;
    CData/*0:0*/ __Vtask_get_uvm_seeding__1__Vfuncout;
    __Vtask_get_uvm_seeding__1__Vfuncout = 0;
    // Body
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> cs;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__0__Vfuncout);
    cs = __Vfunc_get__0__Vfuncout;
    VL_NULL_CHECK(cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_object.svh", 864)->__VnoInFunc_get_uvm_seeding(vlSymsp, __Vtask_get_uvm_seeding__1__Vfuncout);
    get_uvm_seeding__Vfuncrtn = __Vtask_get_uvm_seeding__1__Vfuncout;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_object__Vclpkg::__VnoInFunc_set_uvm_seeding(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*0:0*/ enable) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vclass_hierarchy_uvm_pkg__03a__03auvm_object__Vclpkg::__VnoInFunc_set_uvm_seeding\n"); );
    // Locals
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__2__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> cs;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__2__Vfuncout);
    cs = __Vfunc_get__2__Vfuncout;
    VL_NULL_CHECK(cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_object.svh", 872)->__VnoInFunc_set_uvm_seeding(vlSymsp, enable);
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_object__Vclpkg::__VnoInFunc_get_type(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vclass_hierarchy_uvm_pkg__03a__03auvm_object__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    std::string __Vtask_uvm_report_error__4__id;
    std::string __Vtask_uvm_report_error__4__message;
    IData/*31:0*/ __Vtask_uvm_report_error__4__verbosity;
    __Vtask_uvm_report_error__4__verbosity = 0;
    std::string __Vtask_uvm_report_error__4__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__4__line;
    __Vtask_uvm_report_error__4__line = 0;
    std::string __Vtask_uvm_report_error__4__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__4__report_enabled_checked;
    __Vtask_uvm_report_error__4__report_enabled_checked = 0;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__5__Vfuncout;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__6__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    __Vtask_uvm_report_error__4__report_enabled_checked = 0U;
    __Vtask_uvm_report_error__4__context_name = ""s;
    __Vtask_uvm_report_error__4__line = 0U;
    __Vtask_uvm_report_error__4__filename = ""s;
    __Vtask_uvm_report_error__4__verbosity = 0U;
    __Vtask_uvm_report_error__4__message = "get_type not implemented in derived class."s;
    __Vtask_uvm_report_error__4__id = "NOTYPID"s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__5__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__5__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__6__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__6__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__4__id, __Vtask_uvm_report_error__4__message, __Vtask_uvm_report_error__4__verbosity, __Vtask_uvm_report_error__4__filename, __Vtask_uvm_report_error__4__line, __Vtask_uvm_report_error__4__context_name, (IData)(__Vtask_uvm_report_error__4__report_enabled_checked));
    get_type__Vfuncrtn = VlNull{};
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_object__Vclpkg::__VnoInFunc_get_inst_count(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &get_inst_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vclass_hierarchy_uvm_pkg__03a__03auvm_object__Vclpkg::__VnoInFunc_get_inst_count\n"); );
    // Body
    get_inst_count__Vfuncrtn = this->__PVT__m_inst_count;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_get_type_name(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "<unknown>"s;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_create(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_create\n"); );
    // Body
    create__Vfuncrtn = VlNull{};
}

Vclass_hierarchy_uvm_pkg__03a__03auvm_object::Vclass_hierarchy_uvm_pkg__03a__03auvm_object(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name)
    : Vclass_hierarchy_uvm_pkg__03a__03auvm_void(vlProcess, vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_object::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    IData/*31:0*/ __Vincrement1;
    __Vincrement1 = 0;
    ;
    __Vincrement1 = vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT__m_inst_count;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT__m_inst_count 
        = ((IData)(1U) + vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT__m_inst_count);
    this->__PVT__m_inst_id = __Vincrement1;
    this->__PVT__m_leaf_name = name;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_reseed(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_reseed\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_get_uvm_seeding__1__Vfuncout;
    __Vfunc_get_uvm_seeding__1__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_create_random_seed__3__Vfuncout;
    __Vfunc_uvm_create_random_seed__3__Vfuncout = 0;
    std::string __Vfunc_uvm_create_random_seed__3__type_id;
    std::string __Vfunc_uvm_create_random_seed__3__inst_id;
    std::string __Vfunc_get_full_name__4__Vfuncout;
    std::string __Vfunc_get_type_name__5__Vfuncout;
    std::string __Vfunc_uvm_instance_scope__7__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_instance_scope__7____Vincrement2;
    __Vfunc_uvm_instance_scope__7____Vincrement2 = 0;
    std::string __Vtask_uvm_report_error__8__id;
    std::string __Vtask_uvm_report_error__8__message;
    IData/*31:0*/ __Vtask_uvm_report_error__8__verbosity;
    __Vtask_uvm_report_error__8__verbosity = 0;
    std::string __Vtask_uvm_report_error__8__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__8__line;
    __Vtask_uvm_report_error__8__line = 0;
    std::string __Vtask_uvm_report_error__8__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__8__report_enabled_checked;
    __Vtask_uvm_report_error__8__report_enabled_checked = 0;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__9__Vfuncout;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__10__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_oneway_hash__12__Vfuncout;
    __Vfunc_uvm_oneway_hash__12__Vfuncout = 0;
    std::string __Vfunc_uvm_oneway_hash__12__string_in;
    IData/*31:0*/ __Vfunc_uvm_oneway_hash__12__seed;
    __Vfunc_uvm_oneway_hash__12__seed = 0;
    IData/*31:0*/ __Vfunc_uvm_oneway_hash__12__unnamedblk1__DOT___byte;
    __Vfunc_uvm_oneway_hash__12__unnamedblk1__DOT___byte = 0;
    IData/*31:0*/ __Vfunc_uvm_oneway_hash__12__unnamedblk1__DOT__unnamedblk2__DOT___bit;
    __Vfunc_uvm_oneway_hash__12__unnamedblk1__DOT__unnamedblk2__DOT___bit = 0;
    IData/*31:0*/ __Vtemp_1;
    IData/*31:0*/ __Vtemp_2;
    // Body
    if (([&]() {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__VnoInFunc_get_uvm_seeding(vlProcess, vlSymsp, __Vfunc_get_uvm_seeding__1__Vfuncout);
            }(), (IData)(__Vfunc_get_uvm_seeding__1__Vfuncout))) {
        this->__VnoInFunc_srandom(vlSymsp, ([&]() {
                    __Vfunc_uvm_create_random_seed__3__inst_id 
                        = VL_CVT_PACK_STR_NN(([&]() {
                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__4__Vfuncout);
                            }(), __Vfunc_get_full_name__4__Vfuncout));
                    __Vfunc_uvm_create_random_seed__3__type_id 
                        = VL_CVT_PACK_STR_NN(([&]() {
                                this->__VnoInFunc_get_type_name(vlSymsp, __Vfunc_get_type_name__5__Vfuncout);
                            }(), __Vfunc_get_type_name__5__Vfuncout));
                    if ((""s == __Vfunc_uvm_create_random_seed__3__inst_id)) {
                        __Vfunc_uvm_create_random_seed__3__inst_id = "__global__"s;
                    }
                    if ((! vlSymsp->TOP__uvm_pkg.__PVT__uvm_random_seed_table_lookup.exists(__Vfunc_uvm_create_random_seed__3__inst_id))) {
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_random_seed_table_lookup
                                            .at(__Vfunc_uvm_create_random_seed__3__inst_id) 
                            = VL_NEW(Vclass_hierarchy_uvm_pkg__03a__03auvm_seed_map, vlSymsp);
                    }
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map 
                        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_random_seed_table_lookup
                        .at(__Vfunc_uvm_create_random_seed__3__inst_id);
                    __Vfunc_uvm_create_random_seed__3__type_id 
                        = VL_CONCATN_NNN(([&]() {
                                {
                                    if ((""s != __Vfunc_uvm_instance_scope__7__Vfuncout)) {
                                        goto __Vlabel0;
                                    }
                                    VL_SFORMAT_NX(64
                                                  ,__Vfunc_uvm_instance_scope__7__Vfuncout
                                                  ,"%Nuvm_pkg.uvm_instance_scope",0,
                                                  vlSymsp->name());
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos 
                                        = (VL_LEN_IN(__Vfunc_uvm_instance_scope__7__Vfuncout) 
                                           - (IData)(1U));
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__c 
                                        = VL_GETC_N(__Vfunc_uvm_instance_scope__7__Vfuncout,vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos);
                                    while ((((0U != vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos) 
                                             & (0x2eU 
                                                != (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__c))) 
                                            & (0x3aU 
                                               != (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__c)))) {
                                        __Vfunc_uvm_instance_scope__7____Vincrement2 
                                            = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos 
                                               - (IData)(1U));
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos 
                                            = __Vfunc_uvm_instance_scope__7____Vincrement2;
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__c 
                                            = VL_GETC_N(__Vfunc_uvm_instance_scope__7__Vfuncout,__Vfunc_uvm_instance_scope__7____Vincrement2);
                                    }
                                    if ((0U == vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos)) {
                                        __Vtask_uvm_report_error__8__report_enabled_checked = 0U;
                                        __Vtask_uvm_report_error__8__context_name = ""s;
                                        __Vtask_uvm_report_error__8__line = 0U;
                                        __Vtask_uvm_report_error__8__filename = ""s;
                                        __Vtask_uvm_report_error__8__verbosity = 0U;
                                        __Vtask_uvm_report_error__8__message 
                                            = VL_SFORMATF_N_NX("Illegal name %@ in scope string",0,
                                                               -1,
                                                               &(__Vfunc_uvm_instance_scope__7__Vfuncout)) ;
                                        __Vtask_uvm_report_error__8__id = "SCPSTR"s;
                                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__9__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                            = __Vfunc_get__9__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                                          ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__10__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                            = __Vtask_get_root__10__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                                          ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__8__id, __Vtask_uvm_report_error__8__message, __Vtask_uvm_report_error__8__verbosity, __Vtask_uvm_report_error__8__filename, __Vtask_uvm_report_error__8__line, __Vtask_uvm_report_error__8__context_name, (IData)(__Vtask_uvm_report_error__8__report_enabled_checked));
                                    }
                                    __Vfunc_uvm_instance_scope__7__Vfuncout 
                                        = VL_SUBSTR_N(__Vfunc_uvm_instance_scope__7__Vfuncout,0U,vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos);
                                    __Vlabel0: ;
                                }
                            }(), __Vfunc_uvm_instance_scope__7__Vfuncout), __Vfunc_uvm_create_random_seed__3__type_id);
                    if ((! VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_misc.svh", 175)
                         ->__PVT__seed_table.exists(__Vfunc_uvm_create_random_seed__3__type_id))) {
                        __Vfunc_uvm_oneway_hash__12__seed 
                            = vlSymsp->TOP__uvm_pkg.__PVT__uvm_global_random_seed;
                        __Vfunc_uvm_oneway_hash__12__string_in 
                            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                                VL_CONCATN_NNN(__Vfunc_uvm_create_random_seed__3__type_id, "::"s), __Vfunc_uvm_create_random_seed__3__inst_id));
                        __Vfunc_uvm_oneway_hash__12__unnamedblk1__DOT___byte = 0;
                        __Vfunc_uvm_oneway_hash__12__unnamedblk1__DOT__unnamedblk2__DOT___bit = 0;
                        if ((1U & (~ (0U != __Vfunc_uvm_oneway_hash__12__seed)))) {
                            __Vfunc_uvm_oneway_hash__12__seed 
                                = vlSymsp->TOP__uvm_pkg.__PVT__uvm_global_random_seed;
                        }
                        __Vfunc_uvm_oneway_hash__12__Vfuncout 
                            = __Vfunc_uvm_oneway_hash__12__seed;
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 = 0xffffffffU;
                        __Vfunc_uvm_oneway_hash__12__unnamedblk1__DOT___byte = 0U;
                        {
                            while (VL_LTS_III(32, __Vfunc_uvm_oneway_hash__12__unnamedblk1__DOT___byte, 
                                              VL_LEN_IN(__Vfunc_uvm_oneway_hash__12__string_in))) {
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte 
                                    = VL_GETC_N(__Vfunc_uvm_oneway_hash__12__string_in,__Vfunc_uvm_oneway_hash__12__unnamedblk1__DOT___byte);
                                if ((0U == (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte))) {
                                    goto __Vlabel1;
                                }
                                __Vfunc_uvm_oneway_hash__12__unnamedblk1__DOT__unnamedblk2__DOT___bit = 0U;
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                       >> 0x1fU);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                    = VL_SHIFTL_III(32,32,32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1, 1U);
                                if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                                           ^ (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte)))) {
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                        = (0x04c11db6U 
                                           ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                                }
                                __Vfunc_uvm_oneway_hash__12__unnamedblk1__DOT__unnamedblk2__DOT___bit = 1U;
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                       >> 0x1fU);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                    = VL_SHIFTL_III(32,32,32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1, 1U);
                                if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                                           ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                                              >> 1U)))) {
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                        = (0x04c11db6U 
                                           ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                                }
                                __Vfunc_uvm_oneway_hash__12__unnamedblk1__DOT__unnamedblk2__DOT___bit = 2U;
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                       >> 0x1fU);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                    = VL_SHIFTL_III(32,32,32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1, 1U);
                                if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                                           ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                                              >> 2U)))) {
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                        = (0x04c11db6U 
                                           ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                                }
                                __Vfunc_uvm_oneway_hash__12__unnamedblk1__DOT__unnamedblk2__DOT___bit = 3U;
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                       >> 0x1fU);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                    = VL_SHIFTL_III(32,32,32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1, 1U);
                                if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                                           ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                                              >> 3U)))) {
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                        = (0x04c11db6U 
                                           ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                                }
                                __Vfunc_uvm_oneway_hash__12__unnamedblk1__DOT__unnamedblk2__DOT___bit = 4U;
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                       >> 0x1fU);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                    = VL_SHIFTL_III(32,32,32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1, 1U);
                                if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                                           ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                                              >> 4U)))) {
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                        = (0x04c11db6U 
                                           ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                                }
                                __Vfunc_uvm_oneway_hash__12__unnamedblk1__DOT__unnamedblk2__DOT___bit = 5U;
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                       >> 0x1fU);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                    = VL_SHIFTL_III(32,32,32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1, 1U);
                                if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                                           ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                                              >> 5U)))) {
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                        = (0x04c11db6U 
                                           ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                                }
                                __Vfunc_uvm_oneway_hash__12__unnamedblk1__DOT__unnamedblk2__DOT___bit = 6U;
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                       >> 0x1fU);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                    = VL_SHIFTL_III(32,32,32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1, 1U);
                                if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                                           ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                                              >> 6U)))) {
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                        = (0x04c11db6U 
                                           ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                                }
                                __Vfunc_uvm_oneway_hash__12__unnamedblk1__DOT__unnamedblk2__DOT___bit = 7U;
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                       >> 0x1fU);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                    = VL_SHIFTL_III(32,32,32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1, 1U);
                                if (((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                                     ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                                        >> 7U))) {
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                        = (0x04c11db6U 
                                           ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                                }
                                __Vfunc_uvm_oneway_hash__12__unnamedblk1__DOT__unnamedblk2__DOT___bit = 8U;
                                __Vfunc_uvm_oneway_hash__12__unnamedblk1__DOT___byte 
                                    = ((IData)(1U) 
                                       + __Vfunc_uvm_oneway_hash__12__unnamedblk1__DOT___byte);
                            }
                            __Vlabel1: ;
                        }
                        __Vfunc_uvm_oneway_hash__12__Vfuncout 
                            = (__Vfunc_uvm_oneway_hash__12__Vfuncout 
                               + (~ ((((0x0000ff00U 
                                        & (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                           << 8U)) 
                                       | (0x000000ffU 
                                          & (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                             >> 8U))) 
                                      << 0x00000010U) 
                                     | ((0x0000ff00U 
                                         & (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                            >> 8U)) 
                                        | (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                           >> 0x18U)))));
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_misc.svh", 176)
                                            ->__PVT__seed_table
                                            .at(__Vfunc_uvm_create_random_seed__3__type_id) 
                            = __Vfunc_uvm_oneway_hash__12__Vfuncout;
                    }
                    if ((! VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_misc.svh", 178)
                         ->__PVT__count.exists(__Vfunc_uvm_create_random_seed__3__type_id))) {
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_misc.svh", 179)
                                            ->__PVT__count
                                            .at(__Vfunc_uvm_create_random_seed__3__type_id) = 0U;
                    }
                    __Vtemp_1 = (VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_misc.svh", 185)
                                 ->__PVT__seed_table
                                 .at(__Vfunc_uvm_create_random_seed__3__type_id) 
                                 + VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_misc.svh", 185)
                                 ->__PVT__count.at(__Vfunc_uvm_create_random_seed__3__type_id));
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_misc.svh", 185)
                                            ->__PVT__seed_table
                                            .at(__Vfunc_uvm_create_random_seed__3__type_id) 
                        = __Vtemp_1;
                    __Vtemp_2 = ((IData)(1U) + VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_misc.svh", 186)
                                 ->__PVT__count.at(__Vfunc_uvm_create_random_seed__3__type_id));
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_misc.svh", 186)
                                            ->__PVT__count
                                            .at(__Vfunc_uvm_create_random_seed__3__type_id) 
                        = __Vtemp_2;
                    __Vfunc_uvm_create_random_seed__3__Vfuncout 
                        = VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_misc.svh", 188)
                        ->__PVT__seed_table.at(__Vfunc_uvm_create_random_seed__3__type_id);
                }(), __Vfunc_uvm_create_random_seed__3__Vfuncout));
    }
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_get_inst_id(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &get_inst_id__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_get_inst_id\n"); );
    // Body
    get_inst_id__Vfuncrtn = this->__PVT__m_inst_id;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_get_object_type(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__13__Vfuncout;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_factory> __Vtask_get_factory__14__Vfuncout;
    std::string __Vfunc_get_type_name__15__Vfuncout;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper> __Vtask_find_wrapper_by_name__16__Vfuncout;
    std::string __Vfunc_get_type_name__17__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> cs;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_factory> factory;
    {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__13__Vfuncout);
        cs = __Vfunc_get__13__Vfuncout;
        VL_NULL_CHECK(cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_object.svh", 906)->__VnoInFunc_get_factory(vlSymsp, __Vtask_get_factory__14__Vfuncout);
        factory = __Vtask_get_factory__14__Vfuncout;
        if (("<unknown>"s == ([&]() {
                        this->__VnoInFunc_get_type_name(vlSymsp, __Vfunc_get_type_name__15__Vfuncout);
                    }(), __Vfunc_get_type_name__15__Vfuncout))) {
            get_object_type__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        VL_NULL_CHECK(factory, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_object.svh", 908)->__VnoInFunc_find_wrapper_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                        this->__VnoInFunc_get_type_name(vlSymsp, __Vfunc_get_type_name__17__Vfuncout);
                    }(), __Vfunc_get_type_name__17__Vfuncout)), __Vtask_find_wrapper_by_name__16__Vfuncout);
        get_object_type__Vfuncrtn = __Vtask_find_wrapper_by_name__16__Vfuncout;
        __Vlabel0: ;
    }
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_get_name(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &get_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_get_name\n"); );
    // Body
    get_name__Vfuncrtn = this->__PVT__m_leaf_name;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_get_full_name(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_get_full_name\n"); );
    // Locals
    std::string __Vfunc_get_name__18__Vfuncout;
    // Body
    this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__18__Vfuncout);
    get_full_name__Vfuncrtn = __Vfunc_get_name__18__Vfuncout;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_set_name(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_set_name\n"); );
    // Body
    this->__PVT__m_leaf_name = name;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_print(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_print\n"); );
    // Locals
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_printer> __Vfunc_get_default__19__Vfuncout;
    std::string __Vfunc_sprint__20__Vfuncout;
    IData/*31:0*/ __Vtask_get_file__21__Vfuncout;
    __Vtask_get_file__21__Vfuncout = 0;
    std::string __Vtemp_1;
    // Body
    if ((VlNull{} == printer)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_printer__Vclpkg.__VnoInFunc_get_default(vlProcess, vlSymsp, __Vfunc_get_default__19__Vfuncout);
        printer = __Vfunc_get_default__19__Vfuncout;
    }
    __Vtemp_1 = ([&]() {
            this->__VnoInFunc_sprint(vlProcess, vlSymsp, printer, __Vfunc_sprint__20__Vfuncout);
        }(), __Vfunc_sprint__20__Vfuncout);
    VL_FWRITEF_NX(([&]() {
                VL_NULL_CHECK(printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_object.svh", 949)
                   ->__VnoInFunc_get_file(vlSymsp, __Vtask_get_file__21__Vfuncout);
            }(), __Vtask_get_file__21__Vfuncout),"%@",0,
                  -1,&(__Vtemp_1));
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_sprint(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_printer> printer, std::string &sprint__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_sprint\n"); );
    // Locals
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_printer> __Vfunc_get_default__22__Vfuncout;
    IData/*31:0*/ __Vtask_get_active_object_depth__23__Vfuncout;
    __Vtask_get_active_object_depth__23__Vfuncout = 0;
    CData/*0:0*/ __Vtask_get_root_enabled__25__Vfuncout;
    __Vtask_get_root_enabled__25__Vfuncout = 0;
    std::string __Vfunc_get_full_name__26__Vfuncout;
    std::string __Vfunc_get_name__27__Vfuncout;
    std::string __Vfunc_get_name__28__Vfuncout;
    std::string __Vtask_emit__30__Vfuncout;
    // Body
    std::string name;
    if ((VlNull{} == printer)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_printer__Vclpkg.__VnoInFunc_get_default(vlProcess, vlSymsp, __Vfunc_get_default__22__Vfuncout);
        printer = __Vfunc_get_default__22__Vfuncout;
    }
    if ((0U == ([&]() {
                    VL_NULL_CHECK(printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_object.svh", 960)
                ->__VnoInFunc_get_active_object_depth(vlSymsp, __Vtask_get_active_object_depth__23__Vfuncout);
                }(), __Vtask_get_active_object_depth__23__Vfuncout))) {
        VL_NULL_CHECK(printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_object.svh", 961)->__VnoInFunc_flush(vlProcess, vlSymsp);
        name = (([&]() {
                    VL_NULL_CHECK(printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_object.svh", 962)
                 ->__VnoInFunc_get_root_enabled(vlSymsp, __Vtask_get_root_enabled__25__Vfuncout);
                }(), (IData)(__Vtask_get_root_enabled__25__Vfuncout))
                 ? ([&]() {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__26__Vfuncout);
                }(), __Vfunc_get_full_name__26__Vfuncout)
                 : ([&]() {
                    this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__27__Vfuncout);
                }(), __Vfunc_get_name__27__Vfuncout));
    } else {
        this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__28__Vfuncout);
        name = __Vfunc_get_name__28__Vfuncout;
    }
    VL_NULL_CHECK(printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_object.svh", 968)->__VnoInFunc_print_object(vlProcess, vlSymsp, name, 
                                                                                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object>{this}, 0x2eU);
    VL_NULL_CHECK(printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_object.svh", 970)->__VnoInFunc_emit(vlProcess, vlSymsp, __Vtask_emit__30__Vfuncout);
    sprint__Vfuncrtn = __Vtask_emit__30__Vfuncout;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_convert2string\n"); );
    // Body
    convert2string__Vfuncrtn = ""s;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_set_local(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_resource_base> rsrc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_set_local\n"); );
    // Locals
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_field_op> __Vfunc_m_get_available_op__31__Vfuncout;
    // Body
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_field_op> unnamedblk12__DOT__op;
    if ((VlNull{} != rsrc)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_field_op__Vclpkg.__VnoInFunc_m_get_available_op(vlProcess, vlSymsp, __Vfunc_m_get_available_op__31__Vfuncout);
        unnamedblk12__DOT__op = __Vfunc_m_get_available_op__31__Vfuncout;
        VL_NULL_CHECK(unnamedblk12__DOT__op, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_object.svh", 1098)->__VnoInFunc_set(vlProcess, vlSymsp, 0x00000800U, VlNull{}, rsrc);
        this->__VnoInFunc_do_execute_op(vlProcess, vlSymsp, unnamedblk12__DOT__op);
        VL_NULL_CHECK(unnamedblk12__DOT__op, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_object.svh", 1100)->__VnoInFunc_m_recycle(vlSymsp);
    }
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_m_unsupported_set_local(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_resource_base> rsrc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_m_unsupported_set_local\n"); );
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_clone(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_clone\n"); );
    // Locals
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> __Vfunc_create__35__Vfuncout;
    std::string __Vfunc_get_name__36__Vfuncout;
    std::string __Vtask_uvm_report_warning__37__id;
    std::string __Vtask_uvm_report_warning__37__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__37__verbosity;
    __Vtask_uvm_report_warning__37__verbosity = 0;
    std::string __Vtask_uvm_report_warning__37__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__37__line;
    __Vtask_uvm_report_warning__37__line = 0;
    std::string __Vtask_uvm_report_warning__37__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__37__report_enabled_checked;
    __Vtask_uvm_report_warning__37__report_enabled_checked = 0;
    std::string __Vfunc_get_name__38__Vfuncout;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__39__Vfuncout;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__40__Vfuncout;
    std::string __Vtemp_1;
    // Body
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> tmp;
    this->__VnoInFunc_create(vlProcess, vlSymsp, VL_CVT_PACK_STR_NN(
                                                                    ([&]() {
                    this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__36__Vfuncout);
                }(), __Vfunc_get_name__36__Vfuncout)), __Vfunc_create__35__Vfuncout);
    tmp = __Vfunc_create__35__Vfuncout;
    if ((VlNull{} == tmp)) {
        __Vtask_uvm_report_warning__37__report_enabled_checked = 0U;
        __Vtask_uvm_report_warning__37__context_name = ""s;
        __Vtask_uvm_report_warning__37__line = 0U;
        __Vtask_uvm_report_warning__37__filename = ""s;
        __Vtask_uvm_report_warning__37__verbosity = 0U;
        __Vtemp_1 = ([&]() {
                this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__38__Vfuncout);
            }(), __Vfunc_get_name__38__Vfuncout);
        __Vtask_uvm_report_warning__37__message = VL_SFORMATF_N_NX("The create method failed for %@,  object cannot be cloned",0,
                                                                   -1,
                                                                   &(__Vtemp_1)) ;
        __Vtask_uvm_report_warning__37__id = "CRFLD"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__39__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__39__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__40__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__40__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__37__id, __Vtask_uvm_report_warning__37__message, __Vtask_uvm_report_warning__37__verbosity, __Vtask_uvm_report_warning__37__filename, __Vtask_uvm_report_warning__37__line, __Vtask_uvm_report_warning__37__context_name, (IData)(__Vtask_uvm_report_warning__37__report_enabled_checked));
    } else {
        VL_NULL_CHECK(tmp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_object.svh", 1125)->__VnoInFunc_copy(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object>{this}, VlNull{});
    }
    clone__Vfuncrtn = tmp;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_copy(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_copier> copier) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_copy\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__43__Vfuncout;
    __Vfunc_uvm_report_enabled__43__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__43__verbosity;
    __Vfunc_uvm_report_enabled__43__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__43__severity;
    __Vfunc_uvm_report_enabled__43__severity = 0;
    std::string __Vfunc_uvm_report_enabled__43__id;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__44__Vfuncout;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__45__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__46__Vfuncout;
    __Vtask_uvm_report_enabled__46__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__47__id;
    std::string __Vtask_uvm_report_error__47__message;
    IData/*31:0*/ __Vtask_uvm_report_error__47__verbosity;
    __Vtask_uvm_report_error__47__verbosity = 0;
    std::string __Vtask_uvm_report_error__47__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__47__line;
    __Vtask_uvm_report_error__47__line = 0;
    std::string __Vtask_uvm_report_error__47__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__47__report_enabled_checked;
    __Vtask_uvm_report_error__47__report_enabled_checked = 0;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__48__Vfuncout;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__49__Vfuncout;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__51__Vfuncout;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_copier> __Vtask_get_default_copier__52__Vfuncout;
    IData/*31:0*/ __Vtask_get_active_object_depth__53__Vfuncout;
    __Vtask_get_active_object_depth__53__Vfuncout = 0;
    // Body
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> coreservice;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_copier> m_copier;
    {
        if ((VlNull{} == rhs)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__43__id = "OBJ/COPY"s;
                            __Vfunc_uvm_report_enabled__43__severity = 2U;
                            __Vfunc_uvm_report_enabled__43__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__44__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__44__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__45__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__45__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__43__verbosity, (IData)(__Vfunc_uvm_report_enabled__43__severity), __Vfunc_uvm_report_enabled__43__id, __Vtask_uvm_report_enabled__46__Vfuncout);
                            __Vfunc_uvm_report_enabled__43__Vfuncout 
                                = __Vtask_uvm_report_enabled__46__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__43__Vfuncout))) {
                __Vtask_uvm_report_error__47__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__47__context_name = ""s;
                __Vtask_uvm_report_error__47__line = 0x00000472U;
                __Vtask_uvm_report_error__47__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_object.svh"s;
                __Vtask_uvm_report_error__47__verbosity = 0U;
                __Vtask_uvm_report_error__47__message = "Passing a null object to be copied"s;
                __Vtask_uvm_report_error__47__id = "OBJ/COPY"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__48__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__48__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__49__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__49__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__47__id, __Vtask_uvm_report_error__47__message, __Vtask_uvm_report_error__47__verbosity, __Vtask_uvm_report_error__47__filename, __Vtask_uvm_report_error__47__line, __Vtask_uvm_report_error__47__context_name, (IData)(__Vtask_uvm_report_error__47__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        if ((VlNull{} == copier)) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__51__Vfuncout);
            coreservice = __Vfunc_get__51__Vfuncout;
            VL_NULL_CHECK(coreservice, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_object.svh", 1144)->__VnoInFunc_get_default_copier(vlProcess, vlSymsp, __Vtask_get_default_copier__52__Vfuncout);
            m_copier = __Vtask_get_default_copier__52__Vfuncout;
        } else {
            m_copier = copier;
        }
        if ((0U == ([&]() {
                        VL_NULL_CHECK(m_copier, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_object.svh", 1149)
                    ->__VnoInFunc_get_active_object_depth(vlSymsp, __Vtask_get_active_object_depth__53__Vfuncout);
                    }(), __Vtask_get_active_object_depth__53__Vfuncout))) {
            VL_NULL_CHECK(m_copier, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_object.svh", 1150)->__VnoInFunc_flush(vlProcess, vlSymsp);
        }
        VL_NULL_CHECK(m_copier, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_object.svh", 1152)->__VnoInFunc_copy_object(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object>{this}, rhs);
        __Vlabel0: ;
    }
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_copy\n"); );
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_compare(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &compare__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_compare\n"); );
    // Locals
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer> __Vfunc_get_default__56__Vfuncout;
    IData/*31:0*/ __Vtask_get_active_object_depth__57__Vfuncout;
    __Vtask_get_active_object_depth__57__Vfuncout = 0;
    CData/*0:0*/ __Vtask_compare_object__59__Vfuncout;
    __Vtask_compare_object__59__Vfuncout = 0;
    std::string __Vfunc_get_name__60__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((VlNull{} == comparer)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_comparer__Vclpkg.__VnoInFunc_get_default(vlSymsp, __Vfunc_get_default__56__Vfuncout);
        comparer = __Vfunc_get_default__56__Vfuncout;
    }
    if ((0U == ([&]() {
                    VL_NULL_CHECK(comparer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_object.svh", 1170)
                ->__VnoInFunc_get_active_object_depth(vlSymsp, __Vtask_get_active_object_depth__57__Vfuncout);
                }(), __Vtask_get_active_object_depth__57__Vfuncout))) {
        VL_NULL_CHECK(comparer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_object.svh", 1171)->__VnoInFunc_flush(vlProcess, vlSymsp);
    }
    VL_NULL_CHECK(comparer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_object.svh", 1172)->__VnoInFunc_compare_object(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                    this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__60__Vfuncout);
                }(), __Vfunc_get_name__60__Vfuncout)), 
                                                                                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object>{this}, rhs, __Vtask_compare_object__59__Vfuncout);
    compare__Vfuncrtn = __Vtask_compare_object__59__Vfuncout;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_compare(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_compare\n"); );
    // Body
    do_compare__Vfuncrtn = 1U;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc____05Fm_uvm_field_automation(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*27:0*/ what___05F, std::string str___05F) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc____05Fm_uvm_field_automation\n"); );
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print\n"); );
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_m_pack(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_packer> &packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_m_pack\n"); );
    // Locals
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_packer> __Vfunc_get_default__61__Vfuncout;
    IData/*31:0*/ __Vtask_get_active_object_depth__62__Vfuncout;
    __Vtask_get_active_object_depth__62__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((VlNull{} == packer)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_packer__Vclpkg.__VnoInFunc_get_default(vlSymsp, __Vfunc_get_default__61__Vfuncout);
        packer = __Vfunc_get_default__61__Vfuncout;
    }
    if ((0U == ([&]() {
                    VL_NULL_CHECK(packer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_object.svh", 1211)
                ->__VnoInFunc_get_active_object_depth(vlSymsp, __Vtask_get_active_object_depth__62__Vfuncout);
                }(), __Vtask_get_active_object_depth__62__Vfuncout))) {
        VL_NULL_CHECK(packer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_object.svh", 1212)->__VnoInFunc_flush(vlProcess, vlSymsp);
    }
    VL_NULL_CHECK(packer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_object.svh", 1213)->__VnoInFunc_pack_object(vlSymsp, 
                                                                                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object>{this});
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_pack(Vclass_hierarchy__Syms* __restrict vlSymsp, VlQueue<CData/*0:0*/> &bitstream, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_packer> packer, IData/*31:0*/ &pack__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_pack\n"); );
    // Locals
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_packer> __Vtask_m_pack__65__packer;
    IData/*31:0*/ __Vtask_get_packed_size__67__Vfuncout;
    __Vtask_get_packed_size__67__Vfuncout = 0;
    // Body
    __Vtask_m_pack__65__packer = packer;
    this->__VnoInFunc_m_pack(vlSymsp, __Vtask_m_pack__65__packer);
    packer = __Vtask_m_pack__65__packer;
    VL_NULL_CHECK(packer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_object.svh", 1224)->__VnoInFunc_get_packed_bits(vlSymsp, bitstream);
    VL_NULL_CHECK(packer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_object.svh", 1225)->__VnoInFunc_get_packed_size(vlSymsp, __Vtask_get_packed_size__67__Vfuncout);
    pack__Vfuncrtn = __Vtask_get_packed_size__67__Vfuncout;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_pack_bytes(Vclass_hierarchy__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &bytestream, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_packer> packer, IData/*31:0*/ &pack_bytes__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_pack_bytes\n"); );
    // Locals
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_packer> __Vtask_m_pack__68__packer;
    IData/*31:0*/ __Vtask_get_packed_size__70__Vfuncout;
    __Vtask_get_packed_size__70__Vfuncout = 0;
    // Body
    __Vtask_m_pack__68__packer = packer;
    this->__VnoInFunc_m_pack(vlSymsp, __Vtask_m_pack__68__packer);
    packer = __Vtask_m_pack__68__packer;
    VL_NULL_CHECK(packer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_object.svh", 1234)->__VnoInFunc_get_packed_bytes(vlSymsp, bytestream);
    VL_NULL_CHECK(packer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_object.svh", 1235)->__VnoInFunc_get_packed_size(vlSymsp, __Vtask_get_packed_size__70__Vfuncout);
    pack_bytes__Vfuncrtn = __Vtask_get_packed_size__70__Vfuncout;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_pack_ints(Vclass_hierarchy__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> &intstream, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_packer> packer, IData/*31:0*/ &pack_ints__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_pack_ints\n"); );
    // Locals
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_packer> __Vtask_m_pack__71__packer;
    IData/*31:0*/ __Vtask_get_packed_size__73__Vfuncout;
    __Vtask_get_packed_size__73__Vfuncout = 0;
    // Body
    __Vtask_m_pack__71__packer = packer;
    this->__VnoInFunc_m_pack(vlSymsp, __Vtask_m_pack__71__packer);
    packer = __Vtask_m_pack__71__packer;
    VL_NULL_CHECK(packer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_object.svh", 1245)->__VnoInFunc_get_packed_ints(vlSymsp, intstream);
    VL_NULL_CHECK(packer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_object.svh", 1246)->__VnoInFunc_get_packed_size(vlSymsp, __Vtask_get_packed_size__73__Vfuncout);
    pack_ints__Vfuncrtn = __Vtask_get_packed_size__73__Vfuncout;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_pack_longints(Vclass_hierarchy__Syms* __restrict vlSymsp, VlQueue<QData/*63:0*/> &longintstream, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_packer> packer, IData/*31:0*/ &pack_longints__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_pack_longints\n"); );
    // Locals
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_packer> __Vtask_m_pack__74__packer;
    IData/*31:0*/ __Vtask_get_packed_size__76__Vfuncout;
    __Vtask_get_packed_size__76__Vfuncout = 0;
    // Body
    __Vtask_m_pack__74__packer = packer;
    this->__VnoInFunc_m_pack(vlSymsp, __Vtask_m_pack__74__packer);
    packer = __Vtask_m_pack__74__packer;
    VL_NULL_CHECK(packer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_object.svh", 1255)->__VnoInFunc_get_packed_longints(vlSymsp, longintstream);
    VL_NULL_CHECK(packer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_object.svh", 1256)->__VnoInFunc_get_packed_size(vlSymsp, __Vtask_get_packed_size__76__Vfuncout);
    pack_longints__Vfuncrtn = __Vtask_get_packed_size__76__Vfuncout;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_pack(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_pack\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__77__Vfuncout;
    __Vfunc_uvm_report_enabled__77__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__77__verbosity;
    __Vfunc_uvm_report_enabled__77__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__77__severity;
    __Vfunc_uvm_report_enabled__77__severity = 0;
    std::string __Vfunc_uvm_report_enabled__77__id;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__78__Vfuncout;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__79__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__80__Vfuncout;
    __Vtask_uvm_report_enabled__80__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__81__id;
    std::string __Vtask_uvm_report_error__81__message;
    IData/*31:0*/ __Vtask_uvm_report_error__81__verbosity;
    __Vtask_uvm_report_error__81__verbosity = 0;
    std::string __Vtask_uvm_report_error__81__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__81__line;
    __Vtask_uvm_report_error__81__line = 0;
    std::string __Vtask_uvm_report_error__81__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__81__report_enabled_checked;
    __Vtask_uvm_report_error__81__report_enabled_checked = 0;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__82__Vfuncout;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__83__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((VlNull{} == packer)) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__77__id = "UVM/OBJ/PACK/NULL"s;
                        __Vfunc_uvm_report_enabled__77__severity = 2U;
                        __Vfunc_uvm_report_enabled__77__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__78__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__78__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__79__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__79__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__77__verbosity, (IData)(__Vfunc_uvm_report_enabled__77__severity), __Vfunc_uvm_report_enabled__77__id, __Vtask_uvm_report_enabled__80__Vfuncout);
                        __Vfunc_uvm_report_enabled__77__Vfuncout 
                            = __Vtask_uvm_report_enabled__80__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__77__Vfuncout))) {
            __Vtask_uvm_report_error__81__report_enabled_checked = 1U;
            __Vtask_uvm_report_error__81__context_name = ""s;
            __Vtask_uvm_report_error__81__line = 0x000004f1U;
            __Vtask_uvm_report_error__81__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_object.svh"s;
            __Vtask_uvm_report_error__81__verbosity = 0U;
            __Vtask_uvm_report_error__81__message = "uvm_object::do_pack called with null packer!"s;
            __Vtask_uvm_report_error__81__id = "UVM/OBJ/PACK/NULL"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__82__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__82__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__83__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__83__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__81__id, __Vtask_uvm_report_error__81__message, __Vtask_uvm_report_error__81__verbosity, __Vtask_uvm_report_error__81__filename, __Vtask_uvm_report_error__81__line, __Vtask_uvm_report_error__81__context_name, (IData)(__Vtask_uvm_report_error__81__report_enabled_checked));
        }
    }
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_m_unpack_pre(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_packer> &packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_m_unpack_pre\n"); );
    // Locals
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_packer> __Vfunc_get_default__85__Vfuncout;
    IData/*31:0*/ __Vtask_get_active_object_depth__86__Vfuncout;
    __Vtask_get_active_object_depth__86__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((VlNull{} == packer)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_packer__Vclpkg.__VnoInFunc_get_default(vlSymsp, __Vfunc_get_default__85__Vfuncout);
        packer = __Vfunc_get_default__85__Vfuncout;
    }
    if ((0U == ([&]() {
                    VL_NULL_CHECK(packer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_object.svh", 1276)
                ->__VnoInFunc_get_active_object_depth(vlSymsp, __Vtask_get_active_object_depth__86__Vfuncout);
                }(), __Vtask_get_active_object_depth__86__Vfuncout))) {
        VL_NULL_CHECK(packer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_object.svh", 1277)->__VnoInFunc_flush(vlProcess, vlSymsp);
    }
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_m_unpack_post(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_packer> packer, IData/*31:0*/ &m_unpack_post__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_m_unpack_post\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_packed_size__88__Vfuncout;
    __Vtask_get_packed_size__88__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_packed_size__90__Vfuncout;
    __Vtask_get_packed_size__90__Vfuncout = 0;
    // Body
    IData/*31:0*/ size_before_unpack;
    size_before_unpack = 0;
    VL_NULL_CHECK(packer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_object.svh", 1286)->__VnoInFunc_get_packed_size(vlSymsp, __Vtask_get_packed_size__88__Vfuncout);
    size_before_unpack = __Vtask_get_packed_size__88__Vfuncout;
    VL_NULL_CHECK(packer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_object.svh", 1287)->__VnoInFunc_unpack_object(vlSymsp, 
                                                                                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object>{this});
    m_unpack_post__Vfuncrtn = (size_before_unpack - 
                               ([&]() {
                VL_NULL_CHECK(packer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_object.svh", 1288)
                                ->__VnoInFunc_get_packed_size(vlSymsp, __Vtask_get_packed_size__90__Vfuncout);
            }(), __Vtask_get_packed_size__90__Vfuncout));
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_unpack(Vclass_hierarchy__Syms* __restrict vlSymsp, VlQueue<CData/*0:0*/> &bitstream, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_packer> packer, IData/*31:0*/ &unpack__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_unpack\n"); );
    // Locals
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_packer> __Vtask_m_unpack_pre__91__packer;
    IData/*31:0*/ __Vfunc_m_unpack_post__93__Vfuncout;
    __Vfunc_m_unpack_post__93__Vfuncout = 0;
    // Body
    __Vtask_m_unpack_pre__91__packer = packer;
    this->__VnoInFunc_m_unpack_pre(vlSymsp, __Vtask_m_unpack_pre__91__packer);
    packer = __Vtask_m_unpack_pre__91__packer;
    VL_NULL_CHECK(packer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_object.svh", 1298)->__VnoInFunc_set_packed_bits(vlSymsp, bitstream);
    this->__VnoInFunc_m_unpack_post(vlSymsp, packer, __Vfunc_m_unpack_post__93__Vfuncout);
    unpack__Vfuncrtn = __Vfunc_m_unpack_post__93__Vfuncout;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_unpack_bytes(Vclass_hierarchy__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &bytestream, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_packer> packer, IData/*31:0*/ &unpack_bytes__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_unpack_bytes\n"); );
    // Locals
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_packer> __Vtask_m_unpack_pre__94__packer;
    IData/*31:0*/ __Vfunc_m_unpack_post__96__Vfuncout;
    __Vfunc_m_unpack_post__96__Vfuncout = 0;
    // Body
    __Vtask_m_unpack_pre__94__packer = packer;
    this->__VnoInFunc_m_unpack_pre(vlSymsp, __Vtask_m_unpack_pre__94__packer);
    packer = __Vtask_m_unpack_pre__94__packer;
    VL_NULL_CHECK(packer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_object.svh", 1309)->__VnoInFunc_set_packed_bytes(vlSymsp, bytestream);
    this->__VnoInFunc_m_unpack_post(vlSymsp, packer, __Vfunc_m_unpack_post__96__Vfuncout);
    unpack_bytes__Vfuncrtn = __Vfunc_m_unpack_post__96__Vfuncout;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_unpack_ints(Vclass_hierarchy__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> &intstream, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_packer> packer, IData/*31:0*/ &unpack_ints__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_unpack_ints\n"); );
    // Locals
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_packer> __Vtask_m_unpack_pre__97__packer;
    IData/*31:0*/ __Vfunc_m_unpack_post__99__Vfuncout;
    __Vfunc_m_unpack_post__99__Vfuncout = 0;
    // Body
    __Vtask_m_unpack_pre__97__packer = packer;
    this->__VnoInFunc_m_unpack_pre(vlSymsp, __Vtask_m_unpack_pre__97__packer);
    packer = __Vtask_m_unpack_pre__97__packer;
    VL_NULL_CHECK(packer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_object.svh", 1320)->__VnoInFunc_set_packed_ints(vlSymsp, intstream);
    this->__VnoInFunc_m_unpack_post(vlSymsp, packer, __Vfunc_m_unpack_post__99__Vfuncout);
    unpack_ints__Vfuncrtn = __Vfunc_m_unpack_post__99__Vfuncout;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_unpack_longints(Vclass_hierarchy__Syms* __restrict vlSymsp, VlQueue<QData/*63:0*/> &longintstream, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_packer> packer, IData/*31:0*/ &unpack_longints__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_unpack_longints\n"); );
    // Locals
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_packer> __Vtask_m_unpack_pre__100__packer;
    IData/*31:0*/ __Vfunc_m_unpack_post__102__Vfuncout;
    __Vfunc_m_unpack_post__102__Vfuncout = 0;
    // Body
    __Vtask_m_unpack_pre__100__packer = packer;
    this->__VnoInFunc_m_unpack_pre(vlSymsp, __Vtask_m_unpack_pre__100__packer);
    packer = __Vtask_m_unpack_pre__100__packer;
    VL_NULL_CHECK(packer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_object.svh", 1330)->__VnoInFunc_set_packed_longints(vlSymsp, longintstream);
    this->__VnoInFunc_m_unpack_post(vlSymsp, packer, __Vfunc_m_unpack_post__102__Vfuncout);
    unpack_longints__Vfuncrtn = __Vfunc_m_unpack_post__102__Vfuncout;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_execute_op(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_field_op> op) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_execute_op\n"); );
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_unpack(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_unpack\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__103__Vfuncout;
    __Vfunc_uvm_report_enabled__103__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__103__verbosity;
    __Vfunc_uvm_report_enabled__103__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__103__severity;
    __Vfunc_uvm_report_enabled__103__severity = 0;
    std::string __Vfunc_uvm_report_enabled__103__id;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__104__Vfuncout;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__105__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__106__Vfuncout;
    __Vtask_uvm_report_enabled__106__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__107__id;
    std::string __Vtask_uvm_report_error__107__message;
    IData/*31:0*/ __Vtask_uvm_report_error__107__verbosity;
    __Vtask_uvm_report_error__107__verbosity = 0;
    std::string __Vtask_uvm_report_error__107__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__107__line;
    __Vtask_uvm_report_error__107__line = 0;
    std::string __Vtask_uvm_report_error__107__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__107__report_enabled_checked;
    __Vtask_uvm_report_error__107__report_enabled_checked = 0;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__108__Vfuncout;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__109__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((VlNull{} == packer)) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__103__id = "UVM/OBJ/UNPACK/NULL"s;
                        __Vfunc_uvm_report_enabled__103__severity = 2U;
                        __Vfunc_uvm_report_enabled__103__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__104__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__104__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__105__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__105__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__103__verbosity, (IData)(__Vfunc_uvm_report_enabled__103__severity), __Vfunc_uvm_report_enabled__103__id, __Vtask_uvm_report_enabled__106__Vfuncout);
                        __Vfunc_uvm_report_enabled__103__Vfuncout 
                            = __Vtask_uvm_report_enabled__106__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__103__Vfuncout))) {
            __Vtask_uvm_report_error__107__report_enabled_checked = 1U;
            __Vtask_uvm_report_error__107__context_name = ""s;
            __Vtask_uvm_report_error__107__line = 0x00000541U;
            __Vtask_uvm_report_error__107__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_object.svh"s;
            __Vtask_uvm_report_error__107__verbosity = 0U;
            __Vtask_uvm_report_error__107__message = "uvm_object::do_unpack called with null packer!"s;
            __Vtask_uvm_report_error__107__id = "UVM/OBJ/UNPACK/NULL"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__108__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__108__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__109__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__109__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__107__id, __Vtask_uvm_report_error__107__message, __Vtask_uvm_report_error__107__verbosity, __Vtask_uvm_report_error__107__filename, __Vtask_uvm_report_error__107__line, __Vtask_uvm_report_error__107__context_name, (IData)(__Vtask_uvm_report_error__107__report_enabled_checked));
        }
    }
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_record(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_recorder> recorder) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_record\n"); );
    // Locals
    std::string __Vfunc_get_name__112__Vfuncout;
    // Body
    {
        if ((VlNull{} == recorder)) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(recorder, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_object.svh", 1358)->__VnoInFunc_record_object(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                        this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__112__Vfuncout);
                    }(), __Vfunc_get_name__112__Vfuncout)), 
                                                                                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object>{this});
        __Vlabel0: ;
    }
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_record(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_recorder> recorder) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_record\n"); );
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_m_get_report_object(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_report_object> &m_get_report_object__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_m_get_report_object\n"); );
    // Body
    m_get_report_object__Vfuncrtn = VlNull{};
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_randomize(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__114__Vfuncout;
    __Vfunc___Vbasic_randomize__114__Vfuncout = 0;
    // Body
    Vclass_hierarchy_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vclass_hierarchy_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__114__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__114__Vfuncout));
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc___Vbasic_randomize(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_object::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_object::_ctor_var_reset(Vclass_hierarchy__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_object::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_inst_id = 0;
}

std::string VL_TO_STRING(const VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_object::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vclass_hierarchy_uvm_pkg__03a__03auvm_object::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_object::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vclass_hierarchy_uvm_pkg__03a__03auvm_object::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_object::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_leaf_name:" + VL_TO_STRING(__PVT__m_leaf_name);
    out += ", m_inst_id:" + VL_TO_STRING(__PVT__m_inst_id);
    out += ", "+ Vclass_hierarchy_uvm_pkg__03a__03auvm_void::to_string_middle();
    return (out);
}
