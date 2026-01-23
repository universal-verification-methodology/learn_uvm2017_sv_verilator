// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_and_gate_uvm.h for the primary calling header

#include "Vtest_and_gate_uvm__pch.h"

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file__Vclpkg::__VnoInFunc_get_type(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__pi116> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__pi116> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi116__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file__Vclpkg::__VnoInFunc_type_name(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_reg_file"s;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_object_type(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__pi116> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi116__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_create(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file> tmp;
    tmp = ((""s == name) ? VL_NEW(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file, vlProcess, vlSymsp, ""s)
            : VL_NEW(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_type_name(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_file"s;
}

Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name)
    : Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__default_hdl_path = "RTL"s;
    ;
    this->__PVT__hdl_paths_pool = VL_NEW(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_string_pool__Tz219, vlProcess, vlSymsp, "hdl_paths"s);
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_configure(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_block> blk_parent, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file> regfile_parent, std::string hdl_path) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_configure\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__5__Vfuncout;
    __Vfunc_uvm_report_enabled__5__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__5__verbosity;
    __Vfunc_uvm_report_enabled__5__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__5__severity;
    __Vfunc_uvm_report_enabled__5__severity = 0;
    std::string __Vfunc_uvm_report_enabled__5__id;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__6__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__7__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__8__Vfuncout;
    __Vtask_uvm_report_enabled__8__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__9__id;
    std::string __Vtask_uvm_report_error__9__message;
    IData/*31:0*/ __Vtask_uvm_report_error__9__verbosity;
    __Vtask_uvm_report_error__9__verbosity = 0;
    std::string __Vtask_uvm_report_error__9__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__9__line;
    __Vtask_uvm_report_error__9__line = 0;
    std::string __Vtask_uvm_report_error__9__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__9__report_enabled_checked;
    __Vtask_uvm_report_error__9__report_enabled_checked = 0;
    std::string __Vfunc_get_name__10__Vfuncout;
    std::string __Vfunc_get_type_name__11__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__12__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__13__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    {
        if ((VlNull{} == blk_parent)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__5__id = "UVM/RFILE/CFG/NOBLK"s;
                            __Vfunc_uvm_report_enabled__5__severity = 2U;
                            __Vfunc_uvm_report_enabled__5__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__6__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__6__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__7__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__7__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__5__verbosity, (IData)(__Vfunc_uvm_report_enabled__5__severity), __Vfunc_uvm_report_enabled__5__id, __Vtask_uvm_report_enabled__8__Vfuncout);
                            __Vfunc_uvm_report_enabled__5__Vfuncout 
                                = __Vtask_uvm_report_enabled__8__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__5__Vfuncout))) {
                __Vtask_uvm_report_error__9__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__9__context_name = ""s;
                __Vtask_uvm_report_error__9__line = 0x00000094U;
                __Vtask_uvm_report_error__9__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_file.svh"s;
                __Vtask_uvm_report_error__9__verbosity = 0U;
                __Vtask_uvm_report_error__9__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("uvm_reg_file::configure() called without a parent block for instance \""s, 
                                                                                ([&]() {
                                    this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__10__Vfuncout);
                                }(), __Vfunc_get_name__10__Vfuncout)), "\" of register file type \""s), 
                                                                                ([&]() {
                                    this->__VnoInFunc_get_type_name(vlSymsp, __Vfunc_get_type_name__11__Vfuncout);
                                }(), __Vfunc_get_type_name__11__Vfuncout)), "\"."s));
                            __Vtask_uvm_report_error__9__id = "UVM/RFILE/CFG/NOBLK"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__12__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                = __Vfunc_get__12__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__13__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                = __Vtask_get_root__13__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                                                        ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__9__id, __Vtask_uvm_report_error__9__message, __Vtask_uvm_report_error__9__verbosity, __Vtask_uvm_report_error__9__filename, __Vtask_uvm_report_error__9__line, __Vtask_uvm_report_error__9__context_name, (IData)(__Vtask_uvm_report_error__9__report_enabled_checked));
                        }
                        goto __Vlabel0;
                    }
                    this->__PVT__parent = blk_parent;
                    this->__PVT__m_rf = regfile_parent;
                    this->__VnoInFunc_add_hdl_path(vlSymsp, hdl_path, "RTL"s);
                    __Vlabel0: ;
                }
            }

            void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_block(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_block> &get_block__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_block\n"); );
                // Body
                get_block__Vfuncrtn = this->__PVT__parent;
            }

            void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_regfile(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file> &get_regfile__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_regfile\n"); );
                // Body
                get_regfile__Vfuncrtn = this->__PVT__m_rf;
            }

            void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_clear_hdl_path(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string kind) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_clear_hdl_path\n"); );
                // Locals
                std::string __Vtask_get_default_hdl_path__17__Vfuncout;
                std::string __Vtask_get_default_hdl_path__18__Vfuncout;
                IData/*31:0*/ __Vtask_exists__19__Vfuncout;
                __Vtask_exists__19__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__20__Vfuncout;
                __Vfunc_uvm_report_enabled__20__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__20__verbosity;
                __Vfunc_uvm_report_enabled__20__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__20__severity;
                __Vfunc_uvm_report_enabled__20__severity = 0;
                std::string __Vfunc_uvm_report_enabled__20__id;
                VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__21__Vfuncout;
                VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__22__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_enabled__23__Vfuncout;
                __Vtask_uvm_report_enabled__23__Vfuncout = 0;
                std::string __Vtask_uvm_report_warning__24__id;
                std::string __Vtask_uvm_report_warning__24__message;
                IData/*31:0*/ __Vtask_uvm_report_warning__24__verbosity;
                __Vtask_uvm_report_warning__24__verbosity = 0;
                std::string __Vtask_uvm_report_warning__24__filename;
                IData/*31:0*/ __Vtask_uvm_report_warning__24__line;
                __Vtask_uvm_report_warning__24__line = 0;
                std::string __Vtask_uvm_report_warning__24__context_name;
                CData/*0:0*/ __Vtask_uvm_report_warning__24__report_enabled_checked;
                __Vtask_uvm_report_warning__24__report_enabled_checked = 0;
                VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__25__Vfuncout;
                VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__26__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                {
                    if (("ALL"s == kind)) {
                        this->__PVT__hdl_paths_pool 
                            = VL_NEW(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_string_pool__Tz219, vlProcess, vlSymsp, "hdl_paths"s);
                        goto __Vlabel0;
                    }
                    if ((""s == kind)) {
                        kind = ((VlNull{} != this->__PVT__m_rf)
                                 ? ([&]() {
                                    VL_NULL_CHECK(this->__PVT__m_rf, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_file.svh", 182)
                                    ->__VnoInFunc_get_default_hdl_path(vlSymsp, __Vtask_get_default_hdl_path__17__Vfuncout);
                                }(), __Vtask_get_default_hdl_path__17__Vfuncout)
                                 : ([&]() {
                                    VL_NULL_CHECK(this->__PVT__parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_file.svh", 184)
                                    ->__VnoInFunc_get_default_hdl_path(vlSymsp, __Vtask_get_default_hdl_path__18__Vfuncout);
                                }(), __Vtask_get_default_hdl_path__18__Vfuncout));
                    }
                    if ((1U & (~ (0U != ([&]() {
                                            VL_NULL_CHECK(this->__PVT__hdl_paths_pool, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_file.svh", 187)
                                         ->__VnoInFunc_exists(vlSymsp, kind, __Vtask_exists__19__Vfuncout);
                                        }(), __Vtask_exists__19__Vfuncout))))) {
                        if ((0U != ([&]() {
                                        __Vfunc_uvm_report_enabled__20__id = "RegModel"s;
                                        __Vfunc_uvm_report_enabled__20__severity = 1U;
                                        __Vfunc_uvm_report_enabled__20__verbosity = 0U;
                                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__21__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                            = __Vfunc_get__21__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__22__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                            = __Vtask_get_root__22__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__20__verbosity, (IData)(__Vfunc_uvm_report_enabled__20__severity), __Vfunc_uvm_report_enabled__20__id, __Vtask_uvm_report_enabled__23__Vfuncout);
                                        __Vfunc_uvm_report_enabled__20__Vfuncout 
                                            = __Vtask_uvm_report_enabled__23__Vfuncout;
                                    }(), __Vfunc_uvm_report_enabled__20__Vfuncout))) {
                            __Vtask_uvm_report_warning__24__report_enabled_checked = 1U;
                            __Vtask_uvm_report_warning__24__context_name = ""s;
                            __Vtask_uvm_report_warning__24__line = 0x000000bcU;
                            __Vtask_uvm_report_warning__24__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_file.svh"s;
                            __Vtask_uvm_report_warning__24__verbosity = 0U;
                            __Vtask_uvm_report_warning__24__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN("Unknown HDL Abstraction '"s, kind), "'"s));
                            __Vtask_uvm_report_warning__24__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__25__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                                = __Vfunc_get__25__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__26__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                = __Vtask_get_root__26__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                                                        ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__24__id, __Vtask_uvm_report_warning__24__message, __Vtask_uvm_report_warning__24__verbosity, __Vtask_uvm_report_warning__24__filename, __Vtask_uvm_report_warning__24__line, __Vtask_uvm_report_warning__24__context_name, (IData)(__Vtask_uvm_report_warning__24__report_enabled_checked));
                        }
                        goto __Vlabel0;
                    }
                    VL_NULL_CHECK(this->__PVT__hdl_paths_pool, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_file.svh", 192)
                                                        ->__VnoInFunc_delete(vlSymsp, kind);
                    __Vlabel0: ;
                }
            }

            void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_add_hdl_path(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string path, std::string kind) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_add_hdl_path\n"); );
                // Locals
                VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_queue__Tz2> __Vtask_get__29__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_queue__Tz2> paths;
                VL_NULL_CHECK(this->__PVT__hdl_paths_pool, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_file.svh", 202)
                                                        ->__VnoInFunc_get(vlProcess, vlSymsp, kind, __Vtask_get__29__Vfuncout);
                paths = __Vtask_get__29__Vfuncout;
                VL_NULL_CHECK(paths, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_file.svh", 204)
                                                        ->__VnoInFunc_push_back(vlSymsp, path);
            }

            void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_has_hdl_path(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ &has_hdl_path__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_has_hdl_path\n"); );
                // Locals
                std::string __Vtask_get_default_hdl_path__31__Vfuncout;
                std::string __Vtask_get_default_hdl_path__32__Vfuncout;
                IData/*31:0*/ __Vtask_exists__33__Vfuncout;
                __Vtask_exists__33__Vfuncout = 0;
                // Body
                if ((""s == kind)) {
                    kind = ((VlNull{} != this->__PVT__m_rf)
                             ? ([&]() {
                                VL_NULL_CHECK(this->__PVT__m_rf, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_file.svh", 214)
                                ->__VnoInFunc_get_default_hdl_path(vlSymsp, __Vtask_get_default_hdl_path__31__Vfuncout);
                            }(), __Vtask_get_default_hdl_path__31__Vfuncout)
                             : ([&]() {
                                VL_NULL_CHECK(this->__PVT__parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_file.svh", 216)
                                ->__VnoInFunc_get_default_hdl_path(vlSymsp, __Vtask_get_default_hdl_path__32__Vfuncout);
                            }(), __Vtask_get_default_hdl_path__32__Vfuncout));
                }
                has_hdl_path__Vfuncrtn = (1U & ([&]() {
                            VL_NULL_CHECK(this->__PVT__hdl_paths_pool, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_file.svh", 219)
                                                ->__VnoInFunc_exists(vlSymsp, kind, __Vtask_exists__33__Vfuncout);
                        }(), __Vtask_exists__33__Vfuncout));
            }

            void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_hdl_path(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlQueue<std::string> &paths, std::string kind) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_hdl_path\n"); );
                // Locals
                std::string __Vtask_get_default_hdl_path__34__Vfuncout;
                std::string __Vtask_get_default_hdl_path__35__Vfuncout;
                CData/*0:0*/ __Vfunc_has_hdl_path__36__Vfuncout;
                __Vfunc_has_hdl_path__36__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__37__Vfuncout;
                __Vfunc_uvm_report_enabled__37__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__37__verbosity;
                __Vfunc_uvm_report_enabled__37__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__37__severity;
                __Vfunc_uvm_report_enabled__37__severity = 0;
                std::string __Vfunc_uvm_report_enabled__37__id;
                VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__38__Vfuncout;
                VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__39__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_enabled__40__Vfuncout;
                __Vtask_uvm_report_enabled__40__Vfuncout = 0;
                std::string __Vtask_uvm_report_error__41__id;
                std::string __Vtask_uvm_report_error__41__message;
                IData/*31:0*/ __Vtask_uvm_report_error__41__verbosity;
                __Vtask_uvm_report_error__41__verbosity = 0;
                std::string __Vtask_uvm_report_error__41__filename;
                IData/*31:0*/ __Vtask_uvm_report_error__41__line;
                __Vtask_uvm_report_error__41__line = 0;
                std::string __Vtask_uvm_report_error__41__context_name;
                CData/*0:0*/ __Vtask_uvm_report_error__41__report_enabled_checked;
                __Vtask_uvm_report_error__41__report_enabled_checked = 0;
                VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__42__Vfuncout;
                VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__43__Vfuncout;
                VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_queue__Tz2> __Vtask_get__45__Vfuncout;
                IData/*31:0*/ __Vtask_size__46__Vfuncout;
                __Vtask_size__46__Vfuncout = 0;
                std::string __Vtask_get__47__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                IData/*31:0*/ unnamedblk391__DOT__i;
                unnamedblk391__DOT__i = 0;
                VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_queue__Tz2> hdl_paths;
                {
                    if ((""s == kind)) {
                        kind = ((VlNull{} != this->__PVT__m_rf)
                                 ? ([&]() {
                                    VL_NULL_CHECK(this->__PVT__m_rf, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_file.svh", 231)
                                    ->__VnoInFunc_get_default_hdl_path(vlSymsp, __Vtask_get_default_hdl_path__34__Vfuncout);
                                }(), __Vtask_get_default_hdl_path__34__Vfuncout)
                                 : ([&]() {
                                    VL_NULL_CHECK(this->__PVT__parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_file.svh", 233)
                                    ->__VnoInFunc_get_default_hdl_path(vlSymsp, __Vtask_get_default_hdl_path__35__Vfuncout);
                                }(), __Vtask_get_default_hdl_path__35__Vfuncout));
                    }
                    if ((1U & (~ ([&]() {
                                        this->__VnoInFunc_has_hdl_path(vlSymsp, kind, __Vfunc_has_hdl_path__36__Vfuncout);
                                    }(), (IData)(__Vfunc_has_hdl_path__36__Vfuncout))))) {
                        if ((0U != ([&]() {
                                        __Vfunc_uvm_report_enabled__37__id = "RegModel"s;
                                        __Vfunc_uvm_report_enabled__37__severity = 2U;
                                        __Vfunc_uvm_report_enabled__37__verbosity = 0U;
                                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__38__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                            = __Vfunc_get__38__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__39__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                            = __Vtask_get_root__39__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__37__verbosity, (IData)(__Vfunc_uvm_report_enabled__37__severity), __Vfunc_uvm_report_enabled__37__id, __Vtask_uvm_report_enabled__40__Vfuncout);
                                        __Vfunc_uvm_report_enabled__37__Vfuncout 
                                            = __Vtask_uvm_report_enabled__40__Vfuncout;
                                    }(), __Vfunc_uvm_report_enabled__37__Vfuncout))) {
                            __Vtask_uvm_report_error__41__report_enabled_checked = 1U;
                            __Vtask_uvm_report_error__41__context_name = ""s;
                            __Vtask_uvm_report_error__41__line = 0x000000edU;
                            __Vtask_uvm_report_error__41__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_file.svh"s;
                            __Vtask_uvm_report_error__41__verbosity = 0U;
                            __Vtask_uvm_report_error__41__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN("Register does not have hdl path defined for abstraction '"s, kind), "'"s));
                            __Vtask_uvm_report_error__41__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__42__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                = __Vfunc_get__42__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__43__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                = __Vtask_get_root__43__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                                                        ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__41__id, __Vtask_uvm_report_error__41__message, __Vtask_uvm_report_error__41__verbosity, __Vtask_uvm_report_error__41__filename, __Vtask_uvm_report_error__41__line, __Vtask_uvm_report_error__41__context_name, (IData)(__Vtask_uvm_report_error__41__report_enabled_checked));
                        }
                        goto __Vlabel0;
                    }
                    VL_NULL_CHECK(this->__PVT__hdl_paths_pool, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_file.svh", 241)
                                                        ->__VnoInFunc_get(vlProcess, vlSymsp, kind, __Vtask_get__45__Vfuncout);
                    hdl_paths = __Vtask_get__45__Vfuncout;
                    unnamedblk391__DOT__i = 0U;
                    while (VL_LTS_III(32, unnamedblk391__DOT__i, 
                                      ([&]() {
                                    VL_NULL_CHECK(hdl_paths, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_file.svh", 243)
                                       ->__VnoInFunc_size(vlSymsp, __Vtask_size__46__Vfuncout);
                                }(), __Vtask_size__46__Vfuncout))) {
                        paths.push_back(([&]() {
                                    VL_NULL_CHECK(hdl_paths, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_file.svh", 244)
                                         ->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk391__DOT__i, __Vtask_get__47__Vfuncout);
                                }(), __Vtask_get__47__Vfuncout));
                        unnamedblk391__DOT__i = ((IData)(1U) 
                                                 + unnamedblk391__DOT__i);
                    }
                    __Vlabel0: ;
                }
            }

            void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_full_hdl_path(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlQueue<std::string> &paths, std::string kind, std::string separator) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_full_hdl_path\n"); );
                // Locals
                std::string __Vfunc_get_default_hdl_path__48__Vfuncout;
                CData/*0:0*/ __Vfunc_has_hdl_path__49__Vfuncout;
                __Vfunc_has_hdl_path__49__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__50__Vfuncout;
                __Vfunc_uvm_report_enabled__50__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__50__verbosity;
                __Vfunc_uvm_report_enabled__50__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__50__severity;
                __Vfunc_uvm_report_enabled__50__severity = 0;
                std::string __Vfunc_uvm_report_enabled__50__id;
                VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__51__Vfuncout;
                VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__52__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_enabled__53__Vfuncout;
                __Vtask_uvm_report_enabled__53__Vfuncout = 0;
                std::string __Vtask_uvm_report_error__54__id;
                std::string __Vtask_uvm_report_error__54__message;
                IData/*31:0*/ __Vtask_uvm_report_error__54__verbosity;
                __Vtask_uvm_report_error__54__verbosity = 0;
                std::string __Vtask_uvm_report_error__54__filename;
                IData/*31:0*/ __Vtask_uvm_report_error__54__line;
                __Vtask_uvm_report_error__54__line = 0;
                std::string __Vtask_uvm_report_error__54__context_name;
                CData/*0:0*/ __Vtask_uvm_report_error__54__report_enabled_checked;
                __Vtask_uvm_report_error__54__report_enabled_checked = 0;
                VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__55__Vfuncout;
                VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__56__Vfuncout;
                VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_queue__Tz2> __Vtask_get__58__Vfuncout;
                IData/*31:0*/ __Vtask_size__61__Vfuncout;
                __Vtask_size__61__Vfuncout = 0;
                std::string __Vtask_get__62__Vfuncout;
                // Body
                VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_queue__Tz2> unnamedblk392__DOT__hdl_paths;
                VlQueue<std::string> unnamedblk392__DOT__parent_paths;
                IData/*31:0*/ unnamedblk392__DOT__unnamedblk393__DOT__i;
                unnamedblk392__DOT__unnamedblk393__DOT__i = 0;
                std::string unnamedblk392__DOT__unnamedblk393__DOT__unnamedblk394__DOT__hdl_path;
                IData/*31:0*/ unnamedblk392__DOT__unnamedblk393__DOT__unnamedblk394__DOT__unnamedblk395__DOT__j;
                unnamedblk392__DOT__unnamedblk393__DOT__unnamedblk394__DOT__unnamedblk395__DOT__j = 0;
                {
                    if ((""s == kind)) {
                        this->__VnoInFunc_get_default_hdl_path(vlSymsp, __Vfunc_get_default_hdl_path__48__Vfuncout);
                        kind = __Vfunc_get_default_hdl_path__48__Vfuncout;
                    }
                    if ((1U & (~ ([&]() {
                                        this->__VnoInFunc_has_hdl_path(vlSymsp, kind, __Vfunc_has_hdl_path__49__Vfuncout);
                                    }(), (IData)(__Vfunc_has_hdl_path__49__Vfuncout))))) {
                        if ((0U != ([&]() {
                                        __Vfunc_uvm_report_enabled__50__id = "RegModel"s;
                                        __Vfunc_uvm_report_enabled__50__severity = 2U;
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
                            __Vtask_uvm_report_error__54__report_enabled_checked = 1U;
                            __Vtask_uvm_report_error__54__context_name = ""s;
                            __Vtask_uvm_report_error__54__line = 0x00000102U;
                            __Vtask_uvm_report_error__54__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_file.svh"s;
                            __Vtask_uvm_report_error__54__verbosity = 0U;
                            __Vtask_uvm_report_error__54__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN("Register file does not have hdl path defined for abstraction '"s, kind), "'"s));
                            __Vtask_uvm_report_error__54__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__55__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                = __Vfunc_get__55__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__56__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                = __Vtask_get_root__56__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                                                        ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__54__id, __Vtask_uvm_report_error__54__message, __Vtask_uvm_report_error__54__verbosity, __Vtask_uvm_report_error__54__filename, __Vtask_uvm_report_error__54__line, __Vtask_uvm_report_error__54__context_name, (IData)(__Vtask_uvm_report_error__54__report_enabled_checked));
                        }
                        goto __Vlabel0;
                    }
                    paths.clear();
                    VL_NULL_CHECK(this->__PVT__hdl_paths_pool, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_file.svh", 265)
                                                        ->__VnoInFunc_get(vlProcess, vlSymsp, kind, __Vtask_get__58__Vfuncout);
                    unnamedblk392__DOT__hdl_paths = __Vtask_get__58__Vfuncout;
                    if ((VlNull{} != this->__PVT__m_rf)) {
                        VL_NULL_CHECK(this->__PVT__m_rf, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_file.svh", 269)
                                                        ->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, unnamedblk392__DOT__parent_paths, kind, separator);
                    } else if ((VlNull{} != this->__PVT__parent)) {
                        VL_NULL_CHECK(this->__PVT__parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_file.svh", 271)
                                                        ->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, unnamedblk392__DOT__parent_paths, kind, separator);
                    }
                    unnamedblk392__DOT__unnamedblk393__DOT__i = 0U;
                    while (VL_LTS_III(32, unnamedblk392__DOT__unnamedblk393__DOT__i, 
                                      ([&]() {
                                    VL_NULL_CHECK(unnamedblk392__DOT__hdl_paths, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_file.svh", 273)
                                       ->__VnoInFunc_size(vlSymsp, __Vtask_size__61__Vfuncout);
                                }(), __Vtask_size__61__Vfuncout))) {
                        {
                            VL_NULL_CHECK(unnamedblk392__DOT__hdl_paths, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_file.svh", 274)
                                                        ->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk392__DOT__unnamedblk393__DOT__i, __Vtask_get__62__Vfuncout);
                            unnamedblk392__DOT__unnamedblk393__DOT__unnamedblk394__DOT__hdl_path 
                                = __Vtask_get__62__Vfuncout;
                            if ((0U == unnamedblk392__DOT__parent_paths.size())) {
                                if ((""s != unnamedblk392__DOT__unnamedblk393__DOT__unnamedblk394__DOT__hdl_path)) {
                                    paths.push_back(unnamedblk392__DOT__unnamedblk393__DOT__unnamedblk394__DOT__hdl_path);
                                }
                                goto __Vlabel1;
                            }
                            unnamedblk392__DOT__unnamedblk393__DOT__unnamedblk394__DOT__unnamedblk395__DOT__j = 0U;
                            while (VL_LTS_III(32, unnamedblk392__DOT__unnamedblk393__DOT__unnamedblk394__DOT__unnamedblk395__DOT__j, unnamedblk392__DOT__parent_paths.size())) {
                                if ((""s == unnamedblk392__DOT__unnamedblk393__DOT__unnamedblk394__DOT__hdl_path)) {
                                    paths.push_back(unnamedblk392__DOT__parent_paths.at(unnamedblk392__DOT__unnamedblk393__DOT__unnamedblk394__DOT__unnamedblk395__DOT__j));
                                } else {
                                    paths.push_back(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(unnamedblk392__DOT__parent_paths.at(unnamedblk392__DOT__unnamedblk393__DOT__unnamedblk394__DOT__unnamedblk395__DOT__j), separator), unnamedblk392__DOT__unnamedblk393__DOT__unnamedblk394__DOT__hdl_path));
                                }
                                unnamedblk392__DOT__unnamedblk393__DOT__unnamedblk394__DOT__unnamedblk395__DOT__j 
                                    = ((IData)(1U) 
                                       + unnamedblk392__DOT__unnamedblk393__DOT__unnamedblk394__DOT__unnamedblk395__DOT__j);
                            }
                            __Vlabel1: ;
                        }
                        unnamedblk392__DOT__unnamedblk393__DOT__i 
                            = ((IData)(1U) + unnamedblk392__DOT__unnamedblk393__DOT__i);
                    }
                    __Vlabel0: ;
                }
            }

            void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_default_hdl_path(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string &get_default_hdl_path__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_default_hdl_path\n"); );
                // Locals
                std::string __Vtask_get_default_hdl_path__63__Vfuncout;
                std::string __Vtask_get_default_hdl_path__64__Vfuncout;
                // Body
                {
                    if ((""s == this->__PVT__default_hdl_path)) {
                        if ((VlNull{} != this->__PVT__m_rf)) {
                            VL_NULL_CHECK(this->__PVT__m_rf, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_file.svh", 300)
                                                        ->__VnoInFunc_get_default_hdl_path(vlSymsp, __Vtask_get_default_hdl_path__63__Vfuncout);
                            get_default_hdl_path__Vfuncrtn 
                                = __Vtask_get_default_hdl_path__63__Vfuncout;
                            goto __Vlabel0;
                        } else {
                            VL_NULL_CHECK(this->__PVT__parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_file.svh", 302)
                                                        ->__VnoInFunc_get_default_hdl_path(vlSymsp, __Vtask_get_default_hdl_path__64__Vfuncout);
                            get_default_hdl_path__Vfuncrtn 
                                = __Vtask_get_default_hdl_path__64__Vfuncout;
                            goto __Vlabel0;
                        }
                    }
                    get_default_hdl_path__Vfuncrtn 
                        = this->__PVT__default_hdl_path;
                    __Vlabel0: ;
                }
            }

            void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_set_default_hdl_path(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string kind) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_set_default_hdl_path\n"); );
                // Locals
                std::string __Vtask_get_default_hdl_path__65__Vfuncout;
                std::string __Vtask_get_default_hdl_path__66__Vfuncout;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__67__Vfuncout;
                __Vfunc_uvm_report_enabled__67__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__67__verbosity;
                __Vfunc_uvm_report_enabled__67__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__67__severity;
                __Vfunc_uvm_report_enabled__67__severity = 0;
                std::string __Vfunc_uvm_report_enabled__67__id;
                VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__68__Vfuncout;
                VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__69__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_enabled__70__Vfuncout;
                __Vtask_uvm_report_enabled__70__Vfuncout = 0;
                std::string __Vtask_uvm_report_error__71__id;
                std::string __Vtask_uvm_report_error__71__message;
                IData/*31:0*/ __Vtask_uvm_report_error__71__verbosity;
                __Vtask_uvm_report_error__71__verbosity = 0;
                std::string __Vtask_uvm_report_error__71__filename;
                IData/*31:0*/ __Vtask_uvm_report_error__71__line;
                __Vtask_uvm_report_error__71__line = 0;
                std::string __Vtask_uvm_report_error__71__context_name;
                CData/*0:0*/ __Vtask_uvm_report_error__71__report_enabled_checked;
                __Vtask_uvm_report_error__71__report_enabled_checked = 0;
                VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__72__Vfuncout;
                VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__73__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                {
                    if ((""s == kind)) {
                        if ((VlNull{} != this->__PVT__m_rf)) {
                            VL_NULL_CHECK(this->__PVT__m_rf, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_file.svh", 314)
                                                        ->__VnoInFunc_get_default_hdl_path(vlSymsp, __Vtask_get_default_hdl_path__65__Vfuncout);
                            kind = __Vtask_get_default_hdl_path__65__Vfuncout;
                        } else if ((VlNull{} == this->__PVT__parent)) {
                            VL_NULL_CHECK(this->__PVT__parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_file.svh", 316)
                                                        ->__VnoInFunc_get_default_hdl_path(vlSymsp, __Vtask_get_default_hdl_path__66__Vfuncout);
                            kind = __Vtask_get_default_hdl_path__66__Vfuncout;
                        } else {
                            if ((0U != ([&]() {
                                            __Vfunc_uvm_report_enabled__67__id = "RegModel"s;
                                            __Vfunc_uvm_report_enabled__67__severity = 2U;
                                            __Vfunc_uvm_report_enabled__67__verbosity = 0U;
                                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__68__Vfuncout);
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                                = __Vfunc_get__68__Vfuncout;
                                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__69__Vfuncout);
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                                = __Vtask_get_root__69__Vfuncout;
                                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__67__verbosity, (IData)(__Vfunc_uvm_report_enabled__67__severity), __Vfunc_uvm_report_enabled__67__id, __Vtask_uvm_report_enabled__70__Vfuncout);
                                            __Vfunc_uvm_report_enabled__67__Vfuncout 
                                                = __Vtask_uvm_report_enabled__70__Vfuncout;
                                        }(), __Vfunc_uvm_report_enabled__67__Vfuncout))) {
                                __Vtask_uvm_report_error__71__report_enabled_checked = 1U;
                                __Vtask_uvm_report_error__71__context_name = ""s;
                                __Vtask_uvm_report_error__71__line = 0x0000013fU;
                                __Vtask_uvm_report_error__71__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_file.svh"s;
                                __Vtask_uvm_report_error__71__verbosity = 0U;
                                __Vtask_uvm_report_error__71__message = "Register file has no parent. Must specify a valid HDL abstraction (kind)"s;
                                __Vtask_uvm_report_error__71__id = "RegModel"s;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__72__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                    = __Vfunc_get__72__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__73__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                    = __Vtask_get_root__73__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                                                        ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__71__id, __Vtask_uvm_report_error__71__message, __Vtask_uvm_report_error__71__verbosity, __Vtask_uvm_report_error__71__filename, __Vtask_uvm_report_error__71__line, __Vtask_uvm_report_error__71__context_name, (IData)(__Vtask_uvm_report_error__71__report_enabled_checked));
                            }
                            goto __Vlabel0;
                        }
                    }
                    this->__PVT__default_hdl_path = kind;
                    __Vlabel0: ;
                }
            }

            void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_parent(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_parent\n"); );
                // Locals
                VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_block> __Vfunc_get_block__75__Vfuncout;
                // Body
                this->__VnoInFunc_get_block(vlSymsp, __Vfunc_get_block__75__Vfuncout);
                get_parent__Vfuncrtn = __Vfunc_get_block__75__Vfuncout;
            }

            void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_full_name(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_get_full_name\n"); );
                // Locals
                std::string __Vfunc_get_name__76__Vfuncout;
                std::string __Vtask_get_full_name__77__Vfuncout;
                std::string __Vtask_get_full_name__78__Vfuncout;
                // Body
                VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_block> blk;
                {
                    this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__76__Vfuncout);
                    get_full_name__Vfuncrtn = __Vfunc_get_name__76__Vfuncout;
                    if ((VlNull{} != this->__PVT__m_rf)) {
                        get_full_name__Vfuncrtn = VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(
                                                                                ([&]() {
                                        VL_NULL_CHECK(this->__PVT__m_rf, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_file.svh", 345)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__77__Vfuncout);
                                    }(), __Vtask_get_full_name__77__Vfuncout), "."s), get_full_name__Vfuncrtn);
                        goto __Vlabel0;
                    }
                    if ((VlNull{} == this->__PVT__parent)) {
                        goto __Vlabel0;
                    }
                    get_full_name__Vfuncrtn = VL_CONCATN_NNN(
                                                             VL_CONCATN_NNN(
                                                                            ([&]() {
                                    VL_NULL_CHECK(this->__PVT__parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_file.svh", 350)
                                                                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__78__Vfuncout);
                                }(), __Vtask_get_full_name__78__Vfuncout), "."s), get_full_name__Vfuncrtn);
                    __Vlabel0: ;
                }
            }

            void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_convert2string\n"); );
                // Locals
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
                // Body
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__79__id = "RegModel"s;
                                __Vfunc_uvm_report_enabled__79__severity = 3U;
                                __Vfunc_uvm_report_enabled__79__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__80__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__80__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__81__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__81__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__79__verbosity, (IData)(__Vfunc_uvm_report_enabled__79__severity), __Vfunc_uvm_report_enabled__79__id, __Vtask_uvm_report_enabled__82__Vfuncout);
                                __Vfunc_uvm_report_enabled__79__Vfuncout 
                                    = __Vtask_uvm_report_enabled__82__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__79__Vfuncout))) {
                    vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "RegModel register files cannot be converted to strings"s, 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_file.svh"s, 0x00000169U, ""s, 1U);
                }
                convert2string__Vfuncrtn = ""s;
            }

            void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_printer> printer) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_do_print\n"); );
                // Body
                Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
            }

            void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_clone(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_clone\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__85__Vfuncout;
                __Vfunc_uvm_report_enabled__85__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__85__verbosity;
                __Vfunc_uvm_report_enabled__85__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__85__severity;
                __Vfunc_uvm_report_enabled__85__severity = 0;
                std::string __Vfunc_uvm_report_enabled__85__id;
                VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__86__Vfuncout;
                VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__87__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_enabled__88__Vfuncout;
                __Vtask_uvm_report_enabled__88__Vfuncout = 0;
                // Body
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__85__id = "RegModel"s;
                                __Vfunc_uvm_report_enabled__85__severity = 3U;
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
                    vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "RegModel register files cannot be cloned"s, 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_file.svh"s, 0x00000179U, ""s, 1U);
                }
                clone__Vfuncrtn = VlNull{};
            }

            void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> rhs) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_do_copy\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__90__Vfuncout;
                __Vfunc_uvm_report_enabled__90__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__90__verbosity;
                __Vfunc_uvm_report_enabled__90__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__90__severity;
                __Vfunc_uvm_report_enabled__90__severity = 0;
                std::string __Vfunc_uvm_report_enabled__90__id;
                VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__91__Vfuncout;
                VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__92__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_enabled__93__Vfuncout;
                __Vtask_uvm_report_enabled__93__Vfuncout = 0;
                // Body
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__90__id = "RegModel"s;
                                __Vfunc_uvm_report_enabled__90__severity = 3U;
                                __Vfunc_uvm_report_enabled__90__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__91__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__91__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__92__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__92__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__90__verbosity, (IData)(__Vfunc_uvm_report_enabled__90__severity), __Vfunc_uvm_report_enabled__90__id, __Vtask_uvm_report_enabled__93__Vfuncout);
                                __Vfunc_uvm_report_enabled__90__Vfuncout 
                                    = __Vtask_uvm_report_enabled__93__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__90__Vfuncout))) {
                    vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "RegModel register files cannot be copied"s, 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_file.svh"s, 0x00000180U, ""s, 1U);
                }
            }

            void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_do_compare(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_do_compare\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__95__Vfuncout;
                __Vfunc_uvm_report_enabled__95__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__95__verbosity;
                __Vfunc_uvm_report_enabled__95__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__95__severity;
                __Vfunc_uvm_report_enabled__95__severity = 0;
                std::string __Vfunc_uvm_report_enabled__95__id;
                VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__96__Vfuncout;
                VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__97__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_enabled__98__Vfuncout;
                __Vtask_uvm_report_enabled__98__Vfuncout = 0;
                std::string __Vtask_uvm_report_warning__99__id;
                std::string __Vtask_uvm_report_warning__99__message;
                IData/*31:0*/ __Vtask_uvm_report_warning__99__verbosity;
                __Vtask_uvm_report_warning__99__verbosity = 0;
                std::string __Vtask_uvm_report_warning__99__filename;
                IData/*31:0*/ __Vtask_uvm_report_warning__99__line;
                __Vtask_uvm_report_warning__99__line = 0;
                std::string __Vtask_uvm_report_warning__99__context_name;
                CData/*0:0*/ __Vtask_uvm_report_warning__99__report_enabled_checked;
                __Vtask_uvm_report_warning__99__report_enabled_checked = 0;
                VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__100__Vfuncout;
                VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__101__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__95__id = "RegModel"s;
                                __Vfunc_uvm_report_enabled__95__severity = 1U;
                                __Vfunc_uvm_report_enabled__95__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__96__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__96__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__97__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__97__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__95__verbosity, (IData)(__Vfunc_uvm_report_enabled__95__severity), __Vfunc_uvm_report_enabled__95__id, __Vtask_uvm_report_enabled__98__Vfuncout);
                                __Vfunc_uvm_report_enabled__95__Vfuncout 
                                    = __Vtask_uvm_report_enabled__98__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__95__Vfuncout))) {
                    __Vtask_uvm_report_warning__99__report_enabled_checked = 1U;
                    __Vtask_uvm_report_warning__99__context_name = ""s;
                    __Vtask_uvm_report_warning__99__line = 0x00000188U;
                    __Vtask_uvm_report_warning__99__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_file.svh"s;
                    __Vtask_uvm_report_warning__99__verbosity = 0U;
                    __Vtask_uvm_report_warning__99__message = "RegModel register files cannot be compared"s;
                    __Vtask_uvm_report_warning__99__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__100__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__100__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__101__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__101__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                                                        ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__99__id, __Vtask_uvm_report_warning__99__message, __Vtask_uvm_report_warning__99__verbosity, __Vtask_uvm_report_warning__99__filename, __Vtask_uvm_report_warning__99__line, __Vtask_uvm_report_warning__99__context_name, (IData)(__Vtask_uvm_report_warning__99__report_enabled_checked));
                }
                do_compare__Vfuncrtn = 0U;
            }

            void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_do_pack(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_packer> packer) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_do_pack\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__103__Vfuncout;
                __Vfunc_uvm_report_enabled__103__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__103__verbosity;
                __Vfunc_uvm_report_enabled__103__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__103__severity;
                __Vfunc_uvm_report_enabled__103__severity = 0;
                std::string __Vfunc_uvm_report_enabled__103__id;
                VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__104__Vfuncout;
                VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__105__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_enabled__106__Vfuncout;
                __Vtask_uvm_report_enabled__106__Vfuncout = 0;
                std::string __Vtask_uvm_report_warning__107__id;
                std::string __Vtask_uvm_report_warning__107__message;
                IData/*31:0*/ __Vtask_uvm_report_warning__107__verbosity;
                __Vtask_uvm_report_warning__107__verbosity = 0;
                std::string __Vtask_uvm_report_warning__107__filename;
                IData/*31:0*/ __Vtask_uvm_report_warning__107__line;
                __Vtask_uvm_report_warning__107__line = 0;
                std::string __Vtask_uvm_report_warning__107__context_name;
                CData/*0:0*/ __Vtask_uvm_report_warning__107__report_enabled_checked;
                __Vtask_uvm_report_warning__107__report_enabled_checked = 0;
                VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__108__Vfuncout;
                VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__109__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__103__id = "RegModel"s;
                                __Vfunc_uvm_report_enabled__103__severity = 1U;
                                __Vfunc_uvm_report_enabled__103__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__104__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__104__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__105__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__105__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__103__verbosity, (IData)(__Vfunc_uvm_report_enabled__103__severity), __Vfunc_uvm_report_enabled__103__id, __Vtask_uvm_report_enabled__106__Vfuncout);
                                __Vfunc_uvm_report_enabled__103__Vfuncout 
                                    = __Vtask_uvm_report_enabled__106__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__103__Vfuncout))) {
                    __Vtask_uvm_report_warning__107__report_enabled_checked = 1U;
                    __Vtask_uvm_report_warning__107__context_name = ""s;
                    __Vtask_uvm_report_warning__107__line = 0x00000190U;
                    __Vtask_uvm_report_warning__107__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_file.svh"s;
                    __Vtask_uvm_report_warning__107__verbosity = 0U;
                    __Vtask_uvm_report_warning__107__message = "RegModel register files cannot be packed"s;
                    __Vtask_uvm_report_warning__107__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__108__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__108__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__109__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__109__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                                                        ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__107__id, __Vtask_uvm_report_warning__107__message, __Vtask_uvm_report_warning__107__verbosity, __Vtask_uvm_report_warning__107__filename, __Vtask_uvm_report_warning__107__line, __Vtask_uvm_report_warning__107__context_name, (IData)(__Vtask_uvm_report_warning__107__report_enabled_checked));
                }
            }

            void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_do_unpack(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_packer> packer) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_do_unpack\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__111__Vfuncout;
                __Vfunc_uvm_report_enabled__111__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__111__verbosity;
                __Vfunc_uvm_report_enabled__111__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__111__severity;
                __Vfunc_uvm_report_enabled__111__severity = 0;
                std::string __Vfunc_uvm_report_enabled__111__id;
                VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__112__Vfuncout;
                VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__113__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_enabled__114__Vfuncout;
                __Vtask_uvm_report_enabled__114__Vfuncout = 0;
                std::string __Vtask_uvm_report_warning__115__id;
                std::string __Vtask_uvm_report_warning__115__message;
                IData/*31:0*/ __Vtask_uvm_report_warning__115__verbosity;
                __Vtask_uvm_report_warning__115__verbosity = 0;
                std::string __Vtask_uvm_report_warning__115__filename;
                IData/*31:0*/ __Vtask_uvm_report_warning__115__line;
                __Vtask_uvm_report_warning__115__line = 0;
                std::string __Vtask_uvm_report_warning__115__context_name;
                CData/*0:0*/ __Vtask_uvm_report_warning__115__report_enabled_checked;
                __Vtask_uvm_report_warning__115__report_enabled_checked = 0;
                VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__116__Vfuncout;
                VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__117__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__111__id = "RegModel"s;
                                __Vfunc_uvm_report_enabled__111__severity = 1U;
                                __Vfunc_uvm_report_enabled__111__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__112__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__112__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__113__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__113__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__111__verbosity, (IData)(__Vfunc_uvm_report_enabled__111__severity), __Vfunc_uvm_report_enabled__111__id, __Vtask_uvm_report_enabled__114__Vfuncout);
                                __Vfunc_uvm_report_enabled__111__Vfuncout 
                                    = __Vtask_uvm_report_enabled__114__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__111__Vfuncout))) {
                    __Vtask_uvm_report_warning__115__report_enabled_checked = 1U;
                    __Vtask_uvm_report_warning__115__context_name = ""s;
                    __Vtask_uvm_report_warning__115__line = 0x00000197U;
                    __Vtask_uvm_report_warning__115__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_file.svh"s;
                    __Vtask_uvm_report_warning__115__verbosity = 0U;
                    __Vtask_uvm_report_warning__115__message = "RegModel register files cannot be unpacked"s;
                    __Vtask_uvm_report_warning__115__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__116__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__116__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__117__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__117__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                                                        ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__115__id, __Vtask_uvm_report_warning__115__message, __Vtask_uvm_report_warning__115__verbosity, __Vtask_uvm_report_warning__115__filename, __Vtask_uvm_report_warning__115__line, __Vtask_uvm_report_warning__115__context_name, (IData)(__Vtask_uvm_report_warning__115__report_enabled_checked));
                }
            }

            void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_randomize(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc_randomize\n"); );
                // Locals
                IData/*31:0*/ __Vfunc___VBasicRand__120__Vfuncout;
                __Vfunc___VBasicRand__120__Vfuncout = 0;
                // Body
                Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
                this->__VnoInFunc___Vsetup_constraints(vlSymsp);
                randomize__Vfuncrtn = Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
                randomize__Vfuncrtn = (randomize__Vfuncrtn 
                                       & ([&]() {
                            this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__120__Vfuncout);
                        }(), __Vfunc___VBasicRand__120__Vfuncout));
            }

            void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc___Vsetup_constraints(Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc___Vsetup_constraints\n"); );
            }

            void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc___VBasicRand(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::__VnoInFunc___VBasicRand\n"); );
                // Body
                __VBasicRand__Vfuncrtn = 1U;
            }

            void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::_ctor_var_reset(Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::_ctor_var_reset\n"); );
                // Body
                (void)vlSymsp;  // Prevent unused variable warning
            }

            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::~Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file() {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::~\n"); );
            }

            std::string VL_TO_STRING(const VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file>& obj) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::VL_TO_STRING\n"); );
                // Body
                return (obj ? obj->to_string() : "null");
            }

            std::string Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::to_string() const {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::to_string\n"); );
                // Body
                return ("'{"s + to_string_middle() + "}");
            }

            std::string Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::to_string_middle() const {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_file::to_string_middle\n"); );
                // Body
                std::string out;
                out += "parent:" + VL_TO_STRING(__PVT__parent);
                out += ", m_rf:" + VL_TO_STRING(__PVT__m_rf);
                out += ", default_hdl_path:" + VL_TO_STRING(__PVT__default_hdl_path);
                out += ", hdl_paths_pool:" + VL_TO_STRING(__PVT__hdl_paths_pool);
                out += ", "+ Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object::to_string_middle();
                return (out);
            }
