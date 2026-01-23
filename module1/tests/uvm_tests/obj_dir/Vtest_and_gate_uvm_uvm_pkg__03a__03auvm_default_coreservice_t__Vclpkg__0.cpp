// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_and_gate_uvm.h for the primary calling header

#include "Vtest_and_gate_uvm__pch.h"

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_factory(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_factory> &get_factory__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_factory\n"); );
    // Body
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_factory> unnamedblk1__DOT__f;
    if ((VlNull{} == this->__PVT__factory)) {
        unnamedblk1__DOT__f = VL_NEW(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_factory, vlSymsp);
        this->__PVT__factory = unnamedblk1__DOT__f;
    }
    get_factory__Vfuncrtn = this->__PVT__factory;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_set_factory(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_factory> f) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_set_factory\n"); );
    // Body
    this->__PVT__factory = f;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_default_tr_database(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tr_database> &get_default_tr_database__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_default_tr_database\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_std__03a__03aprocess> __Vfunc_self__1__Vfuncout;
    std::string __Vtask_get_randstate__2__Vfuncout;
    // Body
    VlClassRef<Vtest_and_gate_uvm_std__03a__03aprocess> unnamedblk2__DOT__p;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_text_tr_database> unnamedblk2__DOT__tx_db;
    std::string unnamedblk2__DOT__s;
    if ((VlNull{} == this->__PVT__tr_database)) {
        vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __Vfunc_self__1__Vfuncout);
        unnamedblk2__DOT__p = __Vfunc_self__1__Vfuncout;
        if ((VlNull{} != unnamedblk2__DOT__p)) {
            VL_NULL_CHECK(unnamedblk2__DOT__p, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_coreservice.svh", 231)->__VnoInFunc_get_randstate(vlSymsp, __Vtask_get_randstate__2__Vfuncout);
            unnamedblk2__DOT__s = __Vtask_get_randstate__2__Vfuncout;
        }
        unnamedblk2__DOT__tx_db = VL_NEW(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_text_tr_database, vlProcess, vlSymsp, "default_tr_database"s);
        this->__PVT__tr_database = unnamedblk2__DOT__tx_db;
        if ((VlNull{} != unnamedblk2__DOT__p)) {
            VL_NULL_CHECK(unnamedblk2__DOT__p, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_coreservice.svh", 237)->__VnoInFunc_set_randstate(vlSymsp, unnamedblk2__DOT__s);
        }
    }
    get_default_tr_database__Vfuncrtn = this->__PVT__tr_database;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_set_default_tr_database(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tr_database> db) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_set_default_tr_database\n"); );
    // Body
    this->__PVT__tr_database = db;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_report_server(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_server> &get_report_server__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_report_server\n"); );
    // Body
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_report_server> unnamedblk3__DOT__f;
    if ((VlNull{} == this->__PVT__report_server)) {
        unnamedblk3__DOT__f = VL_NEW(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_report_server, vlProcess, vlSymsp, "uvm_report_server"s);
        this->__PVT__report_server = unnamedblk3__DOT__f;
    }
    get_report_server__Vfuncrtn = this->__PVT__report_server;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_set_report_server(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_report_server> server) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_set_report_server\n"); );
    // Body
    this->__PVT__report_server = server;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_root(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> &get_root__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_root\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vfunc_m_uvm_get_root__6__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_m_uvm_get_root(vlProcess, vlSymsp, __Vfunc_m_uvm_get_root__6__Vfuncout);
    get_root__Vfuncrtn = __Vfunc_m_uvm_get_root__6__Vfuncout;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_set_component_visitor(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_visitor_> v) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_set_component_visitor\n"); );
    // Body
    this->__PVT___visitor = v;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_component_visitor(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_visitor_> &get_component_visitor__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_component_visitor\n"); );
    // Body
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_component_name_check_visitor> unnamedblk4__DOT__v;
    if ((VlNull{} == this->__PVT___visitor)) {
        unnamedblk4__DOT__v = VL_NEW(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_component_name_check_visitor, vlProcess, vlSymsp, "name-check-visitor"s);
        this->__PVT___visitor = unnamedblk4__DOT__v;
    }
    get_component_visitor__Vfuncrtn = this->__PVT___visitor;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_set_default_printer(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_set_default_printer\n"); );
    // Body
    this->__PVT__m_printer = printer;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_default_printer(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_printer> &get_default_printer__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_default_printer\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_table_printer> __Vfunc_get_default__8__Vfuncout;
    // Body
    if ((VlNull{} == this->__PVT__m_printer)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__VnoInFunc_get_default(vlProcess, vlSymsp, __Vfunc_get_default__8__Vfuncout);
        this->__PVT__m_printer = __Vfunc_get_default__8__Vfuncout;
    }
    get_default_printer__Vfuncrtn = this->__PVT__m_printer;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_set_default_packer(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_set_default_packer\n"); );
    // Body
    this->__PVT__m_packer = packer;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_default_packer(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_packer> &get_default_packer__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_default_packer\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((VlNull{} == this->__PVT__m_packer)) {
        this->__PVT__m_packer = VL_NEW(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_packer, vlProcess, vlSymsp, "uvm_default_packer"s);
    }
    get_default_packer__Vfuncrtn = this->__PVT__m_packer;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_set_default_comparer(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_comparer> comparer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_set_default_comparer\n"); );
    // Body
    this->__PVT__m_comparer = comparer;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_default_comparer(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_comparer> &get_default_comparer__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_default_comparer\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((VlNull{} == this->__PVT__m_comparer)) {
        this->__PVT__m_comparer = VL_NEW(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_comparer, vlProcess, vlSymsp, "uvm_default_comparer"s);
    }
    get_default_comparer__Vfuncrtn = this->__PVT__m_comparer;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_set_phase_max_ready_to_end(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ max) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_set_phase_max_ready_to_end\n"); );
    // Body
    this->__PVT__m_default_max_ready_to_end_iters = max;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_phase_max_ready_to_end(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_phase_max_ready_to_end__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_phase_max_ready_to_end\n"); );
    // Body
    get_phase_max_ready_to_end__Vfuncrtn = this->__PVT__m_default_max_ready_to_end_iters;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_set_resource_pool(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_resource_pool> pool) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_set_resource_pool\n"); );
    // Body
    this->__PVT__m_rp = pool;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_resource_pool(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_resource_pool> &get_resource_pool__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_resource_pool\n"); );
    // Body
    if ((VlNull{} == this->__PVT__m_rp)) {
        this->__PVT__m_rp = VL_NEW(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_resource_pool, vlSymsp);
    }
    get_resource_pool__Vfuncrtn = this->__PVT__m_rp;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_set_resource_pool_default_precedence(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ precedence) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_set_resource_pool_default_precedence\n"); );
    // Body
    this->__PVT__m_default_precedence = precedence;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_resource_pool_default_precedence(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_resource_pool_default_precedence__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_resource_pool_default_precedence\n"); );
    // Body
    get_resource_pool_default_precedence__Vfuncrtn 
        = this->__PVT__m_default_precedence;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_global_seed(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_global_seed__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_global_seed\n"); );
    // Body
    get_global_seed__Vfuncrtn = this->__PVT__m_uvm_global_seed;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_uvm_seeding(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &get_uvm_seeding__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_uvm_seeding\n"); );
    // Body
    get_uvm_seeding__Vfuncrtn = this->__PVT__m_use_uvm_seeding;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_set_uvm_seeding(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ enable) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_set_uvm_seeding\n"); );
    // Body
    this->__PVT__m_use_uvm_seeding = enable;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_set_default_copier(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_copier> copier) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_set_default_copier\n"); );
    // Body
    this->__PVT__m_copier = copier;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_default_copier(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_copier> &get_default_copier__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::__VnoInFunc_get_default_copier\n"); );
    // Body
    if ((VlNull{} == this->__PVT__m_copier)) {
        this->__PVT__m_copier = VL_NEW(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_copier, vlProcess, vlSymsp, "uvm_default_copier"s);
    }
    get_default_copier__Vfuncrtn = this->__PVT__m_copier;
}

Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t(Vtest_and_gate_uvm__Syms* __restrict vlSymsp)
    : Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t(vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__m_use_uvm_seeding = 1U;
    this->__PVT__m_uvm_global_seed = VL_RANDOM_I();
    this->__PVT__m_default_precedence = 0x000003e8U;
    this->__PVT__m_default_max_ready_to_end_iters = 0x00000014U;
    ;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::_ctor_var_reset(Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_default_max_ready_to_end_iters = 0;
    __PVT__m_default_precedence = 0;
    __PVT__m_uvm_global_seed = 0;
    __PVT__m_use_uvm_seeding = 0;
}

Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::~Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_default_coreservice_t::to_string_middle\n"); );
    // Body
    std::string out;
    out += "factory:" + VL_TO_STRING(__PVT__factory);
    out += ", tr_database:" + VL_TO_STRING(__PVT__tr_database);
    out += ", report_server:" + VL_TO_STRING(__PVT__report_server);
    out += ", _visitor:" + VL_TO_STRING(__PVT___visitor);
    out += ", m_printer:" + VL_TO_STRING(__PVT__m_printer);
    out += ", m_packer:" + VL_TO_STRING(__PVT__m_packer);
    out += ", m_comparer:" + VL_TO_STRING(__PVT__m_comparer);
    out += ", m_default_max_ready_to_end_iters:" + VL_TO_STRING(__PVT__m_default_max_ready_to_end_iters);
    out += ", m_rp:" + VL_TO_STRING(__PVT__m_rp);
    out += ", m_default_precedence:" + VL_TO_STRING(__PVT__m_default_precedence);
    out += ", m_uvm_global_seed:" + VL_TO_STRING(__PVT__m_uvm_global_seed);
    out += ", m_use_uvm_seeding:" + VL_TO_STRING(__PVT__m_use_uvm_seeding);
    out += ", m_copier:" + VL_TO_STRING(__PVT__m_copier);
    out += ", "+ Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t::to_string_middle();
    return (out);
}
