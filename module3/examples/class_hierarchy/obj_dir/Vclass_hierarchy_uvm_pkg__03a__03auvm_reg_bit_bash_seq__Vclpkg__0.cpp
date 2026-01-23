// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclass_hierarchy.h for the primary calling header

#include "Vclass_hierarchy__pch.h"

void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_bit_bash_seq__Vclpkg::__VnoInFunc_get_type(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_registry__pi173> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_bit_bash_seq__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_registry__pi173> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi173__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_bit_bash_seq__Vclpkg::__VnoInFunc_type_name(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_bit_bash_seq__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_reg_bit_bash_seq"s;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_bit_bash_seq::__VnoInFunc_get_object_type(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_bit_bash_seq::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_registry__pi173> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi173__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_bit_bash_seq::__VnoInFunc_create(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_bit_bash_seq::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_bit_bash_seq> tmp;
    tmp = ((""s == name) ? VL_NEW(Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_bit_bash_seq, vlProcess, vlSymsp, "uvm_reg_bit_bash_seq"s)
            : VL_NEW(Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_bit_bash_seq, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_bit_bash_seq::__VnoInFunc_get_type_name(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_bit_bash_seq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_bit_bash_seq"s;
}

Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_bit_bash_seq::Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_bit_bash_seq(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name)
    : Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_sequence__Tz311(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_bit_bash_seq::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

VlCoroutine Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_bit_bash_seq::__VnoInFunc_body(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_bit_bash_seq::__VnoInFunc_body\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__4__Vfuncout;
    __Vfunc_uvm_report_enabled__4__Vfuncout = 0;
    std::string __Vfunc_get_name__7__Vfuncout;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq> __Vfunc_create__8__Vfuncout;
    // Body
    VL_KEEP_THIS;
    {
        if ((VlNull{} == Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_sequence__Tz311::__PVT__model)) {
            if ((0U != ([&]() {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_bit_bash_seq"s, __Vfunc_uvm_report_enabled__4__Vfuncout);
                        }(), __Vfunc_uvm_report_enabled__4__Vfuncout))) {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_bit_bash_seq"s, "No register model specified to run sequence on"s, 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh"s, 0x000000eeU, ""s, 1U);
            }
            goto __Vlabel0;
        }
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "STARTING_SEQ"s, 
                                          VL_CVT_PACK_STR_NN(
                                                             VL_CONCATN_NNN(
                                                                            VL_CONCATN_NNN("\n\nStarting "s, 
                                                                                ([&]() {
                                this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__7__Vfuncout);
                            }(), __Vfunc_get_name__7__Vfuncout)), " sequence...\n"s)), 0x00000064U, ""s, 0U, ""s, 0U);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi172__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "reg_single_bit_bash_seq"s, VlNull{}, ""s, __Vfunc_create__8__Vfuncout);
        this->__PVT__reg_seq = __Vfunc_create__8__Vfuncout;
        this->__VnoInFunc_reset_blk(vlSymsp, Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_sequence__Tz311::__PVT__model);
        VL_NULL_CHECK(Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_sequence__Tz311::__PVT__model, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 247)->__VnoInFunc_reset(vlSymsp, "HARD"s);
        co_await this->__VnoInFunc_do_block(vlProcess, vlSymsp, Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_sequence__Tz311::__PVT__model);
        __Vlabel0: ;
    }
    co_return;}

VlCoroutine Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_bit_bash_seq::__VnoInFunc_do_block(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_block> blk) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_bit_bash_seq::__VnoInFunc_do_block\n"); );
    // Locals
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_resource__Tz62> __Vfunc_get_by_name__12__Vfuncout;
    std::string __Vtask_get_full_name__13__Vfuncout;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_resource__Tz62> __Vfunc_get_by_name__14__Vfuncout;
    std::string __Vtask_get_full_name__15__Vfuncout;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_resource__Tz62> __Vfunc_get_by_name__17__Vfuncout;
    std::string __Vtask_get_full_name__18__Vfuncout;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_resource__Tz62> __Vfunc_get_by_name__19__Vfuncout;
    std::string __Vtask_get_full_name__20__Vfuncout;
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0;
    VlQueue<VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_block>> unnamedblk2__DOT__blks;
    IData/*31:0*/ unnamedblk2__DOT__unnamedblk3__DOT__i;
    unnamedblk2__DOT__unnamedblk3__DOT__i = 0;
    VlQueue<VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg>> regs;
    {
        if (((VlNull{} != ([&]() {
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz62__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                VL_NULL_CHECK(blk, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 260)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__13__Vfuncout);
                                            }(), __Vtask_get_full_name__13__Vfuncout))), "NO_REG_TESTS"s, 0U, __Vfunc_get_by_name__12__Vfuncout);
                        }(), __Vfunc_get_by_name__12__Vfuncout)) 
             || (VlNull{} != ([&]() {
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz62__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                VL_NULL_CHECK(blk, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 262)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__15__Vfuncout);
                                            }(), __Vtask_get_full_name__15__Vfuncout))), "NO_REG_BIT_BASH_TEST"s, 0U, __Vfunc_get_by_name__14__Vfuncout);
                        }(), __Vfunc_get_by_name__14__Vfuncout)))) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(blk, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 267)->__VnoInFunc_get_registers(vlSymsp, regs, 0U);
        unnamedblk1__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk1__DOT__i, regs.size())) {
            {
                if (((VlNull{} != ([&]() {
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz62__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                        VL_NULL_CHECK(regs.at(unnamedblk1__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 270)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__18__Vfuncout);
                                                    }(), __Vtask_get_full_name__18__Vfuncout))), "NO_REG_TESTS"s, 0U, __Vfunc_get_by_name__17__Vfuncout);
                                }(), __Vfunc_get_by_name__17__Vfuncout)) 
                     || (VlNull{} != ([&]() {
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz62__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                        VL_NULL_CHECK(regs.at(unnamedblk1__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 272)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__20__Vfuncout);
                                                    }(), __Vtask_get_full_name__20__Vfuncout))), "NO_REG_BIT_BASH_TEST"s, 0U, __Vfunc_get_by_name__19__Vfuncout);
                                }(), __Vfunc_get_by_name__19__Vfuncout)))) {
                    goto __Vlabel1;
                }
                VL_NULL_CHECK(this->__PVT__reg_seq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 276)->__PVT__rg 
                    = regs.at(unnamedblk1__DOT__i);
                co_await VL_NULL_CHECK(this->__PVT__reg_seq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 277)->__VnoInFunc_start(vlProcess, vlSymsp, VlNull{}, 
                                                                                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_bit_bash_seq>{this}, 0xffffffffU, 1U);
                __Vlabel1: ;
            }
            unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
        }
        VL_NULL_CHECK(blk, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 283)->__VnoInFunc_get_blocks(vlSymsp, unnamedblk2__DOT__blks, 0U);
        unnamedblk2__DOT__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk2__DOT__unnamedblk3__DOT__i, unnamedblk2__DOT__blks.size())) {
            co_await this->__VnoInFunc_do_block(vlProcess, vlSymsp, unnamedblk2__DOT__blks.at(unnamedblk2__DOT__unnamedblk3__DOT__i));
            unnamedblk2__DOT__unnamedblk3__DOT__i = 
                ((IData)(1U) + unnamedblk2__DOT__unnamedblk3__DOT__i);
        }
        __Vlabel0: ;
    }
    co_return;}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_bit_bash_seq::__VnoInFunc_reset_blk(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_block> blk) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_bit_bash_seq::__VnoInFunc_reset_blk\n"); );
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_bit_bash_seq::__VnoInFunc_randomize(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_bit_bash_seq::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__25__Vfuncout;
    __Vfunc___VBasicRand__25__Vfuncout = 0;
    // Body
    Vclass_hierarchy_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vclass_hierarchy_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__25__Vfuncout);
            }(), __Vfunc___VBasicRand__25__Vfuncout));
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_bit_bash_seq::__VnoInFunc___Vsetup_constraints(Vclass_hierarchy__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_bit_bash_seq::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_bit_bash_seq::__VnoInFunc___VBasicRand(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_bit_bash_seq::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_bit_bash_seq::_ctor_var_reset(Vclass_hierarchy__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_bit_bash_seq::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_bit_bash_seq::~Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_bit_bash_seq() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_bit_bash_seq::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_bit_bash_seq>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_bit_bash_seq::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_bit_bash_seq::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_bit_bash_seq::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_bit_bash_seq::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_bit_bash_seq::to_string_middle\n"); );
    // Body
    std::string out;
    out += "reg_seq:" + VL_TO_STRING(__PVT__reg_seq);
    out += ", "+ Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_sequence__Tz311::to_string_middle();
    return (out);
}
