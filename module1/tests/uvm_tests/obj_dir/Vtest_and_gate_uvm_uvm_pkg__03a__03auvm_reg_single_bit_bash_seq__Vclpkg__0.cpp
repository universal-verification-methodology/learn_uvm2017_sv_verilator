// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_and_gate_uvm.h for the primary calling header

#include "Vtest_and_gate_uvm__pch.h"

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq__Vclpkg::__VnoInFunc_get_type(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__pi180> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__pi180> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi180__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq__Vclpkg::__VnoInFunc_type_name(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_reg_single_bit_bash_seq"s;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_get_object_type(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__pi180> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi180__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_create(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq> tmp;
    tmp = ((""s == name) ? VL_NEW(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq, vlProcess, vlSymsp, "uvm_reg_single_bit_bash_seq"s)
            : VL_NEW(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_get_type_name(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_single_bit_bash_seq"s;
}

Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name)
    : Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_sequence__Tz323(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

VlCoroutine Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_body(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_body\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__4__Vfuncout;
    __Vfunc_uvm_report_enabled__4__Vfuncout = 0;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_resource__Tz30> __Vfunc_get_by_name__6__Vfuncout;
    std::string __Vtask_get_full_name__7__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_resource__Tz30> __Vfunc_get_by_name__8__Vfuncout;
    std::string __Vtask_get_full_name__9__Vfuncout;
    IData/*31:0*/ __Vtask_get_n_bytes__10__Vfuncout;
    __Vtask_get_n_bytes__10__Vfuncout = 0;
    std::string __Vtask_get_access__13__Vfuncout;
    IData/*31:0*/ __Vtask_get_compare__14__Vfuncout;
    __Vtask_get_compare__14__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_lsb_pos__15__Vfuncout;
    __Vtask_get_lsb_pos__15__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bits__16__Vfuncout;
    __Vtask_get_n_bits__16__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__17__Vfuncout;
    __Vfunc_uvm_report_enabled__17__Vfuncout = 0;
    std::string __Vtask_get_full_name__19__Vfuncout;
    std::string __Vtask_get_full_name__20__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
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
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__next_lsb;
    unnamedblk1__DOT__unnamedblk2__DOT__next_lsb = 0;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k;
    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k = 0;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__lsb;
    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__lsb = 0;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__w;
    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__w = 0;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dc;
    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dc = 0;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__k;
    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__k = 0;
    IData/*31:0*/ __Vincrement2;
    __Vincrement2 = 0;
    IData/*31:0*/ __Vincrement1;
    __Vincrement1 = 0;
    VlQueue<VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_field>> fields;
    VlUnpacked<std::string, 64> mode;
    VlQueue<VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_map>> maps;
    QData/*63:0*/ dc_mask;
    dc_mask = 0;
    QData/*63:0*/ reset_val;
    reset_val = 0;
    IData/*31:0*/ n_bits;
    n_bits = 0;
    std::string field_access;
    {
        if ((VlNull{} == this->__PVT__rg)) {
            if ((0U != ([&]() {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_bit_bash_seq"s, __Vfunc_uvm_report_enabled__4__Vfuncout);
                        }(), __Vfunc_uvm_report_enabled__4__Vfuncout))) {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_bit_bash_seq"s, "No register specified to run sequence on"s, 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh"s, 0x00000052U, ""s, 1U);
            }
            goto __Vlabel0;
        }
        if (((VlNull{} != ([&]() {
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                VL_NULL_CHECK(this->__PVT__rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 87)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__7__Vfuncout);
                                            }(), __Vtask_get_full_name__7__Vfuncout))), "NO_REG_TESTS"s, 0U, __Vfunc_get_by_name__6__Vfuncout);
                        }(), __Vfunc_get_by_name__6__Vfuncout)) 
             || (VlNull{} != ([&]() {
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                VL_NULL_CHECK(this->__PVT__rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 89)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__9__Vfuncout);
                                            }(), __Vtask_get_full_name__9__Vfuncout))), "NO_REG_BIT_BASH_TEST"s, 0U, __Vfunc_get_by_name__8__Vfuncout);
                        }(), __Vfunc_get_by_name__8__Vfuncout)))) {
            goto __Vlabel0;
        }
        n_bits = VL_SHIFTL_III(32,32,32, ([&]() {
                    VL_NULL_CHECK(this->__PVT__rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 93)
                                          ->__VnoInFunc_get_n_bytes(vlSymsp, __Vtask_get_n_bytes__10__Vfuncout);
                }(), __Vtask_get_n_bytes__10__Vfuncout), 3U);
        VL_NULL_CHECK(this->__PVT__rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 96)->__VnoInFunc_get_fields(vlSymsp, fields);
        VL_NULL_CHECK(this->__PVT__rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 99)->__VnoInFunc_get_maps(vlSymsp, maps);
        unnamedblk1__DOT__j = 0U;
        while (VL_LTS_III(32, unnamedblk1__DOT__j, maps.size())) {
            unnamedblk1__DOT__unnamedblk2__DOT__next_lsb = 0U;
            dc_mask = 0ULL;
            unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k = 0U;
            while (VL_LTS_III(32, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k, fields.size())) {
                VL_NULL_CHECK(fields.at(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 112)->__VnoInFunc_get_access(vlProcess, vlSymsp, maps.at(unnamedblk1__DOT__j), __Vtask_get_access__13__Vfuncout);
                field_access = __Vtask_get_access__13__Vfuncout;
                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dc 
                    = VL_EXTEND_II(32,1, (0U == ([&]() {
                                VL_NULL_CHECK(fields.at(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 113)
                                                 ->__VnoInFunc_get_compare(vlSymsp, __Vtask_get_compare__14__Vfuncout);
                            }(), __Vtask_get_compare__14__Vfuncout)));
                VL_NULL_CHECK(fields.at(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 114)->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__15__Vfuncout);
                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__lsb 
                    = __Vtask_get_lsb_pos__15__Vfuncout;
                VL_NULL_CHECK(fields.at(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 115)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__16__Vfuncout);
                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__w 
                    = __Vtask_get_n_bits__16__Vfuncout;
                if (((((("WO"s == field_access) || 
                        ("WOC"s == field_access)) || 
                       ("WOS"s == field_access)) || 
                      ("WO1"s == field_access)) || 
                     ("NOACCESS"s == field_access))) {
                    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dc = 1U;
                }
                while (VL_LTS_III(32, unnamedblk1__DOT__unnamedblk2__DOT__next_lsb, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__lsb)) {
                    __Vincrement1 = unnamedblk1__DOT__unnamedblk2__DOT__next_lsb;
                    unnamedblk1__DOT__unnamedblk2__DOT__next_lsb 
                        = ((IData)(1U) + unnamedblk1__DOT__unnamedblk2__DOT__next_lsb);
                    mode[(0x0000003fU & __Vincrement1)] = "RO"s;
                }
                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_1__DOT____Vrepeat0 
                    = unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__w;
                while (VL_LTS_III(32, 0U, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
                    mode[(0x0000003fU & unnamedblk1__DOT__unnamedblk2__DOT__next_lsb)] 
                        = field_access;
                    dc_mask = (((~ (1ULL << (0x0000003fU 
                                             & unnamedblk1__DOT__unnamedblk2__DOT__next_lsb))) 
                                & dc_mask) | ((QData)((IData)(
                                                              (1U 
                                                               & unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dc))) 
                                              << (0x0000003fU 
                                                  & unnamedblk1__DOT__unnamedblk2__DOT__next_lsb)));
                    unnamedblk1__DOT__unnamedblk2__DOT__next_lsb 
                        = ((IData)(1U) + unnamedblk1__DOT__unnamedblk2__DOT__next_lsb);
                    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_1__DOT____Vrepeat0 
                        = (unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_1__DOT____Vrepeat0 
                           - (IData)(1U));
                }
                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k 
                    = ((IData)(1U) + unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k);
            }
            while (VL_GTS_III(32, 0x00000040U, unnamedblk1__DOT__unnamedblk2__DOT__next_lsb)) {
                __Vincrement2 = unnamedblk1__DOT__unnamedblk2__DOT__next_lsb;
                unnamedblk1__DOT__unnamedblk2__DOT__next_lsb 
                    = ((IData)(1U) + unnamedblk1__DOT__unnamedblk2__DOT__next_lsb);
                mode[(0x0000003fU & __Vincrement2)] = "RO"s;
            }
            if ((0U != ([&]() {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "uvm_reg_bit_bash_seq"s, __Vfunc_uvm_report_enabled__17__Vfuncout);
                        }(), __Vfunc_uvm_report_enabled__17__Vfuncout))) {
                __Vtemp_1 = ([&]() {
                        VL_NULL_CHECK(this->__PVT__rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 135)
                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__19__Vfuncout);
                    }(), __Vtask_get_full_name__19__Vfuncout);
                __Vtemp_2 = ([&]() {
                        VL_NULL_CHECK(maps.at(unnamedblk1__DOT__j), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 135)
                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__20__Vfuncout);
                    }(), __Vtask_get_full_name__20__Vfuncout);
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "uvm_reg_bit_bash_seq"s, VL_SFORMATF_N_NX("Verifying bits in register %@ in map \"%@\"...",0,
                                                                                -1,
                                                                                &(__Vtemp_1),
                                                                                -1,
                                                                                &(__Vtemp_2)) , 0x00000064U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh"s, 0x00000087U, ""s, 1U);
            }
            unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__k = 0U;
            while (VL_LTS_III(32, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__k, n_bits)) {
                {
                    if ((1U & (IData)((dc_mask >> (0x0000003fU 
                                                   & unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__k))))) {
                        goto __Vlabel1;
                    }
                    co_await this->__VnoInFunc_bash_kth_bit(vlProcess, vlSymsp, this->__PVT__rg, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__k, 
                                                            VL_CVT_PACK_STR_NN(
                                                                               mode
                                                                               [
                                                                               (0x0000003fU 
                                                                                & unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__k)]), maps.at(unnamedblk1__DOT__j), dc_mask);
                    __Vlabel1: ;
                }
                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__k 
                    = ((IData)(1U) + unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__k);
            }
            unnamedblk1__DOT__j = ((IData)(1U) + unnamedblk1__DOT__j);
        }
        __Vlabel0: ;
    }
    co_return;}

