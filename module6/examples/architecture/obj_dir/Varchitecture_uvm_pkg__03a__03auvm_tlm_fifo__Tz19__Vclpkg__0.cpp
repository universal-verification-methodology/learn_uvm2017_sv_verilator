// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varchitecture.h for the primary calling header

#include "Varchitecture__pch.h"

void Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo__Tz19__Vclpkg::__VnoInFunc_get_type(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_component_registry__Tz242> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo__Tz19__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_component_registry__Tz242> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__Tz242__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo__Tz19__Vclpkg::__VnoInFunc_type_name(Varchitecture__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo__Tz19__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_tlm_fifo #(T)"s;
}

void Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo__Tz19::__VnoInFunc_get_object_type(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo__Tz19::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_component_registry__Tz242> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__Tz242__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo__Tz19::__VnoInFunc_get_type_name(Varchitecture__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo__Tz19::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_tlm_fifo #(T)"s;
}

Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo__Tz19::Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo__Tz19(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_component> parent, IData/*31:0*/ size)
    : Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz19(vlProcess, vlSymsp, name, parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo__Tz19::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    this->__PVT__m = VL_NEW(Varchitecture_std__03a__03amailbox__Tz19, vlSymsp, size);
    this->__PVT__m_size = size;
}

void Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo__Tz19::__VnoInFunc_size(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo__Tz19::__VnoInFunc_size\n"); );
    // Body
    size__Vfuncrtn = this->__PVT__m_size;
}

void Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo__Tz19::__VnoInFunc_used(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &used__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo__Tz19::__VnoInFunc_used\n"); );
    // Locals
    IData/*31:0*/ __Vtask_num__3__Vfuncout;
    __Vtask_num__3__Vfuncout = 0;
    // Body
    VL_NULL_CHECK(this->__PVT__m, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_tlm_fifos.svh", 88)->__VnoInFunc_num(vlSymsp, __Vtask_num__3__Vfuncout);
    used__Vfuncrtn = __Vtask_num__3__Vfuncout;
}

void Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo__Tz19::__VnoInFunc_is_empty(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ &is_empty__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo__Tz19::__VnoInFunc_is_empty\n"); );
    // Locals
    IData/*31:0*/ __Vtask_num__4__Vfuncout;
    __Vtask_num__4__Vfuncout = 0;
    // Body
    is_empty__Vfuncrtn = (0U == ([&]() {
                VL_NULL_CHECK(this->__PVT__m, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_tlm_fifos.svh", 97)
                                 ->__VnoInFunc_num(vlSymsp, __Vtask_num__4__Vfuncout);
            }(), __Vtask_num__4__Vfuncout));
}

void Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo__Tz19::__VnoInFunc_is_full(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ &is_full__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo__Tz19::__VnoInFunc_is_full\n"); );
    // Locals
    IData/*31:0*/ __Vtask_num__5__Vfuncout;
    __Vtask_num__5__Vfuncout = 0;
    // Body
    is_full__Vfuncrtn = ((0U != this->__PVT__m_size) 
                         && (([&]() {
                    VL_NULL_CHECK(this->__PVT__m, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_tlm_fifos.svh", 107)
                              ->__VnoInFunc_num(vlSymsp, __Vtask_num__5__Vfuncout);
                }(), __Vtask_num__5__Vfuncout) == this->__PVT__m_size));
}

VlCoroutine Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo__Tz19::__VnoInFunc_put(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo__Tz19::__VnoInFunc_put\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_tlm_fifos.svh", 113)->__VnoInFunc_put(vlSymsp, t);
    VL_NULL_CHECK(Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz19::__PVT__put_ap, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_tlm_fifos.svh", 114)->__VnoInFunc_write(vlProcess, vlSymsp, t);
}

VlCoroutine Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo__Tz19::__VnoInFunc_get(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo__Tz19::__VnoInFunc_get\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    this->__PVT__m_pending_blocked_gets = ((IData)(1U) 
                                           + this->__PVT__m_pending_blocked_gets);
    co_await VL_NULL_CHECK(this->__PVT__m, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_tlm_fifos.svh", 119)->__VnoInFunc_get(vlSymsp, t);
    this->__PVT__m_pending_blocked_gets = (this->__PVT__m_pending_blocked_gets 
                                           - (IData)(1U));
    VL_NULL_CHECK(Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz19::__PVT__get_ap, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_tlm_fifos.svh", 121)->__VnoInFunc_write(vlProcess, vlSymsp, t);
}

VlCoroutine Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo__Tz19::__VnoInFunc_peek(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo__Tz19::__VnoInFunc_peek\n"); );
    // Body
    VL_KEEP_THIS;
    co_await VL_NULL_CHECK(this->__PVT__m, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_tlm_fifos.svh", 125)->__VnoInFunc_peek(vlSymsp, t);
}

void Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo__Tz19::__VnoInFunc_try_get(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_item> &t, CData/*0:0*/ &try_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo__Tz19::__VnoInFunc_try_get\n"); );
    // Locals
    IData/*31:0*/ __Vtask_try_get__11__Vfuncout;
    __Vtask_try_get__11__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    {
        if ((1U & (~ (0U != ([&]() {
                                VL_NULL_CHECK(this->__PVT__m, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_tlm_fifos.svh", 129)
                             ->__VnoInFunc_try_get(vlSymsp, t, __Vtask_try_get__11__Vfuncout);
                            }(), __Vtask_try_get__11__Vfuncout))))) {
            try_get__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz19::__PVT__get_ap, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_tlm_fifos.svh", 133)->__VnoInFunc_write(vlProcess, vlSymsp, t);
        try_get__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo__Tz19::__VnoInFunc_try_peek(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_item> &t, CData/*0:0*/ &try_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo__Tz19::__VnoInFunc_try_peek\n"); );
    // Locals
    IData/*31:0*/ __Vtask_try_peek__13__Vfuncout;
    __Vtask_try_peek__13__Vfuncout = 0;
    // Body
    {
        if ((1U & (~ (0U != ([&]() {
                                VL_NULL_CHECK(this->__PVT__m, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_tlm_fifos.svh", 138)
                             ->__VnoInFunc_try_peek(vlSymsp, t, __Vtask_try_peek__13__Vfuncout);
                            }(), __Vtask_try_peek__13__Vfuncout))))) {
            try_peek__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        try_peek__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo__Tz19::__VnoInFunc_try_put(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_item> t, CData/*0:0*/ &try_put__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo__Tz19::__VnoInFunc_try_put\n"); );
    // Locals
    IData/*31:0*/ __Vtask_try_put__14__Vfuncout;
    __Vtask_try_put__14__Vfuncout = 0;
    // Body
    {
        if ((1U & (~ (0U != ([&]() {
                                VL_NULL_CHECK(this->__PVT__m, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_tlm_fifos.svh", 145)
                             ->__VnoInFunc_try_put(vlSymsp, t, __Vtask_try_put__14__Vfuncout);
                            }(), __Vtask_try_put__14__Vfuncout))))) {
            try_put__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz19::__PVT__put_ap, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_tlm_fifos.svh", 149)->__VnoInFunc_write(vlProcess, vlSymsp, t);
        try_put__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo__Tz19::__VnoInFunc_can_put(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ &can_put__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo__Tz19::__VnoInFunc_can_put\n"); );
    // Locals
    IData/*31:0*/ __Vtask_num__16__Vfuncout;
    __Vtask_num__16__Vfuncout = 0;
    // Body
    can_put__Vfuncrtn = ((0U == this->__PVT__m_size) 
                         || VL_LTS_III(32, ([&]() {
                    VL_NULL_CHECK(this->__PVT__m, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_tlm_fifos.svh", 154)
                                            ->__VnoInFunc_num(vlSymsp, __Vtask_num__16__Vfuncout);
                }(), __Vtask_num__16__Vfuncout), this->__PVT__m_size));
}

void Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo__Tz19::__VnoInFunc_can_get(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ &can_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo__Tz19::__VnoInFunc_can_get\n"); );
    // Locals
    IData/*31:0*/ __Vtask_num__17__Vfuncout;
    __Vtask_num__17__Vfuncout = 0;
    // Body
    can_get__Vfuncrtn = (VL_LTS_III(32, 0U, ([&]() {
                    VL_NULL_CHECK(this->__PVT__m, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_tlm_fifos.svh", 158)
                                             ->__VnoInFunc_num(vlSymsp, __Vtask_num__17__Vfuncout);
                }(), __Vtask_num__17__Vfuncout)) && 
                         (0U == this->__PVT__m_pending_blocked_gets));
}

void Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo__Tz19::__VnoInFunc_can_peek(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ &can_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo__Tz19::__VnoInFunc_can_peek\n"); );
    // Locals
    IData/*31:0*/ __Vtask_num__18__Vfuncout;
    __Vtask_num__18__Vfuncout = 0;
    // Body
    can_peek__Vfuncrtn = VL_LTS_III(32, 0U, ([&]() {
                VL_NULL_CHECK(this->__PVT__m, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_tlm_fifos.svh", 162)
                                             ->__VnoInFunc_num(vlSymsp, __Vtask_num__18__Vfuncout);
            }(), __Vtask_num__18__Vfuncout));
}

void Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo__Tz19::__VnoInFunc_flush(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo__Tz19::__VnoInFunc_flush\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_try_get__19__Vfuncout;
    __Vfunc_try_get__19__Vfuncout = 0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_item> __Vfunc_try_get__19__t;
    IData/*31:0*/ __Vtask_num__20__Vfuncout;
    __Vtask_num__20__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__21__id;
    std::string __Vtask_uvm_report_error__21__message;
    IData/*31:0*/ __Vtask_uvm_report_error__21__verbosity;
    __Vtask_uvm_report_error__21__verbosity = 0;
    std::string __Vtask_uvm_report_error__21__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__21__line;
    __Vtask_uvm_report_error__21__line = 0;
    std::string __Vtask_uvm_report_error__21__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__21__report_enabled_checked;
    __Vtask_uvm_report_error__21__report_enabled_checked = 0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__22__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__23__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_item> t;
    CData/*0:0*/ r;
    r = 0;
    r = 1U;
    while (r) {
        this->__VnoInFunc_try_get(vlSymsp, __Vfunc_try_get__19__t, __Vfunc_try_get__19__Vfuncout);
        t = __Vfunc_try_get__19__t;
        r = __Vfunc_try_get__19__Vfuncout;
    }
    if ((VL_LTS_III(32, 0U, ([&]() {
                        VL_NULL_CHECK(this->__PVT__m, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_tlm_fifos.svh", 178)
                             ->__VnoInFunc_num(vlSymsp, __Vtask_num__20__Vfuncout);
                    }(), __Vtask_num__20__Vfuncout)) 
         && (0U != this->__PVT__m_pending_blocked_gets))) {
        __Vtask_uvm_report_error__21__report_enabled_checked = 0U;
        __Vtask_uvm_report_error__21__context_name = ""s;
        __Vtask_uvm_report_error__21__line = 0U;
        __Vtask_uvm_report_error__21__filename = ""s;
        __Vtask_uvm_report_error__21__verbosity = 0U;
        __Vtask_uvm_report_error__21__message = "there are blocked gets preventing the flush"s;
        __Vtask_uvm_report_error__21__id = "flush failed"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__22__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__22__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__23__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__23__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__21__id, __Vtask_uvm_report_error__21__message, __Vtask_uvm_report_error__21__verbosity, __Vtask_uvm_report_error__21__filename, __Vtask_uvm_report_error__21__line, __Vtask_uvm_report_error__21__context_name, (IData)(__Vtask_uvm_report_error__21__report_enabled_checked));
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo__Tz19::__VnoInFunc_randomize(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo__Tz19::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__26__Vfuncout;
    __Vfunc___Vbasic_randomize__26__Vfuncout = 0;
    // Body
    Varchitecture_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Varchitecture_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__26__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__26__Vfuncout));
}

void Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo__Tz19::__VnoInFunc___Vbasic_randomize(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo__Tz19::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo__Tz19::_ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo__Tz19::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_size = 0;
    __PVT__m_pending_blocked_gets = 0;
}

std::string VL_TO_STRING(const VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo__Tz19>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo__Tz19::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo__Tz19::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo__Tz19::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo__Tz19::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo__Tz19::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m:" + VL_TO_STRING(__PVT__m);
    out += ", m_size:" + VL_TO_STRING(__PVT__m_size);
    out += ", m_pending_blocked_gets:" + VL_TO_STRING(__PVT__m_pending_blocked_gets);
    out += ", "+ Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz19::to_string_middle();
    return (out);
}
