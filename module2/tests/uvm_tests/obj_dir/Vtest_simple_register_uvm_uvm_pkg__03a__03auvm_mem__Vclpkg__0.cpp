// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_simple_register_uvm.h for the primary calling header

#include "Vtest_simple_register_uvm__pch.h"

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem__Vclpkg::__VnoInFunc_get_max_size(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_max_size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem__Vclpkg::__VnoInFunc_get_max_size\n"); );
    // Body
    get_max_size__Vfuncrtn = this->__PVT__m_max_size;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_pre_write(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_pre_write\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_post_write(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_post_write\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_pre_read(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_pre_read\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_post_read(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_post_read\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_sample(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ offset, CData/*0:0*/ is_read, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_sample\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_XsampleX(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ addr, CData/*0:0*/ is_read, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_XsampleX\n"); );
    // Body
    this->__VnoInFunc_sample(vlSymsp, addr, (IData)(is_read), map);
}

Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ size, IData/*31:0*/ n_bits, std::string access, IData/*31:0*/ has_coverage)
    : Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::new\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__2__Vfuncout;
    __Vfunc_uvm_report_enabled__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__2__verbosity;
    __Vfunc_uvm_report_enabled__2__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__2__severity;
    __Vfunc_uvm_report_enabled__2__severity = 0;
    std::string __Vfunc_uvm_report_enabled__2__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__3__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__4__Vfuncout;
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
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__8__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__9__Vfuncout;
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
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__4__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__4__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__2__verbosity, (IData)(__Vfunc_uvm_report_enabled__2__severity), __Vfunc_uvm_report_enabled__2__id, __Vtask_uvm_report_enabled__5__Vfuncout);
                        __Vfunc_uvm_report_enabled__2__Vfuncout 
                            = __Vtask_uvm_report_enabled__5__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__2__Vfuncout))) {
            __Vtask_uvm_report_error__6__report_enabled_checked = 1U;
            __Vtask_uvm_report_error__6__context_name = ""s;
            __Vtask_uvm_report_error__6__line = 0x00000219U;
            __Vtask_uvm_report_error__6__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
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
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__9__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__9__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__6__id, __Vtask_uvm_report_error__6__message, __Vtask_uvm_report_error__6__verbosity, __Vtask_uvm_report_error__6__filename, __Vtask_uvm_report_error__6__line, __Vtask_uvm_report_error__6__context_name, (IData)(__Vtask_uvm_report_error__6__report_enabled_checked));
        }
        n_bits = 1U;
    }
    this->__PVT__m_size = size;
    this->__PVT__m_n_bits = n_bits;
    this->__PVT__m_backdoor = VlNull{};
    this->__PVT__m_access = VL_TOUPPER_NN(access);
    this->__PVT__m_has_cover = has_coverage;
    this->__PVT__m_hdl_paths_pool = VL_NEW(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_string_pool__Tz208, vlProcess, vlSymsp, "hdl_paths"s);
    if ((n_bits > vlSymsp->TOP__uvm_pkg__03a__03auvm_mem__Vclpkg.__PVT__m_max_size)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_mem__Vclpkg.__PVT__m_max_size 
            = n_bits;
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_configure(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_block> parent, std::string hdl_path) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_configure\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__12__Vfuncout;
    __Vfunc_uvm_report_enabled__12__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__12__verbosity;
    __Vfunc_uvm_report_enabled__12__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__12__severity;
    __Vfunc_uvm_report_enabled__12__severity = 0;
    std::string __Vfunc_uvm_report_enabled__12__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__13__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__14__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__15__Vfuncout;
    __Vtask_uvm_report_enabled__15__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__17__Vfuncout;
    __Vfunc_uvm_report_enabled__17__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__17__verbosity;
    __Vfunc_uvm_report_enabled__17__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__17__severity;
    __Vfunc_uvm_report_enabled__17__severity = 0;
    std::string __Vfunc_uvm_report_enabled__17__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__18__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__19__Vfuncout;
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
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__23__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__24__Vfuncout;
    std::string __Vfunc_get_full_name__28__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem_mam_cfg> unnamedblk434__DOT__cfg;
    if ((VlNull{} == parent)) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__12__id = "REG/NULL_PARENT"s;
                        __Vfunc_uvm_report_enabled__12__severity = 3U;
                        __Vfunc_uvm_report_enabled__12__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__13__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__13__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__14__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__14__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__12__verbosity, (IData)(__Vfunc_uvm_report_enabled__12__severity), __Vfunc_uvm_report_enabled__12__id, __Vtask_uvm_report_enabled__15__Vfuncout);
                        __Vfunc_uvm_report_enabled__12__Vfuncout 
                            = __Vtask_uvm_report_enabled__15__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__12__Vfuncout))) {
            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "REG/NULL_PARENT"s, "configure: parent argument is null"s, 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s, 0x0000022fU, ""s, 1U);
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
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__19__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__19__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__17__verbosity, (IData)(__Vfunc_uvm_report_enabled__17__severity), __Vfunc_uvm_report_enabled__17__id, __Vtask_uvm_report_enabled__20__Vfuncout);
                        __Vfunc_uvm_report_enabled__17__Vfuncout 
                            = __Vtask_uvm_report_enabled__20__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__17__Vfuncout))) {
            __Vtask_uvm_report_error__21__report_enabled_checked = 1U;
            __Vtask_uvm_report_error__21__context_name = ""s;
            __Vtask_uvm_report_error__21__line = 0x00000234U;
            __Vtask_uvm_report_error__21__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
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
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__24__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__24__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__21__id, __Vtask_uvm_report_error__21__message, __Vtask_uvm_report_error__21__verbosity, __Vtask_uvm_report_error__21__filename, __Vtask_uvm_report_error__21__line, __Vtask_uvm_report_error__21__context_name, (IData)(__Vtask_uvm_report_error__21__report_enabled_checked));
        }
        this->__PVT__m_access = "RW"s;
    }
    unnamedblk434__DOT__cfg = VL_NEW(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem_mam_cfg, vlSymsp);
    VL_NULL_CHECK(unnamedblk434__DOT__cfg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 571)->__PVT__n_bytes 
        = ((IData)(1U) + VL_SHIFTR_III(32,32,32, (this->__PVT__m_n_bits 
                                                  - (IData)(1U)), 3U));
    VL_NULL_CHECK(unnamedblk434__DOT__cfg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 572)->__PVT__start_offset = 0ULL;
    VL_NULL_CHECK(unnamedblk434__DOT__cfg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 573)->__PVT__end_offset 
        = (this->__PVT__m_size - 1ULL);
    VL_NULL_CHECK(unnamedblk434__DOT__cfg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 575)->__PVT__mode = 0U;
    VL_NULL_CHECK(unnamedblk434__DOT__cfg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 576)->__PVT__locality = 0U;
    this->__PVT__mam = VL_NEW(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem_mam, vlSymsp, 
                              VL_CVT_PACK_STR_NN(([&]() {
                    std::string __Vfunc_get_full_name__28__Vfuncout;
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__28__Vfuncout);
                    return (__Vfunc_get_full_name__28__Vfuncout);
                }())), unnamedblk434__DOT__cfg, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem>{this});
    VL_NULL_CHECK(this->__PVT__m_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 581)->__VnoInFunc_add_mem(vlSymsp, 
                                                                                VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem>{this});
    if ((""s != hdl_path)) {
        this->__VnoInFunc_add_hdl_path_slice(vlSymsp, hdl_path, 0xffffffffU, 0xffffffffU, 0U, "RTL"s);
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_set_offset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ offset, CData/*0:0*/ unmapped) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_set_offset\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__31__Vfuncout;
    __Vfunc_uvm_report_enabled__31__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__31__verbosity;
    __Vfunc_uvm_report_enabled__31__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__31__severity;
    __Vfunc_uvm_report_enabled__31__severity = 0;
    std::string __Vfunc_uvm_report_enabled__31__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__32__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__33__Vfuncout;
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
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__37__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__38__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> __Vfunc_get_local_map__40__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> orig_map;
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
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__33__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__33__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__31__verbosity, (IData)(__Vfunc_uvm_report_enabled__31__severity), __Vfunc_uvm_report_enabled__31__id, __Vtask_uvm_report_enabled__34__Vfuncout);
                            __Vfunc_uvm_report_enabled__31__Vfuncout 
                                = __Vtask_uvm_report_enabled__34__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__31__Vfuncout))) {
                __Vtask_uvm_report_error__35__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__35__context_name = ""s;
                __Vtask_uvm_report_error__35__line = 0x00000255U;
                __Vtask_uvm_report_error__35__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
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
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__38__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__38__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__35__id, __Vtask_uvm_report_error__35__message, __Vtask_uvm_report_error__35__verbosity, __Vtask_uvm_report_error__35__filename, __Vtask_uvm_report_error__35__line, __Vtask_uvm_report_error__35__context_name, (IData)(__Vtask_uvm_report_error__35__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, __Vfunc_get_local_map__40__Vfuncout);
        map = __Vfunc_get_local_map__40__Vfuncout;
        if ((VlNull{} == map)) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 606)->__VnoInFunc_m_set_mem_offset(vlSymsp, 
                                                                                VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem>{this}, offset, (IData)(unmapped));
        __Vlabel0: ;
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_add_map(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_add_map\n"); );
    // Body
    this->__PVT__m_maps.at(map) = 1U;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_Xlock_modelX(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_Xlock_modelX\n"); );
    // Body
    this->__PVT__m_locked = 1U;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_full_name(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_full_name\n"); );
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
                        VL_NULL_CHECK(this->__PVT__m_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 630)
                                                                 ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__43__Vfuncout);
                    }(), __Vtask_get_full_name__43__Vfuncout), "."s), 
                                                 ([&]() {
                    this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__44__Vfuncout);
                }(), __Vfunc_get_name__44__Vfuncout));
        __Vlabel0: ;
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_block(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_block> &get_block__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_block\n"); );
    // Body
    get_block__Vfuncrtn = this->__PVT__m_parent;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_n_maps(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_maps__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_n_maps\n"); );
    // Body
    get_n_maps__Vfuncrtn = this->__PVT__m_maps.size();
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_maps(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map>> &maps) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_maps\n"); );
    // Body
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> unnamedblk435__DOT__map;
    CData/*0:0*/ unnamedblk435__DOT__map__Vfirst;
    unnamedblk435__DOT__map__Vfirst = 0;
    if ((0U != this->__PVT__m_maps.first(unnamedblk435__DOT__map))) {
        unnamedblk435__DOT__map__Vfirst = 1U;
        while (((IData)(unnamedblk435__DOT__map__Vfirst) 
                || (0U != this->__PVT__m_maps.next(unnamedblk435__DOT__map)))) {
            unnamedblk435__DOT__map__Vfirst = 0U;
            maps.push_back(unnamedblk435__DOT__map);
        }
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_is_in_map(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> map, CData/*0:0*/ &is_in_map__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_is_in_map\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> __Vtask_get_parent_map__45__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> __Vtask_get_parent_map__46__Vfuncout;
    // Body
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> unnamedblk436__DOT__l;
    CData/*0:0*/ unnamedblk436__DOT__l__Vfirst;
    unnamedblk436__DOT__l__Vfirst = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> unnamedblk436__DOT__unnamedblk437__DOT__local_map;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> unnamedblk436__DOT__unnamedblk437__DOT__parent_map;
    {
        if (this->__PVT__m_maps.exists(map)) {
            is_in_map__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        if ((0U != this->__PVT__m_maps.first(unnamedblk436__DOT__l))) {
            unnamedblk436__DOT__l__Vfirst = 1U;
            while (((IData)(unnamedblk436__DOT__l__Vfirst) 
                    || (0U != this->__PVT__m_maps.next(unnamedblk436__DOT__l)))) {
                unnamedblk436__DOT__l__Vfirst = 0U;
                unnamedblk436__DOT__unnamedblk437__DOT__local_map 
                    = unnamedblk436__DOT__l;
                VL_NULL_CHECK(unnamedblk436__DOT__unnamedblk437__DOT__local_map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 664)->__VnoInFunc_get_parent_map(vlSymsp, __Vtask_get_parent_map__45__Vfuncout);
                unnamedblk436__DOT__unnamedblk437__DOT__parent_map 
                    = __Vtask_get_parent_map__45__Vfuncout;
                while ((VlNull{} != unnamedblk436__DOT__unnamedblk437__DOT__parent_map)) {
                    if ((unnamedblk436__DOT__unnamedblk437__DOT__parent_map 
                         == map)) {
                        is_in_map__Vfuncrtn = 1U;
                        goto __Vlabel0;
                    }
                    VL_NULL_CHECK(unnamedblk436__DOT__unnamedblk437__DOT__parent_map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 669)->__VnoInFunc_get_parent_map(vlSymsp, __Vtask_get_parent_map__46__Vfuncout);
                    unnamedblk436__DOT__unnamedblk437__DOT__parent_map 
                        = __Vtask_get_parent_map__46__Vfuncout;
                }
            }
        }
        is_in_map__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_local_map(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> &get_local_map__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_local_map\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> __Vfunc_get_default_map__47__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> __Vtask_get_parent_map__48__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> __Vtask_get_parent_map__49__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__50__Vfuncout;
    __Vfunc_uvm_report_enabled__50__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__50__verbosity;
    __Vfunc_uvm_report_enabled__50__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__50__severity;
    __Vfunc_uvm_report_enabled__50__severity = 0;
    std::string __Vfunc_uvm_report_enabled__50__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__51__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__52__Vfuncout;
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
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__57__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__58__Vfuncout;
    // Body
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> unnamedblk438__DOT__l;
    CData/*0:0*/ unnamedblk438__DOT__l__Vfirst;
    unnamedblk438__DOT__l__Vfirst = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> unnamedblk438__DOT__unnamedblk439__DOT__local_map;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> unnamedblk438__DOT__unnamedblk439__DOT__parent_map;
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
        if ((0U != this->__PVT__m_maps.first(unnamedblk438__DOT__l))) {
            unnamedblk438__DOT__l__Vfirst = 1U;
            while (((IData)(unnamedblk438__DOT__l__Vfirst) 
                    || (0U != this->__PVT__m_maps.next(unnamedblk438__DOT__l)))) {
                unnamedblk438__DOT__l__Vfirst = 0U;
                unnamedblk438__DOT__unnamedblk439__DOT__local_map 
                    = unnamedblk438__DOT__l;
                VL_NULL_CHECK(unnamedblk438__DOT__unnamedblk439__DOT__local_map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 685)->__VnoInFunc_get_parent_map(vlSymsp, __Vtask_get_parent_map__48__Vfuncout);
                unnamedblk438__DOT__unnamedblk439__DOT__parent_map 
                    = __Vtask_get_parent_map__48__Vfuncout;
                while ((VlNull{} != unnamedblk438__DOT__unnamedblk439__DOT__parent_map)) {
                    if ((unnamedblk438__DOT__unnamedblk439__DOT__parent_map 
                         == map)) {
                        get_local_map__Vfuncrtn = unnamedblk438__DOT__unnamedblk439__DOT__local_map;
                        goto __Vlabel0;
                    }
                    VL_NULL_CHECK(unnamedblk438__DOT__unnamedblk439__DOT__parent_map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 690)->__VnoInFunc_get_parent_map(vlSymsp, __Vtask_get_parent_map__49__Vfuncout);
                    unnamedblk438__DOT__unnamedblk439__DOT__parent_map 
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
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__52__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__52__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__50__verbosity, (IData)(__Vfunc_uvm_report_enabled__50__severity), __Vfunc_uvm_report_enabled__50__id, __Vtask_uvm_report_enabled__53__Vfuncout);
                        __Vfunc_uvm_report_enabled__50__Vfuncout 
                            = __Vtask_uvm_report_enabled__53__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__50__Vfuncout))) {
            __Vtask_uvm_report_warning__54__report_enabled_checked = 1U;
            __Vtask_uvm_report_warning__54__context_name = ""s;
            __Vtask_uvm_report_warning__54__line = 0x000002b6U;
            __Vtask_uvm_report_warning__54__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
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
                                VL_NULL_CHECK(map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 694)
                                                                    ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__56__Vfuncout);
                            }(), __Vtask_get_full_name__56__Vfuncout)), "'"s));
            __Vtask_uvm_report_warning__54__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__57__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__57__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__58__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__58__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__54__id, __Vtask_uvm_report_warning__54__message, __Vtask_uvm_report_warning__54__verbosity, __Vtask_uvm_report_warning__54__filename, __Vtask_uvm_report_warning__54__line, __Vtask_uvm_report_warning__54__context_name, (IData)(__Vtask_uvm_report_warning__54__report_enabled_checked));
        }
        get_local_map__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_default_map(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> &get_default_map__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_default_map\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__60__Vfuncout;
    __Vfunc_uvm_report_enabled__60__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__60__verbosity;
    __Vfunc_uvm_report_enabled__60__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__60__severity;
    __Vfunc_uvm_report_enabled__60__severity = 0;
    std::string __Vfunc_uvm_report_enabled__60__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__61__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__62__Vfuncout;
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
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__66__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__67__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_block> __Vtask_get_parent__69__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> __Vtask_get_default_map__70__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> __Vfunc_get_local_map__71__Vfuncout;
    // Body
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> unnamedblk440__DOT__l;
    CData/*0:0*/ unnamedblk440__DOT__l__Vfirst;
    unnamedblk440__DOT__l__Vfirst = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> unnamedblk440__DOT__unnamedblk441__DOT__map;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_block> unnamedblk440__DOT__unnamedblk441__DOT__blk;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> unnamedblk440__DOT__unnamedblk441__DOT__default_map;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> unnamedblk440__DOT__unnamedblk441__DOT__unnamedblk442__DOT__local_map;
    {
        if ((0U == this->__PVT__m_maps.size())) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__60__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__60__severity = 1U;
                            __Vfunc_uvm_report_enabled__60__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__61__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__61__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__62__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__62__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__60__verbosity, (IData)(__Vfunc_uvm_report_enabled__60__severity), __Vfunc_uvm_report_enabled__60__id, __Vtask_uvm_report_enabled__63__Vfuncout);
                            __Vfunc_uvm_report_enabled__60__Vfuncout 
                                = __Vtask_uvm_report_enabled__63__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__60__Vfuncout))) {
                __Vtask_uvm_report_warning__64__report_enabled_checked = 1U;
                __Vtask_uvm_report_warning__64__context_name = ""s;
                __Vtask_uvm_report_warning__64__line = 0x000002c2U;
                __Vtask_uvm_report_warning__64__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
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
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__67__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__67__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__64__id, __Vtask_uvm_report_warning__64__message, __Vtask_uvm_report_warning__64__verbosity, __Vtask_uvm_report_warning__64__filename, __Vtask_uvm_report_warning__64__line, __Vtask_uvm_report_warning__64__context_name, (IData)(__Vtask_uvm_report_warning__64__report_enabled_checked));
            }
            get_default_map__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        if ((1U == this->__PVT__m_maps.size())) {
            (void)this->__PVT__m_maps.first(get_default_map__Vfuncrtn);
        }
        if ((0U != this->__PVT__m_maps.first(unnamedblk440__DOT__l))) {
            unnamedblk440__DOT__l__Vfirst = 1U;
            while (((IData)(unnamedblk440__DOT__l__Vfirst) 
                    || (0U != this->__PVT__m_maps.next(unnamedblk440__DOT__l)))) {
                unnamedblk440__DOT__l__Vfirst = 0U;
                unnamedblk440__DOT__unnamedblk441__DOT__map 
                    = unnamedblk440__DOT__l;
                VL_NULL_CHECK(unnamedblk440__DOT__unnamedblk441__DOT__map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 718)->__VnoInFunc_get_parent(vlSymsp, __Vtask_get_parent__69__Vfuncout);
                unnamedblk440__DOT__unnamedblk441__DOT__blk 
                    = __Vtask_get_parent__69__Vfuncout;
                VL_NULL_CHECK(unnamedblk440__DOT__unnamedblk441__DOT__blk, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 719)->__VnoInFunc_get_default_map(vlSymsp, __Vtask_get_default_map__70__Vfuncout);
                unnamedblk440__DOT__unnamedblk441__DOT__default_map 
                    = __Vtask_get_default_map__70__Vfuncout;
                if ((VlNull{} != unnamedblk440__DOT__unnamedblk441__DOT__default_map)) {
                    this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, unnamedblk440__DOT__unnamedblk441__DOT__default_map, __Vfunc_get_local_map__71__Vfuncout);
                    unnamedblk440__DOT__unnamedblk441__DOT__unnamedblk442__DOT__local_map 
                        = __Vfunc_get_local_map__71__Vfuncout;
                    if ((VlNull{} != unnamedblk440__DOT__unnamedblk441__DOT__unnamedblk442__DOT__local_map)) {
                        get_default_map__Vfuncrtn = unnamedblk440__DOT__unnamedblk441__DOT__unnamedblk442__DOT__local_map;
                        goto __Vlabel0;
                    }
                }
            }
        }
        (void)this->__PVT__m_maps.first(get_default_map__Vfuncrtn);
        __Vlabel0: ;
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_access(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_access__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_access\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_get_n_maps__72__Vfuncout;
    __Vfunc_get_n_maps__72__Vfuncout = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> __Vfunc_get_local_map__73__Vfuncout;
    std::string __Vfunc_get_rights__74__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__75__Vfuncout;
    __Vfunc_uvm_report_enabled__75__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__75__verbosity;
    __Vfunc_uvm_report_enabled__75__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__75__severity;
    __Vfunc_uvm_report_enabled__75__severity = 0;
    std::string __Vfunc_uvm_report_enabled__75__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__76__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__77__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__78__Vfuncout;
    __Vtask_uvm_report_enabled__78__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__79__id;
    std::string __Vtask_uvm_report_error__79__message;
    IData/*31:0*/ __Vtask_uvm_report_error__79__verbosity;
    __Vtask_uvm_report_error__79__verbosity = 0;
    std::string __Vtask_uvm_report_error__79__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__79__line;
    __Vtask_uvm_report_error__79__line = 0;
    std::string __Vtask_uvm_report_error__79__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__79__report_enabled_checked;
    __Vtask_uvm_report_error__79__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__80__Vfuncout;
    std::string __Vtask_get_full_name__81__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__82__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__83__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__85__Vfuncout;
    __Vfunc_uvm_report_enabled__85__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__85__verbosity;
    __Vfunc_uvm_report_enabled__85__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__85__severity;
    __Vfunc_uvm_report_enabled__85__severity = 0;
    std::string __Vfunc_uvm_report_enabled__85__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__86__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__87__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__88__Vfuncout;
    __Vtask_uvm_report_enabled__88__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__89__id;
    std::string __Vtask_uvm_report_error__89__message;
    IData/*31:0*/ __Vtask_uvm_report_error__89__verbosity;
    __Vtask_uvm_report_error__89__verbosity = 0;
    std::string __Vtask_uvm_report_error__89__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__89__line;
    __Vtask_uvm_report_error__89__line = 0;
    std::string __Vtask_uvm_report_error__89__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__89__report_enabled_checked;
    __Vtask_uvm_report_error__89__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__90__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__91__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__92__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__94__Vfuncout;
    __Vfunc_uvm_report_enabled__94__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__94__verbosity;
    __Vfunc_uvm_report_enabled__94__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__94__severity;
    __Vfunc_uvm_report_enabled__94__severity = 0;
    std::string __Vfunc_uvm_report_enabled__94__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__95__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__96__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__97__Vfuncout;
    __Vtask_uvm_report_enabled__97__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__98__id;
    std::string __Vtask_uvm_report_error__98__message;
    IData/*31:0*/ __Vtask_uvm_report_error__98__verbosity;
    __Vtask_uvm_report_error__98__verbosity = 0;
    std::string __Vtask_uvm_report_error__98__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__98__line;
    __Vtask_uvm_report_error__98__line = 0;
    std::string __Vtask_uvm_report_error__98__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__98__report_enabled_checked;
    __Vtask_uvm_report_error__98__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__99__Vfuncout;
    std::string __Vtask_get_full_name__100__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__101__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__102__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__104__Vfuncout;
    __Vfunc_uvm_report_enabled__104__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__104__verbosity;
    __Vfunc_uvm_report_enabled__104__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__104__severity;
    __Vfunc_uvm_report_enabled__104__severity = 0;
    std::string __Vfunc_uvm_report_enabled__104__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__105__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__106__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__107__Vfuncout;
    __Vtask_uvm_report_enabled__107__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__108__id;
    std::string __Vtask_uvm_report_error__108__message;
    IData/*31:0*/ __Vtask_uvm_report_error__108__verbosity;
    __Vtask_uvm_report_error__108__verbosity = 0;
    std::string __Vtask_uvm_report_error__108__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__108__line;
    __Vtask_uvm_report_error__108__line = 0;
    std::string __Vtask_uvm_report_error__108__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__108__report_enabled_checked;
    __Vtask_uvm_report_error__108__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__109__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__110__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__111__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__113__Vfuncout;
    __Vfunc_uvm_report_enabled__113__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__113__verbosity;
    __Vfunc_uvm_report_enabled__113__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__113__severity;
    __Vfunc_uvm_report_enabled__113__severity = 0;
    std::string __Vfunc_uvm_report_enabled__113__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__114__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__115__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__116__Vfuncout;
    __Vtask_uvm_report_enabled__116__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__117__id;
    std::string __Vtask_uvm_report_error__117__message;
    IData/*31:0*/ __Vtask_uvm_report_error__117__verbosity;
    __Vtask_uvm_report_error__117__verbosity = 0;
    std::string __Vtask_uvm_report_error__117__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__117__line;
    __Vtask_uvm_report_error__117__line = 0;
    std::string __Vtask_uvm_report_error__117__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__117__report_enabled_checked;
    __Vtask_uvm_report_error__117__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__118__Vfuncout;
    std::string __Vtask_get_full_name__119__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__120__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__121__Vfuncout;
    // Body
    std::string __VCase_hea1764e7__0;
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
        if (([&]() {
                    this->__VnoInFunc_get_rights(vlProcess, vlSymsp, map, __Vfunc_get_rights__74__Vfuncout);
                    __VCase_hea1764e7__0 = __Vfunc_get_rights__74__Vfuncout;
                }(), 1U)) {
            if ((1U & (~ ("RW"s == __VCase_hea1764e7__0)))) {
                if (("RO"s == __VCase_hea1764e7__0)) {
                    if ((("RW"s == get_access__Vfuncrtn) 
                         || ("RO"s == get_access__Vfuncrtn))) {
                        get_access__Vfuncrtn = "RO"s;
                    } else if (("WO"s == get_access__Vfuncrtn)) {
                        if ((0U != ([&]() {
                                        __Vfunc_uvm_report_enabled__75__id = "RegModel"s;
                                        __Vfunc_uvm_report_enabled__75__severity = 2U;
                                        __Vfunc_uvm_report_enabled__75__verbosity = 0U;
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
                            __Vtask_uvm_report_error__79__report_enabled_checked = 1U;
                            __Vtask_uvm_report_error__79__context_name = ""s;
                            __Vtask_uvm_report_error__79__line = 0x000002f2U;
                            __Vtask_uvm_report_error__79__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                            __Vtask_uvm_report_error__79__verbosity = 0U;
                            __Vtask_uvm_report_error__79__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("WO memory '"s, 
                                                                                ([&]() {
                                                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__80__Vfuncout);
                                                    }(), __Vfunc_get_full_name__80__Vfuncout)), "' restricted to RO in map '"s), 
                                                                                ([&]() {
                                                VL_NULL_CHECK(map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 754)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__81__Vfuncout);
                                            }(), __Vtask_get_full_name__81__Vfuncout)), "'"s));
                            __Vtask_uvm_report_error__79__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__82__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                = __Vfunc_get__82__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__83__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                = __Vtask_get_root__83__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__79__id, __Vtask_uvm_report_error__79__message, __Vtask_uvm_report_error__79__verbosity, __Vtask_uvm_report_error__79__filename, __Vtask_uvm_report_error__79__line, __Vtask_uvm_report_error__79__context_name, (IData)(__Vtask_uvm_report_error__79__report_enabled_checked));
                        }
                    } else if ((0U != ([&]() {
                                    __Vfunc_uvm_report_enabled__85__id = "RegModel"s;
                                    __Vfunc_uvm_report_enabled__85__severity = 2U;
                                    __Vfunc_uvm_report_enabled__85__verbosity = 0U;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__86__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                        = __Vfunc_get__86__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                       ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__87__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                        = __Vtask_get_root__87__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                       ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__85__verbosity, (IData)(__Vfunc_uvm_report_enabled__85__severity), __Vfunc_uvm_report_enabled__85__id, __Vtask_uvm_report_enabled__88__Vfuncout);
                                    __Vfunc_uvm_report_enabled__85__Vfuncout 
                                        = __Vtask_uvm_report_enabled__88__Vfuncout;
                                }(), __Vfunc_uvm_report_enabled__85__Vfuncout))) {
                        __Vtask_uvm_report_error__89__report_enabled_checked = 1U;
                        __Vtask_uvm_report_error__89__context_name = ""s;
                        __Vtask_uvm_report_error__89__line = 0x000002f5U;
                        __Vtask_uvm_report_error__89__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                        __Vtask_uvm_report_error__89__verbosity = 0U;
                        __Vtask_uvm_report_error__89__message 
                            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                                VL_CONCATN_NNN(
                                                                               VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, 
                                                                                ([&]() {
                                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__90__Vfuncout);
                                                }(), __Vfunc_get_full_name__90__Vfuncout)), "' has invalid access mode, '"s), get_access__Vfuncrtn), "'"s));
                        __Vtask_uvm_report_error__89__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__91__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                            = __Vfunc_get__91__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__92__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                            = __Vtask_get_root__92__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__89__id, __Vtask_uvm_report_error__89__message, __Vtask_uvm_report_error__89__verbosity, __Vtask_uvm_report_error__89__filename, __Vtask_uvm_report_error__89__line, __Vtask_uvm_report_error__89__context_name, (IData)(__Vtask_uvm_report_error__89__report_enabled_checked));
                    }
                } else if (("WO"s == __VCase_hea1764e7__0)) {
                    if ((("RW"s == get_access__Vfuncrtn) 
                         || ("WO"s == get_access__Vfuncrtn))) {
                        get_access__Vfuncrtn = "WO"s;
                    } else if (("RO"s == get_access__Vfuncrtn)) {
                        if ((0U != ([&]() {
                                        __Vfunc_uvm_report_enabled__94__id = "RegModel"s;
                                        __Vfunc_uvm_report_enabled__94__severity = 2U;
                                        __Vfunc_uvm_report_enabled__94__verbosity = 0U;
                                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__95__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                            = __Vfunc_get__95__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__96__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                            = __Vtask_get_root__96__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__94__verbosity, (IData)(__Vfunc_uvm_report_enabled__94__severity), __Vfunc_uvm_report_enabled__94__id, __Vtask_uvm_report_enabled__97__Vfuncout);
                                        __Vfunc_uvm_report_enabled__94__Vfuncout 
                                            = __Vtask_uvm_report_enabled__97__Vfuncout;
                                    }(), __Vfunc_uvm_report_enabled__94__Vfuncout))) {
                            __Vtask_uvm_report_error__98__report_enabled_checked = 1U;
                            __Vtask_uvm_report_error__98__context_name = ""s;
                            __Vtask_uvm_report_error__98__line = 0x000002fdU;
                            __Vtask_uvm_report_error__98__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                            __Vtask_uvm_report_error__98__verbosity = 0U;
                            __Vtask_uvm_report_error__98__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("RO memory '"s, 
                                                                                ([&]() {
                                                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__99__Vfuncout);
                                                    }(), __Vfunc_get_full_name__99__Vfuncout)), "' restricted to WO in map '"s), 
                                                                                ([&]() {
                                                VL_NULL_CHECK(map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 765)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__100__Vfuncout);
                                            }(), __Vtask_get_full_name__100__Vfuncout)), "'"s));
                            __Vtask_uvm_report_error__98__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__101__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                = __Vfunc_get__101__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__102__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                = __Vtask_get_root__102__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__98__id, __Vtask_uvm_report_error__98__message, __Vtask_uvm_report_error__98__verbosity, __Vtask_uvm_report_error__98__filename, __Vtask_uvm_report_error__98__line, __Vtask_uvm_report_error__98__context_name, (IData)(__Vtask_uvm_report_error__98__report_enabled_checked));
                        }
                    } else if ((0U != ([&]() {
                                    __Vfunc_uvm_report_enabled__104__id = "RegModel"s;
                                    __Vfunc_uvm_report_enabled__104__severity = 2U;
                                    __Vfunc_uvm_report_enabled__104__verbosity = 0U;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__105__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                        = __Vfunc_get__105__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                       ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__106__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                        = __Vtask_get_root__106__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                       ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__104__verbosity, (IData)(__Vfunc_uvm_report_enabled__104__severity), __Vfunc_uvm_report_enabled__104__id, __Vtask_uvm_report_enabled__107__Vfuncout);
                                    __Vfunc_uvm_report_enabled__104__Vfuncout 
                                        = __Vtask_uvm_report_enabled__107__Vfuncout;
                                }(), __Vfunc_uvm_report_enabled__104__Vfuncout))) {
                        __Vtask_uvm_report_error__108__report_enabled_checked = 1U;
                        __Vtask_uvm_report_error__108__context_name = ""s;
                        __Vtask_uvm_report_error__108__line = 0x00000300U;
                        __Vtask_uvm_report_error__108__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                        __Vtask_uvm_report_error__108__verbosity = 0U;
                        __Vtask_uvm_report_error__108__message 
                            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                                VL_CONCATN_NNN(
                                                                               VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, 
                                                                                ([&]() {
                                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__109__Vfuncout);
                                                }(), __Vfunc_get_full_name__109__Vfuncout)), "' has invalid access mode, '"s), get_access__Vfuncrtn), "'"s));
                        __Vtask_uvm_report_error__108__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__110__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                            = __Vfunc_get__110__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__111__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                            = __Vtask_get_root__111__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__108__id, __Vtask_uvm_report_error__108__message, __Vtask_uvm_report_error__108__verbosity, __Vtask_uvm_report_error__108__filename, __Vtask_uvm_report_error__108__line, __Vtask_uvm_report_error__108__context_name, (IData)(__Vtask_uvm_report_error__108__report_enabled_checked));
                    }
                } else if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__113__id = "RegModel"s;
                                __Vfunc_uvm_report_enabled__113__severity = 2U;
                                __Vfunc_uvm_report_enabled__113__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__114__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__114__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                   ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__115__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__115__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                   ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__113__verbosity, (IData)(__Vfunc_uvm_report_enabled__113__severity), __Vfunc_uvm_report_enabled__113__id, __Vtask_uvm_report_enabled__116__Vfuncout);
                                __Vfunc_uvm_report_enabled__113__Vfuncout 
                                    = __Vtask_uvm_report_enabled__116__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__113__Vfuncout))) {
                    __Vtask_uvm_report_error__117__report_enabled_checked = 1U;
                    __Vtask_uvm_report_error__117__context_name = ""s;
                    __Vtask_uvm_report_error__117__line = 0x00000304U;
                    __Vtask_uvm_report_error__117__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                    __Vtask_uvm_report_error__117__verbosity = 0U;
                    __Vtask_uvm_report_error__117__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Shared memory '"s, 
                                                                                ([&]() {
                                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__118__Vfuncout);
                                            }(), __Vfunc_get_full_name__118__Vfuncout)), "' is not shared in map '"s), 
                                                                           ([&]() {
                                        VL_NULL_CHECK(map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 772)
                                                                            ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__119__Vfuncout);
                                    }(), __Vtask_get_full_name__119__Vfuncout)), "'"s));
                    __Vtask_uvm_report_error__117__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__120__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__120__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__121__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__121__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__117__id, __Vtask_uvm_report_error__117__message, __Vtask_uvm_report_error__117__verbosity, __Vtask_uvm_report_error__117__filename, __Vtask_uvm_report_error__117__line, __Vtask_uvm_report_error__117__context_name, (IData)(__Vtask_uvm_report_error__117__report_enabled_checked));
                }
            }
        }
        __Vlabel0: ;
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_rights(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_rights__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_rights\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> __Vfunc_get_local_map__123__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map_info> __Vtask_get_mem_map_info__124__Vfuncout;
    // Body
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map_info> info;
    {
        if (VL_GTES_III(32, 1U, this->__PVT__m_maps.size())) {
            get_rights__Vfuncrtn = "RW"s;
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, __Vfunc_get_local_map__123__Vfuncout);
        map = __Vfunc_get_local_map__123__Vfuncout;
        if ((VlNull{} == map)) {
            get_rights__Vfuncrtn = "RW"s;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 793)->__VnoInFunc_get_mem_map_info(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem>{this}, 1U, __Vtask_get_mem_map_info__124__Vfuncout);
        info = __Vtask_get_mem_map_info__124__Vfuncout;
        get_rights__Vfuncrtn = VL_NULL_CHECK(info, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 794)
            ->__PVT__rights;
        __Vlabel0: ;
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_offset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ offset, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ &get_offset__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_offset\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> __Vfunc_get_local_map__125__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map_info> __Vtask_get_mem_map_info__126__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__127__Vfuncout;
    __Vfunc_uvm_report_enabled__127__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__127__verbosity;
    __Vfunc_uvm_report_enabled__127__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__127__severity;
    __Vfunc_uvm_report_enabled__127__severity = 0;
    std::string __Vfunc_uvm_report_enabled__127__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__128__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__129__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__130__Vfuncout;
    __Vtask_uvm_report_enabled__130__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__131__id;
    std::string __Vtask_uvm_report_warning__131__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__131__verbosity;
    __Vtask_uvm_report_warning__131__verbosity = 0;
    std::string __Vtask_uvm_report_warning__131__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__131__line;
    __Vtask_uvm_report_warning__131__line = 0;
    std::string __Vtask_uvm_report_warning__131__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__131__report_enabled_checked;
    __Vtask_uvm_report_warning__131__report_enabled_checked = 0;
    std::string __Vfunc_get_name__132__Vfuncout;
    std::string __Vtask_get_full_name__133__Vfuncout;
    std::string __Vtask_get_full_name__134__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__135__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__136__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map_info> map_info;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> orig_map;
    {
        orig_map = map;
        this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, __Vfunc_get_local_map__125__Vfuncout);
        map = __Vfunc_get_local_map__125__Vfuncout;
        if ((VlNull{} == map)) {
            get_offset__Vfuncrtn = 0xffffffffffffffffULL;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 812)->__VnoInFunc_get_mem_map_info(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem>{this}, 1U, __Vtask_get_mem_map_info__126__Vfuncout);
        map_info = __Vtask_get_mem_map_info__126__Vfuncout;
        if (VL_NULL_CHECK(map_info, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 814)
            ->__PVT__unmapped) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__127__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__127__severity = 1U;
                            __Vfunc_uvm_report_enabled__127__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__128__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__128__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__129__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__129__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__127__verbosity, (IData)(__Vfunc_uvm_report_enabled__127__severity), __Vfunc_uvm_report_enabled__127__id, __Vtask_uvm_report_enabled__130__Vfuncout);
                            __Vfunc_uvm_report_enabled__127__Vfuncout 
                                = __Vtask_uvm_report_enabled__130__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__127__Vfuncout))) {
                __Vtask_uvm_report_warning__131__report_enabled_checked = 1U;
                __Vtask_uvm_report_warning__131__context_name = ""s;
                __Vtask_uvm_report_warning__131__line = 0x00000331U;
                __Vtask_uvm_report_warning__131__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_warning__131__verbosity = 0U;
                __Vtask_uvm_report_warning__131__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, 
                                                                                ([&]() {
                                            this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__132__Vfuncout);
                                        }(), __Vfunc_get_name__132__Vfuncout)), "' is unmapped in map '"s), 
                                                                       ((VlNull{} 
                                                                         == orig_map)
                                                                         ? 
                                                                        ([&]() {
                                        VL_NULL_CHECK(map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 817)
                                                                         ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__133__Vfuncout);
                                    }(), __Vtask_get_full_name__133__Vfuncout)
                                                                         : 
                                                                        ([&]() {
                                        VL_NULL_CHECK(orig_map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 817)
                                                                         ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__134__Vfuncout);
                                    }(), __Vtask_get_full_name__134__Vfuncout))), "'"s));
                __Vtask_uvm_report_warning__131__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__135__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__135__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__136__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__136__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__131__id, __Vtask_uvm_report_warning__131__message, __Vtask_uvm_report_warning__131__verbosity, __Vtask_uvm_report_warning__131__filename, __Vtask_uvm_report_warning__131__line, __Vtask_uvm_report_warning__131__context_name, (IData)(__Vtask_uvm_report_warning__131__report_enabled_checked));
            }
            get_offset__Vfuncrtn = 0xffffffffffffffffULL;
            goto __Vlabel0;
        }
        get_offset__Vfuncrtn = VL_NULL_CHECK(map_info, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 821)
            ->__PVT__offset;
        __Vlabel0: ;
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_virtual_registers(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_vreg>> &regs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_virtual_registers\n"); );
    // Body
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_vreg> unnamedblk443__DOT__vreg;
    CData/*0:0*/ unnamedblk443__DOT__vreg__Vfirst;
    unnamedblk443__DOT__vreg__Vfirst = 0;
    if ((0U != this->__PVT__m_vregs.first(unnamedblk443__DOT__vreg))) {
        unnamedblk443__DOT__vreg__Vfirst = 1U;
        while (((IData)(unnamedblk443__DOT__vreg__Vfirst) 
                || (0U != this->__PVT__m_vregs.next(unnamedblk443__DOT__vreg)))) {
            unnamedblk443__DOT__vreg__Vfirst = 0U;
            regs.push_back(unnamedblk443__DOT__vreg);
        }
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_virtual_fields(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_vreg_field>> &fields) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_virtual_fields\n"); );
    // Body
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_vreg> unnamedblk444__DOT__l;
    CData/*0:0*/ unnamedblk444__DOT__l__Vfirst;
    unnamedblk444__DOT__l__Vfirst = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_vreg> unnamedblk444__DOT__unnamedblk445__DOT__vreg;
    if ((0U != this->__PVT__m_vregs.first(unnamedblk444__DOT__l))) {
        unnamedblk444__DOT__l__Vfirst = 1U;
        while (((IData)(unnamedblk444__DOT__l__Vfirst) 
                || (0U != this->__PVT__m_vregs.next(unnamedblk444__DOT__l)))) {
            unnamedblk444__DOT__l__Vfirst = 0U;
            unnamedblk444__DOT__unnamedblk445__DOT__vreg 
                = unnamedblk444__DOT__l;
            VL_NULL_CHECK(unnamedblk444__DOT__unnamedblk445__DOT__vreg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 842)->__VnoInFunc_get_fields(vlSymsp, fields);
        }
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_vfield_by_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_vreg_field> &get_vfield_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_vfield_by_name\n"); );
    // Locals
    std::string __Vtask_get_name__140__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__141__Vfuncout;
    __Vfunc_uvm_report_enabled__141__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__141__verbosity;
    __Vfunc_uvm_report_enabled__141__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__141__severity;
    __Vfunc_uvm_report_enabled__141__severity = 0;
    std::string __Vfunc_uvm_report_enabled__141__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__142__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__143__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__144__Vfuncout;
    __Vtask_uvm_report_enabled__144__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__145__id;
    std::string __Vtask_uvm_report_warning__145__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__145__verbosity;
    __Vtask_uvm_report_warning__145__verbosity = 0;
    std::string __Vtask_uvm_report_warning__145__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__145__line;
    __Vtask_uvm_report_warning__145__line = 0;
    std::string __Vtask_uvm_report_warning__145__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__145__report_enabled_checked;
    __Vtask_uvm_report_warning__145__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__146__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__147__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__148__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ unnamedblk446__DOT__i;
    unnamedblk446__DOT__i = 0;
    VlQueue<VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_vreg_field>> vfields;
    {
        this->__VnoInFunc_get_virtual_fields(vlSymsp, vfields);
        unnamedblk446__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk446__DOT__i, vfields.size())) {
            if ((([&]() {
                            VL_NULL_CHECK(vfields.at(unnamedblk446__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 856)
                  ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__140__Vfuncout);
                        }(), __Vtask_get_name__140__Vfuncout) 
                 == name)) {
                get_vfield_by_name__Vfuncrtn = vfields.at(unnamedblk446__DOT__i);
                goto __Vlabel0;
            }
            unnamedblk446__DOT__i = ((IData)(1U) + unnamedblk446__DOT__i);
        }
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__141__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__141__severity = 1U;
                        __Vfunc_uvm_report_enabled__141__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__142__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__142__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__143__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__143__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__141__verbosity, (IData)(__Vfunc_uvm_report_enabled__141__severity), __Vfunc_uvm_report_enabled__141__id, __Vtask_uvm_report_enabled__144__Vfuncout);
                        __Vfunc_uvm_report_enabled__141__Vfuncout 
                            = __Vtask_uvm_report_enabled__144__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__141__Vfuncout))) {
            __Vtask_uvm_report_warning__145__report_enabled_checked = 1U;
            __Vtask_uvm_report_warning__145__context_name = ""s;
            __Vtask_uvm_report_warning__145__line = 0x0000035cU;
            __Vtask_uvm_report_warning__145__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
            __Vtask_uvm_report_warning__145__verbosity = 0U;
            __Vtask_uvm_report_warning__145__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Unable to find virtual field '"s, name), "' in memory '"s), 
                                                                   ([&]() {
                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__146__Vfuncout);
                            }(), __Vfunc_get_full_name__146__Vfuncout)), "'"s));
            __Vtask_uvm_report_warning__145__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__147__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__147__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__148__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__148__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__145__id, __Vtask_uvm_report_warning__145__message, __Vtask_uvm_report_warning__145__verbosity, __Vtask_uvm_report_warning__145__filename, __Vtask_uvm_report_warning__145__line, __Vtask_uvm_report_warning__145__context_name, (IData)(__Vtask_uvm_report_warning__145__report_enabled_checked));
        }
        get_vfield_by_name__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_vreg_by_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_vreg> &get_vreg_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_vreg_by_name\n"); );
    // Locals
    std::string __Vtask_get_name__150__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__151__Vfuncout;
    __Vfunc_uvm_report_enabled__151__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__151__verbosity;
    __Vfunc_uvm_report_enabled__151__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__151__severity;
    __Vfunc_uvm_report_enabled__151__severity = 0;
    std::string __Vfunc_uvm_report_enabled__151__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__152__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__153__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__154__Vfuncout;
    __Vtask_uvm_report_enabled__154__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__155__id;
    std::string __Vtask_uvm_report_warning__155__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__155__verbosity;
    __Vtask_uvm_report_warning__155__verbosity = 0;
    std::string __Vtask_uvm_report_warning__155__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__155__line;
    __Vtask_uvm_report_warning__155__line = 0;
    std::string __Vtask_uvm_report_warning__155__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__155__report_enabled_checked;
    __Vtask_uvm_report_warning__155__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__156__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__157__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__158__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_vreg> unnamedblk447__DOT__l;
    CData/*0:0*/ unnamedblk447__DOT__l__Vfirst;
    unnamedblk447__DOT__l__Vfirst = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_vreg> unnamedblk447__DOT__unnamedblk448__DOT__vreg;
    {
        if ((0U != this->__PVT__m_vregs.first(unnamedblk447__DOT__l))) {
            unnamedblk447__DOT__l__Vfirst = 1U;
            while (((IData)(unnamedblk447__DOT__l__Vfirst) 
                    || (0U != this->__PVT__m_vregs.next(unnamedblk447__DOT__l)))) {
                unnamedblk447__DOT__l__Vfirst = 0U;
                unnamedblk447__DOT__unnamedblk448__DOT__vreg 
                    = unnamedblk447__DOT__l;
                if ((([&]() {
                                VL_NULL_CHECK(unnamedblk447__DOT__unnamedblk448__DOT__vreg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 872)
                      ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__150__Vfuncout);
                            }(), __Vtask_get_name__150__Vfuncout) 
                     == name)) {
                    get_vreg_by_name__Vfuncrtn = unnamedblk447__DOT__unnamedblk448__DOT__vreg;
                    goto __Vlabel0;
                }
            }
        }
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__151__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__151__severity = 1U;
                        __Vfunc_uvm_report_enabled__151__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__152__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__152__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__153__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__153__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__151__verbosity, (IData)(__Vfunc_uvm_report_enabled__151__severity), __Vfunc_uvm_report_enabled__151__id, __Vtask_uvm_report_enabled__154__Vfuncout);
                        __Vfunc_uvm_report_enabled__151__Vfuncout 
                            = __Vtask_uvm_report_enabled__154__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__151__Vfuncout))) {
            __Vtask_uvm_report_warning__155__report_enabled_checked = 1U;
            __Vtask_uvm_report_warning__155__context_name = ""s;
            __Vtask_uvm_report_warning__155__line = 0x0000036dU;
            __Vtask_uvm_report_warning__155__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
            __Vtask_uvm_report_warning__155__verbosity = 0U;
            __Vtask_uvm_report_warning__155__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Unable to find virtual register '"s, name), "' in memory '"s), 
                                                                   ([&]() {
                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__156__Vfuncout);
                            }(), __Vfunc_get_full_name__156__Vfuncout)), "'"s));
            __Vtask_uvm_report_warning__155__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__157__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__157__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__158__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__158__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__155__id, __Vtask_uvm_report_warning__155__message, __Vtask_uvm_report_warning__155__verbosity, __Vtask_uvm_report_warning__155__filename, __Vtask_uvm_report_warning__155__line, __Vtask_uvm_report_warning__155__context_name, (IData)(__Vtask_uvm_report_warning__155__report_enabled_checked));
        }
        get_vreg_by_name__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_vreg_by_offset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ offset, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_vreg> &get_vreg_by_offset__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_vreg_by_offset\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__160__Vfuncout;
    __Vfunc_uvm_report_enabled__160__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__160__verbosity;
    __Vfunc_uvm_report_enabled__160__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__160__severity;
    __Vfunc_uvm_report_enabled__160__severity = 0;
    std::string __Vfunc_uvm_report_enabled__160__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__161__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__162__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__163__Vfuncout;
    __Vtask_uvm_report_enabled__163__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__164__id;
    std::string __Vtask_uvm_report_error__164__message;
    IData/*31:0*/ __Vtask_uvm_report_error__164__verbosity;
    __Vtask_uvm_report_error__164__verbosity = 0;
    std::string __Vtask_uvm_report_error__164__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__164__line;
    __Vtask_uvm_report_error__164__line = 0;
    std::string __Vtask_uvm_report_error__164__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__164__report_enabled_checked;
    __Vtask_uvm_report_error__164__report_enabled_checked = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__165__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__166__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__160__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__160__severity = 2U;
                    __Vfunc_uvm_report_enabled__160__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__161__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__161__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__162__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__162__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__160__verbosity, (IData)(__Vfunc_uvm_report_enabled__160__severity), __Vfunc_uvm_report_enabled__160__id, __Vtask_uvm_report_enabled__163__Vfuncout);
                    __Vfunc_uvm_report_enabled__160__Vfuncout 
                        = __Vtask_uvm_report_enabled__163__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__160__Vfuncout))) {
        __Vtask_uvm_report_error__164__report_enabled_checked = 1U;
        __Vtask_uvm_report_error__164__context_name = ""s;
        __Vtask_uvm_report_error__164__line = 0x00000377U;
        __Vtask_uvm_report_error__164__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
        __Vtask_uvm_report_error__164__verbosity = 0U;
        __Vtask_uvm_report_error__164__message = "uvm_mem::get_vreg_by_offset() not yet implemented"s;
        __Vtask_uvm_report_error__164__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__165__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__165__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__166__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__166__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__164__id, __Vtask_uvm_report_error__164__message, __Vtask_uvm_report_error__164__verbosity, __Vtask_uvm_report_error__164__filename, __Vtask_uvm_report_error__164__line, __Vtask_uvm_report_error__164__context_name, (IData)(__Vtask_uvm_report_error__164__report_enabled_checked));
    }
    get_vreg_by_offset__Vfuncrtn = VlNull{};
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_addresses(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ offset, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> map, VlQueue<QData/*63:0*/> &addr, IData/*31:0*/ &get_addresses__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_addresses\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> __Vfunc_get_local_map__168__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map_info> __Vtask_get_mem_map_info__169__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__170__Vfuncout;
    __Vfunc_uvm_report_enabled__170__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__170__verbosity;
    __Vfunc_uvm_report_enabled__170__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__170__severity;
    __Vfunc_uvm_report_enabled__170__severity = 0;
    std::string __Vfunc_uvm_report_enabled__170__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__171__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__172__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__173__Vfuncout;
    __Vtask_uvm_report_enabled__173__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__174__id;
    std::string __Vtask_uvm_report_warning__174__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__174__verbosity;
    __Vtask_uvm_report_warning__174__verbosity = 0;
    std::string __Vtask_uvm_report_warning__174__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__174__line;
    __Vtask_uvm_report_warning__174__line = 0;
    std::string __Vtask_uvm_report_warning__174__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__174__report_enabled_checked;
    __Vtask_uvm_report_warning__174__report_enabled_checked = 0;
    std::string __Vfunc_get_name__175__Vfuncout;
    std::string __Vtask_get_full_name__176__Vfuncout;
    std::string __Vtask_get_full_name__177__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__178__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__179__Vfuncout;
    IData/*31:0*/ __Vtask_get_n_bytes__181__Vfuncout;
    __Vtask_get_n_bytes__181__Vfuncout = 0;
    // Body
    IData/*31:0*/ unnamedblk449__DOT__i;
    unnamedblk449__DOT__i = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map_info> map_info;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> system_map;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> orig_map;
    {
        orig_map = map;
        this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, __Vfunc_get_local_map__168__Vfuncout);
        map = __Vfunc_get_local_map__168__Vfuncout;
        if ((VlNull{} == map)) {
            get_addresses__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 908)->__VnoInFunc_get_mem_map_info(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem>{this}, 1U, __Vtask_get_mem_map_info__169__Vfuncout);
        map_info = __Vtask_get_mem_map_info__169__Vfuncout;
        if (VL_NULL_CHECK(map_info, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 910)
            ->__PVT__unmapped) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__170__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__170__severity = 1U;
                            __Vfunc_uvm_report_enabled__170__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__171__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__171__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__172__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__172__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__170__verbosity, (IData)(__Vfunc_uvm_report_enabled__170__severity), __Vfunc_uvm_report_enabled__170__id, __Vtask_uvm_report_enabled__173__Vfuncout);
                            __Vfunc_uvm_report_enabled__170__Vfuncout 
                                = __Vtask_uvm_report_enabled__173__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__170__Vfuncout))) {
                __Vtask_uvm_report_warning__174__report_enabled_checked = 1U;
                __Vtask_uvm_report_warning__174__context_name = ""s;
                __Vtask_uvm_report_warning__174__line = 0x00000391U;
                __Vtask_uvm_report_warning__174__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_warning__174__verbosity = 0U;
                __Vtask_uvm_report_warning__174__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, 
                                                                                ([&]() {
                                            this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__175__Vfuncout);
                                        }(), __Vfunc_get_name__175__Vfuncout)), "' is unmapped in map '"s), 
                                                                       ((VlNull{} 
                                                                         == orig_map)
                                                                         ? 
                                                                        ([&]() {
                                        VL_NULL_CHECK(map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 913)
                                                                         ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__176__Vfuncout);
                                    }(), __Vtask_get_full_name__176__Vfuncout)
                                                                         : 
                                                                        ([&]() {
                                        VL_NULL_CHECK(orig_map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 913)
                                                                         ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__177__Vfuncout);
                                    }(), __Vtask_get_full_name__177__Vfuncout))), "'"s));
                __Vtask_uvm_report_warning__174__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__178__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__178__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__179__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__179__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__174__id, __Vtask_uvm_report_warning__174__message, __Vtask_uvm_report_warning__174__verbosity, __Vtask_uvm_report_warning__174__filename, __Vtask_uvm_report_warning__174__line, __Vtask_uvm_report_warning__174__context_name, (IData)(__Vtask_uvm_report_warning__174__report_enabled_checked));
            }
            get_addresses__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        addr = VL_NULL_CHECK(map_info, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 917)
            ->__PVT__addr;
        unnamedblk449__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk449__DOT__i, addr.size())) {
            addr.atWrite(unnamedblk449__DOT__i) = (addr.at(unnamedblk449__DOT__i) 
                                                   + 
                                                   ((QData)((IData)(
                                                                    VL_NULL_CHECK(map_info, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 920)
                                                                    ->__PVT__mem_range[0U])) 
                                                    * offset));
            unnamedblk449__DOT__i = ((IData)(1U) + unnamedblk449__DOT__i);
        }
        VL_NULL_CHECK(map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 922)->__VnoInFunc_get_n_bytes(vlSymsp, 1U, __Vtask_get_n_bytes__181__Vfuncout);
        get_addresses__Vfuncrtn = __Vtask_get_n_bytes__181__Vfuncout;
        __Vlabel0: ;
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_address(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ offset, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ &get_address__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_address\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_addresses__182__Vfuncout;
    __Vtask_get_addresses__182__Vfuncout = 0;
    // Body
    VlQueue<QData/*63:0*/> addr;
    addr.atDefault() = 0;
    this->__VnoInFunc_get_addresses(vlProcess, vlSymsp, offset, map, addr, __Vtask_get_addresses__182__Vfuncout);
    get_address__Vfuncrtn = addr.at(0U);
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_size(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ &get_size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_size\n"); );
    // Body
    get_size__Vfuncrtn = this->__PVT__m_size;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_n_bits(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bits__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_n_bits\n"); );
    // Body
    get_n_bits__Vfuncrtn = this->__PVT__m_n_bits;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_n_bytes(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bytes__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_n_bytes\n"); );
    // Body
    get_n_bytes__Vfuncrtn = ((IData)(1U) + VL_SHIFTR_III(32,32,32, 
                                                         (this->__PVT__m_n_bits 
                                                          - (IData)(1U)), 3U));
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_build_coverage(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ models, IData/*31:0*/ &build_coverage__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_build_coverage\n"); );
    // Locals
    CData/*0:0*/ __Vtask_read_by_name__183__Vfuncout;
    __Vtask_read_by_name__183__Vfuncout = 0;
    IData/*31:0*/ __Vtask_read_by_name__183__val;
    __Vtask_read_by_name__183__val = 0;
    std::string __Vfunc_get_full_name__184__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    build_coverage__Vfuncrtn = 0U;
    __Vtask_read_by_name__183__val = build_coverage__Vfuncrtn;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz189__Vclpkg.__VnoInFunc_read_by_name(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("uvm_reg::"s, 
                                                                                ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__184__Vfuncout);
                    }(), __Vfunc_get_full_name__184__Vfuncout))), "include_coverage"s, __Vtask_read_by_name__183__val, 
                                                                                VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem>{this}, __Vtask_read_by_name__183__Vfuncout);
    build_coverage__Vfuncrtn = __Vtask_read_by_name__183__val;
    build_coverage__Vfuncrtn = (build_coverage__Vfuncrtn 
                                & models);
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_add_coverage(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ models) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_add_coverage\n"); );
    // Body
    this->__PVT__m_has_cover = (this->__PVT__m_has_cover 
                                | models);
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_has_coverage(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ models, CData/*0:0*/ &has_coverage__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_has_coverage\n"); );
    // Body
    has_coverage__Vfuncrtn = ((this->__PVT__m_has_cover 
                               & models) == models);
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_set_coverage(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ is_on, IData/*31:0*/ &set_coverage__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_set_coverage\n"); );
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

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_coverage(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ is_on, CData/*0:0*/ &get_coverage__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_coverage\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_has_coverage__185__Vfuncout;
    __Vfunc_has_coverage__185__Vfuncout = 0;
    // Body
    {
        if ((1U & (~ ([&]() {
                            this->__VnoInFunc_has_coverage(vlSymsp, is_on, __Vfunc_has_coverage__185__Vfuncout);
                        }(), (IData)(__Vfunc_has_coverage__185__Vfuncout))))) {
            get_coverage__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        get_coverage__Vfuncrtn = ((this->__PVT__m_cover_on 
                                   & is_on) == is_on);
        __Vlabel0: ;
    }
}

VlCoroutine Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_write(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_write\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> __Vfunc_create__186__Vfuncout;
    std::string __Vfunc_get_full_name__187__Vfuncout;
    // Body
    VL_KEEP_THIS;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> rw;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi118__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "mem_write"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__187__Vfuncout);
                }(), __Vfunc_get_full_name__187__Vfuncout)), __Vfunc_create__186__Vfuncout);
    rw = __Vfunc_create__186__Vfuncout;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1039)->__PVT__element 
        = VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem>{this};
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1040)->__PVT__element_kind = 2U;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1041)->__PVT__kind = 1U;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1042)->__PVT__offset 
        = offset;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1043)->__PVT__value.atWrite(0U) 
        = value;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1044)->__PVT__path 
        = path;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1045)->__PVT__map 
        = map;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1046)->__PVT__parent 
        = parent;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1047)->__PVT__prior 
        = prior;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1048)->__PVT__extension 
        = extension;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1049)->__PVT__fname 
        = fname;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1050)->__PVT__lineno 
        = lineno;
    co_await this->__VnoInFunc_do_write(vlProcess, vlSymsp, rw);
    status = VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1054)
        ->__PVT__status;
    co_return;}

