// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpools_top.h for the primary calling header

#include "Vpools_top__pch.h"

void Vpools_top___024unit__03a__03aTransactionPool__Vclpkg::__VnoInFunc_get_type(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_registry__Tz3_TBz4> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vpools_top___024unit__03a__03aTransactionPool__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_registry__Tz3_TBz4> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz3_TBz4__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vpools_top___024unit__03a__03aTransactionPool__Vclpkg::__VnoInFunc_type_name(Vpools_top__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vpools_top___024unit__03a__03aTransactionPool__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "TransactionPool"s;
}

void Vpools_top___024unit__03a__03aTransactionPool::__VnoInFunc_get_object_type(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vpools_top___024unit__03a__03aTransactionPool::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_registry__Tz3_TBz4> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz3_TBz4__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vpools_top___024unit__03a__03aTransactionPool::__VnoInFunc_create(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vpools_top___024unit__03a__03aTransactionPool::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vpools_top___024unit__03a__03aTransactionPool> tmp;
    tmp = ((""s == name) ? VL_NEW(Vpools_top___024unit__03a__03aTransactionPool, vlProcess, vlSymsp, "TransactionPool"s)
            : VL_NEW(Vpools_top___024unit__03a__03aTransactionPool, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vpools_top___024unit__03a__03aTransactionPool::__VnoInFunc_get_type_name(Vpools_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vpools_top___024unit__03a__03aTransactionPool::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "TransactionPool"s;
}

Vpools_top___024unit__03a__03aTransactionPool::Vpools_top___024unit__03a__03aTransactionPool(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name)
    : Vpools_top_uvm_pkg__03a__03auvm_object(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vpools_top___024unit__03a__03aTransactionPool::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    this->__PVT__pool_size = 0x0000000aU;
    this->__PVT__allocated_count = 0U;
    this->__PVT__freed_count = 0U;
    this->__VnoInFunc_initialize_pool(vlProcess, vlSymsp);
}

void Vpools_top___024unit__03a__03aTransactionPool::__VnoInFunc_initialize_pool(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vpools_top___024unit__03a__03aTransactionPool::__VnoInFunc_initialize_pool\n"); );
    // Locals
    VlClassRef<Vpools_top___024unit__03a__03aPoolTransaction> __Vfunc_create__5__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__6__Vfuncout;
    __Vfunc_uvm_report_enabled__6__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__6__verbosity;
    __Vfunc_uvm_report_enabled__6__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__6__severity;
    __Vfunc_uvm_report_enabled__6__severity = 0;
    std::string __Vfunc_uvm_report_enabled__6__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__7__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__8__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__9__Vfuncout;
    __Vtask_uvm_report_enabled__9__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__10__id;
    std::string __Vtask_uvm_report_info__10__message;
    IData/*31:0*/ __Vtask_uvm_report_info__10__verbosity;
    __Vtask_uvm_report_info__10__verbosity = 0;
    std::string __Vtask_uvm_report_info__10__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__10__line;
    __Vtask_uvm_report_info__10__line = 0;
    std::string __Vtask_uvm_report_info__10__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__10__report_enabled_checked;
    __Vtask_uvm_report_info__10__report_enabled_checked = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__11__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__12__Vfuncout;
    // Body
    IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0;
    VlClassRef<Vpools_top___024unit__03a__03aPoolTransaction> txn;
    unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk1__DOT__i, this->__PVT__pool_size)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz1_TBz2__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, VL_SFORMATF_N_NX("pool_txn_%0d",0,
                                                                                32,
                                                                                unnamedblk1__DOT__i) , VlNull{}, ""s, __Vfunc_create__5__Vfuncout);
        txn = __Vfunc_create__5__Vfuncout;
        this->__PVT__pool.push_back(txn);
        unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
    }
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__6__id = "POOL"s;
                    __Vfunc_uvm_report_enabled__6__severity = 0U;
                    __Vfunc_uvm_report_enabled__6__verbosity = 0x00000064U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__7__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__7__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__8__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__8__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__6__verbosity, (IData)(__Vfunc_uvm_report_enabled__6__severity), __Vfunc_uvm_report_enabled__6__id, __Vtask_uvm_report_enabled__9__Vfuncout);
                    __Vfunc_uvm_report_enabled__6__Vfuncout 
                        = __Vtask_uvm_report_enabled__9__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__6__Vfuncout))) {
        __Vtask_uvm_report_info__10__report_enabled_checked = 1U;
        __Vtask_uvm_report_info__10__context_name = ""s;
        __Vtask_uvm_report_info__10__line = 0x00000074U;
        __Vtask_uvm_report_info__10__filename = "pools.sv"s;
        __Vtask_uvm_report_info__10__verbosity = 0x00000064U;
        __Vtask_uvm_report_info__10__message = VL_SFORMATF_N_NX("Initialized pool with %0d objects",0,
                                                                32,
                                                                this->__PVT__pool_size) ;
        __Vtask_uvm_report_info__10__id = "POOL"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__11__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
            = __Vfunc_get__11__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__12__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
            = __Vtask_get_root__12__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__10__id, __Vtask_uvm_report_info__10__message, __Vtask_uvm_report_info__10__verbosity, __Vtask_uvm_report_info__10__filename, __Vtask_uvm_report_info__10__line, __Vtask_uvm_report_info__10__context_name, (IData)(__Vtask_uvm_report_info__10__report_enabled_checked));
    }
}

