// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvirtual_sequences.h for the primary calling header

#include "Vvirtual_sequences__pch.h"

void Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_single_access_seq__Vclpkg::__VnoInFunc_get_type(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_registry__pi169> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_single_access_seq__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_registry__pi169> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi169__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_single_access_seq__Vclpkg::__VnoInFunc_type_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_single_access_seq__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_mem_single_access_seq"s;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc_get_object_type(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_registry__pi169> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi169__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc_create(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_single_access_seq> tmp;
    tmp = ((""s == name) ? VL_NEW(Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_single_access_seq, vlProcess, vlSymsp, "uam_mem_single_access_seq"s)
            : VL_NEW(Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_single_access_seq, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc_get_type_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_mem_single_access_seq"s;
}

Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_single_access_seq::Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_single_access_seq(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name)
    : Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_sequence__Tz304(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_single_access_seq::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

VlCoroutine Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc_body(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc_body\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__4__Vfuncout;
    __Vfunc_uvm_report_enabled__4__Vfuncout = 0;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz54> __Vfunc_get_by_name__6__Vfuncout;
    std::string __Vtask_get_full_name__7__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz54> __Vfunc_get_by_name__8__Vfuncout;
    std::string __Vtask_get_full_name__9__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource__Tz54> __Vfunc_get_by_name__10__Vfuncout;
    std::string __Vtask_get_full_name__11__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor> __Vtask_get_backdoor__12__Vfuncout;
    CData/*0:0*/ __Vtask_has_hdl_path__13__Vfuncout;
    __Vtask_has_hdl_path__13__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__14__Vfuncout;
    __Vfunc_uvm_report_enabled__14__Vfuncout = 0;
    std::string __Vtask_get_full_name__16__Vfuncout;
    IData/*31:0*/ __Vtask_get_n_bits__17__Vfuncout;
    __Vtask_get_n_bits__17__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__19__Vfuncout;
    __Vfunc_uvm_report_enabled__19__Vfuncout = 0;
    std::string __Vtask_get_full_name__21__Vfuncout;
    std::string __Vtask_get_full_name__22__Vfuncout;
    std::string __Vtask_get_access__23__Vfuncout;
    QData/*63:0*/ __Vtask_get_size__24__Vfuncout;
    __Vtask_get_size__24__Vfuncout = 0;
    IData/*31:0*/ __Vtask_peek__25__status;
    __Vtask_peek__25__status = 0;
    QData/*63:0*/ __Vtask_peek__25__value;
    __Vtask_peek__25__value = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__26__Vfuncout;
    __Vfunc_uvm_report_enabled__26__Vfuncout = 0;
    std::string __Vtask_get_full_name__28__Vfuncout;
    IData/*31:0*/ __Vtask_write__29__status;
    __Vtask_write__29__status = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__30__Vfuncout;
    __Vfunc_uvm_report_enabled__30__Vfuncout = 0;
    std::string __Vtask_get_full_name__32__Vfuncout;
    std::string __Vtask_get_full_name__33__Vfuncout;
    IData/*31:0*/ __Vtask_peek__34__status;
    __Vtask_peek__34__status = 0;
    QData/*63:0*/ __Vtask_peek__34__value;
    __Vtask_peek__34__value = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__35__Vfuncout;
    __Vfunc_uvm_report_enabled__35__Vfuncout = 0;
    std::string __Vtask_get_full_name__37__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__38__Vfuncout;
    __Vfunc_uvm_report_enabled__38__Vfuncout = 0;
    std::string __Vtask_get_full_name__40__Vfuncout;
    IData/*31:0*/ __Vtask_poke__41__status;
    __Vtask_poke__41__status = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__42__Vfuncout;
    __Vfunc_uvm_report_enabled__42__Vfuncout = 0;
    std::string __Vtask_get_full_name__44__Vfuncout;
    IData/*31:0*/ __Vtask_read__45__status;
    __Vtask_read__45__status = 0;
    QData/*63:0*/ __Vtask_read__45__value;
    __Vtask_read__45__value = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__46__Vfuncout;
    __Vfunc_uvm_report_enabled__46__Vfuncout = 0;
    std::string __Vtask_get_full_name__48__Vfuncout;
    std::string __Vtask_get_full_name__49__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__50__Vfuncout;
    __Vfunc_uvm_report_enabled__50__Vfuncout = 0;
    std::string __Vtask_get_full_name__52__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__53__Vfuncout;
    __Vfunc_uvm_report_enabled__53__Vfuncout = 0;
    std::string __Vtask_get_full_name__55__Vfuncout;
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
    std::string mode;
    VlQueue<VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_map>> maps;
    IData/*31:0*/ n_bits;
    n_bits = 0;
    {
        if ((VlNull{} == this->__PVT__mem)) {
            if ((0U != ([&]() {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_access_seq"s, __Vfunc_uvm_report_enabled__4__Vfuncout);
                        }(), __Vfunc_uvm_report_enabled__4__Vfuncout))) {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_access_seq"s, "No register specified to run sequence on"s, 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh"s, 0x0000004bU, ""s, 1U);
            }
            goto __Vlabel0;
        }
        if ((((VlNull{} != ([&]() {
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz54__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                    VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 80)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__7__Vfuncout);
                                                }(), __Vtask_get_full_name__7__Vfuncout))), "NO_REG_TESTS"s, 0U, __Vfunc_get_by_name__6__Vfuncout);
                            }(), __Vfunc_get_by_name__6__Vfuncout)) 
              || (VlNull{} != ([&]() {
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz54__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                    VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 82)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__9__Vfuncout);
                                                }(), __Vtask_get_full_name__9__Vfuncout))), "NO_MEM_TESTS"s, 0U, __Vfunc_get_by_name__8__Vfuncout);
                            }(), __Vfunc_get_by_name__8__Vfuncout))) 
             || (VlNull{} != ([&]() {
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz54__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 84)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__11__Vfuncout);
                                            }(), __Vtask_get_full_name__11__Vfuncout))), "NO_MEM_ACCESS_TEST"s, 0U, __Vfunc_get_by_name__10__Vfuncout);
                        }(), __Vfunc_get_by_name__10__Vfuncout)))) {
            goto __Vlabel0;
        }
        if (((VlNull{} == ([&]() {
                            VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 89)
                           ->__VnoInFunc_get_backdoor(vlSymsp, 1U, __Vtask_get_backdoor__12__Vfuncout);
                        }(), __Vtask_get_backdoor__12__Vfuncout)) 
             && (1U & (~ ([&]() {
                                VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 89)
                          ->__VnoInFunc_has_hdl_path(vlSymsp, ""s, __Vtask_has_hdl_path__13__Vfuncout);
                            }(), (IData)(__Vtask_has_hdl_path__13__Vfuncout)))))) {
            if ((0U != ([&]() {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_access_seq"s, __Vfunc_uvm_report_enabled__14__Vfuncout);
                        }(), __Vfunc_uvm_report_enabled__14__Vfuncout))) {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_access_seq"s, 
                                                   VL_CVT_PACK_STR_NN(
                                                                      VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, 
                                                                                ([&]() {
                                        VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 91)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__16__Vfuncout);
                                    }(), __Vtask_get_full_name__16__Vfuncout)), "' does not have a backdoor mechanism available"s)), 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh"s, 0x0000005bU, ""s, 1U);
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 95)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__17__Vfuncout);
        n_bits = __Vtask_get_n_bits__17__Vfuncout;
        VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 98)->__VnoInFunc_get_maps(vlSymsp, maps);
        unnamedblk1__DOT__j = 0U;
        while (VL_LTS_III(32, unnamedblk1__DOT__j, maps.size())) {
            if ((0U != ([&]() {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "uvm_mem_access_seq"s, __Vfunc_uvm_report_enabled__19__Vfuncout);
                        }(), __Vfunc_uvm_report_enabled__19__Vfuncout))) {
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "uvm_mem_access_seq"s, 
                                                  VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Verifying access of memory '"s, 
                                                                                ([&]() {
                                                VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 107)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__21__Vfuncout);
                                            }(), __Vtask_get_full_name__21__Vfuncout)), "' in map '"s), 
                                                                                ([&]() {
                                        VL_NULL_CHECK(maps.at(unnamedblk1__DOT__j), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 107)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__22__Vfuncout);
                                    }(), __Vtask_get_full_name__22__Vfuncout)), "' ..."s)), 0x00000064U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh"s, 0x0000006bU, ""s, 1U);
            }
            VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 109)->__VnoInFunc_get_access(vlProcess, vlSymsp, maps.at(unnamedblk1__DOT__j), __Vtask_get_access__23__Vfuncout);
            mode = __Vtask_get_access__23__Vfuncout;
            unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k = 0U;
            while (((QData)((IData)(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k)) 
                    < ([&]() {
                            VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 116)
                       ->__VnoInFunc_get_size(vlSymsp, __Vtask_get_size__24__Vfuncout);
                        }(), __Vtask_get_size__24__Vfuncout))) {
                unnamedblk1__DOT__unnamedblk2__DOT__val 
                    = ((QData)((IData)(VL_RANDOM_I())) 
                       & (VL_SHIFTL_QQI(64,64,32, 1ULL, n_bits) 
                          - 1ULL));
                if (VL_LTS_III(32, 0x00000020U, n_bits)) {
                    unnamedblk1__DOT__unnamedblk2__DOT__val 
                        = (VL_SHIFTL_QQI(64,64,32, unnamedblk1__DOT__unnamedblk2__DOT__val, 0x00000020U) 
                           | (QData)((IData)(VL_RANDOM_I())));
                }
                if (("RO"s == mode)) {
                    VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 121)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__25__status, 
                                                                                VL_EXTENDS_QI(64,32, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k), __Vtask_peek__25__value, ""s, VlNull{}, VlNull{}, ""s, 0U);
                    unnamedblk1__DOT__unnamedblk2__DOT__status 
                        = __Vtask_peek__25__status;
                    unnamedblk1__DOT__unnamedblk2__DOT__exp 
                        = __Vtask_peek__25__value;
                    if ((0U != unnamedblk1__DOT__unnamedblk2__DOT__status)) {
                        if ((0U != ([&]() {
                                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_access_seq"s, __Vfunc_uvm_report_enabled__26__Vfuncout);
                                    }(), __Vfunc_uvm_report_enabled__26__Vfuncout))) {
                            __Vtemp_1 = Vvirtual_sequences___024unit::__Venumtab_enum_name83
                                [(3U & unnamedblk1__DOT__unnamedblk2__DOT__status)];
                            __Vtemp_2 = ([&]() {
                                    VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 124)
                                         ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__28__Vfuncout);
                                }(), __Vtask_get_full_name__28__Vfuncout);
                            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_access_seq"s, VL_SFORMATF_N_NX("Status was %@ when reading \"%@[%0d]\" through backdoor.",0,
                                                                                -1,
                                                                                &(__Vtemp_1),
                                                                                -1,
                                                                                &(__Vtemp_2),
                                                                                32,
                                                                                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k) , 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh"s, 0x0000007cU, ""s, 1U);
                        }
                    }
                } else {
                    unnamedblk1__DOT__unnamedblk2__DOT__exp 
                        = unnamedblk1__DOT__unnamedblk2__DOT__val;
                }
                co_await VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 129)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__29__status, 
                                                                                VL_EXTENDS_QI(64,32, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k), unnamedblk1__DOT__unnamedblk2__DOT__val, 0U, maps.at(unnamedblk1__DOT__j), 
                                                                                VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_single_access_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
                unnamedblk1__DOT__unnamedblk2__DOT__status 
                    = __Vtask_write__29__status;
                if ((0U != unnamedblk1__DOT__unnamedblk2__DOT__status)) {
                    if ((0U != ([&]() {
                                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_access_seq"s, __Vfunc_uvm_report_enabled__30__Vfuncout);
                                }(), __Vfunc_uvm_report_enabled__30__Vfuncout))) {
                        __Vtemp_3 = Vvirtual_sequences___024unit::__Venumtab_enum_name83
                            [(3U & unnamedblk1__DOT__unnamedblk2__DOT__status)];
                        __Vtemp_4 = ([&]() {
                                VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 132)
                                     ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__32__Vfuncout);
                            }(), __Vtask_get_full_name__32__Vfuncout);
                        __Vtemp_5 = ([&]() {
                                VL_NULL_CHECK(maps.at(unnamedblk1__DOT__j), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 132)
                                     ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__33__Vfuncout);
                            }(), __Vtask_get_full_name__33__Vfuncout);
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_access_seq"s, VL_SFORMATF_N_NX("Status was %@ when writing \"%@[%0d]\" through map \"%@\".",0,
                                                                                -1,
                                                                                &(__Vtemp_3),
                                                                                -1,
                                                                                &(__Vtemp_4),
                                                                                32,
                                                                                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k,
                                                                                -1,
                                                                                &(__Vtemp_5)) , 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh"s, 0x00000084U, ""s, 1U);
                    }
                }
                co_await vlSymsp->TOP.__VdlySched.delay(1ULL, 
                                                        vlProcess, 
                                                        "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 
                                                        134);
                unnamedblk1__DOT__unnamedblk2__DOT__val = 0ULL;
                VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 137)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__34__status, 
                                                                                VL_EXTENDS_QI(64,32, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k), __Vtask_peek__34__value, ""s, VlNull{}, VlNull{}, ""s, 0U);
                unnamedblk1__DOT__unnamedblk2__DOT__status 
                    = __Vtask_peek__34__status;
                unnamedblk1__DOT__unnamedblk2__DOT__val 
                    = __Vtask_peek__34__value;
                if ((0U != unnamedblk1__DOT__unnamedblk2__DOT__status)) {
                    if ((0U != ([&]() {
                                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_access_seq"s, __Vfunc_uvm_report_enabled__35__Vfuncout);
                                }(), __Vfunc_uvm_report_enabled__35__Vfuncout))) {
                        __Vtemp_6 = Vvirtual_sequences___024unit::__Venumtab_enum_name83
                            [(3U & unnamedblk1__DOT__unnamedblk2__DOT__status)];
                        __Vtemp_7 = ([&]() {
                                VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 140)
                                     ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__37__Vfuncout);
                            }(), __Vtask_get_full_name__37__Vfuncout);
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_access_seq"s, VL_SFORMATF_N_NX("Status was %@ when reading \"%@[%0d]\" through backdoor.",0,
                                                                                -1,
                                                                                &(__Vtemp_6),
                                                                                -1,
                                                                                &(__Vtemp_7),
                                                                                32,
                                                                                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k) , 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh"s, 0x0000008cU, ""s, 1U);
                    }
                } else if ((unnamedblk1__DOT__unnamedblk2__DOT__val 
                            != unnamedblk1__DOT__unnamedblk2__DOT__exp)) {
                    if ((0U != ([&]() {
                                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_access_seq"s, __Vfunc_uvm_report_enabled__38__Vfuncout);
                                }(), __Vfunc_uvm_report_enabled__38__Vfuncout))) {
                        __Vtemp_8 = ([&]() {
                                VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 145)
                                     ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__40__Vfuncout);
                            }(), __Vtask_get_full_name__40__Vfuncout);
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_access_seq"s, VL_SFORMATF_N_NX("Backdoor \"%@[%0d]\" read back as 'h%x instead of 'h%x.",0,
                                                                                -1,
                                                                                &(__Vtemp_8),
                                                                                32,
                                                                                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k,
                                                                                64,
                                                                                unnamedblk1__DOT__unnamedblk2__DOT__val,
                                                                                64,
                                                                                unnamedblk1__DOT__unnamedblk2__DOT__exp) , 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh"s, 0x00000091U, ""s, 1U);
                    }
                }
                unnamedblk1__DOT__unnamedblk2__DOT__exp 
                    = ((~ unnamedblk1__DOT__unnamedblk2__DOT__exp) 
                       & (VL_SHIFTL_QQI(64,64,32, 1ULL, n_bits) 
                          - 1ULL));
                VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 150)->__VnoInFunc_poke(vlProcess, vlSymsp, __Vtask_poke__41__status, 
                                                                                VL_EXTENDS_QI(64,32, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k), unnamedblk1__DOT__unnamedblk2__DOT__exp, ""s, VlNull{}, VlNull{}, ""s, 0U);
                unnamedblk1__DOT__unnamedblk2__DOT__status 
                    = __Vtask_poke__41__status;
                if ((0U != unnamedblk1__DOT__unnamedblk2__DOT__status)) {
                    if ((0U != ([&]() {
                                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_access_seq"s, __Vfunc_uvm_report_enabled__42__Vfuncout);
                                }(), __Vfunc_uvm_report_enabled__42__Vfuncout))) {
                        __Vtemp_9 = Vvirtual_sequences___024unit::__Venumtab_enum_name83
                            [(3U & unnamedblk1__DOT__unnamedblk2__DOT__status)];
                        __Vtemp_10 = ([&]() {
                                VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 153)
                                      ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__44__Vfuncout);
                            }(), __Vtask_get_full_name__44__Vfuncout);
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_access_seq"s, VL_SFORMATF_N_NX("Status was %@ when writing \"%@[%0d-1]\" through backdoor.",0,
                                                                                -1,
                                                                                &(__Vtemp_9),
                                                                                -1,
                                                                                &(__Vtemp_10),
                                                                                32,
                                                                                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k) , 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh"s, 0x00000099U, ""s, 1U);
                    }
                }
                co_await VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 156)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__45__status, 
                                                                                VL_EXTENDS_QI(64,32, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k), __Vtask_read__45__value, 0U, maps.at(unnamedblk1__DOT__j), 
                                                                                VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_single_access_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
                unnamedblk1__DOT__unnamedblk2__DOT__status 
                    = __Vtask_read__45__status;
                unnamedblk1__DOT__unnamedblk2__DOT__val 
                    = __Vtask_read__45__value;
                if ((0U != unnamedblk1__DOT__unnamedblk2__DOT__status)) {
                    if ((0U != ([&]() {
                                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_access_seq"s, __Vfunc_uvm_report_enabled__46__Vfuncout);
                                }(), __Vfunc_uvm_report_enabled__46__Vfuncout))) {
                        __Vtemp_11 = Vvirtual_sequences___024unit::__Venumtab_enum_name83
                            [(3U & unnamedblk1__DOT__unnamedblk2__DOT__status)];
                        __Vtemp_12 = ([&]() {
                                VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 159)
                                      ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__48__Vfuncout);
                            }(), __Vtask_get_full_name__48__Vfuncout);
                        __Vtemp_13 = ([&]() {
                                VL_NULL_CHECK(maps.at(unnamedblk1__DOT__j), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 159)
                                      ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__49__Vfuncout);
                            }(), __Vtask_get_full_name__49__Vfuncout);
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_access_seq"s, VL_SFORMATF_N_NX("Status was %@ when reading \"%@[%0d]\" through map \"%@\".",0,
                                                                                -1,
                                                                                &(__Vtemp_11),
                                                                                -1,
                                                                                &(__Vtemp_12),
                                                                                32,
                                                                                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k,
                                                                                -1,
                                                                                &(__Vtemp_13)) , 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh"s, 0x0000009fU, ""s, 1U);
                    }
                } else if (("WO"s == mode)) {
                    if ((0ULL != unnamedblk1__DOT__unnamedblk2__DOT__val)) {
                        if ((0U != ([&]() {
                                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_access_seq"s, __Vfunc_uvm_report_enabled__50__Vfuncout);
                                    }(), __Vfunc_uvm_report_enabled__50__Vfuncout))) {
                            __Vtemp_14 = ([&]() {
                                    VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 165)
                                          ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__52__Vfuncout);
                                }(), __Vtask_get_full_name__52__Vfuncout);
                            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_access_seq"s, VL_SFORMATF_N_NX("Front door \"%@[%0d]\" read back as 'h%x instead of 'h00000000.",0,
                                                                                -1,
                                                                                &(__Vtemp_14),
                                                                                32,
                                                                                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k,
                                                                                64,
                                                                                unnamedblk1__DOT__unnamedblk2__DOT__val) , 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh"s, 0x000000a5U, ""s, 1U);
                        }
                    }
                } else if ((unnamedblk1__DOT__unnamedblk2__DOT__val 
                            != unnamedblk1__DOT__unnamedblk2__DOT__exp)) {
                    if ((0U != ([&]() {
                                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_access_seq"s, __Vfunc_uvm_report_enabled__53__Vfuncout);
                                }(), __Vfunc_uvm_report_enabled__53__Vfuncout))) {
                        __Vtemp_15 = ([&]() {
                                VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh", 171)
                                      ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__55__Vfuncout);
                            }(), __Vtask_get_full_name__55__Vfuncout);
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_access_seq"s, VL_SFORMATF_N_NX("Front door \"%@[%0d]\" read back as 'h%x instead of 'h%x.",0,
                                                                                -1,
                                                                                &(__Vtemp_15),
                                                                                32,
                                                                                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k,
                                                                                64,
                                                                                unnamedblk1__DOT__unnamedblk2__DOT__val,
                                                                                64,
                                                                                unnamedblk1__DOT__unnamedblk2__DOT__exp) , 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_access_seq.svh"s, 0x000000abU, ""s, 1U);
                    }
                }
                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k 
                    = ((IData)(1U) + unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k);
            }
            unnamedblk1__DOT__j = ((IData)(1U) + unnamedblk1__DOT__j);
        }
        __Vlabel0: ;
    }
    co_return;}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc_randomize(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__57__Vfuncout;
    __Vfunc___VBasicRand__57__Vfuncout = 0;
    // Body
    Vvirtual_sequences_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vvirtual_sequences_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__57__Vfuncout);
            }(), __Vfunc___VBasicRand__57__Vfuncout));
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc___Vsetup_constraints(Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc___VBasicRand(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_single_access_seq::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_single_access_seq::_ctor_var_reset(Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_single_access_seq::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_single_access_seq::~Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_single_access_seq() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_single_access_seq::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_single_access_seq>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_single_access_seq::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_single_access_seq::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_single_access_seq::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_single_access_seq::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_mem_single_access_seq::to_string_middle\n"); );
    // Body
    std::string out;
    out += "mem:" + VL_TO_STRING(__PVT__mem);
    out += ", "+ Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_sequence__Tz304::to_string_middle();
    return (out);
}
