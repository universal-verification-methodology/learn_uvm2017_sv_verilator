// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpools_top.h for the primary calling header

#include "Vpools_top__pch.h"

void Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_pre_write(Vpools_top__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ &wdat, IData/*31:0*/ &path, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_map> &map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_pre_write\n"); );
}

void Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_post_write(Vpools_top__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ wdat, IData/*31:0*/ path, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ &status) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_post_write\n"); );
}

void Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_pre_read(Vpools_top__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &path, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_map> &map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_pre_read\n"); );
}

void Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_post_read(Vpools_top__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ &rdat, IData/*31:0*/ path, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ &status) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_post_read\n"); );
}

Vpools_top_uvm_pkg__03a__03auvm_vreg::Vpools_top_uvm_pkg__03a__03auvm_vreg(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ n_bits)
    : Vpools_top_uvm_pkg__03a__03auvm_object(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_vreg::new\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__1__Vfuncout;
    __Vfunc_uvm_report_enabled__1__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__1__verbosity;
    __Vfunc_uvm_report_enabled__1__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__1__severity;
    __Vfunc_uvm_report_enabled__1__severity = 0;
    std::string __Vfunc_uvm_report_enabled__1__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__2__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__3__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__4__Vfuncout;
    __Vtask_uvm_report_enabled__4__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__5__id;
    std::string __Vtask_uvm_report_error__5__message;
    IData/*31:0*/ __Vtask_uvm_report_error__5__verbosity;
    __Vtask_uvm_report_error__5__verbosity = 0;
    std::string __Vtask_uvm_report_error__5__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__5__line;
    __Vtask_uvm_report_error__5__line = 0;
    std::string __Vtask_uvm_report_error__5__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__5__report_enabled_checked;
    __Vtask_uvm_report_error__5__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__6__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__7__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__8__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__10__Vfuncout;
    __Vfunc_uvm_report_enabled__10__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__10__verbosity;
    __Vfunc_uvm_report_enabled__10__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__10__severity;
    __Vfunc_uvm_report_enabled__10__severity = 0;
    std::string __Vfunc_uvm_report_enabled__10__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__11__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__12__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__13__Vfuncout;
    __Vtask_uvm_report_enabled__13__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__14__id;
    std::string __Vtask_uvm_report_error__14__message;
    IData/*31:0*/ __Vtask_uvm_report_error__14__verbosity;
    __Vtask_uvm_report_error__14__verbosity = 0;
    std::string __Vtask_uvm_report_error__14__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__14__line;
    __Vtask_uvm_report_error__14__line = 0;
    std::string __Vtask_uvm_report_error__14__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__14__report_enabled_checked;
    __Vtask_uvm_report_error__14__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__15__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__16__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__17__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    if ((0U == n_bits)) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__1__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__1__severity = 2U;
                        __Vfunc_uvm_report_enabled__1__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__2__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__2__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__3__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__3__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__1__verbosity, (IData)(__Vfunc_uvm_report_enabled__1__severity), __Vfunc_uvm_report_enabled__1__id, __Vtask_uvm_report_enabled__4__Vfuncout);
                        __Vfunc_uvm_report_enabled__1__Vfuncout 
                            = __Vtask_uvm_report_enabled__4__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__1__Vfuncout))) {
            __Vtask_uvm_report_error__5__report_enabled_checked = 1U;
            __Vtask_uvm_report_error__5__context_name = ""s;
            __Vtask_uvm_report_error__5__line = 0x000001a9U;
            __Vtask_uvm_report_error__5__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
            __Vtask_uvm_report_error__5__verbosity = 0U;
            __Vtemp_1 = ([&]() {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__6__Vfuncout);
                }(), __Vfunc_get_full_name__6__Vfuncout);
            __Vtask_uvm_report_error__5__message = VL_SFORMATF_N_NX("Virtual register \"%@\" cannot have 0 bits",0,
                                                                    -1,
                                                                    &(__Vtemp_1)) ;
            __Vtask_uvm_report_error__5__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__7__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__7__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__8__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__8__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__5__id, __Vtask_uvm_report_error__5__message, __Vtask_uvm_report_error__5__verbosity, __Vtask_uvm_report_error__5__filename, __Vtask_uvm_report_error__5__line, __Vtask_uvm_report_error__5__context_name, (IData)(__Vtask_uvm_report_error__5__report_enabled_checked));
        }
        n_bits = 1U;
    }
    if ((0x00000040U < n_bits)) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__10__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__10__severity = 2U;
                        __Vfunc_uvm_report_enabled__10__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__11__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__11__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__12__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__12__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__10__verbosity, (IData)(__Vfunc_uvm_report_enabled__10__severity), __Vfunc_uvm_report_enabled__10__id, __Vtask_uvm_report_enabled__13__Vfuncout);
                        __Vfunc_uvm_report_enabled__10__Vfuncout 
                            = __Vtask_uvm_report_enabled__13__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__10__Vfuncout))) {
            __Vtask_uvm_report_error__14__report_enabled_checked = 1U;
            __Vtask_uvm_report_error__14__context_name = ""s;
            __Vtask_uvm_report_error__14__line = 0x000001adU;
            __Vtask_uvm_report_error__14__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
            __Vtask_uvm_report_error__14__verbosity = 0U;
            __Vtemp_2 = ([&]() {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__15__Vfuncout);
                }(), __Vfunc_get_full_name__15__Vfuncout);
            __Vtask_uvm_report_error__14__message = VL_SFORMATF_N_NX("Virtual register \"%@\" cannot have more than 64 bits (%0#)",0,
                                                                     -1,
                                                                     &(__Vtemp_2),
                                                                     32,
                                                                     n_bits) ;
            __Vtask_uvm_report_error__14__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__16__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__16__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__17__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__17__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__14__id, __Vtask_uvm_report_error__14__message, __Vtask_uvm_report_error__14__verbosity, __Vtask_uvm_report_error__14__filename, __Vtask_uvm_report_error__14__line, __Vtask_uvm_report_error__14__context_name, (IData)(__Vtask_uvm_report_error__14__report_enabled_checked));
        }
        n_bits = 0x00000040U;
    }
    this->__PVT__n_bits = n_bits;
    this->__PVT__locked = 0U;
}

void Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_configure(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_block> parent, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_mem> mem, QData/*63:0*/ size, QData/*63:0*/ offset, IData/*31:0*/ incr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_configure\n"); );
    // Locals
    CData/*0:0*/ __Vtask_implement__19__Vfuncout;
    __Vtask_implement__19__Vfuncout = 0;
    // Body
    this->__PVT__parent = parent;
    this->__PVT__n_used_bits = 0U;
    if ((VlNull{} != mem)) {
        this->__VnoInFunc_implement(vlSymsp, size, mem, offset, incr, __Vtask_implement__19__Vfuncout);
        this->__PVT__is_static = 1U;
    } else {
        this->__PVT__mem = VlNull{};
        this->__PVT__is_static = 0U;
    }
    VL_NULL_CHECK(this->__PVT__parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 454)->__VnoInFunc_add_vreg(vlSymsp, 
                                                                                VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_vreg>{this});
    this->__PVT__atomic = VL_NEW(Vpools_top_std__03a__03asemaphore, vlSymsp, 1U);
}

void Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_Xlock_modelX(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_Xlock_modelX\n"); );
    // Body
    {
        if (this->__PVT__locked) {
            goto __Vlabel0;
        }
        this->__PVT__locked = 1U;
        __Vlabel0: ;
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_add_field(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_vreg_field> field) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_add_field\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__22__Vfuncout;
    __Vfunc_uvm_report_enabled__22__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__22__verbosity;
    __Vfunc_uvm_report_enabled__22__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__22__severity;
    __Vfunc_uvm_report_enabled__22__severity = 0;
    std::string __Vfunc_uvm_report_enabled__22__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__23__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__24__Vfuncout;
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
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__27__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__28__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__30__Vfuncout;
    __Vfunc_uvm_report_enabled__30__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__30__verbosity;
    __Vfunc_uvm_report_enabled__30__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__30__severity;
    __Vfunc_uvm_report_enabled__30__severity = 0;
    std::string __Vfunc_uvm_report_enabled__30__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__31__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__32__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__33__Vfuncout;
    __Vtask_uvm_report_enabled__33__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_lsb_pos_in_register__35__Vfuncout;
    __Vtask_get_lsb_pos_in_register__35__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_lsb_pos_in_register__36__Vfuncout;
    __Vtask_get_lsb_pos_in_register__36__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bits__37__Vfuncout;
    __Vtask_get_n_bits__37__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__38__Vfuncout;
    __Vfunc_uvm_report_enabled__38__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__38__verbosity;
    __Vfunc_uvm_report_enabled__38__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__38__severity;
    __Vfunc_uvm_report_enabled__38__severity = 0;
    std::string __Vfunc_uvm_report_enabled__38__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__39__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__40__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__41__Vfuncout;
    __Vtask_uvm_report_enabled__41__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__42__id;
    std::string __Vtask_uvm_report_error__42__message;
    IData/*31:0*/ __Vtask_uvm_report_error__42__verbosity;
    __Vtask_uvm_report_error__42__verbosity = 0;
    std::string __Vtask_uvm_report_error__42__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__42__line;
    __Vtask_uvm_report_error__42__line = 0;
    std::string __Vtask_uvm_report_error__42__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__42__report_enabled_checked;
    __Vtask_uvm_report_error__42__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__43__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__44__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__45__Vfuncout;
    IData/*31:0*/ __Vtask_get_lsb_pos_in_register__47__Vfuncout;
    __Vtask_get_lsb_pos_in_register__47__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bits__48__Vfuncout;
    __Vtask_get_n_bits__48__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__49__Vfuncout;
    __Vfunc_uvm_report_enabled__49__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__49__verbosity;
    __Vfunc_uvm_report_enabled__49__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__49__severity;
    __Vfunc_uvm_report_enabled__49__severity = 0;
    std::string __Vfunc_uvm_report_enabled__49__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__50__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__51__Vfuncout;
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
    std::string __Vtask_get_name__54__Vfuncout;
    std::string __Vtask_get_name__55__Vfuncout;
    std::string __Vfunc_get_full_name__56__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__57__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__58__Vfuncout;
    IData/*31:0*/ __Vtask_get_n_bits__60__Vfuncout;
    __Vtask_get_n_bits__60__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_lsb_pos_in_register__61__Vfuncout;
    __Vtask_get_lsb_pos_in_register__61__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__62__Vfuncout;
    __Vfunc_uvm_report_enabled__62__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__62__verbosity;
    __Vfunc_uvm_report_enabled__62__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__62__severity;
    __Vfunc_uvm_report_enabled__62__severity = 0;
    std::string __Vfunc_uvm_report_enabled__62__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__63__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__64__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__65__Vfuncout;
    __Vtask_uvm_report_enabled__65__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__66__id;
    std::string __Vtask_uvm_report_error__66__message;
    IData/*31:0*/ __Vtask_uvm_report_error__66__verbosity;
    __Vtask_uvm_report_error__66__verbosity = 0;
    std::string __Vtask_uvm_report_error__66__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__66__line;
    __Vtask_uvm_report_error__66__line = 0;
    std::string __Vtask_uvm_report_error__66__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__66__report_enabled_checked;
    __Vtask_uvm_report_error__66__report_enabled_checked = 0;
    std::string __Vtask_get_name__67__Vfuncout;
    std::string __Vtask_get_name__68__Vfuncout;
    std::string __Vfunc_get_full_name__69__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__70__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__71__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    std::string __Vtemp_6;
    std::string __Vtemp_7;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ unnamedblk400__DOT__i;
    unnamedblk400__DOT__i = 0;
    IData/*31:0*/ unnamedblk400__DOT__unnamedblk401__DOT__j;
    unnamedblk400__DOT__unnamedblk401__DOT__j = 0;
    IData/*31:0*/ offset;
    offset = 0;
    IData/*31:0*/ idx;
    idx = 0;
    {
        if (this->__PVT__locked) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__22__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__22__severity = 2U;
                            __Vfunc_uvm_report_enabled__22__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__23__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__23__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__24__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__24__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__22__verbosity, (IData)(__Vfunc_uvm_report_enabled__22__severity), __Vfunc_uvm_report_enabled__22__id, __Vtask_uvm_report_enabled__25__Vfuncout);
                            __Vfunc_uvm_report_enabled__22__Vfuncout 
                                = __Vtask_uvm_report_enabled__25__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__22__Vfuncout))) {
                __Vtask_uvm_report_error__26__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__26__context_name = ""s;
                __Vtask_uvm_report_error__26__line = 0x000001d9U;
                __Vtask_uvm_report_error__26__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__26__verbosity = 0U;
                __Vtask_uvm_report_error__26__message = "Cannot add virtual field to locked virtual register model"s;
                __Vtask_uvm_report_error__26__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__27__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__27__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__28__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__28__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__26__id, __Vtask_uvm_report_error__26__message, __Vtask_uvm_report_error__26__verbosity, __Vtask_uvm_report_error__26__filename, __Vtask_uvm_report_error__26__line, __Vtask_uvm_report_error__26__context_name, (IData)(__Vtask_uvm_report_error__26__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        if ((VlNull{} == field)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__30__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__30__severity = 3U;
                            __Vfunc_uvm_report_enabled__30__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__31__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__31__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__32__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__32__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__30__verbosity, (IData)(__Vfunc_uvm_report_enabled__30__severity), __Vfunc_uvm_report_enabled__30__id, __Vtask_uvm_report_enabled__33__Vfuncout);
                            __Vfunc_uvm_report_enabled__30__Vfuncout 
                                = __Vtask_uvm_report_enabled__33__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__30__Vfuncout))) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "Attempting to register NULL virtual field"s, 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s, 0x000001ddU, ""s, 1U);
            }
        }
        VL_NULL_CHECK(field, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 480)->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __Vtask_get_lsb_pos_in_register__35__Vfuncout);
        offset = __Vtask_get_lsb_pos_in_register__35__Vfuncout;
        idx = 0xffffffffU;
        {
            unnamedblk400__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk400__DOT__i, this->__PVT__fields.size())) {
                if ((offset < ([&]() {
                                VL_NULL_CHECK(this->__PVT__fields.at(unnamedblk400__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 484)
                               ->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __Vtask_get_lsb_pos_in_register__36__Vfuncout);
                            }(), __Vtask_get_lsb_pos_in_register__36__Vfuncout))) {
                    unnamedblk400__DOT__unnamedblk401__DOT__j 
                        = unnamedblk400__DOT__i;
                    this->__PVT__fields.insert(unnamedblk400__DOT__unnamedblk401__DOT__j, field);
                    idx = unnamedblk400__DOT__i;
                    goto __Vlabel1;
                }
                unnamedblk400__DOT__i = ((IData)(1U) 
                                         + unnamedblk400__DOT__i);
            }
            __Vlabel1: ;
        }
        if (VL_GTS_III(32, 0U, idx)) {
            this->__PVT__fields.push_back(field);
            idx = (this->__PVT__fields.size() - (IData)(1U));
        }
        this->__PVT__n_used_bits = (this->__PVT__n_used_bits 
                                    + ([&]() {
                    VL_NULL_CHECK(field, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 496)
                                       ->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__37__Vfuncout);
                }(), __Vtask_get_n_bits__37__Vfuncout));
        if ((this->__PVT__n_used_bits > this->__PVT__n_bits)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__38__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__38__severity = 2U;
                            __Vfunc_uvm_report_enabled__38__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__39__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__39__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__40__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__40__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__38__verbosity, (IData)(__Vfunc_uvm_report_enabled__38__severity), __Vfunc_uvm_report_enabled__38__id, __Vtask_uvm_report_enabled__41__Vfuncout);
                            __Vfunc_uvm_report_enabled__38__Vfuncout 
                                = __Vtask_uvm_report_enabled__41__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__38__Vfuncout))) {
                __Vtask_uvm_report_error__42__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__42__context_name = ""s;
                __Vtask_uvm_report_error__42__line = 0x000001f5U;
                __Vtask_uvm_report_error__42__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__42__verbosity = 0U;
                __Vtemp_1 = ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__43__Vfuncout);
                    }(), __Vfunc_get_full_name__43__Vfuncout);
                __Vtask_uvm_report_error__42__message 
                    = VL_SFORMATF_N_NX("Virtual fields use more bits (%0#) than available in virtual register \"%@\" (%0#)",0,
                                       32,this->__PVT__n_used_bits,
                                       -1,&(__Vtemp_1),
                                       32,this->__PVT__n_bits) ;
                __Vtask_uvm_report_error__42__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__44__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__44__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__45__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__45__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__42__id, __Vtask_uvm_report_error__42__message, __Vtask_uvm_report_error__42__verbosity, __Vtask_uvm_report_error__42__filename, __Vtask_uvm_report_error__42__line, __Vtask_uvm_report_error__42__context_name, (IData)(__Vtask_uvm_report_error__42__report_enabled_checked));
            }
        }
        if (VL_LTS_III(32, 0U, idx)) {
            if (((([&]() {
                                VL_NULL_CHECK(this->__PVT__fields.at(
                                                                     (idx 
                                                                      - (IData)(1U))), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 506)
                   ->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __Vtask_get_lsb_pos_in_register__47__Vfuncout);
                            }(), __Vtask_get_lsb_pos_in_register__47__Vfuncout) 
                  + ([&]() {
                                VL_NULL_CHECK(this->__PVT__fields.at(
                                                                     (idx 
                                                                      - (IData)(1U))), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 507)
                     ->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__48__Vfuncout);
                            }(), __Vtask_get_n_bits__48__Vfuncout)) 
                 > offset)) {
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__49__id = "RegModel"s;
                                __Vfunc_uvm_report_enabled__49__severity = 2U;
                                __Vfunc_uvm_report_enabled__49__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__50__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__50__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__51__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__51__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__49__verbosity, (IData)(__Vfunc_uvm_report_enabled__49__severity), __Vfunc_uvm_report_enabled__49__id, __Vtask_uvm_report_enabled__52__Vfuncout);
                                __Vfunc_uvm_report_enabled__49__Vfuncout 
                                    = __Vtask_uvm_report_enabled__52__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__49__Vfuncout))) {
                    __Vtask_uvm_report_error__53__report_enabled_checked = 1U;
                    __Vtask_uvm_report_error__53__context_name = ""s;
                    __Vtask_uvm_report_error__53__line = 0x000001ffU;
                    __Vtask_uvm_report_error__53__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                    __Vtask_uvm_report_error__53__verbosity = 0U;
                    __Vtemp_2 = ([&]() {
                            VL_NULL_CHECK(this->__PVT__fields.at(
                                                                 (idx 
                                                                  - (IData)(1U))), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 511)
                                 ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__54__Vfuncout);
                        }(), __Vtask_get_name__54__Vfuncout);
                    __Vtemp_3 = ([&]() {
                            VL_NULL_CHECK(field, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 511)
                                 ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__55__Vfuncout);
                        }(), __Vtask_get_name__55__Vfuncout);
                    __Vtemp_4 = ([&]() {
                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__56__Vfuncout);
                        }(), __Vfunc_get_full_name__56__Vfuncout);
                    __Vtask_uvm_report_error__53__message 
                        = VL_SFORMATF_N_NX("Field %@ overlaps field %@ in virtual register \"%@\"",0,
                                           -1,&(__Vtemp_2),
                                           -1,&(__Vtemp_3),
                                           -1,&(__Vtemp_4)) ;
                    __Vtask_uvm_report_error__53__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__57__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__57__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__58__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__58__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__53__id, __Vtask_uvm_report_error__53__message, __Vtask_uvm_report_error__53__verbosity, __Vtask_uvm_report_error__53__filename, __Vtask_uvm_report_error__53__line, __Vtask_uvm_report_error__53__context_name, (IData)(__Vtask_uvm_report_error__53__report_enabled_checked));
                }
            }
        }
        if (VL_LTS_III(32, idx, (this->__PVT__fields.size() 
                                 - (IData)(1U)))) {
            if (((offset + ([&]() {
                                VL_NULL_CHECK(field, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 515)
                            ->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__60__Vfuncout);
                            }(), __Vtask_get_n_bits__60__Vfuncout)) 
                 > ([&]() {
                            VL_NULL_CHECK(this->__PVT__fields.at(
                                                                 ((IData)(1U) 
                                                                  + idx)), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 516)
                    ->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __Vtask_get_lsb_pos_in_register__61__Vfuncout);
                        }(), __Vtask_get_lsb_pos_in_register__61__Vfuncout))) {
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__62__id = "RegModel"s;
                                __Vfunc_uvm_report_enabled__62__severity = 2U;
                                __Vfunc_uvm_report_enabled__62__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__63__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__63__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__64__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__64__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__62__verbosity, (IData)(__Vfunc_uvm_report_enabled__62__severity), __Vfunc_uvm_report_enabled__62__id, __Vtask_uvm_report_enabled__65__Vfuncout);
                                __Vfunc_uvm_report_enabled__62__Vfuncout 
                                    = __Vtask_uvm_report_enabled__65__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__62__Vfuncout))) {
                    __Vtask_uvm_report_error__66__report_enabled_checked = 1U;
                    __Vtask_uvm_report_error__66__context_name = ""s;
                    __Vtask_uvm_report_error__66__line = 0x00000208U;
                    __Vtask_uvm_report_error__66__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                    __Vtask_uvm_report_error__66__verbosity = 0U;
                    __Vtemp_5 = ([&]() {
                            VL_NULL_CHECK(field, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 520)
                                 ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__67__Vfuncout);
                        }(), __Vtask_get_name__67__Vfuncout);
                    __Vtemp_6 = ([&]() {
                            VL_NULL_CHECK(this->__PVT__fields.at(
                                                                 ((IData)(1U) 
                                                                  + idx)), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 520)
                                 ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__68__Vfuncout);
                        }(), __Vtask_get_name__68__Vfuncout);
                    __Vtemp_7 = ([&]() {
                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__69__Vfuncout);
                        }(), __Vfunc_get_full_name__69__Vfuncout);
                    __Vtask_uvm_report_error__66__message 
                        = VL_SFORMATF_N_NX("Field %@ overlaps field %@ in virtual register \"%@\"",0,
                                           -1,&(__Vtemp_5),
                                           -1,&(__Vtemp_6),
                                           -1,&(__Vtemp_7)) ;
                    __Vtask_uvm_report_error__66__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__70__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__70__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__71__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__71__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__66__id, __Vtask_uvm_report_error__66__message, __Vtask_uvm_report_error__66__verbosity, __Vtask_uvm_report_error__66__filename, __Vtask_uvm_report_error__66__line, __Vtask_uvm_report_error__66__context_name, (IData)(__Vtask_uvm_report_error__66__report_enabled_checked));
                }
            }
        }
        __Vlabel0: ;
    }
}