void Vpools_top___024unit__03a__03aTransactionPool::__VnoInFunc_allocate(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top___024unit__03a__03aPoolTransaction> &allocate__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vpools_top___024unit__03a__03aTransactionPool::__VnoInFunc_allocate\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__14__Vfuncout;
    __Vfunc_uvm_report_enabled__14__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__14__verbosity;
    __Vfunc_uvm_report_enabled__14__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__14__severity;
    __Vfunc_uvm_report_enabled__14__severity = 0;
    std::string __Vfunc_uvm_report_enabled__14__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__15__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__16__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__17__Vfuncout;
    __Vtask_uvm_report_enabled__17__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__18__id;
    std::string __Vtask_uvm_report_info__18__message;
    IData/*31:0*/ __Vtask_uvm_report_info__18__verbosity;
    __Vtask_uvm_report_info__18__verbosity = 0;
    std::string __Vtask_uvm_report_info__18__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__18__line;
    __Vtask_uvm_report_info__18__line = 0;
    std::string __Vtask_uvm_report_info__18__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__18__report_enabled_checked;
    __Vtask_uvm_report_info__18__report_enabled_checked = 0;
    std::string __Vtask_convert2string__19__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__20__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__21__Vfuncout;
    VlClassRef<Vpools_top___024unit__03a__03aPoolTransaction> __Vfunc_create__23__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__24__Vfuncout;
    __Vfunc_uvm_report_enabled__24__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__24__verbosity;
    __Vfunc_uvm_report_enabled__24__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__24__severity;
    __Vfunc_uvm_report_enabled__24__severity = 0;
    std::string __Vfunc_uvm_report_enabled__24__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__25__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__26__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__27__Vfuncout;
    __Vtask_uvm_report_enabled__27__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__28__id;
    std::string __Vtask_uvm_report_info__28__message;
    IData/*31:0*/ __Vtask_uvm_report_info__28__verbosity;
    __Vtask_uvm_report_info__28__verbosity = 0;
    std::string __Vtask_uvm_report_info__28__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__28__line;
    __Vtask_uvm_report_info__28__line = 0;
    std::string __Vtask_uvm_report_info__28__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__28__report_enabled_checked;
    __Vtask_uvm_report_info__28__report_enabled_checked = 0;
    std::string __Vtask_convert2string__29__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__30__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__31__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    // Body
    VlClassRef<Vpools_top___024unit__03a__03aPoolTransaction> txn;
    if (VL_LTS_III(32, 0U, this->__PVT__pool.size())) {
        txn = this->__PVT__pool.pop_front();
        this->__PVT__allocated_count = ((IData)(1U) 
                                        + this->__PVT__allocated_count);
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__14__id = "POOL"s;
                        __Vfunc_uvm_report_enabled__14__severity = 0U;
                        __Vfunc_uvm_report_enabled__14__verbosity = 0x000001f4U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__15__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__15__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__16__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__16__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__14__verbosity, (IData)(__Vfunc_uvm_report_enabled__14__severity), __Vfunc_uvm_report_enabled__14__id, __Vtask_uvm_report_enabled__17__Vfuncout);
                        __Vfunc_uvm_report_enabled__14__Vfuncout 
                            = __Vtask_uvm_report_enabled__17__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__14__Vfuncout))) {
            __Vtask_uvm_report_info__18__report_enabled_checked = 1U;
            __Vtask_uvm_report_info__18__context_name = ""s;
            __Vtask_uvm_report_info__18__line = 0x0000009bU;
            __Vtask_uvm_report_info__18__filename = "pools.sv"s;
            __Vtask_uvm_report_info__18__verbosity = 0x000001f4U;
            __Vtemp_1 = ([&]() {
                    VL_NULL_CHECK(txn, "pools.sv", 155)
                         ->__VnoInFunc_convert2string(vlProcess, vlSymsp, __Vtask_convert2string__19__Vfuncout);
                }(), __Vtask_convert2string__19__Vfuncout);
            __Vtask_uvm_report_info__18__message = VL_SFORMATF_N_NX("Allocated from pool: %@ (remaining: %0d)",0,
                                                                    -1,
                                                                    &(__Vtemp_1),
                                                                    32,
                                                                    this->__PVT__pool.size()) ;
            __Vtask_uvm_report_info__18__id = "POOL"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__20__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__20__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__21__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__21__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__18__id, __Vtask_uvm_report_info__18__message, __Vtask_uvm_report_info__18__verbosity, __Vtask_uvm_report_info__18__filename, __Vtask_uvm_report_info__18__line, __Vtask_uvm_report_info__18__context_name, (IData)(__Vtask_uvm_report_info__18__report_enabled_checked));
        }
    } else {
        this->__PVT__allocated_count = ((IData)(1U) 
                                        + this->__PVT__allocated_count);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz1_TBz2__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "new_txn"s, VlNull{}, ""s, __Vfunc_create__23__Vfuncout);
        txn = __Vfunc_create__23__Vfuncout;
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__24__id = "POOL"s;
                        __Vfunc_uvm_report_enabled__24__severity = 0U;
                        __Vfunc_uvm_report_enabled__24__verbosity = 0x000001f4U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__25__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__25__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__26__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__26__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__24__verbosity, (IData)(__Vfunc_uvm_report_enabled__24__severity), __Vfunc_uvm_report_enabled__24__id, __Vtask_uvm_report_enabled__27__Vfuncout);
                        __Vfunc_uvm_report_enabled__24__Vfuncout 
                            = __Vtask_uvm_report_enabled__27__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__24__Vfuncout))) {
            __Vtask_uvm_report_info__28__report_enabled_checked = 1U;
            __Vtask_uvm_report_info__28__context_name = ""s;
            __Vtask_uvm_report_info__28__line = 0x000000c4U;
            __Vtask_uvm_report_info__28__filename = "pools.sv"s;
            __Vtask_uvm_report_info__28__verbosity = 0x000001f4U;
            __Vtemp_2 = ([&]() {
                    VL_NULL_CHECK(txn, "pools.sv", 196)
                         ->__VnoInFunc_convert2string(vlProcess, vlSymsp, __Vtask_convert2string__29__Vfuncout);
                }(), __Vtask_convert2string__29__Vfuncout);
            __Vtask_uvm_report_info__28__message = VL_SFORMATF_N_NX("Pool empty, created new: %@",0,
                                                                    -1,
                                                                    &(__Vtemp_2)) ;
            __Vtask_uvm_report_info__28__id = "POOL"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__30__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__30__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__31__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__31__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__28__id, __Vtask_uvm_report_info__28__message, __Vtask_uvm_report_info__28__verbosity, __Vtask_uvm_report_info__28__filename, __Vtask_uvm_report_info__28__line, __Vtask_uvm_report_info__28__context_name, (IData)(__Vtask_uvm_report_info__28__report_enabled_checked));
        }
    }
    allocate__Vfuncrtn = txn;
}

