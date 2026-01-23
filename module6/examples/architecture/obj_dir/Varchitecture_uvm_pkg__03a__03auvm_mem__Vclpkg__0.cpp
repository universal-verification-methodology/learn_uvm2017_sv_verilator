// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varchitecture.h for the primary calling header

#include "Varchitecture__pch.h"

void Varchitecture_uvm_pkg__03a__03auvm_mem__Vclpkg::__VnoInFunc_get_max_size(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &get_max_size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Varchitecture_uvm_pkg__03a__03auvm_mem__Vclpkg::__VnoInFunc_get_max_size\n"); );
    // Body
    get_max_size__Vfuncrtn = this->__PVT__m_max_size;
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_pre_write(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_pre_write\n"); );
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_post_write(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_post_write\n"); );
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_pre_read(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_pre_read\n"); );
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_post_read(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_post_read\n"); );
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_sample(Varchitecture__Syms* __restrict vlSymsp, QData/*63:0*/ offset, CData/*0:0*/ is_read, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_sample\n"); );
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_XsampleX(Varchitecture__Syms* __restrict vlSymsp, QData/*63:0*/ addr, CData/*0:0*/ is_read, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_XsampleX\n"); );
    // Body
    this->__VnoInFunc_sample(vlSymsp, addr, (IData)(is_read), map);
}

Varchitecture_uvm_pkg__03a__03auvm_mem::Varchitecture_uvm_pkg__03a__03auvm_mem(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ size, IData/*31:0*/ n_bits, std::string access, IData/*31:0*/ has_coverage)
    : Varchitecture_uvm_pkg__03a__03auvm_object(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::new\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__2__Vfuncout;
    __Vfunc_uvm_report_enabled__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__2__verbosity;
    __Vfunc_uvm_report_enabled__2__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__2__severity;
    __Vfunc_uvm_report_enabled__2__severity = 0;
    std::string __Vfunc_uvm_report_enabled__2__id;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__3__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__4__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__5__Vfuncout;
    __Vtask_uvm_report_enabled__5__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__6__id;
    std::string __Vtask_uvm_report_error__6__message;
    IData/*31:0*/ __Vtask_uvm_report_error__6__verbosity;
    __Vtask_uvm_report_error__6__verbosity = 0;
    std::string __Vtask_uvm_report_error__6__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__6__line;
    __Vtask_uvm_report_error__6__line = 0;
    std::string __Vtask_uvm_report_error__6__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__6__report_enabled_checked;
    __Vtask_uvm_report_error__6__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__7__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__8__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__9__Vfuncout;
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    this->__PVT__m_locked = 0U;
    if ((0U == n_bits)) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__2__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__2__severity = 2U;
                        __Vfunc_uvm_report_enabled__2__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__3__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__3__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__4__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__4__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__2__verbosity, (IData)(__Vfunc_uvm_report_enabled__2__severity), __Vfunc_uvm_report_enabled__2__id, __Vtask_uvm_report_enabled__5__Vfuncout);
                        __Vfunc_uvm_report_enabled__2__Vfuncout 
                            = __Vtask_uvm_report_enabled__5__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__2__Vfuncout))) {
            __Vtask_uvm_report_error__6__report_enabled_checked = 1U;
            __Vtask_uvm_report_error__6__context_name = ""s;
            __Vtask_uvm_report_error__6__line = 0x00000219U;
            __Vtask_uvm_report_error__6__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
            __Vtask_uvm_report_error__6__verbosity = 0U;
            __Vtask_uvm_report_error__6__message = 
                VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_CONCATN_NNN("Memory '"s, 
                                                                 ([&]() {
                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__7__Vfuncout);
                            }(), __Vfunc_get_full_name__7__Vfuncout)), "' cannot have 0 bits"s));
            __Vtask_uvm_report_error__6__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__8__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__8__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__9__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__9__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__6__id, __Vtask_uvm_report_error__6__message, __Vtask_uvm_report_error__6__verbosity, __Vtask_uvm_report_error__6__filename, __Vtask_uvm_report_error__6__line, __Vtask_uvm_report_error__6__context_name, (IData)(__Vtask_uvm_report_error__6__report_enabled_checked));
        }
        n_bits = 1U;
    }
    this->__PVT__m_size = size;
    this->__PVT__m_n_bits = n_bits;
    this->__PVT__m_backdoor = VlNull{};
    this->__PVT__m_access = VL_TOUPPER_NN(access);
    this->__PVT__m_has_cover = has_coverage;
    this->__PVT__m_hdl_paths_pool = VL_NEW(Varchitecture_uvm_pkg__03a__03auvm_object_string_pool__Tz200, vlProcess, vlSymsp, "hdl_paths"s);
    if ((n_bits > vlSymsp->TOP__uvm_pkg__03a__03auvm_mem__Vclpkg.__PVT__m_max_size)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_mem__Vclpkg.__PVT__m_max_size 
            = n_bits;
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_configure(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> parent, std::string hdl_path) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_configure\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__12__Vfuncout;
    __Vfunc_uvm_report_enabled__12__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__12__verbosity;
    __Vfunc_uvm_report_enabled__12__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__12__severity;
    __Vfunc_uvm_report_enabled__12__severity = 0;
    std::string __Vfunc_uvm_report_enabled__12__id;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__13__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__14__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__15__Vfuncout;
    __Vtask_uvm_report_enabled__15__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__17__Vfuncout;
    __Vfunc_uvm_report_enabled__17__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__17__verbosity;
    __Vfunc_uvm_report_enabled__17__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__17__severity;
    __Vfunc_uvm_report_enabled__17__severity = 0;
    std::string __Vfunc_uvm_report_enabled__17__id;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__18__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__19__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__20__Vfuncout;
    __Vtask_uvm_report_enabled__20__Vfuncout = 0;
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
    std::string __Vfunc_get_full_name__22__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__23__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__24__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem_mam_cfg> unnamedblk427__DOT__cfg;
    if ((VlNull{} == parent)) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__12__id = "REG/NULL_PARENT"s;
                        __Vfunc_uvm_report_enabled__12__severity = 3U;
                        __Vfunc_uvm_report_enabled__12__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__13__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__13__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__14__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__14__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__12__verbosity, (IData)(__Vfunc_uvm_report_enabled__12__severity), __Vfunc_uvm_report_enabled__12__id, __Vtask_uvm_report_enabled__15__Vfuncout);
                        __Vfunc_uvm_report_enabled__12__Vfuncout 
                            = __Vtask_uvm_report_enabled__15__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__12__Vfuncout))) {
            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "REG/NULL_PARENT"s, "configure: parent argument is null"s, 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s, 0x0000022fU, ""s, 1U);
        }
    }
    this->__PVT__m_parent = parent;
    if ((("RW"s != this->__PVT__m_access) & ("RO"s 
                                             != this->__PVT__m_access))) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__17__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__17__severity = 2U;
                        __Vfunc_uvm_report_enabled__17__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__18__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__18__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__19__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__19__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__17__verbosity, (IData)(__Vfunc_uvm_report_enabled__17__severity), __Vfunc_uvm_report_enabled__17__id, __Vtask_uvm_report_enabled__20__Vfuncout);
                        __Vfunc_uvm_report_enabled__17__Vfuncout 
                            = __Vtask_uvm_report_enabled__20__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__17__Vfuncout))) {
            __Vtask_uvm_report_error__21__report_enabled_checked = 1U;
            __Vtask_uvm_report_error__21__context_name = ""s;
            __Vtask_uvm_report_error__21__line = 0x00000234U;
            __Vtask_uvm_report_error__21__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
            __Vtask_uvm_report_error__21__verbosity = 0U;
            __Vtask_uvm_report_error__21__message = 
                VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_CONCATN_NNN("Memory '"s, 
                                                                 ([&]() {
                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__22__Vfuncout);
                            }(), __Vfunc_get_full_name__22__Vfuncout)), "' can only be RW or RO"s));
            __Vtask_uvm_report_error__21__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__23__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__23__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__24__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__24__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__21__id, __Vtask_uvm_report_error__21__message, __Vtask_uvm_report_error__21__verbosity, __Vtask_uvm_report_error__21__filename, __Vtask_uvm_report_error__21__line, __Vtask_uvm_report_error__21__context_name, (IData)(__Vtask_uvm_report_error__21__report_enabled_checked));
        }
        this->__PVT__m_access = "RW"s;
    }
    unnamedblk427__DOT__cfg = VL_NEW(Varchitecture_uvm_pkg__03a__03auvm_mem_mam_cfg, vlSymsp);
    VL_NULL_CHECK(unnamedblk427__DOT__cfg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 571)->__PVT__n_bytes 
        = ((IData)(1U) + VL_SHIFTR_III(32,32,32, (this->__PVT__m_n_bits 
                                                  - (IData)(1U)), 3U));
    VL_NULL_CHECK(unnamedblk427__DOT__cfg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 572)->__PVT__start_offset = 0ULL;
    VL_NULL_CHECK(unnamedblk427__DOT__cfg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 573)->__PVT__end_offset 
        = (this->__PVT__m_size - 1ULL);
    VL_NULL_CHECK(unnamedblk427__DOT__cfg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 575)->__PVT__mode = 0U;
    VL_NULL_CHECK(unnamedblk427__DOT__cfg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 576)->__PVT__locality = 0U;
    this->__PVT__mam = VL_NEW(Varchitecture_uvm_pkg__03a__03auvm_mem_mam, vlSymsp, 
                              VL_CVT_PACK_STR_NN(([&]() {
                    std::string __Vfunc_get_full_name__28__Vfuncout;
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__28__Vfuncout);
                    return (__Vfunc_get_full_name__28__Vfuncout);
                }())), unnamedblk427__DOT__cfg, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem>{this});
    VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 581)->__VnoInFunc_add_mem(vlSymsp, 
                                                                                VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem>{this});
    if ((""s != hdl_path)) {
        this->__VnoInFunc_add_hdl_path_slice(vlSymsp, hdl_path, 0xffffffffU, 0xffffffffU, 0U, "RTL"s);
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_set_offset(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ offset, CData/*0:0*/ unmapped) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_set_offset\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__31__Vfuncout;
    __Vfunc_uvm_report_enabled__31__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__31__verbosity;
    __Vfunc_uvm_report_enabled__31__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__31__severity;
    __Vfunc_uvm_report_enabled__31__severity = 0;
    std::string __Vfunc_uvm_report_enabled__31__id;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__32__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__33__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__34__Vfuncout;
    __Vtask_uvm_report_enabled__34__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__35__id;
    std::string __Vtask_uvm_report_error__35__message;
    IData/*31:0*/ __Vtask_uvm_report_error__35__verbosity;
    __Vtask_uvm_report_error__35__verbosity = 0;
    std::string __Vtask_uvm_report_error__35__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__35__line;
    __Vtask_uvm_report_error__35__line = 0;
    std::string __Vtask_uvm_report_error__35__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__35__report_enabled_checked;
    __Vtask_uvm_report_error__35__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__36__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__37__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__38__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> __Vfunc_get_local_map__40__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> orig_map;
    {
        orig_map = map;
        if ((VL_LTS_III(32, 1U, this->__PVT__m_maps.size()) 
             & (VlNull{} == map))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__31__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__31__severity = 2U;
                            __Vfunc_uvm_report_enabled__31__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__32__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__32__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__33__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__33__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__31__verbosity, (IData)(__Vfunc_uvm_report_enabled__31__severity), __Vfunc_uvm_report_enabled__31__id, __Vtask_uvm_report_enabled__34__Vfuncout);
                            __Vfunc_uvm_report_enabled__31__Vfuncout 
                                = __Vtask_uvm_report_enabled__34__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__31__Vfuncout))) {
                __Vtask_uvm_report_error__35__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__35__context_name = ""s;
                __Vtask_uvm_report_error__35__line = 0x00000255U;
                __Vtask_uvm_report_error__35__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_error__35__verbosity = 0U;
                __Vtask_uvm_report_error__35__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("set_offset requires a non-null map when memory '"s, 
                                                                       ([&]() {
                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__36__Vfuncout);
                                }(), __Vfunc_get_full_name__36__Vfuncout)), "' belongs to more than one map."s));
                __Vtask_uvm_report_error__35__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__37__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__37__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__38__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__38__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__35__id, __Vtask_uvm_report_error__35__message, __Vtask_uvm_report_error__35__verbosity, __Vtask_uvm_report_error__35__filename, __Vtask_uvm_report_error__35__line, __Vtask_uvm_report_error__35__context_name, (IData)(__Vtask_uvm_report_error__35__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, __Vfunc_get_local_map__40__Vfuncout);
        map = __Vfunc_get_local_map__40__Vfuncout;
        if ((VlNull{} == map)) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 606)->__VnoInFunc_m_set_mem_offset(vlSymsp, 
                                                                                VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem>{this}, offset, (IData)(unmapped));
        __Vlabel0: ;
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_add_map(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_add_map\n"); );
    // Body
    this->__PVT__m_maps.at(map) = 1U;
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_Xlock_modelX(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_Xlock_modelX\n"); );
    // Body
    this->__PVT__m_locked = 1U;
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_full_name(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_full_name\n"); );
    // Locals
    std::string __Vfunc_get_name__42__Vfuncout;
    std::string __Vtask_get_full_name__43__Vfuncout;
    std::string __Vfunc_get_name__44__Vfuncout;
    // Body
    {
        if ((VlNull{} == this->__PVT__m_parent)) {
            this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__42__Vfuncout);
            get_full_name__Vfuncrtn = __Vfunc_get_name__42__Vfuncout;
            goto __Vlabel0;
        }
        get_full_name__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                                ([&]() {
                        VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 630)
                                                                 ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__43__Vfuncout);
                    }(), __Vtask_get_full_name__43__Vfuncout), "."s), 
                                                 ([&]() {
                    this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__44__Vfuncout);
                }(), __Vfunc_get_name__44__Vfuncout));
        __Vlabel0: ;
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_block(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> &get_block__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_block\n"); );
    // Body
    get_block__Vfuncrtn = this->__PVT__m_parent;
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_n_maps(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_maps__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_n_maps\n"); );
    // Body
    get_n_maps__Vfuncrtn = this->__PVT__m_maps.size();
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_maps(Varchitecture__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map>> &maps) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_maps\n"); );
    // Body
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> unnamedblk428__DOT__map;
    CData/*0:0*/ unnamedblk428__DOT__map__Vfirst;
    unnamedblk428__DOT__map__Vfirst = 0;
    if ((0U != this->__PVT__m_maps.first(unnamedblk428__DOT__map))) {
        unnamedblk428__DOT__map__Vfirst = 1U;
        while (((IData)(unnamedblk428__DOT__map__Vfirst) 
                || (0U != this->__PVT__m_maps.next(unnamedblk428__DOT__map)))) {
            unnamedblk428__DOT__map__Vfirst = 0U;
            maps.push_back(unnamedblk428__DOT__map);
        }
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_is_in_map(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> map, CData/*0:0*/ &is_in_map__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_is_in_map\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> __Vtask_get_parent_map__45__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> __Vtask_get_parent_map__46__Vfuncout;
    // Body
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> unnamedblk429__DOT__l;
    CData/*0:0*/ unnamedblk429__DOT__l__Vfirst;
    unnamedblk429__DOT__l__Vfirst = 0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> unnamedblk429__DOT__unnamedblk430__DOT__local_map;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> unnamedblk429__DOT__unnamedblk430__DOT__parent_map;
    {
        if (this->__PVT__m_maps.exists(map)) {
            is_in_map__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        if ((0U != this->__PVT__m_maps.first(unnamedblk429__DOT__l))) {
            unnamedblk429__DOT__l__Vfirst = 1U;
            while (((IData)(unnamedblk429__DOT__l__Vfirst) 
                    || (0U != this->__PVT__m_maps.next(unnamedblk429__DOT__l)))) {
                unnamedblk429__DOT__l__Vfirst = 0U;
                unnamedblk429__DOT__unnamedblk430__DOT__local_map 
                    = unnamedblk429__DOT__l;
                VL_NULL_CHECK(unnamedblk429__DOT__unnamedblk430__DOT__local_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 664)->__VnoInFunc_get_parent_map(vlSymsp, __Vtask_get_parent_map__45__Vfuncout);
                unnamedblk429__DOT__unnamedblk430__DOT__parent_map 
                    = __Vtask_get_parent_map__45__Vfuncout;
                while ((VlNull{} != unnamedblk429__DOT__unnamedblk430__DOT__parent_map)) {
                    if ((unnamedblk429__DOT__unnamedblk430__DOT__parent_map 
                         == map)) {
                        is_in_map__Vfuncrtn = 1U;
                        goto __Vlabel0;
                    }
                    VL_NULL_CHECK(unnamedblk429__DOT__unnamedblk430__DOT__parent_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 669)->__VnoInFunc_get_parent_map(vlSymsp, __Vtask_get_parent_map__46__Vfuncout);
                    unnamedblk429__DOT__unnamedblk430__DOT__parent_map 
                        = __Vtask_get_parent_map__46__Vfuncout;
                }
            }
        }
        is_in_map__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_local_map(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> &get_local_map__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_local_map\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> __Vfunc_get_default_map__47__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> __Vtask_get_parent_map__48__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> __Vtask_get_parent_map__49__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__50__Vfuncout;
    __Vfunc_uvm_report_enabled__50__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__50__verbosity;
    __Vfunc_uvm_report_enabled__50__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__50__severity;
    __Vfunc_uvm_report_enabled__50__severity = 0;
    std::string __Vfunc_uvm_report_enabled__50__id;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__51__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__52__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__53__Vfuncout;
    __Vtask_uvm_report_enabled__53__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__54__id;
    std::string __Vtask_uvm_report_warning__54__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__54__verbosity;
    __Vtask_uvm_report_warning__54__verbosity = 0;
    std::string __Vtask_uvm_report_warning__54__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__54__line;
    __Vtask_uvm_report_warning__54__line = 0;
    std::string __Vtask_uvm_report_warning__54__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__54__report_enabled_checked;
    __Vtask_uvm_report_warning__54__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__55__Vfuncout;
    std::string __Vtask_get_full_name__56__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__57__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__58__Vfuncout;
    // Body
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> unnamedblk431__DOT__l;
    CData/*0:0*/ unnamedblk431__DOT__l__Vfirst;
    unnamedblk431__DOT__l__Vfirst = 0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> unnamedblk431__DOT__unnamedblk432__DOT__local_map;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> unnamedblk431__DOT__unnamedblk432__DOT__parent_map;
    {
        if ((VlNull{} == map)) {
            this->__VnoInFunc_get_default_map(vlProcess, vlSymsp, __Vfunc_get_default_map__47__Vfuncout);
            get_local_map__Vfuncrtn = __Vfunc_get_default_map__47__Vfuncout;
            goto __Vlabel0;
        }
        if (this->__PVT__m_maps.exists(map)) {
            get_local_map__Vfuncrtn = map;
            goto __Vlabel0;
        }
        if ((0U != this->__PVT__m_maps.first(unnamedblk431__DOT__l))) {
            unnamedblk431__DOT__l__Vfirst = 1U;
            while (((IData)(unnamedblk431__DOT__l__Vfirst) 
                    || (0U != this->__PVT__m_maps.next(unnamedblk431__DOT__l)))) {
                unnamedblk431__DOT__l__Vfirst = 0U;
                unnamedblk431__DOT__unnamedblk432__DOT__local_map 
                    = unnamedblk431__DOT__l;
                VL_NULL_CHECK(unnamedblk431__DOT__unnamedblk432__DOT__local_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 685)->__VnoInFunc_get_parent_map(vlSymsp, __Vtask_get_parent_map__48__Vfuncout);
                unnamedblk431__DOT__unnamedblk432__DOT__parent_map 
                    = __Vtask_get_parent_map__48__Vfuncout;
                while ((VlNull{} != unnamedblk431__DOT__unnamedblk432__DOT__parent_map)) {
                    if ((unnamedblk431__DOT__unnamedblk432__DOT__parent_map 
                         == map)) {
                        get_local_map__Vfuncrtn = unnamedblk431__DOT__unnamedblk432__DOT__local_map;
                        goto __Vlabel0;
                    }
                    VL_NULL_CHECK(unnamedblk431__DOT__unnamedblk432__DOT__parent_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 690)->__VnoInFunc_get_parent_map(vlSymsp, __Vtask_get_parent_map__49__Vfuncout);
                    unnamedblk431__DOT__unnamedblk432__DOT__parent_map 
                        = __Vtask_get_parent_map__49__Vfuncout;
                }
            }
        }
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__50__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__50__severity = 1U;
                        __Vfunc_uvm_report_enabled__50__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__51__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__51__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__52__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__52__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__50__verbosity, (IData)(__Vfunc_uvm_report_enabled__50__severity), __Vfunc_uvm_report_enabled__50__id, __Vtask_uvm_report_enabled__53__Vfuncout);
                        __Vfunc_uvm_report_enabled__50__Vfuncout 
                            = __Vtask_uvm_report_enabled__53__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__50__Vfuncout))) {
            __Vtask_uvm_report_warning__54__report_enabled_checked = 1U;
            __Vtask_uvm_report_warning__54__context_name = ""s;
            __Vtask_uvm_report_warning__54__line = 0x000002b6U;
            __Vtask_uvm_report_warning__54__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
            __Vtask_uvm_report_warning__54__verbosity = 0U;
            __Vtask_uvm_report_warning__54__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, 
                                                                                ([&]() {
                                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__55__Vfuncout);
                                    }(), __Vfunc_get_full_name__55__Vfuncout)), "' is not contained within map '"s), 
                                                                   ([&]() {
                                VL_NULL_CHECK(map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 694)
                                                                    ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__56__Vfuncout);
                            }(), __Vtask_get_full_name__56__Vfuncout)), "'"s));
            __Vtask_uvm_report_warning__54__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__57__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__57__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__58__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__58__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__54__id, __Vtask_uvm_report_warning__54__message, __Vtask_uvm_report_warning__54__verbosity, __Vtask_uvm_report_warning__54__filename, __Vtask_uvm_report_warning__54__line, __Vtask_uvm_report_warning__54__context_name, (IData)(__Vtask_uvm_report_warning__54__report_enabled_checked));
        }
        get_local_map__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_default_map(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> &get_default_map__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_default_map\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__60__Vfuncout;
    __Vfunc_uvm_report_enabled__60__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__60__verbosity;
    __Vfunc_uvm_report_enabled__60__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__60__severity;
    __Vfunc_uvm_report_enabled__60__severity = 0;
    std::string __Vfunc_uvm_report_enabled__60__id;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__61__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__62__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__63__Vfuncout;
    __Vtask_uvm_report_enabled__63__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__64__id;
    std::string __Vtask_uvm_report_warning__64__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__64__verbosity;
    __Vtask_uvm_report_warning__64__verbosity = 0;
    std::string __Vtask_uvm_report_warning__64__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__64__line;
    __Vtask_uvm_report_warning__64__line = 0;
    std::string __Vtask_uvm_report_warning__64__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__64__report_enabled_checked;
    __Vtask_uvm_report_warning__64__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__65__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__66__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__67__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> __Vtask_get_parent__69__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> __Vtask_get_default_map__70__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> __Vfunc_get_local_map__71__Vfuncout;
    // Body
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> unnamedblk433__DOT__l;
    CData/*0:0*/ unnamedblk433__DOT__l__Vfirst;
    unnamedblk433__DOT__l__Vfirst = 0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> unnamedblk433__DOT__unnamedblk434__DOT__map;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> unnamedblk433__DOT__unnamedblk434__DOT__blk;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> unnamedblk433__DOT__unnamedblk434__DOT__default_map;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> unnamedblk433__DOT__unnamedblk434__DOT__unnamedblk435__DOT__local_map;
    {
        if ((0U == this->__PVT__m_maps.size())) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__60__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__60__severity = 1U;
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
                __Vtask_uvm_report_warning__64__report_enabled_checked = 1U;
                __Vtask_uvm_report_warning__64__context_name = ""s;
                __Vtask_uvm_report_warning__64__line = 0x000002c2U;
                __Vtask_uvm_report_warning__64__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_warning__64__verbosity = 0U;
                __Vtask_uvm_report_warning__64__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Memory '"s, 
                                                                       ([&]() {
                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__65__Vfuncout);
                                }(), __Vfunc_get_full_name__65__Vfuncout)), "' is not registered with any map"s));
                __Vtask_uvm_report_warning__64__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__66__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__66__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__67__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__67__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__64__id, __Vtask_uvm_report_warning__64__message, __Vtask_uvm_report_warning__64__verbosity, __Vtask_uvm_report_warning__64__filename, __Vtask_uvm_report_warning__64__line, __Vtask_uvm_report_warning__64__context_name, (IData)(__Vtask_uvm_report_warning__64__report_enabled_checked));
            }
            get_default_map__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        if ((1U == this->__PVT__m_maps.size())) {
            (void)this->__PVT__m_maps.first(get_default_map__Vfuncrtn);
        }
        if ((0U != this->__PVT__m_maps.first(unnamedblk433__DOT__l))) {
            unnamedblk433__DOT__l__Vfirst = 1U;
            while (((IData)(unnamedblk433__DOT__l__Vfirst) 
                    || (0U != this->__PVT__m_maps.next(unnamedblk433__DOT__l)))) {
                unnamedblk433__DOT__l__Vfirst = 0U;
                unnamedblk433__DOT__unnamedblk434__DOT__map 
                    = unnamedblk433__DOT__l;
                VL_NULL_CHECK(unnamedblk433__DOT__unnamedblk434__DOT__map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 718)->__VnoInFunc_get_parent(vlSymsp, __Vtask_get_parent__69__Vfuncout);
                unnamedblk433__DOT__unnamedblk434__DOT__blk 
                    = __Vtask_get_parent__69__Vfuncout;
                VL_NULL_CHECK(unnamedblk433__DOT__unnamedblk434__DOT__blk, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 719)->__VnoInFunc_get_default_map(vlSymsp, __Vtask_get_default_map__70__Vfuncout);
                unnamedblk433__DOT__unnamedblk434__DOT__default_map 
                    = __Vtask_get_default_map__70__Vfuncout;
                if ((VlNull{} != unnamedblk433__DOT__unnamedblk434__DOT__default_map)) {
                    this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, unnamedblk433__DOT__unnamedblk434__DOT__default_map, __Vfunc_get_local_map__71__Vfuncout);
                    unnamedblk433__DOT__unnamedblk434__DOT__unnamedblk435__DOT__local_map 
                        = __Vfunc_get_local_map__71__Vfuncout;
                    if ((VlNull{} != unnamedblk433__DOT__unnamedblk434__DOT__unnamedblk435__DOT__local_map)) {
                        get_default_map__Vfuncrtn = unnamedblk433__DOT__unnamedblk434__DOT__unnamedblk435__DOT__local_map;
                        goto __Vlabel0;
                    }
                }
            }
        }
        (void)this->__PVT__m_maps.first(get_default_map__Vfuncrtn);
        __Vlabel0: ;
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_access(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_access__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_access\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_get_n_maps__72__Vfuncout;
    __Vfunc_get_n_maps__72__Vfuncout = 0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> __Vfunc_get_local_map__73__Vfuncout;
    std::string __Vfunc_get_rights__74__Vfuncout;
    std::string __Vfunc_get_rights__75__Vfuncout;
    std::string __Vfunc_get_rights__76__Vfuncout;
    std::string __Vfunc_get_rights__77__Vfuncout;
    std::string __Vfunc_get_rights__78__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__79__Vfuncout;
    __Vfunc_uvm_report_enabled__79__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__79__verbosity;
    __Vfunc_uvm_report_enabled__79__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__79__severity;
    __Vfunc_uvm_report_enabled__79__severity = 0;
    std::string __Vfunc_uvm_report_enabled__79__id;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__80__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__81__Vfuncout;
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
    std::string __Vfunc_get_full_name__84__Vfuncout;
    std::string __Vtask_get_full_name__85__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__86__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__87__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__89__Vfuncout;
    __Vfunc_uvm_report_enabled__89__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__89__verbosity;
    __Vfunc_uvm_report_enabled__89__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__89__severity;
    __Vfunc_uvm_report_enabled__89__severity = 0;
    std::string __Vfunc_uvm_report_enabled__89__id;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__90__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__91__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__92__Vfuncout;
    __Vtask_uvm_report_enabled__92__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__93__id;
    std::string __Vtask_uvm_report_error__93__message;
    IData/*31:0*/ __Vtask_uvm_report_error__93__verbosity;
    __Vtask_uvm_report_error__93__verbosity = 0;
    std::string __Vtask_uvm_report_error__93__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__93__line;
    __Vtask_uvm_report_error__93__line = 0;
    std::string __Vtask_uvm_report_error__93__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__93__report_enabled_checked;
    __Vtask_uvm_report_error__93__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__94__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__95__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__96__Vfuncout;
    std::string __Vfunc_get_rights__98__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__99__Vfuncout;
    __Vfunc_uvm_report_enabled__99__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__99__verbosity;
    __Vfunc_uvm_report_enabled__99__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__99__severity;
    __Vfunc_uvm_report_enabled__99__severity = 0;
    std::string __Vfunc_uvm_report_enabled__99__id;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__100__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__101__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__102__Vfuncout;
    __Vtask_uvm_report_enabled__102__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__103__id;
    std::string __Vtask_uvm_report_error__103__message;
    IData/*31:0*/ __Vtask_uvm_report_error__103__verbosity;
    __Vtask_uvm_report_error__103__verbosity = 0;
    std::string __Vtask_uvm_report_error__103__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__103__line;
    __Vtask_uvm_report_error__103__line = 0;
    std::string __Vtask_uvm_report_error__103__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__103__report_enabled_checked;
    __Vtask_uvm_report_error__103__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__104__Vfuncout;
    std::string __Vtask_get_full_name__105__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__106__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__107__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__109__Vfuncout;
    __Vfunc_uvm_report_enabled__109__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__109__verbosity;
    __Vfunc_uvm_report_enabled__109__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__109__severity;
    __Vfunc_uvm_report_enabled__109__severity = 0;
    std::string __Vfunc_uvm_report_enabled__109__id;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__110__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__111__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__112__Vfuncout;
    __Vtask_uvm_report_enabled__112__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__113__id;
    std::string __Vtask_uvm_report_error__113__message;
    IData/*31:0*/ __Vtask_uvm_report_error__113__verbosity;
    __Vtask_uvm_report_error__113__verbosity = 0;
    std::string __Vtask_uvm_report_error__113__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__113__line;
    __Vtask_uvm_report_error__113__line = 0;
    std::string __Vtask_uvm_report_error__113__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__113__report_enabled_checked;
    __Vtask_uvm_report_error__113__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__114__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__115__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__116__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__118__Vfuncout;
    __Vfunc_uvm_report_enabled__118__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__118__verbosity;
    __Vfunc_uvm_report_enabled__118__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__118__severity;
    __Vfunc_uvm_report_enabled__118__severity = 0;
    std::string __Vfunc_uvm_report_enabled__118__id;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__119__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__120__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__121__Vfuncout;
    __Vtask_uvm_report_enabled__121__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__122__id;
    std::string __Vtask_uvm_report_error__122__message;
    IData/*31:0*/ __Vtask_uvm_report_error__122__verbosity;
    __Vtask_uvm_report_error__122__verbosity = 0;
    std::string __Vtask_uvm_report_error__122__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__122__line;
    __Vtask_uvm_report_error__122__line = 0;
    std::string __Vtask_uvm_report_error__122__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__122__report_enabled_checked;
    __Vtask_uvm_report_error__122__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__123__Vfuncout;
    std::string __Vtask_get_full_name__124__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__125__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__126__Vfuncout;
    // Body
    {
        get_access__Vfuncrtn = this->__PVT__m_access;
        if ((1U == ([&]() {
                        this->__VnoInFunc_get_n_maps(vlSymsp, __Vfunc_get_n_maps__72__Vfuncout);
                    }(), __Vfunc_get_n_maps__72__Vfuncout))) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, __Vfunc_get_local_map__73__Vfuncout);
        map = __Vfunc_get_local_map__73__Vfuncout;
        if ((VlNull{} == map)) {
            goto __Vlabel0;
        }
        if ((1U | ((("RW"s == ([&]() {
                                    this->__VnoInFunc_get_rights(vlProcess, vlSymsp, map, __Vfunc_get_rights__74__Vfuncout);
                                }(), __Vfunc_get_rights__74__Vfuncout)) 
                    | ("RO"s == ([&]() {
                                    this->__VnoInFunc_get_rights(vlProcess, vlSymsp, map, __Vfunc_get_rights__75__Vfuncout);
                                }(), __Vfunc_get_rights__75__Vfuncout))) 
                   | ("WO"s == ([&]() {
                                this->__VnoInFunc_get_rights(vlProcess, vlSymsp, map, __Vfunc_get_rights__76__Vfuncout);
                            }(), __Vfunc_get_rights__76__Vfuncout))))) {
            if ((1U & (~ ("RW"s == ([&]() {
                                    this->__VnoInFunc_get_rights(vlProcess, vlSymsp, map, __Vfunc_get_rights__77__Vfuncout);
                                }(), __Vfunc_get_rights__77__Vfuncout))))) {
                if (("RO"s == ([&]() {
                                this->__VnoInFunc_get_rights(vlProcess, vlSymsp, map, __Vfunc_get_rights__78__Vfuncout);
                            }(), __Vfunc_get_rights__78__Vfuncout))) {
                    if ((("RW"s == get_access__Vfuncrtn) 
                         || ("RO"s == get_access__Vfuncrtn))) {
                        get_access__Vfuncrtn = "RO"s;
                    } else if (("WO"s == get_access__Vfuncrtn)) {
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
                            __Vtask_uvm_report_error__83__line = 0x000002f2U;
                            __Vtask_uvm_report_error__83__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                            __Vtask_uvm_report_error__83__verbosity = 0U;
                            __Vtask_uvm_report_error__83__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("WO memory '"s, 
                                                                                ([&]() {
                                                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__84__Vfuncout);
                                                    }(), __Vfunc_get_full_name__84__Vfuncout)), "' restricted to RO in map '"s), 
                                                                                ([&]() {
                                                VL_NULL_CHECK(map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 754)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__85__Vfuncout);
                                            }(), __Vtask_get_full_name__85__Vfuncout)), "'"s));
                            __Vtask_uvm_report_error__83__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__86__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                = __Vfunc_get__86__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__87__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                = __Vtask_get_root__87__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__83__id, __Vtask_uvm_report_error__83__message, __Vtask_uvm_report_error__83__verbosity, __Vtask_uvm_report_error__83__filename, __Vtask_uvm_report_error__83__line, __Vtask_uvm_report_error__83__context_name, (IData)(__Vtask_uvm_report_error__83__report_enabled_checked));
                        }
                    } else if ((0U != ([&]() {
                                    __Vfunc_uvm_report_enabled__89__id = "RegModel"s;
                                    __Vfunc_uvm_report_enabled__89__severity = 2U;
                                    __Vfunc_uvm_report_enabled__89__verbosity = 0U;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__90__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                        = __Vfunc_get__90__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                       ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__91__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                        = __Vtask_get_root__91__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                       ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__89__verbosity, (IData)(__Vfunc_uvm_report_enabled__89__severity), __Vfunc_uvm_report_enabled__89__id, __Vtask_uvm_report_enabled__92__Vfuncout);
                                    __Vfunc_uvm_report_enabled__89__Vfuncout 
                                        = __Vtask_uvm_report_enabled__92__Vfuncout;
                                }(), __Vfunc_uvm_report_enabled__89__Vfuncout))) {
                        __Vtask_uvm_report_error__93__report_enabled_checked = 1U;
                        __Vtask_uvm_report_error__93__context_name = ""s;
                        __Vtask_uvm_report_error__93__line = 0x000002f5U;
                        __Vtask_uvm_report_error__93__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                        __Vtask_uvm_report_error__93__verbosity = 0U;
                        __Vtask_uvm_report_error__93__message 
                            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                                VL_CONCATN_NNN(
                                                                               VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, 
                                                                                ([&]() {
                                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__94__Vfuncout);
                                                }(), __Vfunc_get_full_name__94__Vfuncout)), "' has invalid access mode, '"s), get_access__Vfuncrtn), "'"s));
                        __Vtask_uvm_report_error__93__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__95__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                            = __Vfunc_get__95__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__96__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                            = __Vtask_get_root__96__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__93__id, __Vtask_uvm_report_error__93__message, __Vtask_uvm_report_error__93__verbosity, __Vtask_uvm_report_error__93__filename, __Vtask_uvm_report_error__93__line, __Vtask_uvm_report_error__93__context_name, (IData)(__Vtask_uvm_report_error__93__report_enabled_checked));
                    }
                } else if (("WO"s == ([&]() {
                                this->__VnoInFunc_get_rights(vlProcess, vlSymsp, map, __Vfunc_get_rights__98__Vfuncout);
                            }(), __Vfunc_get_rights__98__Vfuncout))) {
                    if ((("RW"s == get_access__Vfuncrtn) 
                         || ("WO"s == get_access__Vfuncrtn))) {
                        get_access__Vfuncrtn = "WO"s;
                    } else if (("RO"s == get_access__Vfuncrtn)) {
                        if ((0U != ([&]() {
                                        __Vfunc_uvm_report_enabled__99__id = "RegModel"s;
                                        __Vfunc_uvm_report_enabled__99__severity = 2U;
                                        __Vfunc_uvm_report_enabled__99__verbosity = 0U;
                                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__100__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                            = __Vfunc_get__100__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__101__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                            = __Vtask_get_root__101__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__99__verbosity, (IData)(__Vfunc_uvm_report_enabled__99__severity), __Vfunc_uvm_report_enabled__99__id, __Vtask_uvm_report_enabled__102__Vfuncout);
                                        __Vfunc_uvm_report_enabled__99__Vfuncout 
                                            = __Vtask_uvm_report_enabled__102__Vfuncout;
                                    }(), __Vfunc_uvm_report_enabled__99__Vfuncout))) {
                            __Vtask_uvm_report_error__103__report_enabled_checked = 1U;
                            __Vtask_uvm_report_error__103__context_name = ""s;
                            __Vtask_uvm_report_error__103__line = 0x000002fdU;
                            __Vtask_uvm_report_error__103__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                            __Vtask_uvm_report_error__103__verbosity = 0U;
                            __Vtask_uvm_report_error__103__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("RO memory '"s, 
                                                                                ([&]() {
                                                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__104__Vfuncout);
                                                    }(), __Vfunc_get_full_name__104__Vfuncout)), "' restricted to WO in map '"s), 
                                                                                ([&]() {
                                                VL_NULL_CHECK(map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 765)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__105__Vfuncout);
                                            }(), __Vtask_get_full_name__105__Vfuncout)), "'"s));
                            __Vtask_uvm_report_error__103__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__106__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                = __Vfunc_get__106__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__107__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                = __Vtask_get_root__107__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__103__id, __Vtask_uvm_report_error__103__message, __Vtask_uvm_report_error__103__verbosity, __Vtask_uvm_report_error__103__filename, __Vtask_uvm_report_error__103__line, __Vtask_uvm_report_error__103__context_name, (IData)(__Vtask_uvm_report_error__103__report_enabled_checked));
                        }
                    } else if ((0U != ([&]() {
                                    __Vfunc_uvm_report_enabled__109__id = "RegModel"s;
                                    __Vfunc_uvm_report_enabled__109__severity = 2U;
                                    __Vfunc_uvm_report_enabled__109__verbosity = 0U;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__110__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                        = __Vfunc_get__110__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                       ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__111__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                        = __Vtask_get_root__111__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                       ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__109__verbosity, (IData)(__Vfunc_uvm_report_enabled__109__severity), __Vfunc_uvm_report_enabled__109__id, __Vtask_uvm_report_enabled__112__Vfuncout);
                                    __Vfunc_uvm_report_enabled__109__Vfuncout 
                                        = __Vtask_uvm_report_enabled__112__Vfuncout;
                                }(), __Vfunc_uvm_report_enabled__109__Vfuncout))) {
                        __Vtask_uvm_report_error__113__report_enabled_checked = 1U;
                        __Vtask_uvm_report_error__113__context_name = ""s;
                        __Vtask_uvm_report_error__113__line = 0x00000300U;
                        __Vtask_uvm_report_error__113__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                        __Vtask_uvm_report_error__113__verbosity = 0U;
                        __Vtask_uvm_report_error__113__message 
                            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                                VL_CONCATN_NNN(
                                                                               VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, 
                                                                                ([&]() {
                                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__114__Vfuncout);
                                                }(), __Vfunc_get_full_name__114__Vfuncout)), "' has invalid access mode, '"s), get_access__Vfuncrtn), "'"s));
                        __Vtask_uvm_report_error__113__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__115__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                            = __Vfunc_get__115__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__116__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                            = __Vtask_get_root__116__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__113__id, __Vtask_uvm_report_error__113__message, __Vtask_uvm_report_error__113__verbosity, __Vtask_uvm_report_error__113__filename, __Vtask_uvm_report_error__113__line, __Vtask_uvm_report_error__113__context_name, (IData)(__Vtask_uvm_report_error__113__report_enabled_checked));
                    }
                } else if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__118__id = "RegModel"s;
                                __Vfunc_uvm_report_enabled__118__severity = 2U;
                                __Vfunc_uvm_report_enabled__118__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__119__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__119__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                   ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__120__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__120__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                   ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__118__verbosity, (IData)(__Vfunc_uvm_report_enabled__118__severity), __Vfunc_uvm_report_enabled__118__id, __Vtask_uvm_report_enabled__121__Vfuncout);
                                __Vfunc_uvm_report_enabled__118__Vfuncout 
                                    = __Vtask_uvm_report_enabled__121__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__118__Vfuncout))) {
                    __Vtask_uvm_report_error__122__report_enabled_checked = 1U;
                    __Vtask_uvm_report_error__122__context_name = ""s;
                    __Vtask_uvm_report_error__122__line = 0x00000304U;
                    __Vtask_uvm_report_error__122__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                    __Vtask_uvm_report_error__122__verbosity = 0U;
                    __Vtask_uvm_report_error__122__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Shared memory '"s, 
                                                                                ([&]() {
                                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__123__Vfuncout);
                                            }(), __Vfunc_get_full_name__123__Vfuncout)), "' is not shared in map '"s), 
                                                                           ([&]() {
                                        VL_NULL_CHECK(map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 772)
                                                                            ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__124__Vfuncout);
                                    }(), __Vtask_get_full_name__124__Vfuncout)), "'"s));
                    __Vtask_uvm_report_error__122__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__125__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__125__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__126__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__126__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__122__id, __Vtask_uvm_report_error__122__message, __Vtask_uvm_report_error__122__verbosity, __Vtask_uvm_report_error__122__filename, __Vtask_uvm_report_error__122__line, __Vtask_uvm_report_error__122__context_name, (IData)(__Vtask_uvm_report_error__122__report_enabled_checked));
                }
            }
        }
        __Vlabel0: ;
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_rights(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_rights__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_rights\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> __Vfunc_get_local_map__128__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map_info> __Vtask_get_mem_map_info__129__Vfuncout;
    // Body
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map_info> info;
    {
        if (VL_GTES_III(32, 1U, this->__PVT__m_maps.size())) {
            get_rights__Vfuncrtn = "RW"s;
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, __Vfunc_get_local_map__128__Vfuncout);
        map = __Vfunc_get_local_map__128__Vfuncout;
        if ((VlNull{} == map)) {
            get_rights__Vfuncrtn = "RW"s;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 793)->__VnoInFunc_get_mem_map_info(vlProcess, vlSymsp, 
                                                                                VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem>{this}, 1U, __Vtask_get_mem_map_info__129__Vfuncout);
        info = __Vtask_get_mem_map_info__129__Vfuncout;
        get_rights__Vfuncrtn = VL_NULL_CHECK(info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 794)
            ->__PVT__rights;
        __Vlabel0: ;
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_offset(Varchitecture__Syms* __restrict vlSymsp, QData/*63:0*/ offset, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ &get_offset__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_offset\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> __Vfunc_get_local_map__130__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map_info> __Vtask_get_mem_map_info__131__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__132__Vfuncout;
    __Vfunc_uvm_report_enabled__132__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__132__verbosity;
    __Vfunc_uvm_report_enabled__132__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__132__severity;
    __Vfunc_uvm_report_enabled__132__severity = 0;
    std::string __Vfunc_uvm_report_enabled__132__id;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__133__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__134__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__135__Vfuncout;
    __Vtask_uvm_report_enabled__135__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__136__id;
    std::string __Vtask_uvm_report_warning__136__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__136__verbosity;
    __Vtask_uvm_report_warning__136__verbosity = 0;
    std::string __Vtask_uvm_report_warning__136__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__136__line;
    __Vtask_uvm_report_warning__136__line = 0;
    std::string __Vtask_uvm_report_warning__136__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__136__report_enabled_checked;
    __Vtask_uvm_report_warning__136__report_enabled_checked = 0;
    std::string __Vfunc_get_name__137__Vfuncout;
    std::string __Vtask_get_full_name__138__Vfuncout;
    std::string __Vtask_get_full_name__139__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__140__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__141__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map_info> map_info;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> orig_map;
    {
        orig_map = map;
        this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, __Vfunc_get_local_map__130__Vfuncout);
        map = __Vfunc_get_local_map__130__Vfuncout;
        if ((VlNull{} == map)) {
            get_offset__Vfuncrtn = 0xffffffffffffffffULL;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 812)->__VnoInFunc_get_mem_map_info(vlProcess, vlSymsp, 
                                                                                VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem>{this}, 1U, __Vtask_get_mem_map_info__131__Vfuncout);
        map_info = __Vtask_get_mem_map_info__131__Vfuncout;
        if (VL_NULL_CHECK(map_info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 814)
            ->__PVT__unmapped) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__132__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__132__severity = 1U;
                            __Vfunc_uvm_report_enabled__132__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__133__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__133__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__134__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__134__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__132__verbosity, (IData)(__Vfunc_uvm_report_enabled__132__severity), __Vfunc_uvm_report_enabled__132__id, __Vtask_uvm_report_enabled__135__Vfuncout);
                            __Vfunc_uvm_report_enabled__132__Vfuncout 
                                = __Vtask_uvm_report_enabled__135__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__132__Vfuncout))) {
                __Vtask_uvm_report_warning__136__report_enabled_checked = 1U;
                __Vtask_uvm_report_warning__136__context_name = ""s;
                __Vtask_uvm_report_warning__136__line = 0x00000331U;
                __Vtask_uvm_report_warning__136__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_warning__136__verbosity = 0U;
                __Vtask_uvm_report_warning__136__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, 
                                                                                ([&]() {
                                            this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__137__Vfuncout);
                                        }(), __Vfunc_get_name__137__Vfuncout)), "' is unmapped in map '"s), 
                                                                       ((VlNull{} 
                                                                         == orig_map)
                                                                         ? 
                                                                        ([&]() {
                                        VL_NULL_CHECK(map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 817)
                                                                         ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__138__Vfuncout);
                                    }(), __Vtask_get_full_name__138__Vfuncout)
                                                                         : 
                                                                        ([&]() {
                                        VL_NULL_CHECK(orig_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 817)
                                                                         ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__139__Vfuncout);
                                    }(), __Vtask_get_full_name__139__Vfuncout))), "'"s));
                __Vtask_uvm_report_warning__136__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__140__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__140__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__141__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__141__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__136__id, __Vtask_uvm_report_warning__136__message, __Vtask_uvm_report_warning__136__verbosity, __Vtask_uvm_report_warning__136__filename, __Vtask_uvm_report_warning__136__line, __Vtask_uvm_report_warning__136__context_name, (IData)(__Vtask_uvm_report_warning__136__report_enabled_checked));
            }
            get_offset__Vfuncrtn = 0xffffffffffffffffULL;
            goto __Vlabel0;
        }
        get_offset__Vfuncrtn = VL_NULL_CHECK(map_info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 821)
            ->__PVT__offset;
        __Vlabel0: ;
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_virtual_registers(Varchitecture__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_vreg>> &regs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_virtual_registers\n"); );
    // Body
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_vreg> unnamedblk436__DOT__vreg;
    CData/*0:0*/ unnamedblk436__DOT__vreg__Vfirst;
    unnamedblk436__DOT__vreg__Vfirst = 0;
    if ((0U != this->__PVT__m_vregs.first(unnamedblk436__DOT__vreg))) {
        unnamedblk436__DOT__vreg__Vfirst = 1U;
        while (((IData)(unnamedblk436__DOT__vreg__Vfirst) 
                || (0U != this->__PVT__m_vregs.next(unnamedblk436__DOT__vreg)))) {
            unnamedblk436__DOT__vreg__Vfirst = 0U;
            regs.push_back(unnamedblk436__DOT__vreg);
        }
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_virtual_fields(Varchitecture__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_vreg_field>> &fields) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_virtual_fields\n"); );
    // Body
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_vreg> unnamedblk437__DOT__l;
    CData/*0:0*/ unnamedblk437__DOT__l__Vfirst;
    unnamedblk437__DOT__l__Vfirst = 0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_vreg> unnamedblk437__DOT__unnamedblk438__DOT__vreg;
    if ((0U != this->__PVT__m_vregs.first(unnamedblk437__DOT__l))) {
        unnamedblk437__DOT__l__Vfirst = 1U;
        while (((IData)(unnamedblk437__DOT__l__Vfirst) 
                || (0U != this->__PVT__m_vregs.next(unnamedblk437__DOT__l)))) {
            unnamedblk437__DOT__l__Vfirst = 0U;
            unnamedblk437__DOT__unnamedblk438__DOT__vreg 
                = unnamedblk437__DOT__l;
            VL_NULL_CHECK(unnamedblk437__DOT__unnamedblk438__DOT__vreg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 842)->__VnoInFunc_get_fields(vlSymsp, fields);
        }
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_vfield_by_name(Varchitecture__Syms* __restrict vlSymsp, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_vreg_field> &get_vfield_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_vfield_by_name\n"); );
    // Locals
    std::string __Vtask_get_name__145__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__146__Vfuncout;
    __Vfunc_uvm_report_enabled__146__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__146__verbosity;
    __Vfunc_uvm_report_enabled__146__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__146__severity;
    __Vfunc_uvm_report_enabled__146__severity = 0;
    std::string __Vfunc_uvm_report_enabled__146__id;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__147__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__148__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__149__Vfuncout;
    __Vtask_uvm_report_enabled__149__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__150__id;
    std::string __Vtask_uvm_report_warning__150__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__150__verbosity;
    __Vtask_uvm_report_warning__150__verbosity = 0;
    std::string __Vtask_uvm_report_warning__150__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__150__line;
    __Vtask_uvm_report_warning__150__line = 0;
    std::string __Vtask_uvm_report_warning__150__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__150__report_enabled_checked;
    __Vtask_uvm_report_warning__150__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__151__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__152__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__153__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ unnamedblk439__DOT__i;
    unnamedblk439__DOT__i = 0;
    VlQueue<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_vreg_field>> vfields;
    {
        this->__VnoInFunc_get_virtual_fields(vlSymsp, vfields);
        unnamedblk439__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk439__DOT__i, vfields.size())) {
            if ((([&]() {
                            VL_NULL_CHECK(vfields.at(unnamedblk439__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 856)
                  ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__145__Vfuncout);
                        }(), __Vtask_get_name__145__Vfuncout) 
                 == name)) {
                get_vfield_by_name__Vfuncrtn = vfields.at(unnamedblk439__DOT__i);
                goto __Vlabel0;
            }
            unnamedblk439__DOT__i = ((IData)(1U) + unnamedblk439__DOT__i);
        }
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__146__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__146__severity = 1U;
                        __Vfunc_uvm_report_enabled__146__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__147__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__147__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__148__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__148__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__146__verbosity, (IData)(__Vfunc_uvm_report_enabled__146__severity), __Vfunc_uvm_report_enabled__146__id, __Vtask_uvm_report_enabled__149__Vfuncout);
                        __Vfunc_uvm_report_enabled__146__Vfuncout 
                            = __Vtask_uvm_report_enabled__149__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__146__Vfuncout))) {
            __Vtask_uvm_report_warning__150__report_enabled_checked = 1U;
            __Vtask_uvm_report_warning__150__context_name = ""s;
            __Vtask_uvm_report_warning__150__line = 0x0000035cU;
            __Vtask_uvm_report_warning__150__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
            __Vtask_uvm_report_warning__150__verbosity = 0U;
            __Vtask_uvm_report_warning__150__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Unable to find virtual field '"s, name), "' in memory '"s), 
                                                                   ([&]() {
                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__151__Vfuncout);
                            }(), __Vfunc_get_full_name__151__Vfuncout)), "'"s));
            __Vtask_uvm_report_warning__150__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__152__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__152__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__153__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__153__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__150__id, __Vtask_uvm_report_warning__150__message, __Vtask_uvm_report_warning__150__verbosity, __Vtask_uvm_report_warning__150__filename, __Vtask_uvm_report_warning__150__line, __Vtask_uvm_report_warning__150__context_name, (IData)(__Vtask_uvm_report_warning__150__report_enabled_checked));
        }
        get_vfield_by_name__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_vreg_by_name(Varchitecture__Syms* __restrict vlSymsp, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_vreg> &get_vreg_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_vreg_by_name\n"); );
    // Locals
    std::string __Vtask_get_name__155__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__156__Vfuncout;
    __Vfunc_uvm_report_enabled__156__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__156__verbosity;
    __Vfunc_uvm_report_enabled__156__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__156__severity;
    __Vfunc_uvm_report_enabled__156__severity = 0;
    std::string __Vfunc_uvm_report_enabled__156__id;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__157__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__158__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__159__Vfuncout;
    __Vtask_uvm_report_enabled__159__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__160__id;
    std::string __Vtask_uvm_report_warning__160__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__160__verbosity;
    __Vtask_uvm_report_warning__160__verbosity = 0;
    std::string __Vtask_uvm_report_warning__160__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__160__line;
    __Vtask_uvm_report_warning__160__line = 0;
    std::string __Vtask_uvm_report_warning__160__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__160__report_enabled_checked;
    __Vtask_uvm_report_warning__160__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__161__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__162__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__163__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_vreg> unnamedblk440__DOT__l;
    CData/*0:0*/ unnamedblk440__DOT__l__Vfirst;
    unnamedblk440__DOT__l__Vfirst = 0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_vreg> unnamedblk440__DOT__unnamedblk441__DOT__vreg;
    {
        if ((0U != this->__PVT__m_vregs.first(unnamedblk440__DOT__l))) {
            unnamedblk440__DOT__l__Vfirst = 1U;
            while (((IData)(unnamedblk440__DOT__l__Vfirst) 
                    || (0U != this->__PVT__m_vregs.next(unnamedblk440__DOT__l)))) {
                unnamedblk440__DOT__l__Vfirst = 0U;
                unnamedblk440__DOT__unnamedblk441__DOT__vreg 
                    = unnamedblk440__DOT__l;
                if ((([&]() {
                                VL_NULL_CHECK(unnamedblk440__DOT__unnamedblk441__DOT__vreg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 872)
                      ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__155__Vfuncout);
                            }(), __Vtask_get_name__155__Vfuncout) 
                     == name)) {
                    get_vreg_by_name__Vfuncrtn = unnamedblk440__DOT__unnamedblk441__DOT__vreg;
                    goto __Vlabel0;
                }
            }
        }
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__156__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__156__severity = 1U;
                        __Vfunc_uvm_report_enabled__156__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__157__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__157__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__158__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__158__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__156__verbosity, (IData)(__Vfunc_uvm_report_enabled__156__severity), __Vfunc_uvm_report_enabled__156__id, __Vtask_uvm_report_enabled__159__Vfuncout);
                        __Vfunc_uvm_report_enabled__156__Vfuncout 
                            = __Vtask_uvm_report_enabled__159__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__156__Vfuncout))) {
            __Vtask_uvm_report_warning__160__report_enabled_checked = 1U;
            __Vtask_uvm_report_warning__160__context_name = ""s;
            __Vtask_uvm_report_warning__160__line = 0x0000036dU;
            __Vtask_uvm_report_warning__160__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
            __Vtask_uvm_report_warning__160__verbosity = 0U;
            __Vtask_uvm_report_warning__160__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Unable to find virtual register '"s, name), "' in memory '"s), 
                                                                   ([&]() {
                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__161__Vfuncout);
                            }(), __Vfunc_get_full_name__161__Vfuncout)), "'"s));
            __Vtask_uvm_report_warning__160__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__162__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__162__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__163__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__163__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__160__id, __Vtask_uvm_report_warning__160__message, __Vtask_uvm_report_warning__160__verbosity, __Vtask_uvm_report_warning__160__filename, __Vtask_uvm_report_warning__160__line, __Vtask_uvm_report_warning__160__context_name, (IData)(__Vtask_uvm_report_warning__160__report_enabled_checked));
        }
        get_vreg_by_name__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_vreg_by_offset(Varchitecture__Syms* __restrict vlSymsp, QData/*63:0*/ offset, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_vreg> &get_vreg_by_offset__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_vreg_by_offset\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__165__Vfuncout;
    __Vfunc_uvm_report_enabled__165__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__165__verbosity;
    __Vfunc_uvm_report_enabled__165__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__165__severity;
    __Vfunc_uvm_report_enabled__165__severity = 0;
    std::string __Vfunc_uvm_report_enabled__165__id;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__166__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__167__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__168__Vfuncout;
    __Vtask_uvm_report_enabled__168__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__169__id;
    std::string __Vtask_uvm_report_error__169__message;
    IData/*31:0*/ __Vtask_uvm_report_error__169__verbosity;
    __Vtask_uvm_report_error__169__verbosity = 0;
    std::string __Vtask_uvm_report_error__169__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__169__line;
    __Vtask_uvm_report_error__169__line = 0;
    std::string __Vtask_uvm_report_error__169__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__169__report_enabled_checked;
    __Vtask_uvm_report_error__169__report_enabled_checked = 0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__170__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__171__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__165__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__165__severity = 2U;
                    __Vfunc_uvm_report_enabled__165__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__166__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__166__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__167__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__167__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__165__verbosity, (IData)(__Vfunc_uvm_report_enabled__165__severity), __Vfunc_uvm_report_enabled__165__id, __Vtask_uvm_report_enabled__168__Vfuncout);
                    __Vfunc_uvm_report_enabled__165__Vfuncout 
                        = __Vtask_uvm_report_enabled__168__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__165__Vfuncout))) {
        __Vtask_uvm_report_error__169__report_enabled_checked = 1U;
        __Vtask_uvm_report_error__169__context_name = ""s;
        __Vtask_uvm_report_error__169__line = 0x00000377U;
        __Vtask_uvm_report_error__169__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
        __Vtask_uvm_report_error__169__verbosity = 0U;
        __Vtask_uvm_report_error__169__message = "uvm_mem::get_vreg_by_offset() not yet implemented"s;
        __Vtask_uvm_report_error__169__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__170__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__170__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__171__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__171__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__169__id, __Vtask_uvm_report_error__169__message, __Vtask_uvm_report_error__169__verbosity, __Vtask_uvm_report_error__169__filename, __Vtask_uvm_report_error__169__line, __Vtask_uvm_report_error__169__context_name, (IData)(__Vtask_uvm_report_error__169__report_enabled_checked));
    }
    get_vreg_by_offset__Vfuncrtn = VlNull{};
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_addresses(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, QData/*63:0*/ offset, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> map, VlQueue<QData/*63:0*/> &addr, IData/*31:0*/ &get_addresses__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_addresses\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> __Vfunc_get_local_map__173__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map_info> __Vtask_get_mem_map_info__174__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__175__Vfuncout;
    __Vfunc_uvm_report_enabled__175__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__175__verbosity;
    __Vfunc_uvm_report_enabled__175__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__175__severity;
    __Vfunc_uvm_report_enabled__175__severity = 0;
    std::string __Vfunc_uvm_report_enabled__175__id;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__176__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__177__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__178__Vfuncout;
    __Vtask_uvm_report_enabled__178__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__179__id;
    std::string __Vtask_uvm_report_warning__179__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__179__verbosity;
    __Vtask_uvm_report_warning__179__verbosity = 0;
    std::string __Vtask_uvm_report_warning__179__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__179__line;
    __Vtask_uvm_report_warning__179__line = 0;
    std::string __Vtask_uvm_report_warning__179__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__179__report_enabled_checked;
    __Vtask_uvm_report_warning__179__report_enabled_checked = 0;
    std::string __Vfunc_get_name__180__Vfuncout;
    std::string __Vtask_get_full_name__181__Vfuncout;
    std::string __Vtask_get_full_name__182__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__183__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__184__Vfuncout;
    IData/*31:0*/ __Vtask_get_n_bytes__186__Vfuncout;
    __Vtask_get_n_bytes__186__Vfuncout = 0;
    // Body
    IData/*31:0*/ unnamedblk442__DOT__i;
    unnamedblk442__DOT__i = 0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map_info> map_info;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> system_map;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> orig_map;
    {
        orig_map = map;
        this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, __Vfunc_get_local_map__173__Vfuncout);
        map = __Vfunc_get_local_map__173__Vfuncout;
        if ((VlNull{} == map)) {
            get_addresses__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 908)->__VnoInFunc_get_mem_map_info(vlProcess, vlSymsp, 
                                                                                VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem>{this}, 1U, __Vtask_get_mem_map_info__174__Vfuncout);
        map_info = __Vtask_get_mem_map_info__174__Vfuncout;
        if (VL_NULL_CHECK(map_info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 910)
            ->__PVT__unmapped) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__175__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__175__severity = 1U;
                            __Vfunc_uvm_report_enabled__175__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__176__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__176__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__177__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__177__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__175__verbosity, (IData)(__Vfunc_uvm_report_enabled__175__severity), __Vfunc_uvm_report_enabled__175__id, __Vtask_uvm_report_enabled__178__Vfuncout);
                            __Vfunc_uvm_report_enabled__175__Vfuncout 
                                = __Vtask_uvm_report_enabled__178__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__175__Vfuncout))) {
                __Vtask_uvm_report_warning__179__report_enabled_checked = 1U;
                __Vtask_uvm_report_warning__179__context_name = ""s;
                __Vtask_uvm_report_warning__179__line = 0x00000391U;
                __Vtask_uvm_report_warning__179__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_warning__179__verbosity = 0U;
                __Vtask_uvm_report_warning__179__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, 
                                                                                ([&]() {
                                            this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__180__Vfuncout);
                                        }(), __Vfunc_get_name__180__Vfuncout)), "' is unmapped in map '"s), 
                                                                       ((VlNull{} 
                                                                         == orig_map)
                                                                         ? 
                                                                        ([&]() {
                                        VL_NULL_CHECK(map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 913)
                                                                         ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__181__Vfuncout);
                                    }(), __Vtask_get_full_name__181__Vfuncout)
                                                                         : 
                                                                        ([&]() {
                                        VL_NULL_CHECK(orig_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 913)
                                                                         ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__182__Vfuncout);
                                    }(), __Vtask_get_full_name__182__Vfuncout))), "'"s));
                __Vtask_uvm_report_warning__179__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__183__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__183__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__184__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__184__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__179__id, __Vtask_uvm_report_warning__179__message, __Vtask_uvm_report_warning__179__verbosity, __Vtask_uvm_report_warning__179__filename, __Vtask_uvm_report_warning__179__line, __Vtask_uvm_report_warning__179__context_name, (IData)(__Vtask_uvm_report_warning__179__report_enabled_checked));
            }
            get_addresses__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        addr = VL_NULL_CHECK(map_info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 917)
            ->__PVT__addr;
        unnamedblk442__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk442__DOT__i, addr.size())) {
            addr.atWrite(unnamedblk442__DOT__i) = (addr.at(unnamedblk442__DOT__i) 
                                                   + 
                                                   ((QData)((IData)(
                                                                    VL_NULL_CHECK(map_info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 920)
                                                                    ->__PVT__mem_range[0U])) 
                                                    * offset));
            unnamedblk442__DOT__i = ((IData)(1U) + unnamedblk442__DOT__i);
        }
        VL_NULL_CHECK(map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 922)->__VnoInFunc_get_n_bytes(vlSymsp, 1U, __Vtask_get_n_bytes__186__Vfuncout);
        get_addresses__Vfuncrtn = __Vtask_get_n_bytes__186__Vfuncout;
        __Vlabel0: ;
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_address(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, QData/*63:0*/ offset, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ &get_address__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_address\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_addresses__187__Vfuncout;
    __Vtask_get_addresses__187__Vfuncout = 0;
    // Body
    VlQueue<QData/*63:0*/> addr;
    addr.atDefault() = 0;
    this->__VnoInFunc_get_addresses(vlProcess, vlSymsp, offset, map, addr, __Vtask_get_addresses__187__Vfuncout);
    get_address__Vfuncrtn = addr.at(0U);
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_size(Varchitecture__Syms* __restrict vlSymsp, QData/*63:0*/ &get_size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_size\n"); );
    // Body
    get_size__Vfuncrtn = this->__PVT__m_size;
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_n_bits(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bits__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_n_bits\n"); );
    // Body
    get_n_bits__Vfuncrtn = this->__PVT__m_n_bits;
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_n_bytes(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bytes__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_n_bytes\n"); );
    // Body
    get_n_bytes__Vfuncrtn = ((IData)(1U) + VL_SHIFTR_III(32,32,32, 
                                                         (this->__PVT__m_n_bits 
                                                          - (IData)(1U)), 3U));
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_build_coverage(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ models, IData/*31:0*/ &build_coverage__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_build_coverage\n"); );
    // Locals
    CData/*0:0*/ __Vtask_read_by_name__188__Vfuncout;
    __Vtask_read_by_name__188__Vfuncout = 0;
    IData/*31:0*/ __Vtask_read_by_name__188__val;
    __Vtask_read_by_name__188__val = 0;
    std::string __Vfunc_get_full_name__189__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    build_coverage__Vfuncrtn = 0U;
    __Vtask_read_by_name__188__val = build_coverage__Vfuncrtn;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz181__Vclpkg.__VnoInFunc_read_by_name(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("uvm_reg::"s, 
                                                                                ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__189__Vfuncout);
                    }(), __Vfunc_get_full_name__189__Vfuncout))), "include_coverage"s, __Vtask_read_by_name__188__val, 
                                                                                VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem>{this}, __Vtask_read_by_name__188__Vfuncout);
    build_coverage__Vfuncrtn = __Vtask_read_by_name__188__val;
    build_coverage__Vfuncrtn = (build_coverage__Vfuncrtn 
                                & models);
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_add_coverage(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ models) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_add_coverage\n"); );
    // Body
    this->__PVT__m_has_cover = (this->__PVT__m_has_cover 
                                | models);
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_has_coverage(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ models, CData/*0:0*/ &has_coverage__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_has_coverage\n"); );
    // Body
    has_coverage__Vfuncrtn = ((this->__PVT__m_has_cover 
                               & models) == models);
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_set_coverage(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ is_on, IData/*31:0*/ &set_coverage__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_set_coverage\n"); );
    // Body
    {
        if ((0U == is_on)) {
            this->__PVT__m_cover_on = is_on;
            set_coverage__Vfuncrtn = this->__PVT__m_cover_on;
            goto __Vlabel0;
        }
        this->__PVT__m_cover_on = (this->__PVT__m_has_cover 
                                   & is_on);
        set_coverage__Vfuncrtn = this->__PVT__m_cover_on;
        __Vlabel0: ;
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_coverage(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ is_on, CData/*0:0*/ &get_coverage__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_coverage\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_has_coverage__190__Vfuncout;
    __Vfunc_has_coverage__190__Vfuncout = 0;
    // Body
    {
        if ((1U & (~ ([&]() {
                            this->__VnoInFunc_has_coverage(vlSymsp, is_on, __Vfunc_has_coverage__190__Vfuncout);
                        }(), (IData)(__Vfunc_has_coverage__190__Vfuncout))))) {
            get_coverage__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        get_coverage__Vfuncrtn = ((this->__PVT__m_cover_on 
                                   & is_on) == is_on);
        __Vlabel0: ;
    }
}

VlCoroutine Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_write(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_write\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> __Vfunc_create__191__Vfuncout;
    std::string __Vfunc_get_full_name__192__Vfuncout;
    // Body
    VL_KEEP_THIS;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> rw;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi114__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "mem_write"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__192__Vfuncout);
                }(), __Vfunc_get_full_name__192__Vfuncout)), __Vfunc_create__191__Vfuncout);
    rw = __Vfunc_create__191__Vfuncout;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1039)->__PVT__element 
        = VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem>{this};
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1040)->__PVT__element_kind = 2U;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1041)->__PVT__kind = 1U;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1042)->__PVT__offset 
        = offset;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1043)->__PVT__value.atWrite(0U) 
        = value;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1044)->__PVT__path 
        = path;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1045)->__PVT__map 
        = map;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1046)->__PVT__parent 
        = parent;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1047)->__PVT__prior 
        = prior;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1048)->__PVT__extension 
        = extension;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1049)->__PVT__fname 
        = fname;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1050)->__PVT__lineno 
        = lineno;
    co_await this->__VnoInFunc_do_write(vlProcess, vlSymsp, rw);
    status = VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1054)
        ->__PVT__status;
}

