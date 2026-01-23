// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_and_gate_uvm.h for the primary calling header

#include "Vtest_and_gate_uvm__pch.h"

Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_region::Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_region(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ start_offset, QData/*63:0*/ end_offset, IData/*31:0*/ len, IData/*31:0*/ n_bytes, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_mam> parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_region::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__Xstart_offsetX = start_offset;
    this->__PVT__Xend_offsetX = end_offset;
    this->__PVT__len = len;
    this->__PVT__n_bytes = n_bytes;
    this->__PVT__parent = parent;
    this->__PVT__XvregX = VlNull{};
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_get_start_offset(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ &get_start_offset__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_get_start_offset\n"); );
    // Body
    get_start_offset__Vfuncrtn = this->__PVT__Xstart_offsetX;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_get_end_offset(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ &get_end_offset__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_get_end_offset\n"); );
    // Body
    get_end_offset__Vfuncrtn = this->__PVT__Xend_offsetX;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_get_len(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_len__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_get_len\n"); );
    // Body
    get_len__Vfuncrtn = this->__PVT__len;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_get_n_bytes(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bytes__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_get_n_bytes\n"); );
    // Body
    get_n_bytes__Vfuncrtn = this->__PVT__n_bytes;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_convert2string(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_convert2string\n"); );
    // Body
    VL_SFORMAT_NX(64,convert2string__Vfuncrtn,"['h%x:'h%x]",0,
                  64,this->__PVT__Xstart_offsetX,64,
                  this->__PVT__Xend_offsetX);
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_release_region(Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_release_region\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 572)->__VnoInFunc_release_region(vlSymsp, 
                                                                                VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_region>{this});
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_get_memory(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem> &get_memory__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_get_memory\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem> __Vtask_get_memory__1__Vfuncout;
    // Body
    VL_NULL_CHECK(this->__PVT__parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 577)->__VnoInFunc_get_memory(vlSymsp, __Vtask_get_memory__1__Vfuncout);
    get_memory__Vfuncrtn = __Vtask_get_memory__1__Vfuncout;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_get_virtual_registers(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_vreg> &get_virtual_registers__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_get_virtual_registers\n"); );
    // Body
    get_virtual_registers__Vfuncrtn = this->__PVT__XvregX;
}

VlCoroutine Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_write(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_write\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem> __Vtask_get_memory__2__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__3__Vfuncout;
    __Vfunc_uvm_report_enabled__3__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__3__verbosity;
    __Vfunc_uvm_report_enabled__3__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__3__severity;
    __Vfunc_uvm_report_enabled__3__severity = 0;
    std::string __Vfunc_uvm_report_enabled__3__id;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__4__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__5__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__6__Vfuncout;
    __Vtask_uvm_report_enabled__6__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__7__id;
    std::string __Vtask_uvm_report_error__7__message;
    IData/*31:0*/ __Vtask_uvm_report_error__7__verbosity;
    __Vtask_uvm_report_error__7__verbosity = 0;
    std::string __Vtask_uvm_report_error__7__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__7__line;
    __Vtask_uvm_report_error__7__line = 0;
    std::string __Vtask_uvm_report_error__7__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__7__report_enabled_checked;
    __Vtask_uvm_report_error__7__report_enabled_checked = 0;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__8__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__9__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__11__Vfuncout;
    __Vfunc_uvm_report_enabled__11__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__11__verbosity;
    __Vfunc_uvm_report_enabled__11__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__11__severity;
    __Vfunc_uvm_report_enabled__11__severity = 0;
    std::string __Vfunc_uvm_report_enabled__11__id;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__12__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__13__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__14__Vfuncout;
    __Vtask_uvm_report_enabled__14__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__15__id;
    std::string __Vtask_uvm_report_error__15__message;
    IData/*31:0*/ __Vtask_uvm_report_error__15__verbosity;
    __Vtask_uvm_report_error__15__verbosity = 0;
    std::string __Vtask_uvm_report_error__15__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__15__line;
    __Vtask_uvm_report_error__15__line = 0;
    std::string __Vtask_uvm_report_error__15__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__15__report_enabled_checked;
    __Vtask_uvm_report_error__15__report_enabled_checked = 0;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__16__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__17__Vfuncout;
    IData/*31:0*/ __Vtask_write__19__status;
    __Vtask_write__19__status = 0;
    QData/*63:0*/ __Vfunc_get_start_offset__20__Vfuncout;
    __Vfunc_get_start_offset__20__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem> mem;
    {
        VL_NULL_CHECK(this->__PVT__parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 768)->__VnoInFunc_get_memory(vlSymsp, __Vtask_get_memory__2__Vfuncout);
        mem = __Vtask_get_memory__2__Vfuncout;
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        if ((VlNull{} == mem)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__3__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__3__severity = 2U;
                            __Vfunc_uvm_report_enabled__3__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__4__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__4__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__5__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__5__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__3__verbosity, (IData)(__Vfunc_uvm_report_enabled__3__severity), __Vfunc_uvm_report_enabled__3__id, __Vtask_uvm_report_enabled__6__Vfuncout);
                            __Vfunc_uvm_report_enabled__3__Vfuncout 
                                = __Vtask_uvm_report_enabled__6__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__3__Vfuncout))) {
                __Vtask_uvm_report_error__7__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__7__context_name = ""s;
                __Vtask_uvm_report_error__7__line = 0x00000305U;
                __Vtask_uvm_report_error__7__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh"s;
                __Vtask_uvm_report_error__7__verbosity = 0U;
                __Vtask_uvm_report_error__7__message = "Cannot use uvm_mem_region::write() on a region that was allocated by a Memory Allocation Manager that was not associated with a uvm_mem instance"s;
                __Vtask_uvm_report_error__7__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__8__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__8__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__9__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__9__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__7__id, __Vtask_uvm_report_error__7__message, __Vtask_uvm_report_error__7__verbosity, __Vtask_uvm_report_error__7__filename, __Vtask_uvm_report_error__7__line, __Vtask_uvm_report_error__7__context_name, (IData)(__Vtask_uvm_report_error__7__report_enabled_checked));
            }
            status = 1U;
            goto __Vlabel0;
        }
        if ((offset > (QData)((IData)(this->__PVT__len)))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__11__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__11__severity = 2U;
                            __Vfunc_uvm_report_enabled__11__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__12__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__12__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__13__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__13__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__11__verbosity, (IData)(__Vfunc_uvm_report_enabled__11__severity), __Vfunc_uvm_report_enabled__11__id, __Vtask_uvm_report_enabled__14__Vfuncout);
                            __Vfunc_uvm_report_enabled__11__Vfuncout 
                                = __Vtask_uvm_report_enabled__14__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__11__Vfuncout))) {
                __Vtask_uvm_report_error__15__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__15__context_name = ""s;
                __Vtask_uvm_report_error__15__line = 0x0000030dU;
                __Vtask_uvm_report_error__15__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh"s;
                __Vtask_uvm_report_error__15__verbosity = 0U;
                __Vtask_uvm_report_error__15__message 
                    = VL_SFORMATF_N_NX("Attempting to write to an offset outside of the allocated region (%0# > %0#)",0,
                                       64,offset,32,
                                       this->__PVT__len) ;
                __Vtask_uvm_report_error__15__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__16__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__16__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__17__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__17__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__15__id, __Vtask_uvm_report_error__15__message, __Vtask_uvm_report_error__15__verbosity, __Vtask_uvm_report_error__15__filename, __Vtask_uvm_report_error__15__line, __Vtask_uvm_report_error__15__context_name, (IData)(__Vtask_uvm_report_error__15__report_enabled_checked));
            }
            status = 1U;
            goto __Vlabel0;
        }
        co_await VL_NULL_CHECK(mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 786)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__19__status, 
                                                                                (offset 
                                                                                + 
                                                                                ([&]() {
                        this->__VnoInFunc_get_start_offset(vlSymsp, __Vfunc_get_start_offset__20__Vfuncout);
                    }(), __Vfunc_get_start_offset__20__Vfuncout)), value, path, map, parent, prior, extension, ""s, 0U);
        status = __Vtask_write__19__status;
        __Vlabel0: ;
    }
}

