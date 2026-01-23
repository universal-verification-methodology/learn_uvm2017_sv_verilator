// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varchitecture.h for the primary calling header

#include "Varchitecture__pch.h"

void Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_disable_auto_item_recording(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_disable_auto_item_recording\n"); );
    // Body
    this->__PVT__m_auto_item_recording = 0U;
}

void Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_is_auto_item_recording_enabled(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ &is_auto_item_recording_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_is_auto_item_recording_enabled\n"); );
    // Body
    is_auto_item_recording_enabled__Vfuncrtn = this->__PVT__m_auto_item_recording;
}

Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::Varchitecture_uvm_pkg__03a__03auvm_sequencer_base(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_component> parent)
    : Varchitecture_uvm_pkg__03a__03auvm_component(vlProcess, vlSymsp, name, parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__m_auto_item_recording = 1U;
    this->__PVT__m_arbitration = 0U;
    this->__PVT__m_last_wait_relevant_time = 0ULL;
    this->__PVT__m_max_zero_time_wait_relevant_count = 0x0000000aU;
    this->__PVT__m_wait_relevant_count = 0U;
    IData/*31:0*/ __Vincrement1;
    __Vincrement1 = 0;
    ;
    __Vincrement1 = vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_sequencer_id;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_sequencer_id 
        = ((IData)(1U) + vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_sequencer_id);
    this->__PVT__m_sequencer_id = __Vincrement1;
    this->__PVT__m_lock_arb_size = 0xffffffffU;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__all_sequencer_insts.at(this->__PVT__m_sequencer_id) 
        = VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequencer_base>{this};
}

void Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_do_print(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_do_print\n"); );
    // Locals
    std::string __Vtask_get_full_name__7__Vfuncout;
    IData/*31:0*/ __Vtask_get_sequence_id__8__Vfuncout;
    __Vtask_get_sequence_id__8__Vfuncout = 0;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    // Body
    IData/*31:0*/ unnamedblk234__DOT__i;
    unnamedblk234__DOT__i = 0;
    IData/*31:0*/ unnamedblk235__DOT__i;
    unnamedblk235__DOT__i = 0;
    Varchitecture_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 442)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "arbitration_queue"s, this->__PVT__arb_sequence_q.size(), "array"s, 0x2eU);
    unnamedblk234__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk234__DOT__i, this->__PVT__arb_sequence_q.size())) {
        __Vtemp_1 = Varchitecture___024unit::__Venumtab_enum_name71
            [(1U & VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(unnamedblk234__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 445)
              ->__PVT__request)];
        VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 444)->__VnoInFunc_print_string(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%0d]",0,
                                                                                32,
                                                                                unnamedblk234__DOT__i) , VL_SFORMATF_N_NX("%@@seqid%0d",0,
                                                                                -1,
                                                                                &(__Vtemp_1),
                                                                                32,
                                                                                VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(unnamedblk234__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 445)
                                                                                ->__PVT__sequence_id) , 0x5bU);
        unnamedblk234__DOT__i = ((IData)(1U) + unnamedblk234__DOT__i);
    }
    VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 446)->__VnoInFunc_print_array_footer(vlSymsp, this->__PVT__arb_sequence_q.size());
    VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 448)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "lock_queue"s, this->__PVT__lock_list.size(), "array"s, 0x2eU);
    unnamedblk235__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk235__DOT__i, this->__PVT__lock_list.size())) {
        __Vtemp_2 = ([&]() {
                VL_NULL_CHECK(this->__PVT__lock_list.at(unnamedblk235__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 451)
                     ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__7__Vfuncout);
            }(), __Vtask_get_full_name__7__Vfuncout);
        VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 450)->__VnoInFunc_print_string(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%0d]",0,
                                                                                32,
                                                                                unnamedblk235__DOT__i) , VL_SFORMATF_N_NX("%@@seqid%0d",0,
                                                                                -1,
                                                                                &(__Vtemp_2),
                                                                                32,
                                                                                ([&]() {
                            VL_NULL_CHECK(this->__PVT__lock_list.at(unnamedblk235__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 451)
                                                                                ->__VnoInFunc_get_sequence_id(vlSymsp, __Vtask_get_sequence_id__8__Vfuncout);
                        }(), __Vtask_get_sequence_id__8__Vfuncout)) , 0x5bU);
        unnamedblk235__DOT__i = ((IData)(1U) + unnamedblk235__DOT__i);
    }
    VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 452)->__VnoInFunc_print_array_footer(vlSymsp, this->__PVT__lock_list.size());
}

void Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_update_lists(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_update_lists\n"); );
    // Body
    this->__PVT__m_lock_arb_size = ((IData)(1U) + this->__PVT__m_lock_arb_size);
}

void Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_convert2string(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_convert2string\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_sequence_id__10__Vfuncout;
    __Vtask_get_sequence_id__10__Vfuncout = 0;
    std::string __Vtemp_1;
    // Body
    IData/*31:0*/ unnamedblk236__DOT__i;
    unnamedblk236__DOT__i = 0;
    IData/*31:0*/ unnamedblk237__DOT__i;
    unnamedblk237__DOT__i = 0;
    std::string s;
    VL_SFORMAT_NX(64,s,"  -- arb i/id/type: ",0);
    unnamedblk236__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk236__DOT__i, this->__PVT__arb_sequence_q.size())) {
        __Vtemp_1 = Varchitecture___024unit::__Venumtab_enum_name71
            [(1U & VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(unnamedblk236__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 472)
              ->__PVT__request)];
        VL_SFORMAT_NX(64,s,"%@ %0d/%0d/%@ ",0,-1,&(s),
                      32,unnamedblk236__DOT__i,32,VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(unnamedblk236__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 472)
                      ->__PVT__sequence_id,-1,&(__Vtemp_1));
        unnamedblk236__DOT__i = ((IData)(1U) + unnamedblk236__DOT__i);
    }
    VL_SFORMAT_NX(64,s,"%@\n -- lock_list i/id: ",0,
                  -1,&(s));
    unnamedblk237__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk237__DOT__i, this->__PVT__lock_list.size())) {
        VL_SFORMAT_NX(64,s,"%@ %0d/%0d",0,-1,&(s),32,
                      unnamedblk237__DOT__i,32,([&]() {
                        VL_NULL_CHECK(this->__PVT__lock_list.at(unnamedblk237__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 476)
                                                ->__VnoInFunc_get_sequence_id(vlSymsp, __Vtask_get_sequence_id__10__Vfuncout);
                    }(), __Vtask_get_sequence_id__10__Vfuncout));
        unnamedblk237__DOT__i = ((IData)(1U) + unnamedblk237__DOT__i);
    }
    convert2string__Vfuncrtn = s;
}

void Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_find_number_driver_connections(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &m_find_number_driver_connections__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_find_number_driver_connections\n"); );
    // Body
    m_find_number_driver_connections__Vfuncrtn = 0U;
}

void Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_register_sequence(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, IData/*31:0*/ &m_register_sequence__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_register_sequence\n"); );
    // Locals
    IData/*31:0*/ __Vtask_m_get_sqr_sequence_id__11__Vfuncout;
    __Vtask_m_get_sqr_sequence_id__11__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_sequence_id__12__Vfuncout;
    __Vtask_get_sequence_id__12__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_sequence_id__14__Vfuncout;
    __Vtask_get_sequence_id__14__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_sequence_id__15__Vfuncout;
    __Vtask_get_sequence_id__15__Vfuncout = 0;
    // Body
    IData/*31:0*/ __Vincrement2;
    __Vincrement2 = 0;
    {
        if (VL_LTS_III(32, 0U, ([&]() {
                        VL_NULL_CHECK(sequence_ptr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 496)
                                ->__VnoInFunc_m_get_sqr_sequence_id(vlSymsp, this->__PVT__m_sequencer_id, 1U, __Vtask_m_get_sqr_sequence_id__11__Vfuncout);
                    }(), __Vtask_m_get_sqr_sequence_id__11__Vfuncout))) {
            VL_NULL_CHECK(sequence_ptr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 497)->__VnoInFunc_get_sequence_id(vlSymsp, __Vtask_get_sequence_id__12__Vfuncout);
            m_register_sequence__Vfuncrtn = __Vtask_get_sequence_id__12__Vfuncout;
            goto __Vlabel0;
        }
        __Vincrement2 = vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_sequence_id;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_sequence_id 
            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_sequence_id);
        VL_NULL_CHECK(sequence_ptr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 499)->__VnoInFunc_m_set_sqr_sequence_id(vlSymsp, this->__PVT__m_sequencer_id, __Vincrement2);
        this->__PVT__reg_sequences.at(([&]() {
                    VL_NULL_CHECK(sequence_ptr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 500)
                                       ->__VnoInFunc_get_sequence_id(vlSymsp, __Vtask_get_sequence_id__14__Vfuncout);
                }(), __Vtask_get_sequence_id__14__Vfuncout)) 
            = sequence_ptr;
        VL_NULL_CHECK(sequence_ptr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 501)->__VnoInFunc_get_sequence_id(vlSymsp, __Vtask_get_sequence_id__15__Vfuncout);
        m_register_sequence__Vfuncrtn = __Vtask_get_sequence_id__15__Vfuncout;
        __Vlabel0: ;
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_find_sequence(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ sequence_id, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> &m_find_sequence__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_find_sequence\n"); );
    // Body
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> seq_ptr;
    IData/*31:0*/ i;
    i = 0;
    {
        if ((0xffffffffU == sequence_id)) {
            if ((0U != this->__PVT__reg_sequences.first(i))) {
                m_find_sequence__Vfuncrtn = this->__PVT__reg_sequences
                    .at(i);
                goto __Vlabel0;
            }
            m_find_sequence__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        if ((! this->__PVT__reg_sequences.exists(sequence_id))) {
            m_find_sequence__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        m_find_sequence__Vfuncrtn = this->__PVT__reg_sequences
            .at(sequence_id);
        __Vlabel0: ;
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_unregister_sequence(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ sequence_id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_unregister_sequence\n"); );
    // Body
    {
        if ((! this->__PVT__reg_sequences.exists(sequence_id))) {
            goto __Vlabel0;
        }
        this->__PVT__reg_sequences.erase(sequence_id);
        __Vlabel0: ;
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_user_priority_arbitration(Varchitecture__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> avail_sequences, IData/*31:0*/ &user_priority_arbitration__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_user_priority_arbitration\n"); );
    // Body
    user_priority_arbitration__Vfuncrtn = avail_sequences.at(0U);
}

void Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_grant_queued_locks(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_grant_queued_locks\n"); );
    // Locals
    IData/*31:0*/ __Vtask_status__16__Vfuncout;
    __Vtask_status__16__Vfuncout = 0;
    IData/*31:0*/ __Vtask_status__17__Vfuncout;
    __Vtask_status__17__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__18__Vfuncout;
    __Vfunc_uvm_report_enabled__18__Vfuncout = 0;
    std::string __Vfunc_get_full_name__20__Vfuncout;
    std::string __Vtask_get_full_name__21__Vfuncout;
    CData/*0:0*/ __Vfunc_is_blocked__23__Vfuncout;
    __Vfunc_is_blocked__23__Vfuncout = 0;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    // Body
    VlQueue<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_request>> unnamedblk238__DOT__zombies;
    IData/*31:0*/ unnamedblk238__DOT__unnamedblk239__DOT__idx;
    unnamedblk238__DOT__unnamedblk239__DOT__idx = 0;
    VlQueue<IData/*31:0*/> unnamedblk240__DOT__lock_req_indices;
    unnamedblk240__DOT__lock_req_indices.atDefault() = 0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_request> unnamedblk240__DOT__unnamedblk241__DOT__lock_req;
    unnamedblk238__DOT__zombies = this->__PVT__arb_sequence_q.find(
                                                                   [&](
                                                                       IData/*31:0*/ item__DOT__index, 
                                                                       VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_request> item) -> 
                                                                   CData/*31:0*/ {
            return (((1U == VL_NULL_CHECK(item, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 555)
                      ->__PVT__request) && ((4U == 
                                             ([&]() {
                                    VL_NULL_CHECK(VL_NULL_CHECK(
                                                                item, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 555)
                                                  ->__PVT__process_id, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 555)
                                              ->__VnoInFunc_status(vlSymsp, __Vtask_status__16__Vfuncout);
                                }(), __Vtask_status__16__Vfuncout)) 
                                            || (0U 
                                                == 
                                                ([&]() {
                                    VL_NULL_CHECK(VL_NULL_CHECK(
                                                                item, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 555)
                                                  ->__PVT__process_id, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 555)
                                                 ->__VnoInFunc_status(vlSymsp, __Vtask_status__17__Vfuncout);
                                }(), __Vtask_status__17__Vfuncout)))));
        }
    );
    unnamedblk238__DOT__unnamedblk239__DOT__idx = 0U;
    while (VL_LTS_III(32, unnamedblk238__DOT__unnamedblk239__DOT__idx, unnamedblk238__DOT__zombies.size())) {
        if ((0U != ([&]() {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "SEQLCKZMB"s, __Vfunc_uvm_report_enabled__18__Vfuncout);
                    }(), __Vfunc_uvm_report_enabled__18__Vfuncout))) {
            __Vtemp_1 = ([&]() {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__20__Vfuncout);
                }(), __Vfunc_get_full_name__20__Vfuncout);
            __Vtemp_2 = ([&]() {
                    VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk238__DOT__zombies.at(unnamedblk238__DOT__unnamedblk239__DOT__idx), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 557)
                                  ->__PVT__sequence_ptr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 557)
                         ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__21__Vfuncout);
                }(), __Vtask_get_full_name__21__Vfuncout);
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "SEQLCKZMB"s, VL_SFORMATF_N_NX("The task responsible for requesting a lock on sequencer '%@' for sequence '%@' has been killed, to avoid a deadlock the sequence will be removed from the arbitration queues",0,
                                                                                -1,
                                                                                &(__Vtemp_1),
                                                                                -1,
                                                                                &(__Vtemp_2)) , 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh"s, 0x0000022dU, ""s, 1U);
        }
        this->__VnoInFunc_remove_sequence_from_queues(vlProcess, vlSymsp, VL_NULL_CHECK(unnamedblk238__DOT__zombies.at(unnamedblk238__DOT__unnamedblk239__DOT__idx), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 558)
                                                      ->__PVT__sequence_ptr);
        unnamedblk238__DOT__unnamedblk239__DOT__idx 
            = ((IData)(1U) + unnamedblk238__DOT__unnamedblk239__DOT__idx);
    }
    unnamedblk240__DOT__lock_req_indices = this->__PVT__arb_sequence_q.find_first_index(
                                                                                [&](
                                                                                IData/*31:0*/ item__DOT__index, 
                                                                                VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_request> item) -> 
                                                                                CData/*31:0*/ {
            return (((1U == VL_NULL_CHECK(item, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 565)
                      ->__PVT__request) && (1U & (~ 
                                                  ([&]() {
                                    this->__VnoInFunc_is_blocked(vlProcess, vlSymsp, VL_NULL_CHECK(
                                                                                item, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 565)
                                                                 ->__PVT__sequence_ptr, __Vfunc_is_blocked__23__Vfuncout);
                                }(), (IData)(__Vfunc_is_blocked__23__Vfuncout))))));
        }
    );
    if ((0U != unnamedblk240__DOT__lock_req_indices.size())) {
        unnamedblk240__DOT__unnamedblk241__DOT__lock_req 
            = this->__PVT__arb_sequence_q.at(unnamedblk240__DOT__lock_req_indices.at(0U));
        this->__PVT__lock_list.push_back(VL_NULL_CHECK(unnamedblk240__DOT__unnamedblk241__DOT__lock_req, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 568)
                                         ->__PVT__sequence_ptr);
        this->__VnoInFunc_m_set_arbitration_completed(vlSymsp, VL_NULL_CHECK(unnamedblk240__DOT__unnamedblk241__DOT__lock_req, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 569)
                                                      ->__PVT__request_id);
        this->__PVT__arb_sequence_q.erase(unnamedblk240__DOT__lock_req_indices.at(0U));
        this->__VnoInFunc_m_update_lists(vlSymsp);
    }
}

VlCoroutine Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_select_sequence(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_select_sequence\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_m_choose_next_request__27__Vfuncout;
    __Vfunc_m_choose_next_request__27__Vfuncout = 0;
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ selected_sequence;
    selected_sequence = 0;
    do {
        co_await this->__VnoInFunc_wait_for_sequences(vlProcess, vlSymsp);
        this->__VnoInFunc_m_choose_next_request(vlProcess, vlSymsp, __Vfunc_m_choose_next_request__27__Vfuncout);
        selected_sequence = __Vfunc_m_choose_next_request__27__Vfuncout;
        if ((0xffffffffU == selected_sequence)) {
            co_await this->__VnoInFunc_m_wait_for_available_sequence(vlProcess, vlSymsp);
        }
    } while ((0xffffffffU == selected_sequence));
    if (VL_LTES_III(32, 0U, selected_sequence)) {
        this->__VnoInFunc_m_set_arbitration_completed(vlSymsp, VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(selected_sequence), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 593)
                                                      ->__PVT__request_id);
        this->__PVT__arb_sequence_q.erase(selected_sequence);
        this->__VnoInFunc_m_update_lists(vlSymsp);
    }
    co_return;}

void Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_choose_next_request(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &m_choose_next_request__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_choose_next_request\n"); );
    // Locals
    IData/*31:0*/ __Vtask_status__32__Vfuncout;
    __Vtask_status__32__Vfuncout = 0;
    IData/*31:0*/ __Vtask_status__33__Vfuncout;
    __Vtask_status__33__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__34__Vfuncout;
    __Vfunc_uvm_report_enabled__34__Vfuncout = 0;
    std::string __Vfunc_get_full_name__36__Vfuncout;
    std::string __Vtask_get_full_name__37__Vfuncout;
    CData/*0:0*/ __Vfunc_is_blocked__39__Vfuncout;
    __Vfunc_is_blocked__39__Vfuncout = 0;
    CData/*0:0*/ __Vtask_is_relevant__40__Vfuncout;
    __Vtask_is_relevant__40__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_is_blocked__41__Vfuncout;
    __Vfunc_is_blocked__41__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_m_get_seq_item_priority__42__Vfuncout;
    __Vfunc_m_get_seq_item_priority__42__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_m_get_seq_item_priority__43__Vfuncout;
    __Vfunc_m_get_seq_item_priority__43__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_m_get_seq_item_priority__44__Vfuncout;
    __Vfunc_m_get_seq_item_priority__44__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_m_get_seq_item_priority__46__Vfuncout;
    __Vfunc_m_get_seq_item_priority__46__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_m_get_seq_item_priority__47__Vfuncout;
    __Vfunc_m_get_seq_item_priority__47__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_m_get_seq_item_priority__48__Vfuncout;
    __Vfunc_m_get_seq_item_priority__48__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_user_priority_arbitration__49__Vfuncout;
    __Vfunc_user_priority_arbitration__49__Vfuncout = 0;
    std::string __Vfunc_convert2string__51__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    // Body
    IData/*31:0*/ i;
    i = 0;
    IData/*31:0*/ temp;
    temp = 0;
    IData/*31:0*/ avail_sequence_count;
    avail_sequence_count = 0;
    IData/*31:0*/ sum_priority_val;
    sum_priority_val = 0;
    VlQueue<IData/*31:0*/> avail_sequences;
    avail_sequences.atDefault() = 0;
    VlQueue<IData/*31:0*/> highest_sequences;
    highest_sequences.atDefault() = 0;
    IData/*31:0*/ highest_pri;
    highest_pri = 0;
    std::string s;
    {
        avail_sequence_count = 0U;
        this->__VnoInFunc_grant_queued_locks(vlProcess, vlSymsp);
        i = 0U;
        while (VL_LTS_III(32, i, this->__PVT__arb_sequence_q.size())) {
            {
                if (((4U == ([&]() {
                                    VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 623)
                                                  ->__PVT__process_id, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 623)
                             ->__VnoInFunc_status(vlSymsp, __Vtask_status__32__Vfuncout);
                                }(), __Vtask_status__32__Vfuncout)) 
                     || (0U == ([&]() {
                                    VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 624)
                                                  ->__PVT__process_id, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 624)
                                ->__VnoInFunc_status(vlSymsp, __Vtask_status__33__Vfuncout);
                                }(), __Vtask_status__33__Vfuncout)))) {
                    if ((0U != ([&]() {
                                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "SEQREQZMB"s, __Vfunc_uvm_report_enabled__34__Vfuncout);
                                }(), __Vfunc_uvm_report_enabled__34__Vfuncout))) {
                        __Vtemp_1 = ([&]() {
                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__36__Vfuncout);
                            }(), __Vfunc_get_full_name__36__Vfuncout);
                        __Vtemp_2 = ([&]() {
                                VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 625)
                                              ->__PVT__sequence_ptr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 625)
                                     ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__37__Vfuncout);
                            }(), __Vtask_get_full_name__37__Vfuncout);
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "SEQREQZMB"s, VL_SFORMATF_N_NX("The task responsible for requesting a wait_for_grant on sequencer '%@' for sequence '%@' has been killed, to avoid a deadlock the sequence will be removed from the arbitration queues",0,
                                                                                -1,
                                                                                &(__Vtemp_1),
                                                                                -1,
                                                                                &(__Vtemp_2)) , 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh"s, 0x00000271U, ""s, 1U);
                    }
                    this->__VnoInFunc_remove_sequence_from_queues(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 626)
                                                                  ->__PVT__sequence_ptr);
                    goto __Vlabel1;
                }
                if (VL_LTS_III(32, i, this->__PVT__arb_sequence_q.size())) {
                    if ((0U == VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 631)
                         ->__PVT__request)) {
                        if ((1U & (~ ([&]() {
                                            this->__VnoInFunc_is_blocked(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 632)
                                                                         ->__PVT__sequence_ptr, __Vfunc_is_blocked__39__Vfuncout);
                                        }(), (IData)(__Vfunc_is_blocked__39__Vfuncout))))) {
                            if (([&]() {
                                        VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 633)
                                                      ->__PVT__sequence_ptr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 633)
                                 ->__VnoInFunc_is_relevant(vlSymsp, __Vtask_is_relevant__40__Vfuncout);
                                    }(), (IData)(__Vtask_is_relevant__40__Vfuncout))) {
                                if ((0U == this->__PVT__m_arbitration)) {
                                    m_choose_next_request__Vfuncrtn 
                                        = i;
                                    goto __Vlabel0;
                                } else {
                                    avail_sequences.push_back(i);
                                }
                            }
                        }
                    }
                }
                i = ((IData)(1U) + i);
                __Vlabel1: ;
            }
        }
        if ((0U == this->__PVT__m_arbitration)) {
            m_choose_next_request__Vfuncrtn = 0xffffffffU;
            goto __Vlabel0;
        }
        if (VL_GTS_III(32, 1U, avail_sequences.size())) {
            m_choose_next_request__Vfuncrtn = 0xffffffffU;
            goto __Vlabel0;
        }
        if ((1U == avail_sequences.size())) {
            m_choose_next_request__Vfuncrtn = avail_sequences.at(0U);
            goto __Vlabel0;
        }
        if (VL_LTS_III(32, 0U, this->__PVT__lock_list.size())) {
            i = 0U;
            while (VL_LTS_III(32, i, avail_sequences.size())) {
                if (([&]() {
                            this->__VnoInFunc_is_blocked(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(avail_sequences.at(i)), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 659)
                                                         ->__PVT__sequence_ptr, __Vfunc_is_blocked__41__Vfuncout);
                        }(), (IData)(__Vfunc_is_blocked__41__Vfuncout))) {
                    avail_sequences.erase(i);
                    i = (i - (IData)(1U));
                }
                i = ((IData)(1U) + i);
            }
            if (VL_GTS_III(32, 1U, avail_sequences.size())) {
                m_choose_next_request__Vfuncrtn = 0xffffffffU;
                goto __Vlabel0;
            }
            if ((1U == avail_sequences.size())) {
                m_choose_next_request__Vfuncrtn = avail_sequences.at(0U);
                goto __Vlabel0;
            }
        }
        if ((1U == this->__PVT__m_arbitration)) {
            sum_priority_val = 0U;
            i = 0U;
            while (VL_LTS_III(32, i, avail_sequences.size())) {
                sum_priority_val = (sum_priority_val 
                                    + ([&]() {
                            this->__VnoInFunc_m_get_seq_item_priority(vlProcess, vlSymsp, this->__PVT__arb_sequence_q.at(avail_sequences.at(i)), __Vfunc_m_get_seq_item_priority__42__Vfuncout);
                        }(), __Vfunc_m_get_seq_item_priority__42__Vfuncout));
                i = ((IData)(1U) + i);
            }
            temp = VL_URANDOM_RANGE_I((sum_priority_val 
                                       - (IData)(1U)), 0U);
            sum_priority_val = 0U;
            i = 0U;
            while (VL_LTS_III(32, i, avail_sequences.size())) {
                if (VL_GTS_III(32, (([&]() {
                                    this->__VnoInFunc_m_get_seq_item_priority(vlProcess, vlSymsp, this->__PVT__arb_sequence_q.at(avail_sequences.at(i)), __Vfunc_m_get_seq_item_priority__43__Vfuncout);
                                }(), __Vfunc_m_get_seq_item_priority__43__Vfuncout) 
                                    + sum_priority_val), temp)) {
                    m_choose_next_request__Vfuncrtn 
                        = avail_sequences.at(i);
                    goto __Vlabel0;
                }
                sum_priority_val = (sum_priority_val 
                                    + ([&]() {
                            this->__VnoInFunc_m_get_seq_item_priority(vlProcess, vlSymsp, this->__PVT__arb_sequence_q.at(avail_sequences.at(i)), __Vfunc_m_get_seq_item_priority__44__Vfuncout);
                        }(), __Vfunc_m_get_seq_item_priority__44__Vfuncout));
                i = ((IData)(1U) + i);
            }
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "Sequencer"s, "UVM Internal error in weighted arbitration code"s, 0U, ""s, 0U, ""s, 0U);
        }
        if ((2U == this->__PVT__m_arbitration)) {
            i = VL_URANDOM_RANGE_I((avail_sequences.size() 
                                    - (IData)(1U)), 0U);
            m_choose_next_request__Vfuncrtn = avail_sequences.at(i);
            goto __Vlabel0;
        }
        if (((3U == this->__PVT__m_arbitration) | (4U 
                                                   == this->__PVT__m_arbitration))) {
            highest_pri = 0U;
            i = 0U;
            while (VL_LTS_III(32, i, avail_sequences.size())) {
                if (VL_GTS_III(32, ([&]() {
                                this->__VnoInFunc_m_get_seq_item_priority(vlProcess, vlSymsp, this->__PVT__arb_sequence_q.at(avail_sequences.at(i)), __Vfunc_m_get_seq_item_priority__46__Vfuncout);
                            }(), __Vfunc_m_get_seq_item_priority__46__Vfuncout), highest_pri)) {
                    highest_sequences.clear();
                    highest_sequences.push_back(avail_sequences.at(i));
                    this->__VnoInFunc_m_get_seq_item_priority(vlProcess, vlSymsp, this->__PVT__arb_sequence_q.at(avail_sequences.at(i)), __Vfunc_m_get_seq_item_priority__47__Vfuncout);
                    highest_pri = __Vfunc_m_get_seq_item_priority__47__Vfuncout;
                } else if ((([&]() {
                                this->__VnoInFunc_m_get_seq_item_priority(vlProcess, vlSymsp, this->__PVT__arb_sequence_q.at(avail_sequences.at(i)), __Vfunc_m_get_seq_item_priority__48__Vfuncout);
                            }(), __Vfunc_m_get_seq_item_priority__48__Vfuncout) 
                            == highest_pri)) {
                    highest_sequences.push_back(avail_sequences.at(i));
                }
                i = ((IData)(1U) + i);
            }
            if ((3U == this->__PVT__m_arbitration)) {
                m_choose_next_request__Vfuncrtn = highest_sequences.at(0U);
                goto __Vlabel0;
            }
            i = VL_URANDOM_RANGE_I((highest_sequences.size() 
                                    - (IData)(1U)), 0U);
            m_choose_next_request__Vfuncrtn = highest_sequences.at(i);
            goto __Vlabel0;
        }
        if ((5U == this->__PVT__m_arbitration)) {
            this->__VnoInFunc_user_priority_arbitration(vlSymsp, avail_sequences, __Vfunc_user_priority_arbitration__49__Vfuncout);
            i = __Vfunc_user_priority_arbitration__49__Vfuncout;
            highest_sequences = avail_sequences.find(
                                                     [&](
                                                         IData/*31:0*/ item__DOT__index, 
                                                         IData/*31:0*/ item) -> 
                                                     CData/*31:0*/ {
                    return ((item == i));
                }
            );
            if ((0U == highest_sequences.size())) {
                __Vtemp_3 = ([&]() {
                        this->__VnoInFunc_convert2string(vlProcess, vlSymsp, __Vfunc_convert2string__51__Vfuncout);
                    }(), __Vfunc_convert2string__51__Vfuncout);
                this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "Sequencer"s, VL_SFORMATF_N_NX("Error in User arbitration, sequence %0d not available\n%@",0,
                                                                                32,
                                                                                i,
                                                                                -1,
                                                                                &(__Vtemp_3)) , 0U, ""s, 0U, ""s, 0U);
            }
            m_choose_next_request__Vfuncrtn = i;
            goto __Vlabel0;
        }
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "Sequencer"s, "Internal error: Failed to choose sequence"s, 0U, ""s, 0U, ""s, 0U);
        __Vlabel0: ;
    }
}

