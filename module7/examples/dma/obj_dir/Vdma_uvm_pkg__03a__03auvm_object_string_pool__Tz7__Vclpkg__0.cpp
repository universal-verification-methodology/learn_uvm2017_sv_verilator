// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"

void Vdma_uvm_pkg__03a__03auvm_object_string_pool__Tz7__Vclpkg::__VnoInFunc_get_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__Tz60> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03auvm_object_string_pool__Tz7__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__Tz60> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz60__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vdma_uvm_pkg__03a__03auvm_object_string_pool__Tz7__Vclpkg::__VnoInFunc_type_name(Vdma__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03auvm_object_string_pool__Tz7__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_obj_str_pool"s;
}

void Vdma_uvm_pkg__03a__03auvm_object_string_pool__Tz7__Vclpkg::__VnoInFunc_get_global_pool(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_string_pool__Tz7> &get_global_pool__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03auvm_object_string_pool__Tz7__Vclpkg::__VnoInFunc_get_global_pool\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((VlNull{} == this->__PVT__m_global_pool)) {
        this->__PVT__m_global_pool = VL_NEW(Vdma_uvm_pkg__03a__03auvm_object_string_pool__Tz7, vlProcess, vlSymsp, "global_pool"s);
    }
    get_global_pool__Vfuncrtn = this->__PVT__m_global_pool;
}