VlCoroutine Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_read(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_read\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem> __Vtask_get_memory__21__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__22__Vfuncout;
    __Vfunc_uvm_report_enabled__22__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__22__verbosity;
    __Vfunc_uvm_report_enabled__22__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__22__severity;
    __Vfunc_uvm_report_enabled__22__severity = 0;
    std::string __Vfunc_uvm_report_enabled__22__id;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__23__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__24__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__25__Vfuncout;
    __Vtask_uvm_report_enabled__25__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__26__id;
    std::string __Vtask_uvm_report_error__26__message;
    IData/*31:0*/ __Vtask_uvm_report_error__26__verbosity;
    __Vtask_uvm_report_error__26__verbosity = 0;
    std::string __Vtask_uvm_report_error__26__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__26__line;
    __Vtask_uvm_report_error__26__line = 0;
    std::string __Vtask_uvm_report_error__26__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__26__report_enabled_checked;
    __Vtask_uvm_report_error__26__report_enabled_checked = 0;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__27__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__28__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__30__Vfuncout;
    __Vfunc_uvm_report_enabled__30__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__30__verbosity;
    __Vfunc_uvm_report_enabled__30__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__30__severity;
    __Vfunc_uvm_report_enabled__30__severity = 0;
    std::string __Vfunc_uvm_report_enabled__30__id;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__31__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__32__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__33__Vfuncout;
    __Vtask_uvm_report_enabled__33__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__34__id;
    std::string __Vtask_uvm_report_error__34__message;
    IData/*31:0*/ __Vtask_uvm_report_error__34__verbosity;
    __Vtask_uvm_report_error__34__verbosity = 0;
    std::string __Vtask_uvm_report_error__34__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__34__line;
    __Vtask_uvm_report_error__34__line = 0;
    std::string __Vtask_uvm_report_error__34__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__34__report_enabled_checked;
    __Vtask_uvm_report_error__34__report_enabled_checked = 0;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__35__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__36__Vfuncout;
    IData/*31:0*/ __Vtask_read__38__status;
    __Vtask_read__38__status = 0;
    QData/*63:0*/ __Vtask_read__38__value;
    __Vtask_read__38__value = 0;
    QData/*63:0*/ __Vfunc_get_start_offset__39__Vfuncout;
    __Vfunc_get_start_offset__39__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem> mem;
    {
        VL_NULL_CHECK(this->__PVT__parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 801)->__VnoInFunc_get_memory(vlSymsp, __Vtask_get_memory__21__Vfuncout);
        mem = __Vtask_get_memory__21__Vfuncout;
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        if ((VlNull{} == mem)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__22__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__22__severity = 2U;
                            __Vfunc_uvm_report_enabled__22__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__23__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__23__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__24__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__24__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__22__verbosity, (IData)(__Vfunc_uvm_report_enabled__22__severity), __Vfunc_uvm_report_enabled__22__id, __Vtask_uvm_report_enabled__25__Vfuncout);
                            __Vfunc_uvm_report_enabled__22__Vfuncout 
                                = __Vtask_uvm_report_enabled__25__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__22__Vfuncout))) {
                __Vtask_uvm_report_error__26__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__26__context_name = ""s;
                __Vtask_uvm_report_error__26__line = 0x00000326U;
                __Vtask_uvm_report_error__26__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh"s;
                __Vtask_uvm_report_error__26__verbosity = 0U;
                __Vtask_uvm_report_error__26__message = "Cannot use uvm_mem_region::read() on a region that was allocated by a Memory Allocation Manager that was not associated with a uvm_mem instance"s;
                __Vtask_uvm_report_error__26__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__27__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__27__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__28__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__28__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__26__id, __Vtask_uvm_report_error__26__message, __Vtask_uvm_report_error__26__verbosity, __Vtask_uvm_report_error__26__filename, __Vtask_uvm_report_error__26__line, __Vtask_uvm_report_error__26__context_name, (IData)(__Vtask_uvm_report_error__26__report_enabled_checked));
            }
            status = 1U;
            goto __Vlabel0;
        }
        if ((offset > (QData)((IData)(this->__PVT__len)))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__30__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__30__severity = 2U;
                            __Vfunc_uvm_report_enabled__30__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__31__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__31__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__32__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__32__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__30__verbosity, (IData)(__Vfunc_uvm_report_enabled__30__severity), __Vfunc_uvm_report_enabled__30__id, __Vtask_uvm_report_enabled__33__Vfuncout);
                            __Vfunc_uvm_report_enabled__30__Vfuncout 
                                = __Vtask_uvm_report_enabled__33__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__30__Vfuncout))) {
                __Vtask_uvm_report_error__34__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__34__context_name = ""s;
                __Vtask_uvm_report_error__34__line = 0x0000032eU;
                __Vtask_uvm_report_error__34__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh"s;
                __Vtask_uvm_report_error__34__verbosity = 0U;
                __Vtask_uvm_report_error__34__message 
                    = VL_SFORMATF_N_NX("Attempting to read from an offset outside of the allocated region (%0# > %0#)",0,
                                       64,offset,32,
                                       this->__PVT__len) ;
                __Vtask_uvm_report_error__34__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__35__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__35__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__36__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__36__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__34__id, __Vtask_uvm_report_error__34__message, __Vtask_uvm_report_error__34__verbosity, __Vtask_uvm_report_error__34__filename, __Vtask_uvm_report_error__34__line, __Vtask_uvm_report_error__34__context_name, (IData)(__Vtask_uvm_report_error__34__report_enabled_checked));
            }
            status = 1U;
            goto __Vlabel0;
        }
        co_await VL_NULL_CHECK(mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 819)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__38__status, 
                                                                                (offset 
                                                                                + 
                                                                                ([&]() {
                        this->__VnoInFunc_get_start_offset(vlSymsp, __Vfunc_get_start_offset__39__Vfuncout);
                    }(), __Vfunc_get_start_offset__39__Vfuncout)), __Vtask_read__38__value, path, map, parent, prior, extension, ""s, 0U);
        status = __Vtask_read__38__status;
        value = __Vtask_read__38__value;
        __Vlabel0: ;
    }
}

