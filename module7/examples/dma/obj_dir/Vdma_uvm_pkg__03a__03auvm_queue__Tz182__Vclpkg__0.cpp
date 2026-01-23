// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"

void Vdma_uvm_pkg__03a__03auvm_queue__Tz182__Vclpkg::__VnoInFunc_get_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__Tz183> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03auvm_queue__Tz182__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__Tz183> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz183__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vdma_uvm_pkg__03a__03auvm_queue__Tz182__Vclpkg::__VnoInFunc_type_name(Vdma__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03auvm_queue__Tz182__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_queue"s;
}

void Vdma_uvm_pkg__03a__03auvm_queue__Tz182__Vclpkg::__VnoInFunc_get_global_queue(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_queue__Tz182> &get_global_queue__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03auvm_queue__Tz182__Vclpkg::__VnoInFunc_get_global_queue\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((VlNull{} == this->__PVT__m_global_queue)) {
        this->__PVT__m_global_queue = VL_NEW(Vdma_uvm_pkg__03a__03auvm_queue__Tz182, vlProcess, vlSymsp, "global_queue"s);
    }
    get_global_queue__Vfuncrtn = this->__PVT__m_global_queue;
}

void Vdma_uvm_pkg__03a__03auvm_queue__Tz182__Vclpkg::__VnoInFunc_get_global(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlClassRef<Vdma_uvm_pkg__03a__03auvm_hdl_path_concat> &get_global__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03auvm_queue__Tz182__Vclpkg::__VnoInFunc_get_global\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_queue__Tz182> __Vfunc_get_global_queue__2__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_hdl_path_concat> __Vtask_get__3__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_queue__Tz182> gqueue;
    this->__VnoInFunc_get_global_queue(vlSymsp, __Vfunc_get_global_queue__2__Vfuncout);
    gqueue = __Vfunc_get_global_queue__2__Vfuncout;
    VL_NULL_CHECK(gqueue, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_queue.svh", 82)->__VnoInFunc_get(vlProcess, vlSymsp, index, __Vtask_get__3__Vfuncout);
    get_global__Vfuncrtn = __Vtask_get__3__Vfuncout;
}

void Vdma_uvm_pkg__03a__03auvm_queue__Tz182::__VnoInFunc_get_object_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_queue__Tz182::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__Tz183> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz183__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vdma_uvm_pkg__03a__03auvm_queue__Tz182::__VnoInFunc_create(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_queue__Tz182::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_queue__Tz182> tmp;
    tmp = ((""s == name) ? VL_NEW(Vdma_uvm_pkg__03a__03auvm_queue__Tz182, vlProcess, vlSymsp, ""s)
            : VL_NEW(Vdma_uvm_pkg__03a__03auvm_queue__Tz182, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vdma_uvm_pkg__03a__03auvm_queue__Tz182::__VnoInFunc_get_type_name(Vdma__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_queue__Tz182::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_queue"s;
}

Vdma_uvm_pkg__03a__03auvm_queue__Tz182::Vdma_uvm_pkg__03a__03auvm_queue__Tz182(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name)
    : Vdma_uvm_pkg__03a__03auvm_object(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_queue__Tz182::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vdma_uvm_pkg__03a__03auvm_queue__Tz182::__VnoInFunc_get(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlClassRef<Vdma_uvm_pkg__03a__03auvm_hdl_path_concat> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_queue__Tz182::__VnoInFunc_get\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_size__4__Vfuncout;
    __Vfunc_size__4__Vfuncout = 0;
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
    IData/*31:0*/ __Vfunc_size__6__Vfuncout;
    __Vfunc_size__6__Vfuncout = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__7__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__8__Vfuncout;
    // Body
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_hdl_path_concat> default_value;
    {
        if ((VL_GTES_III(32, index, ([&]() {
                            this->__VnoInFunc_size(vlSymsp, __Vfunc_size__4__Vfuncout);
                        }(), __Vfunc_size__4__Vfuncout)) 
             | VL_GTS_III(32, 0U, index))) {
            __Vtask_uvm_report_warning__5__report_enabled_checked = 0U;
            __Vtask_uvm_report_warning__5__context_name = ""s;
            __Vtask_uvm_report_warning__5__line = 0U;
            __Vtask_uvm_report_warning__5__filename = ""s;
            __Vtask_uvm_report_warning__5__verbosity = 0x000000c8U;
            __Vtask_uvm_report_warning__5__message 
                = VL_SFORMATF_N_NX("get: given index out of range for queue of size %0d. Ignoring get request",0,
                                   32,([&]() {
                            this->__VnoInFunc_size(vlSymsp, __Vfunc_size__6__Vfuncout);
                        }(), __Vfunc_size__6__Vfuncout)) ;
            __Vtask_uvm_report_warning__5__id = "QUEUEGET"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__7__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__7__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__8__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__8__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__5__id, __Vtask_uvm_report_warning__5__message, __Vtask_uvm_report_warning__5__verbosity, __Vtask_uvm_report_warning__5__filename, __Vtask_uvm_report_warning__5__line, __Vtask_uvm_report_warning__5__context_name, (IData)(__Vtask_uvm_report_warning__5__report_enabled_checked));
            get__Vfuncrtn = default_value;
            goto __Vlabel0;
        }
        get__Vfuncrtn = this->__PVT__queue.at(index);
        __Vlabel0: ;
    }
}

void Vdma_uvm_pkg__03a__03auvm_queue__Tz182::__VnoInFunc_size(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_queue__Tz182::__VnoInFunc_size\n"); );
    // Body
    size__Vfuncrtn = this->__PVT__queue.size();
}

void Vdma_uvm_pkg__03a__03auvm_queue__Tz182::__VnoInFunc_insert(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlClassRef<Vdma_uvm_pkg__03a__03auvm_hdl_path_concat> item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_queue__Tz182::__VnoInFunc_insert\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_size__10__Vfuncout;
    __Vfunc_size__10__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__11__id;
    std::string __Vtask_uvm_report_warning__11__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__11__verbosity;
    __Vtask_uvm_report_warning__11__verbosity = 0;
    std::string __Vtask_uvm_report_warning__11__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__11__line;
    __Vtask_uvm_report_warning__11__line = 0;
    std::string __Vtask_uvm_report_warning__11__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__11__report_enabled_checked;
    __Vtask_uvm_report_warning__11__report_enabled_checked = 0;
    IData/*31:0*/ __Vfunc_size__12__Vfuncout;
    __Vfunc_size__12__Vfuncout = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__13__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__14__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    {
        if ((VL_GTES_III(32, index, ([&]() {
                            this->__VnoInFunc_size(vlSymsp, __Vfunc_size__10__Vfuncout);
                        }(), __Vfunc_size__10__Vfuncout)) 
             | VL_GTS_III(32, 0U, index))) {
            __Vtask_uvm_report_warning__11__report_enabled_checked = 0U;
            __Vtask_uvm_report_warning__11__context_name = ""s;
            __Vtask_uvm_report_warning__11__line = 0U;
            __Vtask_uvm_report_warning__11__filename = ""s;
            __Vtask_uvm_report_warning__11__verbosity = 0x000000c8U;
            __Vtask_uvm_report_warning__11__message 
                = VL_SFORMATF_N_NX("insert: given index out of range for queue of size %0d. Ignoring insert request",0,
                                   32,([&]() {
                            this->__VnoInFunc_size(vlSymsp, __Vfunc_size__12__Vfuncout);
                        }(), __Vfunc_size__12__Vfuncout)) ;
            __Vtask_uvm_report_warning__11__id = "QUEUEINS"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__13__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__13__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__14__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__14__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__11__id, __Vtask_uvm_report_warning__11__message, __Vtask_uvm_report_warning__11__verbosity, __Vtask_uvm_report_warning__11__filename, __Vtask_uvm_report_warning__11__line, __Vtask_uvm_report_warning__11__context_name, (IData)(__Vtask_uvm_report_warning__11__report_enabled_checked));
            goto __Vlabel0;
        }
        this->__PVT__queue.insert(index, item);
        __Vlabel0: ;
    }
}

void Vdma_uvm_pkg__03a__03auvm_queue__Tz182::__VnoInFunc_delete(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ index) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_queue__Tz182::__VnoInFunc_delete\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_size__16__Vfuncout;
    __Vfunc_size__16__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__17__id;
    std::string __Vtask_uvm_report_warning__17__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__17__verbosity;
    __Vtask_uvm_report_warning__17__verbosity = 0;
    std::string __Vtask_uvm_report_warning__17__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__17__line;
    __Vtask_uvm_report_warning__17__line = 0;
    std::string __Vtask_uvm_report_warning__17__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__17__report_enabled_checked;
    __Vtask_uvm_report_warning__17__report_enabled_checked = 0;
    IData/*31:0*/ __Vfunc_size__18__Vfuncout;
    __Vfunc_size__18__Vfuncout = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__19__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__20__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    {
        if ((VL_GTES_III(32, index, ([&]() {
                            this->__VnoInFunc_size(vlSymsp, __Vfunc_size__16__Vfuncout);
                        }(), __Vfunc_size__16__Vfuncout)) 
             | VL_GTS_III(32, 0xffffffffU, index))) {
            __Vtask_uvm_report_warning__17__report_enabled_checked = 0U;
            __Vtask_uvm_report_warning__17__context_name = ""s;
            __Vtask_uvm_report_warning__17__line = 0U;
            __Vtask_uvm_report_warning__17__filename = ""s;
            __Vtask_uvm_report_warning__17__verbosity = 0x000000c8U;
            __Vtask_uvm_report_warning__17__message 
                = VL_SFORMATF_N_NX("delete: given index out of range for queue of size %0d. Ignoring delete request",0,
                                   32,([&]() {
                            this->__VnoInFunc_size(vlSymsp, __Vfunc_size__18__Vfuncout);
                        }(), __Vfunc_size__18__Vfuncout)) ;
            __Vtask_uvm_report_warning__17__id = "QUEUEDEL"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__19__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__19__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__20__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__20__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__17__id, __Vtask_uvm_report_warning__17__message, __Vtask_uvm_report_warning__17__verbosity, __Vtask_uvm_report_warning__17__filename, __Vtask_uvm_report_warning__17__line, __Vtask_uvm_report_warning__17__context_name, (IData)(__Vtask_uvm_report_warning__17__report_enabled_checked));
            goto __Vlabel0;
        }
        if ((0xffffffffU == index)) {
            this->__PVT__queue.clear();
        } else {
            this->__PVT__queue.erase(index);
        }
        __Vlabel0: ;
    }
}

void Vdma_uvm_pkg__03a__03auvm_queue__Tz182::__VnoInFunc_pop_front(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_hdl_path_concat> &pop_front__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_queue__Tz182::__VnoInFunc_pop_front\n"); );
    // Body
    pop_front__Vfuncrtn = this->__PVT__queue.pop_front();
}

void Vdma_uvm_pkg__03a__03auvm_queue__Tz182::__VnoInFunc_pop_back(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_hdl_path_concat> &pop_back__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_queue__Tz182::__VnoInFunc_pop_back\n"); );
    // Body
    pop_back__Vfuncrtn = this->__PVT__queue.pop_back();
}

void Vdma_uvm_pkg__03a__03auvm_queue__Tz182::__VnoInFunc_push_front(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_hdl_path_concat> item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_queue__Tz182::__VnoInFunc_push_front\n"); );
    // Body
    this->__PVT__queue.push_front(item);
}

void Vdma_uvm_pkg__03a__03auvm_queue__Tz182::__VnoInFunc_push_back(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_hdl_path_concat> item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_queue__Tz182::__VnoInFunc_push_back\n"); );
    // Body
    this->__PVT__queue.push_back(item);
}

VlCoroutine Vdma_uvm_pkg__03a__03auvm_queue__Tz182::__VnoInFunc_wait_until_not_empty(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_queue__Tz182::__VnoInFunc_wait_until_not_empty\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h754bacfe__0;
    __Vtrigprevexpr_h754bacfe__0 = 0;
    // Body
    VL_KEEP_THIS;
    if (VL_GTES_III(32, 0U, this->__PVT__queue.size())) {
        CData/*0:0*/ __VdynTrigger_h8f344e15__0;
        __VdynTrigger_h8f344e15__0 = 0;
        __VdynTrigger_h8f344e15__0 = 0U;
        while ((1U & (~ (IData)(__VdynTrigger_h8f344e15__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@([true] (32'sh0 < uvm_pkg::uvm_queue__Tz182.queue.size()))", 
                                                         "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_queue.svh", 
                                                         196);
            __Vtrigprevexpr_h754bacfe__0 = VL_LTS_III(32, 0U, this->__PVT__queue.size());
            __VdynTrigger_h8f344e15__0 = __Vtrigprevexpr_h754bacfe__0;
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h8f344e15__0);
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@([true] (32'sh0 < uvm_pkg::uvm_queue__Tz182.queue.size()))", 
                                                     "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_queue.svh", 
                                                     196);
    }
    co_return;}

void Vdma_uvm_pkg__03a__03auvm_queue__Tz182::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_queue__Tz182::__VnoInFunc_do_copy\n"); );
    // Body
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_queue__Tz182> p;
    {
        Vdma_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_copy(vlProcess, vlSymsp, rhs);
        if (((VlNull{} == rhs) || (! VL_CAST_DYNAMIC(rhs, p)))) {
            goto __Vlabel0;
        }
        this->__PVT__queue = VL_NULL_CHECK(p, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_queue.svh", 204)
            ->__PVT__queue;
        __Vlabel0: ;
    }
}

void Vdma_uvm_pkg__03a__03auvm_queue__Tz182::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_queue__Tz182::__VnoInFunc_convert2string\n"); );
    // Locals
    std::string __Vtemp_1;
    // Body
    __Vtemp_1 = VL_TO_STRING(this->__PVT__queue);
    convert2string__Vfuncrtn = VL_SFORMATF_N_NX("%@",0,
                                                -1,
                                                &(__Vtemp_1)) ;
}

void Vdma_uvm_pkg__03a__03auvm_queue__Tz182::__VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_queue__Tz182::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__24__Vfuncout;
    __Vfunc___VBasicRand__24__Vfuncout = 0;
    // Body
    Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__24__Vfuncout);
            }(), __Vfunc___VBasicRand__24__Vfuncout));
}

void Vdma_uvm_pkg__03a__03auvm_queue__Tz182::__VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_queue__Tz182::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_queue__Tz182::__VnoInFunc___VBasicRand(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_queue__Tz182::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vdma_uvm_pkg__03a__03auvm_queue__Tz182::_ctor_var_reset(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_queue__Tz182::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vdma_uvm_pkg__03a__03auvm_queue__Tz182::~Vdma_uvm_pkg__03a__03auvm_queue__Tz182() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_queue__Tz182::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_queue__Tz182>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_queue__Tz182::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vdma_uvm_pkg__03a__03auvm_queue__Tz182::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_queue__Tz182::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vdma_uvm_pkg__03a__03auvm_queue__Tz182::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_queue__Tz182::to_string_middle\n"); );
    // Body
    std::string out;
    out += "queue:" + VL_TO_STRING(__PVT__queue);
    out += ", "+ Vdma_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
