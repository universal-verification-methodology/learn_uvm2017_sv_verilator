// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrecorders_top.h for the primary calling header

#include "Vrecorders_top__pch.h"

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq__Vclpkg::__VnoInFunc_get_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_registry__pi151> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vrecorders_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_registry__pi151> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi151__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq__Vclpkg::__VnoInFunc_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vrecorders_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_reg_hw_reset_seq"s;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_get_object_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_registry__pi151> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi151__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_create(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq> tmp;
    tmp = ((""s == name) ? VL_NEW(Vrecorders_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq, vlProcess, vlSymsp, "uvm_reg_hw_reset_seq"s)
            : VL_NEW(Vrecorders_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_get_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_hw_reset_seq"s;
}

Vrecorders_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::Vrecorders_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name)
    : Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

VlCoroutine Vrecorders_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_body(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_body\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__4__Vfuncout;
    __Vfunc_uvm_report_enabled__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__6__Vfuncout;
    __Vfunc_uvm_report_enabled__6__Vfuncout = 0;
    std::string __Vfunc_get_name__8__Vfuncout;
    // Body
    VL_KEEP_THIS;
    {
        if ((VlNull{} == Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284::__PVT__model)) {
            if ((0U != ([&]() {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_hw_reset_seq"s, __Vfunc_uvm_report_enabled__4__Vfuncout);
                        }(), __Vfunc_uvm_report_enabled__4__Vfuncout))) {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_hw_reset_seq"s, "Not block or system specified to run sequence on"s, 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh"s, 0x00000050U, ""s, 1U);
            }
            goto __Vlabel0;
        }
        if ((0U != ([&]() {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "STARTING_SEQ"s, __Vfunc_uvm_report_enabled__6__Vfuncout);
                    }(), __Vfunc_uvm_report_enabled__6__Vfuncout))) {
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "STARTING_SEQ"s, 
                                              VL_CVT_PACK_STR_NN(
                                                                 VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("\n\nStarting "s, 
                                                                                ([&]() {
                                    this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__8__Vfuncout);
                                }(), __Vfunc_get_name__8__Vfuncout)), " sequence...\n"s)), 0x00000064U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh"s, 0x00000053U, ""s, 1U);
        }
        this->__VnoInFunc_reset_blk(vlSymsp, Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284::__PVT__model);
        VL_NULL_CHECK(Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284::__PVT__model, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 86)->__VnoInFunc_reset(vlSymsp, "HARD"s);
        co_await this->__VnoInFunc_do_block(vlProcess, vlSymsp, Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284::__PVT__model);
        __Vlabel0: ;
    }
    co_return;}

