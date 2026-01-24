// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varchitecture.h for the primary calling header

#include "Varchitecture__pch.h"

Varchitecture_uvm_pkg__03a__03auvm_transaction::Varchitecture_uvm_pkg__03a__03auvm_transaction(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_component> initiator)
    : Varchitecture_uvm_pkg__03a__03auvm_object(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_transaction::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__accept_time = 0xffffffffffffffffULL;
    this->__PVT__end_time = 0xffffffffffffffffULL;
    this->__PVT__begin_time = 0xffffffffffffffffULL;
    this->__PVT__m_transaction_id = 0xffffffffU;
    this->__PVT__events = VL_NEW(Varchitecture_uvm_pkg__03a__03auvm_object_string_pool__Tz24, vlProcess, vlSymsp, "events"s);
    ;
    this->__PVT__initiator = initiator;
    this->__PVT__m_transaction_id = 0xffffffffU;
}

void Varchitecture_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_set_transaction_id(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_set_transaction_id\n"); );
    // Body
    this->__PVT__m_transaction_id = id;
}

void Varchitecture_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_transaction_id(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &get_transaction_id__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_transaction_id\n"); );
    // Body
    get_transaction_id__Vfuncrtn = this->__PVT__m_transaction_id;
}

void Varchitecture_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_set_initiator(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_component> initiator) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_set_initiator\n"); );
    // Body
    this->__PVT__initiator = initiator;
}

void Varchitecture_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_initiator(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_component> &get_initiator__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_initiator\n"); );
    // Body
    get_initiator__Vfuncrtn = this->__PVT__initiator;
}

void Varchitecture_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_event_pool(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_string_pool__Tz24> &get_event_pool__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_event_pool\n"); );
    // Body
    get_event_pool__Vfuncrtn = this->__PVT__events;
}

void Varchitecture_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_is_active(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ &is_active__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_is_active\n"); );
    // Body
    is_active__Vfuncrtn = (0xffffffffffffffffULL == this->__PVT__end_time);
}

void Varchitecture_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_begin_time(Varchitecture__Syms* __restrict vlSymsp, QData/*63:0*/ &get_begin_time__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_begin_time\n"); );
    // Body
    get_begin_time__Vfuncrtn = this->__PVT__begin_time;
}

void Varchitecture_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_end_time(Varchitecture__Syms* __restrict vlSymsp, QData/*63:0*/ &get_end_time__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_end_time\n"); );
    // Body
    get_end_time__Vfuncrtn = this->__PVT__end_time;
}

void Varchitecture_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_accept_time(Varchitecture__Syms* __restrict vlSymsp, QData/*63:0*/ &get_accept_time__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_accept_time\n"); );
    // Body
    get_accept_time__Vfuncrtn = this->__PVT__accept_time;
}

void Varchitecture_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_accept_tr(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_accept_tr\n"); );
}

void Varchitecture_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_begin_tr(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_begin_tr\n"); );
}

void Varchitecture_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_end_tr(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_end_tr\n"); );
}