VlCoroutine Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_read(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_read\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> __Vfunc_create__189__Vfuncout;
    std::string __Vfunc_get_full_name__190__Vfuncout;
    // Body
    VL_KEEP_THIS;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> rw;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi118__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "mem_read"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__190__Vfuncout);
                }(), __Vfunc_get_full_name__190__Vfuncout)), __Vfunc_create__189__Vfuncout);
    rw = __Vfunc_create__189__Vfuncout;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1074)->__PVT__element 
        = VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem>{this};
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1075)->__PVT__element_kind = 2U;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1076)->__PVT__kind = 0U;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1077)->__PVT__value.atWrite(0U) = 0ULL;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1078)->__PVT__offset 
        = offset;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1079)->__PVT__path 
        = path;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1080)->__PVT__map 
        = map;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1081)->__PVT__parent 
        = parent;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1082)->__PVT__prior 
        = prior;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1083)->__PVT__extension 
        = extension;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1084)->__PVT__fname 
        = fname;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1085)->__PVT__lineno 
        = lineno;
    co_await this->__VnoInFunc_do_read(vlProcess, vlSymsp, rw);
    status = VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1089)
        ->__PVT__status;
    value = VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1090)
        ->__PVT__value.at(0U);
    co_return;}

VlCoroutine Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_burst_write(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, VlQueue<QData/*63:0*/> value, IData/*31:0*/ path, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_burst_write\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> __Vfunc_create__192__Vfuncout;
    std::string __Vfunc_get_full_name__193__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> rw;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi118__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "mem_burst_write"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__193__Vfuncout);
                }(), __Vfunc_get_full_name__193__Vfuncout)), __Vfunc_create__192__Vfuncout);
    rw = __Vfunc_create__192__Vfuncout;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1110)->__PVT__element 
        = VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem>{this};
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1111)->__PVT__element_kind = 2U;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1112)->__PVT__kind = 3U;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1113)->__PVT__offset 
        = offset;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1114)->__PVT__value 
        = value;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1115)->__PVT__path 
        = path;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1116)->__PVT__map 
        = map;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1117)->__PVT__parent 
        = parent;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1118)->__PVT__prior 
        = prior;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1119)->__PVT__extension 
        = extension;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1120)->__PVT__fname 
        = fname;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1121)->__PVT__lineno 
        = lineno;
    co_await this->__VnoInFunc_do_write(vlProcess, vlSymsp, rw);
    status = VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1125)
        ->__PVT__status;
    co_return;}