VlCoroutine Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_XatomicX(Vpools_top__Syms* __restrict vlSymsp, CData/*0:0*/ on) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_XatomicX\n"); );
    // Locals
    IData/*31:0*/ __Vtask_try_get__74__Vfuncout;
    __Vtask_try_get__74__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    if (on) {
        co_await VL_NULL_CHECK(this->__PVT__atomic, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 527)->__VnoInFunc_get(vlProcess, vlSymsp, 1U);
    } else {
        VL_NULL_CHECK(this->__PVT__atomic, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 530)->__VnoInFunc_try_get(vlSymsp, 1U, __Vtask_try_get__74__Vfuncout);
        VL_NULL_CHECK(this->__PVT__atomic, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 531)->__VnoInFunc_put(vlSymsp, 1U);
    }
    co_return;}

void Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_reset(Vpools_top__Syms* __restrict vlSymsp, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_reset\n"); );
    // Locals
    IData/*31:0*/ __Vtask_try_get__76__Vfuncout;
    __Vtask_try_get__76__Vfuncout = 0;
    // Body
    VL_NULL_CHECK(this->__PVT__atomic, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 539)->__VnoInFunc_try_get(vlSymsp, 1U, __Vtask_try_get__76__Vfuncout);
    VL_NULL_CHECK(this->__PVT__atomic, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 540)->__VnoInFunc_put(vlSymsp, 1U);
}

void Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_full_name(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_full_name\n"); );
    // Locals
    std::string __Vfunc_get_name__78__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_block> __Vfunc_get_block__79__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_block> __Vtask_get_parent__80__Vfuncout;
    std::string __Vtask_get_full_name__81__Vfuncout;
    // Body
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_block> blk;
    {
        this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__78__Vfuncout);
        get_full_name__Vfuncrtn = __Vfunc_get_name__78__Vfuncout;
        this->__VnoInFunc_get_block(vlSymsp, __Vfunc_get_block__79__Vfuncout);
        blk = __Vfunc_get_block__79__Vfuncout;
        if ((VlNull{} == blk)) {
            goto __Vlabel0;
        }
        if ((VlNull{} == ([&]() {
                        VL_NULL_CHECK(blk, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 552)
                          ->__VnoInFunc_get_parent(vlSymsp, __Vtask_get_parent__80__Vfuncout);
                    }(), __Vtask_get_parent__80__Vfuncout))) {
            goto __Vlabel0;
        }
        get_full_name__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                                ([&]() {
                        VL_NULL_CHECK(this->__PVT__parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 554)
                                                                 ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__81__Vfuncout);
                    }(), __Vtask_get_full_name__81__Vfuncout), "."s), get_full_name__Vfuncrtn);
        __Vlabel0: ;
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_set_parent(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_block> parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_set_parent\n"); );
    // Body
    this->__PVT__parent = parent;
}

void Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_parent(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_parent\n"); );
    // Body
    get_parent__Vfuncrtn = this->__PVT__parent;
}

void Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_block(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_block> &get_block__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_block\n"); );
    // Body
    get_block__Vfuncrtn = this->__PVT__parent;
}

void Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_implement(Vpools_top__Syms* __restrict vlSymsp, QData/*63:0*/ n, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_mem> mem, QData/*63:0*/ offset, IData/*31:0*/ incr, CData/*0:0*/ &implement__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_implement\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__82__Vfuncout;
    __Vfunc_uvm_report_enabled__82__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__82__verbosity;
    __Vfunc_uvm_report_enabled__82__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__82__severity;
    __Vfunc_uvm_report_enabled__82__severity = 0;
    std::string __Vfunc_uvm_report_enabled__82__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__83__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__84__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__85__Vfuncout;
    __Vtask_uvm_report_enabled__85__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__86__id;
    std::string __Vtask_uvm_report_error__86__message;
    IData/*31:0*/ __Vtask_uvm_report_error__86__verbosity;
    __Vtask_uvm_report_error__86__verbosity = 0;
    std::string __Vtask_uvm_report_error__86__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__86__line;
    __Vtask_uvm_report_error__86__line = 0;
    std::string __Vtask_uvm_report_error__86__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__86__report_enabled_checked;
    __Vtask_uvm_report_error__86__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__87__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__88__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__89__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__91__Vfuncout;
    __Vfunc_uvm_report_enabled__91__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__91__verbosity;
    __Vfunc_uvm_report_enabled__91__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__91__severity;
    __Vfunc_uvm_report_enabled__91__severity = 0;
    std::string __Vfunc_uvm_report_enabled__91__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__92__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__93__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__94__Vfuncout;
    __Vtask_uvm_report_enabled__94__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__95__id;
    std::string __Vtask_uvm_report_error__95__message;
    IData/*31:0*/ __Vtask_uvm_report_error__95__verbosity;
    __Vtask_uvm_report_error__95__verbosity = 0;
    std::string __Vtask_uvm_report_error__95__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__95__line;
    __Vtask_uvm_report_error__95__line = 0;
    std::string __Vtask_uvm_report_error__95__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__95__report_enabled_checked;
    __Vtask_uvm_report_error__95__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__96__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__97__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__98__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__100__Vfuncout;
    __Vfunc_uvm_report_enabled__100__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__100__verbosity;
    __Vfunc_uvm_report_enabled__100__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__100__severity;
    __Vfunc_uvm_report_enabled__100__severity = 0;
    std::string __Vfunc_uvm_report_enabled__100__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__101__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__102__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__103__Vfuncout;
    __Vtask_uvm_report_enabled__103__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__104__id;
    std::string __Vtask_uvm_report_error__104__message;
    IData/*31:0*/ __Vtask_uvm_report_error__104__verbosity;
    __Vtask_uvm_report_error__104__verbosity = 0;
    std::string __Vtask_uvm_report_error__104__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__104__line;
    __Vtask_uvm_report_error__104__line = 0;
    std::string __Vtask_uvm_report_error__104__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__104__report_enabled_checked;
    __Vtask_uvm_report_error__104__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__105__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__106__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__107__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_block> __Vtask_get_block__109__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__110__Vfuncout;
    __Vfunc_uvm_report_enabled__110__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__110__verbosity;
    __Vfunc_uvm_report_enabled__110__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__110__severity;
    __Vfunc_uvm_report_enabled__110__severity = 0;
    std::string __Vfunc_uvm_report_enabled__110__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__111__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__112__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__113__Vfuncout;
    __Vtask_uvm_report_enabled__113__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__114__id;
    std::string __Vtask_uvm_report_error__114__message;
    IData/*31:0*/ __Vtask_uvm_report_error__114__verbosity;
    __Vtask_uvm_report_error__114__verbosity = 0;
    std::string __Vtask_uvm_report_error__114__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__114__line;
    __Vtask_uvm_report_error__114__line = 0;
    std::string __Vtask_uvm_report_error__114__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__114__report_enabled_checked;
    __Vtask_uvm_report_error__114__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__115__Vfuncout;
    std::string __Vtask_get_full_name__116__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__117__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__118__Vfuncout;
    IData/*31:0*/ __Vfunc_get_n_bytes__120__Vfuncout;
    __Vfunc_get_n_bytes__120__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bytes__121__Vfuncout;
    __Vtask_get_n_bytes__121__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__122__Vfuncout;
    __Vfunc_uvm_report_enabled__122__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__122__verbosity;
    __Vfunc_uvm_report_enabled__122__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__122__severity;
    __Vfunc_uvm_report_enabled__122__severity = 0;
    std::string __Vfunc_uvm_report_enabled__122__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__123__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__124__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__125__Vfuncout;
    __Vtask_uvm_report_enabled__125__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__126__id;
    std::string __Vtask_uvm_report_error__126__message;
    IData/*31:0*/ __Vtask_uvm_report_error__126__verbosity;
    __Vtask_uvm_report_error__126__verbosity = 0;
    std::string __Vtask_uvm_report_error__126__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__126__line;
    __Vtask_uvm_report_error__126__line = 0;
    std::string __Vtask_uvm_report_error__126__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__126__report_enabled_checked;
    __Vtask_uvm_report_error__126__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__127__Vfuncout;
    std::string __Vtask_get_full_name__128__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__129__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__130__Vfuncout;
    QData/*63:0*/ __Vtask_get_size__132__Vfuncout;
    __Vtask_get_size__132__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__133__Vfuncout;
    __Vfunc_uvm_report_enabled__133__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__133__verbosity;
    __Vfunc_uvm_report_enabled__133__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__133__severity;
    __Vfunc_uvm_report_enabled__133__severity = 0;
    std::string __Vfunc_uvm_report_enabled__133__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__134__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__135__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__136__Vfuncout;
    __Vtask_uvm_report_enabled__136__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__137__id;
    std::string __Vtask_uvm_report_error__137__message;
    IData/*31:0*/ __Vtask_uvm_report_error__137__verbosity;
    __Vtask_uvm_report_error__137__verbosity = 0;
    std::string __Vtask_uvm_report_error__137__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__137__line;
    __Vtask_uvm_report_error__137__line = 0;
    std::string __Vtask_uvm_report_error__137__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__137__report_enabled_checked;
    __Vtask_uvm_report_error__137__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__138__Vfuncout;
    std::string __Vtask_get_full_name__139__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__140__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__141__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_mem_region> __Vtask_reserve_region__143__Vfuncout;
    IData/*31:0*/ __Vtask_get_n_bytes__144__Vfuncout;
    __Vtask_get_n_bytes__144__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__145__Vfuncout;
    __Vfunc_uvm_report_enabled__145__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__145__verbosity;
    __Vfunc_uvm_report_enabled__145__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__145__severity;
    __Vfunc_uvm_report_enabled__145__severity = 0;
    std::string __Vfunc_uvm_report_enabled__145__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__146__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__147__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__148__Vfuncout;
    __Vtask_uvm_report_enabled__148__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__149__id;
    std::string __Vtask_uvm_report_error__149__message;
    IData/*31:0*/ __Vtask_uvm_report_error__149__verbosity;
    __Vtask_uvm_report_error__149__verbosity = 0;
    std::string __Vtask_uvm_report_error__149__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__149__line;
    __Vtask_uvm_report_error__149__line = 0;
    std::string __Vtask_uvm_report_error__149__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__149__report_enabled_checked;
    __Vtask_uvm_report_error__149__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__150__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__151__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__152__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__154__Vfuncout;
    __Vfunc_uvm_report_enabled__154__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__154__verbosity;
    __Vfunc_uvm_report_enabled__154__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__154__severity;
    __Vfunc_uvm_report_enabled__154__severity = 0;
    std::string __Vfunc_uvm_report_enabled__154__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__155__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__156__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__157__Vfuncout;
    __Vtask_uvm_report_enabled__157__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__158__id;
    std::string __Vtask_uvm_report_info__158__message;
    IData/*31:0*/ __Vtask_uvm_report_info__158__verbosity;
    __Vtask_uvm_report_info__158__verbosity = 0;
    std::string __Vtask_uvm_report_info__158__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__158__line;
    __Vtask_uvm_report_info__158__line = 0;
    std::string __Vtask_uvm_report_info__158__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__158__report_enabled_checked;
    __Vtask_uvm_report_info__158__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__159__Vfuncout;
    std::string __Vtask_get_full_name__160__Vfuncout;
    std::string __Vtask_get_full_name__161__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__162__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__163__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    std::string __Vtemp_6;
    std::string __Vtemp_7;
    std::string __Vtemp_8;
    std::string __Vtemp_9;
    std::string __Vtemp_10;
    std::string __Vtemp_11;
    std::string __Vtemp_12;
    std::string __Vtemp_13;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ unnamedblk402__DOT__min_incr;
    unnamedblk402__DOT__min_incr = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_mem_region> region;
    {
        if ((1ULL > n)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__82__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__82__severity = 2U;
                            __Vfunc_uvm_report_enabled__82__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__83__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__83__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__84__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__84__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__82__verbosity, (IData)(__Vfunc_uvm_report_enabled__82__severity), __Vfunc_uvm_report_enabled__82__id, __Vtask_uvm_report_enabled__85__Vfuncout);
                            __Vfunc_uvm_report_enabled__82__Vfuncout 
                                = __Vtask_uvm_report_enabled__85__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__82__Vfuncout))) {
                __Vtask_uvm_report_error__86__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__86__context_name = ""s;
                __Vtask_uvm_report_error__86__line = 0x00000243U;
                __Vtask_uvm_report_error__86__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__86__verbosity = 0U;
                __Vtemp_1 = ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__87__Vfuncout);
                    }(), __Vfunc_get_full_name__87__Vfuncout);
                __Vtask_uvm_report_error__86__message 
                    = VL_SFORMATF_N_NX("Attempting to implement virtual register \"%@\" with a subscript less than one doesn't make sense",0,
                                       -1,&(__Vtemp_1)) ;
                __Vtask_uvm_report_error__86__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__88__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__88__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__89__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__89__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__86__id, __Vtask_uvm_report_error__86__message, __Vtask_uvm_report_error__86__verbosity, __Vtask_uvm_report_error__86__filename, __Vtask_uvm_report_error__86__line, __Vtask_uvm_report_error__86__context_name, (IData)(__Vtask_uvm_report_error__86__report_enabled_checked));
            }
            implement__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if ((VlNull{} == mem)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__91__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__91__severity = 2U;
                            __Vfunc_uvm_report_enabled__91__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__92__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__92__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__93__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__93__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__91__verbosity, (IData)(__Vfunc_uvm_report_enabled__91__severity), __Vfunc_uvm_report_enabled__91__id, __Vtask_uvm_report_enabled__94__Vfuncout);
                            __Vfunc_uvm_report_enabled__91__Vfuncout 
                                = __Vtask_uvm_report_enabled__94__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__91__Vfuncout))) {
                __Vtask_uvm_report_error__95__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__95__context_name = ""s;
                __Vtask_uvm_report_error__95__line = 0x00000248U;
                __Vtask_uvm_report_error__95__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__95__verbosity = 0U;
                __Vtemp_2 = ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__96__Vfuncout);
                    }(), __Vfunc_get_full_name__96__Vfuncout);
                __Vtask_uvm_report_error__95__message 
                    = VL_SFORMATF_N_NX("Attempting to implement virtual register \"%@\" using a NULL uvm_mem reference",0,
                                       -1,&(__Vtemp_2)) ;
                __Vtask_uvm_report_error__95__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__97__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__97__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__98__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__98__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__95__id, __Vtask_uvm_report_error__95__message, __Vtask_uvm_report_error__95__verbosity, __Vtask_uvm_report_error__95__filename, __Vtask_uvm_report_error__95__line, __Vtask_uvm_report_error__95__context_name, (IData)(__Vtask_uvm_report_error__95__report_enabled_checked));
            }
            implement__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if (this->__PVT__is_static) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__100__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__100__severity = 2U;
                            __Vfunc_uvm_report_enabled__100__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__101__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__101__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__102__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__102__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__100__verbosity, (IData)(__Vfunc_uvm_report_enabled__100__severity), __Vfunc_uvm_report_enabled__100__id, __Vtask_uvm_report_enabled__103__Vfuncout);
                            __Vfunc_uvm_report_enabled__100__Vfuncout 
                                = __Vtask_uvm_report_enabled__103__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__100__Vfuncout))) {
                __Vtask_uvm_report_error__104__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__104__context_name = ""s;
                __Vtask_uvm_report_error__104__line = 0x0000024dU;
                __Vtask_uvm_report_error__104__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__104__verbosity = 0U;
                __Vtemp_3 = ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__105__Vfuncout);
                    }(), __Vfunc_get_full_name__105__Vfuncout);
                __Vtask_uvm_report_error__104__message 
                    = VL_SFORMATF_N_NX("Virtual register \"%@\" is static and cannot be dynamically implemented",0,
                                       -1,&(__Vtemp_3)) ;
                __Vtask_uvm_report_error__104__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__106__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__106__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__107__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__107__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__104__id, __Vtask_uvm_report_error__104__message, __Vtask_uvm_report_error__104__verbosity, __Vtask_uvm_report_error__104__filename, __Vtask_uvm_report_error__104__line, __Vtask_uvm_report_error__104__context_name, (IData)(__Vtask_uvm_report_error__104__report_enabled_checked));
            }
            implement__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if ((([&]() {
                        VL_NULL_CHECK(mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 593)
              ->__VnoInFunc_get_block(vlSymsp, __Vtask_get_block__109__Vfuncout);
                    }(), __Vtask_get_block__109__Vfuncout) 
             != this->__PVT__parent)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__110__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__110__severity = 2U;
                            __Vfunc_uvm_report_enabled__110__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__111__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__111__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__112__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__112__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__110__verbosity, (IData)(__Vfunc_uvm_report_enabled__110__severity), __Vfunc_uvm_report_enabled__110__id, __Vtask_uvm_report_enabled__113__Vfuncout);
                            __Vfunc_uvm_report_enabled__110__Vfuncout 
                                = __Vtask_uvm_report_enabled__113__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__110__Vfuncout))) {
                __Vtask_uvm_report_error__114__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__114__context_name = ""s;
                __Vtask_uvm_report_error__114__line = 0x00000254U;
                __Vtask_uvm_report_error__114__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__114__verbosity = 0U;
                __Vtemp_4 = ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__115__Vfuncout);
                    }(), __Vfunc_get_full_name__115__Vfuncout);
                __Vtemp_5 = ([&]() {
                        VL_NULL_CHECK(mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 596)
                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__116__Vfuncout);
                    }(), __Vtask_get_full_name__116__Vfuncout);
                __Vtask_uvm_report_error__114__message 
                    = VL_SFORMATF_N_NX("Attempting to implement virtual register \"%@\" on memory \"%@\" in a different block",0,
                                       -1,&(__Vtemp_4),
                                       -1,&(__Vtemp_5)) ;
                __Vtask_uvm_report_error__114__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__117__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__117__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__118__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__118__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__114__id, __Vtask_uvm_report_error__114__message, __Vtask_uvm_report_error__114__verbosity, __Vtask_uvm_report_error__114__filename, __Vtask_uvm_report_error__114__line, __Vtask_uvm_report_error__114__context_name, (IData)(__Vtask_uvm_report_error__114__report_enabled_checked));
            }
            implement__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        unnamedblk402__DOT__min_incr = ((IData)(1U) 
                                        + VL_DIV_III(32, 
                                                     (([&]() {
                            this->__VnoInFunc_get_n_bytes(vlSymsp, __Vfunc_get_n_bytes__120__Vfuncout);
                        }(), __Vfunc_get_n_bytes__120__Vfuncout) 
                                                      - (IData)(1U)), 
                                                     ([&]() {
                        VL_NULL_CHECK(mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 601)
                                                      ->__VnoInFunc_get_n_bytes(vlSymsp, __Vtask_get_n_bytes__121__Vfuncout);
                    }(), __Vtask_get_n_bytes__121__Vfuncout)));
        if ((0U == incr)) {
            incr = unnamedblk402__DOT__min_incr;
        }
        if ((unnamedblk402__DOT__min_incr > incr)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__122__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__122__severity = 2U;
                            __Vfunc_uvm_report_enabled__122__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__123__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__123__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__124__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__124__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__122__verbosity, (IData)(__Vfunc_uvm_report_enabled__122__severity), __Vfunc_uvm_report_enabled__122__id, __Vtask_uvm_report_enabled__125__Vfuncout);
                            __Vfunc_uvm_report_enabled__122__Vfuncout 
                                = __Vtask_uvm_report_enabled__125__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__122__Vfuncout))) {
                __Vtask_uvm_report_error__126__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__126__context_name = ""s;
                __Vtask_uvm_report_error__126__line = 0x0000025eU;
                __Vtask_uvm_report_error__126__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__126__verbosity = 0U;
                __Vtemp_6 = ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__127__Vfuncout);
                    }(), __Vfunc_get_full_name__127__Vfuncout);
                __Vtemp_7 = ([&]() {
                        VL_NULL_CHECK(mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 606)
                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__128__Vfuncout);
                    }(), __Vtask_get_full_name__128__Vfuncout);
                __Vtask_uvm_report_error__126__message 
                    = VL_SFORMATF_N_NX("Virtual register \"%@\" increment is too small (%0#): Each virtual register requires at least %0d locations in memory \"%@\".",0,
                                       -1,&(__Vtemp_6),
                                       32,incr,32,unnamedblk402__DOT__min_incr,
                                       -1,&(__Vtemp_7)) ;
                __Vtask_uvm_report_error__126__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__129__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__129__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__130__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__130__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__126__id, __Vtask_uvm_report_error__126__message, __Vtask_uvm_report_error__126__verbosity, __Vtask_uvm_report_error__126__filename, __Vtask_uvm_report_error__126__line, __Vtask_uvm_report_error__126__context_name, (IData)(__Vtask_uvm_report_error__126__report_enabled_checked));
            }
            implement__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if (((offset + (n * (QData)((IData)(incr)))) 
             > ([&]() {
                        VL_NULL_CHECK(mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 612)
                ->__VnoInFunc_get_size(vlSymsp, __Vtask_get_size__132__Vfuncout);
                    }(), __Vtask_get_size__132__Vfuncout))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__133__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__133__severity = 2U;
                            __Vfunc_uvm_report_enabled__133__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__134__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__134__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__135__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__135__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__133__verbosity, (IData)(__Vfunc_uvm_report_enabled__133__severity), __Vfunc_uvm_report_enabled__133__id, __Vtask_uvm_report_enabled__136__Vfuncout);
                            __Vfunc_uvm_report_enabled__133__Vfuncout 
                                = __Vtask_uvm_report_enabled__136__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__133__Vfuncout))) {
                __Vtask_uvm_report_error__137__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__137__context_name = ""s;
                __Vtask_uvm_report_error__137__line = 0x00000265U;
                __Vtask_uvm_report_error__137__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__137__verbosity = 0U;
                __Vtemp_8 = ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__138__Vfuncout);
                    }(), __Vfunc_get_full_name__138__Vfuncout);
                __Vtemp_9 = ([&]() {
                        VL_NULL_CHECK(mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 613)
                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__139__Vfuncout);
                    }(), __Vtask_get_full_name__139__Vfuncout);
                __Vtask_uvm_report_error__137__message 
                    = VL_SFORMATF_N_NX("Given Offset for Virtual register \"%@[%0#]\" is too big for memory %@@'h%0x",0,
                                       -1,&(__Vtemp_8),
                                       64,n,-1,&(__Vtemp_9),
                                       64,offset) ;
                __Vtask_uvm_report_error__137__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__140__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__140__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__141__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__141__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__137__id, __Vtask_uvm_report_error__137__message, __Vtask_uvm_report_error__137__verbosity, __Vtask_uvm_report_error__137__filename, __Vtask_uvm_report_error__137__line, __Vtask_uvm_report_error__137__context_name, (IData)(__Vtask_uvm_report_error__137__report_enabled_checked));
            }
            implement__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(VL_NULL_CHECK(mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 617)
                      ->__PVT__mam, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 617)->__VnoInFunc_reserve_region(vlSymsp, offset, (IData)(
                                                                                ((n 
                                                                                * (QData)((IData)(incr))) 
                                                                                * 
                                                                                VL_EXTEND_QI(64,32, 
                                                                                ([&]() {
                                VL_NULL_CHECK(mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 617)
                                                                                ->__VnoInFunc_get_n_bytes(vlSymsp, __Vtask_get_n_bytes__144__Vfuncout);
                            }(), __Vtask_get_n_bytes__144__Vfuncout)))), ""s, 0U, __Vtask_reserve_region__143__Vfuncout);
        region = __Vtask_reserve_region__143__Vfuncout;
        if ((VlNull{} == region)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__145__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__145__severity = 2U;
                            __Vfunc_uvm_report_enabled__145__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__146__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__146__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__147__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__147__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__145__verbosity, (IData)(__Vfunc_uvm_report_enabled__145__severity), __Vfunc_uvm_report_enabled__145__id, __Vtask_uvm_report_enabled__148__Vfuncout);
                            __Vfunc_uvm_report_enabled__145__Vfuncout 
                                = __Vtask_uvm_report_enabled__148__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__145__Vfuncout))) {
                __Vtask_uvm_report_error__149__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__149__context_name = ""s;
                __Vtask_uvm_report_error__149__line = 0x0000026cU;
                __Vtask_uvm_report_error__149__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__149__verbosity = 0U;
                __Vtemp_10 = ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__150__Vfuncout);
                    }(), __Vfunc_get_full_name__150__Vfuncout);
                __Vtask_uvm_report_error__149__message 
                    = VL_SFORMATF_N_NX("Could not allocate a memory region for virtual register \"%@\"",0,
                                       -1,&(__Vtemp_10)) ;
                __Vtask_uvm_report_error__149__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__151__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__151__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__152__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__152__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__149__id, __Vtask_uvm_report_error__149__message, __Vtask_uvm_report_error__149__verbosity, __Vtask_uvm_report_error__149__filename, __Vtask_uvm_report_error__149__line, __Vtask_uvm_report_error__149__context_name, (IData)(__Vtask_uvm_report_error__149__report_enabled_checked));
            }
            implement__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if ((VlNull{} != this->__PVT__mem)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__154__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__154__severity = 0U;
                            __Vfunc_uvm_report_enabled__154__verbosity = 0x000000c8U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__155__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__155__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__156__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__156__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__154__verbosity, (IData)(__Vfunc_uvm_report_enabled__154__severity), __Vfunc_uvm_report_enabled__154__id, __Vtask_uvm_report_enabled__157__Vfuncout);
                            __Vfunc_uvm_report_enabled__154__Vfuncout 
                                = __Vtask_uvm_report_enabled__157__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__154__Vfuncout))) {
                __Vtask_uvm_report_info__158__report_enabled_checked = 1U;
                __Vtask_uvm_report_info__158__context_name = ""s;
                __Vtask_uvm_report_info__158__line = 0x00000275U;
                __Vtask_uvm_report_info__158__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_info__158__verbosity = 0x000000c8U;
                __Vtemp_11 = ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__159__Vfuncout);
                    }(), __Vfunc_get_full_name__159__Vfuncout);
                __Vtemp_12 = ([&]() {
                        VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 629)
                              ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__160__Vfuncout);
                    }(), __Vtask_get_full_name__160__Vfuncout);
                __Vtemp_13 = ([&]() {
                        VL_NULL_CHECK(mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 629)
                              ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__161__Vfuncout);
                    }(), __Vtask_get_full_name__161__Vfuncout);
                __Vtask_uvm_report_info__158__message 
                    = VL_SFORMATF_N_NX("Virtual register \"%@\" is being moved re-implemented from %@@'h%0x to %@@'h%0x",0,
                                       -1,&(__Vtemp_11),
                                       -1,&(__Vtemp_12),
                                       64,this->__PVT__offset,
                                       -1,&(__Vtemp_13),
                                       64,offset) ;
                __Vtask_uvm_report_info__158__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__162__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__162__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__163__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__163__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__158__id, __Vtask_uvm_report_info__158__message, __Vtask_uvm_report_info__158__verbosity, __Vtask_uvm_report_info__158__filename, __Vtask_uvm_report_info__158__line, __Vtask_uvm_report_info__158__context_name, (IData)(__Vtask_uvm_report_info__158__report_enabled_checked));
            }
            this->__VnoInFunc_release_region(vlSymsp);
        }
        this->__PVT__region = region;
        this->__PVT__mem = mem;
        this->__PVT__size = n;
        this->__PVT__offset = offset;
        this->__PVT__incr = incr;
        VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 638)->__VnoInFunc_Xadd_vregX(vlSymsp, 
                                                                                VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_vreg>{this});
        implement__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_allocate(Vpools_top__Syms* __restrict vlSymsp, QData/*63:0*/ n, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_mem_mam> mam, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_mem_mam_policy> alloc, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_mem_region> &allocate__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_allocate\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__167__Vfuncout;
    __Vfunc_uvm_report_enabled__167__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__167__verbosity;
    __Vfunc_uvm_report_enabled__167__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__167__severity;
    __Vfunc_uvm_report_enabled__167__severity = 0;
    std::string __Vfunc_uvm_report_enabled__167__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__168__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__169__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__170__Vfuncout;
    __Vtask_uvm_report_enabled__170__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__171__id;
    std::string __Vtask_uvm_report_error__171__message;
    IData/*31:0*/ __Vtask_uvm_report_error__171__verbosity;
    __Vtask_uvm_report_error__171__verbosity = 0;
    std::string __Vtask_uvm_report_error__171__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__171__line;
    __Vtask_uvm_report_error__171__line = 0;
    std::string __Vtask_uvm_report_error__171__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__171__report_enabled_checked;
    __Vtask_uvm_report_error__171__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__172__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__173__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__174__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__176__Vfuncout;
    __Vfunc_uvm_report_enabled__176__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__176__verbosity;
    __Vfunc_uvm_report_enabled__176__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__176__severity;
    __Vfunc_uvm_report_enabled__176__severity = 0;
    std::string __Vfunc_uvm_report_enabled__176__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__177__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__178__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__179__Vfuncout;
    __Vtask_uvm_report_enabled__179__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__180__id;
    std::string __Vtask_uvm_report_error__180__message;
    IData/*31:0*/ __Vtask_uvm_report_error__180__verbosity;
    __Vtask_uvm_report_error__180__verbosity = 0;
    std::string __Vtask_uvm_report_error__180__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__180__line;
    __Vtask_uvm_report_error__180__line = 0;
    std::string __Vtask_uvm_report_error__180__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__180__report_enabled_checked;
    __Vtask_uvm_report_error__180__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__181__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__182__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__183__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__185__Vfuncout;
    __Vfunc_uvm_report_enabled__185__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__185__verbosity;
    __Vfunc_uvm_report_enabled__185__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__185__severity;
    __Vfunc_uvm_report_enabled__185__severity = 0;
    std::string __Vfunc_uvm_report_enabled__185__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__186__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__187__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__188__Vfuncout;
    __Vtask_uvm_report_enabled__188__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__189__id;
    std::string __Vtask_uvm_report_error__189__message;
    IData/*31:0*/ __Vtask_uvm_report_error__189__verbosity;
    __Vtask_uvm_report_error__189__verbosity = 0;
    std::string __Vtask_uvm_report_error__189__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__189__line;
    __Vtask_uvm_report_error__189__line = 0;
    std::string __Vtask_uvm_report_error__189__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__189__report_enabled_checked;
    __Vtask_uvm_report_error__189__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__190__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__191__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__192__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_mem> __Vtask_get_memory__194__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_block> __Vtask_get_block__195__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__196__Vfuncout;
    __Vfunc_uvm_report_enabled__196__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__196__verbosity;
    __Vfunc_uvm_report_enabled__196__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__196__severity;
    __Vfunc_uvm_report_enabled__196__severity = 0;
    std::string __Vfunc_uvm_report_enabled__196__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__197__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__198__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__199__Vfuncout;
    __Vtask_uvm_report_enabled__199__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__200__id;
    std::string __Vtask_uvm_report_error__200__message;
    IData/*31:0*/ __Vtask_uvm_report_error__200__verbosity;
    __Vtask_uvm_report_error__200__verbosity = 0;
    std::string __Vtask_uvm_report_error__200__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__200__line;
    __Vtask_uvm_report_error__200__line = 0;
    std::string __Vtask_uvm_report_error__200__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__200__report_enabled_checked;
    __Vtask_uvm_report_error__200__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__201__Vfuncout;
    std::string __Vtask_get_full_name__202__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__203__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__204__Vfuncout;
    IData/*31:0*/ __Vfunc_get_n_bytes__206__Vfuncout;
    __Vfunc_get_n_bytes__206__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bytes__207__Vfuncout;
    __Vtask_get_n_bytes__207__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__208__Vfuncout;
    __Vfunc_uvm_report_enabled__208__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__208__verbosity;
    __Vfunc_uvm_report_enabled__208__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__208__severity;
    __Vfunc_uvm_report_enabled__208__severity = 0;
    std::string __Vfunc_uvm_report_enabled__208__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__209__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__210__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__211__Vfuncout;
    __Vtask_uvm_report_enabled__211__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__212__id;
    std::string __Vtask_uvm_report_error__212__message;
    IData/*31:0*/ __Vtask_uvm_report_error__212__verbosity;
    __Vtask_uvm_report_error__212__verbosity = 0;
    std::string __Vtask_uvm_report_error__212__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__212__line;
    __Vtask_uvm_report_error__212__line = 0;
    std::string __Vtask_uvm_report_error__212__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__212__report_enabled_checked;
    __Vtask_uvm_report_error__212__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__213__Vfuncout;
    std::string __Vtask_get_full_name__214__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__215__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__216__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_mem_region> __Vtask_request_region__218__Vfuncout;
    IData/*31:0*/ __Vtask_get_n_bytes__219__Vfuncout;
    __Vtask_get_n_bytes__219__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__220__Vfuncout;
    __Vfunc_uvm_report_enabled__220__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__220__verbosity;
    __Vfunc_uvm_report_enabled__220__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__220__severity;
    __Vfunc_uvm_report_enabled__220__severity = 0;
    std::string __Vfunc_uvm_report_enabled__220__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__221__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__222__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__223__Vfuncout;
    __Vtask_uvm_report_enabled__223__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__224__id;
    std::string __Vtask_uvm_report_error__224__message;
    IData/*31:0*/ __Vtask_uvm_report_error__224__verbosity;
    __Vtask_uvm_report_error__224__verbosity = 0;
    std::string __Vtask_uvm_report_error__224__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__224__line;
    __Vtask_uvm_report_error__224__line = 0;
    std::string __Vtask_uvm_report_error__224__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__224__report_enabled_checked;
    __Vtask_uvm_report_error__224__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__225__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__226__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__227__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__229__Vfuncout;
    __Vfunc_uvm_report_enabled__229__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__229__verbosity;
    __Vfunc_uvm_report_enabled__229__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__229__severity;
    __Vfunc_uvm_report_enabled__229__severity = 0;
    std::string __Vfunc_uvm_report_enabled__229__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__230__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__231__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__232__Vfuncout;
    __Vtask_uvm_report_enabled__232__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__233__id;
    std::string __Vtask_uvm_report_info__233__message;
    IData/*31:0*/ __Vtask_uvm_report_info__233__verbosity;
    __Vtask_uvm_report_info__233__verbosity = 0;
    std::string __Vtask_uvm_report_info__233__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__233__line;
    __Vtask_uvm_report_info__233__line = 0;
    std::string __Vtask_uvm_report_info__233__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__233__report_enabled_checked;
    __Vtask_uvm_report_info__233__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__234__Vfuncout;
    std::string __Vtask_get_full_name__235__Vfuncout;
    std::string __Vtask_get_full_name__236__Vfuncout;
    QData/*63:0*/ __Vtask_get_start_offset__237__Vfuncout;
    __Vtask_get_start_offset__237__Vfuncout = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__238__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__239__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_mem> __Vtask_get_memory__242__Vfuncout;
    QData/*63:0*/ __Vtask_get_start_offset__243__Vfuncout;
    __Vtask_get_start_offset__243__Vfuncout = 0;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    std::string __Vtemp_6;
    std::string __Vtemp_7;
    std::string __Vtemp_8;
    std::string __Vtemp_9;
    std::string __Vtemp_10;
    std::string __Vtemp_11;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ unnamedblk403__DOT__min_incr;
    unnamedblk403__DOT__min_incr = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_mem> mem;
    {
        if ((1ULL > n)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__167__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__167__severity = 2U;
                            __Vfunc_uvm_report_enabled__167__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__168__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__168__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__169__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__169__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__167__verbosity, (IData)(__Vfunc_uvm_report_enabled__167__severity), __Vfunc_uvm_report_enabled__167__id, __Vtask_uvm_report_enabled__170__Vfuncout);
                            __Vfunc_uvm_report_enabled__167__Vfuncout 
                                = __Vtask_uvm_report_enabled__170__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__167__Vfuncout))) {
                __Vtask_uvm_report_error__171__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__171__context_name = ""s;
                __Vtask_uvm_report_error__171__line = 0x0000028cU;
                __Vtask_uvm_report_error__171__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__171__verbosity = 0U;
                __Vtemp_1 = ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__172__Vfuncout);
                    }(), __Vfunc_get_full_name__172__Vfuncout);
                __Vtask_uvm_report_error__171__message 
                    = VL_SFORMATF_N_NX("Attempting to implement virtual register \"%@\" with a subscript less than one doesn't make sense",0,
                                       -1,&(__Vtemp_1)) ;
                __Vtask_uvm_report_error__171__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__173__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__173__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__174__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__174__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__171__id, __Vtask_uvm_report_error__171__message, __Vtask_uvm_report_error__171__verbosity, __Vtask_uvm_report_error__171__filename, __Vtask_uvm_report_error__171__line, __Vtask_uvm_report_error__171__context_name, (IData)(__Vtask_uvm_report_error__171__report_enabled_checked));
            }
            allocate__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        if ((VlNull{} == mam)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__176__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__176__severity = 2U;
                            __Vfunc_uvm_report_enabled__176__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__177__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__177__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__178__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__178__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__176__verbosity, (IData)(__Vfunc_uvm_report_enabled__176__severity), __Vfunc_uvm_report_enabled__176__id, __Vtask_uvm_report_enabled__179__Vfuncout);
                            __Vfunc_uvm_report_enabled__176__Vfuncout 
                                = __Vtask_uvm_report_enabled__179__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__176__Vfuncout))) {
                __Vtask_uvm_report_error__180__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__180__context_name = ""s;
                __Vtask_uvm_report_error__180__line = 0x00000291U;
                __Vtask_uvm_report_error__180__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__180__verbosity = 0U;
                __Vtemp_2 = ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__181__Vfuncout);
                    }(), __Vfunc_get_full_name__181__Vfuncout);
                __Vtask_uvm_report_error__180__message 
                    = VL_SFORMATF_N_NX("Attempting to implement virtual register \"%@\" using a NULL uvm_mem_mam reference",0,
                                       -1,&(__Vtemp_2)) ;
                __Vtask_uvm_report_error__180__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__182__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__182__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__183__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__183__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__180__id, __Vtask_uvm_report_error__180__message, __Vtask_uvm_report_error__180__verbosity, __Vtask_uvm_report_error__180__filename, __Vtask_uvm_report_error__180__line, __Vtask_uvm_report_error__180__context_name, (IData)(__Vtask_uvm_report_error__180__report_enabled_checked));
            }
            allocate__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        if (this->__PVT__is_static) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__185__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__185__severity = 2U;
                            __Vfunc_uvm_report_enabled__185__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__186__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__186__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__187__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__187__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__185__verbosity, (IData)(__Vfunc_uvm_report_enabled__185__severity), __Vfunc_uvm_report_enabled__185__id, __Vtask_uvm_report_enabled__188__Vfuncout);
                            __Vfunc_uvm_report_enabled__185__Vfuncout 
                                = __Vtask_uvm_report_enabled__188__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__185__Vfuncout))) {
                __Vtask_uvm_report_error__189__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__189__context_name = ""s;
                __Vtask_uvm_report_error__189__line = 0x00000296U;
                __Vtask_uvm_report_error__189__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__189__verbosity = 0U;
                __Vtemp_3 = ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__190__Vfuncout);
                    }(), __Vfunc_get_full_name__190__Vfuncout);
                __Vtask_uvm_report_error__189__message 
                    = VL_SFORMATF_N_NX("Virtual register \"%@\" is static and cannot be dynamically allocated",0,
                                       -1,&(__Vtemp_3)) ;
                __Vtask_uvm_report_error__189__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__191__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__191__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__192__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__192__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__189__id, __Vtask_uvm_report_error__189__message, __Vtask_uvm_report_error__189__verbosity, __Vtask_uvm_report_error__189__filename, __Vtask_uvm_report_error__189__line, __Vtask_uvm_report_error__189__context_name, (IData)(__Vtask_uvm_report_error__189__report_enabled_checked));
            }
            allocate__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        VL_NULL_CHECK(mam, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 666)->__VnoInFunc_get_memory(vlSymsp, __Vtask_get_memory__194__Vfuncout);
        mem = __Vtask_get_memory__194__Vfuncout;
        if ((([&]() {
                        VL_NULL_CHECK(mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 667)
              ->__VnoInFunc_get_block(vlSymsp, __Vtask_get_block__195__Vfuncout);
                    }(), __Vtask_get_block__195__Vfuncout) 
             != this->__PVT__parent)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__196__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__196__severity = 2U;
                            __Vfunc_uvm_report_enabled__196__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__197__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__197__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__198__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__198__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__196__verbosity, (IData)(__Vfunc_uvm_report_enabled__196__severity), __Vfunc_uvm_report_enabled__196__id, __Vtask_uvm_report_enabled__199__Vfuncout);
                            __Vfunc_uvm_report_enabled__196__Vfuncout 
                                = __Vtask_uvm_report_enabled__199__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__196__Vfuncout))) {
                __Vtask_uvm_report_error__200__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__200__context_name = ""s;
                __Vtask_uvm_report_error__200__line = 0x0000029eU;
                __Vtask_uvm_report_error__200__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__200__verbosity = 0U;
                __Vtemp_4 = ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__201__Vfuncout);
                    }(), __Vfunc_get_full_name__201__Vfuncout);
                __Vtemp_5 = ([&]() {
                        VL_NULL_CHECK(mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 670)
                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__202__Vfuncout);
                    }(), __Vtask_get_full_name__202__Vfuncout);
                __Vtask_uvm_report_error__200__message 
                    = VL_SFORMATF_N_NX("Attempting to allocate virtual register \"%@\" on memory \"%@\" in a different block",0,
                                       -1,&(__Vtemp_4),
                                       -1,&(__Vtemp_5)) ;
                __Vtask_uvm_report_error__200__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__203__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__203__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__204__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__204__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__200__id, __Vtask_uvm_report_error__200__message, __Vtask_uvm_report_error__200__verbosity, __Vtask_uvm_report_error__200__filename, __Vtask_uvm_report_error__200__line, __Vtask_uvm_report_error__200__context_name, (IData)(__Vtask_uvm_report_error__200__report_enabled_checked));
            }
            allocate__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        unnamedblk403__DOT__min_incr = ((IData)(1U) 
                                        + VL_DIV_III(32, 
                                                     (([&]() {
                            this->__VnoInFunc_get_n_bytes(vlSymsp, __Vfunc_get_n_bytes__206__Vfuncout);
                        }(), __Vfunc_get_n_bytes__206__Vfuncout) 
                                                      - (IData)(1U)), 
                                                     ([&]() {
                        VL_NULL_CHECK(mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 675)
                                                      ->__VnoInFunc_get_n_bytes(vlSymsp, __Vtask_get_n_bytes__207__Vfuncout);
                    }(), __Vtask_get_n_bytes__207__Vfuncout)));
        if ((0U == this->__PVT__incr)) {
            this->__PVT__incr = unnamedblk403__DOT__min_incr;
        }
        if ((unnamedblk403__DOT__min_incr < this->__PVT__incr)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__208__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__208__severity = 2U;
                            __Vfunc_uvm_report_enabled__208__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__209__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__209__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__210__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__210__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__208__verbosity, (IData)(__Vfunc_uvm_report_enabled__208__severity), __Vfunc_uvm_report_enabled__208__id, __Vtask_uvm_report_enabled__211__Vfuncout);
                            __Vfunc_uvm_report_enabled__208__Vfuncout 
                                = __Vtask_uvm_report_enabled__211__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__208__Vfuncout))) {
                __Vtask_uvm_report_error__212__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__212__context_name = ""s;
                __Vtask_uvm_report_error__212__line = 0x000002a8U;
                __Vtask_uvm_report_error__212__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__212__verbosity = 0U;
                __Vtemp_6 = ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__213__Vfuncout);
                    }(), __Vfunc_get_full_name__213__Vfuncout);
                __Vtemp_7 = ([&]() {
                        VL_NULL_CHECK(mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 680)
                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__214__Vfuncout);
                    }(), __Vtask_get_full_name__214__Vfuncout);
                __Vtask_uvm_report_error__212__message 
                    = VL_SFORMATF_N_NX("Virtual register \"%@\" increment is too small (%0#): Each virtual register requires at least %0d locations in memory \"%@\".",0,
                                       -1,&(__Vtemp_6),
                                       32,this->__PVT__incr,
                                       32,unnamedblk403__DOT__min_incr,
                                       -1,&(__Vtemp_7)) ;
                __Vtask_uvm_report_error__212__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__215__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__215__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__216__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__216__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__212__id, __Vtask_uvm_report_error__212__message, __Vtask_uvm_report_error__212__verbosity, __Vtask_uvm_report_error__212__filename, __Vtask_uvm_report_error__212__line, __Vtask_uvm_report_error__212__context_name, (IData)(__Vtask_uvm_report_error__212__report_enabled_checked));
            }
            allocate__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        VL_NULL_CHECK(mam, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 686)->__VnoInFunc_request_region(vlSymsp, (IData)(
                                                                                ((n 
                                                                                * (QData)((IData)(this->__PVT__incr))) 
                                                                                * 
                                                                                VL_EXTEND_QI(64,32, 
                                                                                ([&]() {
                                VL_NULL_CHECK(mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 686)
                                                                                ->__VnoInFunc_get_n_bytes(vlSymsp, __Vtask_get_n_bytes__219__Vfuncout);
                            }(), __Vtask_get_n_bytes__219__Vfuncout)))), alloc, ""s, 0U, __Vtask_request_region__218__Vfuncout);
        allocate__Vfuncrtn = __Vtask_request_region__218__Vfuncout;
        if ((VlNull{} == allocate__Vfuncrtn)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__220__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__220__severity = 2U;
                            __Vfunc_uvm_report_enabled__220__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__221__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__221__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__222__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__222__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__220__verbosity, (IData)(__Vfunc_uvm_report_enabled__220__severity), __Vfunc_uvm_report_enabled__220__id, __Vtask_uvm_report_enabled__223__Vfuncout);
                            __Vfunc_uvm_report_enabled__220__Vfuncout 
                                = __Vtask_uvm_report_enabled__223__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__220__Vfuncout))) {
                __Vtask_uvm_report_error__224__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__224__context_name = ""s;
                __Vtask_uvm_report_error__224__line = 0x000002b0U;
                __Vtask_uvm_report_error__224__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__224__verbosity = 0U;
                __Vtemp_8 = ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__225__Vfuncout);
                    }(), __Vfunc_get_full_name__225__Vfuncout);
                __Vtask_uvm_report_error__224__message 
                    = VL_SFORMATF_N_NX("Could not allocate a memory region for virtual register \"%@\"",0,
                                       -1,&(__Vtemp_8)) ;
                __Vtask_uvm_report_error__224__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__226__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__226__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__227__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__227__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__224__id, __Vtask_uvm_report_error__224__message, __Vtask_uvm_report_error__224__verbosity, __Vtask_uvm_report_error__224__filename, __Vtask_uvm_report_error__224__line, __Vtask_uvm_report_error__224__context_name, (IData)(__Vtask_uvm_report_error__224__report_enabled_checked));
            }
            allocate__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        if ((VlNull{} != this->__PVT__mem)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__229__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__229__severity = 0U;
                            __Vfunc_uvm_report_enabled__229__verbosity = 0x000000c8U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__230__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__230__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__231__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__231__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__229__verbosity, (IData)(__Vfunc_uvm_report_enabled__229__severity), __Vfunc_uvm_report_enabled__229__id, __Vtask_uvm_report_enabled__232__Vfuncout);
                            __Vfunc_uvm_report_enabled__229__Vfuncout 
                                = __Vtask_uvm_report_enabled__232__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__229__Vfuncout))) {
                __Vtask_uvm_report_info__233__report_enabled_checked = 1U;
                __Vtask_uvm_report_info__233__context_name = ""s;
                __Vtask_uvm_report_info__233__line = 0x000002baU;
                __Vtask_uvm_report_info__233__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_info__233__verbosity = 0x000000c8U;
                __Vtemp_9 = ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__234__Vfuncout);
                    }(), __Vfunc_get_full_name__234__Vfuncout);
                __Vtemp_10 = ([&]() {
                        VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 698)
                              ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__235__Vfuncout);
                    }(), __Vtask_get_full_name__235__Vfuncout);
                __Vtemp_11 = ([&]() {
                        VL_NULL_CHECK(mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 698)
                              ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__236__Vfuncout);
                    }(), __Vtask_get_full_name__236__Vfuncout);
                __Vtask_uvm_report_info__233__message 
                    = VL_SFORMATF_N_NX("Virtual register \"%@\" is being moved from %@@'h%0x to %@@'h%0x",0,
                                       -1,&(__Vtemp_9),
                                       -1,&(__Vtemp_10),
                                       64,this->__PVT__offset,
                                       -1,&(__Vtemp_11),
                                       64,([&]() {
                                VL_NULL_CHECK(allocate__Vfuncrtn, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 698)
                                           ->__VnoInFunc_get_start_offset(vlSymsp, __Vtask_get_start_offset__237__Vfuncout);
                            }(), __Vtask_get_start_offset__237__Vfuncout)) ;
                __Vtask_uvm_report_info__233__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__238__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__238__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__239__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__239__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__233__id, __Vtask_uvm_report_info__233__message, __Vtask_uvm_report_info__233__verbosity, __Vtask_uvm_report_info__233__filename, __Vtask_uvm_report_info__233__line, __Vtask_uvm_report_info__233__context_name, (IData)(__Vtask_uvm_report_info__233__report_enabled_checked));
            }
            this->__VnoInFunc_release_region(vlSymsp);
        }
        this->__PVT__region = allocate__Vfuncrtn;
        VL_NULL_CHECK(mam, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 705)->__VnoInFunc_get_memory(vlSymsp, __Vtask_get_memory__242__Vfuncout);
        this->__PVT__mem = __Vtask_get_memory__242__Vfuncout;
        VL_NULL_CHECK(allocate__Vfuncrtn, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 706)->__VnoInFunc_get_start_offset(vlSymsp, __Vtask_get_start_offset__243__Vfuncout);
        this->__PVT__offset = __Vtask_get_start_offset__243__Vfuncout;
        this->__PVT__size = n;
        VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 710)->__VnoInFunc_Xadd_vregX(vlSymsp, 
                                                                                VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_vreg>{this});
        __Vlabel0: ;
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_region(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_mem_region> &get_region__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_region\n"); );
    // Body
    get_region__Vfuncrtn = this->__PVT__region;
}

void Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_release_region(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_release_region\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__245__Vfuncout;
    __Vfunc_uvm_report_enabled__245__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__245__verbosity;
    __Vfunc_uvm_report_enabled__245__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__245__severity;
    __Vfunc_uvm_report_enabled__245__severity = 0;
    std::string __Vfunc_uvm_report_enabled__245__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__246__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__247__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__248__Vfuncout;
    __Vtask_uvm_report_enabled__248__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__249__id;
    std::string __Vtask_uvm_report_error__249__message;
    IData/*31:0*/ __Vtask_uvm_report_error__249__verbosity;
    __Vtask_uvm_report_error__249__verbosity = 0;
    std::string __Vtask_uvm_report_error__249__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__249__line;
    __Vtask_uvm_report_error__249__line = 0;
    std::string __Vtask_uvm_report_error__249__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__249__report_enabled_checked;
    __Vtask_uvm_report_error__249__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__250__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__251__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__252__Vfuncout;
    std::string __Vtemp_1;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    {
        if (this->__PVT__is_static) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__245__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__245__severity = 2U;
                            __Vfunc_uvm_report_enabled__245__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__246__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__246__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__247__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__247__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__245__verbosity, (IData)(__Vfunc_uvm_report_enabled__245__severity), __Vfunc_uvm_report_enabled__245__id, __Vtask_uvm_report_enabled__248__Vfuncout);
                            __Vfunc_uvm_report_enabled__245__Vfuncout 
                                = __Vtask_uvm_report_enabled__248__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__245__Vfuncout))) {
                __Vtask_uvm_report_error__249__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__249__context_name = ""s;
                __Vtask_uvm_report_error__249__line = 0x000002d1U;
                __Vtask_uvm_report_error__249__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__249__verbosity = 0U;
                __Vtemp_1 = ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__250__Vfuncout);
                    }(), __Vfunc_get_full_name__250__Vfuncout);
                __Vtask_uvm_report_error__249__message 
                    = VL_SFORMATF_N_NX("Virtual register \"%@\" is static and cannot be dynamically released",0,
                                       -1,&(__Vtemp_1)) ;
                __Vtask_uvm_report_error__249__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__251__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__251__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__252__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__252__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__249__id, __Vtask_uvm_report_error__249__message, __Vtask_uvm_report_error__249__verbosity, __Vtask_uvm_report_error__249__filename, __Vtask_uvm_report_error__249__line, __Vtask_uvm_report_error__249__context_name, (IData)(__Vtask_uvm_report_error__249__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        if ((VlNull{} != this->__PVT__mem)) {
            VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 726)->__VnoInFunc_Xdelete_vregX(vlSymsp, 
                                                                                VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_vreg>{this});
        }
        if ((VlNull{} != this->__PVT__region)) {
            VL_NULL_CHECK(this->__PVT__region, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 729)->__VnoInFunc_release_region(vlSymsp);
        }
        this->__PVT__region = VlNull{};
        this->__PVT__mem = VlNull{};
        this->__PVT__size = 0ULL;
        this->__PVT__offset = 0ULL;
        this->__VnoInFunc_reset(vlSymsp, "HARD"s);
        __Vlabel0: ;
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_memory(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_mem> &get_memory__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_memory\n"); );
    // Body
    get_memory__Vfuncrtn = this->__PVT__mem;
}

void Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_offset_in_memory(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ &get_offset_in_memory__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_offset_in_memory\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__257__Vfuncout;
    __Vfunc_uvm_report_enabled__257__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__257__verbosity;
    __Vfunc_uvm_report_enabled__257__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__257__severity;
    __Vfunc_uvm_report_enabled__257__severity = 0;
    std::string __Vfunc_uvm_report_enabled__257__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__258__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__259__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__260__Vfuncout;
    __Vtask_uvm_report_enabled__260__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__261__id;
    std::string __Vtask_uvm_report_error__261__message;
    IData/*31:0*/ __Vtask_uvm_report_error__261__verbosity;
    __Vtask_uvm_report_error__261__verbosity = 0;
    std::string __Vtask_uvm_report_error__261__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__261__line;
    __Vtask_uvm_report_error__261__line = 0;
    std::string __Vtask_uvm_report_error__261__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__261__report_enabled_checked;
    __Vtask_uvm_report_error__261__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__262__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__263__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__264__Vfuncout;
    std::string __Vtemp_1;
    // Body
    {
        if ((VlNull{} == this->__PVT__mem)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__257__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__257__severity = 2U;
                            __Vfunc_uvm_report_enabled__257__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__258__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__258__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__259__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__259__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__257__verbosity, (IData)(__Vfunc_uvm_report_enabled__257__severity), __Vfunc_uvm_report_enabled__257__id, __Vtask_uvm_report_enabled__260__Vfuncout);
                            __Vfunc_uvm_report_enabled__257__Vfuncout 
                                = __Vtask_uvm_report_enabled__260__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__257__Vfuncout))) {
                __Vtask_uvm_report_error__261__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__261__context_name = ""s;
                __Vtask_uvm_report_error__261__line = 0x000002edU;
                __Vtask_uvm_report_error__261__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__261__verbosity = 0U;
                __Vtemp_1 = ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__262__Vfuncout);
                    }(), __Vfunc_get_full_name__262__Vfuncout);
                __Vtask_uvm_report_error__261__message 
                    = VL_SFORMATF_N_NX("Cannot call uvm_vreg::get_offset_in_memory() on unimplemented virtual register \"%@\"",0,
                                       -1,&(__Vtemp_1)) ;
                __Vtask_uvm_report_error__261__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__263__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__263__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__264__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__264__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__261__id, __Vtask_uvm_report_error__261__message, __Vtask_uvm_report_error__261__verbosity, __Vtask_uvm_report_error__261__filename, __Vtask_uvm_report_error__261__line, __Vtask_uvm_report_error__261__context_name, (IData)(__Vtask_uvm_report_error__261__report_enabled_checked));
            }
            get_offset_in_memory__Vfuncrtn = 0ULL;
            goto __Vlabel0;
        }
        get_offset_in_memory__Vfuncrtn = (this->__PVT__offset 
                                          + (idx * (QData)((IData)(this->__PVT__incr))));
        __Vlabel0: ;
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_address(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, QData/*63:0*/ idx, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ &get_address__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_address\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__266__Vfuncout;
    __Vfunc_uvm_report_enabled__266__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__266__verbosity;
    __Vfunc_uvm_report_enabled__266__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__266__severity;
    __Vfunc_uvm_report_enabled__266__severity = 0;
    std::string __Vfunc_uvm_report_enabled__266__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__267__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__268__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__269__Vfuncout;
    __Vtask_uvm_report_enabled__269__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__270__id;
    std::string __Vtask_uvm_report_error__270__message;
    IData/*31:0*/ __Vtask_uvm_report_error__270__verbosity;
    __Vtask_uvm_report_error__270__verbosity = 0;
    std::string __Vtask_uvm_report_error__270__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__270__line;
    __Vtask_uvm_report_error__270__line = 0;
    std::string __Vtask_uvm_report_error__270__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__270__report_enabled_checked;
    __Vtask_uvm_report_error__270__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__271__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__272__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__273__Vfuncout;
    QData/*63:0*/ __Vtask_get_address__275__Vfuncout;
    __Vtask_get_address__275__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_get_offset_in_memory__276__Vfuncout;
    __Vfunc_get_offset_in_memory__276__Vfuncout = 0;
    std::string __Vtemp_1;
    // Body
    {
        if ((VlNull{} == this->__PVT__mem)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__266__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__266__severity = 2U;
                            __Vfunc_uvm_report_enabled__266__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__267__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__267__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__268__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__268__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__266__verbosity, (IData)(__Vfunc_uvm_report_enabled__266__severity), __Vfunc_uvm_report_enabled__266__id, __Vtask_uvm_report_enabled__269__Vfuncout);
                            __Vfunc_uvm_report_enabled__266__Vfuncout 
                                = __Vtask_uvm_report_enabled__269__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__266__Vfuncout))) {
                __Vtask_uvm_report_error__270__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__270__context_name = ""s;
                __Vtask_uvm_report_error__270__line = 0x000002f8U;
                __Vtask_uvm_report_error__270__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__270__verbosity = 0U;
                __Vtemp_1 = ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__271__Vfuncout);
                    }(), __Vfunc_get_full_name__271__Vfuncout);
                __Vtask_uvm_report_error__270__message 
                    = VL_SFORMATF_N_NX("Cannot get address of of unimplemented virtual register \"%@\".",0,
                                       -1,&(__Vtemp_1)) ;
                __Vtask_uvm_report_error__270__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__272__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__272__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__273__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__273__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__270__id, __Vtask_uvm_report_error__270__message, __Vtask_uvm_report_error__270__verbosity, __Vtask_uvm_report_error__270__filename, __Vtask_uvm_report_error__270__line, __Vtask_uvm_report_error__270__context_name, (IData)(__Vtask_uvm_report_error__270__report_enabled_checked));
            }
            get_address__Vfuncrtn = 0ULL;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 764)->__VnoInFunc_get_address(vlProcess, vlSymsp, 
                                                                                ([&]() {
                    this->__VnoInFunc_get_offset_in_memory(vlProcess, vlSymsp, idx, __Vfunc_get_offset_in_memory__276__Vfuncout);
                }(), __Vfunc_get_offset_in_memory__276__Vfuncout), map, __Vtask_get_address__275__Vfuncout);
        get_address__Vfuncrtn = __Vtask_get_address__275__Vfuncout;
        __Vlabel0: ;
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_size(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_size\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__277__Vfuncout;
    __Vfunc_uvm_report_enabled__277__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__277__verbosity;
    __Vfunc_uvm_report_enabled__277__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__277__severity;
    __Vfunc_uvm_report_enabled__277__severity = 0;
    std::string __Vfunc_uvm_report_enabled__277__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__278__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__279__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__280__Vfuncout;
    __Vtask_uvm_report_enabled__280__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__281__id;
    std::string __Vtask_uvm_report_error__281__message;
    IData/*31:0*/ __Vtask_uvm_report_error__281__verbosity;
    __Vtask_uvm_report_error__281__verbosity = 0;
    std::string __Vtask_uvm_report_error__281__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__281__line;
    __Vtask_uvm_report_error__281__line = 0;
    std::string __Vtask_uvm_report_error__281__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__281__report_enabled_checked;
    __Vtask_uvm_report_error__281__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__282__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__283__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__284__Vfuncout;
    std::string __Vtemp_1;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    {
        if ((0ULL == this->__PVT__size)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__277__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__277__severity = 2U;
                            __Vfunc_uvm_report_enabled__277__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__278__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__278__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__279__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__279__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__277__verbosity, (IData)(__Vfunc_uvm_report_enabled__277__severity), __Vfunc_uvm_report_enabled__277__id, __Vtask_uvm_report_enabled__280__Vfuncout);
                            __Vfunc_uvm_report_enabled__277__Vfuncout 
                                = __Vtask_uvm_report_enabled__280__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__277__Vfuncout))) {
                __Vtask_uvm_report_error__281__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__281__context_name = ""s;
                __Vtask_uvm_report_error__281__line = 0x00000303U;
                __Vtask_uvm_report_error__281__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__281__verbosity = 0U;
                __Vtemp_1 = ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__282__Vfuncout);
                    }(), __Vfunc_get_full_name__282__Vfuncout);
                __Vtask_uvm_report_error__281__message 
                    = VL_SFORMATF_N_NX("Cannot call uvm_vreg::get_size() on unimplemented virtual register \"%@\"",0,
                                       -1,&(__Vtemp_1)) ;
                __Vtask_uvm_report_error__281__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__283__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__283__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__284__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__284__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__281__id, __Vtask_uvm_report_error__281__message, __Vtask_uvm_report_error__281__verbosity, __Vtask_uvm_report_error__281__filename, __Vtask_uvm_report_error__281__line, __Vtask_uvm_report_error__281__context_name, (IData)(__Vtask_uvm_report_error__281__report_enabled_checked));
            }
            get_size__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        get_size__Vfuncrtn = (IData)(this->__PVT__size);
        __Vlabel0: ;
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_n_bytes(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bytes__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_n_bytes\n"); );
    // Body
    get_n_bytes__Vfuncrtn = ((IData)(1U) + VL_SHIFTR_III(32,32,32, 
                                                         (this->__PVT__n_bits 
                                                          - (IData)(1U)), 3U));
}

void Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_n_memlocs(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_memlocs__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_n_memlocs\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__286__Vfuncout;
    __Vfunc_uvm_report_enabled__286__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__286__verbosity;
    __Vfunc_uvm_report_enabled__286__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__286__severity;
    __Vfunc_uvm_report_enabled__286__severity = 0;
    std::string __Vfunc_uvm_report_enabled__286__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__287__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__288__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__289__Vfuncout;
    __Vtask_uvm_report_enabled__289__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__290__id;
    std::string __Vtask_uvm_report_error__290__message;
    IData/*31:0*/ __Vtask_uvm_report_error__290__verbosity;
    __Vtask_uvm_report_error__290__verbosity = 0;
    std::string __Vtask_uvm_report_error__290__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__290__line;
    __Vtask_uvm_report_error__290__line = 0;
    std::string __Vtask_uvm_report_error__290__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__290__report_enabled_checked;
    __Vtask_uvm_report_error__290__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__291__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__292__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__293__Vfuncout;
    IData/*31:0*/ __Vfunc_get_n_bytes__295__Vfuncout;
    __Vfunc_get_n_bytes__295__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bytes__296__Vfuncout;
    __Vtask_get_n_bytes__296__Vfuncout = 0;
    std::string __Vtemp_1;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    {
        if ((VlNull{} == this->__PVT__mem)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__286__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__286__severity = 2U;
                            __Vfunc_uvm_report_enabled__286__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__287__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__287__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__288__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__288__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__286__verbosity, (IData)(__Vfunc_uvm_report_enabled__286__severity), __Vfunc_uvm_report_enabled__286__id, __Vtask_uvm_report_enabled__289__Vfuncout);
                            __Vfunc_uvm_report_enabled__286__Vfuncout 
                                = __Vtask_uvm_report_enabled__289__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__286__Vfuncout))) {
                __Vtask_uvm_report_error__290__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__290__context_name = ""s;
                __Vtask_uvm_report_error__290__line = 0x00000313U;
                __Vtask_uvm_report_error__290__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__290__verbosity = 0U;
                __Vtemp_1 = ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__291__Vfuncout);
                    }(), __Vfunc_get_full_name__291__Vfuncout);
                __Vtask_uvm_report_error__290__message 
                    = VL_SFORMATF_N_NX("Cannot call uvm_vreg::get_n_memlocs() on unimplemented virtual register \"%@\"",0,
                                       -1,&(__Vtemp_1)) ;
                __Vtask_uvm_report_error__290__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__292__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__292__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__293__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__293__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__290__id, __Vtask_uvm_report_error__290__message, __Vtask_uvm_report_error__290__verbosity, __Vtask_uvm_report_error__290__filename, __Vtask_uvm_report_error__290__line, __Vtask_uvm_report_error__290__context_name, (IData)(__Vtask_uvm_report_error__290__report_enabled_checked));
            }
            get_n_memlocs__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        get_n_memlocs__Vfuncrtn = ((IData)(1U) + VL_DIV_III(32, 
                                                            (([&]() {
                            this->__VnoInFunc_get_n_bytes(vlSymsp, __Vfunc_get_n_bytes__295__Vfuncout);
                        }(), __Vfunc_get_n_bytes__295__Vfuncout) 
                                                             - (IData)(1U)), 
                                                            ([&]() {
                        VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 791)
                                                             ->__VnoInFunc_get_n_bytes(vlSymsp, __Vtask_get_n_bytes__296__Vfuncout);
                    }(), __Vtask_get_n_bytes__296__Vfuncout)));
        __Vlabel0: ;
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_incr(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_incr__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_incr\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__297__Vfuncout;
    __Vfunc_uvm_report_enabled__297__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__297__verbosity;
    __Vfunc_uvm_report_enabled__297__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__297__severity;
    __Vfunc_uvm_report_enabled__297__severity = 0;
    std::string __Vfunc_uvm_report_enabled__297__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__298__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__299__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__300__Vfuncout;
    __Vtask_uvm_report_enabled__300__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__301__id;
    std::string __Vtask_uvm_report_error__301__message;
    IData/*31:0*/ __Vtask_uvm_report_error__301__verbosity;
    __Vtask_uvm_report_error__301__verbosity = 0;
    std::string __Vtask_uvm_report_error__301__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__301__line;
    __Vtask_uvm_report_error__301__line = 0;
    std::string __Vtask_uvm_report_error__301__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__301__report_enabled_checked;
    __Vtask_uvm_report_error__301__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__302__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__303__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__304__Vfuncout;
    std::string __Vtemp_1;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    {
        if ((0U == this->__PVT__incr)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__297__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__297__severity = 2U;
                            __Vfunc_uvm_report_enabled__297__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__298__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__298__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__299__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__299__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__297__verbosity, (IData)(__Vfunc_uvm_report_enabled__297__severity), __Vfunc_uvm_report_enabled__297__id, __Vtask_uvm_report_enabled__300__Vfuncout);
                            __Vfunc_uvm_report_enabled__297__Vfuncout 
                                = __Vtask_uvm_report_enabled__300__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__297__Vfuncout))) {
                __Vtask_uvm_report_error__301__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__301__context_name = ""s;
                __Vtask_uvm_report_error__301__line = 0x0000031eU;
                __Vtask_uvm_report_error__301__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__301__verbosity = 0U;
                __Vtemp_1 = ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__302__Vfuncout);
                    }(), __Vfunc_get_full_name__302__Vfuncout);
                __Vtask_uvm_report_error__301__message 
                    = VL_SFORMATF_N_NX("Cannot call uvm_vreg::get_incr() on unimplemented virtual register \"%@\"",0,
                                       -1,&(__Vtemp_1)) ;
                __Vtask_uvm_report_error__301__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__303__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__303__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__304__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__304__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__301__id, __Vtask_uvm_report_error__301__message, __Vtask_uvm_report_error__301__verbosity, __Vtask_uvm_report_error__301__filename, __Vtask_uvm_report_error__301__line, __Vtask_uvm_report_error__301__context_name, (IData)(__Vtask_uvm_report_error__301__report_enabled_checked));
            }
            get_incr__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        get_incr__Vfuncrtn = this->__PVT__incr;
        __Vlabel0: ;
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_n_maps(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_maps__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_n_maps\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__306__Vfuncout;
    __Vfunc_uvm_report_enabled__306__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__306__verbosity;
    __Vfunc_uvm_report_enabled__306__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__306__severity;
    __Vfunc_uvm_report_enabled__306__severity = 0;
    std::string __Vfunc_uvm_report_enabled__306__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__307__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__308__Vfuncout;
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
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__312__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__313__Vfuncout;
    IData/*31:0*/ __Vtask_get_n_maps__315__Vfuncout;
    __Vtask_get_n_maps__315__Vfuncout = 0;
    std::string __Vtemp_1;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    {
        if ((VlNull{} == this->__PVT__mem)) {
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
                __Vtask_uvm_report_error__310__line = 0x00000329U;
                __Vtask_uvm_report_error__310__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__310__verbosity = 0U;
                __Vtemp_1 = ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__311__Vfuncout);
                    }(), __Vfunc_get_full_name__311__Vfuncout);
                __Vtask_uvm_report_error__310__message 
                    = VL_SFORMATF_N_NX("Cannot call uvm_vreg::get_n_maps() on unimplemented virtual register \"%@\"",0,
                                       -1,&(__Vtemp_1)) ;
                __Vtask_uvm_report_error__310__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__312__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__312__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__313__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__313__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__310__id, __Vtask_uvm_report_error__310__message, __Vtask_uvm_report_error__310__verbosity, __Vtask_uvm_report_error__310__filename, __Vtask_uvm_report_error__310__line, __Vtask_uvm_report_error__310__context_name, (IData)(__Vtask_uvm_report_error__310__report_enabled_checked));
            }
            get_n_maps__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 813)->__VnoInFunc_get_n_maps(vlSymsp, __Vtask_get_n_maps__315__Vfuncout);
        get_n_maps__Vfuncrtn = __Vtask_get_n_maps__315__Vfuncout;
        __Vlabel0: ;
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_maps(Vpools_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_map>> &maps) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_maps\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__316__Vfuncout;
    __Vfunc_uvm_report_enabled__316__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__316__verbosity;
    __Vfunc_uvm_report_enabled__316__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__316__severity;
    __Vfunc_uvm_report_enabled__316__severity = 0;
    std::string __Vfunc_uvm_report_enabled__316__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__317__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__318__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__319__Vfuncout;
    __Vtask_uvm_report_enabled__319__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__320__id;
    std::string __Vtask_uvm_report_error__320__message;
    IData/*31:0*/ __Vtask_uvm_report_error__320__verbosity;
    __Vtask_uvm_report_error__320__verbosity = 0;
    std::string __Vtask_uvm_report_error__320__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__320__line;
    __Vtask_uvm_report_error__320__line = 0;
    std::string __Vtask_uvm_report_error__320__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__320__report_enabled_checked;
    __Vtask_uvm_report_error__320__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__321__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__322__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__323__Vfuncout;
    std::string __Vtemp_1;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    {
        if ((VlNull{} == this->__PVT__mem)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__316__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__316__severity = 2U;
                            __Vfunc_uvm_report_enabled__316__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__317__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__317__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__318__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__318__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__316__verbosity, (IData)(__Vfunc_uvm_report_enabled__316__severity), __Vfunc_uvm_report_enabled__316__id, __Vtask_uvm_report_enabled__319__Vfuncout);
                            __Vfunc_uvm_report_enabled__316__Vfuncout 
                                = __Vtask_uvm_report_enabled__319__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__316__Vfuncout))) {
                __Vtask_uvm_report_error__320__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__320__context_name = ""s;
                __Vtask_uvm_report_error__320__line = 0x00000334U;
                __Vtask_uvm_report_error__320__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__320__verbosity = 0U;
                __Vtemp_1 = ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__321__Vfuncout);
                    }(), __Vfunc_get_full_name__321__Vfuncout);
                __Vtask_uvm_report_error__320__message 
                    = VL_SFORMATF_N_NX("Cannot call uvm_vreg::get_maps() on unimplemented virtual register \"%@\"",0,
                                       -1,&(__Vtemp_1)) ;
                __Vtask_uvm_report_error__320__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__322__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__322__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__323__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__323__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__320__id, __Vtask_uvm_report_error__320__message, __Vtask_uvm_report_error__320__verbosity, __Vtask_uvm_report_error__320__filename, __Vtask_uvm_report_error__320__line, __Vtask_uvm_report_error__320__context_name, (IData)(__Vtask_uvm_report_error__320__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 824)->__VnoInFunc_get_maps(vlSymsp, maps);
        __Vlabel0: ;
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_is_in_map(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_map> map, CData/*0:0*/ &is_in_map__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_is_in_map\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__326__Vfuncout;
    __Vfunc_uvm_report_enabled__326__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__326__verbosity;
    __Vfunc_uvm_report_enabled__326__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__326__severity;
    __Vfunc_uvm_report_enabled__326__severity = 0;
    std::string __Vfunc_uvm_report_enabled__326__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__327__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__328__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__329__Vfuncout;
    __Vtask_uvm_report_enabled__329__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__330__id;
    std::string __Vtask_uvm_report_error__330__message;
    IData/*31:0*/ __Vtask_uvm_report_error__330__verbosity;
    __Vtask_uvm_report_error__330__verbosity = 0;
    std::string __Vtask_uvm_report_error__330__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__330__line;
    __Vtask_uvm_report_error__330__line = 0;
    std::string __Vtask_uvm_report_error__330__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__330__report_enabled_checked;
    __Vtask_uvm_report_error__330__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__331__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__332__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__333__Vfuncout;
    CData/*0:0*/ __Vtask_is_in_map__335__Vfuncout;
    __Vtask_is_in_map__335__Vfuncout = 0;
    std::string __Vtemp_1;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    {
        if ((VlNull{} == this->__PVT__mem)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__326__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__326__severity = 2U;
                            __Vfunc_uvm_report_enabled__326__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__327__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__327__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__328__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__328__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__326__verbosity, (IData)(__Vfunc_uvm_report_enabled__326__severity), __Vfunc_uvm_report_enabled__326__id, __Vtask_uvm_report_enabled__329__Vfuncout);
                            __Vfunc_uvm_report_enabled__326__Vfuncout 
                                = __Vtask_uvm_report_enabled__329__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__326__Vfuncout))) {
                __Vtask_uvm_report_error__330__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__330__context_name = ""s;
                __Vtask_uvm_report_error__330__line = 0x0000033fU;
                __Vtask_uvm_report_error__330__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__330__verbosity = 0U;
                __Vtemp_1 = ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__331__Vfuncout);
                    }(), __Vfunc_get_full_name__331__Vfuncout);
                __Vtask_uvm_report_error__330__message 
                    = VL_SFORMATF_N_NX("Cannot call uvm_vreg::is_in_map() on unimplemented virtual register \"%@\"",0,
                                       -1,&(__Vtemp_1)) ;
                __Vtask_uvm_report_error__330__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__332__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__332__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__333__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__333__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__330__id, __Vtask_uvm_report_error__330__message, __Vtask_uvm_report_error__330__verbosity, __Vtask_uvm_report_error__330__filename, __Vtask_uvm_report_error__330__line, __Vtask_uvm_report_error__330__context_name, (IData)(__Vtask_uvm_report_error__330__report_enabled_checked));
            }
            is_in_map__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 835)->__VnoInFunc_is_in_map(vlSymsp, map, __Vtask_is_in_map__335__Vfuncout);
        is_in_map__Vfuncrtn = __Vtask_is_in_map__335__Vfuncout;
        __Vlabel0: ;
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_access(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_access__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_access\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__336__Vfuncout;
    __Vfunc_uvm_report_enabled__336__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__336__verbosity;
    __Vfunc_uvm_report_enabled__336__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__336__severity;
    __Vfunc_uvm_report_enabled__336__severity = 0;
    std::string __Vfunc_uvm_report_enabled__336__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__337__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__338__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__339__Vfuncout;
    __Vtask_uvm_report_enabled__339__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__340__id;
    std::string __Vtask_uvm_report_error__340__message;
    IData/*31:0*/ __Vtask_uvm_report_error__340__verbosity;
    __Vtask_uvm_report_error__340__verbosity = 0;
    std::string __Vtask_uvm_report_error__340__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__340__line;
    __Vtask_uvm_report_error__340__line = 0;
    std::string __Vtask_uvm_report_error__340__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__340__report_enabled_checked;
    __Vtask_uvm_report_error__340__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__341__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__342__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__343__Vfuncout;
    std::string __Vtask_get_access__345__Vfuncout;
    std::string __Vtemp_1;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    {
        if ((VlNull{} == this->__PVT__mem)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__336__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__336__severity = 2U;
                            __Vfunc_uvm_report_enabled__336__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__337__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__337__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__338__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__338__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__336__verbosity, (IData)(__Vfunc_uvm_report_enabled__336__severity), __Vfunc_uvm_report_enabled__336__id, __Vtask_uvm_report_enabled__339__Vfuncout);
                            __Vfunc_uvm_report_enabled__336__Vfuncout 
                                = __Vtask_uvm_report_enabled__339__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__336__Vfuncout))) {
                __Vtask_uvm_report_error__340__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__340__context_name = ""s;
                __Vtask_uvm_report_error__340__line = 0x0000034aU;
                __Vtask_uvm_report_error__340__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__340__verbosity = 0U;
                __Vtemp_1 = ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__341__Vfuncout);
                    }(), __Vfunc_get_full_name__341__Vfuncout);
                __Vtask_uvm_report_error__340__message 
                    = VL_SFORMATF_N_NX("Cannot call uvm_vreg::get_rights() on unimplemented virtual register \"%@\"",0,
                                       -1,&(__Vtemp_1)) ;
                __Vtask_uvm_report_error__340__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__342__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__342__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__343__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__343__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__340__id, __Vtask_uvm_report_error__340__message, __Vtask_uvm_report_error__340__verbosity, __Vtask_uvm_report_error__340__filename, __Vtask_uvm_report_error__340__line, __Vtask_uvm_report_error__340__context_name, (IData)(__Vtask_uvm_report_error__340__report_enabled_checked));
            }
            get_access__Vfuncrtn = "RW"s;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 846)->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vtask_get_access__345__Vfuncout);
        get_access__Vfuncrtn = __Vtask_get_access__345__Vfuncout;
        __Vlabel0: ;
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_rights(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_rights__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_rights\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__346__Vfuncout;
    __Vfunc_uvm_report_enabled__346__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__346__verbosity;
    __Vfunc_uvm_report_enabled__346__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__346__severity;
    __Vfunc_uvm_report_enabled__346__severity = 0;
    std::string __Vfunc_uvm_report_enabled__346__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__347__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__348__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__349__Vfuncout;
    __Vtask_uvm_report_enabled__349__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__350__id;
    std::string __Vtask_uvm_report_error__350__message;
    IData/*31:0*/ __Vtask_uvm_report_error__350__verbosity;
    __Vtask_uvm_report_error__350__verbosity = 0;
    std::string __Vtask_uvm_report_error__350__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__350__line;
    __Vtask_uvm_report_error__350__line = 0;
    std::string __Vtask_uvm_report_error__350__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__350__report_enabled_checked;
    __Vtask_uvm_report_error__350__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__351__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__352__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__353__Vfuncout;
    std::string __Vtask_get_rights__355__Vfuncout;
    std::string __Vtemp_1;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    {
        if ((VlNull{} == this->__PVT__mem)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__346__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__346__severity = 2U;
                            __Vfunc_uvm_report_enabled__346__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__347__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__347__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__348__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__348__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__346__verbosity, (IData)(__Vfunc_uvm_report_enabled__346__severity), __Vfunc_uvm_report_enabled__346__id, __Vtask_uvm_report_enabled__349__Vfuncout);
                            __Vfunc_uvm_report_enabled__346__Vfuncout 
                                = __Vtask_uvm_report_enabled__349__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__346__Vfuncout))) {
                __Vtask_uvm_report_error__350__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__350__context_name = ""s;
                __Vtask_uvm_report_error__350__line = 0x00000355U;
                __Vtask_uvm_report_error__350__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__350__verbosity = 0U;
                __Vtemp_1 = ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__351__Vfuncout);
                    }(), __Vfunc_get_full_name__351__Vfuncout);
                __Vtask_uvm_report_error__350__message 
                    = VL_SFORMATF_N_NX("Cannot call uvm_vreg::get_rights() on unimplemented virtual register \"%@\"",0,
                                       -1,&(__Vtemp_1)) ;
                __Vtask_uvm_report_error__350__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__352__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__352__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__353__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__353__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__350__id, __Vtask_uvm_report_error__350__message, __Vtask_uvm_report_error__350__verbosity, __Vtask_uvm_report_error__350__filename, __Vtask_uvm_report_error__350__line, __Vtask_uvm_report_error__350__context_name, (IData)(__Vtask_uvm_report_error__350__report_enabled_checked));
            }
            get_rights__Vfuncrtn = "RW"s;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 857)->__VnoInFunc_get_rights(vlProcess, vlSymsp, map, __Vtask_get_rights__355__Vfuncout);
        get_rights__Vfuncrtn = __Vtask_get_rights__355__Vfuncout;
        __Vlabel0: ;
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_fields(Vpools_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_vreg_field>> &fields) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_fields\n"); );
    // Body
    IData/*31:0*/ unnamedblk404__DOT__i;
    unnamedblk404__DOT__i = 0;
    unnamedblk404__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk404__DOT__i, this->__PVT__fields.size())) {
        fields.push_back(this->__PVT__fields.at(unnamedblk404__DOT__i));
        unnamedblk404__DOT__i = ((IData)(1U) + unnamedblk404__DOT__i);
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_field_by_name(Vpools_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_vreg_field> &get_field_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_get_field_by_name\n"); );
    // Locals
    std::string __Vtask_get_name__356__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__357__Vfuncout;
    __Vfunc_uvm_report_enabled__357__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__357__verbosity;
    __Vfunc_uvm_report_enabled__357__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__357__severity;
    __Vfunc_uvm_report_enabled__357__severity = 0;
    std::string __Vfunc_uvm_report_enabled__357__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__358__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__359__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__360__Vfuncout;
    __Vtask_uvm_report_enabled__360__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__361__id;
    std::string __Vtask_uvm_report_warning__361__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__361__verbosity;
    __Vtask_uvm_report_warning__361__verbosity = 0;
    std::string __Vtask_uvm_report_warning__361__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__361__line;
    __Vtask_uvm_report_warning__361__line = 0;
    std::string __Vtask_uvm_report_warning__361__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__361__report_enabled_checked;
    __Vtask_uvm_report_warning__361__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__362__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__363__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__364__Vfuncout;
    std::string __Vtemp_1;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ unnamedblk405__DOT__i;
    unnamedblk405__DOT__i = 0;
    {
        unnamedblk405__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk405__DOT__i, this->__PVT__fields.size())) {
            if ((([&]() {
                            VL_NULL_CHECK(this->__PVT__fields.at(unnamedblk405__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 869)
                  ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__356__Vfuncout);
                        }(), __Vtask_get_name__356__Vfuncout) 
                 == name)) {
                get_field_by_name__Vfuncrtn = this->__PVT__fields.at(unnamedblk405__DOT__i);
                goto __Vlabel0;
            }
            unnamedblk405__DOT__i = ((IData)(1U) + unnamedblk405__DOT__i);
        }
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__357__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__357__severity = 1U;
                        __Vfunc_uvm_report_enabled__357__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__358__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__358__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__359__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__359__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__357__verbosity, (IData)(__Vfunc_uvm_report_enabled__357__severity), __Vfunc_uvm_report_enabled__357__id, __Vtask_uvm_report_enabled__360__Vfuncout);
                        __Vfunc_uvm_report_enabled__357__Vfuncout 
                            = __Vtask_uvm_report_enabled__360__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__357__Vfuncout))) {
            __Vtask_uvm_report_warning__361__report_enabled_checked = 1U;
            __Vtask_uvm_report_warning__361__context_name = ""s;
            __Vtask_uvm_report_warning__361__line = 0x0000036aU;
            __Vtask_uvm_report_warning__361__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
            __Vtask_uvm_report_warning__361__verbosity = 0U;
            __Vtemp_1 = ([&]() {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__362__Vfuncout);
                }(), __Vfunc_get_full_name__362__Vfuncout);
            __Vtask_uvm_report_warning__361__message 
                = VL_SFORMATF_N_NX("Unable to locate field \"%@\" in virtual register \"%@\".",0,
                                   -1,&(name),-1,&(__Vtemp_1)) ;
            __Vtask_uvm_report_warning__361__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__363__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__363__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__364__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__364__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__361__id, __Vtask_uvm_report_warning__361__message, __Vtask_uvm_report_warning__361__verbosity, __Vtask_uvm_report_warning__361__filename, __Vtask_uvm_report_warning__361__line, __Vtask_uvm_report_warning__361__context_name, (IData)(__Vtask_uvm_report_warning__361__report_enabled_checked));
        }
        get_field_by_name__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