VlCoroutine Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_arb_not_equal(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_arb_not_equal\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h0be1a0ec__0;
    __Vtrigprevexpr_h0be1a0ec__0 = 0;
    // Body
    VL_KEEP_THIS;
    if ((this->__PVT__m_arb_size == this->__PVT__m_lock_arb_size)) {
        CData/*0:0*/ __VdynTrigger_h3a0e49e3__0;
        __VdynTrigger_h3a0e49e3__0 = 0;
        __VdynTrigger_h3a0e49e3__0 = 0U;
        while ((1U & (~ (IData)(__VdynTrigger_h3a0e49e3__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@([true] (uvm_pkg::uvm_sequencer_base.m_arb_size != uvm_pkg::uvm_sequencer_base.m_lock_arb_size))", 
                                                         "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 
                                                         745);
            __Vtrigprevexpr_h0be1a0ec__0 = (this->__PVT__m_arb_size 
                                            != this->__PVT__m_lock_arb_size);
            __VdynTrigger_h3a0e49e3__0 = __Vtrigprevexpr_h0be1a0ec__0;
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h3a0e49e3__0);
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@([true] (uvm_pkg::uvm_sequencer_base.m_arb_size != uvm_pkg::uvm_sequencer_base.m_lock_arb_size))", 
                                                     "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 
                                                     745);
    }
    co_return;}

VlCoroutine Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_available_sequence(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_available_sequence\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_is_blocked__54__Vfuncout;
    __Vfunc_is_blocked__54__Vfuncout = 0;
    CData/*0:0*/ __Vtask_is_relevant__55__Vfuncout;
    __Vtask_is_relevant__55__Vfuncout = 0;
    // Body
    VL_KEEP_THIS;
    VlClassRef<Varchitecture_uvm_pkg__03a__03a__VDynScope_35> __VDynScope_m_wait_for_available_sequence_0;
    VlQueue<IData/*31:0*/> is_relevant_entries;
    is_relevant_entries.atDefault() = 0;
    __VDynScope_m_wait_for_available_sequence_0 = VL_NEW(Varchitecture_uvm_pkg__03a__03a__VDynScope_35, vlSymsp);
    {
        this->__PVT__m_arb_size = this->__PVT__m_lock_arb_size;
        VL_NULL_CHECK(__VDynScope_m_wait_for_available_sequence_0, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 760)->__PVT__i = 0U;
        while (VL_LTS_III(32, VL_NULL_CHECK(__VDynScope_m_wait_for_available_sequence_0, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 760)
                          ->__PVT__i, this->__PVT__arb_sequence_q.size())) {
            if ((0U == VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(VL_NULL_CHECK(__VDynScope_m_wait_for_available_sequence_0, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 761)
                                                                    ->__PVT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 761)
                 ->__PVT__request)) {
                if ((1U & (~ ([&]() {
                                    this->__VnoInFunc_is_blocked(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(VL_NULL_CHECK(__VDynScope_m_wait_for_available_sequence_0, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 762)
                                                                                ->__PVT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 762)
                                                                 ->__PVT__sequence_ptr, __Vfunc_is_blocked__54__Vfuncout);
                                }(), (IData)(__Vfunc_is_blocked__54__Vfuncout))))) {
                    if ((1U & (~ ([&]() {
                                        VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(VL_NULL_CHECK(__VDynScope_m_wait_for_available_sequence_0, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 763)
                                                                                ->__PVT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 763)
                                                      ->__PVT__sequence_ptr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 763)
                                  ->__VnoInFunc_is_relevant(vlSymsp, __Vtask_is_relevant__55__Vfuncout);
                                    }(), (IData)(__Vtask_is_relevant__55__Vfuncout))))) {
                        is_relevant_entries.push_back(VL_NULL_CHECK(__VDynScope_m_wait_for_available_sequence_0, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 764)
                                                      ->__PVT__i);
                    }
                }
            }
            VL_NULL_CHECK(__VDynScope_m_wait_for_available_sequence_0, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 760)->__PVT__i 
                = ((IData)(1U) + VL_NULL_CHECK(__VDynScope_m_wait_for_available_sequence_0, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 760)
                   ->__PVT__i);
        }
        if ((0U == is_relevant_entries.size())) {
            co_await this->__VnoInFunc_m_wait_arb_not_equal(vlProcess, vlSymsp);
            goto __Vlabel0;
        }
        {
            VlForkSync __Vfork_1__sync;
            __Vfork_1__sync.init(1U, vlProcess);
            this->__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, is_relevant_entries, __VDynScope_m_wait_for_available_sequence_0, __Vfork_1__sync);
            co_await __Vfork_1__sync.join(vlProcess, 
                                          "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 
                                          776);
        }
        __Vlabel0: ;
    }
    co_return;}

VlCoroutine Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> &is_relevant_entries, VlClassRef<Varchitecture_uvm_pkg__03a__03a__VDynScope_35> &__VDynScope_m_wait_for_available_sequence_0, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0\n"); );
    // Body
    VL_KEEP_THIS;
    {
        VlForkSync __Vfork_2__sync;
        __Vfork_2__sync.init(1U, vlProcess);
        this->__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, is_relevant_entries, __VDynScope_m_wait_for_available_sequence_0, __Vfork_2__sync);
        co_await __Vfork_2__sync.join(vlProcess, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 
                                      778);
    }
    vlProcess->disableFork();
    __Vfork_1__sync.done("/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 
                         777);
    vlProcess->state(VlProcess::FINISHED);
    co_return;}

VlCoroutine Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> is_relevant_entries, VlClassRef<Varchitecture_uvm_pkg__03a__03a__VDynScope_35> __VDynScope_m_wait_for_available_sequence_0, VlForkSync __Vfork_2__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0\n"); );
    // Body
    VL_KEEP_THIS;
    this->__Vtask___VforkTask_2__57__is_relevant_entries 
        = is_relevant_entries;
    this->__Vtask___VforkTask_2__57____VDynScope_m_wait_for_available_sequence_0 
        = __VDynScope_m_wait_for_available_sequence_0;
    {
        VlForkSync __Vfork_3__sync;
        __Vfork_3__sync.init(1U, vlProcess);
        this->__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0____Vfork_3__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vfork_3__sync);
        this->__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0____Vfork_3__1(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vfork_3__sync);
        co_await __Vfork_3__sync.join(vlProcess, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 
                                      780);
    }
    __Vfork_2__sync.done("/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 
                         779);
    vlProcess->state(VlProcess::FINISHED);
    co_return;}

VlCoroutine Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0____Vfork_3__1(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlForkSync __Vfork_3__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0____Vfork_3__1\n"); );
    // Body
    VL_KEEP_THIS;
    co_await this->__VnoInFunc_m_wait_arb_not_equal(vlProcess, vlSymsp);
    __Vfork_3__sync.done("/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 
                         810);
    vlProcess->state(VlProcess::FINISHED);
    co_return;}

VlCoroutine Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0____Vfork_3__0(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlForkSync __Vfork_3__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0____Vfork_3__0\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03a__VDynScope_35> __Vtask___VforkTask_1__58____VDynScope_m_wait_for_available_sequence_0;
    VlClassRef<Varchitecture_std__03a__03aprocess> __Vfunc_self__59__Vfuncout;
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __Vtrigprevexpr_h654f1118__0;
    __Vtrigprevexpr_h654f1118__0 = 0;
    this->__Vtask___VforkTask_1__58__is_relevant_entries 
        = this->__Vtask___VforkTask_2__57__is_relevant_entries;
    __Vtask___VforkTask_1__58____VDynScope_m_wait_for_available_sequence_0 
        = this->__Vtask___VforkTask_2__57____VDynScope_m_wait_for_available_sequence_0;
    this->__PVT__m_is_relevant_completed = 0U;
    VL_NULL_CHECK(__Vtask___VforkTask_1__58____VDynScope_m_wait_for_available_sequence_0, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 785)->__PVT__i = 0U;
    while (VL_LTS_III(32, VL_NULL_CHECK(__Vtask___VforkTask_1__58____VDynScope_m_wait_for_available_sequence_0, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 785)
                      ->__PVT__i, this->__Vtask___VforkTask_1__58__is_relevant_entries.size())) {
        vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __Vfunc_self__59__Vfuncout);
        this->__Vtask___VforkTask_1__58__unnamedblk242__DOT____VforkParent 
            = __Vfunc_self__59__Vfuncout;
        this->__Vtask___VforkTask_1__58__unnamedblk242__DOT___Vwrapped_unnamedblk243_7__DOT____VDynScope_unnamedblk243_7 
            = VL_NEW(Varchitecture_uvm_pkg__03a__03a__VDynScope_42, vlSymsp);
        VL_NULL_CHECK(this->__Vtask___VforkTask_1__58__unnamedblk242__DOT___Vwrapped_unnamedblk243_7__DOT____VDynScope_unnamedblk243_7, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 787)->__PVT__k 
            = VL_NULL_CHECK(__Vtask___VforkTask_1__58____VDynScope_m_wait_for_available_sequence_0, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 787)
            ->__PVT__i;
        this->__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0____Vfork_3__0____Vfork_4__0(std::make_shared<VlProcess>(vlProcess), vlSymsp);
        VL_NULL_CHECK(__Vtask___VforkTask_1__58____VDynScope_m_wait_for_available_sequence_0, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 785)->__PVT__i 
            = ((IData)(1U) + VL_NULL_CHECK(__Vtask___VforkTask_1__58____VDynScope_m_wait_for_available_sequence_0, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 785)
               ->__PVT__i);
    }
    if (VL_GTES_III(32, 0U, this->__PVT__m_is_relevant_completed)) {
        CData/*0:0*/ __VdynTrigger_h5f30b72f__0;
        __VdynTrigger_h5f30b72f__0 = 0;
        __VdynTrigger_h5f30b72f__0 = 0U;
        while ((1U & (~ (IData)(__VdynTrigger_h5f30b72f__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@([true] (32'sh0 < uvm_pkg::uvm_sequencer_base.m_is_relevant_completed))", 
                                                         "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 
                                                         806);
            __Vtrigprevexpr_h654f1118__0 = VL_LTS_III(32, 0U, this->__PVT__m_is_relevant_completed);
            __VdynTrigger_h5f30b72f__0 = __Vtrigprevexpr_h654f1118__0;
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h5f30b72f__0);
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@([true] (32'sh0 < uvm_pkg::uvm_sequencer_base.m_is_relevant_completed))", 
                                                     "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 
                                                     806);
    }
    __Vfork_3__sync.done("/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 
                         781);
    vlProcess->state(VlProcess::FINISHED);
    co_return;}

VlCoroutine Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0____Vfork_3__0____Vfork_4__0(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0____Vfork_3__0____Vfork_4__0\n"); );
    // Locals
    VlClassRef<Varchitecture_std__03a__03aprocess> __Vtask___VforkTask_0__61____VforkParent;
    VlQueue<IData/*31:0*/> __Vtask___VforkTask_0__61__is_relevant_entries;
    __Vtask___VforkTask_0__61__is_relevant_entries.atDefault() = 0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03a__VDynScope_42> __Vtask___VforkTask_0__61____VDynScope_unnamedblk243_7;
    IData/*31:0*/ __Vtask_status__62__Vfuncout;
    __Vtask_status__62__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__64__Vfuncout;
    __Vfunc_uvm_report_enabled__64__Vfuncout = 0;
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __Vtrigprevexpr_h0eb114b1__0;
    __Vtrigprevexpr_h0eb114b1__0 = 0;
    __Vtask___VforkTask_0__61____VDynScope_unnamedblk243_7 
        = this->__Vtask___VforkTask_1__58__unnamedblk242__DOT___Vwrapped_unnamedblk243_7__DOT____VDynScope_unnamedblk243_7;
    __Vtask___VforkTask_0__61__is_relevant_entries 
        = this->__Vtask___VforkTask_1__58__is_relevant_entries;
    __Vtask___VforkTask_0__61____VforkParent = this->__Vtask___VforkTask_1__58__unnamedblk242__DOT____VforkParent;
    if ((1U == ([&]() {
                    VL_NULL_CHECK(__Vtask___VforkTask_0__61____VforkParent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 786)
                ->__VnoInFunc_status(vlSymsp, __Vtask_status__62__Vfuncout);
                }(), __Vtask_status__62__Vfuncout))) {
        CData/*0:0*/ __VdynTrigger_h34beb5fc__0;
        __VdynTrigger_h34beb5fc__0 = 0;
        __VdynTrigger_h34beb5fc__0 = 0U;
        while ((1U & (~ (IData)(__VdynTrigger_h34beb5fc__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@([true] (32'h1 != $_EXPRSTMT( // Function: status uvm_pkg::uvm_sequencer_base.__Vtask___VforkTask_0__61____VforkParent.(uvm_pkg::uvm_sequencer_base.__Vtask_status__62__Vfuncout); , ); ))", 
                                                         "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 
                                                         786);
            __Vtrigprevexpr_h0eb114b1__0 = (1U != ([&]() {
                        VL_NULL_CHECK(__Vtask___VforkTask_0__61____VforkParent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 786)
                                                   ->__VnoInFunc_status(vlSymsp, __Vtask_status__62__Vfuncout);
                    }(), __Vtask_status__62__Vfuncout));
            __VdynTrigger_h34beb5fc__0 = __Vtrigprevexpr_h0eb114b1__0;
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h34beb5fc__0);
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@([true] (32'h1 != $_EXPRSTMT( // Function: status uvm_pkg::uvm_sequencer_base.__Vtask___VforkTask_0__61____VforkParent.(uvm_pkg::uvm_sequencer_base.__Vtask_status__62__Vfuncout); , ); ))", 
                                                     "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 
                                                     786);
    }
    co_await VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(__Vtask___VforkTask_0__61__is_relevant_entries.at(VL_NULL_CHECK(__Vtask___VforkTask_0__61____VDynScope_unnamedblk243_7, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 790)
                                                                                ->__PVT__k)), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 790)
                           ->__PVT__sequence_ptr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 790)->__VnoInFunc_wait_for_relevant(vlProcess, vlSymsp);
    if ((VL_TIME_UNITED_D(1) != VL_ITOR_D_Q(64, this->__PVT__m_last_wait_relevant_time))) {
        this->__PVT__m_last_wait_relevant_time = VL_RTOIROUND_Q_D(VL_TIME_UNITED_D(1));
        this->__PVT__m_wait_relevant_count = 0U;
    } else {
        this->__PVT__m_wait_relevant_count = ((IData)(1U) 
                                              + this->__PVT__m_wait_relevant_count);
        if (VL_GTS_III(32, this->__PVT__m_wait_relevant_count, this->__PVT__m_max_zero_time_wait_relevant_count)) {
            if ((0U != ([&]() {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 3U, "SEQRELEVANTLOOP"s, __Vfunc_uvm_report_enabled__64__Vfuncout);
                        }(), __Vfunc_uvm_report_enabled__64__Vfuncout))) {
                this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SEQRELEVANTLOOP"s, VL_SFORMATF_N_NX("Zero time loop detected, passed wait_for_relevant %0d times without time advancing",0,
                                                                                32,
                                                                                this->__PVT__m_wait_relevant_count) , 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh"s, 0x0000031eU, ""s, 1U);
            }
        }
    }
    this->__PVT__m_is_relevant_completed = 1U;
    vlProcess->state(VlProcess::FINISHED);
    co_return;}

void Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_get_seq_item_priority(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_request> seq_q_entry, IData/*31:0*/ &m_get_seq_item_priority__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_get_seq_item_priority\n"); );
    // Locals
    std::string __Vtask_get_full_name__68__Vfuncout;
    IData/*31:0*/ __Vtask_get_priority__69__Vfuncout;
    __Vtask_get_priority__69__Vfuncout = 0;
    std::string __Vtask_get_full_name__71__Vfuncout;
    IData/*31:0*/ __Vtask_get_priority__72__Vfuncout;
    __Vtask_get_priority__72__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_priority__73__Vfuncout;
    __Vtask_get_priority__73__Vfuncout = 0;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    // Body
    {
        if ((0xffffffffU != VL_NULL_CHECK(seq_q_entry, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 827)
             ->__PVT__item_priority)) {
            if (VL_GTES_III(32, 0U, VL_NULL_CHECK(seq_q_entry, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 828)
                            ->__PVT__item_priority)) {
                __Vtemp_1 = ([&]() {
                        VL_NULL_CHECK(VL_NULL_CHECK(seq_q_entry, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 831)
                                      ->__PVT__sequence_ptr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 831)
                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__68__Vfuncout);
                    }(), __Vtask_get_full_name__68__Vfuncout);
                this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SEQITEMPRI"s, VL_SFORMATF_N_NX("Sequence item from %@ has illegal priority: %0d",0,
                                                                                -1,
                                                                                &(__Vtemp_1),
                                                                                32,
                                                                                VL_NULL_CHECK(seq_q_entry, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 832)
                                                                                ->__PVT__item_priority) , 0U, ""s, 0U, ""s, 0U);
            }
            m_get_seq_item_priority__Vfuncrtn = VL_NULL_CHECK(seq_q_entry, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 834)
                ->__PVT__item_priority;
            goto __Vlabel0;
        }
        if (VL_GTS_III(32, 0U, ([&]() {
                        VL_NULL_CHECK(VL_NULL_CHECK(seq_q_entry, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 837)
                                      ->__PVT__sequence_ptr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 837)
                                ->__VnoInFunc_get_priority(vlSymsp, __Vtask_get_priority__69__Vfuncout);
                    }(), __Vtask_get_priority__69__Vfuncout))) {
            __Vtemp_2 = ([&]() {
                    VL_NULL_CHECK(VL_NULL_CHECK(seq_q_entry, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 840)
                                  ->__PVT__sequence_ptr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 840)
                         ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__71__Vfuncout);
                }(), __Vtask_get_full_name__71__Vfuncout);
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SEQDEFPRI"s, VL_SFORMATF_N_NX("Sequence %@ has illegal priority: %0d",0,
                                                                                -1,
                                                                                &(__Vtemp_2),
                                                                                32,
                                                                                ([&]() {
                                VL_NULL_CHECK(VL_NULL_CHECK(seq_q_entry, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 841)
                                              ->__PVT__sequence_ptr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 841)
                                                                                ->__VnoInFunc_get_priority(vlSymsp, __Vtask_get_priority__72__Vfuncout);
                            }(), __Vtask_get_priority__72__Vfuncout)) , 0U, ""s, 0U, ""s, 0U);
        }
        VL_NULL_CHECK(VL_NULL_CHECK(seq_q_entry, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 843)
                      ->__PVT__sequence_ptr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 843)->__VnoInFunc_get_priority(vlSymsp, __Vtask_get_priority__73__Vfuncout);
        m_get_seq_item_priority__Vfuncrtn = __Vtask_get_priority__73__Vfuncout;
        __Vlabel0: ;
    }
}