VlCoroutine Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_burst_read(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, VlQueue<QData/*63:0*/> &value, IData/*31:0*/ path, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_burst_read\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> __Vfunc_create__195__Vfuncout;
    std::string __Vfunc_get_full_name__196__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> rw;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi118__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "mem_burst_read"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__196__Vfuncout);
                }(), __Vfunc_get_full_name__196__Vfuncout)), __Vfunc_create__195__Vfuncout);
    rw = __Vfunc_create__195__Vfuncout;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1145)->__PVT__element 
        = VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem>{this};
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1146)->__PVT__element_kind = 2U;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1147)->__PVT__kind = 2U;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1148)->__PVT__offset 
        = offset;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1149)->__PVT__value 
        = value;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1150)->__PVT__path 
        = path;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1151)->__PVT__map 
        = map;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1152)->__PVT__parent 
        = parent;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1153)->__PVT__prior 
        = prior;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1154)->__PVT__extension 
        = extension;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1155)->__PVT__fname 
        = fname;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1156)->__PVT__lineno 
        = lineno;
    co_await this->__VnoInFunc_do_read(vlProcess, vlSymsp, rw);
    status = VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1160)
        ->__PVT__status;
    value = VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1161)
        ->__PVT__value;
    co_return;}

VlCoroutine Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_write(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_write\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_Xcheck_accessX__199__Vfuncout;
    __Vfunc_Xcheck_accessX__199__Vfuncout = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map_info> __Vfunc_Xcheck_accessX__199__map_info;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_first__201__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_next__203__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> __Vtask_get_root_map__204__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequencer_base> __Vtask_get_sequencer__205__Vfuncout;
    std::string __Vfunc_get_access__210__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_backdoor> __Vfunc_get_backdoor__211__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_first__215__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_next__217__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__218__Vfuncout;
    __Vfunc_uvm_report_enabled__218__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__218__verbosity;
    __Vfunc_uvm_report_enabled__218__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__218__severity;
    __Vfunc_uvm_report_enabled__218__severity = 0;
    std::string __Vfunc_uvm_report_enabled__218__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__219__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__220__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__221__Vfuncout;
    __Vtask_uvm_report_enabled__221__Vfuncout = 0;
    std::string __Vtask_get_full_name__222__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_backdoor> __Vfunc_get_backdoor__223__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__224__Vfuncout;
    __Vfunc_uvm_report_enabled__224__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__224__verbosity;
    __Vfunc_uvm_report_enabled__224__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__224__severity;
    __Vfunc_uvm_report_enabled__224__severity = 0;
    std::string __Vfunc_uvm_report_enabled__224__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__225__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__226__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__227__Vfuncout;
    __Vtask_uvm_report_enabled__227__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__228__id;
    std::string __Vtask_uvm_report_info__228__message;
    IData/*31:0*/ __Vtask_uvm_report_info__228__verbosity;
    __Vtask_uvm_report_info__228__verbosity = 0;
    std::string __Vtask_uvm_report_info__228__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__228__line;
    __Vtask_uvm_report_info__228__line = 0;
    std::string __Vtask_uvm_report_info__228__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__228__report_enabled_checked;
    __Vtask_uvm_report_info__228__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__229__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__230__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__231__Vfuncout;
    CData/*31:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    // Body
    VL_KEEP_THIS;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk450__DOT__cb;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> unnamedblk451__DOT__system_map;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_frontdoor> unnamedblk451__DOT__unnamedblk452__DOT__fd;
    QData/*63:0*/ unnamedblk451__DOT__unnamedblk453__DOT__idx;
    unnamedblk451__DOT__unnamedblk453__DOT__idx = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_backdoor> unnamedblk454__DOT__bkdr;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk455__DOT__cb;
    std::string unnamedblk456__DOT__path_s;
    std::string unnamedblk456__DOT__value_s;
    std::string unnamedblk456__DOT__pre_s;
    std::string unnamedblk456__DOT__range_s;
    IData/*31:0*/ unnamedblk456__DOT__unnamedblk457__DOT__i;
    unnamedblk456__DOT__unnamedblk457__DOT__i = 0;
    std::string __VInside_h7dbb2233__0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callback_iter__pi100> cbs;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map_info> map_info;
    {
        cbs = VL_NEW(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callback_iter__pi100, vlSymsp, 
                     VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem>{this});
        this->__PVT__m_fname = VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1173)
            ->__PVT__fname;
        this->__PVT__m_lineno = VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1174)
            ->__PVT__lineno;
        if ((1U & (~ ([&]() {
                            this->__VnoInFunc_Xcheck_accessX(vlProcess, vlSymsp, rw, __Vfunc_Xcheck_accessX__199__map_info, __Vfunc_Xcheck_accessX__199__Vfuncout);
                            map_info = __Vfunc_Xcheck_accessX__199__map_info;
                        }(), (IData)(__Vfunc_Xcheck_accessX__199__Vfuncout))))) {
            goto __Vlabel0;
        }
        this->__PVT__m_write_in_progress = 1U;
        VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1181)->__PVT__status = 0U;
        this->__VnoInFunc_pre_write(vlSymsp, rw);
        VL_NULL_CHECK(cbs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1185)->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__201__Vfuncout);
        unnamedblk450__DOT__cb = __Vtask_first__201__Vfuncout;
        while ((VlNull{} != unnamedblk450__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk450__DOT__cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1186)->__VnoInFunc_pre_write(vlProcess, vlSymsp, rw);
            VL_NULL_CHECK(cbs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1185)->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__203__Vfuncout);
            unnamedblk450__DOT__cb = __Vtask_next__203__Vfuncout;
        }
        if ((0U != VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1188)
             ->__PVT__status)) {
            this->__PVT__m_write_in_progress = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1194)->__PVT__status = 1U;
        if ((0U == VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1197)
             ->__PVT__path)) {
            VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1199)
                          ->__PVT__local_map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1199)->__VnoInFunc_get_root_map(vlSymsp, __Vtask_get_root_map__204__Vfuncout);
            unnamedblk451__DOT__system_map = __Vtask_get_root_map__204__Vfuncout;
            if ((VlNull{} != VL_NULL_CHECK(map_info, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1201)
                 ->__PVT__frontdoor)) {
                unnamedblk451__DOT__unnamedblk452__DOT__fd 
                    = VL_NULL_CHECK(map_info, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1202)
                    ->__PVT__frontdoor;
                VL_NULL_CHECK(unnamedblk451__DOT__unnamedblk452__DOT__fd, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1203)->__PVT__rw_info 
                    = rw;
                if ((VlNull{} == VL_NULL_CHECK(unnamedblk451__DOT__unnamedblk452__DOT__fd, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1204)
                     ->__PVT__sequencer)) {
                    VL_NULL_CHECK(unnamedblk451__DOT__system_map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1205)->__VnoInFunc_get_sequencer(vlSymsp, 1U, __Vtask_get_sequencer__205__Vfuncout);
                    VL_NULL_CHECK(unnamedblk451__DOT__unnamedblk452__DOT__fd, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1205)->__PVT__sequencer 
                        = __Vtask_get_sequencer__205__Vfuncout;
                }
                co_await VL_NULL_CHECK(unnamedblk451__DOT__unnamedblk452__DOT__fd, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1206)->__VnoInFunc_start(vlProcess, vlSymsp, VL_NULL_CHECK(unnamedblk451__DOT__unnamedblk452__DOT__fd, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1206)
                                                                                ->__PVT__sequencer, VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1206)
                                                                                ->__PVT__parent, 0xffffffffU, 1U);
            } else {
                co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1209)
                                       ->__PVT__local_map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1209)->__VnoInFunc_do_write(vlProcess, vlSymsp, rw);
            }
            if ((1U != VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1212)
                 ->__PVT__status)) {
                unnamedblk451__DOT__unnamedblk453__DOT__idx 
                    = VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1213)
                    ->__PVT__offset;
                while ((unnamedblk451__DOT__unnamedblk453__DOT__idx 
                        <= (VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1214)
                            ->__PVT__offset + (QData)((IData)(VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1214)
                                                              ->__PVT__value.size()))))) {
                    this->__VnoInFunc_XsampleX(vlSymsp, 
                                               ((QData)((IData)(
                                                                VL_NULL_CHECK(map_info, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1216)
                                                                ->__PVT__mem_range[0U])) 
                                                * unnamedblk451__DOT__unnamedblk453__DOT__idx), 0U, VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1216)
                                               ->__PVT__map);
                    VL_NULL_CHECK(this->__PVT__m_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1217)->__VnoInFunc_XsampleX(vlSymsp, 
                                                                                (VL_NULL_CHECK(map_info, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1217)
                                                                                ->__PVT__offset 
                                                                                + 
                                                                                ((QData)((IData)(
                                                                                VL_NULL_CHECK(map_info, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1218)
                                                                                ->__PVT__mem_range[0U])) 
                                                                                * unnamedblk451__DOT__unnamedblk453__DOT__idx)), 0U, VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1219)
                                                                                ->__PVT__map);
                    unnamedblk451__DOT__unnamedblk453__DOT__idx 
                        = (1ULL + unnamedblk451__DOT__unnamedblk453__DOT__idx);
                }
            }
        } else if ((("RW"s == ([&]() {
                            this->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1226)
                                                         ->__PVT__map, __Vfunc_get_access__210__Vfuncout);
                            __VInside_h7dbb2233__0 
                                = __Vfunc_get_access__210__Vfuncout;
                        }(), __VInside_h7dbb2233__0)) 
                    || ("WO"s == __VInside_h7dbb2233__0))) {
            this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __Vfunc_get_backdoor__211__Vfuncout);
            unnamedblk454__DOT__bkdr = __Vfunc_get_backdoor__211__Vfuncout;
            if ((VlNull{} != unnamedblk454__DOT__bkdr)) {
                VL_NULL_CHECK(unnamedblk454__DOT__bkdr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1229)->__VnoInFunc_write(vlProcess, vlSymsp, rw);
            } else {
                this->__VnoInFunc_backdoor_write(vlProcess, vlSymsp, rw);
            }
        } else {
            VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1234)->__PVT__status = 1U;
        }
        this->__VnoInFunc_post_write(vlSymsp, rw);
        VL_NULL_CHECK(cbs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1239)->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__215__Vfuncout);
        unnamedblk455__DOT__cb = __Vtask_first__215__Vfuncout;
        while ((VlNull{} != unnamedblk455__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk455__DOT__cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1240)->__VnoInFunc_post_write(vlSymsp, rw);
            VL_NULL_CHECK(cbs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1239)->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__217__Vfuncout);
            unnamedblk455__DOT__cb = __Vtask_next__217__Vfuncout;
        }
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__218__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__218__severity = 0U;
                        __Vfunc_uvm_report_enabled__218__verbosity = 0x0000012cU;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__219__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__219__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__220__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__220__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__218__verbosity, (IData)(__Vfunc_uvm_report_enabled__218__severity), __Vfunc_uvm_report_enabled__218__id, __Vtask_uvm_report_enabled__221__Vfuncout);
                        __Vfunc_uvm_report_enabled__218__Vfuncout 
                            = __Vtask_uvm_report_enabled__221__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__218__Vfuncout))) {
            __Vtemp_3 = (VlNull{} != ([&]() {
                        this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __Vfunc_get_backdoor__223__Vfuncout);
                    }(), __Vfunc_get_backdoor__223__Vfuncout));
            __Vtemp_4[0U] = 0x646f6f72U;
            __Vtemp_4[1U] = 0x6261636bU;
            if (__Vtemp_3) {
                __Vtemp_4[2U] = 0x73657220U;
                __Vtemp_4[3U] = 0x00000075U;
            } else {
                __Vtemp_4[2U] = 0x44504920U;
                __Vtemp_4[3U] = 0U;
            }
            unnamedblk456__DOT__path_s = ((0U == VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1245)
                                           ->__PVT__path)
                                           ? ((VlNull{} 
                                               != VL_NULL_CHECK(map_info, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1246)
                                               ->__PVT__frontdoor)
                                               ? "user frontdoor"s
                                               : VL_CONCATN_NNN("map "s, 
                                                                ([&]() {
                                VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1247)
                                              ->__PVT__map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1247)
                                                                 ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__222__Vfuncout);
                            }(), __Vtask_get_full_name__222__Vfuncout)))
                                           : VL_CVT_PACK_STR_NW(4, __Vtemp_4));
            if (VL_LTS_III(32, 1U, VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1251)
                           ->__PVT__value.size())) {
                unnamedblk456__DOT__value_s = "='{"s;
                unnamedblk456__DOT__pre_s = "Burst "s;
                unnamedblk456__DOT__unnamedblk457__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk456__DOT__unnamedblk457__DOT__i, VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1254)
                                  ->__PVT__value.size())) {
                    unnamedblk456__DOT__value_s = VL_CONCATN_NNN(unnamedblk456__DOT__value_s, VL_SFORMATF_N_NX("%0x,",0,
                                                                                64,
                                                                                VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1255)
                                                                                ->__PVT__value.at(unnamedblk456__DOT__unnamedblk457__DOT__i)) );
                    unnamedblk456__DOT__unnamedblk457__DOT__i 
                        = ((IData)(1U) + unnamedblk456__DOT__unnamedblk457__DOT__i);
                }
                unnamedblk456__DOT__value_s = VL_PUTC_N(unnamedblk456__DOT__value_s, 
                                                        (VL_LEN_IN(unnamedblk456__DOT__value_s) 
                                                         - (IData)(1U)), 0x7dU);
                unnamedblk456__DOT__range_s = VL_SFORMATF_N_NX("[%0#:%0#]",0,
                                                               64,
                                                               VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1257)
                                                               ->__PVT__offset,
                                                               64,
                                                               (VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1257)
                                                                ->__PVT__offset 
                                                                + (QData)((IData)(VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1257)
                                                                                ->__PVT__value.size())))) ;
            } else {
                unnamedblk456__DOT__value_s = VL_SFORMATF_N_NX("=%0x",0,
                                                               64,
                                                               VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1260)
                                                               ->__PVT__value.at(0U)) ;
                unnamedblk456__DOT__range_s = VL_SFORMATF_N_NX("[%0#]",0,
                                                               64,
                                                               VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1261)
                                                               ->__PVT__offset) ;
            }
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__224__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__224__severity = 0U;
                            __Vfunc_uvm_report_enabled__224__verbosity = 0x0000012cU;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__225__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__225__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__226__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__226__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__224__verbosity, (IData)(__Vfunc_uvm_report_enabled__224__severity), __Vfunc_uvm_report_enabled__224__id, __Vtask_uvm_report_enabled__227__Vfuncout);
                            __Vfunc_uvm_report_enabled__224__Vfuncout 
                                = __Vtask_uvm_report_enabled__227__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__224__Vfuncout))) {
                __Vtask_uvm_report_info__228__report_enabled_checked = 1U;
                __Vtask_uvm_report_info__228__context_name = ""s;
                __Vtask_uvm_report_info__228__line = 0x000004f1U;
                __Vtask_uvm_report_info__228__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_info__228__verbosity = 0x0000012cU;
                __Vtask_uvm_report_info__228__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(unnamedblk456__DOT__pre_s, "Wrote memory via "s), unnamedblk456__DOT__path_s), ": "s), 
                                                                                ([&]() {
                                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__229__Vfuncout);
                                    }(), __Vfunc_get_full_name__229__Vfuncout)), unnamedblk456__DOT__range_s), unnamedblk456__DOT__value_s));
                __Vtask_uvm_report_info__228__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__230__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__230__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__231__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__231__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__228__id, __Vtask_uvm_report_info__228__message, __Vtask_uvm_report_info__228__verbosity, __Vtask_uvm_report_info__228__filename, __Vtask_uvm_report_info__228__line, __Vtask_uvm_report_info__228__context_name, (IData)(__Vtask_uvm_report_info__228__report_enabled_checked));
            }
        }
        this->__PVT__m_write_in_progress = 0U;
        __Vlabel0: ;
    }
    co_return;}

