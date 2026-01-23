// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpools_top.h for the primary calling header

#include "Vpools_top__pch.h"

void Vpools_top_uvm_pkg__03a__03auvm_reg_shared_access_seq__Vclpkg::__VnoInFunc_get_type(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_registry__pi159> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vpools_top_uvm_pkg__03a__03auvm_reg_shared_access_seq__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_registry__pi159> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi159__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vpools_top_uvm_pkg__03a__03auvm_reg_shared_access_seq__Vclpkg::__VnoInFunc_type_name(Vpools_top__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vpools_top_uvm_pkg__03a__03auvm_reg_shared_access_seq__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_reg_shared_access_seq"s;
}

void Vpools_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc_get_object_type(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_registry__pi159> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi159__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vpools_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc_create(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_shared_access_seq> tmp;
    tmp = ((""s == name) ? VL_NEW(Vpools_top_uvm_pkg__03a__03auvm_reg_shared_access_seq, vlProcess, vlSymsp, "uvm_reg_shared_access_seq"s)
            : VL_NEW(Vpools_top_uvm_pkg__03a__03auvm_reg_shared_access_seq, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vpools_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc_get_type_name(Vpools_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_shared_access_seq"s;
}

Vpools_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::Vpools_top_uvm_pkg__03a__03auvm_reg_shared_access_seq(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name)
    : Vpools_top_uvm_pkg__03a__03auvm_reg_sequence__Tz282(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

VlCoroutine Vpools_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc_body(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc_body\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__4__Vfuncout;
    __Vfunc_uvm_report_enabled__4__Vfuncout = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource__Tz40> __Vfunc_get_by_name__6__Vfuncout;
    std::string __Vtask_get_full_name__7__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource__Tz40> __Vfunc_get_by_name__8__Vfuncout;
    std::string __Vtask_get_full_name__9__Vfuncout;
    IData/*31:0*/ __Vtask_get_n_maps__10__Vfuncout;
    __Vtask_get_n_maps__10__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_lsb_pos__13__Vfuncout;
    __Vtask_get_lsb_pos__13__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bits__14__Vfuncout;
    __Vtask_get_n_bits__14__Vfuncout = 0;
    CData/*0:0*/ __Vtask_is_known_access__15__Vfuncout;
    __Vtask_is_known_access__15__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_lsb_pos__16__Vfuncout;
    __Vtask_get_lsb_pos__16__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bits__17__Vfuncout;
    __Vtask_get_n_bits__17__Vfuncout = 0;
    std::string __Vtask_get_access__18__Vfuncout;
    QData/*63:0*/ __Vtask_get__19__Vfuncout;
    __Vtask_get__19__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__20__Vfuncout;
    __Vfunc_uvm_report_enabled__20__Vfuncout = 0;
    std::string __Vtask_get_full_name__22__Vfuncout;
    std::string __Vtask_get_full_name__23__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__24__Vfuncout;
    __Vfunc_uvm_report_enabled__24__Vfuncout = 0;
    IData/*31:0*/ __Vtask_write__26__status;
    __Vtask_write__26__status = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__27__Vfuncout;
    __Vfunc_uvm_report_enabled__27__Vfuncout = 0;
    std::string __Vtask_get_full_name__29__Vfuncout;
    std::string __Vtask_get_full_name__30__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__31__Vfuncout;
    __Vfunc_uvm_report_enabled__31__Vfuncout = 0;
    std::string __Vtask_get_full_name__33__Vfuncout;
    std::string __Vtask_get_full_name__34__Vfuncout;
    QData/*63:0*/ __Vtask_get__35__Vfuncout;
    __Vtask_get__35__Vfuncout = 0;
    IData/*31:0*/ __Vtask_read__36__status;
    __Vtask_read__36__status = 0;
    QData/*63:0*/ __Vtask_read__36__value;
    __Vtask_read__36__value = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__37__Vfuncout;
    __Vfunc_uvm_report_enabled__37__Vfuncout = 0;
    std::string __Vtask_get_full_name__39__Vfuncout;
    std::string __Vtask_get_full_name__40__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__41__Vfuncout;
    __Vfunc_uvm_report_enabled__41__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__43__Vfuncout;
    __Vfunc_uvm_report_enabled__43__Vfuncout = 0;
    std::string __Vtask_get_full_name__45__Vfuncout;
    std::string __Vtask_get_full_name__46__Vfuncout;
    std::string __Vtask_get_full_name__47__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    std::string __Vtemp_6;
    std::string __Vtemp_7;
    std::string __Vtemp_8;
    std::string __Vtemp_9;
    std::string __Vtemp_10;
    std::string __Vtemp_11;
    std::string __Vtemp_12;
    std::string __Vtemp_13;
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1__DOT__k;
    unnamedblk1__DOT__k = 0;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__lsb;
    unnamedblk1__DOT__unnamedblk2__DOT__lsb = 0;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__w;
    unnamedblk1__DOT__unnamedblk2__DOT__w = 0;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ unnamedblk3__DOT__j;
    unnamedblk3__DOT__j = 0;
    QData/*63:0*/ unnamedblk3__DOT__unnamedblk4__DOT__wo;
    unnamedblk3__DOT__unnamedblk4__DOT__wo = 0;
    IData/*31:0*/ unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k;
    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k = 0;
    IData/*31:0*/ unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lsb;
    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lsb = 0;
    IData/*31:0*/ unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__w;
    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__w = 0;
    IData/*31:0*/ unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk1_2__DOT____Vrepeat1;
    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ unnamedblk7__DOT__j;
    unnamedblk7__DOT__j = 0;
    IData/*31:0*/ unnamedblk7__DOT__unnamedblk8__DOT__status;
    unnamedblk7__DOT__unnamedblk8__DOT__status = 0;
    QData/*63:0*/ unnamedblk7__DOT__unnamedblk8__DOT__prev;
    unnamedblk7__DOT__unnamedblk8__DOT__prev = 0;
    QData/*63:0*/ unnamedblk7__DOT__unnamedblk8__DOT__v;
    unnamedblk7__DOT__unnamedblk8__DOT__v = 0;
    IData/*31:0*/ unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__k;
    unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__k = 0;
    QData/*63:0*/ unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__actual;
    unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__actual = 0;
    QData/*63:0*/ unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__exp;
    unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__exp = 0;
    IData/*31:0*/ __Vincrement2;
    __Vincrement2 = 0;
    IData/*31:0*/ __Vincrement1;
    __Vincrement1 = 0;
    QData/*63:0*/ other_mask;
    other_mask = 0;
    VlQueue<QData/*63:0*/> wo_mask;
    wo_mask.atDefault() = 0;
    VlQueue<VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_field>> fields;
    VlQueue<VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_map>> maps;
    {
        if ((VlNull{} == this->__PVT__rg)) {
            if ((0U != ([&]() {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_shared_access_seq"s, __Vfunc_uvm_report_enabled__4__Vfuncout);
                        }(), __Vfunc_uvm_report_enabled__4__Vfuncout))) {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_shared_access_seq"s, "No register specified to run sequence on"s, 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x00000052U, ""s, 1U);
            }
            goto __Vlabel0;
        }
        if (((VlNull{} != ([&]() {
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz40__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                VL_NULL_CHECK(this->__PVT__rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 87)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__7__Vfuncout);
                                            }(), __Vtask_get_full_name__7__Vfuncout))), "NO_REG_TESTS"s, 0U, __Vfunc_get_by_name__6__Vfuncout);
                        }(), __Vfunc_get_by_name__6__Vfuncout)) 
             || (VlNull{} != ([&]() {
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz40__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                VL_NULL_CHECK(this->__PVT__rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 89)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__9__Vfuncout);
                                            }(), __Vtask_get_full_name__9__Vfuncout))), "NO_REG_SHARED_ACCESS_TEST"s, 0U, __Vfunc_get_by_name__8__Vfuncout);
                        }(), __Vfunc_get_by_name__8__Vfuncout)))) {
            goto __Vlabel0;
        }
        if (VL_GTS_III(32, 2U, ([&]() {
                        VL_NULL_CHECK(this->__PVT__rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 94)
                                ->__VnoInFunc_get_n_maps(vlSymsp, __Vtask_get_n_maps__10__Vfuncout);
                    }(), __Vtask_get_n_maps__10__Vfuncout))) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 95)->__VnoInFunc_get_maps(vlSymsp, maps);
        VL_NULL_CHECK(this->__PVT__rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 98)->__VnoInFunc_get_fields(vlSymsp, fields);
        other_mask = 0ULL;
        unnamedblk1__DOT__k = 0U;
        while (VL_LTS_III(32, unnamedblk1__DOT__k, fields.size())) {
            VL_NULL_CHECK(fields.at(unnamedblk1__DOT__k), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 105)->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__13__Vfuncout);
            unnamedblk1__DOT__unnamedblk2__DOT__lsb 
                = __Vtask_get_lsb_pos__13__Vfuncout;
            VL_NULL_CHECK(fields.at(unnamedblk1__DOT__k), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 106)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__14__Vfuncout);
            unnamedblk1__DOT__unnamedblk2__DOT__w = __Vtask_get_n_bits__14__Vfuncout;
            if ((1U & (~ ([&]() {
                                VL_NULL_CHECK(fields.at(unnamedblk1__DOT__k), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 108)
                          ->__VnoInFunc_is_known_access(vlProcess, vlSymsp, maps.at(0U), __Vtask_is_known_access__15__Vfuncout);
                            }(), (IData)(__Vtask_is_known_access__15__Vfuncout))))) {
                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk1_1__DOT____Vrepeat0 
                    = unnamedblk1__DOT__unnamedblk2__DOT__w;
                while (VL_LTS_III(32, 0U, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
                    __Vincrement1 = unnamedblk1__DOT__unnamedblk2__DOT__lsb;
                    unnamedblk1__DOT__unnamedblk2__DOT__lsb 
                        = ((IData)(1U) + unnamedblk1__DOT__unnamedblk2__DOT__lsb);
                    other_mask = (other_mask | ((QData)((IData)(1U)) 
                                                << 
                                                (0x0000003fU 
                                                 & __Vincrement1)));
                    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk1_1__DOT____Vrepeat0 
                        = (unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk1_1__DOT____Vrepeat0 
                           - (IData)(1U));
                }
            }
            unnamedblk1__DOT__k = ((IData)(1U) + unnamedblk1__DOT__k);
        }
        unnamedblk3__DOT__j = 0U;
        while (VL_LTS_III(32, unnamedblk3__DOT__j, maps.size())) {
            unnamedblk3__DOT__unnamedblk4__DOT__wo = 0ULL;
            unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k = 0U;
            while (VL_LTS_III(32, unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k, fields.size())) {
                VL_NULL_CHECK(fields.at(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 124)->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__16__Vfuncout);
                unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lsb 
                    = __Vtask_get_lsb_pos__16__Vfuncout;
                VL_NULL_CHECK(fields.at(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 125)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__17__Vfuncout);
                unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__w 
                    = __Vtask_get_n_bits__17__Vfuncout;
                if (("WO"s == ([&]() {
                                VL_NULL_CHECK(fields.at(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 127)
                               ->__VnoInFunc_get_access(vlProcess, vlSymsp, maps.at(unnamedblk3__DOT__j), __Vtask_get_access__18__Vfuncout);
                            }(), __Vtask_get_access__18__Vfuncout))) {
                    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk1_2__DOT____Vrepeat1 
                        = unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__w;
                    while (VL_LTS_III(32, 0U, unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
                        __Vincrement2 = unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lsb;
                        unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lsb 
                            = ((IData)(1U) + unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lsb);
                        unnamedblk3__DOT__unnamedblk4__DOT__wo 
                            = (unnamedblk3__DOT__unnamedblk4__DOT__wo 
                               | ((QData)((IData)(1U)) 
                                  << (0x0000003fU & __Vincrement2)));
                        unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk1_2__DOT____Vrepeat1 
                            = (unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk1_2__DOT____Vrepeat1 
                               - (IData)(1U));
                    }
                }
                unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k 
                    = ((IData)(1U) + unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k);
            }
            wo_mask.atWriteAppend(unnamedblk3__DOT__j) 
                = unnamedblk3__DOT__unnamedblk4__DOT__wo;
            unnamedblk3__DOT__j = ((IData)(1U) + unnamedblk3__DOT__j);
        }
        unnamedblk7__DOT__j = 0U;
        while (VL_LTS_III(32, unnamedblk7__DOT__j, maps.size())) {
            VL_NULL_CHECK(this->__PVT__rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 142)->__VnoInFunc_get(vlProcess, vlSymsp, ""s, 0U, __Vtask_get__19__Vfuncout);
            unnamedblk7__DOT__unnamedblk8__DOT__prev 
                = __Vtask_get__19__Vfuncout;
            unnamedblk7__DOT__unnamedblk8__DOT__v = 
                ((VL_RANDOM_Q() & (~ other_mask)) | 
                 (unnamedblk7__DOT__unnamedblk8__DOT__prev 
                  & other_mask));
            if ((0U != ([&]() {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "uvm_reg_shared_access_seq"s, __Vfunc_uvm_report_enabled__20__Vfuncout);
                        }(), __Vfunc_uvm_report_enabled__20__Vfuncout))) {
                __Vtemp_1 = ([&]() {
                        VL_NULL_CHECK(this->__PVT__rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 148)
                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__22__Vfuncout);
                    }(), __Vtask_get_full_name__22__Vfuncout);
                __Vtemp_2 = ([&]() {
                        VL_NULL_CHECK(maps.at(unnamedblk7__DOT__j), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 148)
                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__23__Vfuncout);
                    }(), __Vtask_get_full_name__23__Vfuncout);
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "uvm_reg_shared_access_seq"s, VL_SFORMATF_N_NX("Writing register %@ via map \"%@\"...",0,
                                                                                -1,
                                                                                &(__Vtemp_1),
                                                                                -1,
                                                                                &(__Vtemp_2)) , 0x00000064U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x00000094U, ""s, 1U);
            }
            if ((0U != ([&]() {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000001f4U, 0U, "uvm_reg_shared_access_seq"s, __Vfunc_uvm_report_enabled__24__Vfuncout);
                        }(), __Vfunc_uvm_report_enabled__24__Vfuncout))) {
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "uvm_reg_shared_access_seq"s, VL_SFORMATF_N_NX("Writing 'h%x over 'h%x",0,
                                                                                64,
                                                                                unnamedblk7__DOT__unnamedblk8__DOT__v,
                                                                                64,
                                                                                unnamedblk7__DOT__unnamedblk8__DOT__prev) , 0x000001f4U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x00000096U, ""s, 1U);
            }
            co_await VL_NULL_CHECK(this->__PVT__rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 152)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__26__status, unnamedblk7__DOT__unnamedblk8__DOT__v, 0U, maps.at(unnamedblk7__DOT__j), 
                                                                                VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_shared_access_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
            unnamedblk7__DOT__unnamedblk8__DOT__status 
                = __Vtask_write__26__status;
            if ((0U != unnamedblk7__DOT__unnamedblk8__DOT__status)) {
                if ((0U != ([&]() {
                                this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_shared_access_seq"s, __Vfunc_uvm_report_enabled__27__Vfuncout);
                            }(), __Vfunc_uvm_report_enabled__27__Vfuncout))) {
                    __Vtemp_3 = Vpools_top___024unit::__Venumtab_enum_name83
                        [(3U & unnamedblk7__DOT__unnamedblk8__DOT__status)];
                    __Vtemp_4 = ([&]() {
                            VL_NULL_CHECK(this->__PVT__rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 155)
                                 ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__29__Vfuncout);
                        }(), __Vtask_get_full_name__29__Vfuncout);
                    __Vtemp_5 = ([&]() {
                            VL_NULL_CHECK(maps.at(unnamedblk7__DOT__j), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 155)
                                 ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__30__Vfuncout);
                        }(), __Vtask_get_full_name__30__Vfuncout);
                    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_shared_access_seq"s, VL_SFORMATF_N_NX("Status was %@ when writing register \"%@\" through map \"%@\".",0,
                                                                                -1,
                                                                                &(__Vtemp_3),
                                                                                -1,
                                                                                &(__Vtemp_4),
                                                                                -1,
                                                                                &(__Vtemp_5)) , 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x0000009bU, ""s, 1U);
                }
            }
            unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__k = 0U;
            while (VL_LTS_III(32, unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__k, maps.size())) {
                if ((0U != ([&]() {
                                this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "uvm_reg_shared_access_seq"s, __Vfunc_uvm_report_enabled__31__Vfuncout);
                            }(), __Vfunc_uvm_report_enabled__31__Vfuncout))) {
                    __Vtemp_6 = ([&]() {
                            VL_NULL_CHECK(this->__PVT__rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 162)
                                 ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__33__Vfuncout);
                        }(), __Vtask_get_full_name__33__Vfuncout);
                    __Vtemp_7 = ([&]() {
                            VL_NULL_CHECK(maps.at(unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__k), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 162)
                                 ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__34__Vfuncout);
                        }(), __Vtask_get_full_name__34__Vfuncout);
                    this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "uvm_reg_shared_access_seq"s, VL_SFORMATF_N_NX("Reading register %@ via map \"%@\"...",0,
                                                                                -1,
                                                                                &(__Vtemp_6),
                                                                                -1,
                                                                                &(__Vtemp_7)) , 0x00000064U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x000000a2U, ""s, 1U);
                }
                unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__exp 
                    = (([&]() {
                            VL_NULL_CHECK(this->__PVT__rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 165)
                        ->__VnoInFunc_get(vlProcess, vlSymsp, ""s, 0U, __Vtask_get__35__Vfuncout);
                        }(), __Vtask_get__35__Vfuncout) 
                       & (~ wo_mask.at(unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__k)));
                co_await VL_NULL_CHECK(this->__PVT__rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 167)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__36__status, __Vtask_read__36__value, 0U, maps.at(unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__k), 
                                                                                VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_shared_access_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
                unnamedblk7__DOT__unnamedblk8__DOT__status 
                    = __Vtask_read__36__status;
                unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__actual 
                    = __Vtask_read__36__value;
                if ((0U != unnamedblk7__DOT__unnamedblk8__DOT__status)) {
                    if ((0U != ([&]() {
                                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_shared_access_seq"s, __Vfunc_uvm_report_enabled__37__Vfuncout);
                                }(), __Vfunc_uvm_report_enabled__37__Vfuncout))) {
                        __Vtemp_8 = Vpools_top___024unit::__Venumtab_enum_name83
                            [(3U & unnamedblk7__DOT__unnamedblk8__DOT__status)];
                        __Vtemp_9 = ([&]() {
                                VL_NULL_CHECK(this->__PVT__rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 170)
                                     ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__39__Vfuncout);
                            }(), __Vtask_get_full_name__39__Vfuncout);
                        __Vtemp_10 = ([&]() {
                                VL_NULL_CHECK(maps.at(unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__k), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 170)
                                      ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__40__Vfuncout);
                            }(), __Vtask_get_full_name__40__Vfuncout);
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_shared_access_seq"s, VL_SFORMATF_N_NX("Status was %@ when reading register \"%@\" through map \"%@\".",0,
                                                                                -1,
                                                                                &(__Vtemp_8),
                                                                                -1,
                                                                                &(__Vtemp_9),
                                                                                -1,
                                                                                &(__Vtemp_10)) , 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x000000aaU, ""s, 1U);
                    }
                }
                if ((0U != ([&]() {
                                this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000001f4U, 0U, "uvm_reg_shared_access_seq"s, __Vfunc_uvm_report_enabled__41__Vfuncout);
                            }(), __Vfunc_uvm_report_enabled__41__Vfuncout))) {
                    this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "uvm_reg_shared_access_seq"s, VL_SFORMATF_N_NX("Read 'h%x, expecting 'h%x",0,
                                                                                64,
                                                                                unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__actual,
                                                                                64,
                                                                                unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__exp) , 0x000001f4U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x000000aeU, ""s, 1U);
                }
                if ((unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__actual 
                     != unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__exp)) {
                    if ((0U != ([&]() {
                                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_shared_access_seq"s, __Vfunc_uvm_report_enabled__43__Vfuncout);
                                }(), __Vfunc_uvm_report_enabled__43__Vfuncout))) {
                        __Vtemp_11 = ([&]() {
                                VL_NULL_CHECK(this->__PVT__rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 179)
                                      ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__45__Vfuncout);
                            }(), __Vtask_get_full_name__45__Vfuncout);
                        __Vtemp_12 = ([&]() {
                                VL_NULL_CHECK(maps.at(unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__k), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 179)
                                      ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__46__Vfuncout);
                            }(), __Vtask_get_full_name__46__Vfuncout);
                        __Vtemp_13 = ([&]() {
                                VL_NULL_CHECK(maps.at(unnamedblk7__DOT__j), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 179)
                                      ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__47__Vfuncout);
                            }(), __Vtask_get_full_name__47__Vfuncout);
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_shared_access_seq"s, VL_SFORMATF_N_NX("Register \"%@\" through map \"%@\" is 'h%x instead of 'h%x after writing 'h%x via map \"%@\" over 'h%x.",0,
                                                                                -1,
                                                                                &(__Vtemp_11),
                                                                                -1,
                                                                                &(__Vtemp_12),
                                                                                64,
                                                                                unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__actual,
                                                                                64,
                                                                                unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__exp,
                                                                                64,
                                                                                unnamedblk7__DOT__unnamedblk8__DOT__v,
                                                                                -1,
                                                                                &(__Vtemp_13),
                                                                                64,
                                                                                unnamedblk7__DOT__unnamedblk8__DOT__prev) , 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x000000b3U, ""s, 1U);
                    }
                }
                unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__k 
                    = ((IData)(1U) + unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__k);
            }
            unnamedblk7__DOT__j = ((IData)(1U) + unnamedblk7__DOT__j);
        }
        __Vlabel0: ;
    }
    co_return;}

void Vpools_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc_randomize(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__49__Vfuncout;
    __Vfunc___VBasicRand__49__Vfuncout = 0;
    // Body
    Vpools_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vpools_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__49__Vfuncout);
            }(), __Vfunc___VBasicRand__49__Vfuncout));
}

void Vpools_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc___Vsetup_constraints(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vpools_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc___VBasicRand(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vpools_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::_ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vpools_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::~Vpools_top_uvm_pkg__03a__03auvm_reg_shared_access_seq() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_shared_access_seq>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vpools_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vpools_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_reg_shared_access_seq::to_string_middle\n"); );
    // Body
    std::string out;
    out += "rg:" + VL_TO_STRING(__PVT__rg);
    out += ", "+ Vpools_top_uvm_pkg__03a__03auvm_reg_sequence__Tz282::to_string_middle();
    return (out);
}
