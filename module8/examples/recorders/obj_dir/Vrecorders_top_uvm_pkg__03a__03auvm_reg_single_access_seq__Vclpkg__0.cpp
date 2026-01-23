// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrecorders_top.h for the primary calling header

#include "Vrecorders_top__pch.h"

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_single_access_seq__Vclpkg::__VnoInFunc_get_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_registry__pi158> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vrecorders_top_uvm_pkg__03a__03auvm_reg_single_access_seq__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_registry__pi158> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi158__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_single_access_seq__Vclpkg::__VnoInFunc_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vrecorders_top_uvm_pkg__03a__03auvm_reg_single_access_seq__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_reg_single_access_seq"s;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_single_access_seq::__VnoInFunc_get_object_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_single_access_seq::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_registry__pi158> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi158__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_single_access_seq::__VnoInFunc_create(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_single_access_seq::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_single_access_seq> tmp;
    tmp = ((""s == name) ? VL_NEW(Vrecorders_top_uvm_pkg__03a__03auvm_reg_single_access_seq, vlProcess, vlSymsp, "uvm_reg_single_access_seq"s)
            : VL_NEW(Vrecorders_top_uvm_pkg__03a__03auvm_reg_single_access_seq, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_single_access_seq::__VnoInFunc_get_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_single_access_seq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_single_access_seq"s;
}

Vrecorders_top_uvm_pkg__03a__03auvm_reg_single_access_seq::Vrecorders_top_uvm_pkg__03a__03auvm_reg_single_access_seq(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name)
    : Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_single_access_seq::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

VlCoroutine Vrecorders_top_uvm_pkg__03a__03auvm_reg_single_access_seq::__VnoInFunc_body(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_single_access_seq::__VnoInFunc_body\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__4__Vfuncout;
    __Vfunc_uvm_report_enabled__4__Vfuncout = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_resource__Tz42> __Vfunc_get_by_name__6__Vfuncout;
    std::string __Vtask_get_full_name__7__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_resource__Tz42> __Vfunc_get_by_name__8__Vfuncout;
    std::string __Vtask_get_full_name__9__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_backdoor> __Vtask_get_backdoor__10__Vfuncout;
    CData/*0:0*/ __Vtask_has_hdl_path__11__Vfuncout;
    __Vtask_has_hdl_path__11__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__12__Vfuncout;
    __Vfunc_uvm_report_enabled__12__Vfuncout = 0;
    std::string __Vtask_get_full_name__14__Vfuncout;
    std::string __Vtask_get_access__17__Vfuncout;
    CData/*0:0*/ __Vtask_is_known_access__18__Vfuncout;
    __Vtask_is_known_access__18__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__19__Vfuncout;
    __Vfunc_uvm_report_enabled__19__Vfuncout = 0;
    std::string __Vtask_get_full_name__21__Vfuncout;
    std::string __Vtask_get_access__22__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__23__Vfuncout;
    __Vfunc_uvm_report_enabled__23__Vfuncout = 0;
    std::string __Vtask_get_full_name__25__Vfuncout;
    std::string __Vtask_get_full_name__26__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__27__Vfuncout;
    __Vfunc_uvm_report_enabled__27__Vfuncout = 0;
    std::string __Vtask_get_full_name__29__Vfuncout;
    std::string __Vtask_get_full_name__30__Vfuncout;
    QData/*63:0*/ __Vtask_get__31__Vfuncout;
    __Vtask_get__31__Vfuncout = 0;
    IData/*31:0*/ __Vtask_write__32__status;
    __Vtask_write__32__status = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__33__Vfuncout;
    __Vfunc_uvm_report_enabled__33__Vfuncout = 0;
    std::string __Vtask_get_full_name__35__Vfuncout;
    std::string __Vtask_get_full_name__36__Vfuncout;
    IData/*31:0*/ __Vtask_mirror__37__status;
    __Vtask_mirror__37__status = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> __Vfunc_backdoor__38__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__39__Vfuncout;
    __Vfunc_uvm_report_enabled__39__Vfuncout = 0;
    std::string __Vtask_get_full_name__41__Vfuncout;
    IData/*31:0*/ __Vtask_write__42__status;
    __Vtask_write__42__status = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__43__Vfuncout;
    __Vfunc_uvm_report_enabled__43__Vfuncout = 0;
    std::string __Vtask_get_full_name__45__Vfuncout;
    IData/*31:0*/ __Vtask_mirror__46__status;
    __Vtask_mirror__46__status = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__47__Vfuncout;
    __Vfunc_uvm_report_enabled__47__Vfuncout = 0;
    std::string __Vtask_get_full_name__49__Vfuncout;
    std::string __Vtask_get_full_name__50__Vfuncout;
    // Body
    VL_KEEP_THIS;
    VlQueue<VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_field>> unnamedblk1__DOT__fields;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__k;
    unnamedblk1__DOT__unnamedblk2__DOT__k = 0;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__ro;
    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__ro = 0;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j;
    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0;
    IData/*31:0*/ unnamedblk5__DOT__j;
    unnamedblk5__DOT__j = 0;
    IData/*31:0*/ unnamedblk5__DOT__unnamedblk6__DOT__status;
    unnamedblk5__DOT__unnamedblk6__DOT__status = 0;
    QData/*63:0*/ unnamedblk5__DOT__unnamedblk6__DOT__v;
    unnamedblk5__DOT__unnamedblk6__DOT__v = 0;
    QData/*63:0*/ unnamedblk5__DOT__unnamedblk6__DOT__exp;
    unnamedblk5__DOT__unnamedblk6__DOT__exp = 0;
    VlQueue<VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map>> maps;
    {
        if ((VlNull{} == this->__PVT__rg)) {
            if ((0U != ([&]() {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_access_seq"s, __Vfunc_uvm_report_enabled__4__Vfuncout);
                        }(), __Vfunc_uvm_report_enabled__4__Vfuncout))) {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_access_seq"s, "No register specified to run sequence on"s, 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh"s, 0x00000052U, ""s, 1U);
            }
            goto __Vlabel0;
        }
        if (((VlNull{} != ([&]() {
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz42__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                VL_NULL_CHECK(this->__PVT__rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 87)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__7__Vfuncout);
                                            }(), __Vtask_get_full_name__7__Vfuncout))), "NO_REG_TESTS"s, 0U, __Vfunc_get_by_name__6__Vfuncout);
                        }(), __Vfunc_get_by_name__6__Vfuncout)) 
             || (VlNull{} != ([&]() {
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz42__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                VL_NULL_CHECK(this->__PVT__rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 89)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__9__Vfuncout);
                                            }(), __Vtask_get_full_name__9__Vfuncout))), "NO_REG_ACCESS_TEST"s, 0U, __Vfunc_get_by_name__8__Vfuncout);
                        }(), __Vfunc_get_by_name__8__Vfuncout)))) {
            goto __Vlabel0;
        }
        if (((VlNull{} == ([&]() {
                            VL_NULL_CHECK(this->__PVT__rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 94)
                           ->__VnoInFunc_get_backdoor(vlSymsp, 1U, __Vtask_get_backdoor__10__Vfuncout);
                        }(), __Vtask_get_backdoor__10__Vfuncout)) 
             && (1U & (~ ([&]() {
                                VL_NULL_CHECK(this->__PVT__rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 94)
                          ->__VnoInFunc_has_hdl_path(vlSymsp, ""s, __Vtask_has_hdl_path__11__Vfuncout);
                            }(), (IData)(__Vtask_has_hdl_path__11__Vfuncout)))))) {
            if ((0U != ([&]() {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_access_seq"s, __Vfunc_uvm_report_enabled__12__Vfuncout);
                        }(), __Vfunc_uvm_report_enabled__12__Vfuncout))) {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_access_seq"s, 
                                                   VL_CVT_PACK_STR_NN(
                                                                      VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register '"s, 
                                                                                ([&]() {
                                        VL_NULL_CHECK(this->__PVT__rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 96)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__14__Vfuncout);
                                    }(), __Vtask_get_full_name__14__Vfuncout)), "' does not have a backdoor mechanism available"s)), 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh"s, 0x00000060U, ""s, 1U);
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 101)->__VnoInFunc_get_maps(vlSymsp, maps);
        VL_NULL_CHECK(this->__PVT__rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 107)->__VnoInFunc_get_fields(vlSymsp, unnamedblk1__DOT__fields);
        unnamedblk1__DOT__unnamedblk2__DOT__k = 0U;
        while (VL_LTS_III(32, unnamedblk1__DOT__unnamedblk2__DOT__k, maps.size())) {
            unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__ro = 0U;
            unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0U;
            while (VL_LTS_III(32, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j, unnamedblk1__DOT__fields.size())) {
                if (("RO"s == ([&]() {
                                VL_NULL_CHECK(unnamedblk1__DOT__fields.at(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 112)
                               ->__VnoInFunc_get_access(vlProcess, vlSymsp, maps.at(unnamedblk1__DOT__unnamedblk2__DOT__k), __Vtask_get_access__17__Vfuncout);
                            }(), __Vtask_get_access__17__Vfuncout))) {
                    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__ro 
                        = ((IData)(1U) + unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__ro);
                }
                if ((1U & (~ ([&]() {
                                    VL_NULL_CHECK(unnamedblk1__DOT__fields.at(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 115)
                              ->__VnoInFunc_is_known_access(vlProcess, vlSymsp, maps.at(unnamedblk1__DOT__unnamedblk2__DOT__k), __Vtask_is_known_access__18__Vfuncout);
                                }(), (IData)(__Vtask_is_known_access__18__Vfuncout))))) {
                    if ((0U != ([&]() {
                                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "uvm_reg_access_seq"s, __Vfunc_uvm_report_enabled__19__Vfuncout);
                                }(), __Vfunc_uvm_report_enabled__19__Vfuncout))) {
                        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "uvm_reg_access_seq"s, 
                                                             VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register '"s, 
                                                                                ([&]() {
                                                        VL_NULL_CHECK(this->__PVT__rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 118)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__21__Vfuncout);
                                                    }(), __Vtask_get_full_name__21__Vfuncout)), "' has field with unknown access type '"s), 
                                                                                ([&]() {
                                                VL_NULL_CHECK(unnamedblk1__DOT__fields.at(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 118)
                                                                                ->__VnoInFunc_get_access(vlProcess, vlSymsp, maps.at(unnamedblk1__DOT__unnamedblk2__DOT__k), __Vtask_get_access__22__Vfuncout);
                                            }(), __Vtask_get_access__22__Vfuncout)), "', skipping"s)), 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh"s, 0x00000076U, ""s, 1U);
                    }
                    goto __Vlabel0;
                }
                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j 
                    = ((IData)(1U) + unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j);
            }
            if ((unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__ro 
                 == unnamedblk1__DOT__fields.size())) {
                if ((0U != ([&]() {
                                this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "uvm_reg_access_seq"s, __Vfunc_uvm_report_enabled__23__Vfuncout);
                            }(), __Vfunc_uvm_report_enabled__23__Vfuncout))) {
                    this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "uvm_reg_access_seq"s, 
                                                         VL_CVT_PACK_STR_NN(
                                                                            VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register '"s, 
                                                                                ([&]() {
                                                    VL_NULL_CHECK(this->__PVT__rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 124)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__25__Vfuncout);
                                                }(), __Vtask_get_full_name__25__Vfuncout)), "' has only RO fields in map "s), 
                                                                                ([&]() {
                                            VL_NULL_CHECK(maps.at(unnamedblk1__DOT__unnamedblk2__DOT__k), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 124)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__26__Vfuncout);
                                        }(), __Vtask_get_full_name__26__Vfuncout)), ", skipping"s)), 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh"s, 0x0000007cU, ""s, 1U);
                }
                goto __Vlabel0;
            }
            unnamedblk1__DOT__unnamedblk2__DOT__k = 
                ((IData)(1U) + unnamedblk1__DOT__unnamedblk2__DOT__k);
        }
        unnamedblk5__DOT__j = 0U;
        while (VL_LTS_III(32, unnamedblk5__DOT__j, maps.size())) {
            if ((0U != ([&]() {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "uvm_reg_access_seq"s, __Vfunc_uvm_report_enabled__27__Vfuncout);
                        }(), __Vfunc_uvm_report_enabled__27__Vfuncout))) {
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "uvm_reg_access_seq"s, 
                                                  VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Verifying access of register '"s, 
                                                                                ([&]() {
                                                VL_NULL_CHECK(this->__PVT__rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 141)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__29__Vfuncout);
                                            }(), __Vtask_get_full_name__29__Vfuncout)), "' in map '"s), 
                                                                                ([&]() {
                                        VL_NULL_CHECK(maps.at(unnamedblk5__DOT__j), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 141)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__30__Vfuncout);
                                    }(), __Vtask_get_full_name__30__Vfuncout)), "' ..."s)), 0x00000064U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh"s, 0x0000008dU, ""s, 1U);
            }
            VL_NULL_CHECK(this->__PVT__rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 143)->__VnoInFunc_get(vlProcess, vlSymsp, ""s, 0U, __Vtask_get__31__Vfuncout);
            unnamedblk5__DOT__unnamedblk6__DOT__v = __Vtask_get__31__Vfuncout;
            co_await VL_NULL_CHECK(this->__PVT__rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 145)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__32__status, 
                                                                                (~ unnamedblk5__DOT__unnamedblk6__DOT__v), 0U, maps.at(unnamedblk5__DOT__j), 
                                                                                VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_single_access_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
            unnamedblk5__DOT__unnamedblk6__DOT__status 
                = __Vtask_write__32__status;
            if ((0U != unnamedblk5__DOT__unnamedblk6__DOT__status)) {
                if ((0U != ([&]() {
                                this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_access_seq"s, __Vfunc_uvm_report_enabled__33__Vfuncout);
                            }(), __Vfunc_uvm_report_enabled__33__Vfuncout))) {
                    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_access_seq"s, 
                                                       VL_CVT_PACK_STR_NN(
                                                                          VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Status was '"s, 
                                                                                Vrecorders_top___024unit::__Venumtab_enum_name83
                                                                                [
                                                                                (3U 
                                                                                & unnamedblk5__DOT__unnamedblk6__DOT__status)]), "' when writing '"s), 
                                                                                ([&]() {
                                                    VL_NULL_CHECK(this->__PVT__rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 150)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__35__Vfuncout);
                                                }(), __Vtask_get_full_name__35__Vfuncout)), "' through map '"s), 
                                                                                ([&]() {
                                            VL_NULL_CHECK(maps.at(unnamedblk5__DOT__j), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 150)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__36__Vfuncout);
                                        }(), __Vtask_get_full_name__36__Vfuncout)), "'"s)), 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh"s, 0x00000096U, ""s, 1U);
                }
            }
            co_await vlSymsp->TOP.__VdlySched.delay(1ULL, 
                                                    vlProcess, 
                                                    "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 
                                                    152);
            co_await VL_NULL_CHECK(this->__PVT__rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 154)->__VnoInFunc_mirror(vlProcess, vlSymsp, __Vtask_mirror__37__status, 1U, 1U, 
                                                                                ([&]() {
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_map__Vclpkg.__VnoInFunc_backdoor(vlProcess, vlSymsp, __Vfunc_backdoor__38__Vfuncout);
                    }(), __Vfunc_backdoor__38__Vfuncout), 
                                                                                VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_single_access_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
            unnamedblk5__DOT__unnamedblk6__DOT__status 
                = __Vtask_mirror__37__status;
            if ((0U != unnamedblk5__DOT__unnamedblk6__DOT__status)) {
                if ((0U != ([&]() {
                                this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_access_seq"s, __Vfunc_uvm_report_enabled__39__Vfuncout);
                            }(), __Vfunc_uvm_report_enabled__39__Vfuncout))) {
                    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_access_seq"s, 
                                                       VL_CVT_PACK_STR_NN(
                                                                          VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Status was '"s, 
                                                                                Vrecorders_top___024unit::__Venumtab_enum_name83
                                                                                [
                                                                                (3U 
                                                                                & unnamedblk5__DOT__unnamedblk6__DOT__status)]), "' when reading reset value of register '"s), 
                                                                                ([&]() {
                                            VL_NULL_CHECK(this->__PVT__rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 158)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__41__Vfuncout);
                                        }(), __Vtask_get_full_name__41__Vfuncout)), "' through backdoor"s)), 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh"s, 0x0000009eU, ""s, 1U);
                }
            }
            co_await VL_NULL_CHECK(this->__PVT__rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 161)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__42__status, unnamedblk5__DOT__unnamedblk6__DOT__v, 1U, maps.at(unnamedblk5__DOT__j), 
                                                                                VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_single_access_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
            unnamedblk5__DOT__unnamedblk6__DOT__status 
                = __Vtask_write__42__status;
            if ((0U != unnamedblk5__DOT__unnamedblk6__DOT__status)) {
                if ((0U != ([&]() {
                                this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_access_seq"s, __Vfunc_uvm_report_enabled__43__Vfuncout);
                            }(), __Vfunc_uvm_report_enabled__43__Vfuncout))) {
                    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_access_seq"s, 
                                                       VL_CVT_PACK_STR_NN(
                                                                          VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Status was '"s, 
                                                                                Vrecorders_top___024unit::__Venumtab_enum_name83
                                                                                [
                                                                                (3U 
                                                                                & unnamedblk5__DOT__unnamedblk6__DOT__status)]), "' when writing '"s), 
                                                                                ([&]() {
                                            VL_NULL_CHECK(this->__PVT__rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 165)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__45__Vfuncout);
                                        }(), __Vtask_get_full_name__45__Vfuncout)), "' through backdoor"s)), 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh"s, 0x000000a5U, ""s, 1U);
                }
            }
            co_await VL_NULL_CHECK(this->__PVT__rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 168)->__VnoInFunc_mirror(vlProcess, vlSymsp, __Vtask_mirror__46__status, 1U, 0U, maps.at(unnamedblk5__DOT__j), 
                                                                                VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_single_access_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
            unnamedblk5__DOT__unnamedblk6__DOT__status 
                = __Vtask_mirror__46__status;
            if ((0U != unnamedblk5__DOT__unnamedblk6__DOT__status)) {
                if ((0U != ([&]() {
                                this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_access_seq"s, __Vfunc_uvm_report_enabled__47__Vfuncout);
                            }(), __Vfunc_uvm_report_enabled__47__Vfuncout))) {
                    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_access_seq"s, 
                                                       VL_CVT_PACK_STR_NN(
                                                                          VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Status was '"s, 
                                                                                Vrecorders_top___024unit::__Venumtab_enum_name83
                                                                                [
                                                                                (3U 
                                                                                & unnamedblk5__DOT__unnamedblk6__DOT__status)]), "' when reading reset value of register '"s), 
                                                                                ([&]() {
                                                    VL_NULL_CHECK(this->__PVT__rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 173)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__49__Vfuncout);
                                                }(), __Vtask_get_full_name__49__Vfuncout)), "' through map '"s), 
                                                                                ([&]() {
                                            VL_NULL_CHECK(maps.at(unnamedblk5__DOT__j), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh", 173)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__50__Vfuncout);
                                        }(), __Vtask_get_full_name__50__Vfuncout)), "'"s)), 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_access_seq.svh"s, 0x000000adU, ""s, 1U);
                }
            }
            unnamedblk5__DOT__j = ((IData)(1U) + unnamedblk5__DOT__j);
        }
        __Vlabel0: ;
    }
    co_return;}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_single_access_seq::__VnoInFunc_randomize(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_single_access_seq::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__52__Vfuncout;
    __Vfunc___VBasicRand__52__Vfuncout = 0;
    // Body
    Vrecorders_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vrecorders_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__52__Vfuncout);
            }(), __Vfunc___VBasicRand__52__Vfuncout));
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_single_access_seq::__VnoInFunc___Vsetup_constraints(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_single_access_seq::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_single_access_seq::__VnoInFunc___VBasicRand(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_single_access_seq::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_single_access_seq::_ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_single_access_seq::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vrecorders_top_uvm_pkg__03a__03auvm_reg_single_access_seq::~Vrecorders_top_uvm_pkg__03a__03auvm_reg_single_access_seq() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_single_access_seq::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_single_access_seq>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_single_access_seq::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vrecorders_top_uvm_pkg__03a__03auvm_reg_single_access_seq::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_single_access_seq::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vrecorders_top_uvm_pkg__03a__03auvm_reg_single_access_seq::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_single_access_seq::to_string_middle\n"); );
    // Body
    std::string out;
    out += "rg:" + VL_TO_STRING(__PVT__rg);
    out += ", "+ Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284::to_string_middle();
    return (out);
}