VlCoroutine Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_read(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_read\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> __Vfunc_create__194__Vfuncout;
    std::string __Vfunc_get_full_name__195__Vfuncout;
    // Body
    VL_KEEP_THIS;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> rw;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi114__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "mem_read"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__195__Vfuncout);
                }(), __Vfunc_get_full_name__195__Vfuncout)), __Vfunc_create__194__Vfuncout);
    rw = __Vfunc_create__194__Vfuncout;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1074)->__PVT__element 
        = VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem>{this};
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1075)->__PVT__element_kind = 2U;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1076)->__PVT__kind = 0U;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1077)->__PVT__value.atWrite(0U) = 0ULL;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1078)->__PVT__offset 
        = offset;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1079)->__PVT__path 
        = path;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1080)->__PVT__map 
        = map;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1081)->__PVT__parent 
        = parent;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1082)->__PVT__prior 
        = prior;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1083)->__PVT__extension 
        = extension;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1084)->__PVT__fname 
        = fname;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1085)->__PVT__lineno 
        = lineno;
    co_await this->__VnoInFunc_do_read(vlProcess, vlSymsp, rw);
    status = VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1089)
        ->__PVT__status;
    value = VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1090)
        ->__PVT__value.at(0U);
}

VlCoroutine Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_burst_write(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, VlQueue<QData/*63:0*/> value, IData/*31:0*/ path, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_burst_write\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> __Vfunc_create__197__Vfuncout;
    std::string __Vfunc_get_full_name__198__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> rw;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi114__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "mem_burst_write"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__198__Vfuncout);
                }(), __Vfunc_get_full_name__198__Vfuncout)), __Vfunc_create__197__Vfuncout);
    rw = __Vfunc_create__197__Vfuncout;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1110)->__PVT__element 
        = VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem>{this};
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1111)->__PVT__element_kind = 2U;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1112)->__PVT__kind = 3U;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1113)->__PVT__offset 
        = offset;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1114)->__PVT__value 
        = value;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1115)->__PVT__path 
        = path;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1116)->__PVT__map 
        = map;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1117)->__PVT__parent 
        = parent;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1118)->__PVT__prior 
        = prior;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1119)->__PVT__extension 
        = extension;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1120)->__PVT__fname 
        = fname;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1121)->__PVT__lineno 
        = lineno;
    co_await this->__VnoInFunc_do_write(vlProcess, vlSymsp, rw);
    status = VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1125)
        ->__PVT__status;
}