void Vpools_top___024unit__03a__03aTransactionPool::__VnoInFunc_free(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top___024unit__03a__03aPoolTransaction> txn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vpools_top___024unit__03a__03aTransactionPool::__VnoInFunc_free\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__33__Vfuncout;
    __Vfunc_uvm_report_enabled__33__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__33__verbosity;
    __Vfunc_uvm_report_enabled__33__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__33__severity;
    __Vfunc_uvm_report_enabled__33__severity = 0;
    std::string __Vfunc_uvm_report_enabled__33__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__34__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__35__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__36__Vfuncout;
    __Vtask_uvm_report_enabled__36__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__37__id;
    std::string __Vtask_uvm_report_info__37__message;
    IData/*31:0*/ __Vtask_uvm_report_info__37__verbosity;
    __Vtask_uvm_report_info__37__verbosity = 0;
    std::string __Vtask_uvm_report_info__37__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__37__line;
    __Vtask_uvm_report_info__37__line = 0;
    std::string __Vtask_uvm_report_info__37__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__37__report_enabled_checked;
    __Vtask_uvm_report_info__37__report_enabled_checked = 0;
    std::string __Vtask_convert2string__38__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__39__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__40__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__42__Vfuncout;
    __Vfunc_uvm_report_enabled__42__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__42__verbosity;
    __Vfunc_uvm_report_enabled__42__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__42__severity;
    __Vfunc_uvm_report_enabled__42__severity = 0;
    std::string __Vfunc_uvm_report_enabled__42__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__43__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__44__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__45__Vfuncout;
    __Vtask_uvm_report_enabled__45__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__46__id;
    std::string __Vtask_uvm_report_info__46__message;
    IData/*31:0*/ __Vtask_uvm_report_info__46__verbosity;
    __Vtask_uvm_report_info__46__verbosity = 0;
    std::string __Vtask_uvm_report_info__46__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__46__line;
    __Vtask_uvm_report_info__46__line = 0;
    std::string __Vtask_uvm_report_info__46__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__46__report_enabled_checked;
    __Vtask_uvm_report_info__46__report_enabled_checked = 0;
    std::string __Vtask_convert2string__47__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__48__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__49__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    // Body
    if (VL_LTS_III(32, this->__PVT__pool.size(), this->__PVT__pool_size)) {
        this->__PVT__pool.push_back(txn);
        this->__PVT__freed_count = ((IData)(1U) + this->__PVT__freed_count);
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__33__id = "POOL"s;
                        __Vfunc_uvm_report_enabled__33__severity = 0U;
                        __Vfunc_uvm_report_enabled__33__verbosity = 0x000001f4U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__34__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__34__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__35__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__35__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__33__verbosity, (IData)(__Vfunc_uvm_report_enabled__33__severity), __Vfunc_uvm_report_enabled__33__id, __Vtask_uvm_report_enabled__36__Vfuncout);
                        __Vfunc_uvm_report_enabled__33__Vfuncout 
                            = __Vtask_uvm_report_enabled__36__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__33__Vfuncout))) {
            __Vtask_uvm_report_info__37__report_enabled_checked = 1U;
            __Vtask_uvm_report_info__37__context_name = ""s;
            __Vtask_uvm_report_info__37__line = 0x000000f5U;
            __Vtask_uvm_report_info__37__filename = "pools.sv"s;
            __Vtask_uvm_report_info__37__verbosity = 0x000001f4U;
            __Vtemp_1 = ([&]() {
                    VL_NULL_CHECK(txn, "pools.sv", 245)
                         ->__VnoInFunc_convert2string(vlProcess, vlSymsp, __Vtask_convert2string__38__Vfuncout);
                }(), __Vtask_convert2string__38__Vfuncout);
            __Vtask_uvm_report_info__37__message = VL_SFORMATF_N_NX("Freed to pool: %@ (pool size: %0d)",0,
                                                                    -1,
                                                                    &(__Vtemp_1),
                                                                    32,
                                                                    this->__PVT__pool.size()) ;
            __Vtask_uvm_report_info__37__id = "POOL"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__39__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__39__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__40__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__40__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__37__id, __Vtask_uvm_report_info__37__message, __Vtask_uvm_report_info__37__verbosity, __Vtask_uvm_report_info__37__filename, __Vtask_uvm_report_info__37__line, __Vtask_uvm_report_info__37__context_name, (IData)(__Vtask_uvm_report_info__37__report_enabled_checked));
        }
    } else {
        this->__PVT__freed_count = ((IData)(1U) + this->__PVT__freed_count);
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__42__id = "POOL"s;
                        __Vfunc_uvm_report_enabled__42__severity = 0U;
                        __Vfunc_uvm_report_enabled__42__verbosity = 0x000001f4U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__43__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__43__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__44__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__44__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__42__verbosity, (IData)(__Vfunc_uvm_report_enabled__42__severity), __Vfunc_uvm_report_enabled__42__id, __Vtask_uvm_report_enabled__45__Vfuncout);
                        __Vfunc_uvm_report_enabled__42__Vfuncout 
                            = __Vtask_uvm_report_enabled__45__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__42__Vfuncout))) {
            __Vtask_uvm_report_info__46__report_enabled_checked = 1U;
            __Vtask_uvm_report_info__46__context_name = ""s;
            __Vtask_uvm_report_info__46__line = 0x00000106U;
            __Vtask_uvm_report_info__46__filename = "pools.sv"s;
            __Vtask_uvm_report_info__46__verbosity = 0x000001f4U;
            __Vtemp_2 = ([&]() {
                    VL_NULL_CHECK(txn, "pools.sv", 262)
                         ->__VnoInFunc_convert2string(vlProcess, vlSymsp, __Vtask_convert2string__47__Vfuncout);
                }(), __Vtask_convert2string__47__Vfuncout);
            __Vtask_uvm_report_info__46__message = VL_SFORMATF_N_NX("Pool full, discarding: %@",0,
                                                                    -1,
                                                                    &(__Vtemp_2)) ;
            __Vtask_uvm_report_info__46__id = "POOL"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__48__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__48__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__49__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__49__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__46__id, __Vtask_uvm_report_info__46__message, __Vtask_uvm_report_info__46__verbosity, __Vtask_uvm_report_info__46__filename, __Vtask_uvm_report_info__46__line, __Vtask_uvm_report_info__46__context_name, (IData)(__Vtask_uvm_report_info__46__report_enabled_checked));
        }
    }
}