void Varchitecture_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_print(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_print\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_inst_id__6__Vfuncout;
    __Vtask_get_inst_id__6__Vfuncout = 0;
    std::string __Vtask_get_type_name__8__Vfuncout;
    // Body
    std::string str;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_component> tmp_initiator;
    Varchitecture_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    if ((0xffffffffffffffffULL != this->__PVT__accept_time)) {
        VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_transaction.svh", 618)->__VnoInFunc_print_time(vlProcess, vlSymsp, "accept_time"s, this->__PVT__accept_time, 0x2eU);
    }
    if ((0xffffffffffffffffULL != this->__PVT__begin_time)) {
        VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_transaction.svh", 620)->__VnoInFunc_print_time(vlProcess, vlSymsp, "begin_time"s, this->__PVT__begin_time, 0x2eU);
    }
    if ((0xffffffffffffffffULL != this->__PVT__end_time)) {
        VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_transaction.svh", 622)->__VnoInFunc_print_time(vlProcess, vlSymsp, "end_time"s, this->__PVT__end_time, 0x2eU);
    }
    if ((VlNull{} != this->__PVT__initiator)) {
        tmp_initiator = this->__PVT__initiator;
        VL_SFORMAT_NX(64,str,"@%0d",0,32,([&]() {
                        VL_NULL_CHECK(tmp_initiator, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_transaction.svh", 625)
                                          ->__VnoInFunc_get_inst_id(vlSymsp, __Vtask_get_inst_id__6__Vfuncout);
                    }(), __Vtask_get_inst_id__6__Vfuncout));
        VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_transaction.svh", 626)->__VnoInFunc_print_generic(vlProcess, vlSymsp, "initiator"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                        VL_NULL_CHECK(this->__PVT__initiator, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_transaction.svh", 626)
                                                                                ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__8__Vfuncout);
                    }(), __Vtask_get_type_name__8__Vfuncout)), 0xffffffffU, str, 0x2eU);
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_copy(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_copy\n"); );
    // Body
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_transaction> txn;
    {
        Varchitecture_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_copy(vlProcess, vlSymsp, rhs);
        if ((VlNull{} == rhs)) {
            goto __Vlabel0;
        }
        if ((! VL_CAST_DYNAMIC(rhs, txn))) {
            goto __Vlabel0;
        }
        this->__PVT__accept_time = VL_NULL_CHECK(txn, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_transaction.svh", 636)
            ->__PVT__accept_time;
        this->__PVT__begin_time = VL_NULL_CHECK(txn, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_transaction.svh", 637)
            ->__PVT__begin_time;
        this->__PVT__end_time = VL_NULL_CHECK(txn, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_transaction.svh", 638)
            ->__PVT__end_time;
        this->__PVT__initiator = VL_NULL_CHECK(txn, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_transaction.svh", 639)
            ->__PVT__initiator;
        this->__PVT__stream_handle = VL_NULL_CHECK(txn, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_transaction.svh", 640)
            ->__PVT__stream_handle;
        this->__PVT__tr_recorder = VL_NULL_CHECK(txn, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_transaction.svh", 641)
            ->__PVT__tr_recorder;
        __Vlabel0: ;
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_record(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_recorder> recorder) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_record\n"); );
    // Locals
    IData/*27:0*/ __Vtask_get_recursion_policy__12__Vfuncout;
    __Vtask_get_recursion_policy__12__Vfuncout = 0;
    VlWide<128>/*4095:0*/ __Vtemp_1;
    // Body
    IData/*27:0*/ unnamedblk73__DOT__p;
    unnamedblk73__DOT__p = 0;
    std::string s;
    Varchitecture_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_record(vlProcess, vlSymsp, recorder);
    if ((0xffffffffffffffffULL != this->__PVT__accept_time)) {
        __Vtemp_1[0U] = (IData)(this->__PVT__accept_time);
        __Vtemp_1[1U] = (IData)((this->__PVT__accept_time 
                                 >> 0x00000020U));
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 2U;
        while ((__Vilp1 <= 0x0000007fU)) {
            __Vtemp_1[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        VL_NULL_CHECK(recorder, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_transaction.svh", 651)->__VnoInFunc_record_field(vlProcess, vlSymsp, "accept_time"s, __Vtemp_1, 0x00000040U, 0x09000000U);
    }
    if ((VlNull{} != this->__PVT__initiator)) {
        VL_NULL_CHECK(recorder, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_transaction.svh", 653)->__VnoInFunc_get_recursion_policy(vlSymsp, __Vtask_get_recursion_policy__12__Vfuncout);
        unnamedblk73__DOT__p = __Vtask_get_recursion_policy__12__Vfuncout;
        VL_NULL_CHECK(recorder, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_transaction.svh", 654)->__VnoInFunc_set_recursion_policy(vlSymsp, 0x00040000U);
        VL_NULL_CHECK(recorder, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_transaction.svh", 655)->__VnoInFunc_record_object(vlProcess, vlSymsp, "initiator"s, this->__PVT__initiator);
        VL_NULL_CHECK(recorder, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_transaction.svh", 656)->__VnoInFunc_set_recursion_policy(vlSymsp, unnamedblk73__DOT__p);
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_tr_handle(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &get_tr_handle__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_get_tr_handle\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_handle__16__Vfuncout;
    __Vtask_get_handle__16__Vfuncout = 0;
    // Body
    get_tr_handle__Vfuncrtn = ((VlNull{} != this->__PVT__tr_recorder)
                                ? ([&]() {
                VL_NULL_CHECK(this->__PVT__tr_recorder, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_transaction.svh", 665)
                                   ->__VnoInFunc_get_handle(vlSymsp, __Vtask_get_handle__16__Vfuncout);
            }(), __Vtask_get_handle__16__Vfuncout) : 0U);
}

void Varchitecture_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_disable_recording(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_disable_recording\n"); );
    // Body
    this->__PVT__stream_handle = VlNull{};
}

void Varchitecture_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_enable_recording(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tr_stream> stream) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_enable_recording\n"); );
    // Body
    this->__PVT__stream_handle = stream;
}

void Varchitecture_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_is_recording_enabled(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ &is_recording_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_is_recording_enabled\n"); );
    // Body
    is_recording_enabled__Vfuncrtn = (VlNull{} != this->__PVT__stream_handle);
}

void Varchitecture_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_accept_tr(Varchitecture__Syms* __restrict vlSymsp, QData/*63:0*/ accept_time) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_accept_tr\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_event_> __Vtask_get__18__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_event_> e;
    if ((0ULL != accept_time)) {
        this->__PVT__accept_time = accept_time;
    } else {
        this->__PVT__accept_time = VL_RTOIROUND_Q_D(VL_TIME_UNITED_D(1000));
    }
    this->__VnoInFunc_do_accept_tr(vlSymsp);
    VL_NULL_CHECK(this->__PVT__events, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_transaction.svh", 706)->__VnoInFunc_get(vlProcess, vlSymsp, "accept"s, __Vtask_get__18__Vfuncout);
    e = __Vtask_get__18__Vfuncout;
    if ((VlNull{} != e)) {
        VL_NULL_CHECK(e, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_transaction.svh", 709)->__VnoInFunc_trigger__Vtcwrap_1(vlProcess, vlSymsp);
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_begin_tr(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, QData/*63:0*/ begin_time, IData/*31:0*/ &begin_tr__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_begin_tr\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_m_begin_tr__20__Vfuncout;
    __Vfunc_m_begin_tr__20__Vfuncout = 0;
    // Body
    this->__VnoInFunc_m_begin_tr(vlProcess, vlSymsp, begin_time, 0U, __Vfunc_m_begin_tr__20__Vfuncout);
    begin_tr__Vfuncrtn = __Vfunc_m_begin_tr__20__Vfuncout;
}

void Varchitecture_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_begin_child_tr(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, QData/*63:0*/ begin_time, IData/*31:0*/ parent_handle, IData/*31:0*/ &begin_child_tr__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_begin_child_tr\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_m_begin_tr__21__Vfuncout;
    __Vfunc_m_begin_tr__21__Vfuncout = 0;
    // Body
    this->__VnoInFunc_m_begin_tr(vlProcess, vlSymsp, begin_time, parent_handle, __Vfunc_m_begin_tr__21__Vfuncout);
    begin_child_tr__Vfuncrtn = __Vfunc_m_begin_tr__21__Vfuncout;
}

void Varchitecture_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_m_begin_tr(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, QData/*63:0*/ begin_time, IData/*31:0*/ parent_handle, IData/*31:0*/ &m_begin_tr__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_m_begin_tr\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_recorder> __Vfunc_get_recorder_from_handle__22__Vfuncout;
    CData/*0:0*/ __Vfunc_is_recording_enabled__24__Vfuncout;
    __Vfunc_is_recording_enabled__24__Vfuncout = 0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tr_database> __Vtask_get_db__25__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_recorder> __Vtask_open_recorder__26__Vfuncout;
    std::string __Vfunc_get_type_name__27__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_recorder> __Vtask_open_recorder__28__Vfuncout;
    std::string __Vfunc_get_type_name__29__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_parent_child_link> __Vfunc_get_link__31__Vfuncout;
    IData/*31:0*/ __Vtask_get_handle__32__Vfuncout;
    __Vtask_get_handle__32__Vfuncout = 0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_event_> __Vtask_get__34__Vfuncout;
    // Body
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tr_database> unnamedblk74__DOT__db;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_event_> unnamedblk75__DOT__begin_event;
    QData/*63:0*/ tmp_time;
    tmp_time = 0;
    tmp_time = VL_RTOIROUND_Q_D(((0ULL == begin_time)
                                  ? VL_TIME_UNITED_D(1000)
                                  : VL_ITOR_D_Q(64, begin_time)));
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_recorder> parent_recorder;
    if ((0U != parent_handle)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__VnoInFunc_get_recorder_from_handle(vlSymsp, parent_handle, __Vfunc_get_recorder_from_handle__22__Vfuncout);
        parent_recorder = __Vfunc_get_recorder_from_handle__22__Vfuncout;
    }
    if ((VlNull{} != this->__PVT__tr_recorder)) {
        this->__VnoInFunc_end_tr(vlProcess, vlSymsp, tmp_time, 1U);
    }
    if (([&]() {
                this->__VnoInFunc_is_recording_enabled(vlSymsp, __Vfunc_is_recording_enabled__24__Vfuncout);
            }(), (IData)(__Vfunc_is_recording_enabled__24__Vfuncout))) {
        VL_NULL_CHECK(this->__PVT__stream_handle, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_transaction.svh", 747)->__VnoInFunc_get_db(vlProcess, vlSymsp, __Vtask_get_db__25__Vfuncout);
        unnamedblk74__DOT__db = __Vtask_get_db__25__Vfuncout;
        this->__PVT__end_time = 0xffffffffffffffffULL;
        this->__PVT__begin_time = tmp_time;
        if ((VlNull{} == parent_recorder)) {
            VL_NULL_CHECK(this->__PVT__stream_handle, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_transaction.svh", 753)->__VnoInFunc_open_recorder(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                            this->__VnoInFunc_get_type_name(vlSymsp, __Vfunc_get_type_name__27__Vfuncout);
                        }(), __Vfunc_get_type_name__27__Vfuncout)), this->__PVT__begin_time, "Begin_No_Parent, Link"s, __Vtask_open_recorder__26__Vfuncout);
            this->__PVT__tr_recorder = __Vtask_open_recorder__26__Vfuncout;
        } else {
            VL_NULL_CHECK(this->__PVT__stream_handle, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_transaction.svh", 757)->__VnoInFunc_open_recorder(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                            this->__VnoInFunc_get_type_name(vlSymsp, __Vfunc_get_type_name__29__Vfuncout);
                        }(), __Vfunc_get_type_name__29__Vfuncout)), this->__PVT__begin_time, "Begin_End, Link"s, __Vtask_open_recorder__28__Vfuncout);
            this->__PVT__tr_recorder = __Vtask_open_recorder__28__Vfuncout;
            if ((VlNull{} != this->__PVT__tr_recorder)) {
                VL_NULL_CHECK(unnamedblk74__DOT__db, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_transaction.svh", 762)->__VnoInFunc_establish_link(vlProcess, vlSymsp, 
                                                                                ([&]() {
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_parent_child_link__Vclpkg.__VnoInFunc_get_link(vlProcess, vlSymsp, parent_recorder, this->__PVT__tr_recorder, "pc_link"s, __Vfunc_get_link__31__Vfuncout);
                        }(), __Vfunc_get_link__31__Vfuncout));
            }
        }
        m_begin_tr__Vfuncrtn = ((VlNull{} != this->__PVT__tr_recorder)
                                 ? ([&]() {
                    VL_NULL_CHECK(this->__PVT__tr_recorder, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_transaction.svh", 766)
                                    ->__VnoInFunc_get_handle(vlSymsp, __Vtask_get_handle__32__Vfuncout);
                }(), __Vtask_get_handle__32__Vfuncout)
                                 : 0U);
    } else {
        this->__PVT__tr_recorder = VlNull{};
        this->__PVT__end_time = 0xffffffffffffffffULL;
        this->__PVT__begin_time = tmp_time;
        m_begin_tr__Vfuncrtn = 0U;
    }
    this->__VnoInFunc_do_begin_tr(vlSymsp);
    VL_NULL_CHECK(this->__PVT__events, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_transaction.svh", 782)->__VnoInFunc_get(vlProcess, vlSymsp, "begin"s, __Vtask_get__34__Vfuncout);
    unnamedblk75__DOT__begin_event = __Vtask_get__34__Vfuncout;
    VL_NULL_CHECK(unnamedblk75__DOT__begin_event, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_transaction.svh", 783)->__VnoInFunc_trigger__Vtcwrap_1(vlProcess, vlSymsp);
}

void Varchitecture_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_end_tr(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, QData/*63:0*/ end_time, CData/*0:0*/ free_handle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_end_tr\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_is_recording_enabled__37__Vfuncout;
    __Vfunc_is_recording_enabled__37__Vfuncout = 0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_event_> __Vtask_get__41__Vfuncout;
    // Body
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_event_> unnamedblk76__DOT__end_event;
    this->__PVT__end_time = VL_RTOIROUND_Q_D(((0ULL 
                                               == end_time)
                                               ? VL_TIME_UNITED_D(1000)
                                               : VL_ITOR_D_Q(64, end_time)));
    this->__VnoInFunc_do_end_tr(vlSymsp);
    if ((([&]() {
                    this->__VnoInFunc_is_recording_enabled(vlSymsp, __Vfunc_is_recording_enabled__37__Vfuncout);
                }(), (IData)(__Vfunc_is_recording_enabled__37__Vfuncout)) 
         & (VlNull{} != this->__PVT__tr_recorder))) {
        this->__VnoInFunc_record(vlProcess, vlSymsp, this->__PVT__tr_recorder);
        VL_NULL_CHECK(this->__PVT__tr_recorder, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_transaction.svh", 800)->__VnoInFunc_close(vlSymsp, this->__PVT__end_time);
        if (free_handle) {
            VL_NULL_CHECK(this->__PVT__tr_recorder, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_transaction.svh", 805)->__VnoInFunc_free(vlProcess, vlSymsp, 0ULL);
        }
    }
    this->__PVT__tr_recorder = VlNull{};
    VL_NULL_CHECK(this->__PVT__events, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_transaction.svh", 813)->__VnoInFunc_get(vlProcess, vlSymsp, "end"s, __Vtask_get__41__Vfuncout);
    unnamedblk76__DOT__end_event = __Vtask_get__41__Vfuncout;
    VL_NULL_CHECK(unnamedblk76__DOT__end_event, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_transaction.svh", 814)->__VnoInFunc_trigger__Vtcwrap_1(vlProcess, vlSymsp);
}

void Varchitecture_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_randomize(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__44__Vfuncout;
    __Vfunc___VBasicRand__44__Vfuncout = 0;
    // Body
    Varchitecture_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Varchitecture_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__44__Vfuncout);
            }(), __Vfunc___VBasicRand__44__Vfuncout));
}

void Varchitecture_uvm_pkg__03a__03auvm_transaction::__VnoInFunc___Vsetup_constraints(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_transaction::__VnoInFunc___Vsetup_constraints\n"); );
}

void Varchitecture_uvm_pkg__03a__03auvm_transaction::__VnoInFunc___VBasicRand(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_transaction::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Varchitecture_uvm_pkg__03a__03auvm_transaction::_ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_transaction::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_transaction_id = 0;
    __PVT__begin_time = VL_SCOPED_RAND_RESET_Q(64, 2155276697553782511ULL, 6541028581216973727ull);
    __PVT__end_time = VL_SCOPED_RAND_RESET_Q(64, 2155276697553782511ULL, 11068616750587329773ull);
    __PVT__accept_time = VL_SCOPED_RAND_RESET_Q(64, 2155276697553782511ULL, 634155004886215667ull);
}

Varchitecture_uvm_pkg__03a__03auvm_transaction::~Varchitecture_uvm_pkg__03a__03auvm_transaction() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_transaction::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_transaction>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_transaction::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Varchitecture_uvm_pkg__03a__03auvm_transaction::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_transaction::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Varchitecture_uvm_pkg__03a__03auvm_transaction::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_transaction::to_string_middle\n"); );
    // Body
    std::string out;
    out += "events:" + VL_TO_STRING(__PVT__events);
    out += ", m_transaction_id:" + VL_TO_STRING(__PVT__m_transaction_id);
    out += ", begin_time:" + VL_TO_STRING(__PVT__begin_time);
    out += ", end_time:" + VL_TO_STRING(__PVT__end_time);
    out += ", accept_time:" + VL_TO_STRING(__PVT__accept_time);
    out += ", initiator:" + VL_TO_STRING(__PVT__initiator);
    out += ", stream_handle:" + VL_TO_STRING(__PVT__stream_handle);
    out += ", tr_recorder:" + VL_TO_STRING(__PVT__tr_recorder);
    out += ", "+ Varchitecture_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
