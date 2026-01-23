// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrecorders_top.h for the primary calling header

#include "Vrecorders_top__pch.h"

void Vrecorders_top_uvm_pkg__03a__03auvm_mem_single_walk_seq__Vclpkg::__VnoInFunc_get_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_registry__pi154> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vrecorders_top_uvm_pkg__03a__03auvm_mem_single_walk_seq__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_registry__pi154> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi154__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_mem_single_walk_seq__Vclpkg::__VnoInFunc_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vrecorders_top_uvm_pkg__03a__03auvm_mem_single_walk_seq__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_mem_single_walk_seq"s;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_mem_single_walk_seq::__VnoInFunc_get_object_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_mem_single_walk_seq::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_registry__pi154> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi154__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_mem_single_walk_seq::__VnoInFunc_create(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_mem_single_walk_seq::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_mem_single_walk_seq> tmp;
    tmp = ((""s == name) ? VL_NEW(Vrecorders_top_uvm_pkg__03a__03auvm_mem_single_walk_seq, vlProcess, vlSymsp, "uvm_mem_walk_seq"s)
            : VL_NEW(Vrecorders_top_uvm_pkg__03a__03auvm_mem_single_walk_seq, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_mem_single_walk_seq::__VnoInFunc_get_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_mem_single_walk_seq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_mem_single_walk_seq"s;
}

Vrecorders_top_uvm_pkg__03a__03auvm_mem_single_walk_seq::Vrecorders_top_uvm_pkg__03a__03auvm_mem_single_walk_seq(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name)
    : Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_mem_single_walk_seq::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

VlCoroutine Vrecorders_top_uvm_pkg__03a__03auvm_mem_single_walk_seq::__VnoInFunc_body(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_mem_single_walk_seq::__VnoInFunc_body\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__4__Vfuncout;
    __Vfunc_uvm_report_enabled__4__Vfuncout = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_resource__Tz42> __Vfunc_get_by_name__6__Vfuncout;
    std::string __Vtask_get_full_name__7__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_resource__Tz42> __Vfunc_get_by_name__8__Vfuncout;
    std::string __Vtask_get_full_name__9__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_resource__Tz42> __Vfunc_get_by_name__10__Vfuncout;
    std::string __Vtask_get_full_name__11__Vfuncout;
    IData/*31:0*/ __Vtask_get_n_bits__12__Vfuncout;
    __Vtask_get_n_bits__12__Vfuncout = 0;
    std::string __Vtask_get_access__14__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__15__Vfuncout;
    __Vfunc_uvm_report_enabled__15__Vfuncout = 0;
    std::string __Vtask_get_full_name__17__Vfuncout;
    std::string __Vtask_get_full_name__18__Vfuncout;
    QData/*63:0*/ __Vtask_get_size__19__Vfuncout;
    __Vtask_get_size__19__Vfuncout = 0;
    IData/*31:0*/ __Vtask_write__20__status;
    __Vtask_write__20__status = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__21__Vfuncout;
    __Vfunc_uvm_report_enabled__21__Vfuncout = 0;
    std::string __Vtask_get_full_name__23__Vfuncout;
    std::string __Vtask_get_full_name__24__Vfuncout;
    IData/*31:0*/ __Vtask_read__25__status;
    __Vtask_read__25__status = 0;
    QData/*63:0*/ __Vtask_read__25__value;
    __Vtask_read__25__value = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__26__Vfuncout;
    __Vfunc_uvm_report_enabled__26__Vfuncout = 0;
    std::string __Vtask_get_full_name__28__Vfuncout;
    std::string __Vtask_get_full_name__29__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__30__Vfuncout;
    __Vfunc_uvm_report_enabled__30__Vfuncout = 0;
    std::string __Vtask_get_full_name__32__Vfuncout;
    IData/*31:0*/ __Vtask_write__33__status;
    __Vtask_write__33__status = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__34__Vfuncout;
    __Vfunc_uvm_report_enabled__34__Vfuncout = 0;
    std::string __Vtask_get_full_name__36__Vfuncout;
    std::string __Vtask_get_full_name__37__Vfuncout;
    QData/*63:0*/ __Vtask_get_size__38__Vfuncout;
    __Vtask_get_size__38__Vfuncout = 0;
    IData/*31:0*/ __Vtask_read__39__status;
    __Vtask_read__39__status = 0;
    QData/*63:0*/ __Vtask_read__39__value;
    __Vtask_read__39__value = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__40__Vfuncout;
    __Vfunc_uvm_report_enabled__40__Vfuncout = 0;
    std::string __Vtask_get_full_name__42__Vfuncout;
    std::string __Vtask_get_full_name__43__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__44__Vfuncout;
    __Vfunc_uvm_report_enabled__44__Vfuncout = 0;
    std::string __Vtask_get_full_name__46__Vfuncout;
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
    std::string __Vtemp_14;
    std::string __Vtemp_15;
    std::string __Vtemp_16;
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1__DOT__j;
    unnamedblk1__DOT__j = 0;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__status;
    unnamedblk1__DOT__unnamedblk2__DOT__status = 0;
    QData/*63:0*/ unnamedblk1__DOT__unnamedblk2__DOT__val;
    unnamedblk1__DOT__unnamedblk2__DOT__val = 0;
    QData/*63:0*/ unnamedblk1__DOT__unnamedblk2__DOT__exp;
    unnamedblk1__DOT__unnamedblk2__DOT__exp = 0;
    QData/*63:0*/ unnamedblk1__DOT__unnamedblk2__DOT__v;
    unnamedblk1__DOT__unnamedblk2__DOT__v = 0;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k;
    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k = 0;
    VlQueue<VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map>> maps;
    IData/*31:0*/ n_bits;
    n_bits = 0;
    {
        if ((VlNull{} == this->__PVT__mem)) {
            if ((0U != ([&]() {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_walk_seq"s, __Vfunc_uvm_report_enabled__4__Vfuncout);
                        }(), __Vfunc_uvm_report_enabled__4__Vfuncout))) {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_walk_seq"s, "No memory specified to run sequence on"s, 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh"s, 0x00000061U, ""s, 1U);
            }
            goto __Vlabel0;
        }
        if ((((VlNull{} != ([&]() {
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz42__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                    VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 102)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__7__Vfuncout);
                                                }(), __Vtask_get_full_name__7__Vfuncout))), "NO_REG_TESTS"s, 0U, __Vfunc_get_by_name__6__Vfuncout);
                            }(), __Vfunc_get_by_name__6__Vfuncout)) 
              || (VlNull{} != ([&]() {
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz42__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                    VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 104)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__9__Vfuncout);
                                                }(), __Vtask_get_full_name__9__Vfuncout))), "NO_MEM_TESTS"s, 0U, __Vfunc_get_by_name__8__Vfuncout);
                            }(), __Vfunc_get_by_name__8__Vfuncout))) 
             || (VlNull{} != ([&]() {
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz42__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 106)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__11__Vfuncout);
                                            }(), __Vtask_get_full_name__11__Vfuncout))), "NO_MEM_WALK_TEST"s, 0U, __Vfunc_get_by_name__10__Vfuncout);
                        }(), __Vfunc_get_by_name__10__Vfuncout)))) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 110)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__12__Vfuncout);
        n_bits = __Vtask_get_n_bits__12__Vfuncout;
        VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 113)->__VnoInFunc_get_maps(vlSymsp, maps);
        unnamedblk1__DOT__j = 0U;
        while (VL_LTS_III(32, unnamedblk1__DOT__j, maps.size())) {
            {
                if (("RW"s != ([&]() {
                                VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 121)
                               ->__VnoInFunc_get_access(vlProcess, vlSymsp, maps.at(unnamedblk1__DOT__j), __Vtask_get_access__14__Vfuncout);
                            }(), __Vtask_get_access__14__Vfuncout))) {
                    goto __Vlabel1;
                }
                if ((0U != ([&]() {
                                this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "uvm_mem_walk_seq"s, __Vfunc_uvm_report_enabled__15__Vfuncout);
                            }(), __Vfunc_uvm_report_enabled__15__Vfuncout))) {
                    __Vtemp_1 = ([&]() {
                            VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 124)
                                 ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__17__Vfuncout);
                        }(), __Vtask_get_full_name__17__Vfuncout);
                    __Vtemp_2 = ([&]() {
                            VL_NULL_CHECK(maps.at(unnamedblk1__DOT__j), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 124)
                                 ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__18__Vfuncout);
                        }(), __Vtask_get_full_name__18__Vfuncout);
                    this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "uvm_mem_walk_seq"s, VL_SFORMATF_N_NX("Walking memory %@ in map \"%@\"...",0,
                                                                                -1,
                                                                                &(__Vtemp_1),
                                                                                -1,
                                                                                &(__Vtemp_2)) , 0x00000064U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh"s, 0x0000007cU, ""s, 1U);
                }
                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k = 0U;
                while (((QData)((IData)(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k)) 
                        < ([&]() {
                                VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 131)
                           ->__VnoInFunc_get_size(vlSymsp, __Vtask_get_size__19__Vfuncout);
                            }(), __Vtask_get_size__19__Vfuncout))) {
                    co_await VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 132)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__20__status, 
                                                                                VL_EXTENDS_QI(64,32, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k), 
                                                                                (~ 
                                                                                VL_EXTENDS_QI(64,32, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k)), 0U, maps.at(unnamedblk1__DOT__j), 
                                                                                VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_mem_single_walk_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
                    unnamedblk1__DOT__unnamedblk2__DOT__status 
                        = __Vtask_write__20__status;
                    if ((0U != unnamedblk1__DOT__unnamedblk2__DOT__status)) {
                        if ((0U != ([&]() {
                                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_walk_seq"s, __Vfunc_uvm_report_enabled__21__Vfuncout);
                                    }(), __Vfunc_uvm_report_enabled__21__Vfuncout))) {
                            __Vtemp_3 = Vrecorders_top___024unit::__Venumtab_enum_name83
                                [(3U & unnamedblk1__DOT__unnamedblk2__DOT__status)];
                            __Vtemp_4 = ([&]() {
                                    VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 136)
                                         ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__23__Vfuncout);
                                }(), __Vtask_get_full_name__23__Vfuncout);
                            __Vtemp_5 = ([&]() {
                                    VL_NULL_CHECK(maps.at(unnamedblk1__DOT__j), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 136)
                                         ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__24__Vfuncout);
                                }(), __Vtask_get_full_name__24__Vfuncout);
                            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_walk_seq"s, VL_SFORMATF_N_NX("Status was %@ when writing \"%@[%0d]\" through map \"%@\".",0,
                                                                                -1,
                                                                                &(__Vtemp_3),
                                                                                -1,
                                                                                &(__Vtemp_4),
                                                                                32,
                                                                                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k,
                                                                                -1,
                                                                                &(__Vtemp_5)) , 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh"s, 0x00000088U, ""s, 1U);
                        }
                    }
                    if (VL_LTS_III(32, 0U, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k)) {
                        co_await VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 140)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__25__status, 
                                                                                (VL_EXTENDS_QI(64,32, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k) 
                                                                                - 1ULL), __Vtask_read__25__value, 0U, maps.at(unnamedblk1__DOT__j), 
                                                                                VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_mem_single_walk_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
                        unnamedblk1__DOT__unnamedblk2__DOT__status 
                            = __Vtask_read__25__status;
                        unnamedblk1__DOT__unnamedblk2__DOT__val 
                            = __Vtask_read__25__value;
                        if ((0U != unnamedblk1__DOT__unnamedblk2__DOT__status)) {
                            if ((0U != ([&]() {
                                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_walk_seq"s, __Vfunc_uvm_report_enabled__26__Vfuncout);
                                        }(), __Vfunc_uvm_report_enabled__26__Vfuncout))) {
                                __Vtemp_6 = Vrecorders_top___024unit::__Venumtab_enum_name83
                                    [(3U & unnamedblk1__DOT__unnamedblk2__DOT__status)];
                                __Vtemp_7 = ([&]() {
                                        VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 143)
                                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__28__Vfuncout);
                                    }(), __Vtask_get_full_name__28__Vfuncout);
                                __Vtemp_8 = ([&]() {
                                        VL_NULL_CHECK(maps.at(unnamedblk1__DOT__j), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 143)
                                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__29__Vfuncout);
                                    }(), __Vtask_get_full_name__29__Vfuncout);
                                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_walk_seq"s, VL_SFORMATF_N_NX("Status was %@ when reading \"%@[%0d]\" through map \"%@\".",0,
                                                                                -1,
                                                                                &(__Vtemp_6),
                                                                                -1,
                                                                                &(__Vtemp_7),
                                                                                32,
                                                                                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k,
                                                                                -1,
                                                                                &(__Vtemp_8)) , 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh"s, 0x0000008fU, ""s, 1U);
                            }
                        } else {
                            unnamedblk1__DOT__unnamedblk2__DOT__exp 
                                = ((~ ((QData)((IData)(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k)) 
                                       - 1ULL)) & (
                                                   VL_SHIFTL_QQI(64,64,32, 1ULL, n_bits) 
                                                   - 1ULL));
                            if ((unnamedblk1__DOT__unnamedblk2__DOT__val 
                                 != unnamedblk1__DOT__unnamedblk2__DOT__exp)) {
                                if ((0U != ([&]() {
                                                this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_walk_seq"s, __Vfunc_uvm_report_enabled__30__Vfuncout);
                                            }(), __Vfunc_uvm_report_enabled__30__Vfuncout))) {
                                    __Vtemp_9 = ([&]() {
                                            VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 149)
                                                 ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__32__Vfuncout);
                                        }(), __Vtask_get_full_name__32__Vfuncout);
                                    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_walk_seq"s, VL_SFORMATF_N_NX("\"%@[%0d]\" read back as 'h%x instead of 'h%x.",0,
                                                                                -1,
                                                                                &(__Vtemp_9),
                                                                                32,
                                                                                (unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k 
                                                                                - (IData)(1U)),
                                                                                64,
                                                                                unnamedblk1__DOT__unnamedblk2__DOT__val,
                                                                                64,
                                                                                unnamedblk1__DOT__unnamedblk2__DOT__exp) , 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh"s, 0x00000095U, ""s, 1U);
                                }
                            }
                        }
                        co_await VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 154)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__33__status, 
                                                                                (VL_EXTENDS_QI(64,32, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k) 
                                                                                - 1ULL), 
                                                                                (VL_EXTENDS_QI(64,32, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k) 
                                                                                - 1ULL), 0U, maps.at(unnamedblk1__DOT__j), 
                                                                                VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_mem_single_walk_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
                        unnamedblk1__DOT__unnamedblk2__DOT__status 
                            = __Vtask_write__33__status;
                        if ((0U != unnamedblk1__DOT__unnamedblk2__DOT__status)) {
                            if ((0U != ([&]() {
                                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_walk_seq"s, __Vfunc_uvm_report_enabled__34__Vfuncout);
                                        }(), __Vfunc_uvm_report_enabled__34__Vfuncout))) {
                                __Vtemp_10 = Vrecorders_top___024unit::__Venumtab_enum_name83
                                    [(3U & unnamedblk1__DOT__unnamedblk2__DOT__status)];
                                __Vtemp_11 = ([&]() {
                                        VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 157)
                                              ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__36__Vfuncout);
                                    }(), __Vtask_get_full_name__36__Vfuncout);
                                __Vtemp_12 = ([&]() {
                                        VL_NULL_CHECK(maps.at(unnamedblk1__DOT__j), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 157)
                                              ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__37__Vfuncout);
                                    }(), __Vtask_get_full_name__37__Vfuncout);
                                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_walk_seq"s, VL_SFORMATF_N_NX("Status was %@ when writing \"%@[%0d]\" through map \"%@\".",0,
                                                                                -1,
                                                                                &(__Vtemp_10),
                                                                                -1,
                                                                                &(__Vtemp_11),
                                                                                32,
                                                                                (unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k 
                                                                                - (IData)(1U)),
                                                                                -1,
                                                                                &(__Vtemp_12)) , 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh"s, 0x0000009dU, ""s, 1U);
                            }
                        }
                    }
                    if (((QData)((IData)(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k)) 
                         == (([&]() {
                                        VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 161)
                              ->__VnoInFunc_get_size(vlSymsp, __Vtask_get_size__38__Vfuncout);
                                    }(), __Vtask_get_size__38__Vfuncout) 
                             - 1ULL))) {
                        co_await VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 162)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__39__status, 
                                                                                VL_EXTENDS_QI(64,32, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k), __Vtask_read__39__value, 0U, maps.at(unnamedblk1__DOT__j), 
                                                                                VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_mem_single_walk_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
                        unnamedblk1__DOT__unnamedblk2__DOT__status 
                            = __Vtask_read__39__status;
                        unnamedblk1__DOT__unnamedblk2__DOT__val 
                            = __Vtask_read__39__value;
                        if ((0U != unnamedblk1__DOT__unnamedblk2__DOT__status)) {
                            if ((0U != ([&]() {
                                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_walk_seq"s, __Vfunc_uvm_report_enabled__40__Vfuncout);
                                        }(), __Vfunc_uvm_report_enabled__40__Vfuncout))) {
                                __Vtemp_13 = Vrecorders_top___024unit::__Venumtab_enum_name83
                                    [(3U & unnamedblk1__DOT__unnamedblk2__DOT__status)];
                                __Vtemp_14 = ([&]() {
                                        VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 165)
                                              ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__42__Vfuncout);
                                    }(), __Vtask_get_full_name__42__Vfuncout);
                                __Vtemp_15 = ([&]() {
                                        VL_NULL_CHECK(maps.at(unnamedblk1__DOT__j), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 165)
                                              ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__43__Vfuncout);
                                    }(), __Vtask_get_full_name__43__Vfuncout);
                                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_walk_seq"s, VL_SFORMATF_N_NX("Status was %@ when reading \"%@[%0d]\" through map \"%@\".",0,
                                                                                -1,
                                                                                &(__Vtemp_13),
                                                                                -1,
                                                                                &(__Vtemp_14),
                                                                                32,
                                                                                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k,
                                                                                -1,
                                                                                &(__Vtemp_15)) , 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh"s, 0x000000a5U, ""s, 1U);
                            }
                        } else {
                            unnamedblk1__DOT__unnamedblk2__DOT__exp 
                                = ((~ (QData)((IData)(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k))) 
                                   & (VL_SHIFTL_QQI(64,64,32, 1ULL, n_bits) 
                                      - 1ULL));
                            if ((unnamedblk1__DOT__unnamedblk2__DOT__val 
                                 != unnamedblk1__DOT__unnamedblk2__DOT__exp)) {
                                if ((0U != ([&]() {
                                                this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_walk_seq"s, __Vfunc_uvm_report_enabled__44__Vfuncout);
                                            }(), __Vfunc_uvm_report_enabled__44__Vfuncout))) {
                                    __Vtemp_16 = ([&]() {
                                            VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 171)
                                                  ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__46__Vfuncout);
                                        }(), __Vtask_get_full_name__46__Vfuncout);
                                    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_walk_seq"s, VL_SFORMATF_N_NX("\"%@[%0d]\" read back as 'h%x instead of 'h%x.",0,
                                                                                -1,
                                                                                &(__Vtemp_16),
                                                                                32,
                                                                                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k,
                                                                                64,
                                                                                unnamedblk1__DOT__unnamedblk2__DOT__val,
                                                                                64,
                                                                                unnamedblk1__DOT__unnamedblk2__DOT__exp) , 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh"s, 0x000000abU, ""s, 1U);
                                }
                            }
                        }
                    }
                    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k 
                        = ((IData)(1U) + unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k);
                }
                __Vlabel1: ;
            }
            unnamedblk1__DOT__j = ((IData)(1U) + unnamedblk1__DOT__j);
        }
        __Vlabel0: ;
    }
    co_return;}