void Vpools_top___024unit__03a__03aTransactionPool::__VnoInFunc_report_phase(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vpools_top___024unit__03a__03aTransactionPool::__VnoInFunc_report_phase\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__51__Vfuncout;
    __Vfunc_uvm_report_enabled__51__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__51__verbosity;
    __Vfunc_uvm_report_enabled__51__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__51__severity;
    __Vfunc_uvm_report_enabled__51__severity = 0;
    std::string __Vfunc_uvm_report_enabled__51__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__52__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__53__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__54__Vfuncout;
    __Vtask_uvm_report_enabled__54__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__55__id;
    std::string __Vtask_uvm_report_info__55__message;
    IData/*31:0*/ __Vtask_uvm_report_info__55__verbosity;
    __Vtask_uvm_report_info__55__verbosity = 0;
    std::string __Vtask_uvm_report_info__55__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__55__line;
    __Vtask_uvm_report_info__55__line = 0;
    std::string __Vtask_uvm_report_info__55__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__55__report_enabled_checked;
    __Vtask_uvm_report_info__55__report_enabled_checked = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__56__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__57__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__59__Vfuncout;
    __Vfunc_uvm_report_enabled__59__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__59__verbosity;
    __Vfunc_uvm_report_enabled__59__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__59__severity;
    __Vfunc_uvm_report_enabled__59__severity = 0;
    std::string __Vfunc_uvm_report_enabled__59__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__60__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__61__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__62__Vfuncout;
    __Vtask_uvm_report_enabled__62__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__63__id;
    std::string __Vtask_uvm_report_info__63__message;
    IData/*31:0*/ __Vtask_uvm_report_info__63__verbosity;
    __Vtask_uvm_report_info__63__verbosity = 0;
    std::string __Vtask_uvm_report_info__63__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__63__line;
    __Vtask_uvm_report_info__63__line = 0;
    std::string __Vtask_uvm_report_info__63__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__63__report_enabled_checked;
    __Vtask_uvm_report_info__63__report_enabled_checked = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__64__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__65__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__67__Vfuncout;
    __Vfunc_uvm_report_enabled__67__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__67__verbosity;
    __Vfunc_uvm_report_enabled__67__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__67__severity;
    __Vfunc_uvm_report_enabled__67__severity = 0;
    std::string __Vfunc_uvm_report_enabled__67__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__68__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__69__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__70__Vfuncout;
    __Vtask_uvm_report_enabled__70__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__71__id;
    std::string __Vtask_uvm_report_info__71__message;
    IData/*31:0*/ __Vtask_uvm_report_info__71__verbosity;
    __Vtask_uvm_report_info__71__verbosity = 0;
    std::string __Vtask_uvm_report_info__71__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__71__line;
    __Vtask_uvm_report_info__71__line = 0;
    std::string __Vtask_uvm_report_info__71__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__71__report_enabled_checked;
    __Vtask_uvm_report_info__71__report_enabled_checked = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__72__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__73__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__75__Vfuncout;
    __Vfunc_uvm_report_enabled__75__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__75__verbosity;
    __Vfunc_uvm_report_enabled__75__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__75__severity;
    __Vfunc_uvm_report_enabled__75__severity = 0;
    std::string __Vfunc_uvm_report_enabled__75__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__76__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__77__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__78__Vfuncout;
    __Vtask_uvm_report_enabled__78__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__79__id;
    std::string __Vtask_uvm_report_info__79__message;
    IData/*31:0*/ __Vtask_uvm_report_info__79__verbosity;
    __Vtask_uvm_report_info__79__verbosity = 0;
    std::string __Vtask_uvm_report_info__79__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__79__line;
    __Vtask_uvm_report_info__79__line = 0;
    std::string __Vtask_uvm_report_info__79__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__79__report_enabled_checked;
    __Vtask_uvm_report_info__79__report_enabled_checked = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__80__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__81__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__83__Vfuncout;
    __Vfunc_uvm_report_enabled__83__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__83__verbosity;
    __Vfunc_uvm_report_enabled__83__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__83__severity;
    __Vfunc_uvm_report_enabled__83__severity = 0;
    std::string __Vfunc_uvm_report_enabled__83__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__84__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__85__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__86__Vfuncout;
    __Vtask_uvm_report_enabled__86__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__87__id;
    std::string __Vtask_uvm_report_info__87__message;
    IData/*31:0*/ __Vtask_uvm_report_info__87__verbosity;
    __Vtask_uvm_report_info__87__verbosity = 0;
    std::string __Vtask_uvm_report_info__87__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__87__line;
    __Vtask_uvm_report_info__87__line = 0;
    std::string __Vtask_uvm_report_info__87__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__87__report_enabled_checked;
    __Vtask_uvm_report_info__87__report_enabled_checked = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__88__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__89__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__51__id = "POOL"s;
                    __Vfunc_uvm_report_enabled__51__severity = 0U;
                    __Vfunc_uvm_report_enabled__51__verbosity = 0x00000064U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__52__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__52__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__53__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__53__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__51__verbosity, (IData)(__Vfunc_uvm_report_enabled__51__severity), __Vfunc_uvm_report_enabled__51__id, __Vtask_uvm_report_enabled__54__Vfuncout);
                    __Vfunc_uvm_report_enabled__51__Vfuncout 
                        = __Vtask_uvm_report_enabled__54__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__51__Vfuncout))) {
        __Vtask_uvm_report_info__55__report_enabled_checked = 1U;
        __Vtask_uvm_report_info__55__context_name = ""s;
        __Vtask_uvm_report_info__55__line = 0x00000114U;
        __Vtask_uvm_report_info__55__filename = "pools.sv"s;
        __Vtask_uvm_report_info__55__verbosity = 0x00000064U;
        __Vtask_uvm_report_info__55__message = "Pool Statistics:"s;
        __Vtask_uvm_report_info__55__id = "POOL"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__56__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
            = __Vfunc_get__56__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__57__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
            = __Vtask_get_root__57__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__55__id, __Vtask_uvm_report_info__55__message, __Vtask_uvm_report_info__55__verbosity, __Vtask_uvm_report_info__55__filename, __Vtask_uvm_report_info__55__line, __Vtask_uvm_report_info__55__context_name, (IData)(__Vtask_uvm_report_info__55__report_enabled_checked));
    }
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__59__id = "POOL"s;
                    __Vfunc_uvm_report_enabled__59__severity = 0U;
                    __Vfunc_uvm_report_enabled__59__verbosity = 0x00000064U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__60__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__60__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__61__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__61__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__59__verbosity, (IData)(__Vfunc_uvm_report_enabled__59__severity), __Vfunc_uvm_report_enabled__59__id, __Vtask_uvm_report_enabled__62__Vfuncout);
                    __Vfunc_uvm_report_enabled__59__Vfuncout 
                        = __Vtask_uvm_report_enabled__62__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__59__Vfuncout))) {
        __Vtask_uvm_report_info__63__report_enabled_checked = 1U;
        __Vtask_uvm_report_info__63__context_name = ""s;
        __Vtask_uvm_report_info__63__line = 0x00000115U;
        __Vtask_uvm_report_info__63__filename = "pools.sv"s;
        __Vtask_uvm_report_info__63__verbosity = 0x00000064U;
        __Vtask_uvm_report_info__63__message = VL_SFORMATF_N_NX("  Pool Size: %0d",0,
                                                                32,
                                                                this->__PVT__pool_size) ;
        __Vtask_uvm_report_info__63__id = "POOL"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__64__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
            = __Vfunc_get__64__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__65__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
            = __Vtask_get_root__65__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__63__id, __Vtask_uvm_report_info__63__message, __Vtask_uvm_report_info__63__verbosity, __Vtask_uvm_report_info__63__filename, __Vtask_uvm_report_info__63__line, __Vtask_uvm_report_info__63__context_name, (IData)(__Vtask_uvm_report_info__63__report_enabled_checked));
    }
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__67__id = "POOL"s;
                    __Vfunc_uvm_report_enabled__67__severity = 0U;
                    __Vfunc_uvm_report_enabled__67__verbosity = 0x00000064U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__68__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__68__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__69__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__69__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__67__verbosity, (IData)(__Vfunc_uvm_report_enabled__67__severity), __Vfunc_uvm_report_enabled__67__id, __Vtask_uvm_report_enabled__70__Vfuncout);
                    __Vfunc_uvm_report_enabled__67__Vfuncout 
                        = __Vtask_uvm_report_enabled__70__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__67__Vfuncout))) {
        __Vtask_uvm_report_info__71__report_enabled_checked = 1U;
        __Vtask_uvm_report_info__71__context_name = ""s;
        __Vtask_uvm_report_info__71__line = 0x00000116U;
        __Vtask_uvm_report_info__71__filename = "pools.sv"s;
        __Vtask_uvm_report_info__71__verbosity = 0x00000064U;
        __Vtask_uvm_report_info__71__message = VL_SFORMATF_N_NX("  Current Pool Size: %0d",0,
                                                                32,
                                                                this->__PVT__pool.size()) ;
        __Vtask_uvm_report_info__71__id = "POOL"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__72__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
            = __Vfunc_get__72__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__73__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
            = __Vtask_get_root__73__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__71__id, __Vtask_uvm_report_info__71__message, __Vtask_uvm_report_info__71__verbosity, __Vtask_uvm_report_info__71__filename, __Vtask_uvm_report_info__71__line, __Vtask_uvm_report_info__71__context_name, (IData)(__Vtask_uvm_report_info__71__report_enabled_checked));
    }
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__75__id = "POOL"s;
                    __Vfunc_uvm_report_enabled__75__severity = 0U;
                    __Vfunc_uvm_report_enabled__75__verbosity = 0x00000064U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__76__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__76__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__77__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__77__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__75__verbosity, (IData)(__Vfunc_uvm_report_enabled__75__severity), __Vfunc_uvm_report_enabled__75__id, __Vtask_uvm_report_enabled__78__Vfuncout);
                    __Vfunc_uvm_report_enabled__75__Vfuncout 
                        = __Vtask_uvm_report_enabled__78__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__75__Vfuncout))) {
        __Vtask_uvm_report_info__79__report_enabled_checked = 1U;
        __Vtask_uvm_report_info__79__context_name = ""s;
        __Vtask_uvm_report_info__79__line = 0x00000117U;
        __Vtask_uvm_report_info__79__filename = "pools.sv"s;
        __Vtask_uvm_report_info__79__verbosity = 0x00000064U;
        __Vtask_uvm_report_info__79__message = VL_SFORMATF_N_NX("  Allocated: %0d",0,
                                                                32,
                                                                this->__PVT__allocated_count) ;
        __Vtask_uvm_report_info__79__id = "POOL"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__80__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
            = __Vfunc_get__80__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__81__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
            = __Vtask_get_root__81__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__79__id, __Vtask_uvm_report_info__79__message, __Vtask_uvm_report_info__79__verbosity, __Vtask_uvm_report_info__79__filename, __Vtask_uvm_report_info__79__line, __Vtask_uvm_report_info__79__context_name, (IData)(__Vtask_uvm_report_info__79__report_enabled_checked));
    }
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__83__id = "POOL"s;
                    __Vfunc_uvm_report_enabled__83__severity = 0U;
                    __Vfunc_uvm_report_enabled__83__verbosity = 0x00000064U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__84__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__84__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__85__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__85__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__83__verbosity, (IData)(__Vfunc_uvm_report_enabled__83__severity), __Vfunc_uvm_report_enabled__83__id, __Vtask_uvm_report_enabled__86__Vfuncout);
                    __Vfunc_uvm_report_enabled__83__Vfuncout 
                        = __Vtask_uvm_report_enabled__86__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__83__Vfuncout))) {
        __Vtask_uvm_report_info__87__report_enabled_checked = 1U;
        __Vtask_uvm_report_info__87__context_name = ""s;
        __Vtask_uvm_report_info__87__line = 0x00000118U;
        __Vtask_uvm_report_info__87__filename = "pools.sv"s;
        __Vtask_uvm_report_info__87__verbosity = 0x00000064U;
        __Vtask_uvm_report_info__87__message = VL_SFORMATF_N_NX("  Freed: %0d",0,
                                                                32,
                                                                this->__PVT__freed_count) ;
        __Vtask_uvm_report_info__87__id = "POOL"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__88__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
            = __Vfunc_get__88__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__89__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
            = __Vtask_get_root__89__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__87__id, __Vtask_uvm_report_info__87__message, __Vtask_uvm_report_info__87__verbosity, __Vtask_uvm_report_info__87__filename, __Vtask_uvm_report_info__87__line, __Vtask_uvm_report_info__87__context_name, (IData)(__Vtask_uvm_report_info__87__report_enabled_checked));
    }
}

