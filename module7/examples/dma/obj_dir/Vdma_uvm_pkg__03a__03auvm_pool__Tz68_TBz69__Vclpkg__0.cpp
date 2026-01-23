// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"

void Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69__Vclpkg::__VnoInFunc_get_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__Tz94> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__Tz94> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz94__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69__Vclpkg::__VnoInFunc_type_name(Vdma__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_pool"s;
}

void Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69__Vclpkg::__VnoInFunc_get_global_pool(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69> &get_global_pool__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69__Vclpkg::__VnoInFunc_get_global_pool\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((VlNull{} == this->__PVT__m_global_pool)) {
        this->__PVT__m_global_pool = VL_NEW(Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69, vlProcess, vlSymsp, "pool"s);
    }
    get_global_pool__Vfuncrtn = this->__PVT__m_global_pool;
}

void Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69__Vclpkg::__VnoInFunc_get_global(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> key, VlClassRef<Vdma_uvm_pkg__03a__03auvm_queue__Tz48> &get_global__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69__Vclpkg::__VnoInFunc_get_global\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69> __Vfunc_get_global_pool__2__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_queue__Tz48> __Vtask_get__3__Vfuncout;
    // Body
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69> gpool;
    this->__VnoInFunc_get_global_pool(vlSymsp, __Vfunc_get_global_pool__2__Vfuncout);
    gpool = __Vfunc_get_global_pool__2__Vfuncout;
    VL_NULL_CHECK(gpool, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_pool.svh", 80)->__VnoInFunc_get(vlSymsp, key, __Vtask_get__3__Vfuncout);
    get_global__Vfuncrtn = __Vtask_get__3__Vfuncout;
}

void Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69::__VnoInFunc_get_object_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__Tz94> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz94__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69::__VnoInFunc_create(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69> tmp;
    tmp = ((""s == name) ? VL_NEW(Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69, vlProcess, vlSymsp, ""s)
            : VL_NEW(Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69::__VnoInFunc_get_type_name(Vdma__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_pool"s;
}

Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69::Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name)
    : Vdma_uvm_pkg__03a__03auvm_object(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69::__VnoInFunc_get(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> key, VlClassRef<Vdma_uvm_pkg__03a__03auvm_queue__Tz48> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69::__VnoInFunc_get\n"); );
    // Body
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_queue__Tz48> unnamedblk1__DOT__default_value;
    if ((! this->__PVT__pool.exists(key))) {
        this->__PVT__pool.at(key) = unnamedblk1__DOT__default_value;
    }
    get__Vfuncrtn = this->__PVT__pool.at(key);
}

void Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69::__VnoInFunc_add(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> key, VlClassRef<Vdma_uvm_pkg__03a__03auvm_queue__Tz48> item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69::__VnoInFunc_add\n"); );
    // Body
    this->__PVT__pool.at(key) = item;
}

void Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69::__VnoInFunc_num(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &num__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69::__VnoInFunc_num\n"); );
    // Body
    num__Vfuncrtn = this->__PVT__pool.size();
}

void Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69::__VnoInFunc_delete(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> key) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69::__VnoInFunc_delete\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_exists__4__Vfuncout;
    __Vfunc_exists__4__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__5__id;
    std::string __Vtask_uvm_report_warning__5__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__5__verbosity;
    __Vtask_uvm_report_warning__5__verbosity = 0;
    std::string __Vtask_uvm_report_warning__5__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__5__line;
    __Vtask_uvm_report_warning__5__line = 0;
    std::string __Vtask_uvm_report_warning__5__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__5__report_enabled_checked;
    __Vtask_uvm_report_warning__5__report_enabled_checked = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__6__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__7__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    {
        if ((1U & (~ (0U != ([&]() {
                                this->__VnoInFunc_exists(vlSymsp, key, __Vfunc_exists__4__Vfuncout);
                            }(), __Vfunc_exists__4__Vfuncout))))) {
            __Vtask_uvm_report_warning__5__report_enabled_checked = 0U;
            __Vtask_uvm_report_warning__5__context_name = ""s;
            __Vtask_uvm_report_warning__5__line = 0U;
            __Vtask_uvm_report_warning__5__filename = ""s;
            __Vtask_uvm_report_warning__5__verbosity = 0x000000c8U;
            __Vtask_uvm_report_warning__5__message = "delete: pool key doesn't exist. Ignoring delete request"s;
            __Vtask_uvm_report_warning__5__id = "POOLDEL"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__6__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__6__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__7__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__7__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__5__id, __Vtask_uvm_report_warning__5__message, __Vtask_uvm_report_warning__5__verbosity, __Vtask_uvm_report_warning__5__filename, __Vtask_uvm_report_warning__5__line, __Vtask_uvm_report_warning__5__context_name, (IData)(__Vtask_uvm_report_warning__5__report_enabled_checked));
            goto __Vlabel0;
        }
        this->__PVT__pool.erase(key);
        __Vlabel0: ;
    }
}

void Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69::__VnoInFunc_exists(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> key, IData/*31:0*/ &exists__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69::__VnoInFunc_exists\n"); );
    // Body
    exists__Vfuncrtn = this->__PVT__pool.exists(key);
}

void Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69::__VnoInFunc_first(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> &key, IData/*31:0*/ &first__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69::__VnoInFunc_first\n"); );
    // Body
    first__Vfuncrtn = this->__PVT__pool.first(key);
}

void Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69::__VnoInFunc_last(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> &key, IData/*31:0*/ &last__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69::__VnoInFunc_last\n"); );
    // Body
    last__Vfuncrtn = this->__PVT__pool.last(key);
}

void Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69::__VnoInFunc_next(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> &key, IData/*31:0*/ &next__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69::__VnoInFunc_next\n"); );
    // Body
    next__Vfuncrtn = this->__PVT__pool.next(key);
}

void Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69::__VnoInFunc_prev(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> &key, IData/*31:0*/ &prev__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69::__VnoInFunc_prev\n"); );
    // Body
    prev__Vfuncrtn = this->__PVT__pool.prev(key);
}

void Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69::__VnoInFunc_do_copy\n"); );
    // Body
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69> p;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> key;
    {
        Vdma_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_copy(vlProcess, vlSymsp, rhs);
        if (((VlNull{} == rhs) || (! VL_CAST_DYNAMIC(rhs, p)))) {
            goto __Vlabel0;
        }
        this->__PVT__pool = VL_NULL_CHECK(p, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_pool.svh", 215)
            ->__PVT__pool;
        __Vlabel0: ;
    }
}

void Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69::__VnoInFunc_do_print(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69::__VnoInFunc_do_print\n"); );
    // Locals
    std::string __Vtemp_1;
    // Body
    std::string v;
    IData/*31:0*/ cnt;
    cnt = 0;
    std::string item;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> key;
    VL_NULL_CHECK(printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_pool.svh", 223)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "pool"s, this->__PVT__pool.size(), "aa_object_string"s, 0x2eU);
    if ((0U != this->__PVT__pool.first(key))) {
        do {
            item = VL_SFORMATF_N_NX("%0d",0,32,cnt) ;
            item = VL_CONCATN_NNN(VL_CONCATN_NNN("[-key"s, item), "--]"s);
            __Vtemp_1 = VL_TO_STRING(this->__PVT__pool
                                     .at(key));
            VL_SFORMAT_NX(64,v,"%@",0,-1,&(__Vtemp_1));
            VL_NULL_CHECK(printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_pool.svh", 229)->__VnoInFunc_print_generic(vlProcess, vlSymsp, item, ""s, 0xffffffffU, v, 0x5bU);
        } while ((0U != this->__PVT__pool.next(key)));
    }
    VL_NULL_CHECK(printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_pool.svh", 232)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
}

void Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69::__VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__14__Vfuncout;
    __Vfunc___Vbasic_randomize__14__Vfuncout = 0;
    // Body
    Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__14__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__14__Vfuncout));
}

void Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69::__VnoInFunc___Vbasic_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69::_ctor_var_reset(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_pool__Tz68_TBz69::to_string_middle\n"); );
    // Body
    std::string out;
    out += "pool:" + VL_TO_STRING(__PVT__pool);
    out += ", "+ Vdma_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