VlCoroutine Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_write(Vpools_top__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_write\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__367__Vfuncout;
    __Vfunc_uvm_report_enabled__367__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__367__verbosity;
    __Vfunc_uvm_report_enabled__367__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__367__severity;
    __Vfunc_uvm_report_enabled__367__severity = 0;
    std::string __Vfunc_uvm_report_enabled__367__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__368__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__369__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__370__Vfuncout;
    __Vtask_uvm_report_enabled__370__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__371__id;
    std::string __Vtask_uvm_report_error__371__message;
    IData/*31:0*/ __Vtask_uvm_report_error__371__verbosity;
    __Vtask_uvm_report_error__371__verbosity = 0;
    std::string __Vtask_uvm_report_error__371__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__371__line;
    __Vtask_uvm_report_error__371__line = 0;
    std::string __Vtask_uvm_report_error__371__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__371__report_enabled_checked;
    __Vtask_uvm_report_error__371__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__372__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__373__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__374__Vfuncout;
    IData/*31:0*/ __Vtask_get_default_door__376__Vfuncout;
    __Vtask_get_default_door__376__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_lsb_pos_in_register__378__Vfuncout;
    __Vtask_get_lsb_pos_in_register__378__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bits__379__Vfuncout;
    __Vtask_get_n_bits__379__Vfuncout = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_vreg_field_cbs> __Vtask_first__381__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_vreg_field_cbs> __Vtask_next__383__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_vreg_cbs> __Vtask_first__385__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_vreg_cbs> __Vtask_next__387__Vfuncout;
    IData/*31:0*/ __Vfunc_get_n_memlocs__388__Vfuncout;
    __Vfunc_get_n_memlocs__388__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bytes__389__Vfuncout;
    __Vtask_get_n_bytes__389__Vfuncout = 0;
    IData/*31:0*/ __Vtask_write__390__status;
    __Vtask_write__390__status = 0;
    IData/*31:0*/ __Vtask_get_n_bytes__391__Vfuncout;
    __Vtask_get_n_bytes__391__Vfuncout = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_vreg_cbs> __Vtask_first__392__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_vreg_cbs> __Vtask_next__394__Vfuncout;
    IData/*31:0*/ __Vtask_get_lsb_pos_in_register__397__Vfuncout;
    __Vtask_get_lsb_pos_in_register__397__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bits__398__Vfuncout;
    __Vtask_get_n_bits__398__Vfuncout = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_vreg_field_cbs> __Vtask_first__399__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_vreg_field_cbs> __Vtask_next__401__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__403__Vfuncout;
    __Vfunc_uvm_report_enabled__403__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__403__verbosity;
    __Vfunc_uvm_report_enabled__403__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__403__severity;
    __Vfunc_uvm_report_enabled__403__severity = 0;
    std::string __Vfunc_uvm_report_enabled__403__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__404__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__405__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__406__Vfuncout;
    __Vtask_uvm_report_enabled__406__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__407__id;
    std::string __Vtask_uvm_report_info__407__message;
    IData/*31:0*/ __Vtask_uvm_report_info__407__verbosity;
    __Vtask_uvm_report_info__407__verbosity = 0;
    std::string __Vtask_uvm_report_info__407__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__407__line;
    __Vtask_uvm_report_info__407__line = 0;
    std::string __Vtask_uvm_report_info__407__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__407__report_enabled_checked;
    __Vtask_uvm_report_info__407__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__408__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__409__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__410__Vfuncout;
    std::string __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_5;
    std::string __Vtemp_6;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk406__DOT__i;
    unnamedblk406__DOT__i = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_callback_iter__pi67> unnamedblk406__DOT__unnamedblk407__DOT__cbs;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_vreg_field> unnamedblk406__DOT__unnamedblk407__DOT__f;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_vreg_field_cbs> unnamedblk406__DOT__unnamedblk407__DOT__unnamedblk408__DOT__cb;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_vreg_cbs> unnamedblk409__DOT__cb;
    IData/*31:0*/ unnamedblk410__DOT__i;
    unnamedblk410__DOT__i = 0;
    IData/*31:0*/ unnamedblk410__DOT__unnamedblk411__DOT__s;
    unnamedblk410__DOT__unnamedblk411__DOT__s = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_vreg_cbs> unnamedblk412__DOT__cb;
    IData/*31:0*/ unnamedblk413__DOT__i;
    unnamedblk413__DOT__i = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_callback_iter__pi67> unnamedblk413__DOT__unnamedblk414__DOT__cbs;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_vreg_field> unnamedblk413__DOT__unnamedblk414__DOT__f;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_vreg_field_cbs> unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__cb;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_callback_iter__pi68> cbs;
    QData/*63:0*/ addr;
    addr = 0;
    QData/*63:0*/ tmp;
    tmp = 0;
    QData/*63:0*/ msk;
    msk = 0;
    IData/*31:0*/ lsb;
    lsb = 0;
    {
        cbs = VL_NEW(Vpools_top_uvm_pkg__03a__03auvm_callback_iter__pi68, vlSymsp, 
                     VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_vreg>{this});
        this->__PVT__write_in_progress = 1U;
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        if ((VlNull{} == this->__PVT__mem)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__367__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__367__severity = 2U;
                            __Vfunc_uvm_report_enabled__367__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__368__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__368__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__369__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__369__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__367__verbosity, (IData)(__Vfunc_uvm_report_enabled__367__severity), __Vfunc_uvm_report_enabled__367__id, __Vtask_uvm_report_enabled__370__Vfuncout);
                            __Vfunc_uvm_report_enabled__367__Vfuncout 
                                = __Vtask_uvm_report_enabled__370__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__367__Vfuncout))) {
                __Vtask_uvm_report_error__371__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__371__context_name = ""s;
                __Vtask_uvm_report_error__371__line = 0x00000383U;
                __Vtask_uvm_report_error__371__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__371__verbosity = 0U;
                __Vtemp_1 = ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__372__Vfuncout);
                    }(), __Vfunc_get_full_name__372__Vfuncout);
                __Vtask_uvm_report_error__371__message 
                    = VL_SFORMATF_N_NX("Cannot write to unimplemented virtual register \"%@\".",0,
                                       -1,&(__Vtemp_1)) ;
                __Vtask_uvm_report_error__371__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__373__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__373__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__374__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__374__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__371__id, __Vtask_uvm_report_error__371__message, __Vtask_uvm_report_error__371__verbosity, __Vtask_uvm_report_error__371__filename, __Vtask_uvm_report_error__371__line, __Vtask_uvm_report_error__371__context_name, (IData)(__Vtask_uvm_report_error__371__report_enabled_checked));
            }
            status = 1U;
            goto __Vlabel0;
        }
        if ((3U == path)) {
            VL_NULL_CHECK(this->__PVT__parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 905)->__VnoInFunc_get_default_door(vlSymsp, __Vtask_get_default_door__376__Vfuncout);
            path = __Vtask_get_default_door__376__Vfuncout;
        }
        unnamedblk406__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk406__DOT__i, this->__PVT__fields.size())) {
            unnamedblk406__DOT__unnamedblk407__DOT__cbs 
                = VL_NEW(Vpools_top_uvm_pkg__03a__03auvm_callback_iter__pi67, vlSymsp, this->__PVT__fields.at(unnamedblk406__DOT__i));
            unnamedblk406__DOT__unnamedblk407__DOT__f 
                = this->__PVT__fields.at(unnamedblk406__DOT__i);
            VL_NULL_CHECK(unnamedblk406__DOT__unnamedblk407__DOT__f, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 911)->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __Vtask_get_lsb_pos_in_register__378__Vfuncout);
            lsb = __Vtask_get_lsb_pos_in_register__378__Vfuncout;
            msk = VL_SHIFTL_QQI(64,64,32, (VL_SHIFTL_QQI(64,64,32, 1ULL, 
                                                         ([&]() {
                                VL_NULL_CHECK(unnamedblk406__DOT__unnamedblk407__DOT__f, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 912)
                                                          ->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__379__Vfuncout);
                            }(), __Vtask_get_n_bits__379__Vfuncout)) 
                                           - 1ULL), lsb);
            tmp = VL_SHIFTR_QQI(64,64,32, (value & msk), lsb);
            VL_NULL_CHECK(unnamedblk406__DOT__unnamedblk407__DOT__f, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 915)->__VnoInFunc_pre_write(vlSymsp, idx, tmp, path, map);
            VL_NULL_CHECK(unnamedblk406__DOT__unnamedblk407__DOT__cbs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 916)->__VnoInFunc_first(vlSymsp, __Vtask_first__381__Vfuncout);
            unnamedblk406__DOT__unnamedblk407__DOT__unnamedblk408__DOT__cb 
                = __Vtask_first__381__Vfuncout;
            while ((VlNull{} != unnamedblk406__DOT__unnamedblk407__DOT__unnamedblk408__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk406__DOT__unnamedblk407__DOT__unnamedblk408__DOT__cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 918)->__PVT__fname 
                    = this->__PVT__fname;
                VL_NULL_CHECK(unnamedblk406__DOT__unnamedblk407__DOT__unnamedblk408__DOT__cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 919)->__PVT__lineno 
                    = this->__PVT__lineno;
                VL_NULL_CHECK(unnamedblk406__DOT__unnamedblk407__DOT__unnamedblk408__DOT__cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 920)->__VnoInFunc_pre_write(vlSymsp, unnamedblk406__DOT__unnamedblk407__DOT__f, idx, tmp, path, map);
                VL_NULL_CHECK(unnamedblk406__DOT__unnamedblk407__DOT__cbs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 917)->__VnoInFunc_next(vlSymsp, __Vtask_next__383__Vfuncout);
                unnamedblk406__DOT__unnamedblk407__DOT__unnamedblk408__DOT__cb 
                    = __Vtask_next__383__Vfuncout;
            }
            value = ((value & (~ msk)) | VL_SHIFTL_QQI(64,64,32, tmp, lsb));
            unnamedblk406__DOT__i = ((IData)(1U) + unnamedblk406__DOT__i);
        }
        this->__VnoInFunc_pre_write(vlSymsp, idx, value, path, map);
        VL_NULL_CHECK(cbs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 926)->__VnoInFunc_first(vlSymsp, __Vtask_first__385__Vfuncout);
        unnamedblk409__DOT__cb = __Vtask_first__385__Vfuncout;
        while ((VlNull{} != unnamedblk409__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk409__DOT__cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 928)->__PVT__fname 
                = this->__PVT__fname;
            VL_NULL_CHECK(unnamedblk409__DOT__cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 929)->__PVT__lineno 
                = this->__PVT__lineno;
            VL_NULL_CHECK(unnamedblk409__DOT__cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 930)->__VnoInFunc_pre_write(vlSymsp, 
                                                                                VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_vreg>{this}, idx, value, path, map);
            VL_NULL_CHECK(cbs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 927)->__VnoInFunc_next(vlSymsp, __Vtask_next__387__Vfuncout);
            unnamedblk409__DOT__cb = __Vtask_next__387__Vfuncout;
        }
        addr = (this->__PVT__offset + (idx * (QData)((IData)(this->__PVT__incr))));
        lsb = 0U;
        status = 0U;
        unnamedblk410__DOT__i = 0U;
        while ((unnamedblk410__DOT__i < ([&]() {
                        this->__VnoInFunc_get_n_memlocs(vlSymsp, __Vfunc_get_n_memlocs__388__Vfuncout);
                    }(), __Vfunc_get_n_memlocs__388__Vfuncout))) {
            msk = VL_SHIFTL_QQI(64,64,32, (VL_SHIFTL_QQI(64,64,32, 1ULL, 
                                                         VL_SHIFTL_III(32,32,32, 
                                                                       ([&]() {
                                    VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 940)
                                                                        ->__VnoInFunc_get_n_bytes(vlSymsp, __Vtask_get_n_bytes__389__Vfuncout);
                                }(), __Vtask_get_n_bytes__389__Vfuncout), 3U)) 
                                           - 1ULL), lsb);
            tmp = VL_SHIFTR_QQI(64,64,32, (value & msk), lsb);
            co_await VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 942)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__390__status, 
                                                                                (addr 
                                                                                + (QData)((IData)(unnamedblk410__DOT__i))), tmp, path, map, parent, 0xffffffffU, extension, fname, lineno);
            unnamedblk410__DOT__unnamedblk411__DOT__s 
                = __Vtask_write__390__status;
            if (((0U != unnamedblk410__DOT__unnamedblk411__DOT__s) 
                 & (2U != unnamedblk410__DOT__unnamedblk411__DOT__s))) {
                status = unnamedblk410__DOT__unnamedblk411__DOT__s;
            }
            lsb = (lsb + VL_SHIFTL_III(32,32,32, ([&]() {
                            VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 944)
                                                  ->__VnoInFunc_get_n_bytes(vlSymsp, __Vtask_get_n_bytes__391__Vfuncout);
                        }(), __Vtask_get_n_bytes__391__Vfuncout), 3U));
            unnamedblk410__DOT__i = ((IData)(1U) + unnamedblk410__DOT__i);
        }
        VL_NULL_CHECK(cbs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 947)->__VnoInFunc_first(vlSymsp, __Vtask_first__392__Vfuncout);
        unnamedblk412__DOT__cb = __Vtask_first__392__Vfuncout;
        while ((VlNull{} != unnamedblk412__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk412__DOT__cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 949)->__PVT__fname 
                = this->__PVT__fname;
            VL_NULL_CHECK(unnamedblk412__DOT__cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 950)->__PVT__lineno 
                = this->__PVT__lineno;
            VL_NULL_CHECK(unnamedblk412__DOT__cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 951)->__VnoInFunc_post_write(vlSymsp, 
                                                                                VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_vreg>{this}, idx, value, path, map, status);
            VL_NULL_CHECK(cbs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 948)->__VnoInFunc_next(vlSymsp, __Vtask_next__394__Vfuncout);
            unnamedblk412__DOT__cb = __Vtask_next__394__Vfuncout;
        }
        this->__VnoInFunc_post_write(vlSymsp, idx, value, path, map, status);
        unnamedblk413__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk413__DOT__i, this->__PVT__fields.size())) {
            unnamedblk413__DOT__unnamedblk414__DOT__cbs 
                = VL_NEW(Vpools_top_uvm_pkg__03a__03auvm_callback_iter__pi67, vlSymsp, this->__PVT__fields.at(unnamedblk413__DOT__i));
            unnamedblk413__DOT__unnamedblk414__DOT__f 
                = this->__PVT__fields.at(unnamedblk413__DOT__i);
            VL_NULL_CHECK(unnamedblk413__DOT__unnamedblk414__DOT__f, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 958)->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __Vtask_get_lsb_pos_in_register__397__Vfuncout);
            lsb = __Vtask_get_lsb_pos_in_register__397__Vfuncout;
            msk = VL_SHIFTL_QQI(64,64,32, (VL_SHIFTL_QQI(64,64,32, 1ULL, 
                                                         ([&]() {
                                VL_NULL_CHECK(unnamedblk413__DOT__unnamedblk414__DOT__f, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 959)
                                                          ->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__398__Vfuncout);
                            }(), __Vtask_get_n_bits__398__Vfuncout)) 
                                           - 1ULL), lsb);
            tmp = VL_SHIFTR_QQI(64,64,32, (value & msk), lsb);
            VL_NULL_CHECK(unnamedblk413__DOT__unnamedblk414__DOT__cbs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 962)->__VnoInFunc_first(vlSymsp, __Vtask_first__399__Vfuncout);
            unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__cb 
                = __Vtask_first__399__Vfuncout;
            while ((VlNull{} != unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 964)->__PVT__fname 
                    = this->__PVT__fname;
                VL_NULL_CHECK(unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 965)->__PVT__lineno 
                    = this->__PVT__lineno;
                VL_NULL_CHECK(unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 966)->__VnoInFunc_post_write(vlSymsp, unnamedblk413__DOT__unnamedblk414__DOT__f, idx, tmp, path, map, status);
                VL_NULL_CHECK(unnamedblk413__DOT__unnamedblk414__DOT__cbs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 963)->__VnoInFunc_next(vlSymsp, __Vtask_next__401__Vfuncout);
                unnamedblk413__DOT__unnamedblk414__DOT__unnamedblk415__DOT__cb 
                    = __Vtask_next__401__Vfuncout;
            }
            VL_NULL_CHECK(unnamedblk413__DOT__unnamedblk414__DOT__f, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 968)->__VnoInFunc_post_write(vlSymsp, idx, tmp, path, map, status);
            value = ((value & (~ msk)) | VL_SHIFTL_QQI(64,64,32, tmp, lsb));
            unnamedblk413__DOT__i = ((IData)(1U) + unnamedblk413__DOT__i);
        }
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__403__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__403__severity = 0U;
                        __Vfunc_uvm_report_enabled__403__verbosity = 0x000000c8U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__404__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__404__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__405__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__405__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__403__verbosity, (IData)(__Vfunc_uvm_report_enabled__403__severity), __Vfunc_uvm_report_enabled__403__id, __Vtask_uvm_report_enabled__406__Vfuncout);
                        __Vfunc_uvm_report_enabled__403__Vfuncout 
                            = __Vtask_uvm_report_enabled__406__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__403__Vfuncout))) {
            __Vtask_uvm_report_info__407__report_enabled_checked = 1U;
            __Vtask_uvm_report_info__407__context_name = ""s;
            __Vtask_uvm_report_info__407__line = 0x000003d0U;
            __Vtask_uvm_report_info__407__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
            __Vtask_uvm_report_info__407__verbosity = 0x000000c8U;
            __Vtemp_5[0U] = 0x646f6f72U;
            if ((0U == path)) {
                __Vtemp_5[1U] = 0x726f6e74U;
                __Vtemp_5[2U] = 0x00000066U;
            } else {
                __Vtemp_5[1U] = 0x6261636bU;
                __Vtemp_5[2U] = 0U;
            }
            __Vtemp_6 = ([&]() {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__408__Vfuncout);
                }(), __Vfunc_get_full_name__408__Vfuncout);
            __Vtask_uvm_report_info__407__message = VL_SFORMATF_N_NX("Wrote virtual register \"%@\"[%0#] via %s with: 'h%x",0,
                                                                     -1,
                                                                     &(__Vtemp_6),
                                                                     64,
                                                                     idx,
                                                                     72,
                                                                     __Vtemp_5.data(),
                                                                     64,
                                                                     value) ;
            __Vtask_uvm_report_info__407__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__409__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__409__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__410__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__410__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__407__id, __Vtask_uvm_report_info__407__message, __Vtask_uvm_report_info__407__verbosity, __Vtask_uvm_report_info__407__filename, __Vtask_uvm_report_info__407__line, __Vtask_uvm_report_info__407__context_name, (IData)(__Vtask_uvm_report_info__407__report_enabled_checked));
        }
        this->__PVT__write_in_progress = 0U;
        this->__PVT__fname = ""s;
        this->__PVT__lineno = 0U;
        __Vlabel0: ;
    }
    co_return;}