void Vpools_top___024unit__03a__03aTransactionPool::__VnoInFunc_randomize(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vpools_top___024unit__03a__03aTransactionPool::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__92__Vfuncout;
    __Vfunc___VBasicRand__92__Vfuncout = 0;
    // Body
    Vpools_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vpools_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__92__Vfuncout);
            }(), __Vfunc___VBasicRand__92__Vfuncout));
}

void Vpools_top___024unit__03a__03aTransactionPool::__VnoInFunc___Vsetup_constraints(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vpools_top___024unit__03a__03aTransactionPool::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vpools_top___024unit__03a__03aTransactionPool::__VnoInFunc___VBasicRand(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vpools_top___024unit__03a__03aTransactionPool::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vpools_top___024unit__03a__03aTransactionPool::_ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vpools_top___024unit__03a__03aTransactionPool::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__pool_size = 0;
    __PVT__allocated_count = 0;
    __PVT__freed_count = 0;
}

Vpools_top___024unit__03a__03aTransactionPool::~Vpools_top___024unit__03a__03aTransactionPool() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vpools_top___024unit__03a__03aTransactionPool::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vpools_top___024unit__03a__03aTransactionPool>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vpools_top___024unit__03a__03aTransactionPool::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vpools_top___024unit__03a__03aTransactionPool::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vpools_top___024unit__03a__03aTransactionPool::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vpools_top___024unit__03a__03aTransactionPool::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vpools_top___024unit__03a__03aTransactionPool::to_string_middle\n"); );
    // Body
    std::string out;
    out += "pool:" + VL_TO_STRING(__PVT__pool);
    out += ", pool_size:" + VL_TO_STRING(__PVT__pool_size);
    out += ", allocated_count:" + VL_TO_STRING(__PVT__allocated_count);
    out += ", freed_count:" + VL_TO_STRING(__PVT__freed_count);
    out += ", "+ Vpools_top_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
