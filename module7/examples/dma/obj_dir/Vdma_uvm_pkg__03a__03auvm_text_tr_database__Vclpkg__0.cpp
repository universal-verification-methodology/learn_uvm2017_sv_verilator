// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"

void Vdma_uvm_pkg__03a__03auvm_text_tr_database__Vclpkg::__VnoInFunc_get_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__pi99> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03auvm_text_tr_database__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__pi99> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi99__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vdma_uvm_pkg__03a__03auvm_text_tr_database__Vclpkg::__VnoInFunc_type_name(Vdma__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03auvm_text_tr_database__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_text_tr_database"s;
}

void Vdma_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_get_object_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__pi99> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi99__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vdma_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_create(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_text_tr_database> tmp;
    tmp = ((""s == name) ? VL_NEW(Vdma_uvm_pkg__03a__03auvm_text_tr_database, vlProcess, vlSymsp, "unnamed-uvm_text_tr_database"s)
            : VL_NEW(Vdma_uvm_pkg__03a__03auvm_text_tr_database, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vdma_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_get_type_name(Vdma__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_text_tr_database"s;
}

Vdma_uvm_pkg__03a__03auvm_text_tr_database::Vdma_uvm_pkg__03a__03auvm_text_tr_database(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name)
    : Vdma_uvm_pkg__03a__03auvm_tr_database(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_text_tr_database::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    this->__PVT__m_filename_dap = VL_NEW(Vdma_uvm_pkg__03a__03auvm_simple_lock_dap__Tz2, vlProcess, vlSymsp, "filename_dap"s);
    VL_NULL_CHECK(this->__PVT__m_filename_dap, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_text_tr_database.svh", 77)->__VnoInFunc_set(vlProcess, vlSymsp, "tr_db.log"s);
}

void Vdma_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_do_open_db(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &do_open_db__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_do_open_db\n"); );
    // Locals
    std::string __Vtask_get__6__Vfuncout;
    // Body
    if (VL_UNLIKELY(((0U == this->__PVT__m_file)))) {
        this->__PVT__m_file = VL_FOPEN_NN(([&]() {
                    VL_NULL_CHECK(this->__PVT__m_filename_dap, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_text_tr_database.svh", 97)
                                           ->__VnoInFunc_get(vlSymsp, __Vtask_get__6__Vfuncout);
                }(), __Vtask_get__6__Vfuncout), "a+"s);
        ;
        if ((0U != this->__PVT__m_file)) {
            VL_NULL_CHECK(this->__PVT__m_filename_dap, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_text_tr_database.svh", 99)->__VnoInFunc_lock(vlSymsp);
        }
    }
    do_open_db__Vfuncrtn = (0U != this->__PVT__m_file);
}

void Vdma_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_do_close_db(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &do_close_db__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_do_close_db\n"); );
    // Body
    if (VL_UNLIKELY(((0U != this->__PVT__m_file)))) {
        VL_FCLOSE_I(this->__PVT__m_file); VL_NULL_CHECK(this->__PVT__m_filename_dap, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_text_tr_database.svh", 120)->__VnoInFunc_unlock(vlSymsp);
    }
    do_close_db__Vfuncrtn = 1U;
}

void Vdma_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_do_open_stream(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, std::string scope, std::string type_name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_tr_stream> &do_open_stream__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_do_open_stream\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_text_tr_stream> __Vfunc_create__9__Vfuncout;
    // Body
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_text_tr_stream> m_stream;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi106__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, name, VlNull{}, ""s, __Vfunc_create__9__Vfuncout);
    m_stream = __Vfunc_create__9__Vfuncout;
    do_open_stream__Vfuncrtn = m_stream;
}

void Vdma_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_do_establish_link(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_link_base> link) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_do_establish_link\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> __Vtask_get_lhs__10__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> __Vtask_get_rhs__11__Vfuncout;
    IData/*31:0*/ __Vtask_get_handle__12__Vfuncout;
    __Vtask_get_handle__12__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_handle__13__Vfuncout;
    __Vtask_get_handle__13__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_handle__14__Vfuncout;
    __Vtask_get_handle__14__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_handle__15__Vfuncout;
    __Vtask_get_handle__15__Vfuncout = 0;
    // Body
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_parent_child_link> unnamedblk1__DOT__pc_link;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_related_link> unnamedblk1__DOT__re_link;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_recorder> r_lhs;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_recorder> r_rhs;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> lhs;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> rhs;
    VL_NULL_CHECK(link, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_text_tr_database.svh", 147)->__VnoInFunc_get_lhs(vlSymsp, __Vtask_get_lhs__10__Vfuncout);
    lhs = __Vtask_get_lhs__10__Vfuncout;
    VL_NULL_CHECK(link, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_text_tr_database.svh", 148)->__VnoInFunc_get_rhs(vlSymsp, __Vtask_get_rhs__11__Vfuncout);
    rhs = __Vtask_get_rhs__11__Vfuncout;
    if (VL_UNLIKELY(((! VL_CAST_DYNAMIC(lhs, r_lhs))))) {
        VL_WRITEF_NX("[%0t] %%Error: uvm_text_tr_database.svh:150: Assertion failed in %Nuvm_pkg.uvm_text_tr_database.do_establish_link: 'assert' failed.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_text_tr_database.svh", 150, "");
    }
    if (VL_UNLIKELY(((! VL_CAST_DYNAMIC(rhs, r_rhs))))) {
        VL_WRITEF_NX("[%0t] %%Error: uvm_text_tr_database.svh:151: Assertion failed in %Nuvm_pkg.uvm_text_tr_database.do_establish_link: 'assert' failed.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_text_tr_database.svh", 151, "");
    }
    if ((1U & (~ ((VlNull{} == r_lhs) | (VlNull{} == r_rhs))))) {
        if (VL_UNLIKELY((VL_CAST_DYNAMIC(link, unnamedblk1__DOT__pc_link)))) {
            VL_FWRITEF_NX(this->__PVT__m_file,"  LINK @%0t {TXH1:%0d TXH2:%0d RELATION=child}\n",0,
                          64,VL_TIME_UNITED_Q(1000),
                          -9,32,([&]() {
                            VL_NULL_CHECK(r_lhs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_text_tr_database.svh", 162)
                                 ->__VnoInFunc_get_handle(vlSymsp, __Vtask_get_handle__12__Vfuncout);
                        }(), __Vtask_get_handle__12__Vfuncout),
                          32,([&]() {
                            VL_NULL_CHECK(r_rhs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_text_tr_database.svh", 163)
                              ->__VnoInFunc_get_handle(vlSymsp, __Vtask_get_handle__13__Vfuncout);
                        }(), __Vtask_get_handle__13__Vfuncout));
        } else if (VL_UNLIKELY((VL_CAST_DYNAMIC(link, unnamedblk1__DOT__re_link)))) {
            VL_FWRITEF_NX(this->__PVT__m_file,"  LINK @%0t {TXH1:%0d TXH2:%0d RELATION=}\n",0,
                          64,VL_TIME_UNITED_Q(1000),
                          -9,32,([&]() {
                            VL_NULL_CHECK(r_lhs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_text_tr_database.svh", 170)
                                 ->__VnoInFunc_get_handle(vlSymsp, __Vtask_get_handle__14__Vfuncout);
                        }(), __Vtask_get_handle__14__Vfuncout),
                          32,([&]() {
                            VL_NULL_CHECK(r_rhs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_text_tr_database.svh", 171)
                              ->__VnoInFunc_get_handle(vlSymsp, __Vtask_get_handle__15__Vfuncout);
                        }(), __Vtask_get_handle__15__Vfuncout));
        }
    }
}

void Vdma_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_set_file_name(Vdma__Syms* __restrict vlSymsp, std::string filename) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_set_file_name\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__16__Vfuncout;
    __Vfunc_uvm_report_enabled__16__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__16__verbosity;
    __Vfunc_uvm_report_enabled__16__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__16__severity;
    __Vfunc_uvm_report_enabled__16__severity = 0;
    std::string __Vfunc_uvm_report_enabled__16__id;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__17__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__18__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__19__Vfuncout;
    __Vtask_uvm_report_enabled__19__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__20__id;
    std::string __Vtask_uvm_report_warning__20__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__20__verbosity;
    __Vtask_uvm_report_warning__20__verbosity = 0;
    std::string __Vtask_uvm_report_warning__20__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__20__line;
    __Vtask_uvm_report_warning__20__line = 0;
    std::string __Vtask_uvm_report_warning__20__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__20__report_enabled_checked;
    __Vtask_uvm_report_warning__20__report_enabled_checked = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__21__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__22__Vfuncout;
    CData/*0:0*/ __Vtask_try_set__24__Vfuncout;
    __Vtask_try_set__24__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__25__Vfuncout;
    __Vfunc_uvm_report_enabled__25__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__25__verbosity;
    __Vfunc_uvm_report_enabled__25__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__25__severity;
    __Vfunc_uvm_report_enabled__25__severity = 0;
    std::string __Vfunc_uvm_report_enabled__25__id;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__26__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__27__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__28__Vfuncout;
    __Vtask_uvm_report_enabled__28__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__29__id;
    std::string __Vtask_uvm_report_warning__29__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__29__verbosity;
    __Vtask_uvm_report_warning__29__verbosity = 0;
    std::string __Vtask_uvm_report_warning__29__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__29__line;
    __Vtask_uvm_report_warning__29__line = 0;
    std::string __Vtask_uvm_report_warning__29__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__29__report_enabled_checked;
    __Vtask_uvm_report_warning__29__report_enabled_checked = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__30__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__31__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    {
        if ((""s == filename)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__16__id = "UVM/TXT_DB/EMPTY_NAME"s;
                            __Vfunc_uvm_report_enabled__16__severity = 1U;
                            __Vfunc_uvm_report_enabled__16__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__17__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__17__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__18__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__18__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__16__verbosity, (IData)(__Vfunc_uvm_report_enabled__16__severity), __Vfunc_uvm_report_enabled__16__id, __Vtask_uvm_report_enabled__19__Vfuncout);
                            __Vfunc_uvm_report_enabled__16__Vfuncout 
                                = __Vtask_uvm_report_enabled__19__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__16__Vfuncout))) {
                __Vtask_uvm_report_warning__20__report_enabled_checked = 1U;
                __Vtask_uvm_report_warning__20__context_name = ""s;
                __Vtask_uvm_report_warning__20__line = 0x000000bfU;
                __Vtask_uvm_report_warning__20__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_text_tr_database.svh"s;
                __Vtask_uvm_report_warning__20__verbosity = 0U;
                __Vtask_uvm_report_warning__20__message = "Ignoring attempt to set file name to ''!"s;
                __Vtask_uvm_report_warning__20__id = "UVM/TXT_DB/EMPTY_NAME"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__21__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__21__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__22__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__22__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__20__id, __Vtask_uvm_report_warning__20__message, __Vtask_uvm_report_warning__20__verbosity, __Vtask_uvm_report_warning__20__filename, __Vtask_uvm_report_warning__20__line, __Vtask_uvm_report_warning__20__context_name, (IData)(__Vtask_uvm_report_warning__20__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        if ((1U & (~ ([&]() {
                            VL_NULL_CHECK(this->__PVT__m_filename_dap, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_text_tr_database.svh", 195)
                      ->__VnoInFunc_try_set(vlSymsp, filename, __Vtask_try_set__24__Vfuncout);
                        }(), (IData)(__Vtask_try_set__24__Vfuncout))))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__25__id = "UVM/TXT_DB/SET_AFTER_OPEN"s;
                            __Vfunc_uvm_report_enabled__25__severity = 1U;
                            __Vfunc_uvm_report_enabled__25__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__26__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__26__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__27__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__27__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__25__verbosity, (IData)(__Vfunc_uvm_report_enabled__25__severity), __Vfunc_uvm_report_enabled__25__id, __Vtask_uvm_report_enabled__28__Vfuncout);
                            __Vfunc_uvm_report_enabled__25__Vfuncout 
                                = __Vtask_uvm_report_enabled__28__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__25__Vfuncout))) {
                __Vtask_uvm_report_warning__29__report_enabled_checked = 1U;
                __Vtask_uvm_report_warning__29__context_name = ""s;
                __Vtask_uvm_report_warning__29__line = 0x000000c5U;
                __Vtask_uvm_report_warning__29__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_text_tr_database.svh"s;
                __Vtask_uvm_report_warning__29__verbosity = 0U;
                __Vtask_uvm_report_warning__29__message = "Ignoring attempt to change file name after opening the db!"s;
                __Vtask_uvm_report_warning__29__id = "UVM/TXT_DB/SET_AFTER_OPEN"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__30__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__30__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__31__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__31__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__29__id, __Vtask_uvm_report_warning__29__message, __Vtask_uvm_report_warning__29__verbosity, __Vtask_uvm_report_warning__29__filename, __Vtask_uvm_report_warning__29__line, __Vtask_uvm_report_warning__29__context_name, (IData)(__Vtask_uvm_report_warning__29__report_enabled_checked));
            }
        }
        __Vlabel0: ;
    }
}

void Vdma_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__34__Vfuncout;
    __Vfunc___Vbasic_randomize__34__Vfuncout = 0;
    // Body
    Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__34__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__34__Vfuncout));
}

void Vdma_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc___Vbasic_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vdma_uvm_pkg__03a__03auvm_text_tr_database::_ctor_var_reset(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_text_tr_database::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_file = 0;
}

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_text_tr_database>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_text_tr_database::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vdma_uvm_pkg__03a__03auvm_text_tr_database::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_text_tr_database::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vdma_uvm_pkg__03a__03auvm_text_tr_database::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_text_tr_database::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_filename_dap:" + VL_TO_STRING(__PVT__m_filename_dap);
    out += ", m_file:" + VL_TO_STRING(__PVT__m_file);
    out += ", "+ Vdma_uvm_pkg__03a__03auvm_tr_database::to_string_middle();
    return (out);
}