VlCoroutine Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_burst_write(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, VlQueue<QData/*63:0*/> value, IData/*31:0*/ path, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_burst_write\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem> __Vtask_get_memory__40__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__41__Vfuncout;
    __Vfunc_uvm_report_enabled__41__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__41__verbosity;
    __Vfunc_uvm_report_enabled__41__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__41__severity;
    __Vfunc_uvm_report_enabled__41__severity = 0;
    std::string __Vfunc_uvm_report_enabled__41__id;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__42__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__43__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__44__Vfuncout;
    __Vtask_uvm_report_enabled__44__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__45__id;
    std::string __Vtask_uvm_report_error__45__message;
    IData/*31:0*/ __Vtask_uvm_report_error__45__verbosity;
    __Vtask_uvm_report_error__45__verbosity = 0;
    std::string __Vtask_uvm_report_error__45__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__45__line;
    __Vtask_uvm_report_error__45__line = 0;
    std::string __Vtask_uvm_report_error__45__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__45__report_enabled_checked;
    __Vtask_uvm_report_error__45__report_enabled_checked = 0;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__46__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__47__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__49__Vfuncout;
    __Vfunc_uvm_report_enabled__49__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__49__verbosity;
    __Vfunc_uvm_report_enabled__49__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__49__severity;
    __Vfunc_uvm_report_enabled__49__severity = 0;
    std::string __Vfunc_uvm_report_enabled__49__id;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__50__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__51__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__52__Vfuncout;
    __Vtask_uvm_report_enabled__52__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__53__id;
    std::string __Vtask_uvm_report_error__53__message;
    IData/*31:0*/ __Vtask_uvm_report_error__53__verbosity;
    __Vtask_uvm_report_error__53__verbosity = 0;
    std::string __Vtask_uvm_report_error__53__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__53__line;
    __Vtask_uvm_report_error__53__line = 0;
    std::string __Vtask_uvm_report_error__53__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__53__report_enabled_checked;
    __Vtask_uvm_report_error__53__report_enabled_checked = 0;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__54__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__55__Vfuncout;
    IData/*31:0*/ __Vtask_burst_write__57__status;
    __Vtask_burst_write__57__status = 0;
    QData/*63:0*/ __Vfunc_get_start_offset__58__Vfuncout;
    __Vfunc_get_start_offset__58__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem> mem;
    {
        VL_NULL_CHECK(this->__PVT__parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 834)->__VnoInFunc_get_memory(vlSymsp, __Vtask_get_memory__40__Vfuncout);
        mem = __Vtask_get_memory__40__Vfuncout;
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        if ((VlNull{} == mem)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__41__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__41__severity = 2U;
                            __Vfunc_uvm_report_enabled__41__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__42__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__42__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__43__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__43__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__41__verbosity, (IData)(__Vfunc_uvm_report_enabled__41__severity), __Vfunc_uvm_report_enabled__41__id, __Vtask_uvm_report_enabled__44__Vfuncout);
                            __Vfunc_uvm_report_enabled__41__Vfuncout 
                                = __Vtask_uvm_report_enabled__44__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__41__Vfuncout))) {
                __Vtask_uvm_report_error__45__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__45__context_name = ""s;
                __Vtask_uvm_report_error__45__line = 0x00000347U;
                __Vtask_uvm_report_error__45__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh"s;
                __Vtask_uvm_report_error__45__verbosity = 0U;
                __Vtask_uvm_report_error__45__message = "Cannot use uvm_mem_region::burst_write() on a region that was allocated by a Memory Allocation Manager that was not associated with a uvm_mem instance"s;
                __Vtask_uvm_report_error__45__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__46__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__46__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__47__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__47__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__45__id, __Vtask_uvm_report_error__45__message, __Vtask_uvm_report_error__45__verbosity, __Vtask_uvm_report_error__45__filename, __Vtask_uvm_report_error__45__line, __Vtask_uvm_report_error__45__context_name, (IData)(__Vtask_uvm_report_error__45__report_enabled_checked));
            }
            status = 1U;
            goto __Vlabel0;
        }
        if (((offset + (QData)((IData)(value.size()))) 
             > (QData)((IData)(this->__PVT__len)))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__49__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__49__severity = 2U;
                            __Vfunc_uvm_report_enabled__49__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__50__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__50__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__51__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__51__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__49__verbosity, (IData)(__Vfunc_uvm_report_enabled__49__severity), __Vfunc_uvm_report_enabled__49__id, __Vtask_uvm_report_enabled__52__Vfuncout);
                            __Vfunc_uvm_report_enabled__49__Vfuncout 
                                = __Vtask_uvm_report_enabled__52__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__49__Vfuncout))) {
                __Vtask_uvm_report_error__53__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__53__context_name = ""s;
                __Vtask_uvm_report_error__53__line = 0x0000034fU;
                __Vtask_uvm_report_error__53__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh"s;
                __Vtask_uvm_report_error__53__verbosity = 0U;
                __Vtask_uvm_report_error__53__message 
                    = VL_SFORMATF_N_NX("Attempting to burst-write to an offset outside of the allocated region (burst to [%0#:%0#] > mem_size %0#)",0,
                                       64,offset,64,
                                       (offset + (QData)((IData)(value.size()))),
                                       32,this->__PVT__len) ;
                __Vtask_uvm_report_error__53__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__54__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__54__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__55__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__55__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__53__id, __Vtask_uvm_report_error__53__message, __Vtask_uvm_report_error__53__verbosity, __Vtask_uvm_report_error__53__filename, __Vtask_uvm_report_error__53__line, __Vtask_uvm_report_error__53__context_name, (IData)(__Vtask_uvm_report_error__53__report_enabled_checked));
            }
            status = 1U;
            goto __Vlabel0;
        }
        co_await VL_NULL_CHECK(mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 852)->__VnoInFunc_burst_write(vlSymsp, __Vtask_burst_write__57__status, 
                                                                                (offset 
                                                                                + 
                                                                                ([&]() {
                        this->__VnoInFunc_get_start_offset(vlSymsp, __Vfunc_get_start_offset__58__Vfuncout);
                    }(), __Vfunc_get_start_offset__58__Vfuncout)), value, path, map, parent, prior, extension, ""s, 0U);
        status = __Vtask_burst_write__57__status;
        __Vlabel0: ;
    }
}

