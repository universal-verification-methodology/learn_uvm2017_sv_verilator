// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_example.h for the primary calling header

#include "Vuart_example__pch.h"

void Vuart_example_uvm_pkg__03a__03auvm_object_string_pool__Tz194__Vclpkg::__VnoInFunc_get_type(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_registry__Tz238> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03auvm_object_string_pool__Tz194__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_registry__Tz238> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz238__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vuart_example_uvm_pkg__03a__03auvm_object_string_pool__Tz194__Vclpkg::__VnoInFunc_type_name(Vuart_example__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03auvm_object_string_pool__Tz194__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_obj_str_pool"s;
}

void Vuart_example_uvm_pkg__03a__03auvm_object_string_pool__Tz194__Vclpkg::__VnoInFunc_get_global_pool(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_string_pool__Tz194> &get_global_pool__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03auvm_object_string_pool__Tz194__Vclpkg::__VnoInFunc_get_global_pool\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((VlNull{} == this->__PVT__m_global_pool)) {
        this->__PVT__m_global_pool = VL_NEW(Vuart_example_uvm_pkg__03a__03auvm_object_string_pool__Tz194, vlProcess, vlSymsp, "global_pool"s);
    }
    get_global_pool__Vfuncrtn = this->__PVT__m_global_pool;
}

void Vuart_example_uvm_pkg__03a__03auvm_object_string_pool__Tz194__Vclpkg::__VnoInFunc_get_global(Vuart_example__Syms* __restrict vlSymsp, std::string key, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_queue__Tz2> &get_global__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03auvm_object_string_pool__Tz194__Vclpkg::__VnoInFunc_get_global\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_string_pool__Tz194> __Vfunc_get_global_pool__2__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_queue__Tz2> __Vtask_get__3__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_string_pool__Tz194> gpool;
    this->__VnoInFunc_get_global_pool(vlSymsp, __Vfunc_get_global_pool__2__Vfuncout);
    gpool = __Vfunc_get_global_pool__2__Vfuncout;
    VL_NULL_CHECK(gpool, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_pool.svh", 287)->__VnoInFunc_get(vlProcess, vlSymsp, key, __Vtask_get__3__Vfuncout);
    get_global__Vfuncrtn = __Vtask_get__3__Vfuncout;
}

void Vuart_example_uvm_pkg__03a__03auvm_object_string_pool__Tz194::__VnoInFunc_get_object_type(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuart_example_uvm_pkg__03a__03auvm_object_string_pool__Tz194::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_registry__Tz238> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz238__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vuart_example_uvm_pkg__03a__03auvm_object_string_pool__Tz194::__VnoInFunc_create(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuart_example_uvm_pkg__03a__03auvm_object_string_pool__Tz194::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_string_pool__Tz194> tmp;
    tmp = ((""s == name) ? VL_NEW(Vuart_example_uvm_pkg__03a__03auvm_object_string_pool__Tz194, vlProcess, vlSymsp, ""s)
            : VL_NEW(Vuart_example_uvm_pkg__03a__03auvm_object_string_pool__Tz194, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vuart_example_uvm_pkg__03a__03auvm_object_string_pool__Tz194::__VnoInFunc_get_type_name(Vuart_example__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuart_example_uvm_pkg__03a__03auvm_object_string_pool__Tz194::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_obj_str_pool"s;
}

Vuart_example_uvm_pkg__03a__03auvm_object_string_pool__Tz194::Vuart_example_uvm_pkg__03a__03auvm_object_string_pool__Tz194(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string name)
    : Vuart_example_uvm_pkg__03a__03auvm_pool__Tz2_TBz194(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuart_example_uvm_pkg__03a__03auvm_object_string_pool__Tz194::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vuart_example_uvm_pkg__03a__03auvm_object_string_pool__Tz194::__VnoInFunc_get(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string key, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_queue__Tz2> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuart_example_uvm_pkg__03a__03auvm_object_string_pool__Tz194::__VnoInFunc_get\n"); );
    // Body
    if ((! Vuart_example_uvm_pkg__03a__03auvm_pool__Tz2_TBz194::__PVT__pool.exists(key))) {
        Vuart_example_uvm_pkg__03a__03auvm_pool__Tz2_TBz194::__PVT__pool.at(key) 
            = VL_NEW(Vuart_example_uvm_pkg__03a__03auvm_queue__Tz2, vlProcess, vlSymsp, key);
    }
    get__Vfuncrtn = Vuart_example_uvm_pkg__03a__03auvm_pool__Tz2_TBz194::__PVT__pool
        .at(key);
}

void Vuart_example_uvm_pkg__03a__03auvm_object_string_pool__Tz194::__VnoInFunc_delete(Vuart_example__Syms* __restrict vlSymsp, std::string key) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuart_example_uvm_pkg__03a__03auvm_object_string_pool__Tz194::__VnoInFunc_delete\n"); );
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
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__7__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__8__Vfuncout;
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
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__8__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__8__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__6__id, __Vtask_uvm_report_warning__6__message, __Vtask_uvm_report_warning__6__verbosity, __Vtask_uvm_report_warning__6__filename, __Vtask_uvm_report_warning__6__line, __Vtask_uvm_report_warning__6__context_name, (IData)(__Vtask_uvm_report_warning__6__report_enabled_checked));
            goto __Vlabel0;
        }
        Vuart_example_uvm_pkg__03a__03auvm_pool__Tz2_TBz194::__PVT__pool.erase(key);
        __Vlabel0: ;
    }
}

void Vuart_example_uvm_pkg__03a__03auvm_object_string_pool__Tz194::__VnoInFunc_do_print(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuart_example_uvm_pkg__03a__03auvm_object_string_pool__Tz194::__VnoInFunc_do_print\n"); );
    // Body
    std::string key;
    VL_NULL_CHECK(printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_pool.svh", 323)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "pool"s, Vuart_example_uvm_pkg__03a__03auvm_pool__Tz2_TBz194::__PVT__pool.size(), "aa_object_string"s, 0x2eU);
    if ((0U != Vuart_example_uvm_pkg__03a__03auvm_pool__Tz2_TBz194::__PVT__pool.first(key))) {
        do {
            VL_NULL_CHECK(printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_pool.svh", 326)->__VnoInFunc_print_object(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("["s, key), "]"s)), Vuart_example_uvm_pkg__03a__03auvm_pool__Tz2_TBz194::__PVT__pool
                                                                                .at(key), 0x5bU);
        } while ((0U != Vuart_example_uvm_pkg__03a__03auvm_pool__Tz2_TBz194::__PVT__pool.next(key)));
    }
    VL_NULL_CHECK(printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_pool.svh", 328)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
}

void Vuart_example_uvm_pkg__03a__03auvm_object_string_pool__Tz194::__VnoInFunc_randomize(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuart_example_uvm_pkg__03a__03auvm_object_string_pool__Tz194::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__14__Vfuncout;
    __Vfunc___Vbasic_randomize__14__Vfuncout = 0;
    // Body
    Vuart_example_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vuart_example_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__14__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__14__Vfuncout));
}

void Vuart_example_uvm_pkg__03a__03auvm_object_string_pool__Tz194::__VnoInFunc___Vbasic_randomize(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuart_example_uvm_pkg__03a__03auvm_object_string_pool__Tz194::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vuart_example_uvm_pkg__03a__03auvm_object_string_pool__Tz194::_ctor_var_reset(Vuart_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuart_example_uvm_pkg__03a__03auvm_object_string_pool__Tz194::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_string_pool__Tz194>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuart_example_uvm_pkg__03a__03auvm_object_string_pool__Tz194::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vuart_example_uvm_pkg__03a__03auvm_object_string_pool__Tz194::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuart_example_uvm_pkg__03a__03auvm_object_string_pool__Tz194::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vuart_example_uvm_pkg__03a__03auvm_object_string_pool__Tz194::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuart_example_uvm_pkg__03a__03auvm_object_string_pool__Tz194::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vuart_example_uvm_pkg__03a__03auvm_pool__Tz2_TBz194::to_string_middle();
    return (out);
}