void Vdma_uvm_pkg__03a__03auvm_object_string_pool__Tz7__Vclpkg::__VnoInFunc_get_global(Vdma__Syms* __restrict vlSymsp, std::string key, VlClassRef<Vdma_uvm_pkg__03a__03auvm_event_> &get_global__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03auvm_object_string_pool__Tz7__Vclpkg::__VnoInFunc_get_global\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_string_pool__Tz7> __Vfunc_get_global_pool__2__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_event_> __Vtask_get__3__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_string_pool__Tz7> gpool;
    this->__VnoInFunc_get_global_pool(vlSymsp, __Vfunc_get_global_pool__2__Vfuncout);
    gpool = __Vfunc_get_global_pool__2__Vfuncout;
    VL_NULL_CHECK(gpool, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_pool.svh", 287)->__VnoInFunc_get(vlProcess, vlSymsp, key, __Vtask_get__3__Vfuncout);
    get_global__Vfuncrtn = __Vtask_get__3__Vfuncout;
}

void Vdma_uvm_pkg__03a__03auvm_object_string_pool__Tz7::__VnoInFunc_get_object_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_object_string_pool__Tz7::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__Tz60> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz60__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vdma_uvm_pkg__03a__03auvm_object_string_pool__Tz7::__VnoInFunc_create(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_object_string_pool__Tz7::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_string_pool__Tz7> tmp;
    tmp = ((""s == name) ? VL_NEW(Vdma_uvm_pkg__03a__03auvm_object_string_pool__Tz7, vlProcess, vlSymsp, ""s)
            : VL_NEW(Vdma_uvm_pkg__03a__03auvm_object_string_pool__Tz7, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vdma_uvm_pkg__03a__03auvm_object_string_pool__Tz7::__VnoInFunc_get_type_name(Vdma__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_object_string_pool__Tz7::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_obj_str_pool"s;
}

Vdma_uvm_pkg__03a__03auvm_object_string_pool__Tz7::Vdma_uvm_pkg__03a__03auvm_object_string_pool__Tz7(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name)
    : Vdma_uvm_pkg__03a__03auvm_pool__Tz2_TBz7(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_object_string_pool__Tz7::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vdma_uvm_pkg__03a__03auvm_object_string_pool__Tz7::__VnoInFunc_get(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string key, VlClassRef<Vdma_uvm_pkg__03a__03auvm_event_> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_object_string_pool__Tz7::__VnoInFunc_get\n"); );
    // Body
    if ((! Vdma_uvm_pkg__03a__03auvm_pool__Tz2_TBz7::__PVT__pool.exists(key))) {
        Vdma_uvm_pkg__03a__03auvm_pool__Tz2_TBz7::__PVT__pool.at(key) 
            = VL_NEW(Vdma_uvm_pkg__03a__03auvm_event_, vlProcess, vlSymsp, key);
    }
    get__Vfuncrtn = Vdma_uvm_pkg__03a__03auvm_pool__Tz2_TBz7::__PVT__pool
        .at(key);
}

void Vdma_uvm_pkg__03a__03auvm_object_string_pool__Tz7::__VnoInFunc_delete(Vdma__Syms* __restrict vlSymsp, std::string key) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_object_string_pool__Tz7::__VnoInFunc_delete\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_exists__5__Vfuncout;
    __Vfunc_exists__5__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__6__id;
    std::string __Vtask_uvm_report_warning__6__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__6__verbosity;
    __Vtask_uvm_report_warning__6__verbosity = 0;
    std::string __Vtask_uvm_report_warning__6__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__6__line;
    __Vtask_uvm_report_warning__6__line = 0;
    std::string __Vtask_uvm_report_warning__6__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__6__report_enabled_checked;
    __Vtask_uvm_report_warning__6__report_enabled_checked = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__7__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__8__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    {
        if ((1U & (~ (0U != ([&]() {
                                this->__VnoInFunc_exists(vlSymsp, key, __Vfunc_exists__5__Vfuncout);
                            }(), __Vfunc_exists__5__Vfuncout))))) {
            __Vtask_uvm_report_warning__6__report_enabled_checked = 0U;
            __Vtask_uvm_report_warning__6__context_name = ""s;
            __Vtask_uvm_report_warning__6__line = 0U;
            __Vtask_uvm_report_warning__6__filename = ""s;
            __Vtask_uvm_report_warning__6__verbosity = 0x000000c8U;
            __Vtask_uvm_report_warning__6__message 
                = VL_SFORMATF_N_NX("delete: key '%@' doesn't exist",0,
                                   -1,&(key)) ;
            __Vtask_uvm_report_warning__6__id = "POOLDEL"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__7__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__7__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__8__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__8__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__6__id, __Vtask_uvm_report_warning__6__message, __Vtask_uvm_report_warning__6__verbosity, __Vtask_uvm_report_warning__6__filename, __Vtask_uvm_report_warning__6__line, __Vtask_uvm_report_warning__6__context_name, (IData)(__Vtask_uvm_report_warning__6__report_enabled_checked));
            goto __Vlabel0;
        }
        Vdma_uvm_pkg__03a__03auvm_pool__Tz2_TBz7::__PVT__pool.erase(key);
        __Vlabel0: ;
    }
}

void Vdma_uvm_pkg__03a__03auvm_object_string_pool__Tz7::__VnoInFunc_do_print(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_object_string_pool__Tz7::__VnoInFunc_do_print\n"); );
    // Body
    std::string key;
    VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_pool.svh", 323)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "pool"s, Vdma_uvm_pkg__03a__03auvm_pool__Tz2_TBz7::__PVT__pool.size(), "aa_object_string"s, 0x2eU);
    if ((0U != Vdma_uvm_pkg__03a__03auvm_pool__Tz2_TBz7::__PVT__pool.first(key))) {
        do {
            VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_pool.svh", 326)->__VnoInFunc_print_object(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("["s, key), "]"s)), Vdma_uvm_pkg__03a__03auvm_pool__Tz2_TBz7::__PVT__pool
                                                                                .at(key), 0x5bU);
        } while ((0U != Vdma_uvm_pkg__03a__03auvm_pool__Tz2_TBz7::__PVT__pool.next(key)));
    }
    VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_pool.svh", 328)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
}

void Vdma_uvm_pkg__03a__03auvm_object_string_pool__Tz7::__VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_object_string_pool__Tz7::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__14__Vfuncout;
    __Vfunc___VBasicRand__14__Vfuncout = 0;
    // Body
    Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__14__Vfuncout);
            }(), __Vfunc___VBasicRand__14__Vfuncout));
}

void Vdma_uvm_pkg__03a__03auvm_object_string_pool__Tz7::__VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_object_string_pool__Tz7::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_object_string_pool__Tz7::__VnoInFunc___VBasicRand(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_object_string_pool__Tz7::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vdma_uvm_pkg__03a__03auvm_object_string_pool__Tz7::_ctor_var_reset(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_object_string_pool__Tz7::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vdma_uvm_pkg__03a__03auvm_object_string_pool__Tz7::~Vdma_uvm_pkg__03a__03auvm_object_string_pool__Tz7() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_object_string_pool__Tz7::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_string_pool__Tz7>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_object_string_pool__Tz7::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vdma_uvm_pkg__03a__03auvm_object_string_pool__Tz7::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_object_string_pool__Tz7::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vdma_uvm_pkg__03a__03auvm_object_string_pool__Tz7::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_object_string_pool__Tz7::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vdma_uvm_pkg__03a__03auvm_pool__Tz2_TBz7::to_string_middle();
    return (out);
}