VlCoroutine Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_burst_read(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, VlQueue<QData/*63:0*/> &value, IData/*31:0*/ path, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_burst_read\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> __Vfunc_create__200__Vfuncout;
    std::string __Vfunc_get_full_name__201__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> rw;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi114__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "mem_burst_read"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__201__Vfuncout);
                }(), __Vfunc_get_full_name__201__Vfuncout)), __Vfunc_create__200__Vfuncout);
    rw = __Vfunc_create__200__Vfuncout;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1145)->__PVT__element 
        = VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem>{this};
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1146)->__PVT__element_kind = 2U;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1147)->__PVT__kind = 2U;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1148)->__PVT__offset 
        = offset;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1149)->__PVT__value 
        = value;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1150)->__PVT__path 
        = path;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1151)->__PVT__map 
        = map;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1152)->__PVT__parent 
        = parent;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1153)->__PVT__prior 
        = prior;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1154)->__PVT__extension 
        = extension;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1155)->__PVT__fname 
        = fname;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1156)->__PVT__lineno 
        = lineno;
    co_await this->__VnoInFunc_do_read(vlProcess, vlSymsp, rw);
    status = VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1160)
        ->__PVT__status;
    value = VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1161)
        ->__PVT__value;
}

VlCoroutine Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_write(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_write\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_Xcheck_accessX__204__Vfuncout;
    __Vfunc_Xcheck_accessX__204__Vfuncout = 0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map_info> __Vfunc_Xcheck_accessX__204__map_info;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_first__206__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_next__208__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> __Vtask_get_root_map__209__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequencer_base> __Vtask_get_sequencer__210__Vfuncout;
    std::string __Vfunc_get_access__215__Vfuncout;
    std::string __Vfunc_get_access__216__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_backdoor> __Vfunc_get_backdoor__217__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_first__221__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_next__223__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__224__Vfuncout;
    __Vfunc_uvm_report_enabled__224__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__224__verbosity;
    __Vfunc_uvm_report_enabled__224__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__224__severity;
    __Vfunc_uvm_report_enabled__224__severity = 0;
    std::string __Vfunc_uvm_report_enabled__224__id;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__225__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__226__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__227__Vfuncout;
    __Vtask_uvm_report_enabled__227__Vfuncout = 0;
    std::string __Vtask_get_full_name__228__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_backdoor> __Vfunc_get_backdoor__229__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__230__Vfuncout;
    __Vfunc_uvm_report_enabled__230__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__230__verbosity;
    __Vfunc_uvm_report_enabled__230__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__230__severity;
    __Vfunc_uvm_report_enabled__230__severity = 0;
    std::string __Vfunc_uvm_report_enabled__230__id;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__231__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__232__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__233__Vfuncout;
    __Vtask_uvm_report_enabled__233__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__234__id;
    std::string __Vtask_uvm_report_info__234__message;
    IData/*31:0*/ __Vtask_uvm_report_info__234__verbosity;
    __Vtask_uvm_report_info__234__verbosity = 0;
    std::string __Vtask_uvm_report_info__234__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__234__line;
    __Vtask_uvm_report_info__234__line = 0;
    std::string __Vtask_uvm_report_info__234__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__234__report_enabled_checked;
    __Vtask_uvm_report_info__234__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__235__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__236__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__237__Vfuncout;
    CData/*31:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    // Body
    VL_KEEP_THIS;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk443__DOT__cb;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> unnamedblk444__DOT__system_map;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_frontdoor> unnamedblk444__DOT__unnamedblk445__DOT__fd;
    QData/*63:0*/ unnamedblk444__DOT__unnamedblk446__DOT__idx;
    unnamedblk444__DOT__unnamedblk446__DOT__idx = 0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_backdoor> unnamedblk447__DOT__bkdr;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk448__DOT__cb;
    std::string unnamedblk449__DOT__path_s;
    std::string unnamedblk449__DOT__value_s;
    std::string unnamedblk449__DOT__pre_s;
    std::string unnamedblk449__DOT__range_s;
    IData/*31:0*/ unnamedblk449__DOT__unnamedblk450__DOT__i;
    unnamedblk449__DOT__unnamedblk450__DOT__i = 0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_callback_iter__pi96> cbs;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map_info> map_info;
    {
        cbs = VL_NEW(Varchitecture_uvm_pkg__03a__03auvm_callback_iter__pi96, vlSymsp, 
                     VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem>{this});
        this->__PVT__m_fname = VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1173)
            ->__PVT__fname;
        this->__PVT__m_lineno = VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1174)
            ->__PVT__lineno;
        if ((1U & (~ ([&]() {
                            this->__VnoInFunc_Xcheck_accessX(vlProcess, vlSymsp, rw, __Vfunc_Xcheck_accessX__204__map_info, __Vfunc_Xcheck_accessX__204__Vfuncout);
                            map_info = __Vfunc_Xcheck_accessX__204__map_info;
                        }(), (IData)(__Vfunc_Xcheck_accessX__204__Vfuncout))))) {
            goto __Vlabel0;
        }
        this->__PVT__m_write_in_progress = 1U;
        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1181)->__PVT__status = 0U;
        this->__VnoInFunc_pre_write(vlSymsp, rw);
        VL_NULL_CHECK(cbs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1185)->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__206__Vfuncout);
        unnamedblk443__DOT__cb = __Vtask_first__206__Vfuncout;
        while ((VlNull{} != unnamedblk443__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk443__DOT__cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1186)->__VnoInFunc_pre_write(vlProcess, vlSymsp, rw);
            VL_NULL_CHECK(cbs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1185)->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__208__Vfuncout);
            unnamedblk443__DOT__cb = __Vtask_next__208__Vfuncout;
        }
        if ((0U != VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1188)
             ->__PVT__status)) {
            this->__PVT__m_write_in_progress = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1194)->__PVT__status = 1U;
        if ((0U == VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1197)
             ->__PVT__path)) {
            VL_NULL_CHECK(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1199)
                          ->__PVT__local_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1199)->__VnoInFunc_get_root_map(vlSymsp, __Vtask_get_root_map__209__Vfuncout);
            unnamedblk444__DOT__system_map = __Vtask_get_root_map__209__Vfuncout;
            if ((VlNull{} != VL_NULL_CHECK(map_info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1201)
                 ->__PVT__frontdoor)) {
                unnamedblk444__DOT__unnamedblk445__DOT__fd 
                    = VL_NULL_CHECK(map_info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1202)
                    ->__PVT__frontdoor;
                VL_NULL_CHECK(unnamedblk444__DOT__unnamedblk445__DOT__fd, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1203)->__PVT__rw_info 
                    = rw;
                if ((VlNull{} == VL_NULL_CHECK(unnamedblk444__DOT__unnamedblk445__DOT__fd, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1204)
                     ->__PVT__sequencer)) {
                    VL_NULL_CHECK(unnamedblk444__DOT__system_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1205)->__VnoInFunc_get_sequencer(vlSymsp, 1U, __Vtask_get_sequencer__210__Vfuncout);
                    VL_NULL_CHECK(unnamedblk444__DOT__unnamedblk445__DOT__fd, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1205)->__PVT__sequencer 
                        = __Vtask_get_sequencer__210__Vfuncout;
                }
                co_await VL_NULL_CHECK(unnamedblk444__DOT__unnamedblk445__DOT__fd, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1206)->__VnoInFunc_start(vlProcess, vlSymsp, VL_NULL_CHECK(unnamedblk444__DOT__unnamedblk445__DOT__fd, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1206)
                                                                                ->__PVT__sequencer, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1206)
                                                                                ->__PVT__parent, 0xffffffffU, 1U);
            } else {
                co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1209)
                                       ->__PVT__local_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1209)->__VnoInFunc_do_write(vlProcess, vlSymsp, rw);
            }
            if ((1U != VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1212)
                 ->__PVT__status)) {
                unnamedblk444__DOT__unnamedblk446__DOT__idx 
                    = VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1213)
                    ->__PVT__offset;
                while ((unnamedblk444__DOT__unnamedblk446__DOT__idx 
                        <= (VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1214)
                            ->__PVT__offset + (QData)((IData)(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1214)
                                                              ->__PVT__value.size()))))) {
                    this->__VnoInFunc_XsampleX(vlSymsp, 
                                               ((QData)((IData)(
                                                                VL_NULL_CHECK(map_info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1216)
                                                                ->__PVT__mem_range[0U])) 
                                                * unnamedblk444__DOT__unnamedblk446__DOT__idx), 0U, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1216)
                                               ->__PVT__map);
                    VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1217)->__VnoInFunc_XsampleX(vlSymsp, 
                                                                                (VL_NULL_CHECK(map_info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1217)
                                                                                ->__PVT__offset 
                                                                                + 
                                                                                ((QData)((IData)(
                                                                                VL_NULL_CHECK(map_info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1218)
                                                                                ->__PVT__mem_range[0U])) 
                                                                                * unnamedblk444__DOT__unnamedblk446__DOT__idx)), 0U, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1219)
                                                                                ->__PVT__map);
                    unnamedblk444__DOT__unnamedblk446__DOT__idx 
                        = (1ULL + unnamedblk444__DOT__unnamedblk446__DOT__idx);
                }
            }
        } else if ((("RW"s == ([&]() {
                            this->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1226)
                                                         ->__PVT__map, __Vfunc_get_access__215__Vfuncout);
                        }(), __Vfunc_get_access__215__Vfuncout)) 
                    || ("WO"s == ([&]() {
                            this->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1226)
                                                         ->__PVT__map, __Vfunc_get_access__216__Vfuncout);
                        }(), __Vfunc_get_access__216__Vfuncout)))) {
            this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __Vfunc_get_backdoor__217__Vfuncout);
            unnamedblk447__DOT__bkdr = __Vfunc_get_backdoor__217__Vfuncout;
            if ((VlNull{} != unnamedblk447__DOT__bkdr)) {
                VL_NULL_CHECK(unnamedblk447__DOT__bkdr, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1229)->__VnoInFunc_write(vlProcess, vlSymsp, rw);
            } else {
                this->__VnoInFunc_backdoor_write(vlProcess, vlSymsp, rw);
            }
        } else {
            VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1234)->__PVT__status = 1U;
        }
        this->__VnoInFunc_post_write(vlSymsp, rw);
        VL_NULL_CHECK(cbs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1239)->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__221__Vfuncout);
        unnamedblk448__DOT__cb = __Vtask_first__221__Vfuncout;
        while ((VlNull{} != unnamedblk448__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk448__DOT__cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1240)->__VnoInFunc_post_write(vlSymsp, rw);
            VL_NULL_CHECK(cbs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1239)->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__223__Vfuncout);
            unnamedblk448__DOT__cb = __Vtask_next__223__Vfuncout;
        }
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__224__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__224__severity = 0U;
                        __Vfunc_uvm_report_enabled__224__verbosity = 0x0000012cU;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__225__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__225__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__226__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__226__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__224__verbosity, (IData)(__Vfunc_uvm_report_enabled__224__severity), __Vfunc_uvm_report_enabled__224__id, __Vtask_uvm_report_enabled__227__Vfuncout);
                        __Vfunc_uvm_report_enabled__224__Vfuncout 
                            = __Vtask_uvm_report_enabled__227__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__224__Vfuncout))) {
            __Vtemp_3 = (VlNull{} != ([&]() {
                        this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __Vfunc_get_backdoor__229__Vfuncout);
                    }(), __Vfunc_get_backdoor__229__Vfuncout));
            __Vtemp_4[0U] = 0x646f6f72U;
            __Vtemp_4[1U] = 0x6261636bU;
            if (__Vtemp_3) {
                __Vtemp_4[2U] = 0x73657220U;
                __Vtemp_4[3U] = 0x00000075U;
            } else {
                __Vtemp_4[2U] = 0x44504920U;
                __Vtemp_4[3U] = 0U;
            }
            unnamedblk449__DOT__path_s = ((0U == VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1245)
                                           ->__PVT__path)
                                           ? ((VlNull{} 
                                               != VL_NULL_CHECK(map_info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1246)
                                               ->__PVT__frontdoor)
                                               ? "user frontdoor"s
                                               : VL_CONCATN_NNN("map "s, 
                                                                ([&]() {
                                VL_NULL_CHECK(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1247)
                                              ->__PVT__map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1247)
                                                                 ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__228__Vfuncout);
                            }(), __Vtask_get_full_name__228__Vfuncout)))
                                           : VL_CVT_PACK_STR_NW(4, __Vtemp_4));
            if (VL_LTS_III(32, 1U, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1251)
                           ->__PVT__value.size())) {
                unnamedblk449__DOT__value_s = "='{"s;
                unnamedblk449__DOT__pre_s = "Burst "s;
                unnamedblk449__DOT__unnamedblk450__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk449__DOT__unnamedblk450__DOT__i, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1254)
                                  ->__PVT__value.size())) {
                    unnamedblk449__DOT__value_s = VL_CONCATN_NNN(unnamedblk449__DOT__value_s, VL_SFORMATF_N_NX("%0x,",0,
                                                                                64,
                                                                                VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1255)
                                                                                ->__PVT__value.at(unnamedblk449__DOT__unnamedblk450__DOT__i)) );
                    unnamedblk449__DOT__unnamedblk450__DOT__i 
                        = ((IData)(1U) + unnamedblk449__DOT__unnamedblk450__DOT__i);
                }
                unnamedblk449__DOT__value_s = VL_PUTC_N(unnamedblk449__DOT__value_s, 
                                                        (VL_LEN_IN(unnamedblk449__DOT__value_s) 
                                                         - (IData)(1U)), 0x7dU);
                unnamedblk449__DOT__range_s = VL_SFORMATF_N_NX("[%0#:%0#]",0,
                                                               64,
                                                               VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1257)
                                                               ->__PVT__offset,
                                                               64,
                                                               (VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1257)
                                                                ->__PVT__offset 
                                                                + (QData)((IData)(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1257)
                                                                                ->__PVT__value.size())))) ;
            } else {
                unnamedblk449__DOT__value_s = VL_SFORMATF_N_NX("=%0x",0,
                                                               64,
                                                               VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1260)
                                                               ->__PVT__value.at(0U)) ;
                unnamedblk449__DOT__range_s = VL_SFORMATF_N_NX("[%0#]",0,
                                                               64,
                                                               VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1261)
                                                               ->__PVT__offset) ;
            }
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__230__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__230__severity = 0U;
                            __Vfunc_uvm_report_enabled__230__verbosity = 0x0000012cU;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__231__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__231__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__232__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__232__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__230__verbosity, (IData)(__Vfunc_uvm_report_enabled__230__severity), __Vfunc_uvm_report_enabled__230__id, __Vtask_uvm_report_enabled__233__Vfuncout);
                            __Vfunc_uvm_report_enabled__230__Vfuncout 
                                = __Vtask_uvm_report_enabled__233__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__230__Vfuncout))) {
                __Vtask_uvm_report_info__234__report_enabled_checked = 1U;
                __Vtask_uvm_report_info__234__context_name = ""s;
                __Vtask_uvm_report_info__234__line = 0x000004f1U;
                __Vtask_uvm_report_info__234__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_info__234__verbosity = 0x0000012cU;
                __Vtask_uvm_report_info__234__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(unnamedblk449__DOT__pre_s, "Wrote memory via "s), unnamedblk449__DOT__path_s), ": "s), 
                                                                                ([&]() {
                                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__235__Vfuncout);
                                    }(), __Vfunc_get_full_name__235__Vfuncout)), unnamedblk449__DOT__range_s), unnamedblk449__DOT__value_s));
                __Vtask_uvm_report_info__234__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__236__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__236__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__237__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__237__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__234__id, __Vtask_uvm_report_info__234__message, __Vtask_uvm_report_info__234__verbosity, __Vtask_uvm_report_info__234__filename, __Vtask_uvm_report_info__234__line, __Vtask_uvm_report_info__234__context_name, (IData)(__Vtask_uvm_report_info__234__report_enabled_checked));
            }
        }
        this->__PVT__m_write_in_progress = 0U;
        __Vlabel0: ;
    }
}