VlCoroutine Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_read(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_read\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_Xcheck_accessX__234__Vfuncout;
    __Vfunc_Xcheck_accessX__234__Vfuncout = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map_info> __Vfunc_Xcheck_accessX__234__map_info;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_first__236__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_next__238__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> __Vtask_get_root_map__239__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequencer_base> __Vtask_get_sequencer__240__Vfuncout;
    std::string __Vfunc_get_access__245__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_backdoor> __Vfunc_get_backdoor__246__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_first__250__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_next__252__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__253__Vfuncout;
    __Vfunc_uvm_report_enabled__253__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__253__verbosity;
    __Vfunc_uvm_report_enabled__253__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__253__severity;
    __Vfunc_uvm_report_enabled__253__severity = 0;
    std::string __Vfunc_uvm_report_enabled__253__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__254__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__255__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__256__Vfuncout;
    __Vtask_uvm_report_enabled__256__Vfuncout = 0;
    std::string __Vtask_get_full_name__257__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_backdoor> __Vfunc_get_backdoor__258__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__259__Vfuncout;
    __Vfunc_uvm_report_enabled__259__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__259__verbosity;
    __Vfunc_uvm_report_enabled__259__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__259__severity;
    __Vfunc_uvm_report_enabled__259__severity = 0;
    std::string __Vfunc_uvm_report_enabled__259__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__260__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__261__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__262__Vfuncout;
    __Vtask_uvm_report_enabled__262__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__263__id;
    std::string __Vtask_uvm_report_info__263__message;
    IData/*31:0*/ __Vtask_uvm_report_info__263__verbosity;
    __Vtask_uvm_report_info__263__verbosity = 0;
    std::string __Vtask_uvm_report_info__263__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__263__line;
    __Vtask_uvm_report_info__263__line = 0;
    std::string __Vtask_uvm_report_info__263__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__263__report_enabled_checked;
    __Vtask_uvm_report_info__263__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__264__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__265__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__266__Vfuncout;
    CData/*31:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    // Body
    VL_KEEP_THIS;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk458__DOT__cb;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> unnamedblk459__DOT__system_map;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_frontdoor> unnamedblk459__DOT__unnamedblk460__DOT__fd;
    QData/*63:0*/ unnamedblk459__DOT__unnamedblk461__DOT__idx;
    unnamedblk459__DOT__unnamedblk461__DOT__idx = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_backdoor> unnamedblk462__DOT__bkdr;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk463__DOT__cb;
    std::string unnamedblk464__DOT__path_s;
    std::string unnamedblk464__DOT__value_s;
    std::string unnamedblk464__DOT__pre_s;
    std::string unnamedblk464__DOT__range_s;
    IData/*31:0*/ unnamedblk464__DOT__unnamedblk465__DOT__i;
    unnamedblk464__DOT__unnamedblk465__DOT__i = 0;
    std::string __VInside_h7dbce973__0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callback_iter__pi100> cbs;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map_info> map_info;
    {
        cbs = VL_NEW(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callback_iter__pi100, vlSymsp, 
                     VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem>{this});
        this->__PVT__m_fname = VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1280)
            ->__PVT__fname;
        this->__PVT__m_lineno = VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1281)
            ->__PVT__lineno;
        if ((1U & (~ ([&]() {
                            this->__VnoInFunc_Xcheck_accessX(vlProcess, vlSymsp, rw, __Vfunc_Xcheck_accessX__234__map_info, __Vfunc_Xcheck_accessX__234__Vfuncout);
                            map_info = __Vfunc_Xcheck_accessX__234__map_info;
                        }(), (IData)(__Vfunc_Xcheck_accessX__234__Vfuncout))))) {
            goto __Vlabel0;
        }
        this->__PVT__m_read_in_progress = 1U;
        VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1288)->__PVT__status = 0U;
        this->__VnoInFunc_pre_read(vlSymsp, rw);
        VL_NULL_CHECK(cbs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1292)->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__236__Vfuncout);
        unnamedblk458__DOT__cb = __Vtask_first__236__Vfuncout;
        while ((VlNull{} != unnamedblk458__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk458__DOT__cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1293)->__VnoInFunc_pre_read(vlProcess, vlSymsp, rw);
            VL_NULL_CHECK(cbs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1292)->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__238__Vfuncout);
            unnamedblk458__DOT__cb = __Vtask_next__238__Vfuncout;
        }
        if ((0U != VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1295)
             ->__PVT__status)) {
            this->__PVT__m_read_in_progress = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1301)->__PVT__status = 1U;
        if ((0U == VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1304)
             ->__PVT__path)) {
            VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1306)
                          ->__PVT__local_map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1306)->__VnoInFunc_get_root_map(vlSymsp, __Vtask_get_root_map__239__Vfuncout);
            unnamedblk459__DOT__system_map = __Vtask_get_root_map__239__Vfuncout;
            if ((VlNull{} != VL_NULL_CHECK(map_info, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1308)
                 ->__PVT__frontdoor)) {
                unnamedblk459__DOT__unnamedblk460__DOT__fd 
                    = VL_NULL_CHECK(map_info, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1309)
                    ->__PVT__frontdoor;
                VL_NULL_CHECK(unnamedblk459__DOT__unnamedblk460__DOT__fd, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1310)->__PVT__rw_info 
                    = rw;
                if ((VlNull{} == VL_NULL_CHECK(unnamedblk459__DOT__unnamedblk460__DOT__fd, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1311)
                     ->__PVT__sequencer)) {
                    VL_NULL_CHECK(unnamedblk459__DOT__system_map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1312)->__VnoInFunc_get_sequencer(vlSymsp, 1U, __Vtask_get_sequencer__240__Vfuncout);
                    VL_NULL_CHECK(unnamedblk459__DOT__unnamedblk460__DOT__fd, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1312)->__PVT__sequencer 
                        = __Vtask_get_sequencer__240__Vfuncout;
                }
                co_await VL_NULL_CHECK(unnamedblk459__DOT__unnamedblk460__DOT__fd, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1313)->__VnoInFunc_start(vlProcess, vlSymsp, VL_NULL_CHECK(unnamedblk459__DOT__unnamedblk460__DOT__fd, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1313)
                                                                                ->__PVT__sequencer, VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1313)
                                                                                ->__PVT__parent, 0xffffffffU, 1U);
            } else {
                co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1316)
                                       ->__PVT__local_map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1316)->__VnoInFunc_do_read(vlProcess, vlSymsp, rw);
            }
            if ((1U != VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1319)
                 ->__PVT__status)) {
                unnamedblk459__DOT__unnamedblk461__DOT__idx 
                    = VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1320)
                    ->__PVT__offset;
                while ((unnamedblk459__DOT__unnamedblk461__DOT__idx 
                        <= (VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1321)
                            ->__PVT__offset + (QData)((IData)(VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1321)
                                                              ->__PVT__value.size()))))) {
                    this->__VnoInFunc_XsampleX(vlSymsp, 
                                               ((QData)((IData)(
                                                                VL_NULL_CHECK(map_info, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1323)
                                                                ->__PVT__mem_range[0U])) 
                                                * unnamedblk459__DOT__unnamedblk461__DOT__idx), 1U, VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1323)
                                               ->__PVT__map);
                    VL_NULL_CHECK(this->__PVT__m_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1324)->__VnoInFunc_XsampleX(vlSymsp, 
                                                                                (VL_NULL_CHECK(map_info, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1324)
                                                                                ->__PVT__offset 
                                                                                + 
                                                                                ((QData)((IData)(
                                                                                VL_NULL_CHECK(map_info, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1325)
                                                                                ->__PVT__mem_range[0U])) 
                                                                                * unnamedblk459__DOT__unnamedblk461__DOT__idx)), 1U, VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1326)
                                                                                ->__PVT__map);
                    unnamedblk459__DOT__unnamedblk461__DOT__idx 
                        = (1ULL + unnamedblk459__DOT__unnamedblk461__DOT__idx);
                }
            }
        } else if ((("RW"s == ([&]() {
                            this->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1333)
                                                         ->__PVT__map, __Vfunc_get_access__245__Vfuncout);
                            __VInside_h7dbce973__0 
                                = __Vfunc_get_access__245__Vfuncout;
                        }(), __VInside_h7dbce973__0)) 
                    || ("RO"s == __VInside_h7dbce973__0))) {
            this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __Vfunc_get_backdoor__246__Vfuncout);
            unnamedblk462__DOT__bkdr = __Vfunc_get_backdoor__246__Vfuncout;
            if ((VlNull{} != unnamedblk462__DOT__bkdr)) {
                VL_NULL_CHECK(unnamedblk462__DOT__bkdr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1336)->__VnoInFunc_read(vlProcess, vlSymsp, rw);
            } else {
                this->__VnoInFunc_backdoor_read(vlProcess, vlSymsp, rw);
            }
        } else {
            VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1341)->__PVT__status = 1U;
        }
        this->__VnoInFunc_post_read(vlSymsp, rw);
        VL_NULL_CHECK(cbs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1347)->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__250__Vfuncout);
        unnamedblk463__DOT__cb = __Vtask_first__250__Vfuncout;
        while ((VlNull{} != unnamedblk463__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk463__DOT__cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1348)->__VnoInFunc_post_read(vlSymsp, rw);
            VL_NULL_CHECK(cbs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1347)->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__252__Vfuncout);
            unnamedblk463__DOT__cb = __Vtask_next__252__Vfuncout;
        }
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__253__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__253__severity = 0U;
                        __Vfunc_uvm_report_enabled__253__verbosity = 0x0000012cU;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__254__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__254__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__255__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__255__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__253__verbosity, (IData)(__Vfunc_uvm_report_enabled__253__severity), __Vfunc_uvm_report_enabled__253__id, __Vtask_uvm_report_enabled__256__Vfuncout);
                        __Vfunc_uvm_report_enabled__253__Vfuncout 
                            = __Vtask_uvm_report_enabled__256__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__253__Vfuncout))) {
            __Vtemp_3 = (VlNull{} != ([&]() {
                        this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __Vfunc_get_backdoor__258__Vfuncout);
                    }(), __Vfunc_get_backdoor__258__Vfuncout));
            __Vtemp_4[0U] = 0x646f6f72U;
            __Vtemp_4[1U] = 0x6261636bU;
            if (__Vtemp_3) {
                __Vtemp_4[2U] = 0x73657220U;
                __Vtemp_4[3U] = 0x00000075U;
            } else {
                __Vtemp_4[2U] = 0x44504920U;
                __Vtemp_4[3U] = 0U;
            }
            unnamedblk464__DOT__path_s = ((0U == VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1353)
                                           ->__PVT__path)
                                           ? ((VlNull{} 
                                               != VL_NULL_CHECK(map_info, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1354)
                                               ->__PVT__frontdoor)
                                               ? "user frontdoor"s
                                               : VL_CONCATN_NNN("map "s, 
                                                                ([&]() {
                                VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1355)
                                              ->__PVT__map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1355)
                                                                 ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__257__Vfuncout);
                            }(), __Vtask_get_full_name__257__Vfuncout)))
                                           : VL_CVT_PACK_STR_NW(4, __Vtemp_4));
            if (VL_LTS_III(32, 1U, VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1359)
                           ->__PVT__value.size())) {
                unnamedblk464__DOT__value_s = "='{"s;
                unnamedblk464__DOT__pre_s = "Burst "s;
                unnamedblk464__DOT__unnamedblk465__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk464__DOT__unnamedblk465__DOT__i, VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1362)
                                  ->__PVT__value.size())) {
                    unnamedblk464__DOT__value_s = VL_CONCATN_NNN(unnamedblk464__DOT__value_s, VL_SFORMATF_N_NX("%0x,",0,
                                                                                64,
                                                                                VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1363)
                                                                                ->__PVT__value.at(unnamedblk464__DOT__unnamedblk465__DOT__i)) );
                    unnamedblk464__DOT__unnamedblk465__DOT__i 
                        = ((IData)(1U) + unnamedblk464__DOT__unnamedblk465__DOT__i);
                }
                unnamedblk464__DOT__value_s = VL_PUTC_N(unnamedblk464__DOT__value_s, 
                                                        (VL_LEN_IN(unnamedblk464__DOT__value_s) 
                                                         - (IData)(1U)), 0x7dU);
                unnamedblk464__DOT__range_s = VL_SFORMATF_N_NX("[%0#:%0#]",0,
                                                               64,
                                                               VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1365)
                                                               ->__PVT__offset,
                                                               64,
                                                               (VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1365)
                                                                ->__PVT__offset 
                                                                + (QData)((IData)(VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1365)
                                                                                ->__PVT__value.size())))) ;
            } else {
                unnamedblk464__DOT__value_s = VL_SFORMATF_N_NX("=%0x",0,
                                                               64,
                                                               VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1368)
                                                               ->__PVT__value.at(0U)) ;
                unnamedblk464__DOT__range_s = VL_SFORMATF_N_NX("[%0#]",0,
                                                               64,
                                                               VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1369)
                                                               ->__PVT__offset) ;
            }
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__259__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__259__severity = 0U;
                            __Vfunc_uvm_report_enabled__259__verbosity = 0x0000012cU;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__260__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__260__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__261__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__261__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__259__verbosity, (IData)(__Vfunc_uvm_report_enabled__259__severity), __Vfunc_uvm_report_enabled__259__id, __Vtask_uvm_report_enabled__262__Vfuncout);
                            __Vfunc_uvm_report_enabled__259__Vfuncout 
                                = __Vtask_uvm_report_enabled__262__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__259__Vfuncout))) {
                __Vtask_uvm_report_info__263__report_enabled_checked = 1U;
                __Vtask_uvm_report_info__263__context_name = ""s;
                __Vtask_uvm_report_info__263__line = 0x0000055dU;
                __Vtask_uvm_report_info__263__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_info__263__verbosity = 0x0000012cU;
                __Vtask_uvm_report_info__263__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(unnamedblk464__DOT__pre_s, "Read memory via "s), unnamedblk464__DOT__path_s), ": "s), 
                                                                                ([&]() {
                                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__264__Vfuncout);
                                    }(), __Vfunc_get_full_name__264__Vfuncout)), unnamedblk464__DOT__range_s), unnamedblk464__DOT__value_s));
                __Vtask_uvm_report_info__263__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__265__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__265__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__266__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__266__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__263__id, __Vtask_uvm_report_info__263__message, __Vtask_uvm_report_info__263__verbosity, __Vtask_uvm_report_info__263__filename, __Vtask_uvm_report_info__263__line, __Vtask_uvm_report_info__263__context_name, (IData)(__Vtask_uvm_report_info__263__report_enabled_checked));
            }
        }
        this->__PVT__m_read_in_progress = 0U;
        __Vlabel0: ;
    }
    co_return;}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_Xcheck_accessX(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map_info> &map_info, CData/*0:0*/ &Xcheck_accessX__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_Xcheck_accessX\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__268__Vfuncout;
    __Vfunc_uvm_report_enabled__268__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__268__verbosity;
    __Vfunc_uvm_report_enabled__268__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__268__severity;
    __Vfunc_uvm_report_enabled__268__severity = 0;
    std::string __Vfunc_uvm_report_enabled__268__id;
    std::string __Vfunc_get_type_name__269__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__270__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__271__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__272__Vfuncout;
    __Vtask_uvm_report_enabled__272__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__273__id;
    std::string __Vtask_uvm_report_error__273__message;
    IData/*31:0*/ __Vtask_uvm_report_error__273__verbosity;
    __Vtask_uvm_report_error__273__verbosity = 0;
    std::string __Vtask_uvm_report_error__273__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__273__line;
    __Vtask_uvm_report_error__273__line = 0;
    std::string __Vtask_uvm_report_error__273__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__273__report_enabled_checked;
    __Vtask_uvm_report_error__273__report_enabled_checked = 0;
    std::string __Vfunc_get_type_name__274__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__275__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__276__Vfuncout;
    IData/*31:0*/ __Vtask_get_default_door__278__Vfuncout;
    __Vtask_get_default_door__278__Vfuncout = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_backdoor> __Vfunc_get_backdoor__279__Vfuncout;
    CData/*0:0*/ __Vfunc_has_hdl_path__280__Vfuncout;
    __Vfunc_has_hdl_path__280__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__281__Vfuncout;
    __Vfunc_uvm_report_enabled__281__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__281__verbosity;
    __Vfunc_uvm_report_enabled__281__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__281__severity;
    __Vfunc_uvm_report_enabled__281__severity = 0;
    std::string __Vfunc_uvm_report_enabled__281__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__282__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__283__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__284__Vfuncout;
    __Vtask_uvm_report_enabled__284__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__285__id;
    std::string __Vtask_uvm_report_warning__285__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__285__verbosity;
    __Vtask_uvm_report_warning__285__verbosity = 0;
    std::string __Vtask_uvm_report_warning__285__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__285__line;
    __Vtask_uvm_report_warning__285__line = 0;
    std::string __Vtask_uvm_report_warning__285__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__285__report_enabled_checked;
    __Vtask_uvm_report_warning__285__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__286__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__287__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__288__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> __Vfunc_get_default_map__290__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> __Vfunc_get_default_map__291__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> __Vfunc_backdoor__292__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> __Vfunc_get_local_map__293__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__294__Vfuncout;
    __Vfunc_uvm_report_enabled__294__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__294__verbosity;
    __Vfunc_uvm_report_enabled__294__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__294__severity;
    __Vfunc_uvm_report_enabled__294__severity = 0;
    std::string __Vfunc_uvm_report_enabled__294__id;
    std::string __Vfunc_get_type_name__295__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__296__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__297__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__298__Vfuncout;
    __Vtask_uvm_report_enabled__298__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__299__id;
    std::string __Vtask_uvm_report_error__299__message;
    IData/*31:0*/ __Vtask_uvm_report_error__299__verbosity;
    __Vtask_uvm_report_error__299__verbosity = 0;
    std::string __Vtask_uvm_report_error__299__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__299__line;
    __Vtask_uvm_report_error__299__line = 0;
    std::string __Vtask_uvm_report_error__299__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__299__report_enabled_checked;
    __Vtask_uvm_report_error__299__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__300__Vfuncout;
    std::string __Vfunc_get_type_name__301__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__302__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__303__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map_info> __Vtask_get_mem_map_info__305__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__306__Vfuncout;
    __Vfunc_uvm_report_enabled__306__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__306__verbosity;
    __Vfunc_uvm_report_enabled__306__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__306__severity;
    __Vfunc_uvm_report_enabled__306__severity = 0;
    std::string __Vfunc_uvm_report_enabled__306__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__307__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__308__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__309__Vfuncout;
    __Vtask_uvm_report_enabled__309__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__310__id;
    std::string __Vtask_uvm_report_error__310__message;
    IData/*31:0*/ __Vtask_uvm_report_error__310__verbosity;
    __Vtask_uvm_report_error__310__verbosity = 0;
    std::string __Vtask_uvm_report_error__310__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__310__line;
    __Vtask_uvm_report_error__310__line = 0;
    std::string __Vtask_uvm_report_error__310__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__310__report_enabled_checked;
    __Vtask_uvm_report_error__310__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__311__Vfuncout;
    std::string __Vtask_get_full_name__312__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__313__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__314__Vfuncout;
    IData/*31:0*/ __Vfunc_get_n_bits__316__Vfuncout;
    __Vfunc_get_n_bits__316__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bytes__317__Vfuncout;
    __Vtask_get_n_bytes__317__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__318__Vfuncout;
    __Vfunc_uvm_report_enabled__318__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__318__verbosity;
    __Vfunc_uvm_report_enabled__318__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__318__severity;
    __Vfunc_uvm_report_enabled__318__severity = 0;
    std::string __Vfunc_uvm_report_enabled__318__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__319__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__320__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__321__Vfuncout;
    __Vtask_uvm_report_enabled__321__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__322__id;
    std::string __Vtask_uvm_report_error__322__message;
    IData/*31:0*/ __Vtask_uvm_report_error__322__verbosity;
    __Vtask_uvm_report_error__322__verbosity = 0;
    std::string __Vtask_uvm_report_error__322__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__322__line;
    __Vtask_uvm_report_error__322__line = 0;
    std::string __Vtask_uvm_report_error__322__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__322__report_enabled_checked;
    __Vtask_uvm_report_error__322__report_enabled_checked = 0;
    IData/*31:0*/ __Vfunc_get_n_bits__323__Vfuncout;
    __Vfunc_get_n_bits__323__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bytes__324__Vfuncout;
    __Vtask_get_n_bytes__324__Vfuncout = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__325__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__326__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__328__Vfuncout;
    __Vfunc_uvm_report_enabled__328__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__328__verbosity;
    __Vfunc_uvm_report_enabled__328__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__328__severity;
    __Vfunc_uvm_report_enabled__328__severity = 0;
    std::string __Vfunc_uvm_report_enabled__328__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__329__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__330__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__331__Vfuncout;
    __Vtask_uvm_report_enabled__331__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__332__id;
    std::string __Vtask_uvm_report_error__332__message;
    IData/*31:0*/ __Vtask_uvm_report_error__332__verbosity;
    __Vtask_uvm_report_error__332__verbosity = 0;
    std::string __Vtask_uvm_report_error__332__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__332__line;
    __Vtask_uvm_report_error__332__line = 0;
    std::string __Vtask_uvm_report_error__332__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__332__report_enabled_checked;
    __Vtask_uvm_report_error__332__report_enabled_checked = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__333__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__334__Vfuncout;
    // Body
    {
        if ((VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1386)
             ->__PVT__offset >= this->__PVT__m_size)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__268__id 
                                = VL_CVT_PACK_STR_NN(
                                                     ([&]() {
                                        this->__VnoInFunc_get_type_name(vlSymsp, __Vfunc_get_type_name__269__Vfuncout);
                                    }(), __Vfunc_get_type_name__269__Vfuncout));
                            __Vfunc_uvm_report_enabled__268__severity = 2U;
                            __Vfunc_uvm_report_enabled__268__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__270__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__270__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__271__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__271__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__268__verbosity, (IData)(__Vfunc_uvm_report_enabled__268__severity), __Vfunc_uvm_report_enabled__268__id, __Vtask_uvm_report_enabled__272__Vfuncout);
                            __Vfunc_uvm_report_enabled__268__Vfuncout 
                                = __Vtask_uvm_report_enabled__272__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__268__Vfuncout))) {
                __Vtask_uvm_report_error__273__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__273__context_name = ""s;
                __Vtask_uvm_report_error__273__line = 0x0000056dU;
                __Vtask_uvm_report_error__273__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_error__273__verbosity = 0U;
                __Vtask_uvm_report_error__273__message 
                    = VL_SFORMATF_N_NX("Offset 'h%0x exceeds size of memory, 'h%0x",0,
                                       64,VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1389)
                                       ->__PVT__offset,
                                       64,this->__PVT__m_size) ;
                __Vtask_uvm_report_error__273__id = 
                    VL_CVT_PACK_STR_NN(([&]() {
                            this->__VnoInFunc_get_type_name(vlSymsp, __Vfunc_get_type_name__274__Vfuncout);
                        }(), __Vfunc_get_type_name__274__Vfuncout));
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__275__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__275__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__276__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__276__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__273__id, __Vtask_uvm_report_error__273__message, __Vtask_uvm_report_error__273__verbosity, __Vtask_uvm_report_error__273__filename, __Vtask_uvm_report_error__273__line, __Vtask_uvm_report_error__273__context_name, (IData)(__Vtask_uvm_report_error__273__report_enabled_checked));
            }
            VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1390)->__PVT__status = 1U;
            Xcheck_accessX__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if ((3U == VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1394)
             ->__PVT__path)) {
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1395)->__VnoInFunc_get_default_door(vlSymsp, __Vtask_get_default_door__278__Vfuncout);
            VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1395)->__PVT__path 
                = __Vtask_get_default_door__278__Vfuncout;
        }
        if ((1U == VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1397)
             ->__PVT__path)) {
            if (((VlNull{} == ([&]() {
                                this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __Vfunc_get_backdoor__279__Vfuncout);
                            }(), __Vfunc_get_backdoor__279__Vfuncout)) 
                 && (1U & (~ ([&]() {
                                    this->__VnoInFunc_has_hdl_path(vlSymsp, ""s, __Vfunc_has_hdl_path__280__Vfuncout);
                                }(), (IData)(__Vfunc_has_hdl_path__280__Vfuncout)))))) {
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__281__id = "RegModel"s;
                                __Vfunc_uvm_report_enabled__281__severity = 1U;
                                __Vfunc_uvm_report_enabled__281__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__282__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__282__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__283__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__283__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__281__verbosity, (IData)(__Vfunc_uvm_report_enabled__281__severity), __Vfunc_uvm_report_enabled__281__id, __Vtask_uvm_report_enabled__284__Vfuncout);
                                __Vfunc_uvm_report_enabled__281__Vfuncout 
                                    = __Vtask_uvm_report_enabled__284__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__281__Vfuncout))) {
                    __Vtask_uvm_report_warning__285__report_enabled_checked = 1U;
                    __Vtask_uvm_report_warning__285__context_name = ""s;
                    __Vtask_uvm_report_warning__285__line = 0x00000579U;
                    __Vtask_uvm_report_warning__285__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                    __Vtask_uvm_report_warning__285__verbosity = 0U;
                    __Vtask_uvm_report_warning__285__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN("No backdoor access available for memory '"s, 
                                                                           ([&]() {
                                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__286__Vfuncout);
                                    }(), __Vfunc_get_full_name__286__Vfuncout)), "' . Using frontdoor instead."s));
                    __Vtask_uvm_report_warning__285__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__287__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__287__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__288__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__288__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__285__id, __Vtask_uvm_report_warning__285__message, __Vtask_uvm_report_warning__285__verbosity, __Vtask_uvm_report_warning__285__filename, __Vtask_uvm_report_warning__285__line, __Vtask_uvm_report_warning__285__context_name, (IData)(__Vtask_uvm_report_warning__285__report_enabled_checked));
                }
                VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1402)->__PVT__path = 0U;
            } else if ((VlNull{} == VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1404)
                        ->__PVT__map)) {
                VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1406)->__PVT__map 
                    = ((VlNull{} != ([&]() {
                                this->__VnoInFunc_get_default_map(vlProcess, vlSymsp, __Vfunc_get_default_map__290__Vfuncout);
                            }(), __Vfunc_get_default_map__290__Vfuncout))
                        ? ([&]() {
                            this->__VnoInFunc_get_default_map(vlProcess, vlSymsp, __Vfunc_get_default_map__291__Vfuncout);
                        }(), __Vfunc_get_default_map__291__Vfuncout)
                        : ([&]() {
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_map__Vclpkg.__VnoInFunc_backdoor(vlProcess, vlSymsp, __Vfunc_backdoor__292__Vfuncout);
                        }(), __Vfunc_backdoor__292__Vfuncout));
            }
        }
        if ((1U != VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1413)
             ->__PVT__path)) {
            this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1415)
                                            ->__PVT__map, __Vfunc_get_local_map__293__Vfuncout);
            VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1415)->__PVT__local_map 
                = __Vfunc_get_local_map__293__Vfuncout;
            if ((VlNull{} == VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1417)
                 ->__PVT__local_map)) {
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__294__id 
                                    = VL_CVT_PACK_STR_NN(
                                                         ([&]() {
                                            this->__VnoInFunc_get_type_name(vlSymsp, __Vfunc_get_type_name__295__Vfuncout);
                                        }(), __Vfunc_get_type_name__295__Vfuncout));
                                __Vfunc_uvm_report_enabled__294__severity = 2U;
                                __Vfunc_uvm_report_enabled__294__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__296__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__296__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__297__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__297__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__294__verbosity, (IData)(__Vfunc_uvm_report_enabled__294__severity), __Vfunc_uvm_report_enabled__294__id, __Vtask_uvm_report_enabled__298__Vfuncout);
                                __Vfunc_uvm_report_enabled__294__Vfuncout 
                                    = __Vtask_uvm_report_enabled__298__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__294__Vfuncout))) {
                    __Vtask_uvm_report_error__299__report_enabled_checked = 1U;
                    __Vtask_uvm_report_error__299__context_name = ""s;
                    __Vtask_uvm_report_error__299__line = 0x0000058cU;
                    __Vtask_uvm_report_error__299__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                    __Vtask_uvm_report_error__299__verbosity = 0U;
                    __Vtask_uvm_report_error__299__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN("No transactor available to physically access memory from map '"s, 
                                                                           ([&]() {
                                        VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1420)
                                                      ->__PVT__map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1420)
                                                                            ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__300__Vfuncout);
                                    }(), __Vtask_get_full_name__300__Vfuncout)), "'"s));
                    __Vtask_uvm_report_error__299__id 
                        = VL_CVT_PACK_STR_NN(([&]() {
                                this->__VnoInFunc_get_type_name(vlSymsp, __Vfunc_get_type_name__301__Vfuncout);
                            }(), __Vfunc_get_type_name__301__Vfuncout));
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__302__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__302__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__303__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__303__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__299__id, __Vtask_uvm_report_error__299__message, __Vtask_uvm_report_error__299__verbosity, __Vtask_uvm_report_error__299__filename, __Vtask_uvm_report_error__299__line, __Vtask_uvm_report_error__299__context_name, (IData)(__Vtask_uvm_report_error__299__report_enabled_checked));
                }
                VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1421)->__PVT__status = 1U;
                Xcheck_accessX__Vfuncrtn = 0U;
                goto __Vlabel0;
            }
            VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1425)
                          ->__PVT__local_map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1425)->__VnoInFunc_get_mem_map_info(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem>{this}, 1U, __Vtask_get_mem_map_info__305__Vfuncout);
            map_info = __Vtask_get_mem_map_info__305__Vfuncout;
            if ((VlNull{} == VL_NULL_CHECK(map_info, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1427)
                 ->__PVT__frontdoor)) {
                if (VL_NULL_CHECK(map_info, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1429)
                    ->__PVT__unmapped) {
                    if ((0U != ([&]() {
                                    __Vfunc_uvm_report_enabled__306__id = "RegModel"s;
                                    __Vfunc_uvm_report_enabled__306__severity = 2U;
                                    __Vfunc_uvm_report_enabled__306__verbosity = 0U;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__307__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                        = __Vfunc_get__307__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__308__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                        = __Vtask_get_root__308__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__306__verbosity, (IData)(__Vfunc_uvm_report_enabled__306__severity), __Vfunc_uvm_report_enabled__306__id, __Vtask_uvm_report_enabled__309__Vfuncout);
                                    __Vfunc_uvm_report_enabled__306__Vfuncout 
                                        = __Vtask_uvm_report_enabled__309__Vfuncout;
                                }(), __Vfunc_uvm_report_enabled__306__Vfuncout))) {
                        __Vtask_uvm_report_error__310__report_enabled_checked = 1U;
                        __Vtask_uvm_report_error__310__context_name = ""s;
                        __Vtask_uvm_report_error__310__line = 0x00000598U;
                        __Vtask_uvm_report_error__310__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                        __Vtask_uvm_report_error__310__verbosity = 0U;
                        __Vtask_uvm_report_error__310__message 
                            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                                VL_CONCATN_NNN(
                                                                               VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, 
                                                                                ([&]() {
                                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__311__Vfuncout);
                                                }(), __Vfunc_get_full_name__311__Vfuncout)), "' unmapped in map '"s), 
                                                                               ([&]() {
                                            VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1432)
                                                          ->__PVT__map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1432)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__312__Vfuncout);
                                        }(), __Vtask_get_full_name__312__Vfuncout)), "' and does not have a user-defined frontdoor"s));
                        __Vtask_uvm_report_error__310__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__313__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                            = __Vfunc_get__313__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__314__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                            = __Vtask_get_root__314__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__310__id, __Vtask_uvm_report_error__310__message, __Vtask_uvm_report_error__310__verbosity, __Vtask_uvm_report_error__310__filename, __Vtask_uvm_report_error__310__line, __Vtask_uvm_report_error__310__context_name, (IData)(__Vtask_uvm_report_error__310__report_enabled_checked));
                    }
                    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1433)->__PVT__status = 1U;
                    Xcheck_accessX__Vfuncrtn = 0U;
                    goto __Vlabel0;
                }
                if (VL_LTS_III(32, 1U, VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1437)
                               ->__PVT__value.size())) {
                    if ((([&]() {
                                    this->__VnoInFunc_get_n_bits(vlSymsp, __Vfunc_get_n_bits__316__Vfuncout);
                                }(), __Vfunc_get_n_bits__316__Vfuncout) 
                         > VL_SHIFTL_III(32,32,32, 
                                         ([&]() {
                                        VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1438)
                                                      ->__PVT__local_map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1438)
                                          ->__VnoInFunc_get_n_bytes(vlSymsp, 1U, __Vtask_get_n_bytes__317__Vfuncout);
                                    }(), __Vtask_get_n_bytes__317__Vfuncout), 3U))) {
                        if ((0U != ([&]() {
                                        __Vfunc_uvm_report_enabled__318__id = "RegModel"s;
                                        __Vfunc_uvm_report_enabled__318__severity = 2U;
                                        __Vfunc_uvm_report_enabled__318__verbosity = 0U;
                                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__319__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                            = __Vfunc_get__319__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__320__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                            = __Vtask_get_root__320__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__318__verbosity, (IData)(__Vfunc_uvm_report_enabled__318__severity), __Vfunc_uvm_report_enabled__318__id, __Vtask_uvm_report_enabled__321__Vfuncout);
                                        __Vfunc_uvm_report_enabled__318__Vfuncout 
                                            = __Vtask_uvm_report_enabled__321__Vfuncout;
                                    }(), __Vfunc_uvm_report_enabled__318__Vfuncout))) {
                            __Vtask_uvm_report_error__322__report_enabled_checked = 1U;
                            __Vtask_uvm_report_error__322__context_name = ""s;
                            __Vtask_uvm_report_error__322__line = 0x000005a1U;
                            __Vtask_uvm_report_error__322__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                            __Vtask_uvm_report_error__322__verbosity = 0U;
                            __Vtask_uvm_report_error__322__message 
                                = VL_SFORMATF_N_NX("Cannot burst a %0#-bit memory through a narrower data path (%0# bytes)",0,
                                                   32,
                                                   ([&]() {
                                            this->__VnoInFunc_get_n_bits(vlSymsp, __Vfunc_get_n_bits__323__Vfuncout);
                                        }(), __Vfunc_get_n_bits__323__Vfuncout),
                                                   32,
                                                   VL_SHIFTL_III(32,32,32, 
                                                                 ([&]() {
                                                VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1441)
                                                              ->__PVT__local_map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1441)
                                                                  ->__VnoInFunc_get_n_bytes(vlSymsp, 1U, __Vtask_get_n_bytes__324__Vfuncout);
                                            }(), __Vtask_get_n_bytes__324__Vfuncout), 3U)) ;
                            __Vtask_uvm_report_error__322__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__325__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                = __Vfunc_get__325__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__326__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                = __Vtask_get_root__326__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__322__id, __Vtask_uvm_report_error__322__message, __Vtask_uvm_report_error__322__verbosity, __Vtask_uvm_report_error__322__filename, __Vtask_uvm_report_error__322__line, __Vtask_uvm_report_error__322__context_name, (IData)(__Vtask_uvm_report_error__322__report_enabled_checked));
                        }
                        VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1442)->__PVT__status = 1U;
                        Xcheck_accessX__Vfuncrtn = 0U;
                        goto __Vlabel0;
                    }
                    if (((VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1445)
                          ->__PVT__offset + (QData)((IData)(VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1445)
                                                            ->__PVT__value.size()))) 
                         > this->__PVT__m_size)) {
                        if ((0U != ([&]() {
                                        __Vfunc_uvm_report_enabled__328__id = "RegModel"s;
                                        __Vfunc_uvm_report_enabled__328__severity = 2U;
                                        __Vfunc_uvm_report_enabled__328__verbosity = 0U;
                                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__329__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                            = __Vfunc_get__329__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__330__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                            = __Vtask_get_root__330__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__328__verbosity, (IData)(__Vfunc_uvm_report_enabled__328__severity), __Vfunc_uvm_report_enabled__328__id, __Vtask_uvm_report_enabled__331__Vfuncout);
                                        __Vfunc_uvm_report_enabled__328__Vfuncout 
                                            = __Vtask_uvm_report_enabled__331__Vfuncout;
                                    }(), __Vfunc_uvm_report_enabled__328__Vfuncout))) {
                            __Vtask_uvm_report_error__332__report_enabled_checked = 1U;
                            __Vtask_uvm_report_error__332__context_name = ""s;
                            __Vtask_uvm_report_error__332__line = 0x000005a8U;
                            __Vtask_uvm_report_error__332__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                            __Vtask_uvm_report_error__332__verbosity = 0U;
                            __Vtask_uvm_report_error__332__message 
                                = VL_SFORMATF_N_NX("Burst of size 'd%0d starting at offset 'd%0# exceeds size of memory, 'd%0#",0,
                                                   32,
                                                   VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1448)
                                                   ->__PVT__value.size(),
                                                   64,
                                                   VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1448)
                                                   ->__PVT__offset,
                                                   64,
                                                   this->__PVT__m_size) ;
                            __Vtask_uvm_report_error__332__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__333__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                = __Vfunc_get__333__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__334__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                = __Vtask_get_root__334__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__332__id, __Vtask_uvm_report_error__332__message, __Vtask_uvm_report_error__332__verbosity, __Vtask_uvm_report_error__332__filename, __Vtask_uvm_report_error__332__line, __Vtask_uvm_report_error__332__context_name, (IData)(__Vtask_uvm_report_error__332__report_enabled_checked));
                        }
                        Xcheck_accessX__Vfuncrtn = 0U;
                        goto __Vlabel0;
                    }
                }
            }
            if ((VlNull{} == VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1454)
                 ->__PVT__map)) {
                VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1455)->__PVT__map 
                    = VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1455)
                    ->__PVT__local_map;
            }
        }
        Xcheck_accessX__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_poke(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ value, std::string kind, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_poke\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_backdoor> __Vfunc_get_backdoor__336__Vfuncout;
    CData/*0:0*/ __Vfunc_has_hdl_path__337__Vfuncout;
    __Vfunc_has_hdl_path__337__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__338__Vfuncout;
    __Vfunc_uvm_report_enabled__338__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__338__verbosity;
    __Vfunc_uvm_report_enabled__338__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__338__severity;
    __Vfunc_uvm_report_enabled__338__severity = 0;
    std::string __Vfunc_uvm_report_enabled__338__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__339__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__340__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__341__Vfuncout;
    __Vtask_uvm_report_enabled__341__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__342__id;
    std::string __Vtask_uvm_report_error__342__message;
    IData/*31:0*/ __Vtask_uvm_report_error__342__verbosity;
    __Vtask_uvm_report_error__342__verbosity = 0;
    std::string __Vtask_uvm_report_error__342__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__342__line;
    __Vtask_uvm_report_error__342__line = 0;
    std::string __Vtask_uvm_report_error__342__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__342__report_enabled_checked;
    __Vtask_uvm_report_error__342__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__343__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__344__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__345__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> __Vfunc_create__347__Vfuncout;
    std::string __Vfunc_get_full_name__348__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__351__Vfuncout;
    __Vfunc_uvm_report_enabled__351__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__351__verbosity;
    __Vfunc_uvm_report_enabled__351__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__351__severity;
    __Vfunc_uvm_report_enabled__351__severity = 0;
    std::string __Vfunc_uvm_report_enabled__351__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__352__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__353__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__354__Vfuncout;
    __Vtask_uvm_report_enabled__354__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__355__id;
    std::string __Vtask_uvm_report_info__355__message;
    IData/*31:0*/ __Vtask_uvm_report_info__355__verbosity;
    __Vtask_uvm_report_info__355__verbosity = 0;
    std::string __Vtask_uvm_report_info__355__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__355__line;
    __Vtask_uvm_report_info__355__line = 0;
    std::string __Vtask_uvm_report_info__355__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__355__report_enabled_checked;
    __Vtask_uvm_report_info__355__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__356__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__357__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__358__Vfuncout;
    std::string __Vtemp_1;
    // Body
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> rw;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_backdoor> bkdr;
    {
        this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __Vfunc_get_backdoor__336__Vfuncout);
        bkdr = __Vfunc_get_backdoor__336__Vfuncout;
        this->__PVT__m_fname = fname;
        this->__PVT__m_lineno = lineno;
        if (((VlNull{} == bkdr) && (1U & (~ ([&]() {
                                this->__VnoInFunc_has_hdl_path(vlSymsp, kind, __Vfunc_has_hdl_path__337__Vfuncout);
                            }(), (IData)(__Vfunc_has_hdl_path__337__Vfuncout)))))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__338__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__338__severity = 2U;
                            __Vfunc_uvm_report_enabled__338__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__339__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__339__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__340__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__340__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__338__verbosity, (IData)(__Vfunc_uvm_report_enabled__338__severity), __Vfunc_uvm_report_enabled__338__id, __Vtask_uvm_report_enabled__341__Vfuncout);
                            __Vfunc_uvm_report_enabled__338__Vfuncout 
                                = __Vtask_uvm_report_enabled__341__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__338__Vfuncout))) {
                __Vtask_uvm_report_error__342__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__342__context_name = ""s;
                __Vtask_uvm_report_error__342__line = 0x000005ccU;
                __Vtask_uvm_report_error__342__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_error__342__verbosity = 0U;
                __Vtask_uvm_report_error__342__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("No backdoor access available in memory '"s, 
                                                                       ([&]() {
                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__343__Vfuncout);
                                }(), __Vfunc_get_full_name__343__Vfuncout)), "'"s));
                __Vtask_uvm_report_error__342__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__344__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__344__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__345__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__345__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__342__id, __Vtask_uvm_report_error__342__message, __Vtask_uvm_report_error__342__verbosity, __Vtask_uvm_report_error__342__filename, __Vtask_uvm_report_error__342__line, __Vtask_uvm_report_error__342__context_name, (IData)(__Vtask_uvm_report_error__342__report_enabled_checked));
            }
            status = 1U;
            goto __Vlabel0;
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi118__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "mem_poke_item"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__348__Vfuncout);
                    }(), __Vfunc_get_full_name__348__Vfuncout)), __Vfunc_create__347__Vfuncout);
        rw = __Vfunc_create__347__Vfuncout;
        VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1491)->__PVT__element 
            = VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem>{this};
        VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1492)->__PVT__path = 1U;
        VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1493)->__PVT__element_kind = 2U;
        VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1494)->__PVT__kind = 1U;
        VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1495)->__PVT__offset 
            = offset;
        VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1496)->__PVT__value.atWrite(0U) 
            = (value & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_n_bits) 
                        - 1ULL));
        VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1497)->__PVT__bd_kind 
            = kind;
        VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1498)->__PVT__parent 
            = parent;
        VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1499)->__PVT__extension 
            = extension;
        VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1500)->__PVT__fname 
            = fname;
        VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1501)->__PVT__lineno 
            = lineno;
        if ((VlNull{} != bkdr)) {
            VL_NULL_CHECK(bkdr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1504)->__VnoInFunc_write(vlProcess, vlSymsp, rw);
        } else {
            this->__VnoInFunc_backdoor_write(vlProcess, vlSymsp, rw);
        }
        status = VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1508)
            ->__PVT__status;
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__351__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__351__severity = 0U;
                        __Vfunc_uvm_report_enabled__351__verbosity = 0x0000012cU;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__352__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__352__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__353__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__353__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__351__verbosity, (IData)(__Vfunc_uvm_report_enabled__351__severity), __Vfunc_uvm_report_enabled__351__id, __Vtask_uvm_report_enabled__354__Vfuncout);
                        __Vfunc_uvm_report_enabled__351__Vfuncout 
                            = __Vtask_uvm_report_enabled__354__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__351__Vfuncout))) {
            __Vtask_uvm_report_info__355__report_enabled_checked = 1U;
            __Vtask_uvm_report_info__355__context_name = ""s;
            __Vtask_uvm_report_info__355__line = 0x000005e7U;
            __Vtask_uvm_report_info__355__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
            __Vtask_uvm_report_info__355__verbosity = 0x0000012cU;
            __Vtemp_1 = ([&]() {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__356__Vfuncout);
                }(), __Vfunc_get_full_name__356__Vfuncout);
            __Vtask_uvm_report_info__355__message = VL_SFORMATF_N_NX("Poked memory '%@[%0#]' with value 'h%x",0,
                                                                     -1,
                                                                     &(__Vtemp_1),
                                                                     64,
                                                                     offset,
                                                                     64,
                                                                     value) ;
            __Vtask_uvm_report_info__355__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__357__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__357__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__358__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__358__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__355__id, __Vtask_uvm_report_info__355__message, __Vtask_uvm_report_info__355__verbosity, __Vtask_uvm_report_info__355__filename, __Vtask_uvm_report_info__355__line, __Vtask_uvm_report_info__355__context_name, (IData)(__Vtask_uvm_report_info__355__report_enabled_checked));
        }
        __Vlabel0: ;
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_peek(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ &value, std::string kind, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_peek\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_backdoor> __Vfunc_get_backdoor__360__Vfuncout;
    CData/*0:0*/ __Vfunc_has_hdl_path__361__Vfuncout;
    __Vfunc_has_hdl_path__361__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__362__Vfuncout;
    __Vfunc_uvm_report_enabled__362__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__362__verbosity;
    __Vfunc_uvm_report_enabled__362__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__362__severity;
    __Vfunc_uvm_report_enabled__362__severity = 0;
    std::string __Vfunc_uvm_report_enabled__362__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__363__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__364__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__365__Vfuncout;
    __Vtask_uvm_report_enabled__365__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__366__id;
    std::string __Vtask_uvm_report_error__366__message;
    IData/*31:0*/ __Vtask_uvm_report_error__366__verbosity;
    __Vtask_uvm_report_error__366__verbosity = 0;
    std::string __Vtask_uvm_report_error__366__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__366__line;
    __Vtask_uvm_report_error__366__line = 0;
    std::string __Vtask_uvm_report_error__366__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__366__report_enabled_checked;
    __Vtask_uvm_report_error__366__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__367__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__368__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__369__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> __Vfunc_create__371__Vfuncout;
    std::string __Vfunc_get_full_name__372__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__375__Vfuncout;
    __Vfunc_uvm_report_enabled__375__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__375__verbosity;
    __Vfunc_uvm_report_enabled__375__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__375__severity;
    __Vfunc_uvm_report_enabled__375__severity = 0;
    std::string __Vfunc_uvm_report_enabled__375__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__376__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__377__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__378__Vfuncout;
    __Vtask_uvm_report_enabled__378__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__379__id;
    std::string __Vtask_uvm_report_info__379__message;
    IData/*31:0*/ __Vtask_uvm_report_info__379__verbosity;
    __Vtask_uvm_report_info__379__verbosity = 0;
    std::string __Vtask_uvm_report_info__379__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__379__line;
    __Vtask_uvm_report_info__379__line = 0;
    std::string __Vtask_uvm_report_info__379__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__379__report_enabled_checked;
    __Vtask_uvm_report_info__379__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__380__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__381__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__382__Vfuncout;
    std::string __Vtemp_1;
    // Body
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_backdoor> bkdr;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> rw;
    {
        this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __Vfunc_get_backdoor__360__Vfuncout);
        bkdr = __Vfunc_get_backdoor__360__Vfuncout;
        this->__PVT__m_fname = fname;
        this->__PVT__m_lineno = lineno;
        if (((VlNull{} == bkdr) && (1U & (~ ([&]() {
                                this->__VnoInFunc_has_hdl_path(vlSymsp, kind, __Vfunc_has_hdl_path__361__Vfuncout);
                            }(), (IData)(__Vfunc_has_hdl_path__361__Vfuncout)))))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__362__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__362__severity = 2U;
                            __Vfunc_uvm_report_enabled__362__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__363__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__363__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__364__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__364__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__362__verbosity, (IData)(__Vfunc_uvm_report_enabled__362__severity), __Vfunc_uvm_report_enabled__362__id, __Vtask_uvm_report_enabled__365__Vfuncout);
                            __Vfunc_uvm_report_enabled__362__Vfuncout 
                                = __Vtask_uvm_report_enabled__365__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__362__Vfuncout))) {
                __Vtask_uvm_report_error__366__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__366__context_name = ""s;
                __Vtask_uvm_report_error__366__line = 0x000005feU;
                __Vtask_uvm_report_error__366__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_error__366__verbosity = 0U;
                __Vtask_uvm_report_error__366__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("No backdoor access available in memory '"s, 
                                                                       ([&]() {
                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__367__Vfuncout);
                                }(), __Vfunc_get_full_name__367__Vfuncout)), "'"s));
                __Vtask_uvm_report_error__366__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__368__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__368__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__369__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__369__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__366__id, __Vtask_uvm_report_error__366__message, __Vtask_uvm_report_error__366__verbosity, __Vtask_uvm_report_error__366__filename, __Vtask_uvm_report_error__366__line, __Vtask_uvm_report_error__366__context_name, (IData)(__Vtask_uvm_report_error__366__report_enabled_checked));
            }
            status = 1U;
            goto __Vlabel0;
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi118__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "mem_peek_item"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__372__Vfuncout);
                    }(), __Vfunc_get_full_name__372__Vfuncout)), __Vfunc_create__371__Vfuncout);
        rw = __Vfunc_create__371__Vfuncout;
        VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1541)->__PVT__element 
            = VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem>{this};
        VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1542)->__PVT__path = 1U;
        VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1543)->__PVT__element_kind = 2U;
        VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1544)->__PVT__kind = 0U;
        VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1545)->__PVT__offset 
            = offset;
        VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1546)->__PVT__bd_kind 
            = kind;
        VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1547)->__PVT__parent 
            = parent;
        VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1548)->__PVT__extension 
            = extension;
        VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1549)->__PVT__fname 
            = fname;
        VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1550)->__PVT__lineno 
            = lineno;
        if ((VlNull{} != bkdr)) {
            VL_NULL_CHECK(bkdr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1553)->__VnoInFunc_read(vlProcess, vlSymsp, rw);
        } else {
            this->__VnoInFunc_backdoor_read(vlProcess, vlSymsp, rw);
        }
        status = VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1557)
            ->__PVT__status;
        value = VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1558)
            ->__PVT__value.at(0U);
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__375__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__375__severity = 0U;
                        __Vfunc_uvm_report_enabled__375__verbosity = 0x0000012cU;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__376__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__376__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__377__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__377__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__375__verbosity, (IData)(__Vfunc_uvm_report_enabled__375__severity), __Vfunc_uvm_report_enabled__375__id, __Vtask_uvm_report_enabled__378__Vfuncout);
                        __Vfunc_uvm_report_enabled__375__Vfuncout 
                            = __Vtask_uvm_report_enabled__378__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__375__Vfuncout))) {
            __Vtask_uvm_report_info__379__report_enabled_checked = 1U;
            __Vtask_uvm_report_info__379__context_name = ""s;
            __Vtask_uvm_report_info__379__line = 0x00000619U;
            __Vtask_uvm_report_info__379__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
            __Vtask_uvm_report_info__379__verbosity = 0x0000012cU;
            __Vtemp_1 = ([&]() {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__380__Vfuncout);
                }(), __Vfunc_get_full_name__380__Vfuncout);
            __Vtask_uvm_report_info__379__message = VL_SFORMATF_N_NX("Peeked memory '%@[%0#]' has value 'h%x",0,
                                                                     -1,
                                                                     &(__Vtemp_1),
                                                                     64,
                                                                     offset,
                                                                     64,
                                                                     value) ;
            __Vtask_uvm_report_info__379__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__381__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__381__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__382__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__382__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__379__id, __Vtask_uvm_report_info__379__message, __Vtask_uvm_report_info__379__verbosity, __Vtask_uvm_report_info__379__filename, __Vtask_uvm_report_info__379__line, __Vtask_uvm_report_info__379__context_name, (IData)(__Vtask_uvm_report_info__379__report_enabled_checked));
        }
        __Vlabel0: ;
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_set_frontdoor(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_frontdoor> ftdr, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> map, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_set_frontdoor\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> __Vfunc_get_local_map__384__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__385__Vfuncout;
    __Vfunc_uvm_report_enabled__385__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__385__verbosity;
    __Vfunc_uvm_report_enabled__385__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__385__severity;
    __Vfunc_uvm_report_enabled__385__severity = 0;
    std::string __Vfunc_uvm_report_enabled__385__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__386__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__387__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__388__Vfuncout;
    __Vtask_uvm_report_enabled__388__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__389__id;
    std::string __Vtask_uvm_report_error__389__message;
    IData/*31:0*/ __Vtask_uvm_report_error__389__verbosity;
    __Vtask_uvm_report_error__389__verbosity = 0;
    std::string __Vtask_uvm_report_error__389__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__389__line;
    __Vtask_uvm_report_error__389__line = 0;
    std::string __Vtask_uvm_report_error__389__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__389__report_enabled_checked;
    __Vtask_uvm_report_error__389__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__390__Vfuncout;
    std::string __Vtask_get_full_name__391__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__392__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__393__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map_info> __Vtask_get_mem_map_info__395__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map_info> map_info;
    {
        this->__PVT__m_fname = fname;
        this->__PVT__m_lineno = lineno;
        this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, __Vfunc_get_local_map__384__Vfuncout);
        map = __Vfunc_get_local_map__384__Vfuncout;
        if ((VlNull{} == map)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__385__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__385__severity = 2U;
                            __Vfunc_uvm_report_enabled__385__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__386__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__386__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__387__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__387__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__385__verbosity, (IData)(__Vfunc_uvm_report_enabled__385__severity), __Vfunc_uvm_report_enabled__385__id, __Vtask_uvm_report_enabled__388__Vfuncout);
                            __Vfunc_uvm_report_enabled__385__Vfuncout 
                                = __Vtask_uvm_report_enabled__388__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__385__Vfuncout))) {
                __Vtask_uvm_report_error__389__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__389__context_name = ""s;
                __Vtask_uvm_report_error__389__line = 0x0000062fU;
                __Vtask_uvm_report_error__389__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_error__389__verbosity = 0U;
                __Vtask_uvm_report_error__389__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, 
                                                                                ([&]() {
                                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__390__Vfuncout);
                                        }(), __Vfunc_get_full_name__390__Vfuncout)), "' not found in map '"s), 
                                                                       ([&]() {
                                    VL_NULL_CHECK(map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1583)
                                                                        ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__391__Vfuncout);
                                }(), __Vtask_get_full_name__391__Vfuncout)), "'"s));
                __Vtask_uvm_report_error__389__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__392__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__392__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__393__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__393__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__389__id, __Vtask_uvm_report_error__389__message, __Vtask_uvm_report_error__389__verbosity, __Vtask_uvm_report_error__389__filename, __Vtask_uvm_report_error__389__line, __Vtask_uvm_report_error__389__context_name, (IData)(__Vtask_uvm_report_error__389__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1587)->__VnoInFunc_get_mem_map_info(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem>{this}, 1U, __Vtask_get_mem_map_info__395__Vfuncout);
        map_info = __Vtask_get_mem_map_info__395__Vfuncout;
        VL_NULL_CHECK(map_info, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1588)->__PVT__frontdoor 
            = ftdr;
        __Vlabel0: ;
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_frontdoor(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_frontdoor> &get_frontdoor__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_frontdoor\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> __Vfunc_get_local_map__396__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__397__Vfuncout;
    __Vfunc_uvm_report_enabled__397__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__397__verbosity;
    __Vfunc_uvm_report_enabled__397__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__397__severity;
    __Vfunc_uvm_report_enabled__397__severity = 0;
    std::string __Vfunc_uvm_report_enabled__397__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__398__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__399__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__400__Vfuncout;
    __Vtask_uvm_report_enabled__400__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__401__id;
    std::string __Vtask_uvm_report_error__401__message;
    IData/*31:0*/ __Vtask_uvm_report_error__401__verbosity;
    __Vtask_uvm_report_error__401__verbosity = 0;
    std::string __Vtask_uvm_report_error__401__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__401__line;
    __Vtask_uvm_report_error__401__line = 0;
    std::string __Vtask_uvm_report_error__401__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__401__report_enabled_checked;
    __Vtask_uvm_report_error__401__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__402__Vfuncout;
    std::string __Vtask_get_full_name__403__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__404__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__405__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map_info> __Vtask_get_mem_map_info__407__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map_info> map_info;
    {
        this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, __Vfunc_get_local_map__396__Vfuncout);
        map = __Vfunc_get_local_map__396__Vfuncout;
        if ((VlNull{} == map)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__397__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__397__severity = 2U;
                            __Vfunc_uvm_report_enabled__397__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__398__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__398__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__399__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__399__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__397__verbosity, (IData)(__Vfunc_uvm_report_enabled__397__severity), __Vfunc_uvm_report_enabled__397__id, __Vtask_uvm_report_enabled__400__Vfuncout);
                            __Vfunc_uvm_report_enabled__397__Vfuncout 
                                = __Vtask_uvm_report_enabled__400__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__397__Vfuncout))) {
                __Vtask_uvm_report_error__401__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__401__context_name = ""s;
                __Vtask_uvm_report_error__401__line = 0x00000642U;
                __Vtask_uvm_report_error__401__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_error__401__verbosity = 0U;
                __Vtask_uvm_report_error__401__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, 
                                                                                ([&]() {
                                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__402__Vfuncout);
                                        }(), __Vfunc_get_full_name__402__Vfuncout)), "' not found in map '"s), 
                                                                       ([&]() {
                                    VL_NULL_CHECK(map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1602)
                                                                        ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__403__Vfuncout);
                                }(), __Vtask_get_full_name__403__Vfuncout)), "'"s));
                __Vtask_uvm_report_error__401__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__404__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__404__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__405__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__405__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__401__id, __Vtask_uvm_report_error__401__message, __Vtask_uvm_report_error__401__verbosity, __Vtask_uvm_report_error__401__filename, __Vtask_uvm_report_error__401__line, __Vtask_uvm_report_error__401__context_name, (IData)(__Vtask_uvm_report_error__401__report_enabled_checked));
            }
            get_frontdoor__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        VL_NULL_CHECK(map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1606)->__VnoInFunc_get_mem_map_info(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem>{this}, 1U, __Vtask_get_mem_map_info__407__Vfuncout);
        map_info = __Vtask_get_mem_map_info__407__Vfuncout;
        get_frontdoor__Vfuncrtn = VL_NULL_CHECK(map_info, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1607)
            ->__PVT__frontdoor;
        __Vlabel0: ;
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_set_backdoor(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_backdoor> bkdr, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_set_backdoor\n"); );
    // Body
    this->__PVT__m_fname = fname;
    this->__PVT__m_lineno = lineno;
    this->__PVT__m_backdoor = bkdr;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_backdoor(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ inherited, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_backdoor> &get_backdoor__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_backdoor\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_block> __Vfunc_get_parent__408__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_backdoor> __Vtask_get_backdoor__409__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_block> __Vtask_get_parent__410__Vfuncout;
    // Body
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_block> unnamedblk466__DOT__blk;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_backdoor> unnamedblk466__DOT__bkdr;
    if (inherited) {
        this->__VnoInFunc_get_parent(vlSymsp, __Vfunc_get_parent__408__Vfuncout);
        unnamedblk466__DOT__blk = __Vfunc_get_parent__408__Vfuncout;
        {
            while ((VlNull{} != unnamedblk466__DOT__blk)) {
                VL_NULL_CHECK(unnamedblk466__DOT__blk, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1635)->__VnoInFunc_get_backdoor(vlSymsp, 1U, __Vtask_get_backdoor__409__Vfuncout);
                unnamedblk466__DOT__bkdr = __Vtask_get_backdoor__409__Vfuncout;
                if ((VlNull{} != unnamedblk466__DOT__bkdr)) {
                    this->__PVT__m_backdoor = unnamedblk466__DOT__bkdr;
                    goto __Vlabel0;
                }
                VL_NULL_CHECK(unnamedblk466__DOT__blk, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1640)->__VnoInFunc_get_parent(vlSymsp, __Vtask_get_parent__410__Vfuncout);
                unnamedblk466__DOT__blk = __Vtask_get_parent__410__Vfuncout;
            }
            __Vlabel0: ;
        }
    }
    get_backdoor__Vfuncrtn = this->__PVT__m_backdoor;
}

extern const VlWide<32>/*1023:0*/ Vtest_simple_register_uvm__ConstPool__CONST_hd6b7ba52_0;
extern const VlWide<32>/*1023:0*/ Vtest_simple_register_uvm__ConstPool__CONST_h2ae7f32a_0;

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_backdoor_read_func(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> rw, IData/*31:0*/ &backdoor_read_func__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_backdoor_read_func\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__412__Vfuncout;
    __Vfunc_uvm_report_enabled__412__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__412__verbosity;
    __Vfunc_uvm_report_enabled__412__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__412__severity;
    __Vfunc_uvm_report_enabled__412__severity = 0;
    std::string __Vfunc_uvm_report_enabled__412__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__413__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__414__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__415__Vfuncout;
    __Vtask_uvm_report_enabled__415__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__416__id;
    std::string __Vtask_uvm_report_info__416__message;
    IData/*31:0*/ __Vtask_uvm_report_info__416__verbosity;
    __Vtask_uvm_report_info__416__verbosity = 0;
    std::string __Vtask_uvm_report_info__416__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__416__line;
    __Vtask_uvm_report_info__416__line = 0;
    std::string __Vtask_uvm_report_info__416__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__416__report_enabled_checked;
    __Vtask_uvm_report_info__416__report_enabled_checked = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__417__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__418__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_hdl_read__420__Vfuncout;
    __Vfunc_uvm_hdl_read__420__Vfuncout = 0;
    VlWide<32>/*1023:0*/ __Vfunc_uvm_hdl_read__420__value;
    VL_ZERO_W(1024, __Vfunc_uvm_hdl_read__420__value);
    IData/*31:0*/ __Vfunc_uvm_hdl_read__422__Vfuncout;
    __Vfunc_uvm_hdl_read__422__Vfuncout = 0;
    VlWide<32>/*1023:0*/ __Vfunc_uvm_hdl_read__422__value;
    VL_ZERO_W(1024, __Vfunc_uvm_hdl_read__422__value);
    IData/*31:0*/ __Vfunc_uvm_report_enabled__424__Vfuncout;
    __Vfunc_uvm_report_enabled__424__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__424__verbosity;
    __Vfunc_uvm_report_enabled__424__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__424__severity;
    __Vfunc_uvm_report_enabled__424__severity = 0;
    std::string __Vfunc_uvm_report_enabled__424__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__425__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__426__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__427__Vfuncout;
    __Vtask_uvm_report_enabled__427__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__428__id;
    std::string __Vtask_uvm_report_error__428__message;
    IData/*31:0*/ __Vtask_uvm_report_error__428__verbosity;
    __Vtask_uvm_report_error__428__verbosity = 0;
    std::string __Vtask_uvm_report_error__428__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__428__line;
    __Vtask_uvm_report_error__428__line = 0;
    std::string __Vtask_uvm_report_error__428__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__428__report_enabled_checked;
    __Vtask_uvm_report_error__428__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__429__Vfuncout;
    std::string __Vfunc_uvm_hdl_concat2string__430__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_hdl_path_concat> __Vfunc_uvm_hdl_concat2string__430__concat;
    IData/*31:0*/ __Vfunc_uvm_hdl_concat2string__430__unnamedblk272__DOT__i;
    __Vfunc_uvm_hdl_concat2string__430__unnamedblk272__DOT__i = 0;
    Vtest_simple_register_uvm_uvm_hdl_path_slice__struct__0 __Vfunc_uvm_hdl_concat2string__430__unnamedblk272__DOT__unnamedblk273__DOT__slice;
    __Vfunc_uvm_hdl_concat2string__430__unnamedblk272__DOT__unnamedblk273__DOT__slice.__PVT__offset = 0;
    __Vfunc_uvm_hdl_concat2string__430__unnamedblk272__DOT__unnamedblk273__DOT__slice.__PVT__size = 0;
    std::string __Vfunc_uvm_hdl_concat2string__430__image;
    std::string __Vfunc_uvm_hdl_concat2string__431__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_hdl_path_concat> __Vfunc_uvm_hdl_concat2string__431__concat;
    IData/*31:0*/ __Vfunc_uvm_hdl_concat2string__431__unnamedblk272__DOT__i;
    __Vfunc_uvm_hdl_concat2string__431__unnamedblk272__DOT__i = 0;
    Vtest_simple_register_uvm_uvm_hdl_path_slice__struct__0 __Vfunc_uvm_hdl_concat2string__431__unnamedblk272__DOT__unnamedblk273__DOT__slice;
    __Vfunc_uvm_hdl_concat2string__431__unnamedblk272__DOT__unnamedblk273__DOT__slice.__PVT__offset = 0;
    __Vfunc_uvm_hdl_concat2string__431__unnamedblk272__DOT__unnamedblk273__DOT__slice.__PVT__size = 0;
    std::string __Vfunc_uvm_hdl_concat2string__431__image;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__432__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__433__Vfuncout;
    VlWide<32>/*1023:0*/ __Vtemp_1;
    VlWide<32>/*1023:0*/ __Vtemp_2;
    VlWide<32>/*1023:0*/ __Vtemp_3;
    std::string __Vtemp_5;
    std::string __Vtemp_6;
    std::string __Vtemp_7;
    // Body
    IData/*31:0*/ unnamedblk467__DOT__mem_idx;
    unnamedblk467__DOT__mem_idx = 0;
    std::string unnamedblk467__DOT__unnamedblk468__DOT__idx;
    IData/*31:0*/ unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__i;
    unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__i = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__hdl_concat;
    IData/*31:0*/ unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__j;
    unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__j = 0;
    std::string unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__unnamedblk472__DOT__hdl_path;
    QData/*63:0*/ unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__slice;
    unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__slice = 0;
    IData/*31:0*/ unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__k;
    unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__k = 0;
    IData/*31:0*/ unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vincrement1;
    __Vincrement1 = 0;
    VlQueue<VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_hdl_path_concat>> paths;
    VlWide<32>/*1023:0*/ val;
    VL_ZERO_W(1024, val);
    CData/*0:0*/ ok;
    ok = 0;
    {
        ok = 1U;
        this->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, paths, 
                                            VL_CVT_PACK_STR_NN(VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1656)
                                                               ->__PVT__bd_kind), "."s);
        unnamedblk467__DOT__mem_idx = 0U;
        while (VL_LTS_III(32, unnamedblk467__DOT__mem_idx, VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1658)
                          ->__PVT__value.size())) {
            unnamedblk467__DOT__unnamedblk468__DOT__idx 
                = VL_SFORMATF_N_NX("%0d",0,32,((IData)(VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1660)
                                                       ->__PVT__offset) 
                                               + unnamedblk467__DOT__mem_idx)) ;
            unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__i, paths.size())) {
                unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__hdl_concat 
                    = paths.at(unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__i);
                val[0U] = Vtest_simple_register_uvm__ConstPool__CONST_hd6b7ba52_0[0U];
                val[1U] = Vtest_simple_register_uvm__ConstPool__CONST_hd6b7ba52_0[1U];
                val[2U] = Vtest_simple_register_uvm__ConstPool__CONST_hd6b7ba52_0[2U];
                val[3U] = Vtest_simple_register_uvm__ConstPool__CONST_hd6b7ba52_0[3U];
                val[4U] = Vtest_simple_register_uvm__ConstPool__CONST_hd6b7ba52_0[4U];
                val[5U] = Vtest_simple_register_uvm__ConstPool__CONST_hd6b7ba52_0[5U];
                val[6U] = Vtest_simple_register_uvm__ConstPool__CONST_hd6b7ba52_0[6U];
                val[7U] = Vtest_simple_register_uvm__ConstPool__CONST_hd6b7ba52_0[7U];
                val[8U] = Vtest_simple_register_uvm__ConstPool__CONST_hd6b7ba52_0[8U];
                val[9U] = Vtest_simple_register_uvm__ConstPool__CONST_hd6b7ba52_0[9U];
                val[0x0000000aU] = Vtest_simple_register_uvm__ConstPool__CONST_hd6b7ba52_0[0x0000000aU];
                val[0x0000000bU] = Vtest_simple_register_uvm__ConstPool__CONST_hd6b7ba52_0[0x0000000bU];
                val[0x0000000cU] = Vtest_simple_register_uvm__ConstPool__CONST_hd6b7ba52_0[0x0000000cU];
                val[0x0000000dU] = Vtest_simple_register_uvm__ConstPool__CONST_hd6b7ba52_0[0x0000000dU];
                val[0x0000000eU] = Vtest_simple_register_uvm__ConstPool__CONST_hd6b7ba52_0[0x0000000eU];
                val[0x0000000fU] = Vtest_simple_register_uvm__ConstPool__CONST_hd6b7ba52_0[0x0000000fU];
                val[0x00000010U] = Vtest_simple_register_uvm__ConstPool__CONST_hd6b7ba52_0[0x00000010U];
                val[0x00000011U] = Vtest_simple_register_uvm__ConstPool__CONST_hd6b7ba52_0[0x00000011U];
                val[0x00000012U] = Vtest_simple_register_uvm__ConstPool__CONST_hd6b7ba52_0[0x00000012U];
                val[0x00000013U] = Vtest_simple_register_uvm__ConstPool__CONST_hd6b7ba52_0[0x00000013U];
                val[0x00000014U] = Vtest_simple_register_uvm__ConstPool__CONST_hd6b7ba52_0[0x00000014U];
                val[0x00000015U] = Vtest_simple_register_uvm__ConstPool__CONST_hd6b7ba52_0[0x00000015U];
                val[0x00000016U] = Vtest_simple_register_uvm__ConstPool__CONST_hd6b7ba52_0[0x00000016U];
                val[0x00000017U] = Vtest_simple_register_uvm__ConstPool__CONST_hd6b7ba52_0[0x00000017U];
                val[0x00000018U] = Vtest_simple_register_uvm__ConstPool__CONST_hd6b7ba52_0[0x00000018U];
                val[0x00000019U] = Vtest_simple_register_uvm__ConstPool__CONST_hd6b7ba52_0[0x00000019U];
                val[0x0000001aU] = Vtest_simple_register_uvm__ConstPool__CONST_hd6b7ba52_0[0x0000001aU];
                val[0x0000001bU] = Vtest_simple_register_uvm__ConstPool__CONST_hd6b7ba52_0[0x0000001bU];
                val[0x0000001cU] = Vtest_simple_register_uvm__ConstPool__CONST_hd6b7ba52_0[0x0000001cU];
                val[0x0000001dU] = Vtest_simple_register_uvm__ConstPool__CONST_hd6b7ba52_0[0x0000001dU];
                val[0x0000001eU] = Vtest_simple_register_uvm__ConstPool__CONST_hd6b7ba52_0[0x0000001eU];
                val[0x0000001fU] = Vtest_simple_register_uvm__ConstPool__CONST_hd6b7ba52_0[0x0000001fU];
                unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__j = 0U;
                while (VL_LTS_III(32, unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__j, VL_NULL_CHECK(unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__hdl_concat, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1664)
                                  ->__PVT__slices.size())) {
                    {
                        unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__unnamedblk472__DOT__hdl_path 
                            = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(VL_NULL_CHECK(unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__hdl_concat, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1665)
                                                                           ->__PVT__slices.at(unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__j)
                                                                           .__PVT__path, "["s), unnamedblk467__DOT__unnamedblk468__DOT__idx), "]"s);
                        if ((0U != ([&]() {
                                        __Vfunc_uvm_report_enabled__412__id = "RegModel"s;
                                        __Vfunc_uvm_report_enabled__412__severity = 0U;
                                        __Vfunc_uvm_report_enabled__412__verbosity = 0x000001f4U;
                                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__413__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                            = __Vfunc_get__413__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__414__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                            = __Vtask_get_root__414__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__412__verbosity, (IData)(__Vfunc_uvm_report_enabled__412__severity), __Vfunc_uvm_report_enabled__412__id, __Vtask_uvm_report_enabled__415__Vfuncout);
                                        __Vfunc_uvm_report_enabled__412__Vfuncout 
                                            = __Vtask_uvm_report_enabled__415__Vfuncout;
                                    }(), __Vfunc_uvm_report_enabled__412__Vfuncout))) {
                            __Vtask_uvm_report_info__416__report_enabled_checked = 1U;
                            __Vtask_uvm_report_info__416__context_name = ""s;
                            __Vtask_uvm_report_info__416__line = 0x00000683U;
                            __Vtask_uvm_report_info__416__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                            __Vtask_uvm_report_info__416__verbosity = 0x000001f4U;
                            __Vtask_uvm_report_info__416__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN("backdoor_read from "s, unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__unnamedblk472__DOT__hdl_path));
                            __Vtask_uvm_report_info__416__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__417__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                                = __Vfunc_get__417__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__418__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                                = __Vtask_get_root__418__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__416__id, __Vtask_uvm_report_info__416__message, __Vtask_uvm_report_info__416__verbosity, __Vtask_uvm_report_info__416__filename, __Vtask_uvm_report_info__416__line, __Vtask_uvm_report_info__416__context_name, (IData)(__Vtask_uvm_report_info__416__report_enabled_checked));
                        }
                        if (VL_GTS_III(32, 0U, VL_NULL_CHECK(unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__hdl_concat, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1669)
                                       ->__PVT__slices.at(unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__j)
                                       .__PVT__offset)) {
                            ok = ((IData)(ok) & ([&]() {
                                        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "UVM_HDL_READ"s, "uvm_hdl DPI routines are compiled off. Recompile without +define+UVM_HDL_NO_DPI"s, 0U, ""s, 0U, ""s, 0U);
                                        __Vfunc_uvm_hdl_read__420__Vfuncout = 0U;
                                        val[0U] = __Vfunc_uvm_hdl_read__420__value[0U];
                                        val[1U] = __Vfunc_uvm_hdl_read__420__value[1U];
                                        val[2U] = __Vfunc_uvm_hdl_read__420__value[2U];
                                        val[3U] = __Vfunc_uvm_hdl_read__420__value[3U];
                                        val[4U] = __Vfunc_uvm_hdl_read__420__value[4U];
                                        val[5U] = __Vfunc_uvm_hdl_read__420__value[5U];
                                        val[6U] = __Vfunc_uvm_hdl_read__420__value[6U];
                                        val[7U] = __Vfunc_uvm_hdl_read__420__value[7U];
                                        val[8U] = __Vfunc_uvm_hdl_read__420__value[8U];
                                        val[9U] = __Vfunc_uvm_hdl_read__420__value[9U];
                                        val[0x0000000aU] 
                                            = __Vfunc_uvm_hdl_read__420__value[0x0000000aU];
                                        val[0x0000000bU] 
                                            = __Vfunc_uvm_hdl_read__420__value[0x0000000bU];
                                        val[0x0000000cU] 
                                            = __Vfunc_uvm_hdl_read__420__value[0x0000000cU];
                                        val[0x0000000dU] 
                                            = __Vfunc_uvm_hdl_read__420__value[0x0000000dU];
                                        val[0x0000000eU] 
                                            = __Vfunc_uvm_hdl_read__420__value[0x0000000eU];
                                        val[0x0000000fU] 
                                            = __Vfunc_uvm_hdl_read__420__value[0x0000000fU];
                                        val[0x00000010U] 
                                            = __Vfunc_uvm_hdl_read__420__value[0x00000010U];
                                        val[0x00000011U] 
                                            = __Vfunc_uvm_hdl_read__420__value[0x00000011U];
                                        val[0x00000012U] 
                                            = __Vfunc_uvm_hdl_read__420__value[0x00000012U];
                                        val[0x00000013U] 
                                            = __Vfunc_uvm_hdl_read__420__value[0x00000013U];
                                        val[0x00000014U] 
                                            = __Vfunc_uvm_hdl_read__420__value[0x00000014U];
                                        val[0x00000015U] 
                                            = __Vfunc_uvm_hdl_read__420__value[0x00000015U];
                                        val[0x00000016U] 
                                            = __Vfunc_uvm_hdl_read__420__value[0x00000016U];
                                        val[0x00000017U] 
                                            = __Vfunc_uvm_hdl_read__420__value[0x00000017U];
                                        val[0x00000018U] 
                                            = __Vfunc_uvm_hdl_read__420__value[0x00000018U];
                                        val[0x00000019U] 
                                            = __Vfunc_uvm_hdl_read__420__value[0x00000019U];
                                        val[0x0000001aU] 
                                            = __Vfunc_uvm_hdl_read__420__value[0x0000001aU];
                                        val[0x0000001bU] 
                                            = __Vfunc_uvm_hdl_read__420__value[0x0000001bU];
                                        val[0x0000001cU] 
                                            = __Vfunc_uvm_hdl_read__420__value[0x0000001cU];
                                        val[0x0000001dU] 
                                            = __Vfunc_uvm_hdl_read__420__value[0x0000001dU];
                                        val[0x0000001eU] 
                                            = __Vfunc_uvm_hdl_read__420__value[0x0000001eU];
                                        val[0x0000001fU] 
                                            = __Vfunc_uvm_hdl_read__420__value[0x0000001fU];
                                    }(), __Vfunc_uvm_hdl_read__420__Vfuncout));
                            goto __Vlabel1;
                        }
                        unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__k 
                            = VL_NULL_CHECK(unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__hdl_concat, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1675)
                            ->__PVT__slices.at(unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__j)
                            .__PVT__offset;
                        ok = ((IData)(ok) & ([&]() {
                                    vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "UVM_HDL_READ"s, "uvm_hdl DPI routines are compiled off. Recompile without +define+UVM_HDL_NO_DPI"s, 0U, ""s, 0U, ""s, 0U);
                                    __Vfunc_uvm_hdl_read__422__Vfuncout = 0U;
                                    unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__slice 
                                        = (((QData)((IData)(
                                                            __Vfunc_uvm_hdl_read__422__value[1U])) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(
                                                             __Vfunc_uvm_hdl_read__422__value[0U])));
                                }(), __Vfunc_uvm_hdl_read__422__Vfuncout));
                        unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__unnamedblk1_1__DOT____Vrepeat0 
                            = VL_NULL_CHECK(unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__hdl_concat, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1677)
                            ->__PVT__slices.at(unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__j)
                            .__PVT__size;
                        while (VL_LTS_III(32, 0U, unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
                            __Vincrement1 = unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__k;
                            unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__k 
                                = ((IData)(1U) + unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__k);
                            val[(0x0000001fU & (__Vincrement1 
                                                >> 5U))] 
                                = (((~ ((IData)(1U) 
                                        << (0x0000001fU 
                                            & __Vincrement1))) 
                                    & val[(0x0000001fU 
                                           & (__Vincrement1 
                                              >> 5U))]) 
                                   | ((1U & (IData)(unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__slice)) 
                                      << (0x0000001fU 
                                          & __Vincrement1)));
                            unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__slice 
                                = VL_SHIFTR_QQI(64,64,32, unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__slice, 1U);
                            unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__unnamedblk1_1__DOT____Vrepeat0 
                                = (unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__unnamedblk1_1__DOT____Vrepeat0 
                                   - (IData)(1U));
                        }
                        __Vlabel1: ;
                    }
                    unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__j 
                        = ((IData)(1U) + unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk471__DOT__j);
                }
                VL_SHIFTL_WWI(1024,1024,32, __Vtemp_2, Vtest_simple_register_uvm__ConstPool__CONST_h2ae7f32a_0, this->__PVT__m_n_bits);
                VL_SUB_W(32, __Vtemp_3, __Vtemp_2, Vtest_simple_register_uvm__ConstPool__CONST_h2ae7f32a_0);
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
                if ((0U == unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__i)) {
                    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1687)->__PVT__value.atWrite(unnamedblk467__DOT__mem_idx) 
                        = (((QData)((IData)(val[1U])) 
                            << 0x00000020U) | (QData)((IData)(
                                                              val[0U])));
                }
                if ((0U != ((((((((((((((((((((((((
                                                   ((((((((val[0U] 
                                                           ^ (IData)(VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1689)
                                                                     ->__PVT__value.at(unnamedblk467__DOT__mem_idx))) 
                                                          | (val[1U] 
                                                             ^ (IData)(
                                                                       (VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1689)
                                                                        ->__PVT__value.at(unnamedblk467__DOT__mem_idx) 
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
                                    __Vfunc_uvm_report_enabled__424__id = "RegModel"s;
                                    __Vfunc_uvm_report_enabled__424__severity = 2U;
                                    __Vfunc_uvm_report_enabled__424__verbosity = 0U;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__425__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                        = __Vfunc_get__425__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__426__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                        = __Vtask_get_root__426__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__424__verbosity, (IData)(__Vfunc_uvm_report_enabled__424__severity), __Vfunc_uvm_report_enabled__424__id, __Vtask_uvm_report_enabled__427__Vfuncout);
                                    __Vfunc_uvm_report_enabled__424__Vfuncout 
                                        = __Vtask_uvm_report_enabled__427__Vfuncout;
                                }(), __Vfunc_uvm_report_enabled__424__Vfuncout))) {
                        __Vtask_uvm_report_error__428__report_enabled_checked = 1U;
                        __Vtask_uvm_report_error__428__context_name = ""s;
                        __Vtask_uvm_report_error__428__line = 0x0000069cU;
                        __Vtask_uvm_report_error__428__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                        __Vtask_uvm_report_error__428__verbosity = 0U;
                        __Vtemp_5 = ([&]() {
                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__429__Vfuncout);
                            }(), __Vfunc_get_full_name__429__Vfuncout);
                        __Vtemp_6 = ([&]() {
                                __Vfunc_uvm_hdl_concat2string__430__concat 
                                    = paths.at(0U);
                                __Vfunc_uvm_hdl_concat2string__430__unnamedblk272__DOT__i = 0;
                                __Vfunc_uvm_hdl_concat2string__430__unnamedblk272__DOT__unnamedblk273__DOT__slice.__PVT__path.clear();
                                __Vfunc_uvm_hdl_concat2string__430__unnamedblk272__DOT__unnamedblk273__DOT__slice.__PVT__offset = 0;
                                __Vfunc_uvm_hdl_concat2string__430__unnamedblk272__DOT__unnamedblk273__DOT__slice.__PVT__size = 0;
                                __Vfunc_uvm_hdl_concat2string__430__image.clear();
                                {
                                    __Vfunc_uvm_hdl_concat2string__430__image = "{"s;
                                    if ((((1U == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__430__concat, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 399)
                                           ->__PVT__slices.size()) 
                                          && (0xffffffffU 
                                              == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__430__concat, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 400)
                                              ->__PVT__slices.at(0U)
                                              .__PVT__offset)) 
                                         && (0xffffffffU 
                                             == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__430__concat, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 401)
                                             ->__PVT__slices.at(0U)
                                             .__PVT__size))) {
                                        __Vfunc_uvm_hdl_concat2string__430__Vfuncout 
                                            = VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__430__concat, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 402)
                                            ->__PVT__slices.at(0U)
                                            .__PVT__path;
                                        goto __Vlabel2;
                                    }
                                    __Vfunc_uvm_hdl_concat2string__430__unnamedblk272__DOT__i = 0U;
                                    while (VL_LTS_III(32, __Vfunc_uvm_hdl_concat2string__430__unnamedblk272__DOT__i, VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__430__concat, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 404)
                                                      ->__PVT__slices.size())) {
                                        __Vfunc_uvm_hdl_concat2string__430__unnamedblk272__DOT__unnamedblk273__DOT__slice 
                                            = VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__430__concat, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 405)
                                            ->__PVT__slices.at(__Vfunc_uvm_hdl_concat2string__430__unnamedblk272__DOT__i);
                                        __Vfunc_uvm_hdl_concat2string__430__image 
                                            = VL_CONCATN_NNN(
                                                             VL_CONCATN_NNN(__Vfunc_uvm_hdl_concat2string__430__image, 
                                                                            VL_CVT_PACK_STR_NI(
                                                                                ((0U 
                                                                                == __Vfunc_uvm_hdl_concat2string__430__unnamedblk272__DOT__i)
                                                                                 ? 0U
                                                                                 : 0x2c20U))), __Vfunc_uvm_hdl_concat2string__430__unnamedblk272__DOT__unnamedblk273__DOT__slice
                                                             .__PVT__path);
                                        if (VL_LTES_III(32, 0U, __Vfunc_uvm_hdl_concat2string__430__unnamedblk272__DOT__unnamedblk273__DOT__slice
                                                        .__PVT__offset)) {
                                            __Vfunc_uvm_hdl_concat2string__430__image 
                                                = VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(__Vfunc_uvm_hdl_concat2string__430__image, "@"s), VL_SFORMATF_N_NX("[%0d +: %0d]",0,
                                                                                32,
                                                                                __Vfunc_uvm_hdl_concat2string__430__unnamedblk272__DOT__unnamedblk273__DOT__slice
                                                                                .__PVT__offset,
                                                                                32,
                                                                                __Vfunc_uvm_hdl_concat2string__430__unnamedblk272__DOT__unnamedblk273__DOT__slice
                                                                                .__PVT__size) );
                                        }
                                        __Vfunc_uvm_hdl_concat2string__430__unnamedblk272__DOT__i 
                                            = ((IData)(1U) 
                                               + __Vfunc_uvm_hdl_concat2string__430__unnamedblk272__DOT__i);
                                    }
                                    __Vfunc_uvm_hdl_concat2string__430__image 
                                        = VL_CONCATN_NNN(__Vfunc_uvm_hdl_concat2string__430__image, "}"s);
                                    __Vfunc_uvm_hdl_concat2string__430__Vfuncout 
                                        = __Vfunc_uvm_hdl_concat2string__430__image;
                                    __Vlabel2: ;
                                }
                            }(), __Vfunc_uvm_hdl_concat2string__430__Vfuncout);
                        __Vtemp_7 = ([&]() {
                                __Vfunc_uvm_hdl_concat2string__431__concat 
                                    = paths.at(unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__i);
                                __Vfunc_uvm_hdl_concat2string__431__unnamedblk272__DOT__i = 0;
                                __Vfunc_uvm_hdl_concat2string__431__unnamedblk272__DOT__unnamedblk273__DOT__slice.__PVT__path.clear();
                                __Vfunc_uvm_hdl_concat2string__431__unnamedblk272__DOT__unnamedblk273__DOT__slice.__PVT__offset = 0;
                                __Vfunc_uvm_hdl_concat2string__431__unnamedblk272__DOT__unnamedblk273__DOT__slice.__PVT__size = 0;
                                __Vfunc_uvm_hdl_concat2string__431__image.clear();
                                {
                                    __Vfunc_uvm_hdl_concat2string__431__image = "{"s;
                                    if ((((1U == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__431__concat, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 399)
                                           ->__PVT__slices.size()) 
                                          && (0xffffffffU 
                                              == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__431__concat, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 400)
                                              ->__PVT__slices.at(0U)
                                              .__PVT__offset)) 
                                         && (0xffffffffU 
                                             == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__431__concat, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 401)
                                             ->__PVT__slices.at(0U)
                                             .__PVT__size))) {
                                        __Vfunc_uvm_hdl_concat2string__431__Vfuncout 
                                            = VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__431__concat, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 402)
                                            ->__PVT__slices.at(0U)
                                            .__PVT__path;
                                        goto __Vlabel3;
                                    }
                                    __Vfunc_uvm_hdl_concat2string__431__unnamedblk272__DOT__i = 0U;
                                    while (VL_LTS_III(32, __Vfunc_uvm_hdl_concat2string__431__unnamedblk272__DOT__i, VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__431__concat, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 404)
                                                      ->__PVT__slices.size())) {
                                        __Vfunc_uvm_hdl_concat2string__431__unnamedblk272__DOT__unnamedblk273__DOT__slice 
                                            = VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__431__concat, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_model.svh", 405)
                                            ->__PVT__slices.at(__Vfunc_uvm_hdl_concat2string__431__unnamedblk272__DOT__i);
                                        __Vfunc_uvm_hdl_concat2string__431__image 
                                            = VL_CONCATN_NNN(
                                                             VL_CONCATN_NNN(__Vfunc_uvm_hdl_concat2string__431__image, 
                                                                            VL_CVT_PACK_STR_NI(
                                                                                ((0U 
                                                                                == __Vfunc_uvm_hdl_concat2string__431__unnamedblk272__DOT__i)
                                                                                 ? 0U
                                                                                 : 0x2c20U))), __Vfunc_uvm_hdl_concat2string__431__unnamedblk272__DOT__unnamedblk273__DOT__slice
                                                             .__PVT__path);
                                        if (VL_LTES_III(32, 0U, __Vfunc_uvm_hdl_concat2string__431__unnamedblk272__DOT__unnamedblk273__DOT__slice
                                                        .__PVT__offset)) {
                                            __Vfunc_uvm_hdl_concat2string__431__image 
                                                = VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(__Vfunc_uvm_hdl_concat2string__431__image, "@"s), VL_SFORMATF_N_NX("[%0d +: %0d]",0,
                                                                                32,
                                                                                __Vfunc_uvm_hdl_concat2string__431__unnamedblk272__DOT__unnamedblk273__DOT__slice
                                                                                .__PVT__offset,
                                                                                32,
                                                                                __Vfunc_uvm_hdl_concat2string__431__unnamedblk272__DOT__unnamedblk273__DOT__slice
                                                                                .__PVT__size) );
                                        }
                                        __Vfunc_uvm_hdl_concat2string__431__unnamedblk272__DOT__i 
                                            = ((IData)(1U) 
                                               + __Vfunc_uvm_hdl_concat2string__431__unnamedblk272__DOT__i);
                                    }
                                    __Vfunc_uvm_hdl_concat2string__431__image 
                                        = VL_CONCATN_NNN(__Vfunc_uvm_hdl_concat2string__431__image, "}"s);
                                    __Vfunc_uvm_hdl_concat2string__431__Vfuncout 
                                        = __Vfunc_uvm_hdl_concat2string__431__image;
                                    __Vlabel3: ;
                                }
                            }(), __Vfunc_uvm_hdl_concat2string__431__Vfuncout);
                        __Vtask_uvm_report_error__428__message 
                            = VL_SFORMATF_N_NX("Backdoor read of register %@ with multiple HDL copies: values are not the same: %0x at path '%@', and %0x at path '%@'. Returning first value.",0,
                                               -1,&(__Vtemp_5),
                                               64,VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1692)
                                               ->__PVT__value.at(unnamedblk467__DOT__mem_idx),
                                               -1,&(__Vtemp_6),
                                               1024,
                                               val.data(),
                                               -1,&(__Vtemp_7)) ;
                        __Vtask_uvm_report_error__428__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__432__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                            = __Vfunc_get__432__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__433__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                            = __Vtask_get_root__433__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__428__id, __Vtask_uvm_report_error__428__message, __Vtask_uvm_report_error__428__verbosity, __Vtask_uvm_report_error__428__filename, __Vtask_uvm_report_error__428__line, __Vtask_uvm_report_error__428__context_name, (IData)(__Vtask_uvm_report_error__428__report_enabled_checked));
                    }
                    backdoor_read_func__Vfuncrtn = 1U;
                    goto __Vlabel0;
                }
                unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__i 
                    = ((IData)(1U) + unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__i);
            }
            unnamedblk467__DOT__mem_idx = ((IData)(1U) 
                                           + unnamedblk467__DOT__mem_idx);
        }
        VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1698)->__PVT__status 
            = ((IData)(ok) ? 0U : 1U);
        backdoor_read_func__Vfuncrtn = VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1700)
            ->__PVT__status;
        __Vlabel0: ;
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_backdoor_read(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_backdoor_read\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_backdoor_read_func__435__Vfuncout;
    __Vfunc_backdoor_read_func__435__Vfuncout = 0;
    // Body
    this->__VnoInFunc_backdoor_read_func(vlProcess, vlSymsp, rw, __Vfunc_backdoor_read_func__435__Vfuncout);
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1707)->__PVT__status 
        = __Vfunc_backdoor_read_func__435__Vfuncout;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_backdoor_write(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_backdoor_write\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__437__Vfuncout;
    __Vfunc_uvm_report_enabled__437__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__437__verbosity;
    __Vfunc_uvm_report_enabled__437__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__437__severity;
    __Vfunc_uvm_report_enabled__437__severity = 0;
    std::string __Vfunc_uvm_report_enabled__437__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__438__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__439__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__440__Vfuncout;
    __Vtask_uvm_report_enabled__440__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__441__id;
    std::string __Vtask_uvm_report_info__441__message;
    IData/*31:0*/ __Vtask_uvm_report_info__441__verbosity;
    __Vtask_uvm_report_info__441__verbosity = 0;
    std::string __Vtask_uvm_report_info__441__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__441__line;
    __Vtask_uvm_report_info__441__line = 0;
    std::string __Vtask_uvm_report_info__441__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__441__report_enabled_checked;
    __Vtask_uvm_report_info__441__report_enabled_checked = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__442__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__443__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_hdl_deposit__445__Vfuncout;
    __Vfunc_uvm_hdl_deposit__445__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_hdl_deposit__447__Vfuncout;
    __Vfunc_uvm_hdl_deposit__447__Vfuncout = 0;
    std::string __Vtemp_1;
    // Body
    IData/*31:0*/ unnamedblk474__DOT__mem_idx;
    unnamedblk474__DOT__mem_idx = 0;
    std::string unnamedblk474__DOT__unnamedblk475__DOT__idx;
    IData/*31:0*/ unnamedblk474__DOT__unnamedblk475__DOT__unnamedblk476__DOT__i;
    unnamedblk474__DOT__unnamedblk475__DOT__unnamedblk476__DOT__i = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk474__DOT__unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__hdl_concat;
    IData/*31:0*/ unnamedblk474__DOT__unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__j;
    unnamedblk474__DOT__unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__j = 0;
    QData/*63:0*/ unnamedblk474__DOT__unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__unnamedblk479__DOT__slice;
    unnamedblk474__DOT__unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__unnamedblk479__DOT__slice = 0;
    VlQueue<VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_hdl_path_concat>> paths;
    CData/*0:0*/ ok;
    ok = 0;
    ok = 1U;
    this->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, paths, 
                                        VL_CVT_PACK_STR_NN(VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1719)
                                                           ->__PVT__bd_kind), "."s);
    unnamedblk474__DOT__mem_idx = 0U;
    while (VL_LTS_III(32, unnamedblk474__DOT__mem_idx, VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1721)
                      ->__PVT__value.size())) {
        unnamedblk474__DOT__unnamedblk475__DOT__idx 
            = VL_SFORMATF_N_NX("%0d",0,32,((IData)(VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1723)
                                                   ->__PVT__offset) 
                                           + unnamedblk474__DOT__mem_idx)) ;
        unnamedblk474__DOT__unnamedblk475__DOT__unnamedblk476__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk474__DOT__unnamedblk475__DOT__unnamedblk476__DOT__i, paths.size())) {
            unnamedblk474__DOT__unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__hdl_concat 
                = paths.at(unnamedblk474__DOT__unnamedblk475__DOT__unnamedblk476__DOT__i);
            unnamedblk474__DOT__unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__j = 0U;
            while (VL_LTS_III(32, unnamedblk474__DOT__unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__j, VL_NULL_CHECK(unnamedblk474__DOT__unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__hdl_concat, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1726)
                              ->__PVT__slices.size())) {
                {
                    if ((0U != ([&]() {
                                    __Vfunc_uvm_report_enabled__437__id = "RegModel"s;
                                    __Vfunc_uvm_report_enabled__437__severity = 0U;
                                    __Vfunc_uvm_report_enabled__437__verbosity = 0x000001f4U;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__438__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                        = __Vfunc_get__438__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__439__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                        = __Vtask_get_root__439__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__437__verbosity, (IData)(__Vfunc_uvm_report_enabled__437__severity), __Vfunc_uvm_report_enabled__437__id, __Vtask_uvm_report_enabled__440__Vfuncout);
                                    __Vfunc_uvm_report_enabled__437__Vfuncout 
                                        = __Vtask_uvm_report_enabled__440__Vfuncout;
                                }(), __Vfunc_uvm_report_enabled__437__Vfuncout))) {
                        __Vtask_uvm_report_info__441__report_enabled_checked = 1U;
                        __Vtask_uvm_report_info__441__context_name = ""s;
                        __Vtask_uvm_report_info__441__line = 0x000006bfU;
                        __Vtask_uvm_report_info__441__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                        __Vtask_uvm_report_info__441__verbosity = 0x000001f4U;
                        __Vtemp_1 = VL_NULL_CHECK(unnamedblk474__DOT__unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__hdl_concat, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1727)
                            ->__PVT__slices.at(unnamedblk474__DOT__unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__j)
                            .__PVT__path;
                        __Vtask_uvm_report_info__441__message 
                            = VL_SFORMATF_N_NX("backdoor_write to %@ ",0,
                                               -1,&(__Vtemp_1)) ;
                        __Vtask_uvm_report_info__441__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__442__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                            = __Vfunc_get__442__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__443__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                            = __Vtask_get_root__443__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__441__id, __Vtask_uvm_report_info__441__message, __Vtask_uvm_report_info__441__verbosity, __Vtask_uvm_report_info__441__filename, __Vtask_uvm_report_info__441__line, __Vtask_uvm_report_info__441__context_name, (IData)(__Vtask_uvm_report_info__441__report_enabled_checked));
                    }
                    if (VL_GTS_III(32, 0U, VL_NULL_CHECK(unnamedblk474__DOT__unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__hdl_concat, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1729)
                                   ->__PVT__slices.at(unnamedblk474__DOT__unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__j)
                                   .__PVT__offset)) {
                        ok = ((IData)(ok) & ([&]() {
                                    vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "UVM_HDL_DEPOSIT"s, "uvm_hdl DPI routines are compiled off. Recompile without +define+UVM_HDL_NO_DPI"s, 0U, ""s, 0U, ""s, 0U);
                                    __Vfunc_uvm_hdl_deposit__445__Vfuncout = 0U;
                                }(), __Vfunc_uvm_hdl_deposit__445__Vfuncout));
                        goto __Vlabel0;
                    }
                    unnamedblk474__DOT__unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__unnamedblk479__DOT__slice 
                        = VL_SHIFTR_QQI(64,64,32, VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1735)
                                        ->__PVT__value.at(unnamedblk474__DOT__mem_idx), VL_NULL_CHECK(unnamedblk474__DOT__unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__hdl_concat, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1735)
                                        ->__PVT__slices.at(unnamedblk474__DOT__unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__j)
                                        .__PVT__offset);
                    unnamedblk474__DOT__unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__unnamedblk479__DOT__slice 
                        = (unnamedblk474__DOT__unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__unnamedblk479__DOT__slice 
                           & (VL_SHIFTL_QQI(64,64,32, 1ULL, VL_NULL_CHECK(unnamedblk474__DOT__unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__hdl_concat, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1736)
                                            ->__PVT__slices.at(unnamedblk474__DOT__unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__j)
                                            .__PVT__size) 
                              - 1ULL));
                    ok = ((IData)(ok) & ([&]() {
                                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "UVM_HDL_DEPOSIT"s, "uvm_hdl DPI routines are compiled off. Recompile without +define+UVM_HDL_NO_DPI"s, 0U, ""s, 0U, ""s, 0U);
                                __Vfunc_uvm_hdl_deposit__447__Vfuncout = 0U;
                            }(), __Vfunc_uvm_hdl_deposit__447__Vfuncout));
                    __Vlabel0: ;
                }
                unnamedblk474__DOT__unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__j 
                    = ((IData)(1U) + unnamedblk474__DOT__unnamedblk475__DOT__unnamedblk476__DOT__unnamedblk477__DOT__unnamedblk478__DOT__j);
            }
            unnamedblk474__DOT__unnamedblk475__DOT__unnamedblk476__DOT__i 
                = ((IData)(1U) + unnamedblk474__DOT__unnamedblk475__DOT__unnamedblk476__DOT__i);
        }
        unnamedblk474__DOT__mem_idx = ((IData)(1U) 
                                       + unnamedblk474__DOT__mem_idx);
    }
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1742)->__PVT__status 
        = ((IData)(ok) ? 0U : 1U);
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_clear_hdl_path(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_clear_hdl_path\n"); );
    // Locals
    std::string __Vtask_get_default_hdl_path__450__Vfuncout;
    IData/*31:0*/ __Vtask_exists__451__Vfuncout;
    __Vtask_exists__451__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__452__Vfuncout;
    __Vfunc_uvm_report_enabled__452__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__452__verbosity;
    __Vfunc_uvm_report_enabled__452__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__452__severity;
    __Vfunc_uvm_report_enabled__452__severity = 0;
    std::string __Vfunc_uvm_report_enabled__452__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__453__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__454__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__455__Vfuncout;
    __Vtask_uvm_report_enabled__455__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__456__id;
    std::string __Vtask_uvm_report_warning__456__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__456__verbosity;
    __Vtask_uvm_report_warning__456__verbosity = 0;
    std::string __Vtask_uvm_report_warning__456__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__456__line;
    __Vtask_uvm_report_warning__456__line = 0;
    std::string __Vtask_uvm_report_warning__456__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__456__report_enabled_checked;
    __Vtask_uvm_report_warning__456__report_enabled_checked = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__457__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__458__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    {
        if (("ALL"s == kind)) {
            this->__PVT__m_hdl_paths_pool = VL_NEW(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_string_pool__Tz208, vlProcess, vlSymsp, "hdl_paths"s);
            goto __Vlabel0;
        }
        if ((""s == kind)) {
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1757)->__VnoInFunc_get_default_hdl_path(vlSymsp, __Vtask_get_default_hdl_path__450__Vfuncout);
            kind = __Vtask_get_default_hdl_path__450__Vfuncout;
        }
        if ((1U & (~ (0U != ([&]() {
                                VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1759)
                             ->__VnoInFunc_exists(vlSymsp, kind, __Vtask_exists__451__Vfuncout);
                            }(), __Vtask_exists__451__Vfuncout))))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__452__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__452__severity = 1U;
                            __Vfunc_uvm_report_enabled__452__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__453__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__453__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__454__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__454__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__452__verbosity, (IData)(__Vfunc_uvm_report_enabled__452__severity), __Vfunc_uvm_report_enabled__452__id, __Vtask_uvm_report_enabled__455__Vfuncout);
                            __Vfunc_uvm_report_enabled__452__Vfuncout 
                                = __Vtask_uvm_report_enabled__455__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__452__Vfuncout))) {
                __Vtask_uvm_report_warning__456__report_enabled_checked = 1U;
                __Vtask_uvm_report_warning__456__context_name = ""s;
                __Vtask_uvm_report_warning__456__line = 0x000006e0U;
                __Vtask_uvm_report_warning__456__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_warning__456__verbosity = 0U;
                __Vtask_uvm_report_warning__456__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Unknown HDL Abstraction '"s, kind), "'"s));
                __Vtask_uvm_report_warning__456__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__457__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__457__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__458__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__458__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__456__id, __Vtask_uvm_report_warning__456__message, __Vtask_uvm_report_warning__456__verbosity, __Vtask_uvm_report_warning__456__filename, __Vtask_uvm_report_warning__456__line, __Vtask_uvm_report_warning__456__context_name, (IData)(__Vtask_uvm_report_warning__456__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1764)->__VnoInFunc_delete(vlSymsp, kind);
        __Vlabel0: ;
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_add_hdl_path(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlQueue<Vtest_simple_register_uvm_uvm_hdl_path_slice__struct__0> slices, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_add_hdl_path\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_queue__Tz207> __Vtask_get__461__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_queue__Tz207> paths;
    VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1771)->__VnoInFunc_get(vlProcess, vlSymsp, kind, __Vtask_get__461__Vfuncout);
    paths = __Vtask_get__461__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_hdl_path_concat> concat;
    concat = VL_NEW(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_hdl_path_concat, vlSymsp);
    VL_NULL_CHECK(concat, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1774)->__VnoInFunc_set(vlSymsp, slices);
    VL_NULL_CHECK(paths, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1775)->__VnoInFunc_push_back(vlSymsp, concat);
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_add_hdl_path_slice(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ offset, IData/*31:0*/ size, CData/*0:0*/ first, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_add_hdl_path_slice\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_queue__Tz207> __Vtask_get__465__Vfuncout;
    IData/*31:0*/ __Vtask_size__466__Vfuncout;
    __Vtask_size__466__Vfuncout = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_hdl_path_concat> __Vtask_get__469__Vfuncout;
    IData/*31:0*/ __Vtask_size__470__Vfuncout;
    __Vtask_size__470__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_queue__Tz207> paths;
    VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1786)->__VnoInFunc_get(vlProcess, vlSymsp, kind, __Vtask_get__465__Vfuncout);
    paths = __Vtask_get__465__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_hdl_path_concat> concat;
    if (((IData)(first) || (0U == ([&]() {
                        VL_NULL_CHECK(paths, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1789)
                                   ->__VnoInFunc_size(vlSymsp, __Vtask_size__466__Vfuncout);
                    }(), __Vtask_size__466__Vfuncout)))) {
        concat = VL_NEW(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_hdl_path_concat, vlSymsp);
        VL_NULL_CHECK(paths, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1791)->__VnoInFunc_push_back(vlSymsp, concat);
    } else {
        VL_NULL_CHECK(paths, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1794)->__VnoInFunc_get(vlProcess, vlSymsp, 
                                                                                (([&]() {
                        VL_NULL_CHECK(paths, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1794)
                                                                                ->__VnoInFunc_size(vlSymsp, __Vtask_size__470__Vfuncout);
                    }(), __Vtask_size__470__Vfuncout) 
                                                                                - (IData)(1U)), __Vtask_get__469__Vfuncout);
        concat = __Vtask_get__469__Vfuncout;
    }
    VL_NULL_CHECK(concat, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1796)->__VnoInFunc_add_path(vlSymsp, name, offset, size);
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_has_hdl_path(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ &has_hdl_path__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_has_hdl_path\n"); );
    // Locals
    std::string __Vtask_get_default_hdl_path__472__Vfuncout;
    IData/*31:0*/ __Vtask_exists__473__Vfuncout;
    __Vtask_exists__473__Vfuncout = 0;
    // Body
    if ((""s == kind)) {
        VL_NULL_CHECK(this->__PVT__m_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1804)->__VnoInFunc_get_default_hdl_path(vlSymsp, __Vtask_get_default_hdl_path__472__Vfuncout);
        kind = __Vtask_get_default_hdl_path__472__Vfuncout;
    }
    has_hdl_path__Vfuncrtn = (1U & ([&]() {
                VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1806)
                                    ->__VnoInFunc_exists(vlSymsp, kind, __Vtask_exists__473__Vfuncout);
            }(), __Vtask_exists__473__Vfuncout));
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_hdl_path(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_hdl_path_concat>> &paths, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_hdl_path\n"); );
    // Locals
    std::string __Vtask_get_default_hdl_path__474__Vfuncout;
    CData/*0:0*/ __Vfunc_has_hdl_path__475__Vfuncout;
    __Vfunc_has_hdl_path__475__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__476__Vfuncout;
    __Vfunc_uvm_report_enabled__476__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__476__verbosity;
    __Vfunc_uvm_report_enabled__476__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__476__severity;
    __Vfunc_uvm_report_enabled__476__severity = 0;
    std::string __Vfunc_uvm_report_enabled__476__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__477__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__478__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__479__Vfuncout;
    __Vtask_uvm_report_enabled__479__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__480__id;
    std::string __Vtask_uvm_report_error__480__message;
    IData/*31:0*/ __Vtask_uvm_report_error__480__verbosity;
    __Vtask_uvm_report_error__480__verbosity = 0;
    std::string __Vtask_uvm_report_error__480__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__480__line;
    __Vtask_uvm_report_error__480__line = 0;
    std::string __Vtask_uvm_report_error__480__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__480__report_enabled_checked;
    __Vtask_uvm_report_error__480__report_enabled_checked = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__481__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__482__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_queue__Tz207> __Vtask_get__484__Vfuncout;
    IData/*31:0*/ __Vtask_size__485__Vfuncout;
    __Vtask_size__485__Vfuncout = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_hdl_path_concat> __Vtask_get__486__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ unnamedblk480__DOT__i;
    unnamedblk480__DOT__i = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk480__DOT__unnamedblk481__DOT__t;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_queue__Tz207> hdl_paths;
    {
        if ((""s == kind)) {
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1818)->__VnoInFunc_get_default_hdl_path(vlSymsp, __Vtask_get_default_hdl_path__474__Vfuncout);
            kind = __Vtask_get_default_hdl_path__474__Vfuncout;
        }
        if ((1U & (~ ([&]() {
                            this->__VnoInFunc_has_hdl_path(vlSymsp, kind, __Vfunc_has_hdl_path__475__Vfuncout);
                        }(), (IData)(__Vfunc_has_hdl_path__475__Vfuncout))))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__476__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__476__severity = 2U;
                            __Vfunc_uvm_report_enabled__476__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__477__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__477__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__478__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__478__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__476__verbosity, (IData)(__Vfunc_uvm_report_enabled__476__severity), __Vfunc_uvm_report_enabled__476__id, __Vtask_uvm_report_enabled__479__Vfuncout);
                            __Vfunc_uvm_report_enabled__476__Vfuncout 
                                = __Vtask_uvm_report_enabled__479__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__476__Vfuncout))) {
                __Vtask_uvm_report_error__480__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__480__context_name = ""s;
                __Vtask_uvm_report_error__480__line = 0x0000071eU;
                __Vtask_uvm_report_error__480__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_error__480__verbosity = 0U;
                __Vtask_uvm_report_error__480__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Memory does not have hdl path defined for abstraction '"s, kind), "'"s));
                __Vtask_uvm_report_error__480__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__481__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__481__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__482__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__482__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__480__id, __Vtask_uvm_report_error__480__message, __Vtask_uvm_report_error__480__verbosity, __Vtask_uvm_report_error__480__filename, __Vtask_uvm_report_error__480__line, __Vtask_uvm_report_error__480__context_name, (IData)(__Vtask_uvm_report_error__480__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1826)->__VnoInFunc_get(vlProcess, vlSymsp, kind, __Vtask_get__484__Vfuncout);
        hdl_paths = __Vtask_get__484__Vfuncout;
        unnamedblk480__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk480__DOT__i, 
                          ([&]() {
                        VL_NULL_CHECK(hdl_paths, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1828)
                           ->__VnoInFunc_size(vlSymsp, __Vtask_size__485__Vfuncout);
                    }(), __Vtask_size__485__Vfuncout))) {
            VL_NULL_CHECK(hdl_paths, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1829)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk480__DOT__i, __Vtask_get__486__Vfuncout);
            unnamedblk480__DOT__unnamedblk481__DOT__t 
                = __Vtask_get__486__Vfuncout;
            paths.push_back(unnamedblk480__DOT__unnamedblk481__DOT__t);
            unnamedblk480__DOT__i = ((IData)(1U) + unnamedblk480__DOT__i);
        }
        __Vlabel0: ;
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_hdl_path_kinds(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlQueue<std::string> &kinds) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_hdl_path_kinds\n"); );
    // Locals
    IData/*31:0*/ __Vtask_first__487__Vfuncout;
    __Vtask_first__487__Vfuncout = 0;
    IData/*31:0*/ __Vtask_next__488__Vfuncout;
    __Vtask_next__488__Vfuncout = 0;
    // Body
    std::string kind;
    {
        kinds.clear();
        if ((1U & (~ (0U != ([&]() {
                                VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1841)
                             ->__VnoInFunc_first(vlSymsp, kind, __Vtask_first__487__Vfuncout);
                            }(), __Vtask_first__487__Vfuncout))))) {
            goto __Vlabel0;
        }
        do {
            kinds.push_back(kind);
        } while ((0U != ([&]() {
                        VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1845)
                         ->__VnoInFunc_next(vlSymsp, kind, __Vtask_next__488__Vfuncout);
                    }(), __Vtask_next__488__Vfuncout)));
        __Vlabel0: ;
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_full_hdl_path(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_hdl_path_concat>> &paths, std::string kind, std::string separator) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_full_hdl_path\n"); );
    // Locals
    std::string __Vtask_get_default_hdl_path__489__Vfuncout;
    CData/*0:0*/ __Vfunc_has_hdl_path__490__Vfuncout;
    __Vfunc_has_hdl_path__490__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__491__Vfuncout;
    __Vfunc_uvm_report_enabled__491__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__491__verbosity;
    __Vfunc_uvm_report_enabled__491__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__491__severity;
    __Vfunc_uvm_report_enabled__491__severity = 0;
    std::string __Vfunc_uvm_report_enabled__491__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__492__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__493__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__494__Vfuncout;
    __Vtask_uvm_report_enabled__494__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__495__id;
    std::string __Vtask_uvm_report_error__495__message;
    IData/*31:0*/ __Vtask_uvm_report_error__495__verbosity;
    __Vtask_uvm_report_error__495__verbosity = 0;
    std::string __Vtask_uvm_report_error__495__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__495__line;
    __Vtask_uvm_report_error__495__line = 0;
    std::string __Vtask_uvm_report_error__495__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__495__report_enabled_checked;
    __Vtask_uvm_report_error__495__report_enabled_checked = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__496__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__497__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_queue__Tz207> __Vtask_get__499__Vfuncout;
    IData/*31:0*/ __Vtask_size__501__Vfuncout;
    __Vtask_size__501__Vfuncout = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_hdl_path_concat> __Vtask_get__502__Vfuncout;
    // Body
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_queue__Tz207> unnamedblk482__DOT__hdl_paths;
    VlQueue<std::string> unnamedblk482__DOT__parent_paths;
    IData/*31:0*/ unnamedblk482__DOT__unnamedblk483__DOT__i;
    unnamedblk482__DOT__unnamedblk483__DOT__i = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk482__DOT__unnamedblk483__DOT__unnamedblk484__DOT__hdl_concat;
    IData/*31:0*/ unnamedblk482__DOT__unnamedblk483__DOT__unnamedblk484__DOT__unnamedblk485__DOT__j;
    unnamedblk482__DOT__unnamedblk483__DOT__unnamedblk484__DOT__unnamedblk485__DOT__j = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk482__DOT__unnamedblk483__DOT__unnamedblk484__DOT__unnamedblk485__DOT__unnamedblk486__DOT__t;
    IData/*31:0*/ unnamedblk482__DOT__unnamedblk483__DOT__unnamedblk484__DOT__unnamedblk485__DOT__unnamedblk486__DOT__unnamedblk487__DOT__k;
    unnamedblk482__DOT__unnamedblk483__DOT__unnamedblk484__DOT__unnamedblk485__DOT__unnamedblk486__DOT__unnamedblk487__DOT__k = 0;
    {
        if ((""s == kind)) {
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1855)->__VnoInFunc_get_default_hdl_path(vlSymsp, __Vtask_get_default_hdl_path__489__Vfuncout);
            kind = __Vtask_get_default_hdl_path__489__Vfuncout;
        }
        if ((1U & (~ ([&]() {
                            this->__VnoInFunc_has_hdl_path(vlSymsp, kind, __Vfunc_has_hdl_path__490__Vfuncout);
                        }(), (IData)(__Vfunc_has_hdl_path__490__Vfuncout))))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__491__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__491__severity = 2U;
                            __Vfunc_uvm_report_enabled__491__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__492__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__492__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__493__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__493__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__491__verbosity, (IData)(__Vfunc_uvm_report_enabled__491__severity), __Vfunc_uvm_report_enabled__491__id, __Vtask_uvm_report_enabled__494__Vfuncout);
                            __Vfunc_uvm_report_enabled__491__Vfuncout 
                                = __Vtask_uvm_report_enabled__494__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__491__Vfuncout))) {
                __Vtask_uvm_report_error__495__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__495__context_name = ""s;
                __Vtask_uvm_report_error__495__line = 0x00000743U;
                __Vtask_uvm_report_error__495__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_error__495__verbosity = 0U;
                __Vtask_uvm_report_error__495__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Memory does not have hdl path defined for abstraction '"s, kind), "'"s));
                __Vtask_uvm_report_error__495__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__496__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__496__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__497__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__497__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__495__id, __Vtask_uvm_report_error__495__message, __Vtask_uvm_report_error__495__verbosity, __Vtask_uvm_report_error__495__filename, __Vtask_uvm_report_error__495__line, __Vtask_uvm_report_error__495__context_name, (IData)(__Vtask_uvm_report_error__495__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1864)->__VnoInFunc_get(vlProcess, vlSymsp, kind, __Vtask_get__499__Vfuncout);
        unnamedblk482__DOT__hdl_paths = __Vtask_get__499__Vfuncout;
        VL_NULL_CHECK(this->__PVT__m_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1867)->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, unnamedblk482__DOT__parent_paths, kind, separator);
        unnamedblk482__DOT__unnamedblk483__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk482__DOT__unnamedblk483__DOT__i, 
                          ([&]() {
                        VL_NULL_CHECK(unnamedblk482__DOT__hdl_paths, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1869)
                           ->__VnoInFunc_size(vlSymsp, __Vtask_size__501__Vfuncout);
                    }(), __Vtask_size__501__Vfuncout))) {
            VL_NULL_CHECK(unnamedblk482__DOT__hdl_paths, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1870)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk482__DOT__unnamedblk483__DOT__i, __Vtask_get__502__Vfuncout);
            unnamedblk482__DOT__unnamedblk483__DOT__unnamedblk484__DOT__hdl_concat 
                = __Vtask_get__502__Vfuncout;
            unnamedblk482__DOT__unnamedblk483__DOT__unnamedblk484__DOT__unnamedblk485__DOT__j = 0U;
            while (VL_LTS_III(32, unnamedblk482__DOT__unnamedblk483__DOT__unnamedblk484__DOT__unnamedblk485__DOT__j, unnamedblk482__DOT__parent_paths.size())) {
                unnamedblk482__DOT__unnamedblk483__DOT__unnamedblk484__DOT__unnamedblk485__DOT__unnamedblk486__DOT__t 
                    = VL_NEW(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_hdl_path_concat, vlSymsp);
                unnamedblk482__DOT__unnamedblk483__DOT__unnamedblk484__DOT__unnamedblk485__DOT__unnamedblk486__DOT__unnamedblk487__DOT__k = 0U;
                while (VL_LTS_III(32, unnamedblk482__DOT__unnamedblk483__DOT__unnamedblk484__DOT__unnamedblk485__DOT__unnamedblk486__DOT__unnamedblk487__DOT__k, VL_NULL_CHECK(unnamedblk482__DOT__unnamedblk483__DOT__unnamedblk484__DOT__hdl_concat, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1875)
                                  ->__PVT__slices.size())) {
                    if ((""s == VL_NULL_CHECK(unnamedblk482__DOT__unnamedblk483__DOT__unnamedblk484__DOT__hdl_concat, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1876)
                         ->__PVT__slices.at(unnamedblk482__DOT__unnamedblk483__DOT__unnamedblk484__DOT__unnamedblk485__DOT__unnamedblk486__DOT__unnamedblk487__DOT__k)
                         .__PVT__path)) {
                        VL_NULL_CHECK(unnamedblk482__DOT__unnamedblk483__DOT__unnamedblk484__DOT__unnamedblk485__DOT__unnamedblk486__DOT__t, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1877)->__VnoInFunc_add_path(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(unnamedblk482__DOT__parent_paths.at(unnamedblk482__DOT__unnamedblk483__DOT__unnamedblk484__DOT__unnamedblk485__DOT__j)), 0xffffffffU, 0xffffffffU);
                    } else {
                        VL_NULL_CHECK(unnamedblk482__DOT__unnamedblk483__DOT__unnamedblk484__DOT__unnamedblk485__DOT__unnamedblk486__DOT__t, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1879)->__VnoInFunc_add_path(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(unnamedblk482__DOT__parent_paths.at(unnamedblk482__DOT__unnamedblk483__DOT__unnamedblk484__DOT__unnamedblk485__DOT__j), separator), VL_NULL_CHECK(unnamedblk482__DOT__unnamedblk483__DOT__unnamedblk484__DOT__hdl_concat, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1879)
                                                                                ->__PVT__slices.at(unnamedblk482__DOT__unnamedblk483__DOT__unnamedblk484__DOT__unnamedblk485__DOT__unnamedblk486__DOT__unnamedblk487__DOT__k)
                                                                                .__PVT__path)), VL_NULL_CHECK(unnamedblk482__DOT__unnamedblk483__DOT__unnamedblk484__DOT__hdl_concat, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1880)
                                                                                ->__PVT__slices.at(unnamedblk482__DOT__unnamedblk483__DOT__unnamedblk484__DOT__unnamedblk485__DOT__unnamedblk486__DOT__unnamedblk487__DOT__k)
                                                                                .__PVT__offset, VL_NULL_CHECK(unnamedblk482__DOT__unnamedblk483__DOT__unnamedblk484__DOT__hdl_concat, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1881)
                                                                                ->__PVT__slices.at(unnamedblk482__DOT__unnamedblk483__DOT__unnamedblk484__DOT__unnamedblk485__DOT__unnamedblk486__DOT__unnamedblk487__DOT__k)
                                                                                .__PVT__size);
                    }
                    unnamedblk482__DOT__unnamedblk483__DOT__unnamedblk484__DOT__unnamedblk485__DOT__unnamedblk486__DOT__unnamedblk487__DOT__k 
                        = ((IData)(1U) + unnamedblk482__DOT__unnamedblk483__DOT__unnamedblk484__DOT__unnamedblk485__DOT__unnamedblk486__DOT__unnamedblk487__DOT__k);
                }
                paths.push_back(unnamedblk482__DOT__unnamedblk483__DOT__unnamedblk484__DOT__unnamedblk485__DOT__unnamedblk486__DOT__t);
                unnamedblk482__DOT__unnamedblk483__DOT__unnamedblk484__DOT__unnamedblk485__DOT__j 
                    = ((IData)(1U) + unnamedblk482__DOT__unnamedblk483__DOT__unnamedblk484__DOT__unnamedblk485__DOT__j);
            }
            unnamedblk482__DOT__unnamedblk483__DOT__i 
                = ((IData)(1U) + unnamedblk482__DOT__unnamedblk483__DOT__i);
        }
        __Vlabel0: ;
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_set_parent(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_block> parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_set_parent\n"); );
    // Body
    this->__PVT__m_parent = parent;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_parent(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_parent\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_block> __Vfunc_get_block__506__Vfuncout;
    // Body
    this->__VnoInFunc_get_block(vlSymsp, __Vfunc_get_block__506__Vfuncout);
    get_parent__Vfuncrtn = __Vfunc_get_block__506__Vfuncout;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_convert2string\n"); );
    // Locals
    std::string __Vfunc_get_full_name__507__Vfuncout;
    QData/*63:0*/ __Vfunc_get_size__508__Vfuncout;
    __Vfunc_get_size__508__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_n_bits__509__Vfuncout;
    __Vfunc_get_n_bits__509__Vfuncout = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> __Vtask_get_parent_map__510__Vfuncout;
    IData/*31:0*/ __Vtask_get_endian__511__Vfuncout;
    __Vtask_get_endian__511__Vfuncout = 0;
    QData/*63:0*/ __Vtask_get_base_addr__512__Vfuncout;
    __Vtask_get_base_addr__512__Vfuncout = 0;
    QData/*63:0*/ __Vtask_get_submap_offset__513__Vfuncout;
    __Vtask_get_submap_offset__513__Vfuncout = 0;
    std::string __Vtask_get_full_name__514__Vfuncout;
    IData/*31:0*/ __Vtask_get_n_bytes__515__Vfuncout;
    __Vtask_get_n_bytes__515__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_get_size__516__Vfuncout;
    __Vfunc_get_size__516__Vfuncout = 0;
    std::string __Vfunc_get_access__517__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    // Body
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> unnamedblk488__DOT__map;
    CData/*0:0*/ unnamedblk488__DOT__map__Vfirst;
    unnamedblk488__DOT__map__Vfirst = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> unnamedblk488__DOT__unnamedblk489__DOT__parent_map;
    IData/*31:0*/ unnamedblk488__DOT__unnamedblk489__DOT__offset;
    unnamedblk488__DOT__unnamedblk489__DOT__offset = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk490__DOT__this_map;
    IData/*31:0*/ unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk490__DOT__endian_name;
    unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk490__DOT__endian_name = 0;
    std::string res_str;
    std::string prefix;
    __Vtemp_1 = ([&]() {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__507__Vfuncout);
        }(), __Vfunc_get_full_name__507__Vfuncout);
    VL_SFORMAT_NX(64,convert2string__Vfuncrtn,"%@Memory %@ -- %0#x%0# bits",0,
                  -1,&(prefix),-1,&(__Vtemp_1),64,([&]() {
                    this->__VnoInFunc_get_size(vlSymsp, __Vfunc_get_size__508__Vfuncout);
                }(), __Vfunc_get_size__508__Vfuncout),
                  32,([&]() {
                    this->__VnoInFunc_get_n_bits(vlSymsp, __Vfunc_get_n_bits__509__Vfuncout);
                }(), __Vfunc_get_n_bits__509__Vfuncout));
    convert2string__Vfuncrtn = ((0U == this->__PVT__m_maps.size())
                                 ? VL_CONCATN_NNN(convert2string__Vfuncrtn, "  (unmapped)\n"s)
                                 : VL_CONCATN_NNN(convert2string__Vfuncrtn, "\n"s));
    if ((0U != this->__PVT__m_maps.first(unnamedblk488__DOT__map))) {
        unnamedblk488__DOT__map__Vfirst = 1U;
        while (((IData)(unnamedblk488__DOT__map__Vfirst) 
                || (0U != this->__PVT__m_maps.next(unnamedblk488__DOT__map)))) {
            unnamedblk488__DOT__map__Vfirst = 0U;
            unnamedblk488__DOT__unnamedblk489__DOT__parent_map 
                = unnamedblk488__DOT__map;
            while ((VlNull{} != unnamedblk488__DOT__unnamedblk489__DOT__parent_map)) {
                unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk490__DOT__this_map 
                    = unnamedblk488__DOT__unnamedblk489__DOT__parent_map;
                VL_NULL_CHECK(unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk490__DOT__this_map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1924)->__VnoInFunc_get_parent_map(vlSymsp, __Vtask_get_parent_map__510__Vfuncout);
                unnamedblk488__DOT__unnamedblk489__DOT__parent_map 
                    = __Vtask_get_parent_map__510__Vfuncout;
                VL_NULL_CHECK(unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk490__DOT__this_map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1925)->__VnoInFunc_get_endian(vlSymsp, 1U, __Vtask_get_endian__511__Vfuncout);
                unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk490__DOT__endian_name 
                    = __Vtask_get_endian__511__Vfuncout;
                unnamedblk488__DOT__unnamedblk489__DOT__offset 
                    = (IData)(((VlNull{} == unnamedblk488__DOT__unnamedblk489__DOT__parent_map)
                                ? ([&]() {
                                VL_NULL_CHECK(unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk490__DOT__this_map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1927)
                                   ->__VnoInFunc_get_base_addr(vlProcess, vlSymsp, 0U, __Vtask_get_base_addr__512__Vfuncout);
                            }(), __Vtask_get_base_addr__512__Vfuncout)
                                : ([&]() {
                                VL_NULL_CHECK(unnamedblk488__DOT__unnamedblk489__DOT__parent_map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1928)
                                   ->__VnoInFunc_get_submap_offset(vlProcess, vlSymsp, unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk490__DOT__this_map, __Vtask_get_submap_offset__513__Vfuncout);
                            }(), __Vtask_get_submap_offset__513__Vfuncout)));
                prefix = VL_CONCATN_NNN(prefix, "  "s);
                __Vtemp_2 = ([&]() {
                        VL_NULL_CHECK(unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk490__DOT__this_map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1931)
                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__514__Vfuncout);
                    }(), __Vtask_get_full_name__514__Vfuncout);
                __Vtemp_3 = Vtest_simple_register_uvm___024unit::__Venumtab_enum_name89
                    [(7U & unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk490__DOT__endian_name)];
                __Vtemp_4 = ([&]() {
                        this->__VnoInFunc_get_access(vlProcess, vlSymsp, unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk490__DOT__this_map, __Vfunc_get_access__517__Vfuncout);
                    }(), __Vfunc_get_access__517__Vfuncout);
                VL_SFORMAT_NX(64,convert2string__Vfuncrtn
                              ,"%@Mapped in '%@' -- buswidth %0# bytes, %@, offset 'h%0x, size 'h%0x, %@\n",0,
                              -1,&(prefix),-1,&(__Vtemp_2),
                              32,([&]() {
                                VL_NULL_CHECK(unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk490__DOT__this_map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1931)
                                  ->__VnoInFunc_get_n_bytes(vlSymsp, 1U, __Vtask_get_n_bytes__515__Vfuncout);
                            }(), __Vtask_get_n_bytes__515__Vfuncout),
                              -1,&(__Vtemp_3),32,unnamedblk488__DOT__unnamedblk489__DOT__offset,
                              64,([&]() {
                                this->__VnoInFunc_get_size(vlSymsp, __Vfunc_get_size__516__Vfuncout);
                            }(), __Vfunc_get_size__516__Vfuncout),
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

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_print\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_get_n_bits__520__Vfuncout;
    __Vfunc_get_n_bits__520__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_get_size__522__Vfuncout;
    __Vfunc_get_size__522__Vfuncout = 0;
    // Body
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1955)->__VnoInFunc_print_field_int(vlProcess, vlSymsp, "n_bits"s, 
                                                                                VL_EXTEND_QI(64,32, 
                                                                                ([&]() {
                    this->__VnoInFunc_get_n_bits(vlSymsp, __Vfunc_get_n_bits__520__Vfuncout);
                }(), __Vfunc_get_n_bits__520__Vfuncout)), 0x00000020U, 0x03000000U, 0x2eU, ""s);
    VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh", 1956)->__VnoInFunc_print_field_int(vlProcess, vlSymsp, "size"s, 
                                                                                ([&]() {
                this->__VnoInFunc_get_size(vlSymsp, __Vfunc_get_size__522__Vfuncout);
            }(), __Vfunc_get_size__522__Vfuncout), 0x00000020U, 0x03000000U, 0x2eU, ""s);
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_clone(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_clone\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__523__Vfuncout;
    __Vfunc_uvm_report_enabled__523__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__523__verbosity;
    __Vfunc_uvm_report_enabled__523__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__523__severity;
    __Vfunc_uvm_report_enabled__523__severity = 0;
    std::string __Vfunc_uvm_report_enabled__523__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__524__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__525__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__526__Vfuncout;
    __Vtask_uvm_report_enabled__526__Vfuncout = 0;
    // Body
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__523__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__523__severity = 3U;
                    __Vfunc_uvm_report_enabled__523__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__524__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__524__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__525__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__525__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__523__verbosity, (IData)(__Vfunc_uvm_report_enabled__523__severity), __Vfunc_uvm_report_enabled__523__id, __Vtask_uvm_report_enabled__526__Vfuncout);
                    __Vfunc_uvm_report_enabled__523__Vfuncout 
                        = __Vtask_uvm_report_enabled__526__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__523__Vfuncout))) {
        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "RegModel memories cannot be cloned"s, 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s, 0x000007abU, ""s, 1U);
    }
    clone__Vfuncrtn = VlNull{};
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_copy\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__528__Vfuncout;
    __Vfunc_uvm_report_enabled__528__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__528__verbosity;
    __Vfunc_uvm_report_enabled__528__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__528__severity;
    __Vfunc_uvm_report_enabled__528__severity = 0;
    std::string __Vfunc_uvm_report_enabled__528__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__529__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__530__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__531__Vfuncout;
    __Vtask_uvm_report_enabled__531__Vfuncout = 0;
    // Body
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__528__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__528__severity = 3U;
                    __Vfunc_uvm_report_enabled__528__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__529__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__529__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__530__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__530__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__528__verbosity, (IData)(__Vfunc_uvm_report_enabled__528__severity), __Vfunc_uvm_report_enabled__528__id, __Vtask_uvm_report_enabled__531__Vfuncout);
                    __Vfunc_uvm_report_enabled__528__Vfuncout 
                        = __Vtask_uvm_report_enabled__531__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__528__Vfuncout))) {
        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "RegModel memories cannot be copied"s, 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s, 0x000007b2U, ""s, 1U);
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_compare(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_compare\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__533__Vfuncout;
    __Vfunc_uvm_report_enabled__533__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__533__verbosity;
    __Vfunc_uvm_report_enabled__533__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__533__severity;
    __Vfunc_uvm_report_enabled__533__severity = 0;
    std::string __Vfunc_uvm_report_enabled__533__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__534__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__535__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__536__Vfuncout;
    __Vtask_uvm_report_enabled__536__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__537__id;
    std::string __Vtask_uvm_report_warning__537__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__537__verbosity;
    __Vtask_uvm_report_warning__537__verbosity = 0;
    std::string __Vtask_uvm_report_warning__537__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__537__line;
    __Vtask_uvm_report_warning__537__line = 0;
    std::string __Vtask_uvm_report_warning__537__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__537__report_enabled_checked;
    __Vtask_uvm_report_warning__537__report_enabled_checked = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__538__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__539__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__533__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__533__severity = 1U;
                    __Vfunc_uvm_report_enabled__533__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__534__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__534__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__535__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__535__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__533__verbosity, (IData)(__Vfunc_uvm_report_enabled__533__severity), __Vfunc_uvm_report_enabled__533__id, __Vtask_uvm_report_enabled__536__Vfuncout);
                    __Vfunc_uvm_report_enabled__533__Vfuncout 
                        = __Vtask_uvm_report_enabled__536__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__533__Vfuncout))) {
        __Vtask_uvm_report_warning__537__report_enabled_checked = 1U;
        __Vtask_uvm_report_warning__537__context_name = ""s;
        __Vtask_uvm_report_warning__537__line = 0x000007baU;
        __Vtask_uvm_report_warning__537__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
        __Vtask_uvm_report_warning__537__verbosity = 0U;
        __Vtask_uvm_report_warning__537__message = "RegModel memories cannot be compared"s;
        __Vtask_uvm_report_warning__537__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__538__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__538__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__539__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__539__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__537__id, __Vtask_uvm_report_warning__537__message, __Vtask_uvm_report_warning__537__verbosity, __Vtask_uvm_report_warning__537__filename, __Vtask_uvm_report_warning__537__line, __Vtask_uvm_report_warning__537__context_name, (IData)(__Vtask_uvm_report_warning__537__report_enabled_checked));
    }
    do_compare__Vfuncrtn = 0U;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_pack(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_pack\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__541__Vfuncout;
    __Vfunc_uvm_report_enabled__541__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__541__verbosity;
    __Vfunc_uvm_report_enabled__541__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__541__severity;
    __Vfunc_uvm_report_enabled__541__severity = 0;
    std::string __Vfunc_uvm_report_enabled__541__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__542__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__543__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__544__Vfuncout;
    __Vtask_uvm_report_enabled__544__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__545__id;
    std::string __Vtask_uvm_report_warning__545__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__545__verbosity;
    __Vtask_uvm_report_warning__545__verbosity = 0;
    std::string __Vtask_uvm_report_warning__545__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__545__line;
    __Vtask_uvm_report_warning__545__line = 0;
    std::string __Vtask_uvm_report_warning__545__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__545__report_enabled_checked;
    __Vtask_uvm_report_warning__545__report_enabled_checked = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__546__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__547__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__541__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__541__severity = 1U;
                    __Vfunc_uvm_report_enabled__541__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__542__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__542__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__543__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__543__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__541__verbosity, (IData)(__Vfunc_uvm_report_enabled__541__severity), __Vfunc_uvm_report_enabled__541__id, __Vtask_uvm_report_enabled__544__Vfuncout);
                    __Vfunc_uvm_report_enabled__541__Vfuncout 
                        = __Vtask_uvm_report_enabled__544__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__541__Vfuncout))) {
        __Vtask_uvm_report_warning__545__report_enabled_checked = 1U;
        __Vtask_uvm_report_warning__545__context_name = ""s;
        __Vtask_uvm_report_warning__545__line = 0x000007c2U;
        __Vtask_uvm_report_warning__545__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
        __Vtask_uvm_report_warning__545__verbosity = 0U;
        __Vtask_uvm_report_warning__545__message = "RegModel memories cannot be packed"s;
        __Vtask_uvm_report_warning__545__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__546__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__546__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__547__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__547__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__545__id, __Vtask_uvm_report_warning__545__message, __Vtask_uvm_report_warning__545__verbosity, __Vtask_uvm_report_warning__545__filename, __Vtask_uvm_report_warning__545__line, __Vtask_uvm_report_warning__545__context_name, (IData)(__Vtask_uvm_report_warning__545__report_enabled_checked));
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_unpack(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_unpack\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__549__Vfuncout;
    __Vfunc_uvm_report_enabled__549__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__549__verbosity;
    __Vfunc_uvm_report_enabled__549__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__549__severity;
    __Vfunc_uvm_report_enabled__549__severity = 0;
    std::string __Vfunc_uvm_report_enabled__549__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__550__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__551__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__552__Vfuncout;
    __Vtask_uvm_report_enabled__552__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__553__id;
    std::string __Vtask_uvm_report_warning__553__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__553__verbosity;
    __Vtask_uvm_report_warning__553__verbosity = 0;
    std::string __Vtask_uvm_report_warning__553__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__553__line;
    __Vtask_uvm_report_warning__553__line = 0;
    std::string __Vtask_uvm_report_warning__553__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__553__report_enabled_checked;
    __Vtask_uvm_report_warning__553__report_enabled_checked = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__554__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__555__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__549__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__549__severity = 1U;
                    __Vfunc_uvm_report_enabled__549__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__550__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__550__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__551__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__551__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__549__verbosity, (IData)(__Vfunc_uvm_report_enabled__549__severity), __Vfunc_uvm_report_enabled__549__id, __Vtask_uvm_report_enabled__552__Vfuncout);
                    __Vfunc_uvm_report_enabled__549__Vfuncout 
                        = __Vtask_uvm_report_enabled__552__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__549__Vfuncout))) {
        __Vtask_uvm_report_warning__553__report_enabled_checked = 1U;
        __Vtask_uvm_report_warning__553__context_name = ""s;
        __Vtask_uvm_report_warning__553__line = 0x000007c9U;
        __Vtask_uvm_report_warning__553__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_mem.svh"s;
        __Vtask_uvm_report_warning__553__verbosity = 0U;
        __Vtask_uvm_report_warning__553__message = "RegModel memories cannot be unpacked"s;
        __Vtask_uvm_report_warning__553__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__554__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__554__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__555__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__555__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__553__id, __Vtask_uvm_report_warning__553__message, __Vtask_uvm_report_warning__553__verbosity, __Vtask_uvm_report_warning__553__filename, __Vtask_uvm_report_warning__553__line, __Vtask_uvm_report_warning__553__context_name, (IData)(__Vtask_uvm_report_warning__553__report_enabled_checked));
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_Xadd_vregX(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_vreg> vreg) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_Xadd_vregX\n"); );
    // Body
    this->__PVT__m_vregs.at(vreg) = 1U;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_Xdelete_vregX(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_vreg> vreg) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_Xdelete_vregX\n"); );
    // Body
    if (this->__PVT__m_vregs.exists(vreg)) {
        this->__PVT__m_vregs.erase(vreg);
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_randomize(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__558__Vfuncout;
    __Vfunc___VBasicRand__558__Vfuncout = 0;
    // Body
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__558__Vfuncout);
            }(), __Vfunc___VBasicRand__558__Vfuncout));
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc___Vsetup_constraints(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc___VBasicRand(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::_ctor_var_reset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::_ctor_var_reset\n"); );
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

Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::~Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_mem::to_string_middle\n"); );
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
    out += ", "+ Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