VlCoroutine Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_burst_read(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, VlQueue<QData/*63:0*/> &value, IData/*31:0*/ path, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_burst_read\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem> __Vtask_get_memory__59__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__60__Vfuncout;
    __Vfunc_uvm_report_enabled__60__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__60__verbosity;
    __Vfunc_uvm_report_enabled__60__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__60__severity;
    __Vfunc_uvm_report_enabled__60__severity = 0;
    std::string __Vfunc_uvm_report_enabled__60__id;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__61__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__62__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__63__Vfuncout;
    __Vtask_uvm_report_enabled__63__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__64__id;
    std::string __Vtask_uvm_report_error__64__message;
    IData/*31:0*/ __Vtask_uvm_report_error__64__verbosity;
    __Vtask_uvm_report_error__64__verbosity = 0;
    std::string __Vtask_uvm_report_error__64__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__64__line;
    __Vtask_uvm_report_error__64__line = 0;
    std::string __Vtask_uvm_report_error__64__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__64__report_enabled_checked;
    __Vtask_uvm_report_error__64__report_enabled_checked = 0;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__65__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__66__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__68__Vfuncout;
    __Vfunc_uvm_report_enabled__68__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__68__verbosity;
    __Vfunc_uvm_report_enabled__68__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__68__severity;
    __Vfunc_uvm_report_enabled__68__severity = 0;
    std::string __Vfunc_uvm_report_enabled__68__id;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__69__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__70__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__71__Vfuncout;
    __Vtask_uvm_report_enabled__71__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__72__id;
    std::string __Vtask_uvm_report_error__72__message;
    IData/*31:0*/ __Vtask_uvm_report_error__72__verbosity;
    __Vtask_uvm_report_error__72__verbosity = 0;
    std::string __Vtask_uvm_report_error__72__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__72__line;
    __Vtask_uvm_report_error__72__line = 0;
    std::string __Vtask_uvm_report_error__72__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__72__report_enabled_checked;
    __Vtask_uvm_report_error__72__report_enabled_checked = 0;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__73__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__74__Vfuncout;
    IData/*31:0*/ __Vtask_burst_read__76__status;
    __Vtask_burst_read__76__status = 0;
    QData/*63:0*/ __Vfunc_get_start_offset__77__Vfuncout;
    __Vfunc_get_start_offset__77__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem> mem;
    {
        VL_NULL_CHECK(this->__PVT__parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 868)->__VnoInFunc_get_memory(vlSymsp, __Vtask_get_memory__59__Vfuncout);
        mem = __Vtask_get_memory__59__Vfuncout;
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        if ((VlNull{} == mem)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__60__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__60__severity = 2U;
                            __Vfunc_uvm_report_enabled__60__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__61__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__61__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__62__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__62__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__60__verbosity, (IData)(__Vfunc_uvm_report_enabled__60__severity), __Vfunc_uvm_report_enabled__60__id, __Vtask_uvm_report_enabled__63__Vfuncout);
                            __Vfunc_uvm_report_enabled__60__Vfuncout 
                                = __Vtask_uvm_report_enabled__63__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__60__Vfuncout))) {
                __Vtask_uvm_report_error__64__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__64__context_name = ""s;
                __Vtask_uvm_report_error__64__line = 0x00000369U;
                __Vtask_uvm_report_error__64__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh"s;
                __Vtask_uvm_report_error__64__verbosity = 0U;
                __Vtask_uvm_report_error__64__message = "Cannot use uvm_mem_region::burst_read() on a region that was allocated by a Memory Allocation Manager that was not associated with a uvm_mem instance"s;
                __Vtask_uvm_report_error__64__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__65__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__65__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__66__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__66__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__64__id, __Vtask_uvm_report_error__64__message, __Vtask_uvm_report_error__64__verbosity, __Vtask_uvm_report_error__64__filename, __Vtask_uvm_report_error__64__line, __Vtask_uvm_report_error__64__context_name, (IData)(__Vtask_uvm_report_error__64__report_enabled_checked));
            }
            status = 1U;
            goto __Vlabel0;
        }
        if (((offset + (QData)((IData)(value.size()))) 
             > (QData)((IData)(this->__PVT__len)))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__68__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__68__severity = 2U;
                            __Vfunc_uvm_report_enabled__68__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__69__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__69__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__70__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__70__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__68__verbosity, (IData)(__Vfunc_uvm_report_enabled__68__severity), __Vfunc_uvm_report_enabled__68__id, __Vtask_uvm_report_enabled__71__Vfuncout);
                            __Vfunc_uvm_report_enabled__68__Vfuncout 
                                = __Vtask_uvm_report_enabled__71__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__68__Vfuncout))) {
                __Vtask_uvm_report_error__72__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__72__context_name = ""s;
                __Vtask_uvm_report_error__72__line = 0x00000371U;
                __Vtask_uvm_report_error__72__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh"s;
                __Vtask_uvm_report_error__72__verbosity = 0U;
                __Vtask_uvm_report_error__72__message 
                    = VL_SFORMATF_N_NX("Attempting to burst-read to an offset outside of the allocated region (burst to [%0#:%0#] > mem_size %0#)",0,
                                       64,offset,64,
                                       (offset + (QData)((IData)(value.size()))),
                                       32,this->__PVT__len) ;
                __Vtask_uvm_report_error__72__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__73__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__73__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__74__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__74__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__72__id, __Vtask_uvm_report_error__72__message, __Vtask_uvm_report_error__72__verbosity, __Vtask_uvm_report_error__72__filename, __Vtask_uvm_report_error__72__line, __Vtask_uvm_report_error__72__context_name, (IData)(__Vtask_uvm_report_error__72__report_enabled_checked));
            }
            status = 1U;
            goto __Vlabel0;
        }
        co_await VL_NULL_CHECK(mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 886)->__VnoInFunc_burst_read(vlSymsp, __Vtask_burst_read__76__status, 
                                                                                (offset 
                                                                                + 
                                                                                ([&]() {
                        this->__VnoInFunc_get_start_offset(vlSymsp, __Vfunc_get_start_offset__77__Vfuncout);
                    }(), __Vfunc_get_start_offset__77__Vfuncout)), value, path, map, parent, prior, extension, ""s, 0U);
        status = __Vtask_burst_read__76__status;
        __Vlabel0: ;
    }
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_poke(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ value, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_poke\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem> __Vtask_get_memory__78__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__79__Vfuncout;
    __Vfunc_uvm_report_enabled__79__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__79__verbosity;
    __Vfunc_uvm_report_enabled__79__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__79__severity;
    __Vfunc_uvm_report_enabled__79__severity = 0;
    std::string __Vfunc_uvm_report_enabled__79__id;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__80__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__81__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__82__Vfuncout;
    __Vtask_uvm_report_enabled__82__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__83__id;
    std::string __Vtask_uvm_report_error__83__message;
    IData/*31:0*/ __Vtask_uvm_report_error__83__verbosity;
    __Vtask_uvm_report_error__83__verbosity = 0;
    std::string __Vtask_uvm_report_error__83__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__83__line;
    __Vtask_uvm_report_error__83__line = 0;
    std::string __Vtask_uvm_report_error__83__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__83__report_enabled_checked;
    __Vtask_uvm_report_error__83__report_enabled_checked = 0;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__84__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__85__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__87__Vfuncout;
    __Vfunc_uvm_report_enabled__87__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__87__verbosity;
    __Vfunc_uvm_report_enabled__87__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__87__severity;
    __Vfunc_uvm_report_enabled__87__severity = 0;
    std::string __Vfunc_uvm_report_enabled__87__id;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__88__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__89__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__90__Vfuncout;
    __Vtask_uvm_report_enabled__90__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__91__id;
    std::string __Vtask_uvm_report_error__91__message;
    IData/*31:0*/ __Vtask_uvm_report_error__91__verbosity;
    __Vtask_uvm_report_error__91__verbosity = 0;
    std::string __Vtask_uvm_report_error__91__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__91__line;
    __Vtask_uvm_report_error__91__line = 0;
    std::string __Vtask_uvm_report_error__91__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__91__report_enabled_checked;
    __Vtask_uvm_report_error__91__report_enabled_checked = 0;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__92__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__93__Vfuncout;
    IData/*31:0*/ __Vtask_poke__95__status;
    __Vtask_poke__95__status = 0;
    QData/*63:0*/ __Vfunc_get_start_offset__96__Vfuncout;
    __Vfunc_get_start_offset__96__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem> mem;
    {
        VL_NULL_CHECK(this->__PVT__parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 899)->__VnoInFunc_get_memory(vlSymsp, __Vtask_get_memory__78__Vfuncout);
        mem = __Vtask_get_memory__78__Vfuncout;
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        if ((VlNull{} == mem)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__79__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__79__severity = 2U;
                            __Vfunc_uvm_report_enabled__79__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__80__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__80__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__81__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__81__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__79__verbosity, (IData)(__Vfunc_uvm_report_enabled__79__severity), __Vfunc_uvm_report_enabled__79__id, __Vtask_uvm_report_enabled__82__Vfuncout);
                            __Vfunc_uvm_report_enabled__79__Vfuncout 
                                = __Vtask_uvm_report_enabled__82__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__79__Vfuncout))) {
                __Vtask_uvm_report_error__83__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__83__context_name = ""s;
                __Vtask_uvm_report_error__83__line = 0x00000388U;
                __Vtask_uvm_report_error__83__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh"s;
                __Vtask_uvm_report_error__83__verbosity = 0U;
                __Vtask_uvm_report_error__83__message = "Cannot use uvm_mem_region::poke() on a region that was allocated by a Memory Allocation Manager that was not associated with a uvm_mem instance"s;
                __Vtask_uvm_report_error__83__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__84__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__84__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__85__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__85__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__83__id, __Vtask_uvm_report_error__83__message, __Vtask_uvm_report_error__83__verbosity, __Vtask_uvm_report_error__83__filename, __Vtask_uvm_report_error__83__line, __Vtask_uvm_report_error__83__context_name, (IData)(__Vtask_uvm_report_error__83__report_enabled_checked));
            }
            status = 1U;
            goto __Vlabel0;
        }
        if ((offset > (QData)((IData)(this->__PVT__len)))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__87__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__87__severity = 2U;
                            __Vfunc_uvm_report_enabled__87__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__88__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__88__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__89__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__89__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__87__verbosity, (IData)(__Vfunc_uvm_report_enabled__87__severity), __Vfunc_uvm_report_enabled__87__id, __Vtask_uvm_report_enabled__90__Vfuncout);
                            __Vfunc_uvm_report_enabled__87__Vfuncout 
                                = __Vtask_uvm_report_enabled__90__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__87__Vfuncout))) {
                __Vtask_uvm_report_error__91__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__91__context_name = ""s;
                __Vtask_uvm_report_error__91__line = 0x00000390U;
                __Vtask_uvm_report_error__91__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh"s;
                __Vtask_uvm_report_error__91__verbosity = 0U;
                __Vtask_uvm_report_error__91__message 
                    = VL_SFORMATF_N_NX("Attempting to poke to an offset outside of the allocated region (%0# > %0#)",0,
                                       64,offset,32,
                                       this->__PVT__len) ;
                __Vtask_uvm_report_error__91__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__92__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__92__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__93__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__93__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__91__id, __Vtask_uvm_report_error__91__message, __Vtask_uvm_report_error__91__verbosity, __Vtask_uvm_report_error__91__filename, __Vtask_uvm_report_error__91__line, __Vtask_uvm_report_error__91__context_name, (IData)(__Vtask_uvm_report_error__91__report_enabled_checked));
            }
            status = 1U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 917)->__VnoInFunc_poke(vlProcess, vlSymsp, __Vtask_poke__95__status, 
                                                                                (offset 
                                                                                + 
                                                                                ([&]() {
                        this->__VnoInFunc_get_start_offset(vlSymsp, __Vfunc_get_start_offset__96__Vfuncout);
                    }(), __Vfunc_get_start_offset__96__Vfuncout)), value, ""s, parent, extension, ""s, 0U);
        status = __Vtask_poke__95__status;
        __Vlabel0: ;
    }
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_peek(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ &value, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_peek\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem> __Vtask_get_memory__97__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__98__Vfuncout;
    __Vfunc_uvm_report_enabled__98__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__98__verbosity;
    __Vfunc_uvm_report_enabled__98__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__98__severity;
    __Vfunc_uvm_report_enabled__98__severity = 0;
    std::string __Vfunc_uvm_report_enabled__98__id;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__99__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__100__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__101__Vfuncout;
    __Vtask_uvm_report_enabled__101__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__102__id;
    std::string __Vtask_uvm_report_error__102__message;
    IData/*31:0*/ __Vtask_uvm_report_error__102__verbosity;
    __Vtask_uvm_report_error__102__verbosity = 0;
    std::string __Vtask_uvm_report_error__102__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__102__line;
    __Vtask_uvm_report_error__102__line = 0;
    std::string __Vtask_uvm_report_error__102__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__102__report_enabled_checked;
    __Vtask_uvm_report_error__102__report_enabled_checked = 0;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__103__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__104__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__106__Vfuncout;
    __Vfunc_uvm_report_enabled__106__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__106__verbosity;
    __Vfunc_uvm_report_enabled__106__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__106__severity;
    __Vfunc_uvm_report_enabled__106__severity = 0;
    std::string __Vfunc_uvm_report_enabled__106__id;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__107__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__108__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__109__Vfuncout;
    __Vtask_uvm_report_enabled__109__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__110__id;
    std::string __Vtask_uvm_report_error__110__message;
    IData/*31:0*/ __Vtask_uvm_report_error__110__verbosity;
    __Vtask_uvm_report_error__110__verbosity = 0;
    std::string __Vtask_uvm_report_error__110__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__110__line;
    __Vtask_uvm_report_error__110__line = 0;
    std::string __Vtask_uvm_report_error__110__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__110__report_enabled_checked;
    __Vtask_uvm_report_error__110__report_enabled_checked = 0;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__111__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__112__Vfuncout;
    IData/*31:0*/ __Vtask_peek__114__status;
    __Vtask_peek__114__status = 0;
    QData/*63:0*/ __Vtask_peek__114__value;
    __Vtask_peek__114__value = 0;
    QData/*63:0*/ __Vfunc_get_start_offset__115__Vfuncout;
    __Vfunc_get_start_offset__115__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem> mem;
    {
        VL_NULL_CHECK(this->__PVT__parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 928)->__VnoInFunc_get_memory(vlSymsp, __Vtask_get_memory__97__Vfuncout);
        mem = __Vtask_get_memory__97__Vfuncout;
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        if ((VlNull{} == mem)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__98__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__98__severity = 2U;
                            __Vfunc_uvm_report_enabled__98__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__99__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__99__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__100__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__100__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__98__verbosity, (IData)(__Vfunc_uvm_report_enabled__98__severity), __Vfunc_uvm_report_enabled__98__id, __Vtask_uvm_report_enabled__101__Vfuncout);
                            __Vfunc_uvm_report_enabled__98__Vfuncout 
                                = __Vtask_uvm_report_enabled__101__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__98__Vfuncout))) {
                __Vtask_uvm_report_error__102__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__102__context_name = ""s;
                __Vtask_uvm_report_error__102__line = 0x000003a5U;
                __Vtask_uvm_report_error__102__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh"s;
                __Vtask_uvm_report_error__102__verbosity = 0U;
                __Vtask_uvm_report_error__102__message = "Cannot use uvm_mem_region::peek() on a region that was allocated by a Memory Allocation Manager that was not associated with a uvm_mem instance"s;
                __Vtask_uvm_report_error__102__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__103__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__103__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__104__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__104__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__102__id, __Vtask_uvm_report_error__102__message, __Vtask_uvm_report_error__102__verbosity, __Vtask_uvm_report_error__102__filename, __Vtask_uvm_report_error__102__line, __Vtask_uvm_report_error__102__context_name, (IData)(__Vtask_uvm_report_error__102__report_enabled_checked));
            }
            status = 1U;
            goto __Vlabel0;
        }
        if ((offset > (QData)((IData)(this->__PVT__len)))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__106__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__106__severity = 2U;
                            __Vfunc_uvm_report_enabled__106__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__107__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__107__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__108__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__108__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__106__verbosity, (IData)(__Vfunc_uvm_report_enabled__106__severity), __Vfunc_uvm_report_enabled__106__id, __Vtask_uvm_report_enabled__109__Vfuncout);
                            __Vfunc_uvm_report_enabled__106__Vfuncout 
                                = __Vtask_uvm_report_enabled__109__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__106__Vfuncout))) {
                __Vtask_uvm_report_error__110__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__110__context_name = ""s;
                __Vtask_uvm_report_error__110__line = 0x000003adU;
                __Vtask_uvm_report_error__110__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh"s;
                __Vtask_uvm_report_error__110__verbosity = 0U;
                __Vtask_uvm_report_error__110__message 
                    = VL_SFORMATF_N_NX("Attempting to peek from an offset outside of the allocated region (%0# > %0#)",0,
                                       64,offset,32,
                                       this->__PVT__len) ;
                __Vtask_uvm_report_error__110__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__111__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__111__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__112__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__112__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__110__id, __Vtask_uvm_report_error__110__message, __Vtask_uvm_report_error__110__verbosity, __Vtask_uvm_report_error__110__filename, __Vtask_uvm_report_error__110__line, __Vtask_uvm_report_error__110__context_name, (IData)(__Vtask_uvm_report_error__110__report_enabled_checked));
            }
            status = 1U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem_mam.svh", 946)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__114__status, 
                                                                                (offset 
                                                                                + 
                                                                                ([&]() {
                        this->__VnoInFunc_get_start_offset(vlSymsp, __Vfunc_get_start_offset__115__Vfuncout);
                    }(), __Vfunc_get_start_offset__115__Vfuncout)), __Vtask_peek__114__value, ""s, parent, extension, ""s, 0U);
        status = __Vtask_peek__114__status;
        value = __Vtask_peek__114__value;
        __Vlabel0: ;
    }
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_region::_ctor_var_reset(Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_region::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__Xstart_offsetX = 0;
    __PVT__Xend_offsetX = 0;
    __PVT__len = 0;
    __PVT__n_bytes = 0;
    __PVT__lineno = 0;
}

std::string VL_TO_STRING(const VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_region>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_region::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_region::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_region::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_region::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_region::to_string_middle\n"); );
    // Body
    std::string out;
    out += "Xstart_offsetX:" + VL_TO_STRING(__PVT__Xstart_offsetX);
    out += ", Xend_offsetX:" + VL_TO_STRING(__PVT__Xend_offsetX);
    out += ", len:" + VL_TO_STRING(__PVT__len);
    out += ", n_bytes:" + VL_TO_STRING(__PVT__n_bytes);
    out += ", parent:" + VL_TO_STRING(__PVT__parent);
    out += ", fname:" + VL_TO_STRING(__PVT__fname);
    out += ", lineno:" + VL_TO_STRING(__PVT__lineno);
    out += ", XvregX:" + VL_TO_STRING(__PVT__XvregX);
    return (out);
}