VlCoroutine Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_read(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_read\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_Xcheck_accessX__240__Vfuncout;
    __Vfunc_Xcheck_accessX__240__Vfuncout = 0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map_info> __Vfunc_Xcheck_accessX__240__map_info;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_first__242__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_next__244__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> __Vtask_get_root_map__245__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequencer_base> __Vtask_get_sequencer__246__Vfuncout;
    std::string __Vfunc_get_access__251__Vfuncout;
    std::string __Vfunc_get_access__252__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_backdoor> __Vfunc_get_backdoor__253__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_first__257__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_next__259__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__260__Vfuncout;
    __Vfunc_uvm_report_enabled__260__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__260__verbosity;
    __Vfunc_uvm_report_enabled__260__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__260__severity;
    __Vfunc_uvm_report_enabled__260__severity = 0;
    std::string __Vfunc_uvm_report_enabled__260__id;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__261__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__262__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__263__Vfuncout;
    __Vtask_uvm_report_enabled__263__Vfuncout = 0;
    std::string __Vtask_get_full_name__264__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_backdoor> __Vfunc_get_backdoor__265__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__266__Vfuncout;
    __Vfunc_uvm_report_enabled__266__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__266__verbosity;
    __Vfunc_uvm_report_enabled__266__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__266__severity;
    __Vfunc_uvm_report_enabled__266__severity = 0;
    std::string __Vfunc_uvm_report_enabled__266__id;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__267__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__268__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__269__Vfuncout;
    __Vtask_uvm_report_enabled__269__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__270__id;
    std::string __Vtask_uvm_report_info__270__message;
    IData/*31:0*/ __Vtask_uvm_report_info__270__verbosity;
    __Vtask_uvm_report_info__270__verbosity = 0;
    std::string __Vtask_uvm_report_info__270__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__270__line;
    __Vtask_uvm_report_info__270__line = 0;
    std::string __Vtask_uvm_report_info__270__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__270__report_enabled_checked;
    __Vtask_uvm_report_info__270__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__271__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__272__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__273__Vfuncout;
    CData/*31:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    // Body
    VL_KEEP_THIS;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk451__DOT__cb;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> unnamedblk452__DOT__system_map;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_frontdoor> unnamedblk452__DOT__unnamedblk453__DOT__fd;
    QData/*63:0*/ unnamedblk452__DOT__unnamedblk454__DOT__idx;
    unnamedblk452__DOT__unnamedblk454__DOT__idx = 0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_backdoor> unnamedblk455__DOT__bkdr;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk456__DOT__cb;
    std::string unnamedblk457__DOT__path_s;
    std::string unnamedblk457__DOT__value_s;
    std::string unnamedblk457__DOT__pre_s;
    std::string unnamedblk457__DOT__range_s;
    IData/*31:0*/ unnamedblk457__DOT__unnamedblk458__DOT__i;
    unnamedblk457__DOT__unnamedblk458__DOT__i = 0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_callback_iter__pi96> cbs;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map_info> map_info;
    {
        cbs = VL_NEW(Varchitecture_uvm_pkg__03a__03auvm_callback_iter__pi96, vlSymsp, 
                     VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem>{this});
        this->__PVT__m_fname = VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1280)
            ->__PVT__fname;
        this->__PVT__m_lineno = VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1281)
            ->__PVT__lineno;
        if ((1U & (~ ([&]() {
                            this->__VnoInFunc_Xcheck_accessX(vlProcess, vlSymsp, rw, __Vfunc_Xcheck_accessX__240__map_info, __Vfunc_Xcheck_accessX__240__Vfuncout);
                            map_info = __Vfunc_Xcheck_accessX__240__map_info;
                        }(), (IData)(__Vfunc_Xcheck_accessX__240__Vfuncout))))) {
            goto __Vlabel0;
        }
        this->__PVT__m_read_in_progress = 1U;
        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1288)->__PVT__status = 0U;
        this->__VnoInFunc_pre_read(vlSymsp, rw);
        VL_NULL_CHECK(cbs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1292)->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__242__Vfuncout);
        unnamedblk451__DOT__cb = __Vtask_first__242__Vfuncout;
        while ((VlNull{} != unnamedblk451__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk451__DOT__cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1293)->__VnoInFunc_pre_read(vlProcess, vlSymsp, rw);
            VL_NULL_CHECK(cbs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1292)->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__244__Vfuncout);
            unnamedblk451__DOT__cb = __Vtask_next__244__Vfuncout;
        }
        if ((0U != VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1295)
             ->__PVT__status)) {
            this->__PVT__m_read_in_progress = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1301)->__PVT__status = 1U;
        if ((0U == VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1304)
             ->__PVT__path)) {
            VL_NULL_CHECK(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1306)
                          ->__PVT__local_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1306)->__VnoInFunc_get_root_map(vlSymsp, __Vtask_get_root_map__245__Vfuncout);
            unnamedblk452__DOT__system_map = __Vtask_get_root_map__245__Vfuncout;
            if ((VlNull{} != VL_NULL_CHECK(map_info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1308)
                 ->__PVT__frontdoor)) {
                unnamedblk452__DOT__unnamedblk453__DOT__fd 
                    = VL_NULL_CHECK(map_info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1309)
                    ->__PVT__frontdoor;
                VL_NULL_CHECK(unnamedblk452__DOT__unnamedblk453__DOT__fd, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1310)->__PVT__rw_info 
                    = rw;
                if ((VlNull{} == VL_NULL_CHECK(unnamedblk452__DOT__unnamedblk453__DOT__fd, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1311)
                     ->__PVT__sequencer)) {
                    VL_NULL_CHECK(unnamedblk452__DOT__system_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1312)->__VnoInFunc_get_sequencer(vlSymsp, 1U, __Vtask_get_sequencer__246__Vfuncout);
                    VL_NULL_CHECK(unnamedblk452__DOT__unnamedblk453__DOT__fd, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1312)->__PVT__sequencer 
                        = __Vtask_get_sequencer__246__Vfuncout;
                }
                co_await VL_NULL_CHECK(unnamedblk452__DOT__unnamedblk453__DOT__fd, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1313)->__VnoInFunc_start(vlProcess, vlSymsp, VL_NULL_CHECK(unnamedblk452__DOT__unnamedblk453__DOT__fd, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1313)
                                                                                ->__PVT__sequencer, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1313)
                                                                                ->__PVT__parent, 0xffffffffU, 1U);
            } else {
                co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1316)
                                       ->__PVT__local_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1316)->__VnoInFunc_do_read(vlProcess, vlSymsp, rw);
            }
            if ((1U != VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1319)
                 ->__PVT__status)) {
                unnamedblk452__DOT__unnamedblk454__DOT__idx 
                    = VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1320)
                    ->__PVT__offset;
                while ((unnamedblk452__DOT__unnamedblk454__DOT__idx 
                        <= (VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1321)
                            ->__PVT__offset + (QData)((IData)(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1321)
                                                              ->__PVT__value.size()))))) {
                    this->__VnoInFunc_XsampleX(vlSymsp, 
                                               ((QData)((IData)(
                                                                VL_NULL_CHECK(map_info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1323)
                                                                ->__PVT__mem_range[0U])) 
                                                * unnamedblk452__DOT__unnamedblk454__DOT__idx), 1U, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1323)
                                               ->__PVT__map);
                    VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1324)->__VnoInFunc_XsampleX(vlSymsp, 
                                                                                (VL_NULL_CHECK(map_info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1324)
                                                                                ->__PVT__offset 
                                                                                + 
                                                                                ((QData)((IData)(
                                                                                VL_NULL_CHECK(map_info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1325)
                                                                                ->__PVT__mem_range[0U])) 
                                                                                * unnamedblk452__DOT__unnamedblk454__DOT__idx)), 1U, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1326)
                                                                                ->__PVT__map);
                    unnamedblk452__DOT__unnamedblk454__DOT__idx 
                        = (1ULL + unnamedblk452__DOT__unnamedblk454__DOT__idx);
                }
            }
        } else if ((("RW"s == ([&]() {
                            this->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1333)
                                                         ->__PVT__map, __Vfunc_get_access__251__Vfuncout);
                        }(), __Vfunc_get_access__251__Vfuncout)) 
                    || ("RO"s == ([&]() {
                            this->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1333)
                                                         ->__PVT__map, __Vfunc_get_access__252__Vfuncout);
                        }(), __Vfunc_get_access__252__Vfuncout)))) {
            this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __Vfunc_get_backdoor__253__Vfuncout);
            unnamedblk455__DOT__bkdr = __Vfunc_get_backdoor__253__Vfuncout;
            if ((VlNull{} != unnamedblk455__DOT__bkdr)) {
                VL_NULL_CHECK(unnamedblk455__DOT__bkdr, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1336)->__VnoInFunc_read(vlProcess, vlSymsp, rw);
            } else {
                this->__VnoInFunc_backdoor_read(vlProcess, vlSymsp, rw);
            }
        } else {
            VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1341)->__PVT__status = 1U;
        }
        this->__VnoInFunc_post_read(vlSymsp, rw);
        VL_NULL_CHECK(cbs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1347)->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__257__Vfuncout);
        unnamedblk456__DOT__cb = __Vtask_first__257__Vfuncout;
        while ((VlNull{} != unnamedblk456__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk456__DOT__cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1348)->__VnoInFunc_post_read(vlSymsp, rw);
            VL_NULL_CHECK(cbs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1347)->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__259__Vfuncout);
            unnamedblk456__DOT__cb = __Vtask_next__259__Vfuncout;
        }
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__260__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__260__severity = 0U;
                        __Vfunc_uvm_report_enabled__260__verbosity = 0x0000012cU;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__261__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__261__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__262__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__262__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__260__verbosity, (IData)(__Vfunc_uvm_report_enabled__260__severity), __Vfunc_uvm_report_enabled__260__id, __Vtask_uvm_report_enabled__263__Vfuncout);
                        __Vfunc_uvm_report_enabled__260__Vfuncout 
                            = __Vtask_uvm_report_enabled__263__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__260__Vfuncout))) {
            __Vtemp_3 = (VlNull{} != ([&]() {
                        this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __Vfunc_get_backdoor__265__Vfuncout);
                    }(), __Vfunc_get_backdoor__265__Vfuncout));
            __Vtemp_4[0U] = 0x646f6f72U;
            __Vtemp_4[1U] = 0x6261636bU;
            if (__Vtemp_3) {
                __Vtemp_4[2U] = 0x73657220U;
                __Vtemp_4[3U] = 0x00000075U;
            } else {
                __Vtemp_4[2U] = 0x44504920U;
                __Vtemp_4[3U] = 0U;
            }
            unnamedblk457__DOT__path_s = ((0U == VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1353)
                                           ->__PVT__path)
                                           ? ((VlNull{} 
                                               != VL_NULL_CHECK(map_info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1354)
                                               ->__PVT__frontdoor)
                                               ? "user frontdoor"s
                                               : VL_CONCATN_NNN("map "s, 
                                                                ([&]() {
                                VL_NULL_CHECK(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1355)
                                              ->__PVT__map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1355)
                                                                 ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__264__Vfuncout);
                            }(), __Vtask_get_full_name__264__Vfuncout)))
                                           : VL_CVT_PACK_STR_NW(4, __Vtemp_4));
            if (VL_LTS_III(32, 1U, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1359)
                           ->__PVT__value.size())) {
                unnamedblk457__DOT__value_s = "='{"s;
                unnamedblk457__DOT__pre_s = "Burst "s;
                unnamedblk457__DOT__unnamedblk458__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk457__DOT__unnamedblk458__DOT__i, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1362)
                                  ->__PVT__value.size())) {
                    unnamedblk457__DOT__value_s = VL_CONCATN_NNN(unnamedblk457__DOT__value_s, VL_SFORMATF_N_NX("%0x,",0,
                                                                                64,
                                                                                VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1363)
                                                                                ->__PVT__value.at(unnamedblk457__DOT__unnamedblk458__DOT__i)) );
                    unnamedblk457__DOT__unnamedblk458__DOT__i 
                        = ((IData)(1U) + unnamedblk457__DOT__unnamedblk458__DOT__i);
                }
                unnamedblk457__DOT__value_s = VL_PUTC_N(unnamedblk457__DOT__value_s, 
                                                        (VL_LEN_IN(unnamedblk457__DOT__value_s) 
                                                         - (IData)(1U)), 0x7dU);
                unnamedblk457__DOT__range_s = VL_SFORMATF_N_NX("[%0#:%0#]",0,
                                                               64,
                                                               VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1365)
                                                               ->__PVT__offset,
                                                               64,
                                                               (VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1365)
                                                                ->__PVT__offset 
                                                                + (QData)((IData)(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1365)
                                                                                ->__PVT__value.size())))) ;
            } else {
                unnamedblk457__DOT__value_s = VL_SFORMATF_N_NX("=%0x",0,
                                                               64,
                                                               VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1368)
                                                               ->__PVT__value.at(0U)) ;
                unnamedblk457__DOT__range_s = VL_SFORMATF_N_NX("[%0#]",0,
                                                               64,
                                                               VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1369)
                                                               ->__PVT__offset) ;
            }
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__266__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__266__severity = 0U;
                            __Vfunc_uvm_report_enabled__266__verbosity = 0x0000012cU;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__267__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__267__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__268__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__268__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__266__verbosity, (IData)(__Vfunc_uvm_report_enabled__266__severity), __Vfunc_uvm_report_enabled__266__id, __Vtask_uvm_report_enabled__269__Vfuncout);
                            __Vfunc_uvm_report_enabled__266__Vfuncout 
                                = __Vtask_uvm_report_enabled__269__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__266__Vfuncout))) {
                __Vtask_uvm_report_info__270__report_enabled_checked = 1U;
                __Vtask_uvm_report_info__270__context_name = ""s;
                __Vtask_uvm_report_info__270__line = 0x0000055dU;
                __Vtask_uvm_report_info__270__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_info__270__verbosity = 0x0000012cU;
                __Vtask_uvm_report_info__270__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(unnamedblk457__DOT__pre_s, "Read memory via "s), unnamedblk457__DOT__path_s), ": "s), 
                                                                                ([&]() {
                                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__271__Vfuncout);
                                    }(), __Vfunc_get_full_name__271__Vfuncout)), unnamedblk457__DOT__range_s), unnamedblk457__DOT__value_s));
                __Vtask_uvm_report_info__270__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__272__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__272__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__273__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__273__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__270__id, __Vtask_uvm_report_info__270__message, __Vtask_uvm_report_info__270__verbosity, __Vtask_uvm_report_info__270__filename, __Vtask_uvm_report_info__270__line, __Vtask_uvm_report_info__270__context_name, (IData)(__Vtask_uvm_report_info__270__report_enabled_checked));
            }
        }
        this->__PVT__m_read_in_progress = 0U;
        __Vlabel0: ;
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_Xcheck_accessX(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map_info> &map_info, CData/*0:0*/ &Xcheck_accessX__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_Xcheck_accessX\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__275__Vfuncout;
    __Vfunc_uvm_report_enabled__275__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__275__verbosity;
    __Vfunc_uvm_report_enabled__275__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__275__severity;
    __Vfunc_uvm_report_enabled__275__severity = 0;
    std::string __Vfunc_uvm_report_enabled__275__id;
    std::string __Vfunc_get_type_name__276__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__277__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__278__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__279__Vfuncout;
    __Vtask_uvm_report_enabled__279__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__280__id;
    std::string __Vtask_uvm_report_error__280__message;
    IData/*31:0*/ __Vtask_uvm_report_error__280__verbosity;
    __Vtask_uvm_report_error__280__verbosity = 0;
    std::string __Vtask_uvm_report_error__280__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__280__line;
    __Vtask_uvm_report_error__280__line = 0;
    std::string __Vtask_uvm_report_error__280__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__280__report_enabled_checked;
    __Vtask_uvm_report_error__280__report_enabled_checked = 0;
    std::string __Vfunc_get_type_name__281__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__282__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__283__Vfuncout;
    IData/*31:0*/ __Vtask_get_default_door__285__Vfuncout;
    __Vtask_get_default_door__285__Vfuncout = 0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_backdoor> __Vfunc_get_backdoor__286__Vfuncout;
    CData/*0:0*/ __Vfunc_has_hdl_path__287__Vfuncout;
    __Vfunc_has_hdl_path__287__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__288__Vfuncout;
    __Vfunc_uvm_report_enabled__288__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__288__verbosity;
    __Vfunc_uvm_report_enabled__288__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__288__severity;
    __Vfunc_uvm_report_enabled__288__severity = 0;
    std::string __Vfunc_uvm_report_enabled__288__id;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__289__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__290__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__291__Vfuncout;
    __Vtask_uvm_report_enabled__291__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__292__id;
    std::string __Vtask_uvm_report_warning__292__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__292__verbosity;
    __Vtask_uvm_report_warning__292__verbosity = 0;
    std::string __Vtask_uvm_report_warning__292__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__292__line;
    __Vtask_uvm_report_warning__292__line = 0;
    std::string __Vtask_uvm_report_warning__292__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__292__report_enabled_checked;
    __Vtask_uvm_report_warning__292__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__293__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__294__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__295__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> __Vfunc_get_default_map__297__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> __Vfunc_get_default_map__298__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> __Vfunc_backdoor__299__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> __Vfunc_get_local_map__300__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__301__Vfuncout;
    __Vfunc_uvm_report_enabled__301__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__301__verbosity;
    __Vfunc_uvm_report_enabled__301__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__301__severity;
    __Vfunc_uvm_report_enabled__301__severity = 0;
    std::string __Vfunc_uvm_report_enabled__301__id;
    std::string __Vfunc_get_type_name__302__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__303__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__304__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__305__Vfuncout;
    __Vtask_uvm_report_enabled__305__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__306__id;
    std::string __Vtask_uvm_report_error__306__message;
    IData/*31:0*/ __Vtask_uvm_report_error__306__verbosity;
    __Vtask_uvm_report_error__306__verbosity = 0;
    std::string __Vtask_uvm_report_error__306__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__306__line;
    __Vtask_uvm_report_error__306__line = 0;
    std::string __Vtask_uvm_report_error__306__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__306__report_enabled_checked;
    __Vtask_uvm_report_error__306__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__307__Vfuncout;
    std::string __Vfunc_get_type_name__308__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__309__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__310__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map_info> __Vtask_get_mem_map_info__312__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__313__Vfuncout;
    __Vfunc_uvm_report_enabled__313__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__313__verbosity;
    __Vfunc_uvm_report_enabled__313__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__313__severity;
    __Vfunc_uvm_report_enabled__313__severity = 0;
    std::string __Vfunc_uvm_report_enabled__313__id;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__314__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__315__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__316__Vfuncout;
    __Vtask_uvm_report_enabled__316__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__317__id;
    std::string __Vtask_uvm_report_error__317__message;
    IData/*31:0*/ __Vtask_uvm_report_error__317__verbosity;
    __Vtask_uvm_report_error__317__verbosity = 0;
    std::string __Vtask_uvm_report_error__317__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__317__line;
    __Vtask_uvm_report_error__317__line = 0;
    std::string __Vtask_uvm_report_error__317__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__317__report_enabled_checked;
    __Vtask_uvm_report_error__317__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__318__Vfuncout;
    std::string __Vtask_get_full_name__319__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__320__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__321__Vfuncout;
    IData/*31:0*/ __Vfunc_get_n_bits__323__Vfuncout;
    __Vfunc_get_n_bits__323__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bytes__324__Vfuncout;
    __Vtask_get_n_bytes__324__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__325__Vfuncout;
    __Vfunc_uvm_report_enabled__325__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__325__verbosity;
    __Vfunc_uvm_report_enabled__325__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__325__severity;
    __Vfunc_uvm_report_enabled__325__severity = 0;
    std::string __Vfunc_uvm_report_enabled__325__id;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__326__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__327__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__328__Vfuncout;
    __Vtask_uvm_report_enabled__328__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__329__id;
    std::string __Vtask_uvm_report_error__329__message;
    IData/*31:0*/ __Vtask_uvm_report_error__329__verbosity;
    __Vtask_uvm_report_error__329__verbosity = 0;
    std::string __Vtask_uvm_report_error__329__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__329__line;
    __Vtask_uvm_report_error__329__line = 0;
    std::string __Vtask_uvm_report_error__329__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__329__report_enabled_checked;
    __Vtask_uvm_report_error__329__report_enabled_checked = 0;
    IData/*31:0*/ __Vfunc_get_n_bits__330__Vfuncout;
    __Vfunc_get_n_bits__330__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bytes__331__Vfuncout;
    __Vtask_get_n_bytes__331__Vfuncout = 0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__332__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__333__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__335__Vfuncout;
    __Vfunc_uvm_report_enabled__335__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__335__verbosity;
    __Vfunc_uvm_report_enabled__335__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__335__severity;
    __Vfunc_uvm_report_enabled__335__severity = 0;
    std::string __Vfunc_uvm_report_enabled__335__id;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__336__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__337__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__338__Vfuncout;
    __Vtask_uvm_report_enabled__338__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__339__id;
    std::string __Vtask_uvm_report_error__339__message;
    IData/*31:0*/ __Vtask_uvm_report_error__339__verbosity;
    __Vtask_uvm_report_error__339__verbosity = 0;
    std::string __Vtask_uvm_report_error__339__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__339__line;
    __Vtask_uvm_report_error__339__line = 0;
    std::string __Vtask_uvm_report_error__339__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__339__report_enabled_checked;
    __Vtask_uvm_report_error__339__report_enabled_checked = 0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__340__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__341__Vfuncout;
    // Body
    {
        if ((VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1386)
             ->__PVT__offset >= this->__PVT__m_size)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__275__id 
                                = VL_CVT_PACK_STR_NN(
                                                     ([&]() {
                                        this->__VnoInFunc_get_type_name(vlSymsp, __Vfunc_get_type_name__276__Vfuncout);
                                    }(), __Vfunc_get_type_name__276__Vfuncout));
                            __Vfunc_uvm_report_enabled__275__severity = 2U;
                            __Vfunc_uvm_report_enabled__275__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__277__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__277__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__278__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__278__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__275__verbosity, (IData)(__Vfunc_uvm_report_enabled__275__severity), __Vfunc_uvm_report_enabled__275__id, __Vtask_uvm_report_enabled__279__Vfuncout);
                            __Vfunc_uvm_report_enabled__275__Vfuncout 
                                = __Vtask_uvm_report_enabled__279__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__275__Vfuncout))) {
                __Vtask_uvm_report_error__280__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__280__context_name = ""s;
                __Vtask_uvm_report_error__280__line = 0x0000056dU;
                __Vtask_uvm_report_error__280__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_error__280__verbosity = 0U;
                __Vtask_uvm_report_error__280__message 
                    = VL_SFORMATF_N_NX("Offset 'h%0x exceeds size of memory, 'h%0x",0,
                                       64,VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1389)
                                       ->__PVT__offset,
                                       64,this->__PVT__m_size) ;
                __Vtask_uvm_report_error__280__id = 
                    VL_CVT_PACK_STR_NN(([&]() {
                            this->__VnoInFunc_get_type_name(vlSymsp, __Vfunc_get_type_name__281__Vfuncout);
                        }(), __Vfunc_get_type_name__281__Vfuncout));
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__282__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__282__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__283__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__283__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__280__id, __Vtask_uvm_report_error__280__message, __Vtask_uvm_report_error__280__verbosity, __Vtask_uvm_report_error__280__filename, __Vtask_uvm_report_error__280__line, __Vtask_uvm_report_error__280__context_name, (IData)(__Vtask_uvm_report_error__280__report_enabled_checked));
            }
            VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1390)->__PVT__status = 1U;
            Xcheck_accessX__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if ((3U == VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1394)
             ->__PVT__path)) {
            VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1395)->__VnoInFunc_get_default_door(vlSymsp, __Vtask_get_default_door__285__Vfuncout);
            VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1395)->__PVT__path 
                = __Vtask_get_default_door__285__Vfuncout;
        }
        if ((1U == VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1397)
             ->__PVT__path)) {
            if (((VlNull{} == ([&]() {
                                this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __Vfunc_get_backdoor__286__Vfuncout);
                            }(), __Vfunc_get_backdoor__286__Vfuncout)) 
                 && (1U & (~ ([&]() {
                                    this->__VnoInFunc_has_hdl_path(vlSymsp, ""s, __Vfunc_has_hdl_path__287__Vfuncout);
                                }(), (IData)(__Vfunc_has_hdl_path__287__Vfuncout)))))) {
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__288__id = "RegModel"s;
                                __Vfunc_uvm_report_enabled__288__severity = 1U;
                                __Vfunc_uvm_report_enabled__288__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__289__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__289__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__290__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__290__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__288__verbosity, (IData)(__Vfunc_uvm_report_enabled__288__severity), __Vfunc_uvm_report_enabled__288__id, __Vtask_uvm_report_enabled__291__Vfuncout);
                                __Vfunc_uvm_report_enabled__288__Vfuncout 
                                    = __Vtask_uvm_report_enabled__291__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__288__Vfuncout))) {
                    __Vtask_uvm_report_warning__292__report_enabled_checked = 1U;
                    __Vtask_uvm_report_warning__292__context_name = ""s;
                    __Vtask_uvm_report_warning__292__line = 0x00000579U;
                    __Vtask_uvm_report_warning__292__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                    __Vtask_uvm_report_warning__292__verbosity = 0U;
                    __Vtask_uvm_report_warning__292__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN("No backdoor access available for memory '"s, 
                                                                           ([&]() {
                                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__293__Vfuncout);
                                    }(), __Vfunc_get_full_name__293__Vfuncout)), "' . Using frontdoor instead."s));
                    __Vtask_uvm_report_warning__292__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__294__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__294__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__295__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__295__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__292__id, __Vtask_uvm_report_warning__292__message, __Vtask_uvm_report_warning__292__verbosity, __Vtask_uvm_report_warning__292__filename, __Vtask_uvm_report_warning__292__line, __Vtask_uvm_report_warning__292__context_name, (IData)(__Vtask_uvm_report_warning__292__report_enabled_checked));
                }
                VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1402)->__PVT__path = 0U;
            } else if ((VlNull{} == VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1404)
                        ->__PVT__map)) {
                VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1406)->__PVT__map 
                    = ((VlNull{} != ([&]() {
                                this->__VnoInFunc_get_default_map(vlProcess, vlSymsp, __Vfunc_get_default_map__297__Vfuncout);
                            }(), __Vfunc_get_default_map__297__Vfuncout))
                        ? ([&]() {
                            this->__VnoInFunc_get_default_map(vlProcess, vlSymsp, __Vfunc_get_default_map__298__Vfuncout);
                        }(), __Vfunc_get_default_map__298__Vfuncout)
                        : ([&]() {
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_map__Vclpkg.__VnoInFunc_backdoor(vlProcess, vlSymsp, __Vfunc_backdoor__299__Vfuncout);
                        }(), __Vfunc_backdoor__299__Vfuncout));
            }
        }
        if ((1U != VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1413)
             ->__PVT__path)) {
            this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1415)
                                            ->__PVT__map, __Vfunc_get_local_map__300__Vfuncout);
            VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1415)->__PVT__local_map 
                = __Vfunc_get_local_map__300__Vfuncout;
            if ((VlNull{} == VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1417)
                 ->__PVT__local_map)) {
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__301__id 
                                    = VL_CVT_PACK_STR_NN(
                                                         ([&]() {
                                            this->__VnoInFunc_get_type_name(vlSymsp, __Vfunc_get_type_name__302__Vfuncout);
                                        }(), __Vfunc_get_type_name__302__Vfuncout));
                                __Vfunc_uvm_report_enabled__301__severity = 2U;
                                __Vfunc_uvm_report_enabled__301__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__303__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__303__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__304__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__304__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__301__verbosity, (IData)(__Vfunc_uvm_report_enabled__301__severity), __Vfunc_uvm_report_enabled__301__id, __Vtask_uvm_report_enabled__305__Vfuncout);
                                __Vfunc_uvm_report_enabled__301__Vfuncout 
                                    = __Vtask_uvm_report_enabled__305__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__301__Vfuncout))) {
                    __Vtask_uvm_report_error__306__report_enabled_checked = 1U;
                    __Vtask_uvm_report_error__306__context_name = ""s;
                    __Vtask_uvm_report_error__306__line = 0x0000058cU;
                    __Vtask_uvm_report_error__306__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                    __Vtask_uvm_report_error__306__verbosity = 0U;
                    __Vtask_uvm_report_error__306__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN("No transactor available to physically access memory from map '"s, 
                                                                           ([&]() {
                                        VL_NULL_CHECK(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1420)
                                                      ->__PVT__map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1420)
                                                                            ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__307__Vfuncout);
                                    }(), __Vtask_get_full_name__307__Vfuncout)), "'"s));
                    __Vtask_uvm_report_error__306__id 
                        = VL_CVT_PACK_STR_NN(([&]() {
                                this->__VnoInFunc_get_type_name(vlSymsp, __Vfunc_get_type_name__308__Vfuncout);
                            }(), __Vfunc_get_type_name__308__Vfuncout));
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__309__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__309__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__310__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__310__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__306__id, __Vtask_uvm_report_error__306__message, __Vtask_uvm_report_error__306__verbosity, __Vtask_uvm_report_error__306__filename, __Vtask_uvm_report_error__306__line, __Vtask_uvm_report_error__306__context_name, (IData)(__Vtask_uvm_report_error__306__report_enabled_checked));
                }
                VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1421)->__PVT__status = 1U;
                Xcheck_accessX__Vfuncrtn = 0U;
                goto __Vlabel0;
            }
            VL_NULL_CHECK(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1425)
                          ->__PVT__local_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1425)->__VnoInFunc_get_mem_map_info(vlProcess, vlSymsp, 
                                                                                VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem>{this}, 1U, __Vtask_get_mem_map_info__312__Vfuncout);
            map_info = __Vtask_get_mem_map_info__312__Vfuncout;
            if ((VlNull{} == VL_NULL_CHECK(map_info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1427)
                 ->__PVT__frontdoor)) {
                if (VL_NULL_CHECK(map_info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1429)
                    ->__PVT__unmapped) {
                    if ((0U != ([&]() {
                                    __Vfunc_uvm_report_enabled__313__id = "RegModel"s;
                                    __Vfunc_uvm_report_enabled__313__severity = 2U;
                                    __Vfunc_uvm_report_enabled__313__verbosity = 0U;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__314__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                        = __Vfunc_get__314__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__315__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                        = __Vtask_get_root__315__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__313__verbosity, (IData)(__Vfunc_uvm_report_enabled__313__severity), __Vfunc_uvm_report_enabled__313__id, __Vtask_uvm_report_enabled__316__Vfuncout);
                                    __Vfunc_uvm_report_enabled__313__Vfuncout 
                                        = __Vtask_uvm_report_enabled__316__Vfuncout;
                                }(), __Vfunc_uvm_report_enabled__313__Vfuncout))) {
                        __Vtask_uvm_report_error__317__report_enabled_checked = 1U;
                        __Vtask_uvm_report_error__317__context_name = ""s;
                        __Vtask_uvm_report_error__317__line = 0x00000598U;
                        __Vtask_uvm_report_error__317__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                        __Vtask_uvm_report_error__317__verbosity = 0U;
                        __Vtask_uvm_report_error__317__message 
                            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                                VL_CONCATN_NNN(
                                                                               VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, 
                                                                                ([&]() {
                                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__318__Vfuncout);
                                                }(), __Vfunc_get_full_name__318__Vfuncout)), "' unmapped in map '"s), 
                                                                               ([&]() {
                                            VL_NULL_CHECK(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1432)
                                                          ->__PVT__map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1432)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__319__Vfuncout);
                                        }(), __Vtask_get_full_name__319__Vfuncout)), "' and does not have a user-defined frontdoor"s));
                        __Vtask_uvm_report_error__317__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__320__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                            = __Vfunc_get__320__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__321__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                            = __Vtask_get_root__321__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__317__id, __Vtask_uvm_report_error__317__message, __Vtask_uvm_report_error__317__verbosity, __Vtask_uvm_report_error__317__filename, __Vtask_uvm_report_error__317__line, __Vtask_uvm_report_error__317__context_name, (IData)(__Vtask_uvm_report_error__317__report_enabled_checked));
                    }
                    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1433)->__PVT__status = 1U;
                    Xcheck_accessX__Vfuncrtn = 0U;
                    goto __Vlabel0;
                }
                if (VL_LTS_III(32, 1U, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1437)
                               ->__PVT__value.size())) {
                    if ((([&]() {
                                    this->__VnoInFunc_get_n_bits(vlSymsp, __Vfunc_get_n_bits__323__Vfuncout);
                                }(), __Vfunc_get_n_bits__323__Vfuncout) 
                         > VL_SHIFTL_III(32,32,32, 
                                         ([&]() {
                                        VL_NULL_CHECK(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1438)
                                                      ->__PVT__local_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1438)
                                          ->__VnoInFunc_get_n_bytes(vlSymsp, 1U, __Vtask_get_n_bytes__324__Vfuncout);
                                    }(), __Vtask_get_n_bytes__324__Vfuncout), 3U))) {
                        if ((0U != ([&]() {
                                        __Vfunc_uvm_report_enabled__325__id = "RegModel"s;
                                        __Vfunc_uvm_report_enabled__325__severity = 2U;
                                        __Vfunc_uvm_report_enabled__325__verbosity = 0U;
                                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__326__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                            = __Vfunc_get__326__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__327__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                            = __Vtask_get_root__327__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__325__verbosity, (IData)(__Vfunc_uvm_report_enabled__325__severity), __Vfunc_uvm_report_enabled__325__id, __Vtask_uvm_report_enabled__328__Vfuncout);
                                        __Vfunc_uvm_report_enabled__325__Vfuncout 
                                            = __Vtask_uvm_report_enabled__328__Vfuncout;
                                    }(), __Vfunc_uvm_report_enabled__325__Vfuncout))) {
                            __Vtask_uvm_report_error__329__report_enabled_checked = 1U;
                            __Vtask_uvm_report_error__329__context_name = ""s;
                            __Vtask_uvm_report_error__329__line = 0x000005a1U;
                            __Vtask_uvm_report_error__329__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                            __Vtask_uvm_report_error__329__verbosity = 0U;
                            __Vtask_uvm_report_error__329__message 
                                = VL_SFORMATF_N_NX("Cannot burst a %0#-bit memory through a narrower data path (%0# bytes)",0,
                                                   32,
                                                   ([&]() {
                                            this->__VnoInFunc_get_n_bits(vlSymsp, __Vfunc_get_n_bits__330__Vfuncout);
                                        }(), __Vfunc_get_n_bits__330__Vfuncout),
                                                   32,
                                                   VL_SHIFTL_III(32,32,32, 
                                                                 ([&]() {
                                                VL_NULL_CHECK(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1441)
                                                              ->__PVT__local_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1441)
                                                                  ->__VnoInFunc_get_n_bytes(vlSymsp, 1U, __Vtask_get_n_bytes__331__Vfuncout);
                                            }(), __Vtask_get_n_bytes__331__Vfuncout), 3U)) ;
                            __Vtask_uvm_report_error__329__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__332__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                = __Vfunc_get__332__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__333__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                = __Vtask_get_root__333__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__329__id, __Vtask_uvm_report_error__329__message, __Vtask_uvm_report_error__329__verbosity, __Vtask_uvm_report_error__329__filename, __Vtask_uvm_report_error__329__line, __Vtask_uvm_report_error__329__context_name, (IData)(__Vtask_uvm_report_error__329__report_enabled_checked));
                        }
                        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1442)->__PVT__status = 1U;
                        Xcheck_accessX__Vfuncrtn = 0U;
                        goto __Vlabel0;
                    }
                    if (((VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1445)
                          ->__PVT__offset + (QData)((IData)(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1445)
                                                            ->__PVT__value.size()))) 
                         > this->__PVT__m_size)) {
                        if ((0U != ([&]() {
                                        __Vfunc_uvm_report_enabled__335__id = "RegModel"s;
                                        __Vfunc_uvm_report_enabled__335__severity = 2U;
                                        __Vfunc_uvm_report_enabled__335__verbosity = 0U;
                                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__336__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                            = __Vfunc_get__336__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__337__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                            = __Vtask_get_root__337__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__335__verbosity, (IData)(__Vfunc_uvm_report_enabled__335__severity), __Vfunc_uvm_report_enabled__335__id, __Vtask_uvm_report_enabled__338__Vfuncout);
                                        __Vfunc_uvm_report_enabled__335__Vfuncout 
                                            = __Vtask_uvm_report_enabled__338__Vfuncout;
                                    }(), __Vfunc_uvm_report_enabled__335__Vfuncout))) {
                            __Vtask_uvm_report_error__339__report_enabled_checked = 1U;
                            __Vtask_uvm_report_error__339__context_name = ""s;
                            __Vtask_uvm_report_error__339__line = 0x000005a8U;
                            __Vtask_uvm_report_error__339__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                            __Vtask_uvm_report_error__339__verbosity = 0U;
                            __Vtask_uvm_report_error__339__message 
                                = VL_SFORMATF_N_NX("Burst of size 'd%0d starting at offset 'd%0# exceeds size of memory, 'd%0#",0,
                                                   32,
                                                   VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1448)
                                                   ->__PVT__value.size(),
                                                   64,
                                                   VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1448)
                                                   ->__PVT__offset,
                                                   64,
                                                   this->__PVT__m_size) ;
                            __Vtask_uvm_report_error__339__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__340__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                = __Vfunc_get__340__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__341__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                = __Vtask_get_root__341__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__339__id, __Vtask_uvm_report_error__339__message, __Vtask_uvm_report_error__339__verbosity, __Vtask_uvm_report_error__339__filename, __Vtask_uvm_report_error__339__line, __Vtask_uvm_report_error__339__context_name, (IData)(__Vtask_uvm_report_error__339__report_enabled_checked));
                        }
                        Xcheck_accessX__Vfuncrtn = 0U;
                        goto __Vlabel0;
                    }
                }
            }
            if ((VlNull{} == VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1454)
                 ->__PVT__map)) {
                VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1455)->__PVT__map 
                    = VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1455)
                    ->__PVT__local_map;
            }
        }
        Xcheck_accessX__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_poke(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ value, std::string kind, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_poke\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_backdoor> __Vfunc_get_backdoor__343__Vfuncout;
    CData/*0:0*/ __Vfunc_has_hdl_path__344__Vfuncout;
    __Vfunc_has_hdl_path__344__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__345__Vfuncout;
    __Vfunc_uvm_report_enabled__345__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__345__verbosity;
    __Vfunc_uvm_report_enabled__345__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__345__severity;
    __Vfunc_uvm_report_enabled__345__severity = 0;
    std::string __Vfunc_uvm_report_enabled__345__id;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__346__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__347__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__348__Vfuncout;
    __Vtask_uvm_report_enabled__348__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__349__id;
    std::string __Vtask_uvm_report_error__349__message;
    IData/*31:0*/ __Vtask_uvm_report_error__349__verbosity;
    __Vtask_uvm_report_error__349__verbosity = 0;
    std::string __Vtask_uvm_report_error__349__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__349__line;
    __Vtask_uvm_report_error__349__line = 0;
    std::string __Vtask_uvm_report_error__349__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__349__report_enabled_checked;
    __Vtask_uvm_report_error__349__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__350__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__351__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__352__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> __Vfunc_create__354__Vfuncout;
    std::string __Vfunc_get_full_name__355__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__358__Vfuncout;
    __Vfunc_uvm_report_enabled__358__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__358__verbosity;
    __Vfunc_uvm_report_enabled__358__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__358__severity;
    __Vfunc_uvm_report_enabled__358__severity = 0;
    std::string __Vfunc_uvm_report_enabled__358__id;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__359__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__360__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__361__Vfuncout;
    __Vtask_uvm_report_enabled__361__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__362__id;
    std::string __Vtask_uvm_report_info__362__message;
    IData/*31:0*/ __Vtask_uvm_report_info__362__verbosity;
    __Vtask_uvm_report_info__362__verbosity = 0;
    std::string __Vtask_uvm_report_info__362__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__362__line;
    __Vtask_uvm_report_info__362__line = 0;
    std::string __Vtask_uvm_report_info__362__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__362__report_enabled_checked;
    __Vtask_uvm_report_info__362__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__363__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__364__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__365__Vfuncout;
    std::string __Vtemp_1;
    // Body
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> rw;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_backdoor> bkdr;
    {
        this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __Vfunc_get_backdoor__343__Vfuncout);
        bkdr = __Vfunc_get_backdoor__343__Vfuncout;
        this->__PVT__m_fname = fname;
        this->__PVT__m_lineno = lineno;
        if (((VlNull{} == bkdr) && (1U & (~ ([&]() {
                                this->__VnoInFunc_has_hdl_path(vlSymsp, kind, __Vfunc_has_hdl_path__344__Vfuncout);
                            }(), (IData)(__Vfunc_has_hdl_path__344__Vfuncout)))))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__345__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__345__severity = 2U;
                            __Vfunc_uvm_report_enabled__345__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__346__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__346__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__347__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__347__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__345__verbosity, (IData)(__Vfunc_uvm_report_enabled__345__severity), __Vfunc_uvm_report_enabled__345__id, __Vtask_uvm_report_enabled__348__Vfuncout);
                            __Vfunc_uvm_report_enabled__345__Vfuncout 
                                = __Vtask_uvm_report_enabled__348__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__345__Vfuncout))) {
                __Vtask_uvm_report_error__349__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__349__context_name = ""s;
                __Vtask_uvm_report_error__349__line = 0x000005ccU;
                __Vtask_uvm_report_error__349__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_error__349__verbosity = 0U;
                __Vtask_uvm_report_error__349__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("No backdoor access available in memory '"s, 
                                                                       ([&]() {
                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__350__Vfuncout);
                                }(), __Vfunc_get_full_name__350__Vfuncout)), "'"s));
                __Vtask_uvm_report_error__349__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__351__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__351__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__352__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__352__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__349__id, __Vtask_uvm_report_error__349__message, __Vtask_uvm_report_error__349__verbosity, __Vtask_uvm_report_error__349__filename, __Vtask_uvm_report_error__349__line, __Vtask_uvm_report_error__349__context_name, (IData)(__Vtask_uvm_report_error__349__report_enabled_checked));
            }
            status = 1U;
            goto __Vlabel0;
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi114__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "mem_poke_item"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__355__Vfuncout);
                    }(), __Vfunc_get_full_name__355__Vfuncout)), __Vfunc_create__354__Vfuncout);
        rw = __Vfunc_create__354__Vfuncout;
        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1491)->__PVT__element 
            = VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem>{this};
        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1492)->__PVT__path = 1U;
        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1493)->__PVT__element_kind = 2U;
        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1494)->__PVT__kind = 1U;
        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1495)->__PVT__offset 
            = offset;
        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1496)->__PVT__value.atWrite(0U) 
            = (value & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_n_bits) 
                        - 1ULL));
        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1497)->__PVT__bd_kind 
            = kind;
        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1498)->__PVT__parent 
            = parent;
        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1499)->__PVT__extension 
            = extension;
        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1500)->__PVT__fname 
            = fname;
        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1501)->__PVT__lineno 
            = lineno;
        if ((VlNull{} != bkdr)) {
            VL_NULL_CHECK(bkdr, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1504)->__VnoInFunc_write(vlProcess, vlSymsp, rw);
        } else {
            this->__VnoInFunc_backdoor_write(vlProcess, vlSymsp, rw);
        }
        status = VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1508)
            ->__PVT__status;
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__358__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__358__severity = 0U;
                        __Vfunc_uvm_report_enabled__358__verbosity = 0x0000012cU;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__359__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__359__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__360__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__360__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__358__verbosity, (IData)(__Vfunc_uvm_report_enabled__358__severity), __Vfunc_uvm_report_enabled__358__id, __Vtask_uvm_report_enabled__361__Vfuncout);
                        __Vfunc_uvm_report_enabled__358__Vfuncout 
                            = __Vtask_uvm_report_enabled__361__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__358__Vfuncout))) {
            __Vtask_uvm_report_info__362__report_enabled_checked = 1U;
            __Vtask_uvm_report_info__362__context_name = ""s;
            __Vtask_uvm_report_info__362__line = 0x000005e7U;
            __Vtask_uvm_report_info__362__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
            __Vtask_uvm_report_info__362__verbosity = 0x0000012cU;
            __Vtemp_1 = ([&]() {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__363__Vfuncout);
                }(), __Vfunc_get_full_name__363__Vfuncout);
            __Vtask_uvm_report_info__362__message = VL_SFORMATF_N_NX("Poked memory '%@[%0#]' with value 'h%x",0,
                                                                     -1,
                                                                     &(__Vtemp_1),
                                                                     64,
                                                                     offset,
                                                                     64,
                                                                     value) ;
            __Vtask_uvm_report_info__362__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__364__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__364__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__365__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__365__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__362__id, __Vtask_uvm_report_info__362__message, __Vtask_uvm_report_info__362__verbosity, __Vtask_uvm_report_info__362__filename, __Vtask_uvm_report_info__362__line, __Vtask_uvm_report_info__362__context_name, (IData)(__Vtask_uvm_report_info__362__report_enabled_checked));
        }
        __Vlabel0: ;
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_peek(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ &value, std::string kind, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_peek\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_backdoor> __Vfunc_get_backdoor__367__Vfuncout;
    CData/*0:0*/ __Vfunc_has_hdl_path__368__Vfuncout;
    __Vfunc_has_hdl_path__368__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__369__Vfuncout;
    __Vfunc_uvm_report_enabled__369__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__369__verbosity;
    __Vfunc_uvm_report_enabled__369__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__369__severity;
    __Vfunc_uvm_report_enabled__369__severity = 0;
    std::string __Vfunc_uvm_report_enabled__369__id;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__370__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__371__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__372__Vfuncout;
    __Vtask_uvm_report_enabled__372__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__373__id;
    std::string __Vtask_uvm_report_error__373__message;
    IData/*31:0*/ __Vtask_uvm_report_error__373__verbosity;
    __Vtask_uvm_report_error__373__verbosity = 0;
    std::string __Vtask_uvm_report_error__373__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__373__line;
    __Vtask_uvm_report_error__373__line = 0;
    std::string __Vtask_uvm_report_error__373__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__373__report_enabled_checked;
    __Vtask_uvm_report_error__373__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__374__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__375__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__376__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> __Vfunc_create__378__Vfuncout;
    std::string __Vfunc_get_full_name__379__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__382__Vfuncout;
    __Vfunc_uvm_report_enabled__382__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__382__verbosity;
    __Vfunc_uvm_report_enabled__382__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__382__severity;
    __Vfunc_uvm_report_enabled__382__severity = 0;
    std::string __Vfunc_uvm_report_enabled__382__id;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__383__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__384__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__385__Vfuncout;
    __Vtask_uvm_report_enabled__385__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__386__id;
    std::string __Vtask_uvm_report_info__386__message;
    IData/*31:0*/ __Vtask_uvm_report_info__386__verbosity;
    __Vtask_uvm_report_info__386__verbosity = 0;
    std::string __Vtask_uvm_report_info__386__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__386__line;
    __Vtask_uvm_report_info__386__line = 0;
    std::string __Vtask_uvm_report_info__386__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__386__report_enabled_checked;
    __Vtask_uvm_report_info__386__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__387__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__388__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__389__Vfuncout;
    std::string __Vtemp_1;
    // Body
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_backdoor> bkdr;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> rw;
    {
        this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __Vfunc_get_backdoor__367__Vfuncout);
        bkdr = __Vfunc_get_backdoor__367__Vfuncout;
        this->__PVT__m_fname = fname;
        this->__PVT__m_lineno = lineno;
        if (((VlNull{} == bkdr) && (1U & (~ ([&]() {
                                this->__VnoInFunc_has_hdl_path(vlSymsp, kind, __Vfunc_has_hdl_path__368__Vfuncout);
                            }(), (IData)(__Vfunc_has_hdl_path__368__Vfuncout)))))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__369__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__369__severity = 2U;
                            __Vfunc_uvm_report_enabled__369__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__370__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__370__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__371__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__371__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__369__verbosity, (IData)(__Vfunc_uvm_report_enabled__369__severity), __Vfunc_uvm_report_enabled__369__id, __Vtask_uvm_report_enabled__372__Vfuncout);
                            __Vfunc_uvm_report_enabled__369__Vfuncout 
                                = __Vtask_uvm_report_enabled__372__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__369__Vfuncout))) {
                __Vtask_uvm_report_error__373__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__373__context_name = ""s;
                __Vtask_uvm_report_error__373__line = 0x000005feU;
                __Vtask_uvm_report_error__373__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_error__373__verbosity = 0U;
                __Vtask_uvm_report_error__373__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("No backdoor access available in memory '"s, 
                                                                       ([&]() {
                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__374__Vfuncout);
                                }(), __Vfunc_get_full_name__374__Vfuncout)), "'"s));
                __Vtask_uvm_report_error__373__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__375__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__375__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__376__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__376__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__373__id, __Vtask_uvm_report_error__373__message, __Vtask_uvm_report_error__373__verbosity, __Vtask_uvm_report_error__373__filename, __Vtask_uvm_report_error__373__line, __Vtask_uvm_report_error__373__context_name, (IData)(__Vtask_uvm_report_error__373__report_enabled_checked));
            }
            status = 1U;
            goto __Vlabel0;
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi114__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "mem_peek_item"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__379__Vfuncout);
                    }(), __Vfunc_get_full_name__379__Vfuncout)), __Vfunc_create__378__Vfuncout);
        rw = __Vfunc_create__378__Vfuncout;
        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1541)->__PVT__element 
            = VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem>{this};
        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1542)->__PVT__path = 1U;
        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1543)->__PVT__element_kind = 2U;
        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1544)->__PVT__kind = 0U;
        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1545)->__PVT__offset 
            = offset;
        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1546)->__PVT__bd_kind 
            = kind;
        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1547)->__PVT__parent 
            = parent;
        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1548)->__PVT__extension 
            = extension;
        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1549)->__PVT__fname 
            = fname;
        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1550)->__PVT__lineno 
            = lineno;
        if ((VlNull{} != bkdr)) {
            VL_NULL_CHECK(bkdr, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1553)->__VnoInFunc_read(vlProcess, vlSymsp, rw);
        } else {
            this->__VnoInFunc_backdoor_read(vlProcess, vlSymsp, rw);
        }
        status = VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1557)
            ->__PVT__status;
        value = VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1558)
            ->__PVT__value.at(0U);
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__382__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__382__severity = 0U;
                        __Vfunc_uvm_report_enabled__382__verbosity = 0x0000012cU;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__383__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__383__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__384__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__384__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__382__verbosity, (IData)(__Vfunc_uvm_report_enabled__382__severity), __Vfunc_uvm_report_enabled__382__id, __Vtask_uvm_report_enabled__385__Vfuncout);
                        __Vfunc_uvm_report_enabled__382__Vfuncout 
                            = __Vtask_uvm_report_enabled__385__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__382__Vfuncout))) {
            __Vtask_uvm_report_info__386__report_enabled_checked = 1U;
            __Vtask_uvm_report_info__386__context_name = ""s;
            __Vtask_uvm_report_info__386__line = 0x00000619U;
            __Vtask_uvm_report_info__386__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
            __Vtask_uvm_report_info__386__verbosity = 0x0000012cU;
            __Vtemp_1 = ([&]() {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__387__Vfuncout);
                }(), __Vfunc_get_full_name__387__Vfuncout);
            __Vtask_uvm_report_info__386__message = VL_SFORMATF_N_NX("Peeked memory '%@[%0#]' has value 'h%x",0,
                                                                     -1,
                                                                     &(__Vtemp_1),
                                                                     64,
                                                                     offset,
                                                                     64,
                                                                     value) ;
            __Vtask_uvm_report_info__386__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__388__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__388__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__389__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__389__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__386__id, __Vtask_uvm_report_info__386__message, __Vtask_uvm_report_info__386__verbosity, __Vtask_uvm_report_info__386__filename, __Vtask_uvm_report_info__386__line, __Vtask_uvm_report_info__386__context_name, (IData)(__Vtask_uvm_report_info__386__report_enabled_checked));
        }
        __Vlabel0: ;
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_set_frontdoor(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_frontdoor> ftdr, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> map, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_set_frontdoor\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> __Vfunc_get_local_map__391__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__392__Vfuncout;
    __Vfunc_uvm_report_enabled__392__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__392__verbosity;
    __Vfunc_uvm_report_enabled__392__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__392__severity;
    __Vfunc_uvm_report_enabled__392__severity = 0;
    std::string __Vfunc_uvm_report_enabled__392__id;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__393__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__394__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__395__Vfuncout;
    __Vtask_uvm_report_enabled__395__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__396__id;
    std::string __Vtask_uvm_report_error__396__message;
    IData/*31:0*/ __Vtask_uvm_report_error__396__verbosity;
    __Vtask_uvm_report_error__396__verbosity = 0;
    std::string __Vtask_uvm_report_error__396__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__396__line;
    __Vtask_uvm_report_error__396__line = 0;
    std::string __Vtask_uvm_report_error__396__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__396__report_enabled_checked;
    __Vtask_uvm_report_error__396__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__397__Vfuncout;
    std::string __Vtask_get_full_name__398__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__399__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__400__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map_info> __Vtask_get_mem_map_info__402__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map_info> map_info;
    {
        this->__PVT__m_fname = fname;
        this->__PVT__m_lineno = lineno;
        this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, __Vfunc_get_local_map__391__Vfuncout);
        map = __Vfunc_get_local_map__391__Vfuncout;
        if ((VlNull{} == map)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__392__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__392__severity = 2U;
                            __Vfunc_uvm_report_enabled__392__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__393__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__393__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__394__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__394__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__392__verbosity, (IData)(__Vfunc_uvm_report_enabled__392__severity), __Vfunc_uvm_report_enabled__392__id, __Vtask_uvm_report_enabled__395__Vfuncout);
                            __Vfunc_uvm_report_enabled__392__Vfuncout 
                                = __Vtask_uvm_report_enabled__395__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__392__Vfuncout))) {
                __Vtask_uvm_report_error__396__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__396__context_name = ""s;
                __Vtask_uvm_report_error__396__line = 0x0000062fU;
                __Vtask_uvm_report_error__396__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_error__396__verbosity = 0U;
                __Vtask_uvm_report_error__396__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, 
                                                                                ([&]() {
                                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__397__Vfuncout);
                                        }(), __Vfunc_get_full_name__397__Vfuncout)), "' not found in map '"s), 
                                                                       ([&]() {
                                    VL_NULL_CHECK(map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1583)
                                                                        ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__398__Vfuncout);
                                }(), __Vtask_get_full_name__398__Vfuncout)), "'"s));
                __Vtask_uvm_report_error__396__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__399__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__399__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__400__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__400__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__396__id, __Vtask_uvm_report_error__396__message, __Vtask_uvm_report_error__396__verbosity, __Vtask_uvm_report_error__396__filename, __Vtask_uvm_report_error__396__line, __Vtask_uvm_report_error__396__context_name, (IData)(__Vtask_uvm_report_error__396__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1587)->__VnoInFunc_get_mem_map_info(vlProcess, vlSymsp, 
                                                                                VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem>{this}, 1U, __Vtask_get_mem_map_info__402__Vfuncout);
        map_info = __Vtask_get_mem_map_info__402__Vfuncout;
        VL_NULL_CHECK(map_info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1588)->__PVT__frontdoor 
            = ftdr;
        __Vlabel0: ;
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_frontdoor(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_frontdoor> &get_frontdoor__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_frontdoor\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> __Vfunc_get_local_map__403__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__404__Vfuncout;
    __Vfunc_uvm_report_enabled__404__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__404__verbosity;
    __Vfunc_uvm_report_enabled__404__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__404__severity;
    __Vfunc_uvm_report_enabled__404__severity = 0;
    std::string __Vfunc_uvm_report_enabled__404__id;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__405__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__406__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__407__Vfuncout;
    __Vtask_uvm_report_enabled__407__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__408__id;
    std::string __Vtask_uvm_report_error__408__message;
    IData/*31:0*/ __Vtask_uvm_report_error__408__verbosity;
    __Vtask_uvm_report_error__408__verbosity = 0;
    std::string __Vtask_uvm_report_error__408__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__408__line;
    __Vtask_uvm_report_error__408__line = 0;
    std::string __Vtask_uvm_report_error__408__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__408__report_enabled_checked;
    __Vtask_uvm_report_error__408__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__409__Vfuncout;
    std::string __Vtask_get_full_name__410__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__411__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__412__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map_info> __Vtask_get_mem_map_info__414__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map_info> map_info;
    {
        this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, __Vfunc_get_local_map__403__Vfuncout);
        map = __Vfunc_get_local_map__403__Vfuncout;
        if ((VlNull{} == map)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__404__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__404__severity = 2U;
                            __Vfunc_uvm_report_enabled__404__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__405__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__405__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__406__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__406__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__404__verbosity, (IData)(__Vfunc_uvm_report_enabled__404__severity), __Vfunc_uvm_report_enabled__404__id, __Vtask_uvm_report_enabled__407__Vfuncout);
                            __Vfunc_uvm_report_enabled__404__Vfuncout 
                                = __Vtask_uvm_report_enabled__407__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__404__Vfuncout))) {
                __Vtask_uvm_report_error__408__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__408__context_name = ""s;
                __Vtask_uvm_report_error__408__line = 0x00000642U;
                __Vtask_uvm_report_error__408__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_error__408__verbosity = 0U;
                __Vtask_uvm_report_error__408__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, 
                                                                                ([&]() {
                                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__409__Vfuncout);
                                        }(), __Vfunc_get_full_name__409__Vfuncout)), "' not found in map '"s), 
                                                                       ([&]() {
                                    VL_NULL_CHECK(map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1602)
                                                                        ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__410__Vfuncout);
                                }(), __Vtask_get_full_name__410__Vfuncout)), "'"s));
                __Vtask_uvm_report_error__408__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__411__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__411__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__412__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__412__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__408__id, __Vtask_uvm_report_error__408__message, __Vtask_uvm_report_error__408__verbosity, __Vtask_uvm_report_error__408__filename, __Vtask_uvm_report_error__408__line, __Vtask_uvm_report_error__408__context_name, (IData)(__Vtask_uvm_report_error__408__report_enabled_checked));
            }
            get_frontdoor__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        VL_NULL_CHECK(map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1606)->__VnoInFunc_get_mem_map_info(vlProcess, vlSymsp, 
                                                                                VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem>{this}, 1U, __Vtask_get_mem_map_info__414__Vfuncout);
        map_info = __Vtask_get_mem_map_info__414__Vfuncout;
        get_frontdoor__Vfuncrtn = VL_NULL_CHECK(map_info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1607)
            ->__PVT__frontdoor;
        __Vlabel0: ;
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_set_backdoor(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_backdoor> bkdr, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_set_backdoor\n"); );
    // Body
    this->__PVT__m_fname = fname;
    this->__PVT__m_lineno = lineno;
    this->__PVT__m_backdoor = bkdr;
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_backdoor(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ inherited, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_backdoor> &get_backdoor__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_backdoor\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> __Vfunc_get_parent__415__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_backdoor> __Vtask_get_backdoor__416__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> __Vtask_get_parent__417__Vfuncout;
    // Body
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> unnamedblk459__DOT__blk;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_backdoor> unnamedblk459__DOT__bkdr;
    if (inherited) {
        this->__VnoInFunc_get_parent(vlSymsp, __Vfunc_get_parent__415__Vfuncout);
        unnamedblk459__DOT__blk = __Vfunc_get_parent__415__Vfuncout;
        {
            while ((VlNull{} != unnamedblk459__DOT__blk)) {
                VL_NULL_CHECK(unnamedblk459__DOT__blk, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1635)->__VnoInFunc_get_backdoor(vlSymsp, 1U, __Vtask_get_backdoor__416__Vfuncout);
                unnamedblk459__DOT__bkdr = __Vtask_get_backdoor__416__Vfuncout;
                if ((VlNull{} != unnamedblk459__DOT__bkdr)) {
                    this->__PVT__m_backdoor = unnamedblk459__DOT__bkdr;
                    goto __Vlabel0;
                }
                VL_NULL_CHECK(unnamedblk459__DOT__blk, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1640)->__VnoInFunc_get_parent(vlSymsp, __Vtask_get_parent__417__Vfuncout);
                unnamedblk459__DOT__blk = __Vtask_get_parent__417__Vfuncout;
            }
            __Vlabel0: ;
        }
    }
    get_backdoor__Vfuncrtn = this->__PVT__m_backdoor;
}

extern const VlWide<32>/*1023:0*/ Varchitecture__ConstPool__CONST_hd6b7ba52_0;
extern const VlWide<32>/*1023:0*/ Varchitecture__ConstPool__CONST_h2ae7f32a_0;

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_backdoor_read_func(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> rw, IData/*31:0*/ &backdoor_read_func__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_backdoor_read_func\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__419__Vfuncout;
    __Vfunc_uvm_report_enabled__419__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__419__verbosity;
    __Vfunc_uvm_report_enabled__419__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__419__severity;
    __Vfunc_uvm_report_enabled__419__severity = 0;
    std::string __Vfunc_uvm_report_enabled__419__id;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__420__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__421__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__422__Vfuncout;
    __Vtask_uvm_report_enabled__422__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__423__id;
    std::string __Vtask_uvm_report_info__423__message;
    IData/*31:0*/ __Vtask_uvm_report_info__423__verbosity;
    __Vtask_uvm_report_info__423__verbosity = 0;
    std::string __Vtask_uvm_report_info__423__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__423__line;
    __Vtask_uvm_report_info__423__line = 0;
    std::string __Vtask_uvm_report_info__423__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__423__report_enabled_checked;
    __Vtask_uvm_report_info__423__report_enabled_checked = 0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__424__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__425__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_hdl_read__427__Vfuncout;
    __Vfunc_uvm_hdl_read__427__Vfuncout = 0;
    VlWide<32>/*1023:0*/ __Vfunc_uvm_hdl_read__427__value;
    VL_ZERO_W(1024, __Vfunc_uvm_hdl_read__427__value);
    IData/*31:0*/ __Vfunc_uvm_hdl_read__429__Vfuncout;
    __Vfunc_uvm_hdl_read__429__Vfuncout = 0;
    VlWide<32>/*1023:0*/ __Vfunc_uvm_hdl_read__429__value;
    VL_ZERO_W(1024, __Vfunc_uvm_hdl_read__429__value);
    IData/*31:0*/ __Vfunc_uvm_report_enabled__431__Vfuncout;
    __Vfunc_uvm_report_enabled__431__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__431__verbosity;
    __Vfunc_uvm_report_enabled__431__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__431__severity;
    __Vfunc_uvm_report_enabled__431__severity = 0;
    std::string __Vfunc_uvm_report_enabled__431__id;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__432__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__433__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__434__Vfuncout;
    __Vtask_uvm_report_enabled__434__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__435__id;
    std::string __Vtask_uvm_report_error__435__message;
    IData/*31:0*/ __Vtask_uvm_report_error__435__verbosity;
    __Vtask_uvm_report_error__435__verbosity = 0;
    std::string __Vtask_uvm_report_error__435__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__435__line;
    __Vtask_uvm_report_error__435__line = 0;
    std::string __Vtask_uvm_report_error__435__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__435__report_enabled_checked;
    __Vtask_uvm_report_error__435__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__436__Vfuncout;
    std::string __Vfunc_uvm_hdl_concat2string__437__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_hdl_path_concat> __Vfunc_uvm_hdl_concat2string__437__concat;
    IData/*31:0*/ __Vfunc_uvm_hdl_concat2string__437__unnamedblk266__DOT__i;
    __Vfunc_uvm_hdl_concat2string__437__unnamedblk266__DOT__i = 0;
    Varchitecture_uvm_hdl_path_slice__struct__0 __Vfunc_uvm_hdl_concat2string__437__unnamedblk266__DOT__unnamedblk267__DOT__slice;
    __Vfunc_uvm_hdl_concat2string__437__unnamedblk266__DOT__unnamedblk267__DOT__slice.__PVT__offset = 0;
    __Vfunc_uvm_hdl_concat2string__437__unnamedblk266__DOT__unnamedblk267__DOT__slice.__PVT__size = 0;
    std::string __Vfunc_uvm_hdl_concat2string__437__image;
    std::string __Vfunc_uvm_hdl_concat2string__438__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_hdl_path_concat> __Vfunc_uvm_hdl_concat2string__438__concat;
    IData/*31:0*/ __Vfunc_uvm_hdl_concat2string__438__unnamedblk266__DOT__i;
    __Vfunc_uvm_hdl_concat2string__438__unnamedblk266__DOT__i = 0;
    Varchitecture_uvm_hdl_path_slice__struct__0 __Vfunc_uvm_hdl_concat2string__438__unnamedblk266__DOT__unnamedblk267__DOT__slice;
    __Vfunc_uvm_hdl_concat2string__438__unnamedblk266__DOT__unnamedblk267__DOT__slice.__PVT__offset = 0;
    __Vfunc_uvm_hdl_concat2string__438__unnamedblk266__DOT__unnamedblk267__DOT__slice.__PVT__size = 0;
    std::string __Vfunc_uvm_hdl_concat2string__438__image;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__439__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__440__Vfuncout;
    VlWide<32>/*1023:0*/ __Vtemp_1;
    VlWide<32>/*1023:0*/ __Vtemp_2;
    VlWide<32>/*1023:0*/ __Vtemp_3;
    std::string __Vtemp_5;
    std::string __Vtemp_6;
    std::string __Vtemp_7;
    // Body
    IData/*31:0*/ unnamedblk460__DOT__mem_idx;
    unnamedblk460__DOT__mem_idx = 0;
    std::string unnamedblk460__DOT__unnamedblk461__DOT__idx;
    IData/*31:0*/ unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__i;
    unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__i = 0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__hdl_concat;
    IData/*31:0*/ unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__j;
    unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__j = 0;
    std::string unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__unnamedblk465__DOT__hdl_path;
    QData/*63:0*/ unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__slice;
    unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__slice = 0;
    IData/*31:0*/ unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__k;
    unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__k = 0;
    IData/*31:0*/ unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vincrement1;
    __Vincrement1 = 0;
    VlQueue<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_hdl_path_concat>> paths;
    VlWide<32>/*1023:0*/ val;
    VL_ZERO_W(1024, val);
    CData/*0:0*/ ok;
    ok = 0;
    {
        ok = 1U;
        this->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, paths, 
                                            VL_CVT_PACK_STR_NN(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1656)
                                                               ->__PVT__bd_kind), "."s);
        unnamedblk460__DOT__mem_idx = 0U;
        while (VL_LTS_III(32, unnamedblk460__DOT__mem_idx, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1658)
                          ->__PVT__value.size())) {
            unnamedblk460__DOT__unnamedblk461__DOT__idx 
                = VL_SFORMATF_N_NX("%0d",0,32,((IData)(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1660)
                                                       ->__PVT__offset) 
                                               + unnamedblk460__DOT__mem_idx)) ;
            unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__i, paths.size())) {
                unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__hdl_concat 
                    = paths.at(unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__i);
                val[0U] = Varchitecture__ConstPool__CONST_hd6b7ba52_0[0U];
                val[1U] = Varchitecture__ConstPool__CONST_hd6b7ba52_0[1U];
                val[2U] = Varchitecture__ConstPool__CONST_hd6b7ba52_0[2U];
                val[3U] = Varchitecture__ConstPool__CONST_hd6b7ba52_0[3U];
                val[4U] = Varchitecture__ConstPool__CONST_hd6b7ba52_0[4U];
                val[5U] = Varchitecture__ConstPool__CONST_hd6b7ba52_0[5U];
                val[6U] = Varchitecture__ConstPool__CONST_hd6b7ba52_0[6U];
                val[7U] = Varchitecture__ConstPool__CONST_hd6b7ba52_0[7U];
                val[8U] = Varchitecture__ConstPool__CONST_hd6b7ba52_0[8U];
                val[9U] = Varchitecture__ConstPool__CONST_hd6b7ba52_0[9U];
                val[0x0000000aU] = Varchitecture__ConstPool__CONST_hd6b7ba52_0[0x0000000aU];
                val[0x0000000bU] = Varchitecture__ConstPool__CONST_hd6b7ba52_0[0x0000000bU];
                val[0x0000000cU] = Varchitecture__ConstPool__CONST_hd6b7ba52_0[0x0000000cU];
                val[0x0000000dU] = Varchitecture__ConstPool__CONST_hd6b7ba52_0[0x0000000dU];
                val[0x0000000eU] = Varchitecture__ConstPool__CONST_hd6b7ba52_0[0x0000000eU];
                val[0x0000000fU] = Varchitecture__ConstPool__CONST_hd6b7ba52_0[0x0000000fU];
                val[0x00000010U] = Varchitecture__ConstPool__CONST_hd6b7ba52_0[0x00000010U];
                val[0x00000011U] = Varchitecture__ConstPool__CONST_hd6b7ba52_0[0x00000011U];
                val[0x00000012U] = Varchitecture__ConstPool__CONST_hd6b7ba52_0[0x00000012U];
                val[0x00000013U] = Varchitecture__ConstPool__CONST_hd6b7ba52_0[0x00000013U];
                val[0x00000014U] = Varchitecture__ConstPool__CONST_hd6b7ba52_0[0x00000014U];
                val[0x00000015U] = Varchitecture__ConstPool__CONST_hd6b7ba52_0[0x00000015U];
                val[0x00000016U] = Varchitecture__ConstPool__CONST_hd6b7ba52_0[0x00000016U];
                val[0x00000017U] = Varchitecture__ConstPool__CONST_hd6b7ba52_0[0x00000017U];
                val[0x00000018U] = Varchitecture__ConstPool__CONST_hd6b7ba52_0[0x00000018U];
                val[0x00000019U] = Varchitecture__ConstPool__CONST_hd6b7ba52_0[0x00000019U];
                val[0x0000001aU] = Varchitecture__ConstPool__CONST_hd6b7ba52_0[0x0000001aU];
                val[0x0000001bU] = Varchitecture__ConstPool__CONST_hd6b7ba52_0[0x0000001bU];
                val[0x0000001cU] = Varchitecture__ConstPool__CONST_hd6b7ba52_0[0x0000001cU];
                val[0x0000001dU] = Varchitecture__ConstPool__CONST_hd6b7ba52_0[0x0000001dU];
                val[0x0000001eU] = Varchitecture__ConstPool__CONST_hd6b7ba52_0[0x0000001eU];
                val[0x0000001fU] = Varchitecture__ConstPool__CONST_hd6b7ba52_0[0x0000001fU];
                unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__j = 0U;
                while (VL_LTS_III(32, unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__j, VL_NULL_CHECK(unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__hdl_concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1664)
                                  ->__PVT__slices.size())) {
                    {
                        unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__unnamedblk465__DOT__hdl_path 
                            = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(VL_NULL_CHECK(unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__hdl_concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1665)
                                                                           ->__PVT__slices.at(unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__j)
                                                                           .__PVT__path, "["s), unnamedblk460__DOT__unnamedblk461__DOT__idx), "]"s);
                        if ((0U != ([&]() {
                                        __Vfunc_uvm_report_enabled__419__id = "RegModel"s;
                                        __Vfunc_uvm_report_enabled__419__severity = 0U;
                                        __Vfunc_uvm_report_enabled__419__verbosity = 0x000001f4U;
                                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__420__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                            = __Vfunc_get__420__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__421__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                            = __Vtask_get_root__421__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__419__verbosity, (IData)(__Vfunc_uvm_report_enabled__419__severity), __Vfunc_uvm_report_enabled__419__id, __Vtask_uvm_report_enabled__422__Vfuncout);
                                        __Vfunc_uvm_report_enabled__419__Vfuncout 
                                            = __Vtask_uvm_report_enabled__422__Vfuncout;
                                    }(), __Vfunc_uvm_report_enabled__419__Vfuncout))) {
                            __Vtask_uvm_report_info__423__report_enabled_checked = 1U;
                            __Vtask_uvm_report_info__423__context_name = ""s;
                            __Vtask_uvm_report_info__423__line = 0x00000683U;
                            __Vtask_uvm_report_info__423__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                            __Vtask_uvm_report_info__423__verbosity = 0x000001f4U;
                            __Vtask_uvm_report_info__423__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN("backdoor_read from "s, unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__unnamedblk465__DOT__hdl_path));
                            __Vtask_uvm_report_info__423__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__424__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                                = __Vfunc_get__424__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__425__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                                = __Vtask_get_root__425__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__423__id, __Vtask_uvm_report_info__423__message, __Vtask_uvm_report_info__423__verbosity, __Vtask_uvm_report_info__423__filename, __Vtask_uvm_report_info__423__line, __Vtask_uvm_report_info__423__context_name, (IData)(__Vtask_uvm_report_info__423__report_enabled_checked));
                        }
                        if (VL_GTS_III(32, 0U, VL_NULL_CHECK(unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__hdl_concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1669)
                                       ->__PVT__slices.at(unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__j)
                                       .__PVT__offset)) {
                            ok = ((IData)(ok) & ([&]() {
                                        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "UVM_HDL_READ"s, "uvm_hdl DPI routines are compiled off. Recompile without +define+UVM_HDL_NO_DPI"s, 0U, ""s, 0U, ""s, 0U);
                                        __Vfunc_uvm_hdl_read__427__Vfuncout = 0U;
                                        val[0U] = __Vfunc_uvm_hdl_read__427__value[0U];
                                        val[1U] = __Vfunc_uvm_hdl_read__427__value[1U];
                                        val[2U] = __Vfunc_uvm_hdl_read__427__value[2U];
                                        val[3U] = __Vfunc_uvm_hdl_read__427__value[3U];
                                        val[4U] = __Vfunc_uvm_hdl_read__427__value[4U];
                                        val[5U] = __Vfunc_uvm_hdl_read__427__value[5U];
                                        val[6U] = __Vfunc_uvm_hdl_read__427__value[6U];
                                        val[7U] = __Vfunc_uvm_hdl_read__427__value[7U];
                                        val[8U] = __Vfunc_uvm_hdl_read__427__value[8U];
                                        val[9U] = __Vfunc_uvm_hdl_read__427__value[9U];
                                        val[0x0000000aU] 
                                            = __Vfunc_uvm_hdl_read__427__value[0x0000000aU];
                                        val[0x0000000bU] 
                                            = __Vfunc_uvm_hdl_read__427__value[0x0000000bU];
                                        val[0x0000000cU] 
                                            = __Vfunc_uvm_hdl_read__427__value[0x0000000cU];
                                        val[0x0000000dU] 
                                            = __Vfunc_uvm_hdl_read__427__value[0x0000000dU];
                                        val[0x0000000eU] 
                                            = __Vfunc_uvm_hdl_read__427__value[0x0000000eU];
                                        val[0x0000000fU] 
                                            = __Vfunc_uvm_hdl_read__427__value[0x0000000fU];
                                        val[0x00000010U] 
                                            = __Vfunc_uvm_hdl_read__427__value[0x00000010U];
                                        val[0x00000011U] 
                                            = __Vfunc_uvm_hdl_read__427__value[0x00000011U];
                                        val[0x00000012U] 
                                            = __Vfunc_uvm_hdl_read__427__value[0x00000012U];
                                        val[0x00000013U] 
                                            = __Vfunc_uvm_hdl_read__427__value[0x00000013U];
                                        val[0x00000014U] 
                                            = __Vfunc_uvm_hdl_read__427__value[0x00000014U];
                                        val[0x00000015U] 
                                            = __Vfunc_uvm_hdl_read__427__value[0x00000015U];
                                        val[0x00000016U] 
                                            = __Vfunc_uvm_hdl_read__427__value[0x00000016U];
                                        val[0x00000017U] 
                                            = __Vfunc_uvm_hdl_read__427__value[0x00000017U];
                                        val[0x00000018U] 
                                            = __Vfunc_uvm_hdl_read__427__value[0x00000018U];
                                        val[0x00000019U] 
                                            = __Vfunc_uvm_hdl_read__427__value[0x00000019U];
                                        val[0x0000001aU] 
                                            = __Vfunc_uvm_hdl_read__427__value[0x0000001aU];
                                        val[0x0000001bU] 
                                            = __Vfunc_uvm_hdl_read__427__value[0x0000001bU];
                                        val[0x0000001cU] 
                                            = __Vfunc_uvm_hdl_read__427__value[0x0000001cU];
                                        val[0x0000001dU] 
                                            = __Vfunc_uvm_hdl_read__427__value[0x0000001dU];
                                        val[0x0000001eU] 
                                            = __Vfunc_uvm_hdl_read__427__value[0x0000001eU];
                                        val[0x0000001fU] 
                                            = __Vfunc_uvm_hdl_read__427__value[0x0000001fU];
                                    }(), __Vfunc_uvm_hdl_read__427__Vfuncout));
                            goto __Vlabel1;
                        }
                        unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__k 
                            = VL_NULL_CHECK(unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__hdl_concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1675)
                            ->__PVT__slices.at(unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__j)
                            .__PVT__offset;
                        ok = ((IData)(ok) & ([&]() {
                                    vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "UVM_HDL_READ"s, "uvm_hdl DPI routines are compiled off. Recompile without +define+UVM_HDL_NO_DPI"s, 0U, ""s, 0U, ""s, 0U);
                                    __Vfunc_uvm_hdl_read__429__Vfuncout = 0U;
                                    unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__slice 
                                        = (((QData)((IData)(
                                                            __Vfunc_uvm_hdl_read__429__value[1U])) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(
                                                             __Vfunc_uvm_hdl_read__429__value[0U])));
                                }(), __Vfunc_uvm_hdl_read__429__Vfuncout));
                        unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk1_1__DOT____Vrepeat0 
                            = VL_NULL_CHECK(unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__hdl_concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1677)
                            ->__PVT__slices.at(unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__j)
                            .__PVT__size;
                        while (VL_LTS_III(32, 0U, unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
                            __Vincrement1 = unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__k;
                            unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__k 
                                = ((IData)(1U) + unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__k);
                            val[(0x0000001fU & (__Vincrement1 
                                                >> 5U))] 
                                = (((~ ((IData)(1U) 
                                        << (0x0000001fU 
                                            & __Vincrement1))) 
                                    & val[(0x0000001fU 
                                           & (__Vincrement1 
                                              >> 5U))]) 
                                   | ((1U & (IData)(unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__slice)) 
                                      << (0x0000001fU 
                                          & __Vincrement1)));
                            unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__slice 
                                = VL_SHIFTR_QQI(64,64,32, unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__slice, 1U);
                            unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk1_1__DOT____Vrepeat0 
                                = (unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk1_1__DOT____Vrepeat0 
                                   - (IData)(1U));
                        }
                        __Vlabel1: ;
                    }
                    unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__j 
                        = ((IData)(1U) + unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__unnamedblk463__DOT__unnamedblk464__DOT__j);
                }
                VL_SHIFTL_WWI(1024,1024,32, __Vtemp_2, Varchitecture__ConstPool__CONST_h2ae7f32a_0, this->__PVT__m_n_bits);
                VL_SUB_W(32, __Vtemp_3, __Vtemp_2, Varchitecture__ConstPool__CONST_h2ae7f32a_0);
                __Vtemp_1[1U] = (val[1U] & __Vtemp_3[1U]);
                __Vtemp_1[2U] = (val[2U] & __Vtemp_3[2U]);
                __Vtemp_1[3U] = (val[3U] & __Vtemp_3[3U]);
                __Vtemp_1[4U] = (val[4U] & __Vtemp_3[4U]);
                __Vtemp_1[5U] = (val[5U] & __Vtemp_3[5U]);
                __Vtemp_1[6U] = (val[6U] & __Vtemp_3[6U]);
                __Vtemp_1[7U] = (val[7U] & __Vtemp_3[7U]);
                __Vtemp_1[8U] = (val[8U] & __Vtemp_3[8U]);
                __Vtemp_1[9U] = (val[9U] & __Vtemp_3[9U]);
                __Vtemp_1[0x0000000aU] = (val[0x0000000aU] 
                                          & __Vtemp_3[0x0000000aU]);
                __Vtemp_1[0x0000000bU] = (val[0x0000000bU] 
                                          & __Vtemp_3[0x0000000bU]);
                __Vtemp_1[0x0000000cU] = (val[0x0000000cU] 
                                          & __Vtemp_3[0x0000000cU]);
                __Vtemp_1[0x0000000dU] = (val[0x0000000dU] 
                                          & __Vtemp_3[0x0000000dU]);
                __Vtemp_1[0x0000000eU] = (val[0x0000000eU] 
                                          & __Vtemp_3[0x0000000eU]);
                __Vtemp_1[0x0000000fU] = (val[0x0000000fU] 
                                          & __Vtemp_3[0x0000000fU]);
                __Vtemp_1[0x00000010U] = (val[0x00000010U] 
                                          & __Vtemp_3[0x00000010U]);
                __Vtemp_1[0x00000011U] = (val[0x00000011U] 
                                          & __Vtemp_3[0x00000011U]);
                __Vtemp_1[0x00000012U] = (val[0x00000012U] 
                                          & __Vtemp_3[0x00000012U]);
                __Vtemp_1[0x00000013U] = (val[0x00000013U] 
                                          & __Vtemp_3[0x00000013U]);
                __Vtemp_1[0x00000014U] = (val[0x00000014U] 
                                          & __Vtemp_3[0x00000014U]);
                __Vtemp_1[0x00000015U] = (val[0x00000015U] 
                                          & __Vtemp_3[0x00000015U]);
                __Vtemp_1[0x00000016U] = (val[0x00000016U] 
                                          & __Vtemp_3[0x00000016U]);
                __Vtemp_1[0x00000017U] = (val[0x00000017U] 
                                          & __Vtemp_3[0x00000017U]);
                __Vtemp_1[0x00000018U] = (val[0x00000018U] 
                                          & __Vtemp_3[0x00000018U]);
                __Vtemp_1[0x00000019U] = (val[0x00000019U] 
                                          & __Vtemp_3[0x00000019U]);
                __Vtemp_1[0x0000001aU] = (val[0x0000001aU] 
                                          & __Vtemp_3[0x0000001aU]);
                __Vtemp_1[0x0000001bU] = (val[0x0000001bU] 
                                          & __Vtemp_3[0x0000001bU]);
                __Vtemp_1[0x0000001cU] = (val[0x0000001cU] 
                                          & __Vtemp_3[0x0000001cU]);
                __Vtemp_1[0x0000001dU] = (val[0x0000001dU] 
                                          & __Vtemp_3[0x0000001dU]);
                __Vtemp_1[0x0000001eU] = (val[0x0000001eU] 
                                          & __Vtemp_3[0x0000001eU]);
                __Vtemp_1[0x0000001fU] = (val[0x0000001fU] 
                                          & __Vtemp_3[0x0000001fU]);
                val[0U] = (val[0U] & __Vtemp_3[0U]);
                val[1U] = __Vtemp_1[1U];
                val[2U] = __Vtemp_1[2U];
                val[3U] = __Vtemp_1[3U];
                val[4U] = __Vtemp_1[4U];
                val[5U] = __Vtemp_1[5U];
                val[6U] = __Vtemp_1[6U];
                val[7U] = __Vtemp_1[7U];
                val[8U] = __Vtemp_1[8U];
                val[9U] = __Vtemp_1[9U];
                val[0x0000000aU] = __Vtemp_1[0x0000000aU];
                val[0x0000000bU] = __Vtemp_1[0x0000000bU];
                val[0x0000000cU] = __Vtemp_1[0x0000000cU];
                val[0x0000000dU] = __Vtemp_1[0x0000000dU];
                val[0x0000000eU] = __Vtemp_1[0x0000000eU];
                val[0x0000000fU] = __Vtemp_1[0x0000000fU];
                val[0x00000010U] = __Vtemp_1[0x00000010U];
                val[0x00000011U] = __Vtemp_1[0x00000011U];
                val[0x00000012U] = __Vtemp_1[0x00000012U];
                val[0x00000013U] = __Vtemp_1[0x00000013U];
                val[0x00000014U] = __Vtemp_1[0x00000014U];
                val[0x00000015U] = __Vtemp_1[0x00000015U];
                val[0x00000016U] = __Vtemp_1[0x00000016U];
                val[0x00000017U] = __Vtemp_1[0x00000017U];
                val[0x00000018U] = __Vtemp_1[0x00000018U];
                val[0x00000019U] = __Vtemp_1[0x00000019U];
                val[0x0000001aU] = __Vtemp_1[0x0000001aU];
                val[0x0000001bU] = __Vtemp_1[0x0000001bU];
                val[0x0000001cU] = __Vtemp_1[0x0000001cU];
                val[0x0000001dU] = __Vtemp_1[0x0000001dU];
                val[0x0000001eU] = __Vtemp_1[0x0000001eU];
                val[0x0000001fU] = __Vtemp_1[0x0000001fU];
                if ((0U == unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__i)) {
                    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1687)->__PVT__value.atWrite(unnamedblk460__DOT__mem_idx) 
                        = (((QData)((IData)(val[1U])) 
                            << 0x00000020U) | (QData)((IData)(
                                                              val[0U])));
                }
                if ((0U != ((((((((((((((((((((((((
                                                   ((((((((val[0U] 
                                                           ^ (IData)(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1689)
                                                                     ->__PVT__value.at(unnamedblk460__DOT__mem_idx))) 
                                                          | (val[1U] 
                                                             ^ (IData)(
                                                                       (VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1689)
                                                                        ->__PVT__value.at(unnamedblk460__DOT__mem_idx) 
                                                                        >> 0x00000020U)))) 
                                                         | val[2U]) 
                                                        | val[3U]) 
                                                       | val[4U]) 
                                                      | val[5U]) 
                                                     | val[6U]) 
                                                    | val[7U]) 
                                                   | val[8U]) 
                                                  | val[9U]) 
                                                 | val[0x0000000aU]) 
                                                | val[0x0000000bU]) 
                                               | val[0x0000000cU]) 
                                              | val[0x0000000dU]) 
                                             | val[0x0000000eU]) 
                                            | val[0x0000000fU]) 
                                           | val[0x00000010U]) 
                                          | val[0x00000011U]) 
                                         | val[0x00000012U]) 
                                        | val[0x00000013U]) 
                                       | val[0x00000014U]) 
                                      | val[0x00000015U]) 
                                     | val[0x00000016U]) 
                                    | val[0x00000017U]) 
                                   | val[0x00000018U]) 
                                  | val[0x00000019U]) 
                                 | val[0x0000001aU]) 
                                | val[0x0000001bU]) 
                               | val[0x0000001cU]) 
                              | val[0x0000001dU]) | 
                             val[0x0000001eU]) | val[0x0000001fU]))) {
                    if ((0U != ([&]() {
                                    __Vfunc_uvm_report_enabled__431__id = "RegModel"s;
                                    __Vfunc_uvm_report_enabled__431__severity = 2U;
                                    __Vfunc_uvm_report_enabled__431__verbosity = 0U;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__432__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                        = __Vfunc_get__432__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__433__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                        = __Vtask_get_root__433__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__431__verbosity, (IData)(__Vfunc_uvm_report_enabled__431__severity), __Vfunc_uvm_report_enabled__431__id, __Vtask_uvm_report_enabled__434__Vfuncout);
                                    __Vfunc_uvm_report_enabled__431__Vfuncout 
                                        = __Vtask_uvm_report_enabled__434__Vfuncout;
                                }(), __Vfunc_uvm_report_enabled__431__Vfuncout))) {
                        __Vtask_uvm_report_error__435__report_enabled_checked = 1U;
                        __Vtask_uvm_report_error__435__context_name = ""s;
                        __Vtask_uvm_report_error__435__line = 0x0000069cU;
                        __Vtask_uvm_report_error__435__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                        __Vtask_uvm_report_error__435__verbosity = 0U;
                        __Vtemp_5 = ([&]() {
                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__436__Vfuncout);
                            }(), __Vfunc_get_full_name__436__Vfuncout);
                        __Vtemp_6 = ([&]() {
                                __Vfunc_uvm_hdl_concat2string__437__concat 
                                    = paths.at(0U);
                                __Vfunc_uvm_hdl_concat2string__437__unnamedblk266__DOT__i = 0;
                                __Vfunc_uvm_hdl_concat2string__437__unnamedblk266__DOT__unnamedblk267__DOT__slice.__PVT__path.clear();
                                __Vfunc_uvm_hdl_concat2string__437__unnamedblk266__DOT__unnamedblk267__DOT__slice.__PVT__offset = 0;
                                __Vfunc_uvm_hdl_concat2string__437__unnamedblk266__DOT__unnamedblk267__DOT__slice.__PVT__size = 0;
                                __Vfunc_uvm_hdl_concat2string__437__image.clear();
                                {
                                    __Vfunc_uvm_hdl_concat2string__437__image = "{"s;
                                    if ((((1U == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__437__concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 399)
                                           ->__PVT__slices.size()) 
                                          && (0xffffffffU 
                                              == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__437__concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 400)
                                              ->__PVT__slices.at(0U)
                                              .__PVT__offset)) 
                                         && (0xffffffffU 
                                             == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__437__concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 401)
                                             ->__PVT__slices.at(0U)
                                             .__PVT__size))) {
                                        __Vfunc_uvm_hdl_concat2string__437__Vfuncout 
                                            = VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__437__concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 402)
                                            ->__PVT__slices.at(0U)
                                            .__PVT__path;
                                        goto __Vlabel2;
                                    }
                                    __Vfunc_uvm_hdl_concat2string__437__unnamedblk266__DOT__i = 0U;
                                    while (VL_LTS_III(32, __Vfunc_uvm_hdl_concat2string__437__unnamedblk266__DOT__i, VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__437__concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 404)
                                                      ->__PVT__slices.size())) {
                                        __Vfunc_uvm_hdl_concat2string__437__unnamedblk266__DOT__unnamedblk267__DOT__slice 
                                            = VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__437__concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 405)
                                            ->__PVT__slices.at(__Vfunc_uvm_hdl_concat2string__437__unnamedblk266__DOT__i);
                                        __Vfunc_uvm_hdl_concat2string__437__image 
                                            = VL_CONCATN_NNN(
                                                             VL_CONCATN_NNN(__Vfunc_uvm_hdl_concat2string__437__image, 
                                                                            VL_CVT_PACK_STR_NI(
                                                                                ((0U 
                                                                                == __Vfunc_uvm_hdl_concat2string__437__unnamedblk266__DOT__i)
                                                                                 ? 0U
                                                                                 : 0x2c20U))), __Vfunc_uvm_hdl_concat2string__437__unnamedblk266__DOT__unnamedblk267__DOT__slice
                                                             .__PVT__path);
                                        if (VL_LTES_III(32, 0U, __Vfunc_uvm_hdl_concat2string__437__unnamedblk266__DOT__unnamedblk267__DOT__slice
                                                        .__PVT__offset)) {
                                            __Vfunc_uvm_hdl_concat2string__437__image 
                                                = VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(__Vfunc_uvm_hdl_concat2string__437__image, "@"s), VL_SFORMATF_N_NX("[%0d +: %0d]",0,
                                                                                32,
                                                                                __Vfunc_uvm_hdl_concat2string__437__unnamedblk266__DOT__unnamedblk267__DOT__slice
                                                                                .__PVT__offset,
                                                                                32,
                                                                                __Vfunc_uvm_hdl_concat2string__437__unnamedblk266__DOT__unnamedblk267__DOT__slice
                                                                                .__PVT__size) );
                                        }
                                        __Vfunc_uvm_hdl_concat2string__437__unnamedblk266__DOT__i 
                                            = ((IData)(1U) 
                                               + __Vfunc_uvm_hdl_concat2string__437__unnamedblk266__DOT__i);
                                    }
                                    __Vfunc_uvm_hdl_concat2string__437__image 
                                        = VL_CONCATN_NNN(__Vfunc_uvm_hdl_concat2string__437__image, "}"s);
                                    __Vfunc_uvm_hdl_concat2string__437__Vfuncout 
                                        = __Vfunc_uvm_hdl_concat2string__437__image;
                                    __Vlabel2: ;
                                }
                            }(), __Vfunc_uvm_hdl_concat2string__437__Vfuncout);
                        __Vtemp_7 = ([&]() {
                                __Vfunc_uvm_hdl_concat2string__438__concat 
                                    = paths.at(unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__i);
                                __Vfunc_uvm_hdl_concat2string__438__unnamedblk266__DOT__i = 0;
                                __Vfunc_uvm_hdl_concat2string__438__unnamedblk266__DOT__unnamedblk267__DOT__slice.__PVT__path.clear();
                                __Vfunc_uvm_hdl_concat2string__438__unnamedblk266__DOT__unnamedblk267__DOT__slice.__PVT__offset = 0;
                                __Vfunc_uvm_hdl_concat2string__438__unnamedblk266__DOT__unnamedblk267__DOT__slice.__PVT__size = 0;
                                __Vfunc_uvm_hdl_concat2string__438__image.clear();
                                {
                                    __Vfunc_uvm_hdl_concat2string__438__image = "{"s;
                                    if ((((1U == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__438__concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 399)
                                           ->__PVT__slices.size()) 
                                          && (0xffffffffU 
                                              == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__438__concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 400)
                                              ->__PVT__slices.at(0U)
                                              .__PVT__offset)) 
                                         && (0xffffffffU 
                                             == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__438__concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 401)
                                             ->__PVT__slices.at(0U)
                                             .__PVT__size))) {
                                        __Vfunc_uvm_hdl_concat2string__438__Vfuncout 
                                            = VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__438__concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 402)
                                            ->__PVT__slices.at(0U)
                                            .__PVT__path;
                                        goto __Vlabel3;
                                    }
                                    __Vfunc_uvm_hdl_concat2string__438__unnamedblk266__DOT__i = 0U;
                                    while (VL_LTS_III(32, __Vfunc_uvm_hdl_concat2string__438__unnamedblk266__DOT__i, VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__438__concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 404)
                                                      ->__PVT__slices.size())) {
                                        __Vfunc_uvm_hdl_concat2string__438__unnamedblk266__DOT__unnamedblk267__DOT__slice 
                                            = VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__438__concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 405)
                                            ->__PVT__slices.at(__Vfunc_uvm_hdl_concat2string__438__unnamedblk266__DOT__i);
                                        __Vfunc_uvm_hdl_concat2string__438__image 
                                            = VL_CONCATN_NNN(
                                                             VL_CONCATN_NNN(__Vfunc_uvm_hdl_concat2string__438__image, 
                                                                            VL_CVT_PACK_STR_NI(
                                                                                ((0U 
                                                                                == __Vfunc_uvm_hdl_concat2string__438__unnamedblk266__DOT__i)
                                                                                 ? 0U
                                                                                 : 0x2c20U))), __Vfunc_uvm_hdl_concat2string__438__unnamedblk266__DOT__unnamedblk267__DOT__slice
                                                             .__PVT__path);
                                        if (VL_LTES_III(32, 0U, __Vfunc_uvm_hdl_concat2string__438__unnamedblk266__DOT__unnamedblk267__DOT__slice
                                                        .__PVT__offset)) {
                                            __Vfunc_uvm_hdl_concat2string__438__image 
                                                = VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(__Vfunc_uvm_hdl_concat2string__438__image, "@"s), VL_SFORMATF_N_NX("[%0d +: %0d]",0,
                                                                                32,
                                                                                __Vfunc_uvm_hdl_concat2string__438__unnamedblk266__DOT__unnamedblk267__DOT__slice
                                                                                .__PVT__offset,
                                                                                32,
                                                                                __Vfunc_uvm_hdl_concat2string__438__unnamedblk266__DOT__unnamedblk267__DOT__slice
                                                                                .__PVT__size) );
                                        }
                                        __Vfunc_uvm_hdl_concat2string__438__unnamedblk266__DOT__i 
                                            = ((IData)(1U) 
                                               + __Vfunc_uvm_hdl_concat2string__438__unnamedblk266__DOT__i);
                                    }
                                    __Vfunc_uvm_hdl_concat2string__438__image 
                                        = VL_CONCATN_NNN(__Vfunc_uvm_hdl_concat2string__438__image, "}"s);
                                    __Vfunc_uvm_hdl_concat2string__438__Vfuncout 
                                        = __Vfunc_uvm_hdl_concat2string__438__image;
                                    __Vlabel3: ;
                                }
                            }(), __Vfunc_uvm_hdl_concat2string__438__Vfuncout);
                        __Vtask_uvm_report_error__435__message 
                            = VL_SFORMATF_N_NX("Backdoor read of register %@ with multiple HDL copies: values are not the same: %0x at path '%@', and %0x at path '%@'. Returning first value.",0,
                                               -1,&(__Vtemp_5),
                                               64,VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1692)
                                               ->__PVT__value.at(unnamedblk460__DOT__mem_idx),
                                               -1,&(__Vtemp_6),
                                               1024,
                                               val.data(),
                                               -1,&(__Vtemp_7)) ;
                        __Vtask_uvm_report_error__435__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__439__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                            = __Vfunc_get__439__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__440__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                            = __Vtask_get_root__440__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__435__id, __Vtask_uvm_report_error__435__message, __Vtask_uvm_report_error__435__verbosity, __Vtask_uvm_report_error__435__filename, __Vtask_uvm_report_error__435__line, __Vtask_uvm_report_error__435__context_name, (IData)(__Vtask_uvm_report_error__435__report_enabled_checked));
                    }
                    backdoor_read_func__Vfuncrtn = 1U;
                    goto __Vlabel0;
                }
                unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__i 
                    = ((IData)(1U) + unnamedblk460__DOT__unnamedblk461__DOT__unnamedblk462__DOT__i);
            }
            unnamedblk460__DOT__mem_idx = ((IData)(1U) 
                                           + unnamedblk460__DOT__mem_idx);
        }
        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1698)->__PVT__status 
            = ((IData)(ok) ? 0U : 1U);
        backdoor_read_func__Vfuncrtn = VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1700)
            ->__PVT__status;
        __Vlabel0: ;
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_backdoor_read(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_backdoor_read\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_backdoor_read_func__442__Vfuncout;
    __Vfunc_backdoor_read_func__442__Vfuncout = 0;
    // Body
    this->__VnoInFunc_backdoor_read_func(vlProcess, vlSymsp, rw, __Vfunc_backdoor_read_func__442__Vfuncout);
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1707)->__PVT__status 
        = __Vfunc_backdoor_read_func__442__Vfuncout;
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_backdoor_write(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_backdoor_write\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__444__Vfuncout;
    __Vfunc_uvm_report_enabled__444__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__444__verbosity;
    __Vfunc_uvm_report_enabled__444__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__444__severity;
    __Vfunc_uvm_report_enabled__444__severity = 0;
    std::string __Vfunc_uvm_report_enabled__444__id;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__445__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__446__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__447__Vfuncout;
    __Vtask_uvm_report_enabled__447__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__448__id;
    std::string __Vtask_uvm_report_info__448__message;
    IData/*31:0*/ __Vtask_uvm_report_info__448__verbosity;
    __Vtask_uvm_report_info__448__verbosity = 0;
    std::string __Vtask_uvm_report_info__448__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__448__line;
    __Vtask_uvm_report_info__448__line = 0;
    std::string __Vtask_uvm_report_info__448__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__448__report_enabled_checked;
    __Vtask_uvm_report_info__448__report_enabled_checked = 0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__449__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__450__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_hdl_deposit__452__Vfuncout;
    __Vfunc_uvm_hdl_deposit__452__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_hdl_deposit__454__Vfuncout;
    __Vfunc_uvm_hdl_deposit__454__Vfuncout = 0;
    std::string __Vtemp_1;
    // Body
    IData/*31:0*/ unnamedblk467__DOT__mem_idx;
    unnamedblk467__DOT__mem_idx = 0;
    std::string unnamedblk467__DOT__unnamedblk468__DOT__idx;
    IData/*31:0*/ unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__i;
    unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__i = 0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__hdl_concat;
    IData/*31:0*/ unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__j;
    unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__j = 0;
    QData/*63:0*/ unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__unnamedblk472__DOT__slice;
    unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__unnamedblk472__DOT__slice = 0;
    VlQueue<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_hdl_path_concat>> paths;
    CData/*0:0*/ ok;
    ok = 0;
    ok = 1U;
    this->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, paths, 
                                        VL_CVT_PACK_STR_NN(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1719)
                                                           ->__PVT__bd_kind), "."s);
    unnamedblk467__DOT__mem_idx = 0U;
    while (VL_LTS_III(32, unnamedblk467__DOT__mem_idx, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1721)
                      ->__PVT__value.size())) {
        unnamedblk467__DOT__unnamedblk468__DOT__idx 
            = VL_SFORMATF_N_NX("%0d",0,32,((IData)(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1723)
                                                   ->__PVT__offset) 
                                           + unnamedblk467__DOT__mem_idx)) ;
        unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__i, paths.size())) {
            unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__hdl_concat 
                = paths.at(unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__i);
            unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__j = 0U;
            while (VL_LTS_III(32, unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__j, VL_NULL_CHECK(unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__hdl_concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1726)
                              ->__PVT__slices.size())) {
                {
                    if ((0U != ([&]() {
                                    __Vfunc_uvm_report_enabled__444__id = "RegModel"s;
                                    __Vfunc_uvm_report_enabled__444__severity = 0U;
                                    __Vfunc_uvm_report_enabled__444__verbosity = 0x000001f4U;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__445__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                        = __Vfunc_get__445__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__446__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                        = __Vtask_get_root__446__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__444__verbosity, (IData)(__Vfunc_uvm_report_enabled__444__severity), __Vfunc_uvm_report_enabled__444__id, __Vtask_uvm_report_enabled__447__Vfuncout);
                                    __Vfunc_uvm_report_enabled__444__Vfuncout 
                                        = __Vtask_uvm_report_enabled__447__Vfuncout;
                                }(), __Vfunc_uvm_report_enabled__444__Vfuncout))) {
                        __Vtask_uvm_report_info__448__report_enabled_checked = 1U;
                        __Vtask_uvm_report_info__448__context_name = ""s;
                        __Vtask_uvm_report_info__448__line = 0x000006bfU;
                        __Vtask_uvm_report_info__448__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                        __Vtask_uvm_report_info__448__verbosity = 0x000001f4U;
                        __Vtemp_1 = VL_NULL_CHECK(unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__hdl_concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1727)
                            ->__PVT__slices.at(unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__j)
                            .__PVT__path;
                        __Vtask_uvm_report_info__448__message 
                            = VL_SFORMATF_N_NX("backdoor_write to %@ ",0,
                                               -1,&(__Vtemp_1)) ;
                        __Vtask_uvm_report_info__448__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__449__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                            = __Vfunc_get__449__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__450__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                            = __Vtask_get_root__450__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__448__id, __Vtask_uvm_report_info__448__message, __Vtask_uvm_report_info__448__verbosity, __Vtask_uvm_report_info__448__filename, __Vtask_uvm_report_info__448__line, __Vtask_uvm_report_info__448__context_name, (IData)(__Vtask_uvm_report_info__448__report_enabled_checked));
                    }
                    if (VL_GTS_III(32, 0U, VL_NULL_CHECK(unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__hdl_concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1729)
                                   ->__PVT__slices.at(unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__j)
                                   .__PVT__offset)) {
                        ok = ((IData)(ok) & ([&]() {
                                    vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "UVM_HDL_DEPOSIT"s, "uvm_hdl DPI routines are compiled off. Recompile without +define+UVM_HDL_NO_DPI"s, 0U, ""s, 0U, ""s, 0U);
                                    __Vfunc_uvm_hdl_deposit__452__Vfuncout = 0U;
                                }(), __Vfunc_uvm_hdl_deposit__452__Vfuncout));
                        goto __Vlabel0;
                    }
                    unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__unnamedblk472__DOT__slice 
                        = VL_SHIFTR_QQI(64,64,32, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1735)
                                        ->__PVT__value.at(unnamedblk467__DOT__mem_idx), VL_NULL_CHECK(unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__hdl_concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1735)
                                        ->__PVT__slices.at(unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__j)
                                        .__PVT__offset);
                    unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__unnamedblk472__DOT__slice 
                        = (unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__unnamedblk472__DOT__slice 
                           & (VL_SHIFTL_QQI(64,64,32, 1ULL, VL_NULL_CHECK(unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__hdl_concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1736)
                                            ->__PVT__slices.at(unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__j)
                                            .__PVT__size) 
                              - 1ULL));
                    ok = ((IData)(ok) & ([&]() {
                                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "UVM_HDL_DEPOSIT"s, "uvm_hdl DPI routines are compiled off. Recompile without +define+UVM_HDL_NO_DPI"s, 0U, ""s, 0U, ""s, 0U);
                                __Vfunc_uvm_hdl_deposit__454__Vfuncout = 0U;
                            }(), __Vfunc_uvm_hdl_deposit__454__Vfuncout));
                    __Vlabel0: ;
                }
                unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__j 
                    = ((IData)(1U) + unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__j);
            }
            unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__i 
                = ((IData)(1U) + unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__i);
        }
        unnamedblk467__DOT__mem_idx = ((IData)(1U) 
                                       + unnamedblk467__DOT__mem_idx);
    }
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1742)->__PVT__status 
        = ((IData)(ok) ? 0U : 1U);
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_clear_hdl_path(Varchitecture__Syms* __restrict vlSymsp, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_clear_hdl_path\n"); );
    // Locals
    std::string __Vtask_get_default_hdl_path__457__Vfuncout;
    IData/*31:0*/ __Vtask_exists__458__Vfuncout;
    __Vtask_exists__458__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__459__Vfuncout;
    __Vfunc_uvm_report_enabled__459__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__459__verbosity;
    __Vfunc_uvm_report_enabled__459__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__459__severity;
    __Vfunc_uvm_report_enabled__459__severity = 0;
    std::string __Vfunc_uvm_report_enabled__459__id;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__460__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__461__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__462__Vfuncout;
    __Vtask_uvm_report_enabled__462__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__463__id;
    std::string __Vtask_uvm_report_warning__463__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__463__verbosity;
    __Vtask_uvm_report_warning__463__verbosity = 0;
    std::string __Vtask_uvm_report_warning__463__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__463__line;
    __Vtask_uvm_report_warning__463__line = 0;
    std::string __Vtask_uvm_report_warning__463__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__463__report_enabled_checked;
    __Vtask_uvm_report_warning__463__report_enabled_checked = 0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__464__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__465__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    {
        if (("ALL"s == kind)) {
            this->__PVT__m_hdl_paths_pool = VL_NEW(Varchitecture_uvm_pkg__03a__03auvm_object_string_pool__Tz200, vlProcess, vlSymsp, "hdl_paths"s);
            goto __Vlabel0;
        }
        if ((""s == kind)) {
            VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1757)->__VnoInFunc_get_default_hdl_path(vlSymsp, __Vtask_get_default_hdl_path__457__Vfuncout);
            kind = __Vtask_get_default_hdl_path__457__Vfuncout;
        }
        if ((1U & (~ (0U != ([&]() {
                                VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1759)
                             ->__VnoInFunc_exists(vlSymsp, kind, __Vtask_exists__458__Vfuncout);
                            }(), __Vtask_exists__458__Vfuncout))))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__459__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__459__severity = 1U;
                            __Vfunc_uvm_report_enabled__459__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__460__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__460__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__461__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__461__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__459__verbosity, (IData)(__Vfunc_uvm_report_enabled__459__severity), __Vfunc_uvm_report_enabled__459__id, __Vtask_uvm_report_enabled__462__Vfuncout);
                            __Vfunc_uvm_report_enabled__459__Vfuncout 
                                = __Vtask_uvm_report_enabled__462__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__459__Vfuncout))) {
                __Vtask_uvm_report_warning__463__report_enabled_checked = 1U;
                __Vtask_uvm_report_warning__463__context_name = ""s;
                __Vtask_uvm_report_warning__463__line = 0x000006e0U;
                __Vtask_uvm_report_warning__463__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_warning__463__verbosity = 0U;
                __Vtask_uvm_report_warning__463__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Unknown HDL Abstraction '"s, kind), "'"s));
                __Vtask_uvm_report_warning__463__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__464__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__464__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__465__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__465__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__463__id, __Vtask_uvm_report_warning__463__message, __Vtask_uvm_report_warning__463__verbosity, __Vtask_uvm_report_warning__463__filename, __Vtask_uvm_report_warning__463__line, __Vtask_uvm_report_warning__463__context_name, (IData)(__Vtask_uvm_report_warning__463__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1764)->__VnoInFunc_delete(vlSymsp, kind);
        __Vlabel0: ;
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_add_hdl_path(Varchitecture__Syms* __restrict vlSymsp, VlQueue<Varchitecture_uvm_hdl_path_slice__struct__0> slices, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_add_hdl_path\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_queue__Tz199> __Vtask_get__468__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_queue__Tz199> paths;
    VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1771)->__VnoInFunc_get(vlProcess, vlSymsp, kind, __Vtask_get__468__Vfuncout);
    paths = __Vtask_get__468__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_hdl_path_concat> concat;
    concat = VL_NEW(Varchitecture_uvm_pkg__03a__03auvm_hdl_path_concat, vlSymsp);
    VL_NULL_CHECK(concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1774)->__VnoInFunc_set(vlSymsp, slices);
    VL_NULL_CHECK(paths, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1775)->__VnoInFunc_push_back(vlSymsp, concat);
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_add_hdl_path_slice(Varchitecture__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ offset, IData/*31:0*/ size, CData/*0:0*/ first, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_add_hdl_path_slice\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_queue__Tz199> __Vtask_get__472__Vfuncout;
    IData/*31:0*/ __Vtask_size__473__Vfuncout;
    __Vtask_size__473__Vfuncout = 0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_hdl_path_concat> __Vtask_get__476__Vfuncout;
    IData/*31:0*/ __Vtask_size__477__Vfuncout;
    __Vtask_size__477__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_queue__Tz199> paths;
    VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1786)->__VnoInFunc_get(vlProcess, vlSymsp, kind, __Vtask_get__472__Vfuncout);
    paths = __Vtask_get__472__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_hdl_path_concat> concat;
    if (((IData)(first) || (0U == ([&]() {
                        VL_NULL_CHECK(paths, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1789)
                                   ->__VnoInFunc_size(vlSymsp, __Vtask_size__473__Vfuncout);
                    }(), __Vtask_size__473__Vfuncout)))) {
        concat = VL_NEW(Varchitecture_uvm_pkg__03a__03auvm_hdl_path_concat, vlSymsp);
        VL_NULL_CHECK(paths, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1791)->__VnoInFunc_push_back(vlSymsp, concat);
    } else {
        VL_NULL_CHECK(paths, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1794)->__VnoInFunc_get(vlProcess, vlSymsp, 
                                                                                (([&]() {
                        VL_NULL_CHECK(paths, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1794)
                                                                                ->__VnoInFunc_size(vlSymsp, __Vtask_size__477__Vfuncout);
                    }(), __Vtask_size__477__Vfuncout) 
                                                                                - (IData)(1U)), __Vtask_get__476__Vfuncout);
        concat = __Vtask_get__476__Vfuncout;
    }
    VL_NULL_CHECK(concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1796)->__VnoInFunc_add_path(vlSymsp, name, offset, size);
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_has_hdl_path(Varchitecture__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ &has_hdl_path__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_has_hdl_path\n"); );
    // Locals
    std::string __Vtask_get_default_hdl_path__479__Vfuncout;
    IData/*31:0*/ __Vtask_exists__480__Vfuncout;
    __Vtask_exists__480__Vfuncout = 0;
    // Body
    if ((""s == kind)) {
        VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1804)->__VnoInFunc_get_default_hdl_path(vlSymsp, __Vtask_get_default_hdl_path__479__Vfuncout);
        kind = __Vtask_get_default_hdl_path__479__Vfuncout;
    }
    has_hdl_path__Vfuncrtn = (1U & ([&]() {
                VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1806)
                                    ->__VnoInFunc_exists(vlSymsp, kind, __Vtask_exists__480__Vfuncout);
            }(), __Vtask_exists__480__Vfuncout));
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_hdl_path(Varchitecture__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_hdl_path_concat>> &paths, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_hdl_path\n"); );
    // Locals
    std::string __Vtask_get_default_hdl_path__481__Vfuncout;
    CData/*0:0*/ __Vfunc_has_hdl_path__482__Vfuncout;
    __Vfunc_has_hdl_path__482__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__483__Vfuncout;
    __Vfunc_uvm_report_enabled__483__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__483__verbosity;
    __Vfunc_uvm_report_enabled__483__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__483__severity;
    __Vfunc_uvm_report_enabled__483__severity = 0;
    std::string __Vfunc_uvm_report_enabled__483__id;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__484__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__485__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__486__Vfuncout;
    __Vtask_uvm_report_enabled__486__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__487__id;
    std::string __Vtask_uvm_report_error__487__message;
    IData/*31:0*/ __Vtask_uvm_report_error__487__verbosity;
    __Vtask_uvm_report_error__487__verbosity = 0;
    std::string __Vtask_uvm_report_error__487__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__487__line;
    __Vtask_uvm_report_error__487__line = 0;
    std::string __Vtask_uvm_report_error__487__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__487__report_enabled_checked;
    __Vtask_uvm_report_error__487__report_enabled_checked = 0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__488__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__489__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_queue__Tz199> __Vtask_get__491__Vfuncout;
    IData/*31:0*/ __Vtask_size__492__Vfuncout;
    __Vtask_size__492__Vfuncout = 0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_hdl_path_concat> __Vtask_get__493__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ unnamedblk473__DOT__i;
    unnamedblk473__DOT__i = 0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk473__DOT__unnamedblk474__DOT__t;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_queue__Tz199> hdl_paths;
    {
        if ((""s == kind)) {
            VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1818)->__VnoInFunc_get_default_hdl_path(vlSymsp, __Vtask_get_default_hdl_path__481__Vfuncout);
            kind = __Vtask_get_default_hdl_path__481__Vfuncout;
        }
        if ((1U & (~ ([&]() {
                            this->__VnoInFunc_has_hdl_path(vlSymsp, kind, __Vfunc_has_hdl_path__482__Vfuncout);
                        }(), (IData)(__Vfunc_has_hdl_path__482__Vfuncout))))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__483__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__483__severity = 2U;
                            __Vfunc_uvm_report_enabled__483__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__484__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__484__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__485__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__485__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__483__verbosity, (IData)(__Vfunc_uvm_report_enabled__483__severity), __Vfunc_uvm_report_enabled__483__id, __Vtask_uvm_report_enabled__486__Vfuncout);
                            __Vfunc_uvm_report_enabled__483__Vfuncout 
                                = __Vtask_uvm_report_enabled__486__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__483__Vfuncout))) {
                __Vtask_uvm_report_error__487__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__487__context_name = ""s;
                __Vtask_uvm_report_error__487__line = 0x0000071eU;
                __Vtask_uvm_report_error__487__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_error__487__verbosity = 0U;
                __Vtask_uvm_report_error__487__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Memory does not have hdl path defined for abstraction '"s, kind), "'"s));
                __Vtask_uvm_report_error__487__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__488__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__488__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__489__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__489__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__487__id, __Vtask_uvm_report_error__487__message, __Vtask_uvm_report_error__487__verbosity, __Vtask_uvm_report_error__487__filename, __Vtask_uvm_report_error__487__line, __Vtask_uvm_report_error__487__context_name, (IData)(__Vtask_uvm_report_error__487__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1826)->__VnoInFunc_get(vlProcess, vlSymsp, kind, __Vtask_get__491__Vfuncout);
        hdl_paths = __Vtask_get__491__Vfuncout;
        unnamedblk473__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk473__DOT__i, 
                          ([&]() {
                        VL_NULL_CHECK(hdl_paths, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1828)
                           ->__VnoInFunc_size(vlSymsp, __Vtask_size__492__Vfuncout);
                    }(), __Vtask_size__492__Vfuncout))) {
            VL_NULL_CHECK(hdl_paths, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1829)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk473__DOT__i, __Vtask_get__493__Vfuncout);
            unnamedblk473__DOT__unnamedblk474__DOT__t 
                = __Vtask_get__493__Vfuncout;
            paths.push_back(unnamedblk473__DOT__unnamedblk474__DOT__t);
            unnamedblk473__DOT__i = ((IData)(1U) + unnamedblk473__DOT__i);
        }
        __Vlabel0: ;
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_hdl_path_kinds(Varchitecture__Syms* __restrict vlSymsp, VlQueue<std::string> &kinds) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_hdl_path_kinds\n"); );
    // Locals
    IData/*31:0*/ __Vtask_first__494__Vfuncout;
    __Vtask_first__494__Vfuncout = 0;
    IData/*31:0*/ __Vtask_next__495__Vfuncout;
    __Vtask_next__495__Vfuncout = 0;
    // Body
    std::string kind;
    {
        kinds.clear();
        if ((1U & (~ (0U != ([&]() {
                                VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1841)
                             ->__VnoInFunc_first(vlSymsp, kind, __Vtask_first__494__Vfuncout);
                            }(), __Vtask_first__494__Vfuncout))))) {
            goto __Vlabel0;
        }
        do {
            kinds.push_back(kind);
        } while ((0U != ([&]() {
                        VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1845)
                         ->__VnoInFunc_next(vlSymsp, kind, __Vtask_next__495__Vfuncout);
                    }(), __Vtask_next__495__Vfuncout)));
        __Vlabel0: ;
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_full_hdl_path(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_hdl_path_concat>> &paths, std::string kind, std::string separator) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_full_hdl_path\n"); );
    // Locals
    std::string __Vtask_get_default_hdl_path__496__Vfuncout;
    CData/*0:0*/ __Vfunc_has_hdl_path__497__Vfuncout;
    __Vfunc_has_hdl_path__497__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__498__Vfuncout;
    __Vfunc_uvm_report_enabled__498__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__498__verbosity;
    __Vfunc_uvm_report_enabled__498__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__498__severity;
    __Vfunc_uvm_report_enabled__498__severity = 0;
    std::string __Vfunc_uvm_report_enabled__498__id;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__499__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__500__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__501__Vfuncout;
    __Vtask_uvm_report_enabled__501__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__502__id;
    std::string __Vtask_uvm_report_error__502__message;
    IData/*31:0*/ __Vtask_uvm_report_error__502__verbosity;
    __Vtask_uvm_report_error__502__verbosity = 0;
    std::string __Vtask_uvm_report_error__502__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__502__line;
    __Vtask_uvm_report_error__502__line = 0;
    std::string __Vtask_uvm_report_error__502__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__502__report_enabled_checked;
    __Vtask_uvm_report_error__502__report_enabled_checked = 0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__503__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__504__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_queue__Tz199> __Vtask_get__506__Vfuncout;
    IData/*31:0*/ __Vtask_size__508__Vfuncout;
    __Vtask_size__508__Vfuncout = 0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_hdl_path_concat> __Vtask_get__509__Vfuncout;
    // Body
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_queue__Tz199> unnamedblk475__DOT__hdl_paths;
    VlQueue<std::string> unnamedblk475__DOT__parent_paths;
    IData/*31:0*/ unnamedblk475__DOT__unnamedblk476__DOT__i;
    unnamedblk475__DOT__unnamedblk476__DOT__i = 0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__hdl_concat;
    IData/*31:0*/ unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__j;
    unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__j = 0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__unnamedblk479__DOT__t;
    IData/*31:0*/ unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__unnamedblk479__DOT__unnamedblk480__DOT__k;
    unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__unnamedblk479__DOT__unnamedblk480__DOT__k = 0;
    {
        if ((""s == kind)) {
            VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1855)->__VnoInFunc_get_default_hdl_path(vlSymsp, __Vtask_get_default_hdl_path__496__Vfuncout);
            kind = __Vtask_get_default_hdl_path__496__Vfuncout;
        }
        if ((1U & (~ ([&]() {
                            this->__VnoInFunc_has_hdl_path(vlSymsp, kind, __Vfunc_has_hdl_path__497__Vfuncout);
                        }(), (IData)(__Vfunc_has_hdl_path__497__Vfuncout))))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__498__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__498__severity = 2U;
                            __Vfunc_uvm_report_enabled__498__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__499__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__499__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__500__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__500__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__498__verbosity, (IData)(__Vfunc_uvm_report_enabled__498__severity), __Vfunc_uvm_report_enabled__498__id, __Vtask_uvm_report_enabled__501__Vfuncout);
                            __Vfunc_uvm_report_enabled__498__Vfuncout 
                                = __Vtask_uvm_report_enabled__501__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__498__Vfuncout))) {
                __Vtask_uvm_report_error__502__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__502__context_name = ""s;
                __Vtask_uvm_report_error__502__line = 0x00000743U;
                __Vtask_uvm_report_error__502__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_error__502__verbosity = 0U;
                __Vtask_uvm_report_error__502__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Memory does not have hdl path defined for abstraction '"s, kind), "'"s));
                __Vtask_uvm_report_error__502__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__503__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__503__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__504__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__504__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__502__id, __Vtask_uvm_report_error__502__message, __Vtask_uvm_report_error__502__verbosity, __Vtask_uvm_report_error__502__filename, __Vtask_uvm_report_error__502__line, __Vtask_uvm_report_error__502__context_name, (IData)(__Vtask_uvm_report_error__502__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1864)->__VnoInFunc_get(vlProcess, vlSymsp, kind, __Vtask_get__506__Vfuncout);
        unnamedblk475__DOT__hdl_paths = __Vtask_get__506__Vfuncout;
        VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1867)->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, unnamedblk475__DOT__parent_paths, kind, separator);
        unnamedblk475__DOT__unnamedblk476__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk475__DOT__unnamedblk476__DOT__i, 
                          ([&]() {
                        VL_NULL_CHECK(unnamedblk475__DOT__hdl_paths, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1869)
                           ->__VnoInFunc_size(vlSymsp, __Vtask_size__508__Vfuncout);
                    }(), __Vtask_size__508__Vfuncout))) {
            VL_NULL_CHECK(unnamedblk475__DOT__hdl_paths, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1870)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk475__DOT__unnamedblk476__DOT__i, __Vtask_get__509__Vfuncout);
            unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__hdl_concat 
                = __Vtask_get__509__Vfuncout;
            unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__j = 0U;
            while (VL_LTS_III(32, unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__j, unnamedblk475__DOT__parent_paths.size())) {
                unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__unnamedblk479__DOT__t 
                    = VL_NEW(Varchitecture_uvm_pkg__03a__03auvm_hdl_path_concat, vlSymsp);
                unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__unnamedblk479__DOT__unnamedblk480__DOT__k = 0U;
                while (VL_LTS_III(32, unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__unnamedblk479__DOT__unnamedblk480__DOT__k, VL_NULL_CHECK(unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__hdl_concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1875)
                                  ->__PVT__slices.size())) {
                    if ((""s == VL_NULL_CHECK(unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__hdl_concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1876)
                         ->__PVT__slices.at(unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__unnamedblk479__DOT__unnamedblk480__DOT__k)
                         .__PVT__path)) {
                        VL_NULL_CHECK(unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__unnamedblk479__DOT__t, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1877)->__VnoInFunc_add_path(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(unnamedblk475__DOT__parent_paths.at(unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__j)), 0xffffffffU, 0xffffffffU);
                    } else {
                        VL_NULL_CHECK(unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__unnamedblk479__DOT__t, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1879)->__VnoInFunc_add_path(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(unnamedblk475__DOT__parent_paths.at(unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__j), separator), VL_NULL_CHECK(unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__hdl_concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1879)
                                                                                ->__PVT__slices.at(unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__unnamedblk479__DOT__unnamedblk480__DOT__k)
                                                                                .__PVT__path)), VL_NULL_CHECK(unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__hdl_concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1880)
                                                                                ->__PVT__slices.at(unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__unnamedblk479__DOT__unnamedblk480__DOT__k)
                                                                                .__PVT__offset, VL_NULL_CHECK(unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__hdl_concat, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1881)
                                                                                ->__PVT__slices.at(unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__unnamedblk479__DOT__unnamedblk480__DOT__k)
                                                                                .__PVT__size);
                    }
                    unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__unnamedblk479__DOT__unnamedblk480__DOT__k 
                        = ((IData)(1U) + unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__unnamedblk479__DOT__unnamedblk480__DOT__k);
                }
                paths.push_back(unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__unnamedblk479__DOT__t);
                unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__j 
                    = ((IData)(1U) + unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__j);
            }
            unnamedblk475__DOT__unnamedblk476__DOT__i 
                = ((IData)(1U) + unnamedblk475__DOT__unnamedblk476__DOT__i);
        }
        __Vlabel0: ;
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_set_parent(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_set_parent\n"); );
    // Body
    this->__PVT__m_parent = parent;
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_parent(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_parent\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> __Vfunc_get_block__513__Vfuncout;
    // Body
    this->__VnoInFunc_get_block(vlSymsp, __Vfunc_get_block__513__Vfuncout);
    get_parent__Vfuncrtn = __Vfunc_get_block__513__Vfuncout;
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_convert2string(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_convert2string\n"); );
    // Locals
    std::string __Vfunc_get_full_name__514__Vfuncout;
    QData/*63:0*/ __Vfunc_get_size__515__Vfuncout;
    __Vfunc_get_size__515__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_n_bits__516__Vfuncout;
    __Vfunc_get_n_bits__516__Vfuncout = 0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> __Vtask_get_parent_map__517__Vfuncout;
    IData/*31:0*/ __Vtask_get_endian__518__Vfuncout;
    __Vtask_get_endian__518__Vfuncout = 0;
    QData/*63:0*/ __Vtask_get_base_addr__519__Vfuncout;
    __Vtask_get_base_addr__519__Vfuncout = 0;
    QData/*63:0*/ __Vtask_get_submap_offset__520__Vfuncout;
    __Vtask_get_submap_offset__520__Vfuncout = 0;
    std::string __Vtask_get_full_name__521__Vfuncout;
    IData/*31:0*/ __Vtask_get_n_bytes__522__Vfuncout;
    __Vtask_get_n_bytes__522__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_get_size__523__Vfuncout;
    __Vfunc_get_size__523__Vfuncout = 0;
    std::string __Vfunc_get_access__524__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    // Body
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> unnamedblk481__DOT__map;
    CData/*0:0*/ unnamedblk481__DOT__map__Vfirst;
    unnamedblk481__DOT__map__Vfirst = 0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> unnamedblk481__DOT__unnamedblk482__DOT__parent_map;
    IData/*31:0*/ unnamedblk481__DOT__unnamedblk482__DOT__offset;
    unnamedblk481__DOT__unnamedblk482__DOT__offset = 0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> unnamedblk481__DOT__unnamedblk482__DOT__unnamedblk483__DOT__this_map;
    IData/*31:0*/ unnamedblk481__DOT__unnamedblk482__DOT__unnamedblk483__DOT__endian_name;
    unnamedblk481__DOT__unnamedblk482__DOT__unnamedblk483__DOT__endian_name = 0;
    std::string res_str;
    std::string prefix;
    __Vtemp_1 = ([&]() {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__514__Vfuncout);
        }(), __Vfunc_get_full_name__514__Vfuncout);
    VL_SFORMAT_NX(64,convert2string__Vfuncrtn,"%@Memory %@ -- %0#x%0# bits",0,
                  -1,&(prefix),-1,&(__Vtemp_1),64,([&]() {
                    this->__VnoInFunc_get_size(vlSymsp, __Vfunc_get_size__515__Vfuncout);
                }(), __Vfunc_get_size__515__Vfuncout),
                  32,([&]() {
                    this->__VnoInFunc_get_n_bits(vlSymsp, __Vfunc_get_n_bits__516__Vfuncout);
                }(), __Vfunc_get_n_bits__516__Vfuncout));
    convert2string__Vfuncrtn = ((0U == this->__PVT__m_maps.size())
                                 ? VL_CONCATN_NNN(convert2string__Vfuncrtn, "  (unmapped)\n"s)
                                 : VL_CONCATN_NNN(convert2string__Vfuncrtn, "\n"s));
    if ((0U != this->__PVT__m_maps.first(unnamedblk481__DOT__map))) {
        unnamedblk481__DOT__map__Vfirst = 1U;
        while (((IData)(unnamedblk481__DOT__map__Vfirst) 
                || (0U != this->__PVT__m_maps.next(unnamedblk481__DOT__map)))) {
            unnamedblk481__DOT__map__Vfirst = 0U;
            unnamedblk481__DOT__unnamedblk482__DOT__parent_map 
                = unnamedblk481__DOT__map;
            while ((VlNull{} != unnamedblk481__DOT__unnamedblk482__DOT__parent_map)) {
                unnamedblk481__DOT__unnamedblk482__DOT__unnamedblk483__DOT__this_map 
                    = unnamedblk481__DOT__unnamedblk482__DOT__parent_map;
                VL_NULL_CHECK(unnamedblk481__DOT__unnamedblk482__DOT__unnamedblk483__DOT__this_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1924)->__VnoInFunc_get_parent_map(vlSymsp, __Vtask_get_parent_map__517__Vfuncout);
                unnamedblk481__DOT__unnamedblk482__DOT__parent_map 
                    = __Vtask_get_parent_map__517__Vfuncout;
                VL_NULL_CHECK(unnamedblk481__DOT__unnamedblk482__DOT__unnamedblk483__DOT__this_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1925)->__VnoInFunc_get_endian(vlSymsp, 1U, __Vtask_get_endian__518__Vfuncout);
                unnamedblk481__DOT__unnamedblk482__DOT__unnamedblk483__DOT__endian_name 
                    = __Vtask_get_endian__518__Vfuncout;
                unnamedblk481__DOT__unnamedblk482__DOT__offset 
                    = (IData)(((VlNull{} == unnamedblk481__DOT__unnamedblk482__DOT__parent_map)
                                ? ([&]() {
                                VL_NULL_CHECK(unnamedblk481__DOT__unnamedblk482__DOT__unnamedblk483__DOT__this_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1927)
                                   ->__VnoInFunc_get_base_addr(vlProcess, vlSymsp, 0U, __Vtask_get_base_addr__519__Vfuncout);
                            }(), __Vtask_get_base_addr__519__Vfuncout)
                                : ([&]() {
                                VL_NULL_CHECK(unnamedblk481__DOT__unnamedblk482__DOT__parent_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1928)
                                   ->__VnoInFunc_get_submap_offset(vlProcess, vlSymsp, unnamedblk481__DOT__unnamedblk482__DOT__unnamedblk483__DOT__this_map, __Vtask_get_submap_offset__520__Vfuncout);
                            }(), __Vtask_get_submap_offset__520__Vfuncout)));
                prefix = VL_CONCATN_NNN(prefix, "  "s);
                __Vtemp_2 = ([&]() {
                        VL_NULL_CHECK(unnamedblk481__DOT__unnamedblk482__DOT__unnamedblk483__DOT__this_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1931)
                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__521__Vfuncout);
                    }(), __Vtask_get_full_name__521__Vfuncout);
                __Vtemp_3 = Varchitecture___024unit::__Venumtab_enum_name77
                    [(7U & unnamedblk481__DOT__unnamedblk482__DOT__unnamedblk483__DOT__endian_name)];
                __Vtemp_4 = ([&]() {
                        this->__VnoInFunc_get_access(vlProcess, vlSymsp, unnamedblk481__DOT__unnamedblk482__DOT__unnamedblk483__DOT__this_map, __Vfunc_get_access__524__Vfuncout);
                    }(), __Vfunc_get_access__524__Vfuncout);
                VL_SFORMAT_NX(64,convert2string__Vfuncrtn
                              ,"%@Mapped in '%@' -- buswidth %0# bytes, %@, offset 'h%0x, size 'h%0x, %@\n",0,
                              -1,&(prefix),-1,&(__Vtemp_2),
                              32,([&]() {
                                VL_NULL_CHECK(unnamedblk481__DOT__unnamedblk482__DOT__unnamedblk483__DOT__this_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1931)
                                  ->__VnoInFunc_get_n_bytes(vlSymsp, 1U, __Vtask_get_n_bytes__522__Vfuncout);
                            }(), __Vtask_get_n_bytes__522__Vfuncout),
                              -1,&(__Vtemp_3),32,unnamedblk481__DOT__unnamedblk482__DOT__offset,
                              64,([&]() {
                                this->__VnoInFunc_get_size(vlSymsp, __Vfunc_get_size__523__Vfuncout);
                            }(), __Vfunc_get_size__523__Vfuncout),
                              -1,&(__Vtemp_4));
            }
        }
    }
    prefix = "  "s;
    if (this->__PVT__m_read_in_progress) {
        if (((""s != this->__PVT__m_fname) & (0U != this->__PVT__m_lineno))) {
            VL_SFORMAT_NX(64,res_str,"%@:%0d ",0,-1,
                          &(this->__PVT__m_fname),32,
                          this->__PVT__m_lineno);
        }
        convert2string__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(convert2string__Vfuncrtn, "  "s), res_str), "currently executing read method"s);
    }
    if (this->__PVT__m_write_in_progress) {
        if (((""s != this->__PVT__m_fname) & (0U != this->__PVT__m_lineno))) {
            VL_SFORMAT_NX(64,res_str,"%@:%0d ",0,-1,
                          &(this->__PVT__m_fname),32,
                          this->__PVT__m_lineno);
        }
        convert2string__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(convert2string__Vfuncrtn, "  "s), res_str), "currently executing write method"s);
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_print(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_print\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_get_n_bits__527__Vfuncout;
    __Vfunc_get_n_bits__527__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_get_size__529__Vfuncout;
    __Vfunc_get_size__529__Vfuncout = 0;
    // Body
    Varchitecture_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    VL_NULL_CHECK(printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1955)->__VnoInFunc_print_field_int(vlProcess, vlSymsp, "n_bits"s, 
                                                                                VL_EXTEND_QI(64,32, 
                                                                                ([&]() {
                    this->__VnoInFunc_get_n_bits(vlSymsp, __Vfunc_get_n_bits__527__Vfuncout);
                }(), __Vfunc_get_n_bits__527__Vfuncout)), 0x00000020U, 0x03000000U, 0x2eU, ""s);
    VL_NULL_CHECK(printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1956)->__VnoInFunc_print_field_int(vlProcess, vlSymsp, "size"s, 
                                                                                ([&]() {
                this->__VnoInFunc_get_size(vlSymsp, __Vfunc_get_size__529__Vfuncout);
            }(), __Vfunc_get_size__529__Vfuncout), 0x00000020U, 0x03000000U, 0x2eU, ""s);
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_clone(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_clone\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__530__Vfuncout;
    __Vfunc_uvm_report_enabled__530__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__530__verbosity;
    __Vfunc_uvm_report_enabled__530__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__530__severity;
    __Vfunc_uvm_report_enabled__530__severity = 0;
    std::string __Vfunc_uvm_report_enabled__530__id;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__531__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__532__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__533__Vfuncout;
    __Vtask_uvm_report_enabled__533__Vfuncout = 0;
    // Body
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__530__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__530__severity = 3U;
                    __Vfunc_uvm_report_enabled__530__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__531__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__531__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__532__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__532__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__530__verbosity, (IData)(__Vfunc_uvm_report_enabled__530__severity), __Vfunc_uvm_report_enabled__530__id, __Vtask_uvm_report_enabled__533__Vfuncout);
                    __Vfunc_uvm_report_enabled__530__Vfuncout 
                        = __Vtask_uvm_report_enabled__533__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__530__Vfuncout))) {
        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "RegModel memories cannot be cloned"s, 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s, 0x000007abU, ""s, 1U);
    }
    clone__Vfuncrtn = VlNull{};
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_copy(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_copy\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__535__Vfuncout;
    __Vfunc_uvm_report_enabled__535__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__535__verbosity;
    __Vfunc_uvm_report_enabled__535__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__535__severity;
    __Vfunc_uvm_report_enabled__535__severity = 0;
    std::string __Vfunc_uvm_report_enabled__535__id;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__536__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__537__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__538__Vfuncout;
    __Vtask_uvm_report_enabled__538__Vfuncout = 0;
    // Body
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__535__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__535__severity = 3U;
                    __Vfunc_uvm_report_enabled__535__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__536__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__536__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__537__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__537__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__535__verbosity, (IData)(__Vfunc_uvm_report_enabled__535__severity), __Vfunc_uvm_report_enabled__535__id, __Vtask_uvm_report_enabled__538__Vfuncout);
                    __Vfunc_uvm_report_enabled__535__Vfuncout 
                        = __Vtask_uvm_report_enabled__538__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__535__Vfuncout))) {
        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "RegModel memories cannot be copied"s, 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s, 0x000007b2U, ""s, 1U);
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_compare(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_compare\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__540__Vfuncout;
    __Vfunc_uvm_report_enabled__540__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__540__verbosity;
    __Vfunc_uvm_report_enabled__540__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__540__severity;
    __Vfunc_uvm_report_enabled__540__severity = 0;
    std::string __Vfunc_uvm_report_enabled__540__id;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__541__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__542__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__543__Vfuncout;
    __Vtask_uvm_report_enabled__543__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__544__id;
    std::string __Vtask_uvm_report_warning__544__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__544__verbosity;
    __Vtask_uvm_report_warning__544__verbosity = 0;
    std::string __Vtask_uvm_report_warning__544__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__544__line;
    __Vtask_uvm_report_warning__544__line = 0;
    std::string __Vtask_uvm_report_warning__544__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__544__report_enabled_checked;
    __Vtask_uvm_report_warning__544__report_enabled_checked = 0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__545__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__546__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__540__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__540__severity = 1U;
                    __Vfunc_uvm_report_enabled__540__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__541__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__541__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__542__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__542__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__540__verbosity, (IData)(__Vfunc_uvm_report_enabled__540__severity), __Vfunc_uvm_report_enabled__540__id, __Vtask_uvm_report_enabled__543__Vfuncout);
                    __Vfunc_uvm_report_enabled__540__Vfuncout 
                        = __Vtask_uvm_report_enabled__543__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__540__Vfuncout))) {
        __Vtask_uvm_report_warning__544__report_enabled_checked = 1U;
        __Vtask_uvm_report_warning__544__context_name = ""s;
        __Vtask_uvm_report_warning__544__line = 0x000007baU;
        __Vtask_uvm_report_warning__544__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
        __Vtask_uvm_report_warning__544__verbosity = 0U;
        __Vtask_uvm_report_warning__544__message = "RegModel memories cannot be compared"s;
        __Vtask_uvm_report_warning__544__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__545__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__545__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__546__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__546__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__544__id, __Vtask_uvm_report_warning__544__message, __Vtask_uvm_report_warning__544__verbosity, __Vtask_uvm_report_warning__544__filename, __Vtask_uvm_report_warning__544__line, __Vtask_uvm_report_warning__544__context_name, (IData)(__Vtask_uvm_report_warning__544__report_enabled_checked));
    }
    do_compare__Vfuncrtn = 0U;
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_pack(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_pack\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__548__Vfuncout;
    __Vfunc_uvm_report_enabled__548__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__548__verbosity;
    __Vfunc_uvm_report_enabled__548__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__548__severity;
    __Vfunc_uvm_report_enabled__548__severity = 0;
    std::string __Vfunc_uvm_report_enabled__548__id;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__549__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__550__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__551__Vfuncout;
    __Vtask_uvm_report_enabled__551__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__552__id;
    std::string __Vtask_uvm_report_warning__552__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__552__verbosity;
    __Vtask_uvm_report_warning__552__verbosity = 0;
    std::string __Vtask_uvm_report_warning__552__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__552__line;
    __Vtask_uvm_report_warning__552__line = 0;
    std::string __Vtask_uvm_report_warning__552__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__552__report_enabled_checked;
    __Vtask_uvm_report_warning__552__report_enabled_checked = 0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__553__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__554__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__548__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__548__severity = 1U;
                    __Vfunc_uvm_report_enabled__548__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__549__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__549__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__550__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__550__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__548__verbosity, (IData)(__Vfunc_uvm_report_enabled__548__severity), __Vfunc_uvm_report_enabled__548__id, __Vtask_uvm_report_enabled__551__Vfuncout);
                    __Vfunc_uvm_report_enabled__548__Vfuncout 
                        = __Vtask_uvm_report_enabled__551__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__548__Vfuncout))) {
        __Vtask_uvm_report_warning__552__report_enabled_checked = 1U;
        __Vtask_uvm_report_warning__552__context_name = ""s;
        __Vtask_uvm_report_warning__552__line = 0x000007c2U;
        __Vtask_uvm_report_warning__552__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
        __Vtask_uvm_report_warning__552__verbosity = 0U;
        __Vtask_uvm_report_warning__552__message = "RegModel memories cannot be packed"s;
        __Vtask_uvm_report_warning__552__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__553__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__553__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__554__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__554__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__552__id, __Vtask_uvm_report_warning__552__message, __Vtask_uvm_report_warning__552__verbosity, __Vtask_uvm_report_warning__552__filename, __Vtask_uvm_report_warning__552__line, __Vtask_uvm_report_warning__552__context_name, (IData)(__Vtask_uvm_report_warning__552__report_enabled_checked));
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_unpack(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_unpack\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__556__Vfuncout;
    __Vfunc_uvm_report_enabled__556__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__556__verbosity;
    __Vfunc_uvm_report_enabled__556__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__556__severity;
    __Vfunc_uvm_report_enabled__556__severity = 0;
    std::string __Vfunc_uvm_report_enabled__556__id;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__557__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__558__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__559__Vfuncout;
    __Vtask_uvm_report_enabled__559__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__560__id;
    std::string __Vtask_uvm_report_warning__560__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__560__verbosity;
    __Vtask_uvm_report_warning__560__verbosity = 0;
    std::string __Vtask_uvm_report_warning__560__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__560__line;
    __Vtask_uvm_report_warning__560__line = 0;
    std::string __Vtask_uvm_report_warning__560__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__560__report_enabled_checked;
    __Vtask_uvm_report_warning__560__report_enabled_checked = 0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__561__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__562__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__556__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__556__severity = 1U;
                    __Vfunc_uvm_report_enabled__556__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__557__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__557__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__558__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__558__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__556__verbosity, (IData)(__Vfunc_uvm_report_enabled__556__severity), __Vfunc_uvm_report_enabled__556__id, __Vtask_uvm_report_enabled__559__Vfuncout);
                    __Vfunc_uvm_report_enabled__556__Vfuncout 
                        = __Vtask_uvm_report_enabled__559__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__556__Vfuncout))) {
        __Vtask_uvm_report_warning__560__report_enabled_checked = 1U;
        __Vtask_uvm_report_warning__560__context_name = ""s;
        __Vtask_uvm_report_warning__560__line = 0x000007c9U;
        __Vtask_uvm_report_warning__560__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
        __Vtask_uvm_report_warning__560__verbosity = 0U;
        __Vtask_uvm_report_warning__560__message = "RegModel memories cannot be unpacked"s;
        __Vtask_uvm_report_warning__560__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__561__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__561__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__562__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__562__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__560__id, __Vtask_uvm_report_warning__560__message, __Vtask_uvm_report_warning__560__verbosity, __Vtask_uvm_report_warning__560__filename, __Vtask_uvm_report_warning__560__line, __Vtask_uvm_report_warning__560__context_name, (IData)(__Vtask_uvm_report_warning__560__report_enabled_checked));
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_Xadd_vregX(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_vreg> vreg) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_Xadd_vregX\n"); );
    // Body
    this->__PVT__m_vregs.at(vreg) = 1U;
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_Xdelete_vregX(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_vreg> vreg) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_Xdelete_vregX\n"); );
    // Body
    if (this->__PVT__m_vregs.exists(vreg)) {
        this->__PVT__m_vregs.erase(vreg);
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_randomize(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__565__Vfuncout;
    __Vfunc___Vbasic_randomize__565__Vfuncout = 0;
    // Body
    Varchitecture_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Varchitecture_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__565__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__565__Vfuncout));
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc___Vbasic_randomize(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Varchitecture_uvm_pkg__03a__03auvm_mem::_ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_locked = 0;
    __PVT__m_read_in_progress = 0;
    __PVT__m_write_in_progress = 0;
    __PVT__m_size = 0;
    __PVT__m_maps.atDefault() = 0;
    __PVT__m_n_bits = 0;
    __PVT__m_is_powered_down = 0;
    __PVT__m_has_cover = 0;
    __PVT__m_cover_on = 0;
    __PVT__m_lineno = 0;
    __PVT__m_vregs.atDefault() = 0;
}