VlCoroutine Vrecorders_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_do_block(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_block> blk) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_do_block\n"); );
    // Locals
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_resource__Tz42> __Vfunc_get_by_name__12__Vfuncout;
    std::string __Vtask_get_full_name__13__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_resource__Tz42> __Vfunc_get_by_name__14__Vfuncout;
    std::string __Vtask_get_full_name__15__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_resource__Tz42> __Vfunc_get_by_name__17__Vfuncout;
    std::string __Vtask_get_full_name__18__Vfuncout;
    CData/*0:0*/ __Vtask_has_reset__19__Vfuncout;
    __Vtask_has_reset__19__Vfuncout = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_resource__Tz42> __Vfunc_get_by_name__20__Vfuncout;
    std::string __Vtask_get_full_name__21__Vfuncout;
    CData/*0:0*/ __Vtask_has_reset__24__Vfuncout;
    __Vtask_has_reset__24__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_compare__25__Vfuncout;
    __Vtask_get_compare__25__Vfuncout = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_resource__Tz42> __Vfunc_get_by_name__26__Vfuncout;
    std::string __Vtask_get_full_name__27__Vfuncout;
    IData/*31:0*/ __Vtask_get_compare__28__Vfuncout;
    __Vtask_get_compare__28__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__30__Vfuncout;
    __Vfunc_uvm_report_enabled__30__Vfuncout = 0;
    std::string __Vfunc_get_type_name__31__Vfuncout;
    std::string __Vfunc_get_type_name__33__Vfuncout;
    std::string __Vtask_get_full_name__34__Vfuncout;
    std::string __Vtask_get_full_name__35__Vfuncout;
    IData/*31:0*/ __Vtask_mirror__36__status;
    __Vtask_mirror__36__status = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__37__Vfuncout;
    __Vfunc_uvm_report_enabled__37__Vfuncout = 0;
    std::string __Vfunc_get_type_name__38__Vfuncout;
    std::string __Vfunc_get_type_name__40__Vfuncout;
    std::string __Vtask_get_full_name__41__Vfuncout;
    std::string __Vtask_get_full_name__42__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1__DOT__ridx;
    unnamedblk1__DOT__ridx = 0;
    VlQueue<VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map>> unnamedblk1__DOT__unnamedblk2__DOT__rm;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__status;
    unnamedblk1__DOT__unnamedblk2__DOT__status = 0;
    VlQueue<VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_field>> unnamedblk1__DOT__unnamedblk2__DOT__fields;
    VlAssocArray<VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_field>, IData/*31:0*/> unnamedblk1__DOT__unnamedblk2__DOT__field_check_restore;
    unnamedblk1__DOT__unnamedblk2__DOT__field_check_restore.atDefault() = 0;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__fidx;
    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__fidx = 0;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT__midx;
    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT__midx = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_field> unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__field;
    CData/*0:0*/ unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__field__Vfirst;
    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__field__Vfirst = 0;
    VlQueue<VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_block>> unnamedblk6__DOT__blks;
    IData/*31:0*/ unnamedblk6__DOT__unnamedblk7__DOT__i;
    unnamedblk6__DOT__unnamedblk7__DOT__i = 0;
    VlQueue<VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map>> maps;
    VlQueue<VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map>> sub_maps;
    VlQueue<VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg>> regs;
    {
        if (((VlNull{} != ([&]() {
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz42__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                VL_NULL_CHECK(blk, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 100)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__13__Vfuncout);
                                            }(), __Vtask_get_full_name__13__Vfuncout))), "NO_REG_TESTS"s, 0U, __Vfunc_get_by_name__12__Vfuncout);
                        }(), __Vfunc_get_by_name__12__Vfuncout)) 
             || (VlNull{} != ([&]() {
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz42__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                VL_NULL_CHECK(blk, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 102)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__15__Vfuncout);
                                            }(), __Vtask_get_full_name__15__Vfuncout))), "NO_REG_HW_RESET_TEST"s, 0U, __Vfunc_get_by_name__14__Vfuncout);
                        }(), __Vfunc_get_by_name__14__Vfuncout)))) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(blk, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 108)->__VnoInFunc_get_registers(vlSymsp, regs, 0U);
        unnamedblk1__DOT__ridx = 0U;
        while (VL_LTS_III(32, unnamedblk1__DOT__ridx, regs.size())) {
            {
                if ((((VlNull{} != ([&]() {
                                        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz42__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                            VL_NULL_CHECK(regs.at(unnamedblk1__DOT__ridx), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 111)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__18__Vfuncout);
                                                        }(), __Vtask_get_full_name__18__Vfuncout))), "NO_REG_TESTS"s, 0U, __Vfunc_get_by_name__17__Vfuncout);
                                    }(), __Vfunc_get_by_name__17__Vfuncout)) 
                      || (1U & (~ ([&]() {
                                            VL_NULL_CHECK(regs.at(unnamedblk1__DOT__ridx), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 113)
                                   ->__VnoInFunc_has_reset(vlSymsp, "HARD"s, 0U, __Vtask_has_reset__19__Vfuncout);
                                        }(), (IData)(__Vtask_has_reset__19__Vfuncout))))) 
                     || (VlNull{} != ([&]() {
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz42__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                        VL_NULL_CHECK(regs.at(unnamedblk1__DOT__ridx), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 114)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__21__Vfuncout);
                                                    }(), __Vtask_get_full_name__21__Vfuncout))), "NO_REG_HW_RESET_TEST"s, 0U, __Vfunc_get_by_name__20__Vfuncout);
                                }(), __Vfunc_get_by_name__20__Vfuncout)))) {
                    goto __Vlabel1;
                }
                VL_NULL_CHECK(regs.at(unnamedblk1__DOT__ridx), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 124)->__VnoInFunc_get_maps(vlSymsp, unnamedblk1__DOT__unnamedblk2__DOT__rm);
                VL_NULL_CHECK(regs.at(unnamedblk1__DOT__ridx), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 126)->__VnoInFunc_get_fields(vlSymsp, unnamedblk1__DOT__unnamedblk2__DOT__fields);
                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__fidx = 0U;
                while (VL_LTS_III(32, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__fidx, unnamedblk1__DOT__unnamedblk2__DOT__fields.size())) {
                    if ((((1U & (~ ([&]() {
                                                VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__fields.at(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__fidx), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 129)
                                    ->__VnoInFunc_has_reset(vlSymsp, "HARD"s, 0U, __Vtask_has_reset__24__Vfuncout);
                                            }(), (IData)(__Vtask_has_reset__24__Vfuncout)))) 
                          || (0U == ([&]() {
                                            VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__fields.at(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__fidx), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 130)
                                     ->__VnoInFunc_get_compare(vlSymsp, __Vtask_get_compare__25__Vfuncout);
                                        }(), __Vtask_get_compare__25__Vfuncout))) 
                         || (VlNull{} != ([&]() {
                                        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz42__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                            VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__fields.at(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__fidx), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 131)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__27__Vfuncout);
                                                        }(), __Vtask_get_full_name__27__Vfuncout))), "NO_REG_HW_RESET_TEST"s, 0U, __Vfunc_get_by_name__26__Vfuncout);
                                    }(), __Vfunc_get_by_name__26__Vfuncout)))) {
                        VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__fields.at(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__fidx), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 133)->__VnoInFunc_get_compare(vlSymsp, __Vtask_get_compare__28__Vfuncout);
                        unnamedblk1__DOT__unnamedblk2__DOT__field_check_restore.at(unnamedblk1__DOT__unnamedblk2__DOT__fields.at(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__fidx)) 
                            = __Vtask_get_compare__28__Vfuncout;
                        VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__fields.at(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__fidx), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 134)->__VnoInFunc_set_compare(vlSymsp, 0U);
                    }
                    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__fidx 
                        = ((IData)(1U) + unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__fidx);
                }
                if ((unnamedblk1__DOT__unnamedblk2__DOT__fields.size() 
                     != unnamedblk1__DOT__unnamedblk2__DOT__field_check_restore.size())) {
                    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT__midx = 0U;
                    while (VL_LTS_III(32, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT__midx, unnamedblk1__DOT__unnamedblk2__DOT__rm.size())) {
                        if ((0U != ([&]() {
                                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, 
                                                                             VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                                                        this->__VnoInFunc_get_type_name(vlSymsp, __Vfunc_get_type_name__31__Vfuncout);
                                                    }(), __Vfunc_get_type_name__31__Vfuncout)), __Vfunc_uvm_report_enabled__30__Vfuncout);
                                    }(), __Vfunc_uvm_report_enabled__30__Vfuncout))) {
                            __Vtemp_1 = ([&]() {
                                    VL_NULL_CHECK(regs.at(unnamedblk1__DOT__ridx), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 142)
                                         ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__34__Vfuncout);
                                }(), __Vtask_get_full_name__34__Vfuncout);
                            __Vtemp_2 = ([&]() {
                                    VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__rm.at(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT__midx), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 142)
                                         ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__35__Vfuncout);
                                }(), __Vtask_get_full_name__35__Vfuncout);
                            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, 
                                                              VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                                            this->__VnoInFunc_get_type_name(vlSymsp, __Vfunc_get_type_name__33__Vfuncout);
                                        }(), __Vfunc_get_type_name__33__Vfuncout)), VL_SFORMATF_N_NX("Verifying reset value of register %@ in map \"%@\"...",0,
                                                                                -1,
                                                                                &(__Vtemp_1),
                                                                                -1,
                                                                                &(__Vtemp_2)) , 0x00000064U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh"s, 0x0000008eU, ""s, 1U);
                        }
                        co_await VL_NULL_CHECK(regs.at(unnamedblk1__DOT__ridx), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 144)->__VnoInFunc_mirror(vlProcess, vlSymsp, __Vtask_mirror__36__status, 1U, 0U, unnamedblk1__DOT__unnamedblk2__DOT__rm.at(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT__midx), 
                                                                                VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
                        unnamedblk1__DOT__unnamedblk2__DOT__status 
                            = __Vtask_mirror__36__status;
                        if ((0U != unnamedblk1__DOT__unnamedblk2__DOT__status)) {
                            if ((0U != ([&]() {
                                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                                                            this->__VnoInFunc_get_type_name(vlSymsp, __Vfunc_get_type_name__38__Vfuncout);
                                                        }(), __Vfunc_get_type_name__38__Vfuncout)), __Vfunc_uvm_report_enabled__37__Vfuncout);
                                        }(), __Vfunc_uvm_report_enabled__37__Vfuncout))) {
                                __Vtemp_3 = Vrecorders_top___024unit::__Venumtab_enum_name83
                                    [(3U & unnamedblk1__DOT__unnamedblk2__DOT__status)];
                                __Vtemp_4 = ([&]() {
                                        VL_NULL_CHECK(regs.at(unnamedblk1__DOT__ridx), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 149)
                                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__41__Vfuncout);
                                    }(), __Vtask_get_full_name__41__Vfuncout);
                                __Vtemp_5 = ([&]() {
                                        VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__rm.at(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT__midx), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 149)
                                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__42__Vfuncout);
                                    }(), __Vtask_get_full_name__42__Vfuncout);
                                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, 
                                                                   VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                                                this->__VnoInFunc_get_type_name(vlSymsp, __Vfunc_get_type_name__40__Vfuncout);
                                            }(), __Vfunc_get_type_name__40__Vfuncout)), VL_SFORMATF_N_NX("Status was %@ when reading reset value of register \"%@\" through map \"%@\".",0,
                                                                                -1,
                                                                                &(__Vtemp_3),
                                                                                -1,
                                                                                &(__Vtemp_4),
                                                                                -1,
                                                                                &(__Vtemp_5)) , 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh"s, 0x00000095U, ""s, 1U);
                            }
                        }
                        unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT__midx 
                            = ((IData)(1U) + unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT__midx);
                    }
                }
                if ((0U != unnamedblk1__DOT__unnamedblk2__DOT__field_check_restore.first(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__field))) {
                    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__field__Vfirst = 1U;
                    while (((IData)(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__field__Vfirst) 
                            || (0U != unnamedblk1__DOT__unnamedblk2__DOT__field_check_restore.next(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__field)))) {
                        unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__field__Vfirst = 0U;
                        VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__field, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 155)->__VnoInFunc_set_compare(vlSymsp, unnamedblk1__DOT__unnamedblk2__DOT__field_check_restore
                                                                                .at(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__field));
                    }
                }
                __Vlabel1: ;
            }
            unnamedblk1__DOT__ridx = ((IData)(1U) + unnamedblk1__DOT__ridx);
        }
        VL_NULL_CHECK(blk, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_hw_reset_seq.svh", 163)->__VnoInFunc_get_blocks(vlSymsp, unnamedblk6__DOT__blks, 1U);
        unnamedblk6__DOT__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk6__DOT__unnamedblk7__DOT__i, unnamedblk6__DOT__blks.size())) {
            co_await this->__VnoInFunc_do_block(vlProcess, vlSymsp, unnamedblk6__DOT__blks.at(unnamedblk6__DOT__unnamedblk7__DOT__i));
            unnamedblk6__DOT__unnamedblk7__DOT__i = 
                ((IData)(1U) + unnamedblk6__DOT__unnamedblk7__DOT__i);
        }
        __Vlabel0: ;
    }
    co_return;}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_reset_blk(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_block> blk) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_reset_blk\n"); );
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_randomize(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__47__Vfuncout;
    __Vfunc___VBasicRand__47__Vfuncout = 0;
    // Body
    Vrecorders_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vrecorders_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__47__Vfuncout);
            }(), __Vfunc___VBasicRand__47__Vfuncout));
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc___Vsetup_constraints(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc___VBasicRand(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::_ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vrecorders_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::~Vrecorders_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vrecorders_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vrecorders_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_hw_reset_seq::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284::to_string_middle();
    return (out);
}