VlCoroutine Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_read(Vpools_top__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_read\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__413__Vfuncout;
    __Vfunc_uvm_report_enabled__413__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__413__verbosity;
    __Vfunc_uvm_report_enabled__413__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__413__severity;
    __Vfunc_uvm_report_enabled__413__severity = 0;
    std::string __Vfunc_uvm_report_enabled__413__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__414__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__415__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__416__Vfuncout;
    __Vtask_uvm_report_enabled__416__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__417__id;
    std::string __Vtask_uvm_report_error__417__message;
    IData/*31:0*/ __Vtask_uvm_report_error__417__verbosity;
    __Vtask_uvm_report_error__417__verbosity = 0;
    std::string __Vtask_uvm_report_error__417__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__417__line;
    __Vtask_uvm_report_error__417__line = 0;
    std::string __Vtask_uvm_report_error__417__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__417__report_enabled_checked;
    __Vtask_uvm_report_error__417__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__418__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__419__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__420__Vfuncout;
    IData/*31:0*/ __Vtask_get_default_door__422__Vfuncout;
    __Vtask_get_default_door__422__Vfuncout = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_vreg_field_cbs> __Vtask_first__425__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_vreg_field_cbs> __Vtask_next__427__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_vreg_cbs> __Vtask_first__429__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_vreg_cbs> __Vtask_next__431__Vfuncout;
    IData/*31:0*/ __Vfunc_get_n_memlocs__432__Vfuncout;
    __Vfunc_get_n_memlocs__432__Vfuncout = 0;
    IData/*31:0*/ __Vtask_read__433__status;
    __Vtask_read__433__status = 0;
    QData/*63:0*/ __Vtask_read__433__value;
    __Vtask_read__433__value = 0;
    IData/*31:0*/ __Vtask_get_n_bytes__434__Vfuncout;
    __Vtask_get_n_bytes__434__Vfuncout = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_vreg_cbs> __Vtask_first__435__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_vreg_cbs> __Vtask_next__437__Vfuncout;
    IData/*31:0*/ __Vtask_get_lsb_pos_in_register__440__Vfuncout;
    __Vtask_get_lsb_pos_in_register__440__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bits__441__Vfuncout;
    __Vtask_get_n_bits__441__Vfuncout = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_vreg_field_cbs> __Vtask_first__442__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_vreg_field_cbs> __Vtask_next__444__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__446__Vfuncout;
    __Vfunc_uvm_report_enabled__446__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__446__verbosity;
    __Vfunc_uvm_report_enabled__446__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__446__severity;
    __Vfunc_uvm_report_enabled__446__severity = 0;
    std::string __Vfunc_uvm_report_enabled__446__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__447__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__448__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__449__Vfuncout;
    __Vtask_uvm_report_enabled__449__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__450__id;
    std::string __Vtask_uvm_report_info__450__message;
    IData/*31:0*/ __Vtask_uvm_report_info__450__verbosity;
    __Vtask_uvm_report_info__450__verbosity = 0;
    std::string __Vtask_uvm_report_info__450__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__450__line;
    __Vtask_uvm_report_info__450__line = 0;
    std::string __Vtask_uvm_report_info__450__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__450__report_enabled_checked;
    __Vtask_uvm_report_info__450__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__451__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__452__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__453__Vfuncout;
    std::string __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_5;
    std::string __Vtemp_6;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk416__DOT__i;
    unnamedblk416__DOT__i = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_callback_iter__pi67> unnamedblk416__DOT__unnamedblk417__DOT__cbs;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_vreg_field> unnamedblk416__DOT__unnamedblk417__DOT__f;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_vreg_field_cbs> unnamedblk416__DOT__unnamedblk417__DOT__unnamedblk418__DOT__cb;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_vreg_cbs> unnamedblk419__DOT__cb;
    IData/*31:0*/ unnamedblk420__DOT__i;
    unnamedblk420__DOT__i = 0;
    IData/*31:0*/ unnamedblk420__DOT__unnamedblk421__DOT__s;
    unnamedblk420__DOT__unnamedblk421__DOT__s = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_vreg_cbs> unnamedblk422__DOT__cb;
    IData/*31:0*/ unnamedblk423__DOT__i;
    unnamedblk423__DOT__i = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_callback_iter__pi67> unnamedblk423__DOT__unnamedblk424__DOT__cbs;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_vreg_field> unnamedblk423__DOT__unnamedblk424__DOT__f;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_vreg_field_cbs> unnamedblk423__DOT__unnamedblk424__DOT__unnamedblk425__DOT__cb;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_callback_iter__pi68> cbs;
    QData/*63:0*/ addr;
    addr = 0;
    QData/*63:0*/ tmp;
    tmp = 0;
    QData/*63:0*/ msk;
    msk = 0;
    IData/*31:0*/ lsb;
    lsb = 0;
    {
        cbs = VL_NEW(Vpools_top_uvm_pkg__03a__03auvm_callback_iter__pi68, vlSymsp, 
                     VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_vreg>{this});
        this->__PVT__read_in_progress = 1U;
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        if ((VlNull{} == this->__PVT__mem)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__413__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__413__severity = 2U;
                            __Vfunc_uvm_report_enabled__413__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__414__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__414__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__415__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__415__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__413__verbosity, (IData)(__Vfunc_uvm_report_enabled__413__severity), __Vfunc_uvm_report_enabled__413__id, __Vtask_uvm_report_enabled__416__Vfuncout);
                            __Vfunc_uvm_report_enabled__413__Vfuncout 
                                = __Vtask_uvm_report_enabled__416__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__413__Vfuncout))) {
                __Vtask_uvm_report_error__417__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__417__context_name = ""s;
                __Vtask_uvm_report_error__417__line = 0x000003edU;
                __Vtask_uvm_report_error__417__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__417__verbosity = 0U;
                __Vtemp_1 = ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__418__Vfuncout);
                    }(), __Vfunc_get_full_name__418__Vfuncout);
                __Vtask_uvm_report_error__417__message 
                    = VL_SFORMATF_N_NX("Cannot read from unimplemented virtual register \"%@\".",0,
                                       -1,&(__Vtemp_1)) ;
                __Vtask_uvm_report_error__417__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__419__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__419__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__420__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__420__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__417__id, __Vtask_uvm_report_error__417__message, __Vtask_uvm_report_error__417__verbosity, __Vtask_uvm_report_error__417__filename, __Vtask_uvm_report_error__417__line, __Vtask_uvm_report_error__417__context_name, (IData)(__Vtask_uvm_report_error__417__report_enabled_checked));
            }
            status = 1U;
            goto __Vlabel0;
        }
        if ((3U == path)) {
            VL_NULL_CHECK(this->__PVT__parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1011)->__VnoInFunc_get_default_door(vlSymsp, __Vtask_get_default_door__422__Vfuncout);
            path = __Vtask_get_default_door__422__Vfuncout;
        }
        unnamedblk416__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk416__DOT__i, this->__PVT__fields.size())) {
            unnamedblk416__DOT__unnamedblk417__DOT__cbs 
                = VL_NEW(Vpools_top_uvm_pkg__03a__03auvm_callback_iter__pi67, vlSymsp, this->__PVT__fields.at(unnamedblk416__DOT__i));
            unnamedblk416__DOT__unnamedblk417__DOT__f 
                = this->__PVT__fields.at(unnamedblk416__DOT__i);
            VL_NULL_CHECK(unnamedblk416__DOT__unnamedblk417__DOT__f, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1017)->__VnoInFunc_pre_read(vlSymsp, idx, path, map);
            VL_NULL_CHECK(unnamedblk416__DOT__unnamedblk417__DOT__cbs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1018)->__VnoInFunc_first(vlSymsp, __Vtask_first__425__Vfuncout);
            unnamedblk416__DOT__unnamedblk417__DOT__unnamedblk418__DOT__cb 
                = __Vtask_first__425__Vfuncout;
            while ((VlNull{} != unnamedblk416__DOT__unnamedblk417__DOT__unnamedblk418__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk416__DOT__unnamedblk417__DOT__unnamedblk418__DOT__cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1020)->__PVT__fname 
                    = this->__PVT__fname;
                VL_NULL_CHECK(unnamedblk416__DOT__unnamedblk417__DOT__unnamedblk418__DOT__cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1021)->__PVT__lineno 
                    = this->__PVT__lineno;
                VL_NULL_CHECK(unnamedblk416__DOT__unnamedblk417__DOT__unnamedblk418__DOT__cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1022)->__VnoInFunc_pre_read(vlSymsp, unnamedblk416__DOT__unnamedblk417__DOT__f, idx, path, map);
                VL_NULL_CHECK(unnamedblk416__DOT__unnamedblk417__DOT__cbs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1019)->__VnoInFunc_next(vlSymsp, __Vtask_next__427__Vfuncout);
                unnamedblk416__DOT__unnamedblk417__DOT__unnamedblk418__DOT__cb 
                    = __Vtask_next__427__Vfuncout;
            }
            unnamedblk416__DOT__i = ((IData)(1U) + unnamedblk416__DOT__i);
        }
        this->__VnoInFunc_pre_read(vlSymsp, idx, path, map);
        VL_NULL_CHECK(cbs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1026)->__VnoInFunc_first(vlSymsp, __Vtask_first__429__Vfuncout);
        unnamedblk419__DOT__cb = __Vtask_first__429__Vfuncout;
        while ((VlNull{} != unnamedblk419__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk419__DOT__cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1028)->__PVT__fname 
                = this->__PVT__fname;
            VL_NULL_CHECK(unnamedblk419__DOT__cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1029)->__PVT__lineno 
                = this->__PVT__lineno;
            VL_NULL_CHECK(unnamedblk419__DOT__cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1030)->__VnoInFunc_pre_read(vlSymsp, 
                                                                                VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_vreg>{this}, idx, path, map);
            VL_NULL_CHECK(cbs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1027)->__VnoInFunc_next(vlSymsp, __Vtask_next__431__Vfuncout);
            unnamedblk419__DOT__cb = __Vtask_next__431__Vfuncout;
        }
        addr = (this->__PVT__offset + (idx * (QData)((IData)(this->__PVT__incr))));
        lsb = 0U;
        value = 0ULL;
        status = 0U;
        unnamedblk420__DOT__i = 0U;
        while ((unnamedblk420__DOT__i < ([&]() {
                        this->__VnoInFunc_get_n_memlocs(vlSymsp, __Vfunc_get_n_memlocs__432__Vfuncout);
                    }(), __Vfunc_get_n_memlocs__432__Vfuncout))) {
            co_await VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1041)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__433__status, 
                                                                                (addr 
                                                                                + (QData)((IData)(unnamedblk420__DOT__i))), __Vtask_read__433__value, path, map, parent, 0xffffffffU, extension, fname, lineno);
            unnamedblk420__DOT__unnamedblk421__DOT__s 
                = __Vtask_read__433__status;
            tmp = __Vtask_read__433__value;
            if (((0U != unnamedblk420__DOT__unnamedblk421__DOT__s) 
                 & (2U != unnamedblk420__DOT__unnamedblk421__DOT__s))) {
                status = unnamedblk420__DOT__unnamedblk421__DOT__s;
            }
            value = (value | VL_SHIFTL_QQI(64,64,32, tmp, lsb));
            lsb = (lsb + VL_SHIFTL_III(32,32,32, ([&]() {
                            VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1045)
                                                  ->__VnoInFunc_get_n_bytes(vlSymsp, __Vtask_get_n_bytes__434__Vfuncout);
                        }(), __Vtask_get_n_bytes__434__Vfuncout), 3U));
            unnamedblk420__DOT__i = ((IData)(1U) + unnamedblk420__DOT__i);
        }
        VL_NULL_CHECK(cbs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1048)->__VnoInFunc_first(vlSymsp, __Vtask_first__435__Vfuncout);
        unnamedblk422__DOT__cb = __Vtask_first__435__Vfuncout;
        while ((VlNull{} != unnamedblk422__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk422__DOT__cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1050)->__PVT__fname 
                = this->__PVT__fname;
            VL_NULL_CHECK(unnamedblk422__DOT__cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1051)->__PVT__lineno 
                = this->__PVT__lineno;
            VL_NULL_CHECK(unnamedblk422__DOT__cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1052)->__VnoInFunc_post_read(vlSymsp, 
                                                                                VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_vreg>{this}, idx, value, path, map, status);
            VL_NULL_CHECK(cbs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1049)->__VnoInFunc_next(vlSymsp, __Vtask_next__437__Vfuncout);
            unnamedblk422__DOT__cb = __Vtask_next__437__Vfuncout;
        }
        this->__VnoInFunc_post_read(vlSymsp, idx, value, path, map, status);
        unnamedblk423__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk423__DOT__i, this->__PVT__fields.size())) {
            unnamedblk423__DOT__unnamedblk424__DOT__cbs 
                = VL_NEW(Vpools_top_uvm_pkg__03a__03auvm_callback_iter__pi67, vlSymsp, this->__PVT__fields.at(unnamedblk423__DOT__i));
            unnamedblk423__DOT__unnamedblk424__DOT__f 
                = this->__PVT__fields.at(unnamedblk423__DOT__i);
            VL_NULL_CHECK(unnamedblk423__DOT__unnamedblk424__DOT__f, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1059)->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __Vtask_get_lsb_pos_in_register__440__Vfuncout);
            lsb = __Vtask_get_lsb_pos_in_register__440__Vfuncout;
            msk = VL_SHIFTL_QQI(64,64,32, (VL_SHIFTL_QQI(64,64,32, 1ULL, 
                                                         ([&]() {
                                VL_NULL_CHECK(unnamedblk423__DOT__unnamedblk424__DOT__f, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1061)
                                                          ->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__441__Vfuncout);
                            }(), __Vtask_get_n_bits__441__Vfuncout)) 
                                           - 1ULL), lsb);
            tmp = VL_SHIFTR_QQI(64,64,32, (value & msk), lsb);
            VL_NULL_CHECK(unnamedblk423__DOT__unnamedblk424__DOT__cbs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1064)->__VnoInFunc_first(vlSymsp, __Vtask_first__442__Vfuncout);
            unnamedblk423__DOT__unnamedblk424__DOT__unnamedblk425__DOT__cb 
                = __Vtask_first__442__Vfuncout;
            while ((VlNull{} != unnamedblk423__DOT__unnamedblk424__DOT__unnamedblk425__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk423__DOT__unnamedblk424__DOT__unnamedblk425__DOT__cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1066)->__PVT__fname 
                    = this->__PVT__fname;
                VL_NULL_CHECK(unnamedblk423__DOT__unnamedblk424__DOT__unnamedblk425__DOT__cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1067)->__PVT__lineno 
                    = this->__PVT__lineno;
                VL_NULL_CHECK(unnamedblk423__DOT__unnamedblk424__DOT__unnamedblk425__DOT__cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1068)->__VnoInFunc_post_read(vlSymsp, unnamedblk423__DOT__unnamedblk424__DOT__f, idx, tmp, path, map, status);
                VL_NULL_CHECK(unnamedblk423__DOT__unnamedblk424__DOT__cbs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1065)->__VnoInFunc_next(vlSymsp, __Vtask_next__444__Vfuncout);
                unnamedblk423__DOT__unnamedblk424__DOT__unnamedblk425__DOT__cb 
                    = __Vtask_next__444__Vfuncout;
            }
            VL_NULL_CHECK(unnamedblk423__DOT__unnamedblk424__DOT__f, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1070)->__VnoInFunc_post_read(vlSymsp, idx, tmp, path, map, status);
            value = ((value & (~ msk)) | VL_SHIFTL_QQI(64,64,32, tmp, lsb));
            unnamedblk423__DOT__i = ((IData)(1U) + unnamedblk423__DOT__i);
        }
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__446__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__446__severity = 0U;
                        __Vfunc_uvm_report_enabled__446__verbosity = 0x000000c8U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__447__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__447__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__448__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__448__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__446__verbosity, (IData)(__Vfunc_uvm_report_enabled__446__severity), __Vfunc_uvm_report_enabled__446__id, __Vtask_uvm_report_enabled__449__Vfuncout);
                        __Vfunc_uvm_report_enabled__446__Vfuncout 
                            = __Vtask_uvm_report_enabled__449__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__446__Vfuncout))) {
            __Vtask_uvm_report_info__450__report_enabled_checked = 1U;
            __Vtask_uvm_report_info__450__context_name = ""s;
            __Vtask_uvm_report_info__450__line = 0x00000436U;
            __Vtask_uvm_report_info__450__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
            __Vtask_uvm_report_info__450__verbosity = 0x000000c8U;
            __Vtemp_5[0U] = 0x646f6f72U;
            if ((0U == path)) {
                __Vtemp_5[1U] = 0x726f6e74U;
                __Vtemp_5[2U] = 0x00000066U;
            } else {
                __Vtemp_5[1U] = 0x6261636bU;
                __Vtemp_5[2U] = 0U;
            }
            __Vtemp_6 = ([&]() {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__451__Vfuncout);
                }(), __Vfunc_get_full_name__451__Vfuncout);
            __Vtask_uvm_report_info__450__message = VL_SFORMATF_N_NX("Read virtual register \"%@\"[%0#] via %s: 'h%x",0,
                                                                     -1,
                                                                     &(__Vtemp_6),
                                                                     64,
                                                                     idx,
                                                                     72,
                                                                     __Vtemp_5.data(),
                                                                     64,
                                                                     value) ;
            __Vtask_uvm_report_info__450__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__452__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__452__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__453__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__453__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__450__id, __Vtask_uvm_report_info__450__message, __Vtask_uvm_report_info__450__verbosity, __Vtask_uvm_report_info__450__filename, __Vtask_uvm_report_info__450__line, __Vtask_uvm_report_info__450__context_name, (IData)(__Vtask_uvm_report_info__450__report_enabled_checked));
        }
        this->__PVT__read_in_progress = 0U;
        this->__PVT__fname = ""s;
        this->__PVT__lineno = 0U;
        __Vlabel0: ;
    }
    co_return;}

void Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_poke(Vpools_top__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ value, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_poke\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__455__Vfuncout;
    __Vfunc_uvm_report_enabled__455__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__455__verbosity;
    __Vfunc_uvm_report_enabled__455__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__455__severity;
    __Vfunc_uvm_report_enabled__455__severity = 0;
    std::string __Vfunc_uvm_report_enabled__455__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__456__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__457__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__458__Vfuncout;
    __Vtask_uvm_report_enabled__458__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__459__id;
    std::string __Vtask_uvm_report_error__459__message;
    IData/*31:0*/ __Vtask_uvm_report_error__459__verbosity;
    __Vtask_uvm_report_error__459__verbosity = 0;
    std::string __Vtask_uvm_report_error__459__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__459__line;
    __Vtask_uvm_report_error__459__line = 0;
    std::string __Vtask_uvm_report_error__459__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__459__report_enabled_checked;
    __Vtask_uvm_report_error__459__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__460__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__461__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__462__Vfuncout;
    IData/*31:0*/ __Vfunc_get_n_memlocs__464__Vfuncout;
    __Vfunc_get_n_memlocs__464__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bytes__465__Vfuncout;
    __Vtask_get_n_bytes__465__Vfuncout = 0;
    IData/*31:0*/ __Vtask_poke__466__status;
    __Vtask_poke__466__status = 0;
    IData/*31:0*/ __Vtask_get_n_bytes__467__Vfuncout;
    __Vtask_get_n_bytes__467__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__468__Vfuncout;
    __Vfunc_uvm_report_enabled__468__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__468__verbosity;
    __Vfunc_uvm_report_enabled__468__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__468__severity;
    __Vfunc_uvm_report_enabled__468__severity = 0;
    std::string __Vfunc_uvm_report_enabled__468__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__469__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__470__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__471__Vfuncout;
    __Vtask_uvm_report_enabled__471__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__472__id;
    std::string __Vtask_uvm_report_info__472__message;
    IData/*31:0*/ __Vtask_uvm_report_info__472__verbosity;
    __Vtask_uvm_report_info__472__verbosity = 0;
    std::string __Vtask_uvm_report_info__472__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__472__line;
    __Vtask_uvm_report_info__472__line = 0;
    std::string __Vtask_uvm_report_info__472__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__472__report_enabled_checked;
    __Vtask_uvm_report_info__472__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__473__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__474__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__475__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ unnamedblk426__DOT__i;
    unnamedblk426__DOT__i = 0;
    IData/*31:0*/ unnamedblk426__DOT__unnamedblk427__DOT__s;
    unnamedblk426__DOT__unnamedblk427__DOT__s = 0;
    QData/*63:0*/ addr;
    addr = 0;
    QData/*63:0*/ tmp;
    tmp = 0;
    QData/*63:0*/ msk;
    msk = 0;
    IData/*31:0*/ lsb;
    lsb = 0;
    {
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        if ((VlNull{} == this->__PVT__mem)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__455__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__455__severity = 2U;
                            __Vfunc_uvm_report_enabled__455__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__456__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__456__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__457__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__457__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__455__verbosity, (IData)(__Vfunc_uvm_report_enabled__455__severity), __Vfunc_uvm_report_enabled__455__id, __Vtask_uvm_report_enabled__458__Vfuncout);
                            __Vfunc_uvm_report_enabled__455__Vfuncout 
                                = __Vtask_uvm_report_enabled__458__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__455__Vfuncout))) {
                __Vtask_uvm_report_error__459__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__459__context_name = ""s;
                __Vtask_uvm_report_error__459__line = 0x0000044dU;
                __Vtask_uvm_report_error__459__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__459__verbosity = 0U;
                __Vtemp_1 = ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__460__Vfuncout);
                    }(), __Vfunc_get_full_name__460__Vfuncout);
                __Vtask_uvm_report_error__459__message 
                    = VL_SFORMATF_N_NX("Cannot poke in unimplemented virtual register \"%@\".",0,
                                       -1,&(__Vtemp_1)) ;
                __Vtask_uvm_report_error__459__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__461__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__461__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__462__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__462__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__459__id, __Vtask_uvm_report_error__459__message, __Vtask_uvm_report_error__459__verbosity, __Vtask_uvm_report_error__459__filename, __Vtask_uvm_report_error__459__line, __Vtask_uvm_report_error__459__context_name, (IData)(__Vtask_uvm_report_error__459__report_enabled_checked));
            }
            status = 1U;
            goto __Vlabel0;
        }
        addr = (this->__PVT__offset + (idx * (QData)((IData)(this->__PVT__incr))));
        lsb = 0U;
        status = 0U;
        unnamedblk426__DOT__i = 0U;
        while ((unnamedblk426__DOT__i < ([&]() {
                        this->__VnoInFunc_get_n_memlocs(vlSymsp, __Vfunc_get_n_memlocs__464__Vfuncout);
                    }(), __Vfunc_get_n_memlocs__464__Vfuncout))) {
            msk = VL_SHIFTL_QQI(64,64,32, (VL_SHIFTL_QQI(64,64,32, 1ULL, 
                                                         VL_SHIFTL_III(32,32,32, 
                                                                       ([&]() {
                                    VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1113)
                                                                        ->__VnoInFunc_get_n_bytes(vlSymsp, __Vtask_get_n_bytes__465__Vfuncout);
                                }(), __Vtask_get_n_bytes__465__Vfuncout), 3U)) 
                                           - 1ULL), lsb);
            tmp = VL_SHIFTR_QQI(64,64,32, (value & msk), lsb);
            VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1116)->__VnoInFunc_poke(vlProcess, vlSymsp, __Vtask_poke__466__status, 
                                                                                (addr 
                                                                                + (QData)((IData)(unnamedblk426__DOT__i))), tmp, ""s, parent, extension, fname, lineno);
            status = __Vtask_poke__466__status;
            if (((0U != unnamedblk426__DOT__unnamedblk427__DOT__s) 
                 & (2U != unnamedblk426__DOT__unnamedblk427__DOT__s))) {
                status = unnamedblk426__DOT__unnamedblk427__DOT__s;
            }
            lsb = (lsb + VL_SHIFTL_III(32,32,32, ([&]() {
                            VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1119)
                                                  ->__VnoInFunc_get_n_bytes(vlSymsp, __Vtask_get_n_bytes__467__Vfuncout);
                        }(), __Vtask_get_n_bytes__467__Vfuncout), 3U));
            unnamedblk426__DOT__i = ((IData)(1U) + unnamedblk426__DOT__i);
        }
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__468__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__468__severity = 0U;
                        __Vfunc_uvm_report_enabled__468__verbosity = 0x000000c8U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__469__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__469__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__470__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__470__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__468__verbosity, (IData)(__Vfunc_uvm_report_enabled__468__severity), __Vfunc_uvm_report_enabled__468__id, __Vtask_uvm_report_enabled__471__Vfuncout);
                        __Vfunc_uvm_report_enabled__468__Vfuncout 
                            = __Vtask_uvm_report_enabled__471__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__468__Vfuncout))) {
            __Vtask_uvm_report_info__472__report_enabled_checked = 1U;
            __Vtask_uvm_report_info__472__context_name = ""s;
            __Vtask_uvm_report_info__472__line = 0x00000463U;
            __Vtask_uvm_report_info__472__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
            __Vtask_uvm_report_info__472__verbosity = 0x000000c8U;
            __Vtemp_2 = ([&]() {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__473__Vfuncout);
                }(), __Vfunc_get_full_name__473__Vfuncout);
            __Vtask_uvm_report_info__472__message = VL_SFORMATF_N_NX("Poked virtual register \"%@\"[%0#] with: 'h%x",0,
                                                                     -1,
                                                                     &(__Vtemp_2),
                                                                     64,
                                                                     idx,
                                                                     64,
                                                                     value) ;
            __Vtask_uvm_report_info__472__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__474__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__474__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__475__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__475__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__472__id, __Vtask_uvm_report_info__472__message, __Vtask_uvm_report_info__472__verbosity, __Vtask_uvm_report_info__472__filename, __Vtask_uvm_report_info__472__line, __Vtask_uvm_report_info__472__context_name, (IData)(__Vtask_uvm_report_info__472__report_enabled_checked));
        }
        this->__PVT__fname = ""s;
        this->__PVT__lineno = 0U;
        __Vlabel0: ;
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_peek(Vpools_top__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ &value, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_peek\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__477__Vfuncout;
    __Vfunc_uvm_report_enabled__477__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__477__verbosity;
    __Vfunc_uvm_report_enabled__477__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__477__severity;
    __Vfunc_uvm_report_enabled__477__severity = 0;
    std::string __Vfunc_uvm_report_enabled__477__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__478__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__479__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__480__Vfuncout;
    __Vtask_uvm_report_enabled__480__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__481__id;
    std::string __Vtask_uvm_report_error__481__message;
    IData/*31:0*/ __Vtask_uvm_report_error__481__verbosity;
    __Vtask_uvm_report_error__481__verbosity = 0;
    std::string __Vtask_uvm_report_error__481__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__481__line;
    __Vtask_uvm_report_error__481__line = 0;
    std::string __Vtask_uvm_report_error__481__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__481__report_enabled_checked;
    __Vtask_uvm_report_error__481__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__482__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__483__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__484__Vfuncout;
    IData/*31:0*/ __Vfunc_get_n_memlocs__486__Vfuncout;
    __Vfunc_get_n_memlocs__486__Vfuncout = 0;
    IData/*31:0*/ __Vtask_peek__487__status;
    __Vtask_peek__487__status = 0;
    QData/*63:0*/ __Vtask_peek__487__value;
    __Vtask_peek__487__value = 0;
    IData/*31:0*/ __Vtask_get_n_bytes__488__Vfuncout;
    __Vtask_get_n_bytes__488__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__489__Vfuncout;
    __Vfunc_uvm_report_enabled__489__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__489__verbosity;
    __Vfunc_uvm_report_enabled__489__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__489__severity;
    __Vfunc_uvm_report_enabled__489__severity = 0;
    std::string __Vfunc_uvm_report_enabled__489__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__490__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__491__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__492__Vfuncout;
    __Vtask_uvm_report_enabled__492__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__493__id;
    std::string __Vtask_uvm_report_info__493__message;
    IData/*31:0*/ __Vtask_uvm_report_info__493__verbosity;
    __Vtask_uvm_report_info__493__verbosity = 0;
    std::string __Vtask_uvm_report_info__493__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__493__line;
    __Vtask_uvm_report_info__493__line = 0;
    std::string __Vtask_uvm_report_info__493__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__493__report_enabled_checked;
    __Vtask_uvm_report_info__493__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__494__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__495__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__496__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ unnamedblk428__DOT__i;
    unnamedblk428__DOT__i = 0;
    IData/*31:0*/ unnamedblk428__DOT__unnamedblk429__DOT__s;
    unnamedblk428__DOT__unnamedblk429__DOT__s = 0;
    QData/*63:0*/ addr;
    addr = 0;
    QData/*63:0*/ tmp;
    tmp = 0;
    QData/*63:0*/ msk;
    msk = 0;
    IData/*31:0*/ lsb;
    lsb = 0;
    {
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        if ((VlNull{} == this->__PVT__mem)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__477__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__477__severity = 2U;
                            __Vfunc_uvm_report_enabled__477__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__478__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__478__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__479__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__479__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__477__verbosity, (IData)(__Vfunc_uvm_report_enabled__477__severity), __Vfunc_uvm_report_enabled__477__id, __Vtask_uvm_report_enabled__480__Vfuncout);
                            __Vfunc_uvm_report_enabled__477__Vfuncout 
                                = __Vtask_uvm_report_enabled__480__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__477__Vfuncout))) {
                __Vtask_uvm_report_error__481__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__481__context_name = ""s;
                __Vtask_uvm_report_error__481__line = 0x00000479U;
                __Vtask_uvm_report_error__481__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
                __Vtask_uvm_report_error__481__verbosity = 0U;
                __Vtemp_1 = ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__482__Vfuncout);
                    }(), __Vfunc_get_full_name__482__Vfuncout);
                __Vtask_uvm_report_error__481__message 
                    = VL_SFORMATF_N_NX("Cannot peek in from unimplemented virtual register \"%@\".",0,
                                       -1,&(__Vtemp_1)) ;
                __Vtask_uvm_report_error__481__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__483__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__483__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__484__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__484__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__481__id, __Vtask_uvm_report_error__481__message, __Vtask_uvm_report_error__481__verbosity, __Vtask_uvm_report_error__481__filename, __Vtask_uvm_report_error__481__line, __Vtask_uvm_report_error__481__context_name, (IData)(__Vtask_uvm_report_error__481__report_enabled_checked));
            }
            status = 1U;
            goto __Vlabel0;
        }
        addr = (this->__PVT__offset + (idx * (QData)((IData)(this->__PVT__incr))));
        lsb = 0U;
        value = 0ULL;
        status = 0U;
        unnamedblk428__DOT__i = 0U;
        while ((unnamedblk428__DOT__i < ([&]() {
                        this->__VnoInFunc_get_n_memlocs(vlSymsp, __Vfunc_get_n_memlocs__486__Vfuncout);
                    }(), __Vfunc_get_n_memlocs__486__Vfuncout))) {
            VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1158)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__487__status, 
                                                                                (addr 
                                                                                + (QData)((IData)(unnamedblk428__DOT__i))), __Vtask_peek__487__value, ""s, parent, extension, fname, lineno);
            status = __Vtask_peek__487__status;
            tmp = __Vtask_peek__487__value;
            if (((0U != unnamedblk428__DOT__unnamedblk429__DOT__s) 
                 & (2U != unnamedblk428__DOT__unnamedblk429__DOT__s))) {
                status = unnamedblk428__DOT__unnamedblk429__DOT__s;
            }
            value = (value | VL_SHIFTL_QQI(64,64,32, tmp, lsb));
            lsb = (lsb + VL_SHIFTL_III(32,32,32, ([&]() {
                            VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1162)
                                                  ->__VnoInFunc_get_n_bytes(vlSymsp, __Vtask_get_n_bytes__488__Vfuncout);
                        }(), __Vtask_get_n_bytes__488__Vfuncout), 3U));
            unnamedblk428__DOT__i = ((IData)(1U) + unnamedblk428__DOT__i);
        }
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__489__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__489__severity = 0U;
                        __Vfunc_uvm_report_enabled__489__verbosity = 0x000000c8U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__490__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__490__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__491__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__491__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__489__verbosity, (IData)(__Vfunc_uvm_report_enabled__489__severity), __Vfunc_uvm_report_enabled__489__id, __Vtask_uvm_report_enabled__492__Vfuncout);
                        __Vfunc_uvm_report_enabled__489__Vfuncout 
                            = __Vtask_uvm_report_enabled__492__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__489__Vfuncout))) {
            __Vtask_uvm_report_info__493__report_enabled_checked = 1U;
            __Vtask_uvm_report_info__493__context_name = ""s;
            __Vtask_uvm_report_info__493__line = 0x0000048eU;
            __Vtask_uvm_report_info__493__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh"s;
            __Vtask_uvm_report_info__493__verbosity = 0x000000c8U;
            __Vtemp_2 = ([&]() {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__494__Vfuncout);
                }(), __Vfunc_get_full_name__494__Vfuncout);
            __Vtask_uvm_report_info__493__message = VL_SFORMATF_N_NX("Peeked virtual register \"%@\"[%0#]: 'h%x",0,
                                                                     -1,
                                                                     &(__Vtemp_2),
                                                                     64,
                                                                     idx,
                                                                     64,
                                                                     value) ;
            __Vtask_uvm_report_info__493__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__495__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__495__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__496__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__496__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__493__id, __Vtask_uvm_report_info__493__message, __Vtask_uvm_report_info__493__verbosity, __Vtask_uvm_report_info__493__filename, __Vtask_uvm_report_info__493__line, __Vtask_uvm_report_info__493__context_name, (IData)(__Vtask_uvm_report_info__493__report_enabled_checked));
        }
        this->__PVT__fname = ""s;
        this->__PVT__lineno = 0U;
        __Vlabel0: ;
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_do_print(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_do_print\n"); );
    // Locals
    std::string __Vtask_get_type_name__500__Vfuncout;
    std::string __Vfunc_convert2string__501__Vfuncout;
    // Body
    Vpools_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1176)->__VnoInFunc_print_generic(vlProcess, vlSymsp, "initiator"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                    VL_NULL_CHECK(this->__PVT__parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1176)
                                                                                ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__500__Vfuncout);
                }(), __Vtask_get_type_name__500__Vfuncout)), 0xffffffffU, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                    this->__VnoInFunc_convert2string(vlProcess, vlSymsp, __Vfunc_convert2string__501__Vfuncout);
                }(), __Vfunc_convert2string__501__Vfuncout)), 0x2eU);
}

void Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_convert2string\n"); );
    // Locals
    std::string __Vfunc_get_full_name__502__Vfuncout;
    std::string __Vtask_get_full_name__504__Vfuncout;
    QData/*63:0*/ __Vfunc_get_address__505__Vfuncout;
    __Vfunc_get_address__505__Vfuncout = 0;
    std::string __Vtask_get_full_name__506__Vfuncout;
    QData/*63:0*/ __Vfunc_get_address__507__Vfuncout;
    __Vfunc_get_address__507__Vfuncout = 0;
    std::string __Vtask_convert2string__508__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    // Body
    VlQueue<VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_map>> unnamedblk430__DOT__maps;
    IData/*31:0*/ unnamedblk430__DOT__unnamedblk431__DOT__i;
    unnamedblk430__DOT__unnamedblk431__DOT__i = 0;
    QData/*63:0*/ unnamedblk430__DOT__unnamedblk431__DOT__unnamedblk432__DOT__addr0;
    unnamedblk430__DOT__unnamedblk431__DOT__unnamedblk432__DOT__addr0 = 0;
    IData/*31:0*/ unnamedblk433__DOT__i;
    unnamedblk433__DOT__i = 0;
    std::string res_str;
    std::string t_str;
    CData/*0:0*/ with_debug_info;
    with_debug_info = 0;
    __Vtemp_1 = ([&]() {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__502__Vfuncout);
        }(), __Vfunc_get_full_name__502__Vfuncout);
    VL_SFORMAT_NX(64,convert2string__Vfuncrtn,"Virtual register %@ -- ",0,
                  -1,&(__Vtemp_1));
    if ((0ULL == this->__PVT__size)) {
        VL_SFORMAT_NX(64,convert2string__Vfuncrtn,"%@unimplemented",0,
                      -1,&(convert2string__Vfuncrtn));
    } else {
        VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1190)->__VnoInFunc_get_maps(vlSymsp, unnamedblk430__DOT__maps);
        __Vtemp_2 = ([&]() {
                VL_NULL_CHECK(this->__PVT__mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1193)
                     ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__504__Vfuncout);
            }(), __Vtask_get_full_name__504__Vfuncout);
        VL_SFORMAT_NX(64,convert2string__Vfuncrtn,"%@[%0#] in %0@['h%0x+'h%0x]\n",0,
                      -1,&(convert2string__Vfuncrtn),
                      64,this->__PVT__size,-1,&(__Vtemp_2),
                      64,this->__PVT__offset,32,this->__PVT__incr);
        unnamedblk430__DOT__unnamedblk431__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk430__DOT__unnamedblk431__DOT__i, unnamedblk430__DOT__maps.size())) {
            this->__VnoInFunc_get_address(vlProcess, vlSymsp, 0ULL, unnamedblk430__DOT__maps.at(unnamedblk430__DOT__unnamedblk431__DOT__i), __Vfunc_get_address__505__Vfuncout);
            unnamedblk430__DOT__unnamedblk431__DOT__unnamedblk432__DOT__addr0 
                = __Vfunc_get_address__505__Vfuncout;
            __Vtemp_3 = ([&]() {
                    VL_NULL_CHECK(unnamedblk430__DOT__maps.at(unnamedblk430__DOT__unnamedblk431__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1198)
                         ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__506__Vfuncout);
                }(), __Vtask_get_full_name__506__Vfuncout);
            VL_SFORMAT_NX(64,convert2string__Vfuncrtn
                          ,"  Address in map '%@' -- @'h%0x+%0x",0,
                          -1,&(__Vtemp_3),64,unnamedblk430__DOT__unnamedblk431__DOT__unnamedblk432__DOT__addr0,
                          64,(([&]() {
                                this->__VnoInFunc_get_address(vlProcess, vlSymsp, 1ULL, unnamedblk430__DOT__maps.at(unnamedblk430__DOT__unnamedblk431__DOT__i), __Vfunc_get_address__507__Vfuncout);
                            }(), __Vfunc_get_address__507__Vfuncout) 
                              - unnamedblk430__DOT__unnamedblk431__DOT__unnamedblk432__DOT__addr0));
            unnamedblk430__DOT__unnamedblk431__DOT__i 
                = ((IData)(1U) + unnamedblk430__DOT__unnamedblk431__DOT__i);
        }
    }
    unnamedblk433__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk433__DOT__i, this->__PVT__fields.size())) {
        __Vtemp_4 = ([&]() {
                VL_NULL_CHECK(this->__PVT__fields.at(unnamedblk433__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg.svh", 1203)
                     ->__VnoInFunc_convert2string(vlProcess, vlSymsp, __Vtask_convert2string__508__Vfuncout);
            }(), __Vtask_convert2string__508__Vfuncout);
        VL_SFORMAT_NX(64,convert2string__Vfuncrtn,"%@\n%@",0,
                      -1,&(convert2string__Vfuncrtn),
                      -1,&(__Vtemp_4));
        unnamedblk433__DOT__i = ((IData)(1U) + unnamedblk433__DOT__i);
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_clone(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_clone\n"); );
    // Body
    clone__Vfuncrtn = VlNull{};
}

void Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_do_copy\n"); );
}

void Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_do_compare(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_do_compare\n"); );
    // Body
    do_compare__Vfuncrtn = 0U;
}

void Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_do_pack(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_do_pack\n"); );
}

void Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_do_unpack(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_do_unpack\n"); );
}

void Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_randomize(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__510__Vfuncout;
    __Vfunc___VBasicRand__510__Vfuncout = 0;
    // Body
    Vpools_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vpools_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__510__Vfuncout);
            }(), __Vfunc___VBasicRand__510__Vfuncout));
}

void Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc___Vsetup_constraints(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc___VBasicRand(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_vreg::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vpools_top_uvm_pkg__03a__03auvm_vreg::_ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_vreg::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__locked = 0;
    __PVT__n_bits = 0;
    __PVT__n_used_bits = 0;
    __PVT__offset = 0;
    __PVT__incr = 0;
    __PVT__size = 0;
    __PVT__is_static = 0;
    __PVT__lineno = 0;
    __PVT__read_in_progress = 0;
    __PVT__write_in_progress = 0;
}

Vpools_top_uvm_pkg__03a__03auvm_vreg::~Vpools_top_uvm_pkg__03a__03auvm_vreg() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_vreg::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_vreg>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_vreg::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vpools_top_uvm_pkg__03a__03auvm_vreg::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_vreg::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vpools_top_uvm_pkg__03a__03auvm_vreg::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_vreg::to_string_middle\n"); );
    // Body
    std::string out;
    out += "locked:" + VL_TO_STRING(__PVT__locked);
    out += ", parent:" + VL_TO_STRING(__PVT__parent);
    out += ", n_bits:" + VL_TO_STRING(__PVT__n_bits);
    out += ", n_used_bits:" + VL_TO_STRING(__PVT__n_used_bits);
    out += ", fields:" + VL_TO_STRING(__PVT__fields);
    out += ", mem:" + VL_TO_STRING(__PVT__mem);
    out += ", offset:" + VL_TO_STRING(__PVT__offset);
    out += ", incr:" + VL_TO_STRING(__PVT__incr);
    out += ", size:" + VL_TO_STRING(__PVT__size);
    out += ", is_static:" + VL_TO_STRING(__PVT__is_static);
    out += ", region:" + VL_TO_STRING(__PVT__region);
    out += ", atomic:" + VL_TO_STRING(__PVT__atomic);
    out += ", fname:" + VL_TO_STRING(__PVT__fname);
    out += ", lineno:" + VL_TO_STRING(__PVT__lineno);
    out += ", read_in_progress:" + VL_TO_STRING(__PVT__read_in_progress);
    out += ", write_in_progress:" + VL_TO_STRING(__PVT__write_in_progress);
    out += ", "+ Vpools_top_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
