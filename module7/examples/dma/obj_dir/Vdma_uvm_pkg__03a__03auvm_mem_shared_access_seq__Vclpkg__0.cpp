// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"

void Vdma_uvm_pkg__03a__03auvm_mem_shared_access_seq__Vclpkg::__VnoInFunc_get_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__pi179> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03auvm_mem_shared_access_seq__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__pi179> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi179__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vdma_uvm_pkg__03a__03auvm_mem_shared_access_seq__Vclpkg::__VnoInFunc_type_name(Vdma__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03auvm_mem_shared_access_seq__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_mem_shared_access_seq"s;
}

void Vdma_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc_get_object_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__pi179> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi179__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vdma_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc_create(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_mem_shared_access_seq> tmp;
    tmp = ((""s == name) ? VL_NEW(Vdma_uvm_pkg__03a__03auvm_mem_shared_access_seq, vlProcess, vlSymsp, "uvm_mem_shared_access_seq"s)
            : VL_NEW(Vdma_uvm_pkg__03a__03auvm_mem_shared_access_seq, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vdma_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc_get_type_name(Vdma__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_mem_shared_access_seq"s;
}

Vdma_uvm_pkg__03a__03auvm_mem_shared_access_seq::Vdma_uvm_pkg__03a__03auvm_mem_shared_access_seq(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name)
    : Vdma_uvm_pkg__03a__03auvm_reg_sequence__Tz307(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_mem_shared_access_seq::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

VlCoroutine Vdma_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc_body(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc_body\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__4__Vfuncout;
    __Vfunc_uvm_report_enabled__4__Vfuncout = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_resource__Tz30> __Vfunc_get_by_name__6__Vfuncout;
    std::string __Vtask_get_full_name__7__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_resource__Tz30> __Vfunc_get_by_name__8__Vfuncout;
    std::string __Vtask_get_full_name__9__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_resource__Tz30> __Vfunc_get_by_name__10__Vfuncout;
    std::string __Vtask_get_full_name__11__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_resource__Tz30> __Vfunc_get_by_name__12__Vfuncout;
    std::string __Vtask_get_full_name__13__Vfuncout;
    IData/*31:0*/ __Vtask_get_n_maps__14__Vfuncout;
    __Vtask_get_n_maps__14__Vfuncout = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_backdoor> __Vtask_get_backdoor__16__Vfuncout;
    std::string __Vtask_get_access__17__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__18__Vfuncout;
    __Vfunc_uvm_report_enabled__18__Vfuncout = 0;
    std::string __Vtask_get_full_name__20__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__21__Vfuncout;
    __Vfunc_uvm_report_enabled__21__Vfuncout = 0;
    std::string __Vtask_get_full_name__23__Vfuncout;
    std::string __Vtask_get_full_name__24__Vfuncout;
    QData/*63:0*/ __Vtask_get_size__25__Vfuncout;
    __Vtask_get_size__25__Vfuncout = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_backdoor> __Vtask_get_backdoor__26__Vfuncout;
    IData/*31:0*/ __Vtask_peek__27__status;
    __Vtask_peek__27__status = 0;
    QData/*63:0*/ __Vtask_peek__27__value;
    __Vtask_peek__27__value = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__28__Vfuncout;
    __Vfunc_uvm_report_enabled__28__Vfuncout = 0;
    std::string __Vtask_get_full_name__30__Vfuncout;
    IData/*31:0*/ __Vtask_read__31__status;
    __Vtask_read__31__status = 0;
    QData/*63:0*/ __Vtask_read__31__value;
    __Vtask_read__31__value = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__32__Vfuncout;
    __Vfunc_uvm_report_enabled__32__Vfuncout = 0;
    std::string __Vtask_get_full_name__34__Vfuncout;
    std::string __Vtask_get_full_name__35__Vfuncout;
    IData/*31:0*/ __Vtask_write__36__status;
    __Vtask_write__36__status = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__37__Vfuncout;
    __Vfunc_uvm_report_enabled__37__Vfuncout = 0;
    std::string __Vtask_get_full_name__39__Vfuncout;
    std::string __Vtask_get_full_name__40__Vfuncout;
    IData/*31:0*/ __Vtask_read__41__status;
    __Vtask_read__41__status = 0;
    QData/*63:0*/ __Vtask_read__41__value;
    __Vtask_read__41__value = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__42__Vfuncout;
    __Vfunc_uvm_report_enabled__42__Vfuncout = 0;
    std::string __Vtask_get_full_name__44__Vfuncout;
    std::string __Vtask_get_full_name__45__Vfuncout;
    std::string __Vtask_get_access__46__Vfuncout;
    std::string __Vtask_get_access__47__Vfuncout;
    IData/*31:0*/ __Vtask_get_n_bits__48__Vfuncout;
    __Vtask_get_n_bits__48__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__49__Vfuncout;
    __Vfunc_uvm_report_enabled__49__Vfuncout = 0;
    std::string __Vtask_get_full_name__51__Vfuncout;
    std::string __Vtask_get_full_name__52__Vfuncout;
    std::string __Vtask_get_full_name__53__Vfuncout;
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
    std::string __Vtemp_17;
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1__DOT__j;
    unnamedblk1__DOT__j = 0;
    std::string unnamedblk1__DOT__unnamedblk2__DOT__right;
    IData/*31:0*/ unnamedblk3__DOT__j;
    unnamedblk3__DOT__j = 0;
    IData/*31:0*/ unnamedblk3__DOT__unnamedblk4__DOT__offset;
    unnamedblk3__DOT__unnamedblk4__DOT__offset = 0;
    IData/*31:0*/ unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__status;
    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__status = 0;
    QData/*63:0*/ unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__prev;
    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__prev = 0;
    QData/*63:0*/ unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__v;
    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__v = 0;
    IData/*31:0*/ unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k;
    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k = 0;
    QData/*63:0*/ unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__actual;
    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__actual = 0;
    QData/*63:0*/ unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp;
    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp = 0;
    IData/*31:0*/ read_from;
    read_from = 0;
    VlQueue<VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_map>> maps;
    {
        if ((VlNull{} == this->__PVT__mem)) {
            if ((0U != ([&]() {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_shared_access_seq"s, __Vfunc_uvm_report_enabled__4__Vfuncout);
                        }(), __Vfunc_uvm_report_enabled__4__Vfuncout))) {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_shared_access_seq"s, "No memory specified to run sequence on"s, 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x000000e6U, ""s, 1U);
            }
            goto __Vlabel0;
        }
        if (((((VlNull{} != ([&]() {
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                        VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 235)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__7__Vfuncout);
                                                    }(), __Vtask_get_full_name__7__Vfuncout))), "NO_REG_TESTS"s, 0U, __Vfunc_get_by_name__6__Vfuncout);
                                }(), __Vfunc_get_by_name__6__Vfuncout)) 
               || (VlNull{} != ([&]() {
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                        VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 237)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__9__Vfuncout);
                                                    }(), __Vtask_get_full_name__9__Vfuncout))), "NO_MEM_TESTS"s, 0U, __Vfunc_get_by_name__8__Vfuncout);
                                }(), __Vfunc_get_by_name__8__Vfuncout))) 
              || (VlNull{} != ([&]() {
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                    VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 239)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__11__Vfuncout);
                                                }(), __Vtask_get_full_name__11__Vfuncout))), "NO_REG_SHARED_ACCESS_TEST"s, 0U, __Vfunc_get_by_name__10__Vfuncout);
                            }(), __Vfunc_get_by_name__10__Vfuncout))) 
             || (VlNull{} != ([&]() {
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 241)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__13__Vfuncout);
                                            }(), __Vtask_get_full_name__13__Vfuncout))), "NO_MEM_SHARED_ACCESS_TEST"s, 0U, __Vfunc_get_by_name__12__Vfuncout);
                        }(), __Vfunc_get_by_name__12__Vfuncout)))) {
            goto __Vlabel0;
        }
        if (VL_GTS_III(32, 2U, ([&]() {
                        VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 246)
                                ->__VnoInFunc_get_n_maps(vlSymsp, __Vtask_get_n_maps__14__Vfuncout);
                    }(), __Vtask_get_n_maps__14__Vfuncout))) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 247)->__VnoInFunc_get_maps(vlSymsp, maps);
        read_from = 0xffffffffU;
        if ((VlNull{} == ([&]() {
                        VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 252)
                          ->__VnoInFunc_get_backdoor(vlSymsp, 1U, __Vtask_get_backdoor__16__Vfuncout);
                    }(), __Vtask_get_backdoor__16__Vfuncout))) {
            {
                unnamedblk1__DOT__j = 0U;
                while (VL_LTS_III(32, unnamedblk1__DOT__j, maps.size())) {
                    VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 255)->__VnoInFunc_get_access(vlProcess, vlSymsp, maps.at(unnamedblk1__DOT__j), __Vtask_get_access__17__Vfuncout);
                    unnamedblk1__DOT__unnamedblk2__DOT__right 
                        = __Vtask_get_access__17__Vfuncout;
                    if ((("RW"s == unnamedblk1__DOT__unnamedblk2__DOT__right) 
                         | ("RO"s == unnamedblk1__DOT__unnamedblk2__DOT__right))) {
                        read_from = unnamedblk1__DOT__j;
                        goto __Vlabel1;
                    }
                    unnamedblk1__DOT__j = ((IData)(1U) 
                                           + unnamedblk1__DOT__j);
                }
                __Vlabel1: ;
            }
            if (VL_GTS_III(32, 0U, read_from)) {
                if ((0U != ([&]() {
                                this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "uvm_mem_shared_access_seq"s, __Vfunc_uvm_report_enabled__18__Vfuncout);
                            }(), __Vfunc_uvm_report_enabled__18__Vfuncout))) {
                    __Vtemp_1 = ([&]() {
                            VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 263)
                                 ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__20__Vfuncout);
                        }(), __Vtask_get_full_name__20__Vfuncout);
                    this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "uvm_mem_shared_access_seq"s, VL_SFORMATF_N_NX("Memory \"%@\" cannot be read from any maps or backdoor. Shared access not verified.",0,
                                                                                -1,
                                                                                &(__Vtemp_1)) , 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x00000107U, ""s, 1U);
                }
                goto __Vlabel0;
            }
        }
        unnamedblk3__DOT__j = 0U;
        while (VL_LTS_III(32, unnamedblk3__DOT__j, maps.size())) {
            if ((0U != ([&]() {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "uvm_mem_shared_access_seq"s, __Vfunc_uvm_report_enabled__21__Vfuncout);
                        }(), __Vfunc_uvm_report_enabled__21__Vfuncout))) {
                __Vtemp_2 = ([&]() {
                        VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 272)
                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__23__Vfuncout);
                    }(), __Vtask_get_full_name__23__Vfuncout);
                __Vtemp_3 = ([&]() {
                        VL_NULL_CHECK(maps.at(unnamedblk3__DOT__j), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 272)
                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__24__Vfuncout);
                    }(), __Vtask_get_full_name__24__Vfuncout);
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "uvm_mem_shared_access_seq"s, VL_SFORMATF_N_NX("Writing shared memory \"%@\" via map \"%@\".",0,
                                                                                -1,
                                                                                &(__Vtemp_2),
                                                                                -1,
                                                                                &(__Vtemp_3)) , 0x00000064U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x00000110U, ""s, 1U);
            }
            unnamedblk3__DOT__unnamedblk4__DOT__offset = 0U;
            while (((QData)((IData)(unnamedblk3__DOT__unnamedblk4__DOT__offset)) 
                    < ([&]() {
                            VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 275)
                       ->__VnoInFunc_get_size(vlSymsp, __Vtask_get_size__25__Vfuncout);
                        }(), __Vtask_get_size__25__Vfuncout))) {
                if ((VlNull{} != ([&]() {
                                VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 280)
                                  ->__VnoInFunc_get_backdoor(vlSymsp, 1U, __Vtask_get_backdoor__26__Vfuncout);
                            }(), __Vtask_get_backdoor__26__Vfuncout))) {
                    VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 281)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__27__status, 
                                                                                VL_EXTENDS_QI(64,32, unnamedblk3__DOT__unnamedblk4__DOT__offset), __Vtask_peek__27__value, ""s, VlNull{}, VlNull{}, ""s, 0U);
                    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__status 
                        = __Vtask_peek__27__status;
                    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__prev 
                        = __Vtask_peek__27__value;
                    if ((0U != unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__status)) {
                        if ((0U != ([&]() {
                                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_shared_access_seq"s, __Vfunc_uvm_report_enabled__28__Vfuncout);
                                    }(), __Vfunc_uvm_report_enabled__28__Vfuncout))) {
                            __Vtemp_4 = Vdma___024unit::__Venumtab_enum_name83
                                [(3U & unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__status)];
                            __Vtemp_5 = ([&]() {
                                    VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 284)
                                         ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__30__Vfuncout);
                                }(), __Vtask_get_full_name__30__Vfuncout);
                            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_shared_access_seq"s, VL_SFORMATF_N_NX("Status was %@ when reading initial value of \"%@\"[%0d] through backdoor.",0,
                                                                                -1,
                                                                                &(__Vtemp_4),
                                                                                -1,
                                                                                &(__Vtemp_5),
                                                                                32,
                                                                                unnamedblk3__DOT__unnamedblk4__DOT__offset) , 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x0000011cU, ""s, 1U);
                        }
                    }
                } else {
                    co_await VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 288)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__31__status, 
                                                                                VL_EXTENDS_QI(64,32, unnamedblk3__DOT__unnamedblk4__DOT__offset), __Vtask_read__31__value, 0U, maps.at(read_from), 
                                                                                VlClassRef<Vdma_uvm_pkg__03a__03auvm_mem_shared_access_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
                    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__status 
                        = __Vtask_read__31__status;
                    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__prev 
                        = __Vtask_read__31__value;
                    if ((0U != unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__status)) {
                        if ((0U != ([&]() {
                                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_shared_access_seq"s, __Vfunc_uvm_report_enabled__32__Vfuncout);
                                    }(), __Vfunc_uvm_report_enabled__32__Vfuncout))) {
                            __Vtemp_6 = Vdma___024unit::__Venumtab_enum_name83
                                [(3U & unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__status)];
                            __Vtemp_7 = ([&]() {
                                    VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 292)
                                         ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__34__Vfuncout);
                                }(), __Vtask_get_full_name__34__Vfuncout);
                            __Vtemp_8 = ([&]() {
                                    VL_NULL_CHECK(maps.at(read_from), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 292)
                                         ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__35__Vfuncout);
                                }(), __Vtask_get_full_name__35__Vfuncout);
                            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_shared_access_seq"s, VL_SFORMATF_N_NX("Status was %@ when reading initial value of \"%@\"[%0d] through map \"%@\".",0,
                                                                                -1,
                                                                                &(__Vtemp_6),
                                                                                -1,
                                                                                &(__Vtemp_7),
                                                                                32,
                                                                                unnamedblk3__DOT__unnamedblk4__DOT__offset,
                                                                                -1,
                                                                                &(__Vtemp_8)) , 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x00000124U, ""s, 1U);
                        }
                    }
                }
                unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__v 
                    = VL_RANDOM_Q();
                co_await VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 300)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__36__status, 
                                                                                VL_EXTENDS_QI(64,32, unnamedblk3__DOT__unnamedblk4__DOT__offset), unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__v, 0U, maps.at(unnamedblk3__DOT__j), 
                                                                                VlClassRef<Vdma_uvm_pkg__03a__03auvm_mem_shared_access_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
                unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__status 
                    = __Vtask_write__36__status;
                if ((0U != unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__status)) {
                    if ((0U != ([&]() {
                                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_shared_access_seq"s, __Vfunc_uvm_report_enabled__37__Vfuncout);
                                }(), __Vfunc_uvm_report_enabled__37__Vfuncout))) {
                        __Vtemp_9 = Vdma___024unit::__Venumtab_enum_name83
                            [(3U & unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__status)];
                        __Vtemp_10 = ([&]() {
                                VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 303)
                                      ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__39__Vfuncout);
                            }(), __Vtask_get_full_name__39__Vfuncout);
                        __Vtemp_11 = ([&]() {
                                VL_NULL_CHECK(maps.at(unnamedblk3__DOT__j), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 303)
                                      ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__40__Vfuncout);
                            }(), __Vtask_get_full_name__40__Vfuncout);
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_shared_access_seq"s, VL_SFORMATF_N_NX("Status was %@ when writing \"%@\"[%0d] through map \"%@\".",0,
                                                                                -1,
                                                                                &(__Vtemp_9),
                                                                                -1,
                                                                                &(__Vtemp_10),
                                                                                32,
                                                                                unnamedblk3__DOT__unnamedblk4__DOT__offset,
                                                                                -1,
                                                                                &(__Vtemp_11)) , 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x0000012fU, ""s, 1U);
                    }
                }
                unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k = 0U;
                while (VL_LTS_III(32, unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k, maps.size())) {
                    co_await VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 310)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__41__status, 
                                                                                VL_EXTENDS_QI(64,32, unnamedblk3__DOT__unnamedblk4__DOT__offset), __Vtask_read__41__value, 0U, maps.at(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k), 
                                                                                VlClassRef<Vdma_uvm_pkg__03a__03auvm_mem_shared_access_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
                    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__status 
                        = __Vtask_read__41__status;
                    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__actual 
                        = __Vtask_read__41__value;
                    if ((0U != unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__status)) {
                        if ((0U != ([&]() {
                                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_shared_access_seq"s, __Vfunc_uvm_report_enabled__42__Vfuncout);
                                    }(), __Vfunc_uvm_report_enabled__42__Vfuncout))) {
                            __Vtemp_12 = Vdma___024unit::__Venumtab_enum_name83
                                [(3U & unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__status)];
                            __Vtemp_13 = ([&]() {
                                    VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 313)
                                          ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__44__Vfuncout);
                                }(), __Vtask_get_full_name__44__Vfuncout);
                            __Vtemp_14 = ([&]() {
                                    VL_NULL_CHECK(maps.at(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 313)
                                          ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__45__Vfuncout);
                                }(), __Vtask_get_full_name__45__Vfuncout);
                            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_shared_access_seq"s, VL_SFORMATF_N_NX("Status was %@ when reading %@[%0d] through map \"%@\".",0,
                                                                                -1,
                                                                                &(__Vtemp_12),
                                                                                -1,
                                                                                &(__Vtemp_13),
                                                                                32,
                                                                                unnamedblk3__DOT__unnamedblk4__DOT__offset,
                                                                                -1,
                                                                                &(__Vtemp_14)) , 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x00000139U, ""s, 1U);
                        }
                    }
                    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                        = unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__v;
                    if (("RO"s == ([&]() {
                                    VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 318)
                                   ->__VnoInFunc_get_access(vlProcess, vlSymsp, maps.at(unnamedblk3__DOT__j), __Vtask_get_access__46__Vfuncout);
                                }(), __Vtask_get_access__46__Vfuncout))) {
                        unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                            = unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__prev;
                    }
                    if (("WO"s == ([&]() {
                                    VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 321)
                                   ->__VnoInFunc_get_access(vlProcess, vlSymsp, maps.at(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k), __Vtask_get_access__47__Vfuncout);
                                }(), __Vtask_get_access__47__Vfuncout))) {
                        unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp = 0ULL;
                    }
                    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                        = (unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                           & (VL_SHIFTL_QQI(64,64,32, 1ULL, 
                                            ([&]() {
                                        VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 325)
                                             ->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__48__Vfuncout);
                                    }(), __Vtask_get_n_bits__48__Vfuncout)) 
                              - 1ULL));
                    if ((unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__actual 
                         != unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                        if ((0U != ([&]() {
                                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_mem_shared_access_seq"s, __Vfunc_uvm_report_enabled__49__Vfuncout);
                                    }(), __Vfunc_uvm_report_enabled__49__Vfuncout))) {
                            __Vtemp_15 = ([&]() {
                                    VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 329)
                                          ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__51__Vfuncout);
                                }(), __Vtask_get_full_name__51__Vfuncout);
                            __Vtemp_16 = ([&]() {
                                    VL_NULL_CHECK(maps.at(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 329)
                                          ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__52__Vfuncout);
                                }(), __Vtask_get_full_name__52__Vfuncout);
                            __Vtemp_17 = ([&]() {
                                    VL_NULL_CHECK(maps.at(unnamedblk3__DOT__j), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 329)
                                          ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__53__Vfuncout);
                                }(), __Vtask_get_full_name__53__Vfuncout);
                            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_mem_shared_access_seq"s, VL_SFORMATF_N_NX("%@[%0d] through map \"%@\" is 'h%x instead of 'h%x after writing 'h%x via map \"%@\" over 'h%x.",0,
                                                                                -1,
                                                                                &(__Vtemp_15),
                                                                                32,
                                                                                unnamedblk3__DOT__unnamedblk4__DOT__offset,
                                                                                -1,
                                                                                &(__Vtemp_16),
                                                                                64,
                                                                                unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__actual,
                                                                                64,
                                                                                unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp,
                                                                                64,
                                                                                unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__v,
                                                                                -1,
                                                                                &(__Vtemp_17),
                                                                                64,
                                                                                unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__prev) , 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x00000149U, ""s, 1U);
                        }
                    }
                    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k 
                        = ((IData)(1U) + unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k);
                }
                unnamedblk3__DOT__unnamedblk4__DOT__offset 
                    = ((IData)(1U) + unnamedblk3__DOT__unnamedblk4__DOT__offset);
            }
            unnamedblk3__DOT__j = ((IData)(1U) + unnamedblk3__DOT__j);
        }
        __Vlabel0: ;
    }
    co_return;}

void Vdma_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__55__Vfuncout;
    __Vfunc___VBasicRand__55__Vfuncout = 0;
    // Body
    Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__55__Vfuncout);
            }(), __Vfunc___VBasicRand__55__Vfuncout));
}

void Vdma_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc___VBasicRand(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vdma_uvm_pkg__03a__03auvm_mem_shared_access_seq::_ctor_var_reset(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_mem_shared_access_seq::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vdma_uvm_pkg__03a__03auvm_mem_shared_access_seq::~Vdma_uvm_pkg__03a__03auvm_mem_shared_access_seq() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_mem_shared_access_seq::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_mem_shared_access_seq>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_mem_shared_access_seq::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vdma_uvm_pkg__03a__03auvm_mem_shared_access_seq::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_mem_shared_access_seq::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vdma_uvm_pkg__03a__03auvm_mem_shared_access_seq::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_mem_shared_access_seq::to_string_middle\n"); );
    // Body
    std::string out;
    out += "mem:" + VL_TO_STRING(__PVT__mem);
    out += ", "+ Vdma_uvm_pkg__03a__03auvm_reg_sequence__Tz307::to_string_middle();
    return (out);
}