VlCoroutine Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_arbitration_completed(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ request_id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_arbitration_completed\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_he79f9cc5__0;
    __Vtrigprevexpr_he79f9cc5__0 = 0;
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ lock_arb_size;
    lock_arb_size = 0;
    {
        while (true) {
            lock_arb_size = this->__PVT__m_lock_arb_size;
            if (this->__PVT__arb_completed.exists(request_id)) {
                this->__PVT__arb_completed.erase(request_id);
                goto __Vlabel0;
            }
            if ((lock_arb_size == this->__PVT__m_lock_arb_size)) {
                CData/*0:0*/ __VdynTrigger_hdde03dd0__0;
                __VdynTrigger_hdde03dd0__0 = 0;
                __VdynTrigger_hdde03dd0__0 = 0U;
                while ((1U & (~ (IData)(__VdynTrigger_hdde03dd0__0)))) {
                    co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                                 vlProcess, 
                                                                 "@([true] (uvm_pkg::uvm_sequencer_base.lock_arb_size != uvm_pkg::uvm_sequencer_base.m_lock_arb_size))", 
                                                                 "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 
                                                                 862);
                    __Vtrigprevexpr_he79f9cc5__0 = 
                        (lock_arb_size != this->__PVT__m_lock_arb_size);
                    __VdynTrigger_hdde03dd0__0 = __Vtrigprevexpr_he79f9cc5__0;
                    vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hdde03dd0__0);
                }
                co_await vlSymsp->TOP.__VdynSched.resumption(
                                                             vlProcess, 
                                                             "@([true] (uvm_pkg::uvm_sequencer_base.lock_arb_size != uvm_pkg::uvm_sequencer_base.m_lock_arb_size))", 
                                                             "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 
                                                             862);
            }
        }
        __Vlabel0: ;
    }
    co_return;}

void Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_set_arbitration_completed(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ request_id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_set_arbitration_completed\n"); );
    // Body
    this->__PVT__arb_completed.at(request_id) = 1U;
}

void Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_is_child(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> child, CData/*0:0*/ &is_child__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_is_child\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> __Vtask_get_parent_sequence__76__Vfuncout;
    IData/*31:0*/ __Vtask_get_inst_id__77__Vfuncout;
    __Vtask_get_inst_id__77__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_inst_id__78__Vfuncout;
    __Vtask_get_inst_id__78__Vfuncout = 0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> __Vtask_get_parent_sequence__79__Vfuncout;
    // Body
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> child_parent;
    {
        if ((VlNull{} == child)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "uvm_sequencer"s, "is_child passed null child"s, 0U, ""s, 0U, ""s, 0U);
        }
        if ((VlNull{} == parent)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "uvm_sequencer"s, "is_child passed null parent"s, 0U, ""s, 0U, ""s, 0U);
        }
        VL_NULL_CHECK(child, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 890)->__VnoInFunc_get_parent_sequence(vlSymsp, __Vtask_get_parent_sequence__76__Vfuncout);
        child_parent = __Vtask_get_parent_sequence__76__Vfuncout;
        while ((VlNull{} != child_parent)) {
            if ((([&]() {
                            VL_NULL_CHECK(child_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 892)
                  ->__VnoInFunc_get_inst_id(vlSymsp, __Vtask_get_inst_id__77__Vfuncout);
                        }(), __Vtask_get_inst_id__77__Vfuncout) 
                 == ([&]() {
                            VL_NULL_CHECK(parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 892)
                     ->__VnoInFunc_get_inst_id(vlSymsp, __Vtask_get_inst_id__78__Vfuncout);
                        }(), __Vtask_get_inst_id__78__Vfuncout))) {
                is_child__Vfuncrtn = 1U;
                goto __Vlabel0;
            }
            VL_NULL_CHECK(child_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 895)->__VnoInFunc_get_parent_sequence(vlSymsp, __Vtask_get_parent_sequence__79__Vfuncout);
            child_parent = __Vtask_get_parent_sequence__79__Vfuncout;
        }
        is_child__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

VlCoroutine Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_execute_item(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_item> item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_execute_item\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    VlClassRef<Varchitecture_uvm_pkg__03a__03am_uvm_sqr_seq_base> seq;
    seq = VL_NEW(Varchitecture_uvm_pkg__03a__03am_uvm_sqr_seq_base, vlProcess, vlSymsp, "execute_item_seq"s);
    VL_NULL_CHECK(item, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 916)->__VnoInFunc_set_sequencer(vlSymsp, 
                                                                                VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequencer_base>{this});
    VL_NULL_CHECK(item, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 917)->__VnoInFunc_set_parent_sequence(vlSymsp, seq);
    VL_NULL_CHECK(seq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 918)->__VnoInFunc_set_sequencer(vlSymsp, 
                                                                                VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequencer_base>{this});
    co_await VL_NULL_CHECK(seq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 919)->__VnoInFunc_start_item(vlProcess, vlSymsp, item, 0xffffffffU, VlNull{});
    co_await VL_NULL_CHECK(seq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 920)->__VnoInFunc_finish_item(vlProcess, vlSymsp, item, 0xffffffffU);
    co_return;}

VlCoroutine Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_wait_for_grant(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, IData/*31:0*/ item_priority, CData/*0:0*/ lock_request) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_wait_for_grant\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_m_register_sequence__87__Vfuncout;
    __Vfunc_m_register_sequence__87__Vfuncout = 0;
    VlClassRef<Varchitecture_std__03a__03aprocess> __Vfunc_self__89__Vfuncout;
    VlClassRef<Varchitecture_std__03a__03aprocess> __Vfunc_self__91__Vfuncout;
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ __Vincrement4;
    __Vincrement4 = 0;
    IData/*31:0*/ __Vincrement3;
    __Vincrement3 = 0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_request> req_s;
    IData/*31:0*/ my_seq_id;
    my_seq_id = 0;
    if ((VlNull{} == sequence_ptr)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "uvm_sequencer"s, "wait_for_grant passed null sequence_ptr"s, 0U, ""s, 0U, ""s, 0U);
    }
    this->__VnoInFunc_m_register_sequence(vlSymsp, sequence_ptr, __Vfunc_m_register_sequence__87__Vfuncout);
    my_seq_id = __Vfunc_m_register_sequence__87__Vfuncout;
    if (lock_request) {
        req_s = VL_NEW(Varchitecture_uvm_pkg__03a__03auvm_sequence_request, vlSymsp);
        VL_NULL_CHECK(req_s, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 943)->__PVT__grant = 0U;
        VL_NULL_CHECK(req_s, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 944)->__PVT__sequence_id 
            = my_seq_id;
        VL_NULL_CHECK(req_s, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 945)->__PVT__request = 1U;
        VL_NULL_CHECK(req_s, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 946)->__PVT__sequence_ptr 
            = sequence_ptr;
        __Vincrement3 = vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_request_id;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_request_id 
            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_request_id);
        VL_NULL_CHECK(req_s, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 947)->__PVT__request_id 
            = __Vincrement3;
        vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __Vfunc_self__89__Vfuncout);
        VL_NULL_CHECK(req_s, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 948)->__PVT__process_id 
            = __Vfunc_self__89__Vfuncout;
        this->__PVT__arb_sequence_q.push_back(req_s);
    }
    req_s = VL_NEW(Varchitecture_uvm_pkg__03a__03auvm_sequence_request, vlSymsp);
    VL_NULL_CHECK(req_s, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 954)->__PVT__grant = 0U;
    VL_NULL_CHECK(req_s, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 955)->__PVT__request = 0U;
    VL_NULL_CHECK(req_s, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 956)->__PVT__sequence_id 
        = my_seq_id;
    VL_NULL_CHECK(req_s, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 957)->__PVT__item_priority 
        = item_priority;
    VL_NULL_CHECK(req_s, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 958)->__PVT__sequence_ptr 
        = sequence_ptr;
    __Vincrement4 = vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_request_id;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_request_id 
        = ((IData)(1U) + vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_request_id);
    VL_NULL_CHECK(req_s, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 959)->__PVT__request_id 
        = __Vincrement4;
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __Vfunc_self__91__Vfuncout);
    VL_NULL_CHECK(req_s, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 960)->__PVT__process_id 
        = __Vfunc_self__91__Vfuncout;
    this->__PVT__arb_sequence_q.push_back(req_s);
    this->__VnoInFunc_m_update_lists(vlSymsp);
    co_await this->__VnoInFunc_m_wait_for_arbitration_completed(vlProcess, vlSymsp, VL_NULL_CHECK(req_s, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 966)
                                                                ->__PVT__request_id);
    VL_NULL_CHECK(VL_NULL_CHECK(req_s, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 971)
                  ->__PVT__sequence_ptr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 971)->__PVT__m_wait_for_grant_semaphore 
        = ((IData)(1U) + VL_NULL_CHECK(VL_NULL_CHECK(req_s, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 971)
                                       ->__PVT__sequence_ptr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 971)
           ->__PVT__m_wait_for_grant_semaphore);
    co_return;}

VlCoroutine Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_wait_for_item_done(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, IData/*31:0*/ transaction_id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_wait_for_item_done\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h70d58b24__0;
    __Vtrigprevexpr_h70d58b24__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h014b85ac__0;
    __Vtrigprevexpr_h014b85ac__0 = 0;
    IData/*31:0*/ __Vtask_m_get_sqr_sequence_id__94__Vfuncout;
    __Vtask_m_get_sqr_sequence_id__94__Vfuncout = 0;
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ sequence_id;
    sequence_id = 0;
    VL_NULL_CHECK(sequence_ptr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 983)->__VnoInFunc_m_get_sqr_sequence_id(vlSymsp, this->__PVT__m_sequencer_id, 1U, __Vtask_m_get_sqr_sequence_id__94__Vfuncout);
    sequence_id = __Vtask_m_get_sqr_sequence_id__94__Vfuncout;
    this->__PVT__m_wait_for_item_sequence_id = 0xffffffffU;
    this->__PVT__m_wait_for_item_transaction_id = 0xffffffffU;
    if ((0xffffffffU == transaction_id)) {
        if ((this->__PVT__m_wait_for_item_sequence_id 
             != sequence_id)) {
            CData/*0:0*/ __VdynTrigger_h033433a3__0;
            __VdynTrigger_h033433a3__0 = 0;
            __VdynTrigger_h033433a3__0 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_h033433a3__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             vlProcess, 
                                                             "@([true] (uvm_pkg::uvm_sequencer_base.m_wait_for_item_sequence_id == uvm_pkg::uvm_sequencer_base.sequence_id))", 
                                                             "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 
                                                             988);
                __Vtrigprevexpr_h014b85ac__0 = (this->__PVT__m_wait_for_item_sequence_id 
                                                == sequence_id);
                __VdynTrigger_h033433a3__0 = __Vtrigprevexpr_h014b85ac__0;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h033433a3__0);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         vlProcess, 
                                                         "@([true] (uvm_pkg::uvm_sequencer_base.m_wait_for_item_sequence_id == uvm_pkg::uvm_sequencer_base.sequence_id))", 
                                                         "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 
                                                         988);
        }
    } else if ((1U & (~ ((this->__PVT__m_wait_for_item_sequence_id 
                          == sequence_id) & (this->__PVT__m_wait_for_item_transaction_id 
                                             == transaction_id))))) {
        CData/*0:0*/ __VdynTrigger_h931a310b__0;
        __VdynTrigger_h931a310b__0 = 0;
        __VdynTrigger_h931a310b__0 = 0U;
        while ((1U & (~ (IData)(__VdynTrigger_h931a310b__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@([true] ((uvm_pkg::uvm_sequencer_base.m_wait_for_item_sequence_id == uvm_pkg::uvm_sequencer_base.sequence_id) & (uvm_pkg::uvm_sequencer_base.m_wait_for_item_transaction_id == uvm_pkg::uvm_sequencer_base.transaction_id)))", 
                                                         "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 
                                                         990);
            __Vtrigprevexpr_h70d58b24__0 = ((this->__PVT__m_wait_for_item_sequence_id 
                                             == sequence_id) 
                                            & (this->__PVT__m_wait_for_item_transaction_id 
                                               == transaction_id));
            __VdynTrigger_h931a310b__0 = __Vtrigprevexpr_h70d58b24__0;
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h931a310b__0);
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@([true] ((uvm_pkg::uvm_sequencer_base.m_wait_for_item_sequence_id == uvm_pkg::uvm_sequencer_base.sequence_id) & (uvm_pkg::uvm_sequencer_base.m_wait_for_item_transaction_id == uvm_pkg::uvm_sequencer_base.transaction_id)))", 
                                                     "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 
                                                     990);
    }
    co_return;}

void Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_is_blocked(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, CData/*0:0*/ &is_blocked__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_is_blocked\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_inst_id__96__Vfuncout;
    __Vtask_get_inst_id__96__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_inst_id__97__Vfuncout;
    __Vtask_get_inst_id__97__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_is_child__98__Vfuncout;
    __Vfunc_is_child__98__Vfuncout = 0;
    // Body
    IData/*31:0*/ unnamedblk244__DOT__i;
    unnamedblk244__DOT__i = 0;
    {
        if ((VlNull{} == sequence_ptr)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "uvm_sequence_controller"s, "is_blocked passed null sequence_ptr"s, 0U, ""s, 0U, ""s, 0U);
        }
        unnamedblk244__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk244__DOT__i, this->__PVT__lock_list.size())) {
            if (((([&]() {
                                VL_NULL_CHECK(this->__PVT__lock_list.at(unnamedblk244__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1005)
                   ->__VnoInFunc_get_inst_id(vlSymsp, __Vtask_get_inst_id__96__Vfuncout);
                            }(), __Vtask_get_inst_id__96__Vfuncout) 
                  != ([&]() {
                                VL_NULL_CHECK(sequence_ptr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1006)
                      ->__VnoInFunc_get_inst_id(vlSymsp, __Vtask_get_inst_id__97__Vfuncout);
                            }(), __Vtask_get_inst_id__97__Vfuncout)) 
                 && (1U & (~ ([&]() {
                                    this->__VnoInFunc_is_child(vlProcess, vlSymsp, this->__PVT__lock_list.at(unnamedblk244__DOT__i), sequence_ptr, __Vfunc_is_child__98__Vfuncout);
                                }(), (IData)(__Vfunc_is_child__98__Vfuncout)))))) {
                is_blocked__Vfuncrtn = 1U;
                goto __Vlabel0;
            }
            unnamedblk244__DOT__i = ((IData)(1U) + unnamedblk244__DOT__i);
        }
        is_blocked__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_has_lock(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, CData/*0:0*/ &has_lock__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_has_lock\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_m_register_sequence__100__Vfuncout;
    __Vfunc_m_register_sequence__100__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_inst_id__101__Vfuncout;
    __Vtask_get_inst_id__101__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_inst_id__102__Vfuncout;
    __Vtask_get_inst_id__102__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ unnamedblk245__DOT__i;
    unnamedblk245__DOT__i = 0;
    IData/*31:0*/ my_seq_id;
    my_seq_id = 0;
    {
        if ((VlNull{} == sequence_ptr)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "uvm_sequence_controller"s, "has_lock passed null sequence_ptr"s, 0U, ""s, 0U, ""s, 0U);
        }
        this->__VnoInFunc_m_register_sequence(vlSymsp, sequence_ptr, __Vfunc_m_register_sequence__100__Vfuncout);
        my_seq_id = __Vfunc_m_register_sequence__100__Vfuncout;
        unnamedblk245__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk245__DOT__i, this->__PVT__lock_list.size())) {
            if ((([&]() {
                            VL_NULL_CHECK(this->__PVT__lock_list.at(unnamedblk245__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1026)
                  ->__VnoInFunc_get_inst_id(vlSymsp, __Vtask_get_inst_id__101__Vfuncout);
                        }(), __Vtask_get_inst_id__101__Vfuncout) 
                 == ([&]() {
                            VL_NULL_CHECK(sequence_ptr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1026)
                     ->__VnoInFunc_get_inst_id(vlSymsp, __Vtask_get_inst_id__102__Vfuncout);
                        }(), __Vtask_get_inst_id__102__Vfuncout))) {
                has_lock__Vfuncrtn = 1U;
                goto __Vlabel0;
            }
            unnamedblk245__DOT__i = ((IData)(1U) + unnamedblk245__DOT__i);
        }
        has_lock__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

VlCoroutine Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_lock_req(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, CData/*0:0*/ lock) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_lock_req\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_m_register_sequence__104__Vfuncout;
    __Vfunc_m_register_sequence__104__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_sequence_id__106__Vfuncout;
    __Vtask_get_sequence_id__106__Vfuncout = 0;
    VlClassRef<Varchitecture_std__03a__03aprocess> __Vfunc_self__107__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    IData/*31:0*/ __Vincrement5;
    __Vincrement5 = 0;
    IData/*31:0*/ my_seq_id;
    my_seq_id = 0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_request> new_req;
    if ((VlNull{} == sequence_ptr)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "uvm_sequence_controller"s, "lock_req passed null sequence_ptr"s, 0U, ""s, 0U, ""s, 0U);
    }
    this->__VnoInFunc_m_register_sequence(vlSymsp, sequence_ptr, __Vfunc_m_register_sequence__104__Vfuncout);
    my_seq_id = __Vfunc_m_register_sequence__104__Vfuncout;
    new_req = VL_NEW(Varchitecture_uvm_pkg__03a__03auvm_sequence_request, vlSymsp);
    VL_NULL_CHECK(new_req, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1049)->__PVT__grant = 0U;
    VL_NULL_CHECK(sequence_ptr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1050)->__VnoInFunc_get_sequence_id(vlSymsp, __Vtask_get_sequence_id__106__Vfuncout);
    VL_NULL_CHECK(new_req, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1050)->__PVT__sequence_id 
        = __Vtask_get_sequence_id__106__Vfuncout;
    VL_NULL_CHECK(new_req, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1051)->__PVT__request = 1U;
    VL_NULL_CHECK(new_req, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1052)->__PVT__sequence_ptr 
        = sequence_ptr;
    __Vincrement5 = vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_request_id;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_request_id 
        = ((IData)(1U) + vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_request_id);
    VL_NULL_CHECK(new_req, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1053)->__PVT__request_id 
        = __Vincrement5;
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __Vfunc_self__107__Vfuncout);
    VL_NULL_CHECK(new_req, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1054)->__PVT__process_id 
        = __Vfunc_self__107__Vfuncout;
    if (lock) {
        this->__PVT__arb_sequence_q.push_back(new_req);
    } else {
        this->__PVT__arb_sequence_q.push_front(new_req);
        this->__VnoInFunc_m_update_lists(vlSymsp);
    }
    this->__VnoInFunc_grant_queued_locks(vlProcess, vlSymsp);
    co_await this->__VnoInFunc_m_wait_for_arbitration_completed(vlProcess, vlSymsp, VL_NULL_CHECK(new_req, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1070)
                                                                ->__PVT__request_id);
    co_return;}

void Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_unlock_req(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_unlock_req\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_inst_id__112__Vfuncout;
    __Vtask_get_inst_id__112__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_inst_id__113__Vfuncout;
    __Vtask_get_inst_id__113__Vfuncout = 0;
    std::string __Vtask_get_full_name__117__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlQueue<IData/*31:0*/> unnamedblk246__DOT__q;
    unnamedblk246__DOT__q.atDefault() = 0;
    IData/*31:0*/ unnamedblk246__DOT__seqid;
    unnamedblk246__DOT__seqid = 0;
    if ((VlNull{} == sequence_ptr)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "uvm_sequencer"s, "m_unlock_req passed null sequence_ptr"s, 0U, ""s, 0U, ""s, 0U);
    }
    VL_NULL_CHECK(sequence_ptr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1087)->__VnoInFunc_get_inst_id(vlSymsp, __Vtask_get_inst_id__112__Vfuncout);
    unnamedblk246__DOT__seqid = __Vtask_get_inst_id__112__Vfuncout;
    unnamedblk246__DOT__q = this->__PVT__lock_list.find_first_index(
                                                                    [&](
                                                                        IData/*31:0*/ item__DOT__index, 
                                                                        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> item) -> 
                                                                    CData/*31:0*/ {
            return ((([&]() {
                            VL_NULL_CHECK(item, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1088)
                      ->__VnoInFunc_get_inst_id(vlSymsp, __Vtask_get_inst_id__113__Vfuncout);
                        }(), __Vtask_get_inst_id__113__Vfuncout) 
                     == unnamedblk246__DOT__seqid));
        }
    );
    if ((1U == unnamedblk246__DOT__q.size())) {
        this->__PVT__lock_list.erase(unnamedblk246__DOT__q.at(0U));
        this->__VnoInFunc_grant_queued_locks(vlProcess, vlSymsp);
        this->__VnoInFunc_m_update_lists(vlSymsp);
    } else {
        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "SQRUNL"s, 
                                             VL_CVT_PACK_STR_NN(
                                                                VL_CONCATN_NNN(
                                                                               VL_CONCATN_NNN("Sequence '"s, 
                                                                                ([&]() {
                                VL_NULL_CHECK(sequence_ptr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1096)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__117__Vfuncout);
                            }(), __Vtask_get_full_name__117__Vfuncout)), "' called ungrab / unlock, but didn't have lock"s)), 0U, ""s, 0U, ""s, 0U);
    }
}

VlCoroutine Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_lock(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_lock\n"); );
    // Body
    VL_KEEP_THIS;
    co_await this->__VnoInFunc_m_lock_req(vlSymsp, sequence_ptr, 1U);
    co_return;}

VlCoroutine Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_grab(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_grab\n"); );
    // Body
    VL_KEEP_THIS;
    co_await this->__VnoInFunc_m_lock_req(vlSymsp, sequence_ptr, 0U);
    co_return;}

void Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_unlock(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_unlock\n"); );
    // Body
    this->__VnoInFunc_m_unlock_req(vlSymsp, sequence_ptr);
}

void Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_ungrab(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_ungrab\n"); );
    // Body
    this->__VnoInFunc_m_unlock_req(vlSymsp, sequence_ptr);
}

void Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_remove_sequence_from_queues(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_remove_sequence_from_queues\n"); );
    // Locals
    IData/*31:0*/ __Vtask_m_get_sqr_sequence_id__122__Vfuncout;
    __Vtask_m_get_sqr_sequence_id__122__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_is_child__123__Vfuncout;
    __Vfunc_is_child__123__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_sequence_state__124__Vfuncout;
    __Vtask_get_sequence_state__124__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__125__Vfuncout;
    __Vfunc_uvm_report_enabled__125__Vfuncout = 0;
    std::string __Vtask_get_full_name__127__Vfuncout;
    std::string __Vtask_get_full_name__128__Vfuncout;
    IData/*31:0*/ __Vtask_get_inst_id__130__Vfuncout;
    __Vtask_get_inst_id__130__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_inst_id__131__Vfuncout;
    __Vtask_get_inst_id__131__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_is_child__132__Vfuncout;
    __Vfunc_is_child__132__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_sequence_state__133__Vfuncout;
    __Vtask_get_sequence_state__133__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__134__Vfuncout;
    __Vfunc_uvm_report_enabled__134__Vfuncout = 0;
    std::string __Vtask_get_full_name__136__Vfuncout;
    std::string __Vtask_get_full_name__137__Vfuncout;
    IData/*31:0*/ __Vtask_m_get_sqr_sequence_id__140__Vfuncout;
    __Vtask_m_get_sqr_sequence_id__140__Vfuncout = 0;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    // Body
    IData/*31:0*/ i;
    i = 0;
    IData/*31:0*/ seq_id;
    seq_id = 0;
    VL_NULL_CHECK(sequence_ptr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1143)->__VnoInFunc_m_get_sqr_sequence_id(vlSymsp, this->__PVT__m_sequencer_id, 0U, __Vtask_m_get_sqr_sequence_id__122__Vfuncout);
    seq_id = __Vtask_m_get_sqr_sequence_id__122__Vfuncout;
    i = 0U;
    do {
        if (VL_GTS_III(32, this->__PVT__arb_sequence_q.size(), i)) {
            if (((VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1150)
                  ->__PVT__sequence_id == seq_id) || 
                 ([&]() {
                            this->__VnoInFunc_is_child(vlProcess, vlSymsp, sequence_ptr, VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1151)
                                                       ->__PVT__sequence_ptr, __Vfunc_is_child__123__Vfuncout);
                        }(), (IData)(__Vfunc_is_child__123__Vfuncout)))) {
                if ((0x00000100U == ([&]() {
                                VL_NULL_CHECK(sequence_ptr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1152)
                                     ->__VnoInFunc_get_sequence_state(vlSymsp, __Vtask_get_sequence_state__124__Vfuncout);
                            }(), __Vtask_get_sequence_state__124__Vfuncout))) {
                    if ((0U != ([&]() {
                                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "SEQFINERR"s, __Vfunc_uvm_report_enabled__125__Vfuncout);
                                }(), __Vfunc_uvm_report_enabled__125__Vfuncout))) {
                        __Vtemp_1 = ([&]() {
                                VL_NULL_CHECK(sequence_ptr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1153)
                                     ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__127__Vfuncout);
                            }(), __Vtask_get_full_name__127__Vfuncout);
                        __Vtemp_2 = ([&]() {
                                VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1153)
                                              ->__PVT__sequence_ptr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1153)
                                     ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__128__Vfuncout);
                            }(), __Vtask_get_full_name__128__Vfuncout);
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "SEQFINERR"s, VL_SFORMATF_N_NX("Parent sequence '%@' should not finish before all items from itself and items from descendent sequences are processed.  The item request from the sequence '%@' is being removed.",0,
                                                                                -1,
                                                                                &(__Vtemp_1),
                                                                                -1,
                                                                                &(__Vtemp_2)) , 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh"s, 0x00000481U, ""s, 1U);
                    }
                }
                this->__PVT__arb_sequence_q.erase(i);
                this->__VnoInFunc_m_update_lists(vlSymsp);
            } else {
                i = ((IData)(1U) + i);
            }
        }
    } while (VL_LTS_III(32, i, this->__PVT__arb_sequence_q.size()));
    i = 0U;
    do {
        if (VL_GTS_III(32, this->__PVT__lock_list.size(), i)) {
            if (((([&]() {
                                VL_NULL_CHECK(this->__PVT__lock_list.at(i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1169)
                   ->__VnoInFunc_get_inst_id(vlSymsp, __Vtask_get_inst_id__130__Vfuncout);
                            }(), __Vtask_get_inst_id__130__Vfuncout) 
                  == ([&]() {
                                VL_NULL_CHECK(sequence_ptr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1169)
                      ->__VnoInFunc_get_inst_id(vlSymsp, __Vtask_get_inst_id__131__Vfuncout);
                            }(), __Vtask_get_inst_id__131__Vfuncout)) 
                 || ([&]() {
                            this->__VnoInFunc_is_child(vlProcess, vlSymsp, sequence_ptr, this->__PVT__lock_list.at(i), __Vfunc_is_child__132__Vfuncout);
                        }(), (IData)(__Vfunc_is_child__132__Vfuncout)))) {
                if ((0x00000100U == ([&]() {
                                VL_NULL_CHECK(sequence_ptr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1171)
                                     ->__VnoInFunc_get_sequence_state(vlSymsp, __Vtask_get_sequence_state__133__Vfuncout);
                            }(), __Vtask_get_sequence_state__133__Vfuncout))) {
                    if ((0U != ([&]() {
                                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "SEQFINERR"s, __Vfunc_uvm_report_enabled__134__Vfuncout);
                                }(), __Vfunc_uvm_report_enabled__134__Vfuncout))) {
                        __Vtemp_3 = ([&]() {
                                VL_NULL_CHECK(sequence_ptr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1172)
                                     ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__136__Vfuncout);
                            }(), __Vtask_get_full_name__136__Vfuncout);
                        __Vtemp_4 = ([&]() {
                                VL_NULL_CHECK(this->__PVT__lock_list.at(i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1172)
                                     ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__137__Vfuncout);
                            }(), __Vtask_get_full_name__137__Vfuncout);
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "SEQFINERR"s, VL_SFORMATF_N_NX("Parent sequence '%@' should not finish before locks from itself and descedent sequences are removed.  The lock held by the child sequence '%@' is being removed.",0,
                                                                                -1,
                                                                                &(__Vtemp_3),
                                                                                -1,
                                                                                &(__Vtemp_4)) , 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh"s, 0x00000494U, ""s, 1U);
                    }
                }
                this->__PVT__lock_list.erase(i);
                this->__VnoInFunc_m_update_lists(vlSymsp);
            } else {
                i = ((IData)(1U) + i);
            }
        }
    } while (VL_LTS_III(32, i, this->__PVT__lock_list.size()));
    this->__VnoInFunc_m_unregister_sequence(vlSymsp, 
                                            ([&]() {
                VL_NULL_CHECK(sequence_ptr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1184)
                                             ->__VnoInFunc_m_get_sqr_sequence_id(vlSymsp, this->__PVT__m_sequencer_id, 1U, __Vtask_m_get_sqr_sequence_id__140__Vfuncout);
            }(), __Vtask_m_get_sqr_sequence_id__140__Vfuncout));
}

void Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_stop_sequences(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_stop_sequences\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> __Vfunc_m_find_sequence__141__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> __Vfunc_m_find_sequence__143__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> seq_ptr;
    this->__VnoInFunc_m_find_sequence(vlSymsp, 0xffffffffU, __Vfunc_m_find_sequence__141__Vfuncout);
    seq_ptr = __Vfunc_m_find_sequence__141__Vfuncout;
    while ((VlNull{} != seq_ptr)) {
        this->__VnoInFunc_kill_sequence(vlProcess, vlSymsp, seq_ptr);
        this->__VnoInFunc_m_find_sequence(vlSymsp, 0xffffffffU, __Vfunc_m_find_sequence__143__Vfuncout);
        seq_ptr = __Vfunc_m_find_sequence__143__Vfuncout;
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_sequence_exiting(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_sequence_exiting\n"); );
    // Body
    this->__VnoInFunc_remove_sequence_from_queues(vlProcess, vlSymsp, sequence_ptr);
}

void Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_kill_sequence(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_kill_sequence\n"); );
    // Body
    this->__VnoInFunc_remove_sequence_from_queues(vlProcess, vlSymsp, sequence_ptr);
    VL_NULL_CHECK(sequence_ptr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1216)->__VnoInFunc_m_kill(vlProcess, vlSymsp);
}

void Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_is_grabbed(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ &is_grabbed__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_is_grabbed\n"); );
    // Body
    is_grabbed__Vfuncrtn = (0U != this->__PVT__lock_list.size());
}

void Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_current_grabber(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> &current_grabber__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_current_grabber\n"); );
    // Body
    {
        if ((0U == this->__PVT__lock_list.size())) {
            current_grabber__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        current_grabber__Vfuncrtn = this->__PVT__lock_list.at(
                                                              (this->__PVT__lock_list.size() 
                                                               - (IData)(1U)));
        __Vlabel0: ;
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_has_do_available(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ &has_do_available__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_has_do_available\n"); );
    // Locals
    CData/*0:0*/ __Vtask_is_relevant__147__Vfuncout;
    __Vtask_is_relevant__147__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_is_blocked__148__Vfuncout;
    __Vfunc_is_blocked__148__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ unnamedblk247__DOT__i;
    unnamedblk247__DOT__i = 0;
    {
        unnamedblk247__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk247__DOT__i, this->__PVT__arb_sequence_q.size())) {
            if ((([&]() {
                            VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(unnamedblk247__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1245)
                                          ->__PVT__sequence_ptr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1245)
                  ->__VnoInFunc_is_relevant(vlSymsp, __Vtask_is_relevant__147__Vfuncout);
                        }(), (IData)(__Vtask_is_relevant__147__Vfuncout)) 
                 && (1U & (~ ([&]() {
                                    this->__VnoInFunc_is_blocked(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(unnamedblk247__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1246)
                                                                 ->__PVT__sequence_ptr, __Vfunc_is_blocked__148__Vfuncout);
                                }(), (IData)(__Vfunc_is_blocked__148__Vfuncout)))))) {
                has_do_available__Vfuncrtn = 1U;
                goto __Vlabel0;
            }
            unnamedblk247__DOT__i = ((IData)(1U) + unnamedblk247__DOT__i);
        }
        has_do_available__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_set_arbitration(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_set_arbitration\n"); );
    // Body
    this->__PVT__m_arbitration = val;
}

void Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_get_arbitration(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &get_arbitration__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_get_arbitration\n"); );
    // Body
    get_arbitration__Vfuncrtn = this->__PVT__m_arbitration;
}

void Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_get_arbitration_sequence(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> &get_arbitration_sequence__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_get_arbitration_sequence\n"); );
    // Body
    get_arbitration_sequence__Vfuncrtn = VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(index), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1272)
        ->__PVT__sequence_ptr;
}

void Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_analysis_write(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_analysis_write\n"); );
}

VlCoroutine Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_wait_for_sequences(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_wait_for_sequences\n"); );
    // Locals
    IData/*31:0*/ __Vtrigprevexpr_h81274d79__0;
    __Vtrigprevexpr_h81274d79__0 = 0;
    // Body
    VL_KEEP_THIS;
    this->__Vtask_uvm_wait_for_nba_region__149____VDynScope_uvm_wait_for_nba_region_0 
        = VL_NEW(Varchitecture_uvm_pkg__03a__03a__VDynScope_0, vlSymsp);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba 
        = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba);
    this->__VnoInFunc_wait_for_sequences____Vfork_5__0(std::make_shared<VlProcess>(vlProcess), vlSymsp);
    CData/*0:0*/ __VdynTrigger_h8347f7d0__0;
    __VdynTrigger_h8347f7d0__0 = 0;
    __VdynTrigger_h8347f7d0__0 = 0U;
    __Vtrigprevexpr_h81274d79__0 = VL_NULL_CHECK(this->__Vtask_uvm_wait_for_nba_region__149____VDynScope_uvm_wait_for_nba_region_0, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 430)
        ->__PVT__nba;
    while ((1U & (~ (IData)(__VdynTrigger_h8347f7d0__0)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@( uvm_pkg::uvm_sequencer_base.__Vtask_uvm_wait_for_nba_region__149____VDynScope_uvm_wait_for_nba_region_0.nba)", 
                                                     "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 
                                                     430);
        __VdynTrigger_h8347f7d0__0 = (VL_NULL_CHECK(this->__Vtask_uvm_wait_for_nba_region__149____VDynScope_uvm_wait_for_nba_region_0, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 430)
                                      ->__PVT__nba 
                                      != __Vtrigprevexpr_h81274d79__0);
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h8347f7d0__0);
        __Vtrigprevexpr_h81274d79__0 = VL_NULL_CHECK(this->__Vtask_uvm_wait_for_nba_region__149____VDynScope_uvm_wait_for_nba_region_0, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 430)
            ->__PVT__nba;
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@( uvm_pkg::uvm_sequencer_base.__Vtask_uvm_wait_for_nba_region__149____VDynScope_uvm_wait_for_nba_region_0.nba)", 
                                                 "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 
                                                 430);
    co_return;}

VlCoroutine Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_wait_for_sequences____Vfork_5__0(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_wait_for_sequences____Vfork_5__0\n"); );
    // Body
    VL_KEEP_THIS;
    this->__Vtask___VforkTask_0__151____VDynScope_uvm_wait_for_nba_region_0 
        = this->__Vtask_uvm_wait_for_nba_region__149____VDynScope_uvm_wait_for_nba_region_0;
    vlSymsp->TOP.__VnbaEventTrigger = 1U;
    IData/*31:0*/ __Vintraval_h3517d6f2__0;
    __Vintraval_h3517d6f2__0 = 0;
    __Vintraval_h3517d6f2__0 = vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba;
    this->__VnoInFunc_wait_for_sequences____Vfork_5__0____Vfork_6__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vintraval_h3517d6f2__0);
    vlProcess->state(VlProcess::FINISHED);
    co_return;}

VlCoroutine Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_wait_for_sequences____Vfork_5__0____Vfork_6__0(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_h3517d6f2__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_wait_for_sequences____Vfork_5__0____Vfork_6__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h54bd96ae__3;
    __VdynTrigger_h54bd96ae__3 = 0;
    __VdynTrigger_h54bd96ae__3 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h54bd96ae__3)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 
                                                     429);
        __VdynTrigger_h54bd96ae__3 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h54bd96ae__3);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 
                                                     429);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@([event] __VnbaEvent)", 
                                                 "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 
                                                 429);
    VL_NULL_CHECK(this->__Vtask___VforkTask_0__151____VDynScope_uvm_wait_for_nba_region_0, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 429)->__PVT__nba 
        = __Vintraval_h3517d6f2__0;
    vlProcess->state(VlProcess::FINISHED);
    co_return;}

void Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_send_request(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_item> t, CData/*0:0*/ rerandomize) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_send_request\n"); );
}

void Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_set_max_zero_time_wait_relevant_count(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ new_val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_set_max_zero_time_wait_relevant_count\n"); );
    // Body
    this->__PVT__m_max_zero_time_wait_relevant_count 
        = new_val;
}

void Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_start_phase_sequence(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_start_phase_sequence\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_resource_pool> __Vfunc_get__153__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__154__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_factory> __Vtask_get_factory__155__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_queue__Tz26> __Vtask_lookup_name__156__Vfuncout;
    std::string __Vfunc_get_full_name__157__Vfuncout;
    std::string __Vtask_get_name__158__Vfuncout;
    IData/*31:0*/ __Vtask_size__160__Vfuncout;
    __Vtask_size__160__Vfuncout = 0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_resource_base> __Vtask_get__161__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> __Vtask_read__162__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__163__Vfuncout;
    __Vfunc_uvm_report_enabled__163__Vfuncout = 0;
    std::string __Vtask_get_name__165__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_wrapper> __Vtask_read__166__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__167__Vfuncout;
    __Vfunc_uvm_report_enabled__167__Vfuncout = 0;
    std::string __Vtask_get_name__169__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> __Vtask_create_object_by_type__170__Vfuncout;
    std::string __Vfunc_get_full_name__171__Vfuncout;
    std::string __Vtask_get_type_name__172__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__173__Vfuncout;
    __Vfunc_uvm_report_enabled__173__Vfuncout = 0;
    std::string __Vtask_get_name__175__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__176__Vfuncout;
    __Vfunc_uvm_report_enabled__176__Vfuncout = 0;
    std::string __Vtask_get_name__178__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__179__Vfuncout;
    __Vfunc_uvm_report_enabled__179__Vfuncout = 0;
    std::string __Vtask_get_type_name__181__Vfuncout;
    std::string __Vtask_get_name__182__Vfuncout;
    CData/*0:0*/ __Vtask_get_randomize_enabled__186__Vfuncout;
    __Vtask_get_randomize_enabled__186__Vfuncout = 0;
    IData/*31:0*/ __Vtask_randomize__187__Vfuncout;
    __Vtask_randomize__187__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__188__Vfuncout;
    __Vfunc_uvm_report_enabled__188__Vfuncout = 0;
    std::string __Vtask_get_type_name__190__Vfuncout;
    std::string __Vtask_get_name__191__Vfuncout;
    VlClassRef<Varchitecture_std__03a__03aprocess> __Vfunc_self__192__Vfuncout;
    // Body
    IData/*31:0*/ unnamedblk248__DOT__i;
    unnamedblk248__DOT__i = 0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_resource_base> unnamedblk248__DOT__unnamedblk249__DOT__rsrc;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_resource__Tz65> unnamedblk248__DOT__unnamedblk249__DOT__sbr;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_resource__Tz66> unnamedblk248__DOT__unnamedblk249__DOT__owr;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_wrapper> unnamedblk248__DOT__unnamedblk249__DOT__unnamedblk250__DOT__wrapper;
    VlClassRef<Varchitecture_std__03a__03aprocess> unnamedblk251__DOT____VforkParent;
    VlClassRef<Varchitecture_uvm_pkg__03a__03a__VDynScope_43> __VDynScope_start_phase_sequence_8;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_resource_pool> rp;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_queue__Tz26> rq;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> cs;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_factory> f;
    __VDynScope_start_phase_sequence_8 = VL_NEW(Varchitecture_uvm_pkg__03a__03a__VDynScope_43, vlSymsp);
    VL_NULL_CHECK(__VDynScope_start_phase_sequence_8, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1314)->__PVT__phase 
        = phase;
    {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__153__Vfuncout);
        rp = __Vfunc_get__153__Vfuncout;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__154__Vfuncout);
        cs = __Vfunc_get__154__Vfuncout;
        VL_NULL_CHECK(cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1319)->__VnoInFunc_get_factory(vlSymsp, __Vtask_get_factory__155__Vfuncout);
        f = __Vtask_get_factory__155__Vfuncout;
        VL_NULL_CHECK(rp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1322)->__VnoInFunc_lookup_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                ([&]() {
                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__157__Vfuncout);
                                }(), __Vfunc_get_full_name__157__Vfuncout), "."s), 
                                                                                ([&]() {
                                VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_8, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1322)
                                              ->__PVT__phase, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1322)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__158__Vfuncout);
                            }(), __Vtask_get_name__158__Vfuncout)), "_phase"s)), "default_sequence"s, VlNull{}, 0U, __Vtask_lookup_name__156__Vfuncout);
        rq = __Vtask_lookup_name__156__Vfuncout;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_sort_by_precedence(vlProcess, vlSymsp, rq);
        unnamedblk248__DOT__i = 0U;
        while (((VlNull{} == VL_NULL_CHECK(__VDynScope_start_phase_sequence_8, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1327)
                 ->__PVT__seq) && VL_LTS_III(32, unnamedblk248__DOT__i, 
                                             ([&]() {
                            VL_NULL_CHECK(rq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1327)
                                              ->__VnoInFunc_size(vlSymsp, __Vtask_size__160__Vfuncout);
                        }(), __Vtask_size__160__Vfuncout)))) {
            VL_NULL_CHECK(rq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1328)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk248__DOT__i, __Vtask_get__161__Vfuncout);
            unnamedblk248__DOT__unnamedblk249__DOT__rsrc 
                = __Vtask_get__161__Vfuncout;
            if ((VL_CAST_DYNAMIC(unnamedblk248__DOT__unnamedblk249__DOT__rsrc, unnamedblk248__DOT__unnamedblk249__DOT__sbr) 
                 && (VlNull{} != unnamedblk248__DOT__unnamedblk249__DOT__sbr))) {
                VL_NULL_CHECK(unnamedblk248__DOT__unnamedblk249__DOT__sbr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1338)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequencer_base>{this}, __Vtask_read__162__Vfuncout);
                VL_NULL_CHECK(__VDynScope_start_phase_sequence_8, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1338)->__PVT__seq 
                    = __Vtask_read__162__Vfuncout;
                if ((VlNull{} == VL_NULL_CHECK(__VDynScope_start_phase_sequence_8, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1339)
                     ->__PVT__seq)) {
                    if ((0U != ([&]() {
                                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000190U, 0U, "UVM/SQR/PH/DEF/SB/NULL"s, __Vfunc_uvm_report_enabled__163__Vfuncout);
                                }(), __Vfunc_uvm_report_enabled__163__Vfuncout))) {
                        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "UVM/SQR/PH/DEF/SB/NULL"s, 
                                                          VL_CVT_PACK_STR_NN(
                                                                             VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Default phase sequence for phase '"s, 
                                                                                ([&]() {
                                                VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_8, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1341)
                                                              ->__PVT__phase, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1341)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__165__Vfuncout);
                                            }(), __Vtask_get_name__165__Vfuncout)), "' explicitly disabled"s)), 0x00000190U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh"s, 0x0000053dU, ""s, 1U);
                    }
                    goto __Vlabel0;
                }
            } else if ((VL_CAST_DYNAMIC(unnamedblk248__DOT__unnamedblk249__DOT__rsrc, unnamedblk248__DOT__unnamedblk249__DOT__owr) 
                        && (VlNull{} != unnamedblk248__DOT__unnamedblk249__DOT__owr))) {
                VL_NULL_CHECK(unnamedblk248__DOT__unnamedblk249__DOT__owr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1350)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequencer_base>{this}, __Vtask_read__166__Vfuncout);
                unnamedblk248__DOT__unnamedblk249__DOT__unnamedblk250__DOT__wrapper 
                    = __Vtask_read__166__Vfuncout;
                if ((VlNull{} == unnamedblk248__DOT__unnamedblk249__DOT__unnamedblk250__DOT__wrapper)) {
                    if ((0U != ([&]() {
                                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000190U, 0U, "UVM/SQR/PH/DEF/OW/NULL"s, __Vfunc_uvm_report_enabled__167__Vfuncout);
                                }(), __Vfunc_uvm_report_enabled__167__Vfuncout))) {
                        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "UVM/SQR/PH/DEF/OW/NULL"s, 
                                                          VL_CVT_PACK_STR_NN(
                                                                             VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Default phase sequence for phase '"s, 
                                                                                ([&]() {
                                                VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_8, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1353)
                                                              ->__PVT__phase, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1353)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__169__Vfuncout);
                                            }(), __Vtask_get_name__169__Vfuncout)), "' explicitly disabled"s)), 0x00000190U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh"s, 0x00000549U, ""s, 1U);
                    }
                    goto __Vlabel0;
                }
                if (((! VL_CAST_DYNAMIC(([&]() {
                                        VL_NULL_CHECK(f, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1357)
                                         ->__VnoInFunc_create_object_by_type(vlProcess, vlSymsp, unnamedblk248__DOT__unnamedblk249__DOT__unnamedblk250__DOT__wrapper, 
                                                                             VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                                                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__171__Vfuncout);
                                                    }(), __Vfunc_get_full_name__171__Vfuncout)), 
                                                                             VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                                                        VL_NULL_CHECK(unnamedblk248__DOT__unnamedblk249__DOT__unnamedblk250__DOT__wrapper, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1358)
                                                                                ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__172__Vfuncout);
                                                    }(), __Vtask_get_type_name__172__Vfuncout)), __Vtask_create_object_by_type__170__Vfuncout);
                                    }(), __Vtask_create_object_by_type__170__Vfuncout), VL_NULL_CHECK(__VDynScope_start_phase_sequence_8, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1357)
                                        ->__PVT__seq)) 
                     || (VlNull{} == VL_NULL_CHECK(__VDynScope_start_phase_sequence_8, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1359)
                         ->__PVT__seq))) {
                    if ((0U != ([&]() {
                                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "PHASESEQ"s, __Vfunc_uvm_report_enabled__173__Vfuncout);
                                }(), __Vfunc_uvm_report_enabled__173__Vfuncout))) {
                        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "PHASESEQ"s, 
                                                             VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Default sequence for phase '"s, 
                                                                                ([&]() {
                                                VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_8, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1361)
                                                              ->__PVT__phase, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1361)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__175__Vfuncout);
                                            }(), __Vtask_get_name__175__Vfuncout)), "' %s is not a sequence type"s)), 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh"s, 0x00000551U, ""s, 1U);
                    }
                    goto __Vlabel0;
                }
            }
            unnamedblk248__DOT__i = ((IData)(1U) + unnamedblk248__DOT__i);
        }
        if ((VlNull{} == VL_NULL_CHECK(__VDynScope_start_phase_sequence_8, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1367)
             ->__PVT__seq)) {
            if ((0U != ([&]() {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000190U, 0U, "PHASESEQ"s, __Vfunc_uvm_report_enabled__176__Vfuncout);
                        }(), __Vfunc_uvm_report_enabled__176__Vfuncout))) {
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "PHASESEQ"s, 
                                                  VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("No default phase sequence for phase '"s, 
                                                                                ([&]() {
                                        VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_8, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1369)
                                                      ->__PVT__phase, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1369)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__178__Vfuncout);
                                    }(), __Vtask_get_name__178__Vfuncout)), "'"s)), 0x00000190U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh"s, 0x00000559U, ""s, 1U);
            }
            goto __Vlabel0;
        }
        if ((0U != ([&]() {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000190U, 0U, "PHASESEQ"s, __Vfunc_uvm_report_enabled__179__Vfuncout);
                    }(), __Vfunc_uvm_report_enabled__179__Vfuncout))) {
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "PHASESEQ"s, 
                                              VL_CVT_PACK_STR_NN(
                                                                 VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Starting default sequence '"s, 
                                                                                ([&]() {
                                            VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_8, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1374)
                                                          ->__PVT__seq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1374)
                                                                                ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__181__Vfuncout);
                                        }(), __Vtask_get_type_name__181__Vfuncout)), "' for phase '"s), 
                                                                                ([&]() {
                                    VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_8, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1374)
                                                  ->__PVT__phase, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1374)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__182__Vfuncout);
                                }(), __Vtask_get_name__182__Vfuncout)), "'"s)), 0x00000190U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh"s, 0x0000055eU, ""s, 1U);
        }
        VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_8, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1376)
                      ->__PVT__seq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1376)->__PVT__print_sequence_info = 1U;
        VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_8, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1377)
                      ->__PVT__seq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1377)->__VnoInFunc_set_sequencer(vlSymsp, 
                                                                                VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequencer_base>{this});
        VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_8, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1378)
                      ->__PVT__seq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1378)->__VnoInFunc_reseed(vlProcess, vlSymsp);
        VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_8, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1379)
                      ->__PVT__seq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1379)->__VnoInFunc_set_starting_phase(vlProcess, vlSymsp, VL_NULL_CHECK(__VDynScope_start_phase_sequence_8, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1379)
                                                                                ->__PVT__phase);
        if ((([&]() {
                        VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_8, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1381)
                                      ->__PVT__seq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1381)
              ->__VnoInFunc_get_randomize_enabled(vlSymsp, __Vtask_get_randomize_enabled__186__Vfuncout);
                    }(), (IData)(__Vtask_get_randomize_enabled__186__Vfuncout)) 
             && (1U & (~ (0U != ([&]() {
                                    VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_8, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1381)
                                                  ->__PVT__seq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1381)
                                 ->__VnoInFunc_randomize(vlSymsp, __Vtask_randomize__187__Vfuncout);
                                }(), __Vtask_randomize__187__Vfuncout)))))) {
            if ((0U != ([&]() {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "STRDEFSEQ"s, __Vfunc_uvm_report_enabled__188__Vfuncout);
                        }(), __Vfunc_uvm_report_enabled__188__Vfuncout))) {
                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "STRDEFSEQ"s, 
                                                     VL_CVT_PACK_STR_NN(
                                                                        VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Randomization failed for default sequence '"s, 
                                                                                ([&]() {
                                                VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_8, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1383)
                                                              ->__PVT__seq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1383)
                                                                                ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__190__Vfuncout);
                                            }(), __Vtask_get_type_name__190__Vfuncout)), "' for phase '"s), 
                                                                                ([&]() {
                                        VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_8, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1383)
                                                      ->__PVT__phase, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1383)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__191__Vfuncout);
                                    }(), __Vtask_get_name__191__Vfuncout)), "'"s)), 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh"s, 0x00000567U, ""s, 1U);
            }
            goto __Vlabel0;
        }
        vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __Vfunc_self__192__Vfuncout);
        unnamedblk251__DOT____VforkParent = __Vfunc_self__192__Vfuncout;
        this->__VnoInFunc_start_phase_sequence____Vfork_7__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __VDynScope_start_phase_sequence_8, unnamedblk251__DOT____VforkParent);
        __Vlabel0: ;
    }
}