std::string VL_TO_STRING(const VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Varchitecture_uvm_pkg__03a__03auvm_mem::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Varchitecture_uvm_pkg__03a__03auvm_mem::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_mem::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_locked:" + VL_TO_STRING(__PVT__m_locked);
    out += ", m_read_in_progress:" + VL_TO_STRING(__PVT__m_read_in_progress);
    out += ", m_write_in_progress:" + VL_TO_STRING(__PVT__m_write_in_progress);
    out += ", m_access:" + VL_TO_STRING(__PVT__m_access);
    out += ", m_size:" + VL_TO_STRING(__PVT__m_size);
    out += ", m_parent:" + VL_TO_STRING(__PVT__m_parent);
    out += ", m_maps:" + VL_TO_STRING(__PVT__m_maps);
    out += ", m_n_bits:" + VL_TO_STRING(__PVT__m_n_bits);
    out += ", m_backdoor:" + VL_TO_STRING(__PVT__m_backdoor);
    out += ", m_is_powered_down:" + VL_TO_STRING(__PVT__m_is_powered_down);
    out += ", m_has_cover:" + VL_TO_STRING(__PVT__m_has_cover);
    out += ", m_cover_on:" + VL_TO_STRING(__PVT__m_cover_on);
    out += ", m_fname:" + VL_TO_STRING(__PVT__m_fname);
    out += ", m_lineno:" + VL_TO_STRING(__PVT__m_lineno);
    out += ", m_vregs:" + VL_TO_STRING(__PVT__m_vregs);
    out += ", m_hdl_paths_pool:" + VL_TO_STRING(__PVT__m_hdl_paths_pool);
    out += ", mam:" + VL_TO_STRING(__PVT__mam);
    out += ", __Vfunc_get_full_name__28__Vfuncout:" + VL_TO_STRING(__Vfunc_get_full_name__28__Vfuncout);
    out += ", "+ Varchitecture_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