void Vrecorders_top_uvm_pkg__03a__03auvm_mem_single_walk_seq::__VnoInFunc_randomize(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_mem_single_walk_seq::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__48__Vfuncout;
    __Vfunc___VBasicRand__48__Vfuncout = 0;
    // Body
    Vrecorders_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vrecorders_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__48__Vfuncout);
            }(), __Vfunc___VBasicRand__48__Vfuncout));
}

void Vrecorders_top_uvm_pkg__03a__03auvm_mem_single_walk_seq::__VnoInFunc___Vsetup_constraints(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_mem_single_walk_seq::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vrecorders_top_uvm_pkg__03a__03auvm_mem_single_walk_seq::__VnoInFunc___VBasicRand(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_mem_single_walk_seq::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_mem_single_walk_seq::_ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_mem_single_walk_seq::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vrecorders_top_uvm_pkg__03a__03auvm_mem_single_walk_seq::~Vrecorders_top_uvm_pkg__03a__03auvm_mem_single_walk_seq() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_mem_single_walk_seq::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_mem_single_walk_seq>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_mem_single_walk_seq::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vrecorders_top_uvm_pkg__03a__03auvm_mem_single_walk_seq::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_mem_single_walk_seq::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vrecorders_top_uvm_pkg__03a__03auvm_mem_single_walk_seq::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_mem_single_walk_seq::to_string_middle\n"); );
    // Body
    std::string out;
    out += "mem:" + VL_TO_STRING(__PVT__mem);
    out += ", "+ Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284::to_string_middle();
    return (out);
}