VlCoroutine Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_start_phase_sequence____Vfork_7__0(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03a__VDynScope_43> __VDynScope_start_phase_sequence_8, VlClassRef<Varchitecture_std__03a__03aprocess> unnamedblk251__DOT____VforkParent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_start_phase_sequence____Vfork_7__0\n"); );
    // Locals
    VlClassRef<Varchitecture_std__03a__03aprocess> __Vtask___VforkTask_3__193____VforkParent;
    VlClassRef<Varchitecture_uvm_pkg__03a__03a__VDynScope_43> __Vtask___VforkTask_3__193____VDynScope_start_phase_sequence_8;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_process_wrapper> __Vtask___VforkTask_3__193__w;
    IData/*31:0*/ __Vtask_status__194__Vfuncout;
    __Vtask_status__194__Vfuncout = 0;
    VlClassRef<Varchitecture_std__03a__03aprocess> __Vfunc_self__196__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_create_random_seed__198__Vfuncout;
    __Vfunc_uvm_create_random_seed__198__Vfuncout = 0;
    std::string __Vfunc_uvm_create_random_seed__198__type_id;
    std::string __Vfunc_uvm_create_random_seed__198__inst_id;
    std::string __Vfunc_get_full_name__199__Vfuncout;
    std::string __Vtask_get_type_name__200__Vfuncout;
    std::string __Vfunc_uvm_instance_scope__202__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_instance_scope__202____Vincrement2;
    __Vfunc_uvm_instance_scope__202____Vincrement2 = 0;
    std::string __Vtask_uvm_report_error__203__id;
    std::string __Vtask_uvm_report_error__203__message;
    IData/*31:0*/ __Vtask_uvm_report_error__203__verbosity;
    __Vtask_uvm_report_error__203__verbosity = 0;
    std::string __Vtask_uvm_report_error__203__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__203__line;
    __Vtask_uvm_report_error__203__line = 0;
    std::string __Vtask_uvm_report_error__203__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__203__report_enabled_checked;
    __Vtask_uvm_report_error__203__report_enabled_checked = 0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__204__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__205__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_oneway_hash__207__Vfuncout;
    __Vfunc_uvm_oneway_hash__207__Vfuncout = 0;
    std::string __Vfunc_uvm_oneway_hash__207__string_in;
    IData/*31:0*/ __Vfunc_uvm_oneway_hash__207__seed;
    __Vfunc_uvm_oneway_hash__207__seed = 0;
    IData/*31:0*/ __Vfunc_uvm_oneway_hash__207__unnamedblk1__DOT___byte;
    __Vfunc_uvm_oneway_hash__207__unnamedblk1__DOT___byte = 0;
    IData/*31:0*/ __Vfunc_uvm_oneway_hash__207__unnamedblk1__DOT__unnamedblk2__DOT___bit;
    __Vfunc_uvm_oneway_hash__207__unnamedblk1__DOT__unnamedblk2__DOT___bit = 0;
    IData/*31:0*/ __Vtemp_1;
    IData/*31:0*/ __Vtemp_2;
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __Vtrigprevexpr_h7ec48697__0;
    __Vtrigprevexpr_h7ec48697__0 = 0;
    __Vtask___VforkTask_3__193____VDynScope_start_phase_sequence_8 
        = __VDynScope_start_phase_sequence_8;
    __Vtask___VforkTask_3__193____VforkParent = unnamedblk251__DOT____VforkParent;
    if ((1U == ([&]() {
                    VL_NULL_CHECK(__Vtask___VforkTask_3__193____VforkParent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1387)
                ->__VnoInFunc_status(vlSymsp, __Vtask_status__194__Vfuncout);
                }(), __Vtask_status__194__Vfuncout))) {
        CData/*0:0*/ __VdynTrigger_h84ab30b2__0;
        __VdynTrigger_h84ab30b2__0 = 0;
        __VdynTrigger_h84ab30b2__0 = 0U;
        while ((1U & (~ (IData)(__VdynTrigger_h84ab30b2__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@([true] (32'h1 != $_EXPRSTMT( // Function: status uvm_pkg::uvm_sequencer_base.__Vtask___VforkTask_3__193____VforkParent.(uvm_pkg::uvm_sequencer_base.__Vtask_status__194__Vfuncout); , ); ))", 
                                                         "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 
                                                         1387);
            __Vtrigprevexpr_h7ec48697__0 = (1U != ([&]() {
                        VL_NULL_CHECK(__Vtask___VforkTask_3__193____VforkParent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1387)
                                                   ->__VnoInFunc_status(vlSymsp, __Vtask_status__194__Vfuncout);
                    }(), __Vtask_status__194__Vfuncout));
            __VdynTrigger_h84ab30b2__0 = __Vtrigprevexpr_h7ec48697__0;
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h84ab30b2__0);
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@([true] (32'h1 != $_EXPRSTMT( // Function: status uvm_pkg::uvm_sequencer_base.__Vtask___VforkTask_3__193____VforkParent.(uvm_pkg::uvm_sequencer_base.__Vtask_status__194__Vfuncout); , ); ))", 
                                                     "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 
                                                     1387);
    }
    __Vtask___VforkTask_3__193__w = VL_NEW(Varchitecture_uvm_pkg__03a__03auvm_sequence_process_wrapper, vlSymsp);
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __Vfunc_self__196__Vfuncout);
    VL_NULL_CHECK(__Vtask___VforkTask_3__193__w, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1390)->__PVT__pid 
        = __Vfunc_self__196__Vfuncout;
    VL_NULL_CHECK(__Vtask___VforkTask_3__193__w, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1391)->__PVT__seq 
        = VL_NULL_CHECK(__Vtask___VforkTask_3__193____VDynScope_start_phase_sequence_8, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1391)
        ->__PVT__seq;
    VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_3__193__w, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1392)
                  ->__PVT__pid, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1392)->__VnoInFunc_srandom(vlSymsp, 
                                                                                ([&]() {
                __Vfunc_uvm_create_random_seed__198__inst_id 
                    = VL_CVT_PACK_STR_NN(([&]() {
                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__199__Vfuncout);
                        }(), __Vfunc_get_full_name__199__Vfuncout));
                __Vfunc_uvm_create_random_seed__198__type_id 
                    = VL_CVT_PACK_STR_NN(([&]() {
                            VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_3__193____VDynScope_start_phase_sequence_8, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1392)
                                          ->__PVT__seq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1392)
                                          ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__200__Vfuncout);
                        }(), __Vtask_get_type_name__200__Vfuncout));
                if ((""s == __Vfunc_uvm_create_random_seed__198__inst_id)) {
                    __Vfunc_uvm_create_random_seed__198__inst_id = "__global__"s;
                }
                if ((! vlSymsp->TOP__uvm_pkg.__PVT__uvm_random_seed_table_lookup.exists(__Vfunc_uvm_create_random_seed__198__inst_id))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_random_seed_table_lookup
                                                                                .at(__Vfunc_uvm_create_random_seed__198__inst_id) 
                        = VL_NEW(Varchitecture_uvm_pkg__03a__03auvm_seed_map, vlSymsp);
                }
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map 
                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_random_seed_table_lookup
                    .at(__Vfunc_uvm_create_random_seed__198__inst_id);
                __Vfunc_uvm_create_random_seed__198__type_id 
                    = VL_CONCATN_NNN(([&]() {
                            {
                                if ((""s != __Vfunc_uvm_instance_scope__202__Vfuncout)) {
                                    goto __Vlabel0;
                                }
                                VL_SFORMAT_NX(64,__Vfunc_uvm_instance_scope__202__Vfuncout
                                              ,"%Nuvm_pkg.uvm_instance_scope",0,
                                              vlSymsp->name());
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos 
                                    = (VL_LEN_IN(__Vfunc_uvm_instance_scope__202__Vfuncout) 
                                       - (IData)(1U));
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__c 
                                    = VL_GETC_N(__Vfunc_uvm_instance_scope__202__Vfuncout,vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos);
                                while ((((0U != vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos) 
                                         & (0x2eU != (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__c))) 
                                        & (0x3aU != (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__c)))) {
                                    __Vfunc_uvm_instance_scope__202____Vincrement2 
                                        = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos 
                                           - (IData)(1U));
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos 
                                        = __Vfunc_uvm_instance_scope__202____Vincrement2;
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__c 
                                        = VL_GETC_N(__Vfunc_uvm_instance_scope__202__Vfuncout,__Vfunc_uvm_instance_scope__202____Vincrement2);
                                }
                                if ((0U == vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos)) {
                                    __Vtask_uvm_report_error__203__report_enabled_checked = 0U;
                                    __Vtask_uvm_report_error__203__context_name = ""s;
                                    __Vtask_uvm_report_error__203__line = 0U;
                                    __Vtask_uvm_report_error__203__filename = ""s;
                                    __Vtask_uvm_report_error__203__verbosity = 0U;
                                    __Vtask_uvm_report_error__203__message 
                                        = VL_SFORMATF_N_NX("Illegal name %@ in scope string",0,
                                                           -1,
                                                           &(__Vfunc_uvm_instance_scope__202__Vfuncout)) ;
                                    __Vtask_uvm_report_error__203__id = "SCPSTR"s;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__204__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                        = __Vfunc_get__204__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                                      ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__205__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                        = __Vtask_get_root__205__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                                      ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__203__id, __Vtask_uvm_report_error__203__message, __Vtask_uvm_report_error__203__verbosity, __Vtask_uvm_report_error__203__filename, __Vtask_uvm_report_error__203__line, __Vtask_uvm_report_error__203__context_name, (IData)(__Vtask_uvm_report_error__203__report_enabled_checked));
                                }
                                __Vfunc_uvm_instance_scope__202__Vfuncout 
                                    = VL_SUBSTR_N(__Vfunc_uvm_instance_scope__202__Vfuncout,0U,vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos);
                                __Vlabel0: ;
                            }
                        }(), __Vfunc_uvm_instance_scope__202__Vfuncout), __Vfunc_uvm_create_random_seed__198__type_id);
                if ((! VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_misc.svh", 175)
                     ->__PVT__seed_table.exists(__Vfunc_uvm_create_random_seed__198__type_id))) {
                    __Vfunc_uvm_oneway_hash__207__seed 
                        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_global_random_seed;
                    __Vfunc_uvm_oneway_hash__207__string_in 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(__Vfunc_uvm_create_random_seed__198__type_id, "::"s), __Vfunc_uvm_create_random_seed__198__inst_id));
                    __Vfunc_uvm_oneway_hash__207__unnamedblk1__DOT___byte = 0;
                    __Vfunc_uvm_oneway_hash__207__unnamedblk1__DOT__unnamedblk2__DOT___bit = 0;
                    if ((1U & (~ (0U != __Vfunc_uvm_oneway_hash__207__seed)))) {
                        __Vfunc_uvm_oneway_hash__207__seed 
                            = vlSymsp->TOP__uvm_pkg.__PVT__uvm_global_random_seed;
                    }
                    __Vfunc_uvm_oneway_hash__207__Vfuncout 
                        = __Vfunc_uvm_oneway_hash__207__seed;
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 = 0xffffffffU;
                    __Vfunc_uvm_oneway_hash__207__unnamedblk1__DOT___byte = 0U;
                    {
                        while (VL_LTS_III(32, __Vfunc_uvm_oneway_hash__207__unnamedblk1__DOT___byte, 
                                          VL_LEN_IN(__Vfunc_uvm_oneway_hash__207__string_in))) {
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte 
                                = VL_GETC_N(__Vfunc_uvm_oneway_hash__207__string_in,__Vfunc_uvm_oneway_hash__207__unnamedblk1__DOT___byte);
                            if ((0U == (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte))) {
                                goto __Vlabel1;
                            }
                            __Vfunc_uvm_oneway_hash__207__unnamedblk1__DOT__unnamedblk2__DOT___bit = 0U;
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
                            __Vfunc_uvm_oneway_hash__207__unnamedblk1__DOT__unnamedblk2__DOT___bit = 1U;
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
                            __Vfunc_uvm_oneway_hash__207__unnamedblk1__DOT__unnamedblk2__DOT___bit = 2U;
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
                            __Vfunc_uvm_oneway_hash__207__unnamedblk1__DOT__unnamedblk2__DOT___bit = 3U;
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
                            __Vfunc_uvm_oneway_hash__207__unnamedblk1__DOT__unnamedblk2__DOT___bit = 4U;
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
                            __Vfunc_uvm_oneway_hash__207__unnamedblk1__DOT__unnamedblk2__DOT___bit = 5U;
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
                            __Vfunc_uvm_oneway_hash__207__unnamedblk1__DOT__unnamedblk2__DOT___bit = 6U;
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
                            __Vfunc_uvm_oneway_hash__207__unnamedblk1__DOT__unnamedblk2__DOT___bit = 7U;
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
                            __Vfunc_uvm_oneway_hash__207__unnamedblk1__DOT__unnamedblk2__DOT___bit = 8U;
                            __Vfunc_uvm_oneway_hash__207__unnamedblk1__DOT___byte 
                                = ((IData)(1U) + __Vfunc_uvm_oneway_hash__207__unnamedblk1__DOT___byte);
                        }
                        __Vlabel1: ;
                    }
                    __Vfunc_uvm_oneway_hash__207__Vfuncout 
                        = (__Vfunc_uvm_oneway_hash__207__Vfuncout 
                           + (~ ((((0x0000ff00U & (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                                   << 8U)) 
                                   | (0x000000ffU & 
                                      (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                       >> 8U))) << 0x00000010U) 
                                 | ((0x0000ff00U & 
                                     (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                      >> 8U)) | (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                                 >> 0x18U)))));
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_misc.svh", 176)
                                                                                ->__PVT__seed_table
                                                                                .at(__Vfunc_uvm_create_random_seed__198__type_id) 
                        = __Vfunc_uvm_oneway_hash__207__Vfuncout;
                }
                if ((! VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_misc.svh", 178)
                     ->__PVT__count.exists(__Vfunc_uvm_create_random_seed__198__type_id))) {
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_misc.svh", 179)
                                                                                ->__PVT__count
                                                                                .at(__Vfunc_uvm_create_random_seed__198__type_id) = 0U;
                }
                __Vtemp_1 = (VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_misc.svh", 185)
                             ->__PVT__seed_table.at(__Vfunc_uvm_create_random_seed__198__type_id) 
                             + VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_misc.svh", 185)
                             ->__PVT__count.at(__Vfunc_uvm_create_random_seed__198__type_id));
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_misc.svh", 185)
                                                                                ->__PVT__seed_table
                                                                                .at(__Vfunc_uvm_create_random_seed__198__type_id) 
                    = __Vtemp_1;
                __Vtemp_2 = ((IData)(1U) + VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_misc.svh", 186)
                             ->__PVT__count.at(__Vfunc_uvm_create_random_seed__198__type_id));
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_misc.svh", 186)
                                                                                ->__PVT__count
                                                                                .at(__Vfunc_uvm_create_random_seed__198__type_id) 
                    = __Vtemp_2;
                __Vfunc_uvm_create_random_seed__198__Vfuncout 
                    = VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_misc.svh", 188)
                    ->__PVT__seed_table.at(__Vfunc_uvm_create_random_seed__198__type_id);
            }(), __Vfunc_uvm_create_random_seed__198__Vfuncout));
    this->__PVT__m_default_sequences.at(VL_NULL_CHECK(__Vtask___VforkTask_3__193____VDynScope_start_phase_sequence_8, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1393)
                                        ->__PVT__phase) 
        = __Vtask___VforkTask_3__193__w;
    co_await VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_3__193____VDynScope_start_phase_sequence_8, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1395)
                           ->__PVT__seq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1395)->__VnoInFunc_start(vlProcess, vlSymsp, 
                                                                                VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequencer_base>{this}, VlNull{}, 0xffffffffU, 1U);
    this->__PVT__m_default_sequences.erase(VL_NULL_CHECK(__Vtask___VforkTask_3__193____VDynScope_start_phase_sequence_8, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1396)
                                           ->__PVT__phase);
    vlProcess->state(VlProcess::FINISHED);
    co_return;}

void Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_stop_phase_sequence(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_stop_phase_sequence\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__209__Vfuncout;
    __Vfunc_uvm_report_enabled__209__Vfuncout = 0;
    std::string __Vtask_get_type_name__211__Vfuncout;
    std::string __Vtask_get_name__212__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__214__Vfuncout;
    __Vfunc_uvm_report_enabled__214__Vfuncout = 0;
    std::string __Vtask_get_name__216__Vfuncout;
    // Body
    if (this->__PVT__m_default_sequences.exists(phase)) {
        if ((0U != ([&]() {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000190U, 0U, "PHASESEQ"s, __Vfunc_uvm_report_enabled__209__Vfuncout);
                    }(), __Vfunc_uvm_report_enabled__209__Vfuncout))) {
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "PHASESEQ"s, 
                                              VL_CVT_PACK_STR_NN(
                                                                 VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Killing default sequence '"s, 
                                                                                ([&]() {
                                            VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__m_default_sequences
                                                                        .at(phase), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1409)
                                                          ->__PVT__seq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1409)
                                                                                ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__211__Vfuncout);
                                        }(), __Vtask_get_type_name__211__Vfuncout)), "' for phase '"s), 
                                                                                ([&]() {
                                    VL_NULL_CHECK(phase, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1409)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__212__Vfuncout);
                                }(), __Vtask_get_name__212__Vfuncout)), "'"s)), 0x00000190U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh"s, 0x00000581U, ""s, 1U);
        }
        VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__m_default_sequences
                                    .at(phase), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1410)
                      ->__PVT__seq, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1410)->__VnoInFunc_kill(vlProcess, vlSymsp);
    } else if ((0U != ([&]() {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000190U, 0U, "PHASESEQ"s, __Vfunc_uvm_report_enabled__214__Vfuncout);
                }(), __Vfunc_uvm_report_enabled__214__Vfuncout))) {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "PHASESEQ"s, 
                                          VL_CVT_PACK_STR_NN(
                                                             VL_CONCATN_NNN(
                                                                            VL_CONCATN_NNN("No default sequence to kill for phase '"s, 
                                                                                ([&]() {
                                VL_NULL_CHECK(phase, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh", 1415)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__216__Vfuncout);
                            }(), __Vtask_get_name__216__Vfuncout)), "'"s)), 0x00000190U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_base.svh"s, 0x00000587U, ""s, 1U);
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_randomize(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__218__Vfuncout;
    __Vfunc___VBasicRand__218__Vfuncout = 0;
    // Body
    Varchitecture_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Varchitecture_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__218__Vfuncout);
            }(), __Vfunc___VBasicRand__218__Vfuncout));
}

void Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc___Vsetup_constraints(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc___Vsetup_constraints\n"); );
}

void Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc___VBasicRand(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::_ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__arb_completed.atDefault() = 0;
    __PVT__m_sequencer_id = 0;
    __PVT__m_lock_arb_size = 0;
    __PVT__m_arb_size = 0;
    __PVT__m_wait_for_item_sequence_id = 0;
    __PVT__m_wait_for_item_transaction_id = 0;
    __PVT__m_wait_relevant_count = 0;
    __PVT__m_max_zero_time_wait_relevant_count = 0;
    __PVT__m_last_wait_relevant_time = VL_SCOPED_RAND_RESET_Q(64, 5929087722006362452ULL, 5269938277684041519ull);
    __PVT__m_arbitration = 0;
    __PVT__m_is_relevant_completed = 0;
    __PVT__m_auto_item_recording = 0;
    __Vtask___VforkTask_2__57__is_relevant_entries.atDefault() = 0;
    __Vtask___VforkTask_1__58__is_relevant_entries.atDefault() = 0;
}

Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::~Varchitecture_uvm_pkg__03a__03auvm_sequencer_base() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequencer_base>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequencer_base::to_string_middle\n"); );
    // Body
    std::string out;
    out += "arb_sequence_q:" + VL_TO_STRING(__PVT__arb_sequence_q);
    out += ", arb_completed:" + VL_TO_STRING(__PVT__arb_completed);
    out += ", lock_list:" + VL_TO_STRING(__PVT__lock_list);
    out += ", reg_sequences:" + VL_TO_STRING(__PVT__reg_sequences);
    out += ", m_sequencer_id:" + VL_TO_STRING(__PVT__m_sequencer_id);
    out += ", m_lock_arb_size:" + VL_TO_STRING(__PVT__m_lock_arb_size);
    out += ", m_arb_size:" + VL_TO_STRING(__PVT__m_arb_size);
    out += ", m_wait_for_item_sequence_id:" + VL_TO_STRING(__PVT__m_wait_for_item_sequence_id);
    out += ", m_wait_for_item_transaction_id:" + VL_TO_STRING(__PVT__m_wait_for_item_transaction_id);
    out += ", m_wait_relevant_count:" + VL_TO_STRING(__PVT__m_wait_relevant_count);
    out += ", m_max_zero_time_wait_relevant_count:" + VL_TO_STRING(__PVT__m_max_zero_time_wait_relevant_count);
    out += ", m_last_wait_relevant_time:" + VL_TO_STRING(__PVT__m_last_wait_relevant_time);
    out += ", m_arbitration:" + VL_TO_STRING(__PVT__m_arbitration);
    out += ", m_default_sequences:" + VL_TO_STRING(__PVT__m_default_sequences);
    out += ", m_is_relevant_completed:" + VL_TO_STRING(__PVT__m_is_relevant_completed);
    out += ", m_auto_item_recording:" + VL_TO_STRING(__PVT__m_auto_item_recording);
    out += ", __Vtask___VforkTask_2__57____VDynScope_m_wait_for_available_sequence_0:" + VL_TO_STRING(__Vtask___VforkTask_2__57____VDynScope_m_wait_for_available_sequence_0);
    out += ", __Vtask___VforkTask_2__57__is_relevant_entries:" + VL_TO_STRING(__Vtask___VforkTask_2__57__is_relevant_entries);
    out += ", __Vtask___VforkTask_1__58__is_relevant_entries:" + VL_TO_STRING(__Vtask___VforkTask_1__58__is_relevant_entries);
    out += ", __Vtask___VforkTask_1__58__unnamedblk242__DOT____VforkParent:" + VL_TO_STRING(__Vtask___VforkTask_1__58__unnamedblk242__DOT____VforkParent);
    out += ", __Vtask___VforkTask_1__58__unnamedblk242__DOT___Vwrapped_unnamedblk243_7__DOT____VDynScope_unnamedblk243_7:" + VL_TO_STRING(__Vtask___VforkTask_1__58__unnamedblk242__DOT___Vwrapped_unnamedblk243_7__DOT____VDynScope_unnamedblk243_7);
    out += ", __Vtask_uvm_wait_for_nba_region__149____VDynScope_uvm_wait_for_nba_region_0:" + VL_TO_STRING(__Vtask_uvm_wait_for_nba_region__149____VDynScope_uvm_wait_for_nba_region_0);
    out += ", __Vtask___VforkTask_0__151____VDynScope_uvm_wait_for_nba_region_0:" + VL_TO_STRING(__Vtask___VforkTask_0__151____VDynScope_uvm_wait_for_nba_region_0);
    out += ", "+ Varchitecture_uvm_pkg__03a__03auvm_component::to_string_middle();
    return (out);
}