VlCoroutine Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_bash_kth_bit(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg> rg, IData/*31:0*/ k, std::string mode, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ dc_mask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_bash_kth_bit\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__22__Vfuncout;
    __Vfunc_uvm_report_enabled__22__Vfuncout = 0;
    QData/*63:0*/ __Vtask_get__24__Vfuncout;
    __Vtask_get__24__Vfuncout = 0;
    IData/*31:0*/ __Vtask_write__25__status;
    __Vtask_write__25__status = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__26__Vfuncout;
    __Vfunc_uvm_report_enabled__26__Vfuncout = 0;
    std::string __Vtask_get_full_name__28__Vfuncout;
    std::string __Vtask_get_full_name__29__Vfuncout;
    QData/*63:0*/ __Vtask_get__30__Vfuncout;
    __Vtask_get__30__Vfuncout = 0;
    IData/*31:0*/ __Vtask_read__31__status;
    __Vtask_read__31__status = 0;
    QData/*63:0*/ __Vtask_read__31__value;
    __Vtask_read__31__value = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__32__Vfuncout;
    __Vfunc_uvm_report_enabled__32__Vfuncout = 0;
    std::string __Vtask_get_full_name__34__Vfuncout;
    std::string __Vtask_get_full_name__35__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__36__Vfuncout;
    __Vfunc_uvm_report_enabled__36__Vfuncout = 0;
    std::string __Vtask_get_full_name__38__Vfuncout;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    std::string __Vtemp_6;
    std::string __Vtemp_7;
    std::string __Vtemp_8;
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1_2__DOT____Vrepeat1;
    unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ status;
    status = 0;
    QData/*63:0*/ val;
    val = 0;
    QData/*63:0*/ exp;
    exp = 0;
    QData/*63:0*/ v;
    v = 0;
    CData/*0:0*/ bit_val;
    bit_val = 0;
    if ((0U != ([&]() {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x0000012cU, 0U, "uvm_reg_bit_bash_seq"s, __Vfunc_uvm_report_enabled__22__Vfuncout);
                }(), __Vfunc_uvm_report_enabled__22__Vfuncout))) {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "uvm_reg_bit_bash_seq"s, VL_SFORMATF_N_NX("...Bashing %@ bit #%0d",0,
                                                                                -1,
                                                                                &(mode),
                                                                                32,
                                                                                k) , 0x0000012cU, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh"s, 0x0000009eU, ""s, 1U);
    }
    unnamedblk1_2__DOT____Vrepeat1 = 2U;
    while (VL_LTS_III(32, 0U, unnamedblk1_2__DOT____Vrepeat1)) {
        VL_NULL_CHECK(rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 161)->__VnoInFunc_get(vlProcess, vlSymsp, ""s, 0U, __Vtask_get__24__Vfuncout);
        val = __Vtask_get__24__Vfuncout;
        v = val;
        exp = val;
        val = (((~ (1ULL << (0x0000003fU & k))) & val) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (val 
                                                    >> 
                                                    (0x0000003fU 
                                                     & k))))))) 
                  << (0x0000003fU & k)));
        bit_val = (1U & (IData)((val >> (0x0000003fU 
                                         & k))));
        co_await VL_NULL_CHECK(rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 167)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__25__status, val, 0U, map, 
                                                                                VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
        status = __Vtask_write__25__status;
        if ((0U != status)) {
            if ((0U != ([&]() {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_bit_bash_seq"s, __Vfunc_uvm_report_enabled__26__Vfuncout);
                        }(), __Vfunc_uvm_report_enabled__26__Vfuncout))) {
                __Vtemp_2 = Vtest_and_gate_uvm___024unit::__Venumtab_enum_name83
                    [(3U & status)];
                __Vtemp_3 = ([&]() {
                        VL_NULL_CHECK(rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 170)
                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__28__Vfuncout);
                    }(), __Vtask_get_full_name__28__Vfuncout);
                __Vtemp_4 = ([&]() {
                        VL_NULL_CHECK(map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 170)
                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__29__Vfuncout);
                    }(), __Vtask_get_full_name__29__Vfuncout);
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_bit_bash_seq"s, VL_SFORMATF_N_NX("Status was %@ when writing to register \"%@\" through map \"%@\".",0,
                                                                                -1,
                                                                                &(__Vtemp_2),
                                                                                -1,
                                                                                &(__Vtemp_3),
                                                                                -1,
                                                                                &(__Vtemp_4)) , 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh"s, 0x000000aaU, ""s, 1U);
            }
        }
        exp = (([&]() {
                    VL_NULL_CHECK(rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 173)
                ->__VnoInFunc_get(vlProcess, vlSymsp, ""s, 0U, __Vtask_get__30__Vfuncout);
                }(), __Vtask_get__30__Vfuncout) & (~ dc_mask));
        co_await VL_NULL_CHECK(rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 174)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__31__status, __Vtask_read__31__value, 0U, map, 
                                                                                VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
        status = __Vtask_read__31__status;
        val = __Vtask_read__31__value;
        if ((0U != status)) {
            if ((0U != ([&]() {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_bit_bash_seq"s, __Vfunc_uvm_report_enabled__32__Vfuncout);
                        }(), __Vfunc_uvm_report_enabled__32__Vfuncout))) {
                __Vtemp_5 = Vtest_and_gate_uvm___024unit::__Venumtab_enum_name83
                    [(3U & status)];
                __Vtemp_6 = ([&]() {
                        VL_NULL_CHECK(rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 177)
                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__34__Vfuncout);
                    }(), __Vtask_get_full_name__34__Vfuncout);
                __Vtemp_7 = ([&]() {
                        VL_NULL_CHECK(map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 177)
                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__35__Vfuncout);
                    }(), __Vtask_get_full_name__35__Vfuncout);
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_bit_bash_seq"s, VL_SFORMATF_N_NX("Status was %@ when reading register \"%@\" through map \"%@\".",0,
                                                                                -1,
                                                                                &(__Vtemp_5),
                                                                                -1,
                                                                                &(__Vtemp_6),
                                                                                -1,
                                                                                &(__Vtemp_7)) , 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh"s, 0x000000b1U, ""s, 1U);
            }
        }
        val = (val & (~ dc_mask));
        if ((val != exp)) {
            if ((0U != ([&]() {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_bit_bash_seq"s, __Vfunc_uvm_report_enabled__36__Vfuncout);
                        }(), __Vfunc_uvm_report_enabled__36__Vfuncout))) {
                __Vtemp_8 = ([&]() {
                        VL_NULL_CHECK(rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 183)
                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__38__Vfuncout);
                    }(), __Vtask_get_full_name__38__Vfuncout);
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_bit_bash_seq"s, VL_SFORMATF_N_NX("Writing a %b in bit #%0d of register \"%@\" with initial value 'h%x yielded 'h%x instead of 'h%x",0,
                                                                                1,
                                                                                bit_val,
                                                                                32,
                                                                                k,
                                                                                -1,
                                                                                &(__Vtemp_8),
                                                                                64,
                                                                                v,
                                                                                64,
                                                                                val,
                                                                                64,
                                                                                exp) , 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh"s, 0x000000b7U, ""s, 1U);
            }
        }
        unnamedblk1_2__DOT____Vrepeat1 = (unnamedblk1_2__DOT____Vrepeat1 
                                          - (IData)(1U));
    }
    co_return;}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_randomize(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__40__Vfuncout;
    __Vfunc___VBasicRand__40__Vfuncout = 0;
    // Body
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__40__Vfuncout);
            }(), __Vfunc___VBasicRand__40__Vfuncout));
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc___Vsetup_constraints(Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc___VBasicRand(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::_ctor_var_reset(Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::~Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::to_string_middle\n"); );
    // Body
    std::string out;
    out += "rg:" + VL_TO_STRING(__PVT__rg);
    out += ", "+ Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_sequence__Tz323::to_string_middle();
    return (out);
}
