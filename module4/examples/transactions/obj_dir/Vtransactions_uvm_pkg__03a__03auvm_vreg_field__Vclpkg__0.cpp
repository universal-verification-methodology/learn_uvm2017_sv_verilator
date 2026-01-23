// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransactions.h for the primary calling header

#include "Vtransactions__pch.h"

void Vtransactions_uvm_pkg__03a__03auvm_vreg_field__Vclpkg::__VnoInFunc_get_type(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object_registry__pi78> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtransactions_uvm_pkg__03a__03auvm_vreg_field__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object_registry__pi78> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi78__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtransactions_uvm_pkg__03a__03auvm_vreg_field__Vclpkg::__VnoInFunc_type_name(Vtransactions__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtransactions_uvm_pkg__03a__03auvm_vreg_field__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_vreg_field"s;
}

void Vtransactions_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_object_type(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object_registry__pi78> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi78__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtransactions_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_create(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_vreg_field> tmp;
    tmp = ((""s == name) ? VL_NEW(Vtransactions_uvm_pkg__03a__03auvm_vreg_field, vlProcess, vlSymsp, "uvm_vreg_field"s)
            : VL_NEW(Vtransactions_uvm_pkg__03a__03auvm_vreg_field, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vtransactions_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_type_name(Vtransactions__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_vreg_field"s;
}

void Vtransactions_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_pre_write(Vtransactions__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ &wdat, IData/*31:0*/ &path, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_map> &map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_pre_write\n"); );
}

void Vtransactions_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_post_write(Vtransactions__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ wdat, IData/*31:0*/ path, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ &status) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_post_write\n"); );
}

void Vtransactions_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_pre_read(Vtransactions__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &path, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_map> &map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_pre_read\n"); );
}

void Vtransactions_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_post_read(Vtransactions__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ &rdat, IData/*31:0*/ &path, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_map> &map, IData/*31:0*/ &status) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_post_read\n"); );
}

Vtransactions_uvm_pkg__03a__03auvm_vreg_field::Vtransactions_uvm_pkg__03a__03auvm_vreg_field(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string name)
    : Vtransactions_uvm_pkg__03a__03auvm_object(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_vreg_field::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vtransactions_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_configure(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_vreg> parent, IData/*31:0*/ size, IData/*31:0*/ lsb_pos) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_configure\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__4__Vfuncout;
    __Vfunc_uvm_report_enabled__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__4__verbosity;
    __Vfunc_uvm_report_enabled__4__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__4__severity;
    __Vfunc_uvm_report_enabled__4__severity = 0;
    std::string __Vfunc_uvm_report_enabled__4__id;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__5__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__6__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__7__Vfuncout;
    __Vtask_uvm_report_enabled__7__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__8__id;
    std::string __Vtask_uvm_report_error__8__message;
    IData/*31:0*/ __Vtask_uvm_report_error__8__verbosity;
    __Vtask_uvm_report_error__8__verbosity = 0;
    std::string __Vtask_uvm_report_error__8__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__8__line;
    __Vtask_uvm_report_error__8__line = 0;
    std::string __Vtask_uvm_report_error__8__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__8__report_enabled_checked;
    __Vtask_uvm_report_error__8__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__9__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__10__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__11__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__13__Vfuncout;
    __Vfunc_uvm_report_enabled__13__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__13__verbosity;
    __Vfunc_uvm_report_enabled__13__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__13__severity;
    __Vfunc_uvm_report_enabled__13__severity = 0;
    std::string __Vfunc_uvm_report_enabled__13__id;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__14__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__15__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__16__Vfuncout;
    __Vtask_uvm_report_enabled__16__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__17__id;
    std::string __Vtask_uvm_report_error__17__message;
    IData/*31:0*/ __Vtask_uvm_report_error__17__verbosity;
    __Vtask_uvm_report_error__17__verbosity = 0;
    std::string __Vtask_uvm_report_error__17__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__17__line;
    __Vtask_uvm_report_error__17__line = 0;
    std::string __Vtask_uvm_report_error__17__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__17__report_enabled_checked;
    __Vtask_uvm_report_error__17__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__18__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__19__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__20__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__PVT__parent = parent;
    if ((0U == size)) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__4__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__4__severity = 2U;
                        __Vfunc_uvm_report_enabled__4__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__5__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__5__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__6__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__6__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__4__verbosity, (IData)(__Vfunc_uvm_report_enabled__4__severity), __Vfunc_uvm_report_enabled__4__id, __Vtask_uvm_report_enabled__7__Vfuncout);
                        __Vfunc_uvm_report_enabled__4__Vfuncout 
                            = __Vtask_uvm_report_enabled__7__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__4__Vfuncout))) {
            __Vtask_uvm_report_error__8__report_enabled_checked = 1U;
            __Vtask_uvm_report_error__8__context_name = ""s;
            __Vtask_uvm_report_error__8__line = 0x00000141U;
            __Vtask_uvm_report_error__8__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh"s;
            __Vtask_uvm_report_error__8__verbosity = 0U;
            __Vtemp_1 = ([&]() {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__9__Vfuncout);
                }(), __Vfunc_get_full_name__9__Vfuncout);
            __Vtask_uvm_report_error__8__message = VL_SFORMATF_N_NX("Virtual field \"%@\" cannot have 0 bits",0,
                                                                    -1,
                                                                    &(__Vtemp_1)) ;
            __Vtask_uvm_report_error__8__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__10__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__10__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__11__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__11__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__8__id, __Vtask_uvm_report_error__8__message, __Vtask_uvm_report_error__8__verbosity, __Vtask_uvm_report_error__8__filename, __Vtask_uvm_report_error__8__line, __Vtask_uvm_report_error__8__context_name, (IData)(__Vtask_uvm_report_error__8__report_enabled_checked));
        }
        size = 1U;
    }
    if ((0x00000040U < size)) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__13__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__13__severity = 2U;
                        __Vfunc_uvm_report_enabled__13__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__14__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__14__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__15__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__15__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__13__verbosity, (IData)(__Vfunc_uvm_report_enabled__13__severity), __Vfunc_uvm_report_enabled__13__id, __Vtask_uvm_report_enabled__16__Vfuncout);
                        __Vfunc_uvm_report_enabled__13__Vfuncout 
                            = __Vtask_uvm_report_enabled__16__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__13__Vfuncout))) {
            __Vtask_uvm_report_error__17__report_enabled_checked = 1U;
            __Vtask_uvm_report_error__17__context_name = ""s;
            __Vtask_uvm_report_error__17__line = 0x00000147U;
            __Vtask_uvm_report_error__17__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh"s;
            __Vtask_uvm_report_error__17__verbosity = 0U;
            __Vtemp_2 = ([&]() {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__18__Vfuncout);
                }(), __Vfunc_get_full_name__18__Vfuncout);
            __Vtask_uvm_report_error__17__message = VL_SFORMATF_N_NX("Virtual field \"%@\" cannot have more than 64 bits",0,
                                                                     -1,
                                                                     &(__Vtemp_2)) ;
            __Vtask_uvm_report_error__17__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__19__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__19__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__20__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__20__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__17__id, __Vtask_uvm_report_error__17__message, __Vtask_uvm_report_error__17__verbosity, __Vtask_uvm_report_error__17__filename, __Vtask_uvm_report_error__17__line, __Vtask_uvm_report_error__17__context_name, (IData)(__Vtask_uvm_report_error__17__report_enabled_checked));
        }
        size = 0x00000040U;
    }
    this->__PVT__size = size;
    this->__PVT__lsb = lsb_pos;
    VL_NULL_CHECK(this->__PVT__parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 334)->__VnoInFunc_add_field(vlSymsp, 
                                                                                VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_vreg_field>{this});
}

void Vtransactions_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_full_name(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_full_name\n"); );
    // Locals
    std::string __Vtask_get_full_name__23__Vfuncout;
    std::string __Vfunc_get_name__24__Vfuncout;
    // Body
    get_full_name__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                            ([&]() {
                    VL_NULL_CHECK(this->__PVT__parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 340)
                                                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__23__Vfuncout);
                }(), __Vtask_get_full_name__23__Vfuncout), "."s), 
                                             ([&]() {
                this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__24__Vfuncout);
            }(), __Vfunc_get_name__24__Vfuncout));
}

void Vtransactions_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_register(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_vreg> &get_register__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_register\n"); );
    // Body
    get_register__Vfuncrtn = this->__PVT__parent;
}

void Vtransactions_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_parent(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_vreg> &get_parent__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_parent\n"); );
    // Body
    get_parent__Vfuncrtn = this->__PVT__parent;
}

void Vtransactions_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_lsb_pos_in_register(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &get_lsb_pos_in_register__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_lsb_pos_in_register\n"); );
    // Body
    get_lsb_pos_in_register__Vfuncrtn = this->__PVT__lsb;
}

void Vtransactions_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_n_bits(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bits__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_n_bits\n"); );
    // Body
    get_n_bits__Vfuncrtn = this->__PVT__size;
}

void Vtransactions_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_access(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_access__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_access\n"); );
    // Locals
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_mem> __Vtask_get_memory__25__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__26__Vfuncout;
    __Vfunc_uvm_report_enabled__26__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__26__verbosity;
    __Vfunc_uvm_report_enabled__26__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__26__severity;
    __Vfunc_uvm_report_enabled__26__severity = 0;
    std::string __Vfunc_uvm_report_enabled__26__id;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__27__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__28__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__29__Vfuncout;
    __Vtask_uvm_report_enabled__29__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__30__id;
    std::string __Vtask_uvm_report_error__30__message;
    IData/*31:0*/ __Vtask_uvm_report_error__30__verbosity;
    __Vtask_uvm_report_error__30__verbosity = 0;
    std::string __Vtask_uvm_report_error__30__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__30__line;
    __Vtask_uvm_report_error__30__line = 0;
    std::string __Vtask_uvm_report_error__30__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__30__report_enabled_checked;
    __Vtask_uvm_report_error__30__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__31__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__32__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__33__Vfuncout;
    std::string __Vtask_get_access__35__Vfuncout;
    std::string __Vtemp_1;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    {
        if ((VlNull{} == ([&]() {
                        VL_NULL_CHECK(this->__PVT__parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 366)
                          ->__VnoInFunc_get_memory(vlSymsp, __Vtask_get_memory__25__Vfuncout);
                    }(), __Vtask_get_memory__25__Vfuncout))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__26__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__26__severity = 2U;
                            __Vfunc_uvm_report_enabled__26__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__27__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__27__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__28__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__28__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__26__verbosity, (IData)(__Vfunc_uvm_report_enabled__26__severity), __Vfunc_uvm_report_enabled__26__id, __Vtask_uvm_report_enabled__29__Vfuncout);
                            __Vfunc_uvm_report_enabled__26__Vfuncout 
                                = __Vtask_uvm_report_enabled__29__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__26__Vfuncout))) {
                __Vtask_uvm_report_error__30__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__30__context_name = ""s;
                __Vtask_uvm_report_error__30__line = 0x00000170U;
                __Vtask_uvm_report_error__30__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh"s;
                __Vtask_uvm_report_error__30__verbosity = 0U;
                __Vtemp_1 = ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__31__Vfuncout);
                    }(), __Vfunc_get_full_name__31__Vfuncout);
                __Vtask_uvm_report_error__30__message 
                    = VL_SFORMATF_N_NX("Cannot call uvm_vreg_field::get_rights() on unimplemented virtual field \"%@\"",0,
                                       -1,&(__Vtemp_1)) ;
                __Vtask_uvm_report_error__30__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__32__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__32__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__33__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__33__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__30__id, __Vtask_uvm_report_error__30__message, __Vtask_uvm_report_error__30__verbosity, __Vtask_uvm_report_error__30__filename, __Vtask_uvm_report_error__30__line, __Vtask_uvm_report_error__30__context_name, (IData)(__Vtask_uvm_report_error__30__report_enabled_checked));
            }
            get_access__Vfuncrtn = "RW"s;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 372)->__VnoInFunc_get_access(vlSymsp, map, __Vtask_get_access__35__Vfuncout);
        get_access__Vfuncrtn = __Vtask_get_access__35__Vfuncout;
        __Vlabel0: ;
    }
}

VlCoroutine Vtransactions_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_write(Vtransactions__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_write\n"); );
    // Locals
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_mem> __Vtask_get_memory__37__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__38__Vfuncout;
    __Vfunc_uvm_report_enabled__38__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__38__verbosity;
    __Vfunc_uvm_report_enabled__38__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__38__severity;
    __Vfunc_uvm_report_enabled__38__severity = 0;
    std::string __Vfunc_uvm_report_enabled__38__id;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__39__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__40__Vfuncout;
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
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__44__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__45__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_block> __Vtask_get_block__47__Vfuncout;
    IData/*31:0*/ __Vtask_get_default_door__48__Vfuncout;
    __Vtask_get_default_door__48__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__50__Vfuncout;
    __Vfunc_uvm_report_enabled__50__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__50__verbosity;
    __Vfunc_uvm_report_enabled__50__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__50__severity;
    __Vfunc_uvm_report_enabled__50__severity = 0;
    std::string __Vfunc_uvm_report_enabled__50__id;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__51__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__52__Vfuncout;
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
    IData/*31:0*/ __Vfunc_get_n_bits__56__Vfuncout;
    __Vfunc_get_n_bits__56__Vfuncout = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__57__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__58__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_vreg_field_cbs> __Vtask_first__61__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_vreg_field_cbs> __Vtask_next__63__Vfuncout;
    IData/*31:0*/ __Vtask_get_n_bytes__64__Vfuncout;
    __Vtask_get_n_bytes__64__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_lsb_pos_in_register__65__Vfuncout;
    __Vfunc_get_lsb_pos_in_register__65__Vfuncout = 0;
    QData/*63:0*/ __Vtask_get_offset_in_memory__66__Vfuncout;
    __Vtask_get_offset_in_memory__66__Vfuncout = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_backdoor> __Vtask_get_backdoor__67__Vfuncout;
    IData/*31:0*/ __Vfunc_get_n_bits__68__Vfuncout;
    __Vfunc_get_n_bits__68__Vfuncout = 0;
    IData/*31:0*/ __Vtask_read__69__status;
    __Vtask_read__69__status = 0;
    QData/*63:0*/ __Vtask_read__69__value;
    __Vtask_read__69__value = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__70__Vfuncout;
    __Vfunc_uvm_report_enabled__70__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__70__verbosity;
    __Vfunc_uvm_report_enabled__70__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__70__severity;
    __Vfunc_uvm_report_enabled__70__severity = 0;
    std::string __Vfunc_uvm_report_enabled__70__id;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__71__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__72__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__73__Vfuncout;
    __Vtask_uvm_report_enabled__73__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__74__id;
    std::string __Vtask_uvm_report_error__74__message;
    IData/*31:0*/ __Vtask_uvm_report_error__74__verbosity;
    __Vtask_uvm_report_error__74__verbosity = 0;
    std::string __Vtask_uvm_report_error__74__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__74__line;
    __Vtask_uvm_report_error__74__line = 0;
    std::string __Vtask_uvm_report_error__74__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__74__report_enabled_checked;
    __Vtask_uvm_report_error__74__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__75__Vfuncout;
    std::string __Vfunc_get_full_name__76__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__77__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__78__Vfuncout;
    IData/*31:0*/ __Vfunc_get_n_bits__81__Vfuncout;
    __Vfunc_get_n_bits__81__Vfuncout = 0;
    IData/*31:0*/ __Vtask_read__82__status;
    __Vtask_read__82__status = 0;
    QData/*63:0*/ __Vtask_read__82__value;
    __Vtask_read__82__value = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__83__Vfuncout;
    __Vfunc_uvm_report_enabled__83__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__83__verbosity;
    __Vfunc_uvm_report_enabled__83__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__83__severity;
    __Vfunc_uvm_report_enabled__83__severity = 0;
    std::string __Vfunc_uvm_report_enabled__83__id;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__84__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__85__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__86__Vfuncout;
    __Vtask_uvm_report_enabled__86__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__87__id;
    std::string __Vtask_uvm_report_error__87__message;
    IData/*31:0*/ __Vtask_uvm_report_error__87__verbosity;
    __Vtask_uvm_report_error__87__verbosity = 0;
    std::string __Vtask_uvm_report_error__87__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__87__line;
    __Vtask_uvm_report_error__87__line = 0;
    std::string __Vtask_uvm_report_error__87__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__87__report_enabled_checked;
    __Vtask_uvm_report_error__87__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__88__Vfuncout;
    std::string __Vfunc_get_full_name__89__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__90__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__91__Vfuncout;
    IData/*31:0*/ __Vtask_write__94__status;
    __Vtask_write__94__status = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_vreg_field_cbs> __Vtask_first__96__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_vreg_field_cbs> __Vtask_next__98__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__100__Vfuncout;
    __Vfunc_uvm_report_enabled__100__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__100__verbosity;
    __Vfunc_uvm_report_enabled__100__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__100__severity;
    __Vfunc_uvm_report_enabled__100__severity = 0;
    std::string __Vfunc_uvm_report_enabled__100__id;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__101__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__102__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__103__Vfuncout;
    __Vtask_uvm_report_enabled__103__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__104__id;
    std::string __Vtask_uvm_report_info__104__message;
    IData/*31:0*/ __Vtask_uvm_report_info__104__verbosity;
    __Vtask_uvm_report_info__104__verbosity = 0;
    std::string __Vtask_uvm_report_info__104__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__104__line;
    __Vtask_uvm_report_info__104__line = 0;
    std::string __Vtask_uvm_report_info__104__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__104__report_enabled_checked;
    __Vtask_uvm_report_info__104__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__105__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__106__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__107__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    std::string __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_10;
    std::string __Vtemp_11;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_block> unnamedblk298__DOT__blk;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_vreg_field_cbs> unnamedblk299__DOT__cb;
    QData/*63:0*/ unnamedblk300__DOT__segn;
    unnamedblk300__DOT__segn = 0;
    IData/*31:0*/ unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk1_1__DOT____Vrepeat0 = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_vreg_field_cbs> unnamedblk301__DOT__cb;
    QData/*63:0*/ tmp;
    tmp = 0;
    QData/*63:0*/ segval;
    segval = 0;
    QData/*63:0*/ segoff;
    segoff = 0;
    IData/*31:0*/ st;
    st = 0;
    IData/*31:0*/ flsb;
    flsb = 0;
    IData/*31:0*/ fmsb;
    fmsb = 0;
    IData/*31:0*/ rmwbits;
    rmwbits = 0;
    IData/*31:0*/ segsiz;
    segsiz = 0;
    IData/*31:0*/ segn;
    segn = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_mem> mem;
    IData/*31:0*/ rm_path;
    rm_path = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_callback_iter__pi69> cbs;
    {
        cbs = VL_NEW(Vtransactions_uvm_pkg__03a__03auvm_callback_iter__pi69, vlSymsp, 
                     VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_vreg_field>{this});
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        this->__PVT__write_in_progress = 1U;
        VL_NULL_CHECK(this->__PVT__parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 401)->__VnoInFunc_get_memory(vlSymsp, __Vtask_get_memory__37__Vfuncout);
        mem = __Vtask_get_memory__37__Vfuncout;
        if ((VlNull{} == mem)) {
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
                __Vtask_uvm_report_error__42__line = 0x00000194U;
                __Vtask_uvm_report_error__42__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh"s;
                __Vtask_uvm_report_error__42__verbosity = 0U;
                __Vtemp_1 = ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__43__Vfuncout);
                    }(), __Vfunc_get_full_name__43__Vfuncout);
                __Vtask_uvm_report_error__42__message 
                    = VL_SFORMATF_N_NX("Cannot call uvm_vreg_field::write() on unimplemented virtual register \"%@\"",0,
                                       -1,&(__Vtemp_1)) ;
                __Vtask_uvm_report_error__42__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__44__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__44__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__45__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__45__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__42__id, __Vtask_uvm_report_error__42__message, __Vtask_uvm_report_error__42__verbosity, __Vtask_uvm_report_error__42__filename, __Vtask_uvm_report_error__42__line, __Vtask_uvm_report_error__42__context_name, (IData)(__Vtask_uvm_report_error__42__report_enabled_checked));
            }
            status = 1U;
            goto __Vlabel0;
        }
        if ((3U == path)) {
            VL_NULL_CHECK(this->__PVT__parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 410)->__VnoInFunc_get_block(vlSymsp, __Vtask_get_block__47__Vfuncout);
            unnamedblk298__DOT__blk = __Vtask_get_block__47__Vfuncout;
            VL_NULL_CHECK(unnamedblk298__DOT__blk, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 411)->__VnoInFunc_get_default_door(vlSymsp, __Vtask_get_default_door__48__Vfuncout);
            path = __Vtask_get_default_door__48__Vfuncout;
        }
        status = 0U;
        co_await VL_NULL_CHECK(this->__PVT__parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 416)->__VnoInFunc_XatomicX(vlSymsp, 1U);
        if ((0U != VL_SHIFTR_QQI(64,64,32, value, this->__PVT__size))) {
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
                __Vtask_uvm_report_warning__54__line = 0x000001a3U;
                __Vtask_uvm_report_warning__54__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh"s;
                __Vtask_uvm_report_warning__54__verbosity = 0U;
                __Vtemp_2 = ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__55__Vfuncout);
                    }(), __Vfunc_get_full_name__55__Vfuncout);
                __Vtask_uvm_report_warning__54__message 
                    = VL_SFORMATF_N_NX("Writing value 'h%x that is greater than field \"%@\" size (%0# bits)",0,
                                       64,value,-1,
                                       &(__Vtemp_2),
                                       32,([&]() {
                                this->__VnoInFunc_get_n_bits(vlSymsp, __Vfunc_get_n_bits__56__Vfuncout);
                            }(), __Vfunc_get_n_bits__56__Vfuncout)) ;
                __Vtask_uvm_report_warning__54__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__57__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__57__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__58__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__58__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__54__id, __Vtask_uvm_report_warning__54__message, __Vtask_uvm_report_warning__54__verbosity, __Vtask_uvm_report_warning__54__filename, __Vtask_uvm_report_warning__54__line, __Vtask_uvm_report_warning__54__context_name, (IData)(__Vtask_uvm_report_warning__54__report_enabled_checked));
            }
            value = (value & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__size) 
                              - 1ULL));
        }
        tmp = 0ULL;
        this->__VnoInFunc_pre_write(vlSymsp, idx, value, path, map);
        VL_NULL_CHECK(cbs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 425)->__VnoInFunc_first(vlSymsp, __Vtask_first__61__Vfuncout);
        unnamedblk299__DOT__cb = __Vtask_first__61__Vfuncout;
        while ((VlNull{} != unnamedblk299__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk299__DOT__cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 427)->__PVT__fname 
                = this->__PVT__fname;
            VL_NULL_CHECK(unnamedblk299__DOT__cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 428)->__PVT__lineno 
                = this->__PVT__lineno;
            VL_NULL_CHECK(unnamedblk299__DOT__cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 429)->__VnoInFunc_pre_write(vlSymsp, 
                                                                                VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_vreg_field>{this}, idx, value, path, map);
            VL_NULL_CHECK(cbs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 426)->__VnoInFunc_next(vlSymsp, __Vtask_next__63__Vfuncout);
            unnamedblk299__DOT__cb = __Vtask_next__63__Vfuncout;
        }
        segsiz = VL_SHIFTL_III(32,32,32, ([&]() {
                    VL_NULL_CHECK(mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 432)
                                          ->__VnoInFunc_get_n_bytes(vlSymsp, __Vtask_get_n_bytes__64__Vfuncout);
                }(), __Vtask_get_n_bytes__64__Vfuncout), 3U);
        this->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __Vfunc_get_lsb_pos_in_register__65__Vfuncout);
        flsb = __Vfunc_get_lsb_pos_in_register__65__Vfuncout;
        segoff = (([&]() {
                    VL_NULL_CHECK(this->__PVT__parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 434)
                   ->__VnoInFunc_get_offset_in_memory(vlProcess, vlSymsp, idx, __Vtask_get_offset_in_memory__66__Vfuncout);
                }(), __Vtask_get_offset_in_memory__66__Vfuncout) 
                  + VL_DIV_QQQ(64, (QData)((IData)(flsb)), (QData)((IData)(segsiz))));
        rm_path = 3U;
        if ((VlNull{} != ([&]() {
                        VL_NULL_CHECK(mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 438)
                          ->__VnoInFunc_get_backdoor(vlSymsp, 1U, __Vtask_get_backdoor__67__Vfuncout);
                    }(), __Vtask_get_backdoor__67__Vfuncout))) {
            rm_path = 1U;
        }
        rmwbits = VL_MODDIVS_III(32, flsb, segsiz);
        segn = ((IData)(1U) + VL_DIV_III(32, ((rmwbits 
                                               + ([&]() {
                                this->__VnoInFunc_get_n_bits(vlSymsp, __Vfunc_get_n_bits__68__Vfuncout);
                            }(), __Vfunc_get_n_bits__68__Vfuncout)) 
                                              - (IData)(1U)), segsiz));
        if (VL_LTS_III(32, 0U, rmwbits)) {
            co_await VL_NULL_CHECK(mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 449)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__69__status, segoff, __Vtask_read__69__value, rm_path, map, parent, 0xffffffffU, extension, fname, lineno);
            st = __Vtask_read__69__status;
            tmp = __Vtask_read__69__value;
            if (((0U != st) & (2U != st))) {
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__70__id = "RegModel"s;
                                __Vfunc_uvm_report_enabled__70__severity = 2U;
                                __Vfunc_uvm_report_enabled__70__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__71__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__71__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__72__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__72__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__70__verbosity, (IData)(__Vfunc_uvm_report_enabled__70__severity), __Vfunc_uvm_report_enabled__70__id, __Vtask_uvm_report_enabled__73__Vfuncout);
                                __Vfunc_uvm_report_enabled__70__Vfuncout 
                                    = __Vtask_uvm_report_enabled__73__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__70__Vfuncout))) {
                    __Vtask_uvm_report_error__74__report_enabled_checked = 1U;
                    __Vtask_uvm_report_error__74__context_name = ""s;
                    __Vtask_uvm_report_error__74__line = 0x000001c5U;
                    __Vtask_uvm_report_error__74__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh"s;
                    __Vtask_uvm_report_error__74__verbosity = 0U;
                    __Vtemp_3 = ([&]() {
                            VL_NULL_CHECK(mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 453)
                                 ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__75__Vfuncout);
                        }(), __Vtask_get_full_name__75__Vfuncout);
                    __Vtemp_4 = ([&]() {
                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__76__Vfuncout);
                        }(), __Vfunc_get_full_name__76__Vfuncout);
                    __Vtask_uvm_report_error__74__message 
                        = VL_SFORMATF_N_NX("Unable to read LSB bits in %@[%0#] to for RMW cycle on virtual field %@.",0,
                                           -1,&(__Vtemp_3),
                                           64,segoff,
                                           -1,&(__Vtemp_4)) ;
                    __Vtask_uvm_report_error__74__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__77__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__77__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__78__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__78__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__74__id, __Vtask_uvm_report_error__74__message, __Vtask_uvm_report_error__74__verbosity, __Vtask_uvm_report_error__74__filename, __Vtask_uvm_report_error__74__line, __Vtask_uvm_report_error__74__context_name, (IData)(__Vtask_uvm_report_error__74__report_enabled_checked));
                }
                status = 1U;
                co_await VL_NULL_CHECK(this->__PVT__parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 455)->__VnoInFunc_XatomicX(vlSymsp, 0U);
                goto __Vlabel0;
            }
            value = (VL_SHIFTL_QQI(64,64,32, value, rmwbits) 
                     | (tmp & (VL_SHIFTL_QQI(64,64,32, 1ULL, rmwbits) 
                               - 1ULL)));
        }
        fmsb = ((rmwbits + ([&]() {
                        this->__VnoInFunc_get_n_bits(vlSymsp, __Vfunc_get_n_bits__81__Vfuncout);
                    }(), __Vfunc_get_n_bits__81__Vfuncout)) 
                - (IData)(1U));
        rmwbits = VL_MODDIVS_III(32, ((IData)(1U) + fmsb), segsiz);
        if (VL_LTS_III(32, 0U, rmwbits)) {
            if (VL_LTS_III(32, 0U, segn)) {
                co_await VL_NULL_CHECK(mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 467)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__82__status, 
                                                                                ((segoff 
                                                                                + (QData)((IData)(segn))) 
                                                                                - 1ULL), __Vtask_read__82__value, rm_path, map, parent, 0xffffffffU, extension, fname, lineno);
                st = __Vtask_read__82__status;
                tmp = __Vtask_read__82__value;
                if (((0U != st) & (2U != st))) {
                    if ((0U != ([&]() {
                                    __Vfunc_uvm_report_enabled__83__id = "RegModel"s;
                                    __Vfunc_uvm_report_enabled__83__severity = 2U;
                                    __Vfunc_uvm_report_enabled__83__verbosity = 0U;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__84__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                        = __Vfunc_get__84__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__85__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                        = __Vtask_get_root__85__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__83__verbosity, (IData)(__Vfunc_uvm_report_enabled__83__severity), __Vfunc_uvm_report_enabled__83__id, __Vtask_uvm_report_enabled__86__Vfuncout);
                                    __Vfunc_uvm_report_enabled__83__Vfuncout 
                                        = __Vtask_uvm_report_enabled__86__Vfuncout;
                                }(), __Vfunc_uvm_report_enabled__83__Vfuncout))) {
                        __Vtask_uvm_report_error__87__report_enabled_checked = 1U;
                        __Vtask_uvm_report_error__87__context_name = ""s;
                        __Vtask_uvm_report_error__87__line = 0x000001d8U;
                        __Vtask_uvm_report_error__87__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh"s;
                        __Vtask_uvm_report_error__87__verbosity = 0U;
                        __Vtemp_5 = ([&]() {
                                VL_NULL_CHECK(mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 472)
                                     ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__88__Vfuncout);
                            }(), __Vtask_get_full_name__88__Vfuncout);
                        __Vtemp_6 = ([&]() {
                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__89__Vfuncout);
                            }(), __Vfunc_get_full_name__89__Vfuncout);
                        __Vtask_uvm_report_error__87__message 
                            = VL_SFORMATF_N_NX("Unable to read MSB bits in %@[%0#] to for RMW cycle on virtual field %@.",0,
                                               -1,&(__Vtemp_5),
                                               64,(
                                                   (segoff 
                                                    + (QData)((IData)(segn))) 
                                                   - 1ULL),
                                               -1,&(__Vtemp_6)) ;
                        __Vtask_uvm_report_error__87__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__90__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                            = __Vfunc_get__90__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__91__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                            = __Vtask_get_root__91__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__87__id, __Vtask_uvm_report_error__87__message, __Vtask_uvm_report_error__87__verbosity, __Vtask_uvm_report_error__87__filename, __Vtask_uvm_report_error__87__line, __Vtask_uvm_report_error__87__context_name, (IData)(__Vtask_uvm_report_error__87__report_enabled_checked));
                    }
                    status = 1U;
                    co_await VL_NULL_CHECK(this->__PVT__parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 474)->__VnoInFunc_XatomicX(vlSymsp, 0U);
                    goto __Vlabel0;
                }
            }
            value = (value | VL_SHIFTL_QQI(64,64,32, 
                                           (tmp & (~ 
                                                   (VL_SHIFTL_QQI(64,64,32, 1ULL, rmwbits) 
                                                    - 1ULL))), 
                                           VL_MULS_III(32, 
                                                       (segn 
                                                        - (IData)(1U)), segsiz)));
        }
        tmp = value;
        unnamedblk1_1__DOT____Vrepeat0 = segn;
        while (VL_LTS_III(32, 0U, unnamedblk1_1__DOT____Vrepeat0)) {
            co_await VL_NULL_CHECK(mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 484)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__94__status, segoff, tmp, path, map, parent, 0xffffffffU, extension, fname, lineno);
            st = __Vtask_write__94__status;
            if (((0U != st) & (2U != st))) {
                status = 1U;
            }
            segoff = (1ULL + segoff);
            tmp = VL_SHIFTR_QQI(64,64,32, tmp, segsiz);
            unnamedblk1_1__DOT____Vrepeat0 = (unnamedblk1_1__DOT____Vrepeat0 
                                              - (IData)(1U));
        }
        this->__VnoInFunc_post_write(vlSymsp, idx, value, path, map, status);
        VL_NULL_CHECK(cbs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 492)->__VnoInFunc_first(vlSymsp, __Vtask_first__96__Vfuncout);
        unnamedblk301__DOT__cb = __Vtask_first__96__Vfuncout;
        while ((VlNull{} != unnamedblk301__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk301__DOT__cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 494)->__PVT__fname 
                = this->__PVT__fname;
            VL_NULL_CHECK(unnamedblk301__DOT__cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 495)->__PVT__lineno 
                = this->__PVT__lineno;
            VL_NULL_CHECK(unnamedblk301__DOT__cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 496)->__VnoInFunc_post_write(vlSymsp, 
                                                                                VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_vreg_field>{this}, idx, value, path, map, status);
            VL_NULL_CHECK(cbs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 493)->__VnoInFunc_next(vlSymsp, __Vtask_next__98__Vfuncout);
            unnamedblk301__DOT__cb = __Vtask_next__98__Vfuncout;
        }
        co_await VL_NULL_CHECK(this->__PVT__parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 499)->__VnoInFunc_XatomicX(vlSymsp, 0U);
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__100__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__100__severity = 0U;
                        __Vfunc_uvm_report_enabled__100__verbosity = 0x000000c8U;
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
            __Vtask_uvm_report_info__104__report_enabled_checked = 1U;
            __Vtask_uvm_report_info__104__context_name = ""s;
            __Vtask_uvm_report_info__104__line = 0x000001f9U;
            __Vtask_uvm_report_info__104__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh"s;
            __Vtask_uvm_report_info__104__verbosity = 0x000000c8U;
            __Vtemp_10[0U] = 0x646f6f72U;
            if ((0U == path)) {
                __Vtemp_10[1U] = 0x726f6e74U;
                __Vtemp_10[2U] = 0x00000066U;
            } else {
                __Vtemp_10[1U] = 0x6261636bU;
                __Vtemp_10[2U] = 0U;
            }
            __Vtemp_11 = ([&]() {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__105__Vfuncout);
                }(), __Vfunc_get_full_name__105__Vfuncout);
            __Vtask_uvm_report_info__104__message = VL_SFORMATF_N_NX("Wrote virtual field \"%@\"[%0#] via %s with: 'h%x",0,
                                                                     -1,
                                                                     &(__Vtemp_11),
                                                                     64,
                                                                     idx,
                                                                     72,
                                                                     __Vtemp_10.data(),
                                                                     64,
                                                                     value) ;
            __Vtask_uvm_report_info__104__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__106__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__106__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__107__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__107__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__104__id, __Vtask_uvm_report_info__104__message, __Vtask_uvm_report_info__104__verbosity, __Vtask_uvm_report_info__104__filename, __Vtask_uvm_report_info__104__line, __Vtask_uvm_report_info__104__context_name, (IData)(__Vtask_uvm_report_info__104__report_enabled_checked));
        }
        this->__PVT__write_in_progress = 0U;
        this->__PVT__fname = ""s;
        this->__PVT__lineno = 0U;
        __Vlabel0: ;
    }
    co_return;}

VlCoroutine Vtransactions_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_read(Vtransactions__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_read\n"); );
    // Locals
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_mem> __Vtask_get_memory__110__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__111__Vfuncout;
    __Vfunc_uvm_report_enabled__111__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__111__verbosity;
    __Vfunc_uvm_report_enabled__111__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__111__severity;
    __Vfunc_uvm_report_enabled__111__severity = 0;
    std::string __Vfunc_uvm_report_enabled__111__id;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__112__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__113__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__114__Vfuncout;
    __Vtask_uvm_report_enabled__114__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__115__id;
    std::string __Vtask_uvm_report_error__115__message;
    IData/*31:0*/ __Vtask_uvm_report_error__115__verbosity;
    __Vtask_uvm_report_error__115__verbosity = 0;
    std::string __Vtask_uvm_report_error__115__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__115__line;
    __Vtask_uvm_report_error__115__line = 0;
    std::string __Vtask_uvm_report_error__115__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__115__report_enabled_checked;
    __Vtask_uvm_report_error__115__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__116__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__117__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__118__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_block> __Vtask_get_block__120__Vfuncout;
    IData/*31:0*/ __Vtask_get_default_door__121__Vfuncout;
    __Vtask_get_default_door__121__Vfuncout = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_vreg_field_cbs> __Vtask_first__124__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_vreg_field_cbs> __Vtask_next__126__Vfuncout;
    IData/*31:0*/ __Vtask_get_n_bytes__127__Vfuncout;
    __Vtask_get_n_bytes__127__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_lsb_pos_in_register__128__Vfuncout;
    __Vfunc_get_lsb_pos_in_register__128__Vfuncout = 0;
    QData/*63:0*/ __Vtask_get_offset_in_memory__129__Vfuncout;
    __Vtask_get_offset_in_memory__129__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_n_bits__130__Vfuncout;
    __Vfunc_get_n_bits__130__Vfuncout = 0;
    IData/*31:0*/ __Vtask_read__131__status;
    __Vtask_read__131__status = 0;
    QData/*63:0*/ __Vtask_read__131__value;
    __Vtask_read__131__value = 0;
    IData/*31:0*/ __Vfunc_get_n_bits__132__Vfuncout;
    __Vfunc_get_n_bits__132__Vfuncout = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_vreg_field_cbs> __Vtask_first__134__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_vreg_field_cbs> __Vtask_next__136__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__138__Vfuncout;
    __Vfunc_uvm_report_enabled__138__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__138__verbosity;
    __Vfunc_uvm_report_enabled__138__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__138__severity;
    __Vfunc_uvm_report_enabled__138__severity = 0;
    std::string __Vfunc_uvm_report_enabled__138__id;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__139__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__140__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__141__Vfuncout;
    __Vtask_uvm_report_enabled__141__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__142__id;
    std::string __Vtask_uvm_report_info__142__message;
    IData/*31:0*/ __Vtask_uvm_report_info__142__verbosity;
    __Vtask_uvm_report_info__142__verbosity = 0;
    std::string __Vtask_uvm_report_info__142__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__142__line;
    __Vtask_uvm_report_info__142__line = 0;
    std::string __Vtask_uvm_report_info__142__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__142__report_enabled_checked;
    __Vtask_uvm_report_info__142__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__143__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__144__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__145__Vfuncout;
    std::string __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_5;
    std::string __Vtemp_6;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_block> unnamedblk302__DOT__blk;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_vreg_field_cbs> unnamedblk303__DOT__cb;
    IData/*31:0*/ unnamedblk1_2__DOT____Vrepeat1;
    unnamedblk1_2__DOT____Vrepeat1 = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_vreg_field_cbs> unnamedblk304__DOT__cb;
    QData/*63:0*/ tmp;
    tmp = 0;
    QData/*63:0*/ segval;
    segval = 0;
    QData/*63:0*/ segoff;
    segoff = 0;
    IData/*31:0*/ st;
    st = 0;
    IData/*31:0*/ flsb;
    flsb = 0;
    IData/*31:0*/ lsb;
    lsb = 0;
    IData/*31:0*/ segsiz;
    segsiz = 0;
    IData/*31:0*/ segn;
    segn = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_mem> mem;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_callback_iter__pi69> cbs;
    {
        cbs = VL_NEW(Vtransactions_uvm_pkg__03a__03auvm_callback_iter__pi69, vlSymsp, 
                     VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_vreg_field>{this});
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        this->__PVT__read_in_progress = 1U;
        VL_NULL_CHECK(this->__PVT__parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 537)->__VnoInFunc_get_memory(vlSymsp, __Vtask_get_memory__110__Vfuncout);
        mem = __Vtask_get_memory__110__Vfuncout;
        if ((VlNull{} == mem)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__111__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__111__severity = 2U;
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
                __Vtask_uvm_report_error__115__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__115__context_name = ""s;
                __Vtask_uvm_report_error__115__line = 0x0000021cU;
                __Vtask_uvm_report_error__115__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh"s;
                __Vtask_uvm_report_error__115__verbosity = 0U;
                __Vtemp_1 = ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__116__Vfuncout);
                    }(), __Vfunc_get_full_name__116__Vfuncout);
                __Vtask_uvm_report_error__115__message 
                    = VL_SFORMATF_N_NX("Cannot call uvm_vreg_field::read() on unimplemented virtual register \"%@\"",0,
                                       -1,&(__Vtemp_1)) ;
                __Vtask_uvm_report_error__115__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__117__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__117__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__118__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__118__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__115__id, __Vtask_uvm_report_error__115__message, __Vtask_uvm_report_error__115__verbosity, __Vtask_uvm_report_error__115__filename, __Vtask_uvm_report_error__115__line, __Vtask_uvm_report_error__115__context_name, (IData)(__Vtask_uvm_report_error__115__report_enabled_checked));
            }
            status = 1U;
            goto __Vlabel0;
        }
        if ((3U == path)) {
            VL_NULL_CHECK(this->__PVT__parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 546)->__VnoInFunc_get_block(vlSymsp, __Vtask_get_block__120__Vfuncout);
            unnamedblk302__DOT__blk = __Vtask_get_block__120__Vfuncout;
            VL_NULL_CHECK(unnamedblk302__DOT__blk, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 547)->__VnoInFunc_get_default_door(vlSymsp, __Vtask_get_default_door__121__Vfuncout);
            path = __Vtask_get_default_door__121__Vfuncout;
        }
        status = 0U;
        co_await VL_NULL_CHECK(this->__PVT__parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 552)->__VnoInFunc_XatomicX(vlSymsp, 1U);
        value = 0ULL;
        this->__VnoInFunc_pre_read(vlSymsp, idx, path, map);
        VL_NULL_CHECK(cbs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 557)->__VnoInFunc_first(vlSymsp, __Vtask_first__124__Vfuncout);
        unnamedblk303__DOT__cb = __Vtask_first__124__Vfuncout;
        while ((VlNull{} != unnamedblk303__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk303__DOT__cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 559)->__PVT__fname 
                = this->__PVT__fname;
            VL_NULL_CHECK(unnamedblk303__DOT__cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 560)->__PVT__lineno 
                = this->__PVT__lineno;
            VL_NULL_CHECK(unnamedblk303__DOT__cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 561)->__VnoInFunc_pre_read(vlSymsp, 
                                                                                VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_vreg_field>{this}, idx, path, map);
            VL_NULL_CHECK(cbs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 558)->__VnoInFunc_next(vlSymsp, __Vtask_next__126__Vfuncout);
            unnamedblk303__DOT__cb = __Vtask_next__126__Vfuncout;
        }
        segsiz = VL_SHIFTL_III(32,32,32, ([&]() {
                    VL_NULL_CHECK(mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 564)
                                          ->__VnoInFunc_get_n_bytes(vlSymsp, __Vtask_get_n_bytes__127__Vfuncout);
                }(), __Vtask_get_n_bytes__127__Vfuncout), 3U);
        this->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __Vfunc_get_lsb_pos_in_register__128__Vfuncout);
        flsb = __Vfunc_get_lsb_pos_in_register__128__Vfuncout;
        segoff = (([&]() {
                    VL_NULL_CHECK(this->__PVT__parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 566)
                   ->__VnoInFunc_get_offset_in_memory(vlProcess, vlSymsp, idx, __Vtask_get_offset_in_memory__129__Vfuncout);
                }(), __Vtask_get_offset_in_memory__129__Vfuncout) 
                  + VL_DIV_QQQ(64, (QData)((IData)(flsb)), (QData)((IData)(segsiz))));
        lsb = VL_MODDIVS_III(32, flsb, segsiz);
        segn = ((IData)(1U) + VL_DIV_III(32, ((lsb 
                                               + ([&]() {
                                this->__VnoInFunc_get_n_bits(vlSymsp, __Vfunc_get_n_bits__130__Vfuncout);
                            }(), __Vfunc_get_n_bits__130__Vfuncout)) 
                                              - (IData)(1U)), segsiz));
        segoff = (segoff + ((QData)((IData)(segn)) 
                            - 1ULL));
        unnamedblk1_2__DOT____Vrepeat1 = segn;
        while (VL_LTS_III(32, 0U, unnamedblk1_2__DOT____Vrepeat1)) {
            value = VL_SHIFTL_QQI(64,64,32, value, segsiz);
            co_await VL_NULL_CHECK(mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 577)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__131__status, segoff, __Vtask_read__131__value, path, map, parent, 0xffffffffU, extension, fname, lineno);
            st = __Vtask_read__131__status;
            tmp = __Vtask_read__131__value;
            if (((0U != st) & (2U != st))) {
                status = 1U;
            }
            segoff = (segoff - 1ULL);
            value = (value | tmp);
            unnamedblk1_2__DOT____Vrepeat1 = (unnamedblk1_2__DOT____Vrepeat1 
                                              - (IData)(1U));
        }
        value = VL_SHIFTR_QQI(64,64,32, value, lsb);
        value = (value & (VL_SHIFTL_QQI(64,64,32, 1ULL, 
                                        ([&]() {
                            this->__VnoInFunc_get_n_bits(vlSymsp, __Vfunc_get_n_bits__132__Vfuncout);
                        }(), __Vfunc_get_n_bits__132__Vfuncout)) 
                          - 1ULL));
        this->__VnoInFunc_post_read(vlSymsp, idx, value, path, map, status);
        VL_NULL_CHECK(cbs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 591)->__VnoInFunc_first(vlSymsp, __Vtask_first__134__Vfuncout);
        unnamedblk304__DOT__cb = __Vtask_first__134__Vfuncout;
        while ((VlNull{} != unnamedblk304__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk304__DOT__cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 593)->__PVT__fname 
                = this->__PVT__fname;
            VL_NULL_CHECK(unnamedblk304__DOT__cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 594)->__PVT__lineno 
                = this->__PVT__lineno;
            VL_NULL_CHECK(unnamedblk304__DOT__cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 595)->__VnoInFunc_post_read(vlSymsp, 
                                                                                VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_vreg_field>{this}, idx, value, path, map, status);
            VL_NULL_CHECK(cbs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 592)->__VnoInFunc_next(vlSymsp, __Vtask_next__136__Vfuncout);
            unnamedblk304__DOT__cb = __Vtask_next__136__Vfuncout;
        }
        co_await VL_NULL_CHECK(this->__PVT__parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 598)->__VnoInFunc_XatomicX(vlSymsp, 0U);
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__138__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__138__severity = 0U;
                        __Vfunc_uvm_report_enabled__138__verbosity = 0x000000c8U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__139__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__139__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__140__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__140__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__138__verbosity, (IData)(__Vfunc_uvm_report_enabled__138__severity), __Vfunc_uvm_report_enabled__138__id, __Vtask_uvm_report_enabled__141__Vfuncout);
                        __Vfunc_uvm_report_enabled__138__Vfuncout 
                            = __Vtask_uvm_report_enabled__141__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__138__Vfuncout))) {
            __Vtask_uvm_report_info__142__report_enabled_checked = 1U;
            __Vtask_uvm_report_info__142__context_name = ""s;
            __Vtask_uvm_report_info__142__line = 0x0000025bU;
            __Vtask_uvm_report_info__142__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh"s;
            __Vtask_uvm_report_info__142__verbosity = 0x000000c8U;
            __Vtemp_5[0U] = 0x646f6f72U;
            if ((0U == path)) {
                __Vtemp_5[1U] = 0x726f6e74U;
                __Vtemp_5[2U] = 0x00000066U;
            } else {
                __Vtemp_5[1U] = 0x6261636bU;
                __Vtemp_5[2U] = 0U;
            }
            __Vtemp_6 = ([&]() {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__143__Vfuncout);
                }(), __Vfunc_get_full_name__143__Vfuncout);
            __Vtask_uvm_report_info__142__message = VL_SFORMATF_N_NX("Read virtual field \"%@\"[%0#] via %s: 'h%x",0,
                                                                     -1,
                                                                     &(__Vtemp_6),
                                                                     64,
                                                                     idx,
                                                                     72,
                                                                     __Vtemp_5.data(),
                                                                     64,
                                                                     value) ;
            __Vtask_uvm_report_info__142__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__144__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__144__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__145__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__145__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__142__id, __Vtask_uvm_report_info__142__message, __Vtask_uvm_report_info__142__verbosity, __Vtask_uvm_report_info__142__filename, __Vtask_uvm_report_info__142__line, __Vtask_uvm_report_info__142__context_name, (IData)(__Vtask_uvm_report_info__142__report_enabled_checked));
        }
        this->__PVT__read_in_progress = 0U;
        this->__PVT__fname = ""s;
        this->__PVT__lineno = 0U;
        __Vlabel0: ;
    }
    co_return;}

VlCoroutine Vtransactions_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_poke(Vtransactions__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ value, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_poke\n"); );
    // Locals
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_mem> __Vtask_get_memory__147__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__148__Vfuncout;
    __Vfunc_uvm_report_enabled__148__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__148__verbosity;
    __Vfunc_uvm_report_enabled__148__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__148__severity;
    __Vfunc_uvm_report_enabled__148__severity = 0;
    std::string __Vfunc_uvm_report_enabled__148__id;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__149__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__150__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__151__Vfuncout;
    __Vtask_uvm_report_enabled__151__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__152__id;
    std::string __Vtask_uvm_report_error__152__message;
    IData/*31:0*/ __Vtask_uvm_report_error__152__verbosity;
    __Vtask_uvm_report_error__152__verbosity = 0;
    std::string __Vtask_uvm_report_error__152__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__152__line;
    __Vtask_uvm_report_error__152__line = 0;
    std::string __Vtask_uvm_report_error__152__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__152__report_enabled_checked;
    __Vtask_uvm_report_error__152__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__153__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__154__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__155__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__158__Vfuncout;
    __Vfunc_uvm_report_enabled__158__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__158__verbosity;
    __Vfunc_uvm_report_enabled__158__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__158__severity;
    __Vfunc_uvm_report_enabled__158__severity = 0;
    std::string __Vfunc_uvm_report_enabled__158__id;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__159__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__160__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__161__Vfuncout;
    __Vtask_uvm_report_enabled__161__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__162__id;
    std::string __Vtask_uvm_report_warning__162__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__162__verbosity;
    __Vtask_uvm_report_warning__162__verbosity = 0;
    std::string __Vtask_uvm_report_warning__162__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__162__line;
    __Vtask_uvm_report_warning__162__line = 0;
    std::string __Vtask_uvm_report_warning__162__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__162__report_enabled_checked;
    __Vtask_uvm_report_warning__162__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__163__Vfuncout;
    IData/*31:0*/ __Vfunc_get_n_bits__164__Vfuncout;
    __Vfunc_get_n_bits__164__Vfuncout = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__165__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__166__Vfuncout;
    IData/*31:0*/ __Vtask_get_n_bytes__168__Vfuncout;
    __Vtask_get_n_bytes__168__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_lsb_pos_in_register__169__Vfuncout;
    __Vfunc_get_lsb_pos_in_register__169__Vfuncout = 0;
    QData/*63:0*/ __Vtask_get_offset_in_memory__170__Vfuncout;
    __Vtask_get_offset_in_memory__170__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_n_bits__171__Vfuncout;
    __Vfunc_get_n_bits__171__Vfuncout = 0;
    IData/*31:0*/ __Vtask_peek__172__status;
    __Vtask_peek__172__status = 0;
    QData/*63:0*/ __Vtask_peek__172__value;
    __Vtask_peek__172__value = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__173__Vfuncout;
    __Vfunc_uvm_report_enabled__173__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__173__verbosity;
    __Vfunc_uvm_report_enabled__173__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__173__severity;
    __Vfunc_uvm_report_enabled__173__severity = 0;
    std::string __Vfunc_uvm_report_enabled__173__id;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__174__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__175__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__176__Vfuncout;
    __Vtask_uvm_report_enabled__176__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__177__id;
    std::string __Vtask_uvm_report_error__177__message;
    IData/*31:0*/ __Vtask_uvm_report_error__177__verbosity;
    __Vtask_uvm_report_error__177__verbosity = 0;
    std::string __Vtask_uvm_report_error__177__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__177__line;
    __Vtask_uvm_report_error__177__line = 0;
    std::string __Vtask_uvm_report_error__177__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__177__report_enabled_checked;
    __Vtask_uvm_report_error__177__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__178__Vfuncout;
    std::string __Vfunc_get_full_name__179__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__180__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__181__Vfuncout;
    IData/*31:0*/ __Vfunc_get_n_bits__184__Vfuncout;
    __Vfunc_get_n_bits__184__Vfuncout = 0;
    IData/*31:0*/ __Vtask_peek__185__status;
    __Vtask_peek__185__status = 0;
    QData/*63:0*/ __Vtask_peek__185__value;
    __Vtask_peek__185__value = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__186__Vfuncout;
    __Vfunc_uvm_report_enabled__186__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__186__verbosity;
    __Vfunc_uvm_report_enabled__186__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__186__severity;
    __Vfunc_uvm_report_enabled__186__severity = 0;
    std::string __Vfunc_uvm_report_enabled__186__id;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__187__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__188__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__189__Vfuncout;
    __Vtask_uvm_report_enabled__189__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__190__id;
    std::string __Vtask_uvm_report_error__190__message;
    IData/*31:0*/ __Vtask_uvm_report_error__190__verbosity;
    __Vtask_uvm_report_error__190__verbosity = 0;
    std::string __Vtask_uvm_report_error__190__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__190__line;
    __Vtask_uvm_report_error__190__line = 0;
    std::string __Vtask_uvm_report_error__190__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__190__report_enabled_checked;
    __Vtask_uvm_report_error__190__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__191__Vfuncout;
    std::string __Vfunc_get_full_name__192__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__193__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__194__Vfuncout;
    IData/*31:0*/ __Vtask_poke__197__status;
    __Vtask_poke__197__status = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__199__Vfuncout;
    __Vfunc_uvm_report_enabled__199__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__199__verbosity;
    __Vfunc_uvm_report_enabled__199__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__199__severity;
    __Vfunc_uvm_report_enabled__199__severity = 0;
    std::string __Vfunc_uvm_report_enabled__199__id;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__200__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__201__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__202__Vfuncout;
    __Vtask_uvm_report_enabled__202__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__203__id;
    std::string __Vtask_uvm_report_info__203__message;
    IData/*31:0*/ __Vtask_uvm_report_info__203__verbosity;
    __Vtask_uvm_report_info__203__verbosity = 0;
    std::string __Vtask_uvm_report_info__203__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__203__line;
    __Vtask_uvm_report_info__203__line = 0;
    std::string __Vtask_uvm_report_info__203__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__203__report_enabled_checked;
    __Vtask_uvm_report_info__203__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__204__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__205__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__206__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    std::string __Vtemp_6;
    std::string __Vtemp_7;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    QData/*63:0*/ unnamedblk305__DOT__segn;
    unnamedblk305__DOT__segn = 0;
    IData/*31:0*/ unnamedblk1_3__DOT____Vrepeat2;
    unnamedblk1_3__DOT____Vrepeat2 = 0;
    QData/*63:0*/ tmp;
    tmp = 0;
    QData/*63:0*/ segval;
    segval = 0;
    QData/*63:0*/ segoff;
    segoff = 0;
    IData/*31:0*/ st;
    st = 0;
    IData/*31:0*/ flsb;
    flsb = 0;
    IData/*31:0*/ fmsb;
    fmsb = 0;
    IData/*31:0*/ rmwbits;
    rmwbits = 0;
    IData/*31:0*/ segsiz;
    segsiz = 0;
    IData/*31:0*/ segn;
    segn = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_mem> mem;
    IData/*31:0*/ rm_path;
    rm_path = 0;
    {
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        VL_NULL_CHECK(this->__PVT__parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 631)->__VnoInFunc_get_memory(vlSymsp, __Vtask_get_memory__147__Vfuncout);
        mem = __Vtask_get_memory__147__Vfuncout;
        if ((VlNull{} == mem)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__148__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__148__severity = 2U;
                            __Vfunc_uvm_report_enabled__148__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__149__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__149__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__150__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__150__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__148__verbosity, (IData)(__Vfunc_uvm_report_enabled__148__severity), __Vfunc_uvm_report_enabled__148__id, __Vtask_uvm_report_enabled__151__Vfuncout);
                            __Vfunc_uvm_report_enabled__148__Vfuncout 
                                = __Vtask_uvm_report_enabled__151__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__148__Vfuncout))) {
                __Vtask_uvm_report_error__152__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__152__context_name = ""s;
                __Vtask_uvm_report_error__152__line = 0x0000027aU;
                __Vtask_uvm_report_error__152__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh"s;
                __Vtask_uvm_report_error__152__verbosity = 0U;
                __Vtemp_1 = ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__153__Vfuncout);
                    }(), __Vfunc_get_full_name__153__Vfuncout);
                __Vtask_uvm_report_error__152__message 
                    = VL_SFORMATF_N_NX("Cannot call uvm_vreg_field::poke() on unimplemented virtual register \"%@\"",0,
                                       -1,&(__Vtemp_1)) ;
                __Vtask_uvm_report_error__152__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__154__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__154__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__155__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__155__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__152__id, __Vtask_uvm_report_error__152__message, __Vtask_uvm_report_error__152__verbosity, __Vtask_uvm_report_error__152__filename, __Vtask_uvm_report_error__152__line, __Vtask_uvm_report_error__152__context_name, (IData)(__Vtask_uvm_report_error__152__report_enabled_checked));
            }
            status = 1U;
            goto __Vlabel0;
        }
        status = 0U;
        co_await VL_NULL_CHECK(this->__PVT__parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 641)->__VnoInFunc_XatomicX(vlSymsp, 1U);
        if ((0U != VL_SHIFTR_QQI(64,64,32, value, this->__PVT__size))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__158__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__158__severity = 1U;
                            __Vfunc_uvm_report_enabled__158__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__159__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__159__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__160__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__160__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__158__verbosity, (IData)(__Vfunc_uvm_report_enabled__158__severity), __Vfunc_uvm_report_enabled__158__id, __Vtask_uvm_report_enabled__161__Vfuncout);
                            __Vfunc_uvm_report_enabled__158__Vfuncout 
                                = __Vtask_uvm_report_enabled__161__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__158__Vfuncout))) {
                __Vtask_uvm_report_warning__162__report_enabled_checked = 1U;
                __Vtask_uvm_report_warning__162__context_name = ""s;
                __Vtask_uvm_report_warning__162__line = 0x00000284U;
                __Vtask_uvm_report_warning__162__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh"s;
                __Vtask_uvm_report_warning__162__verbosity = 0U;
                __Vtemp_2 = ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__163__Vfuncout);
                    }(), __Vfunc_get_full_name__163__Vfuncout);
                __Vtask_uvm_report_warning__162__message 
                    = VL_SFORMATF_N_NX("Writing value 'h%x that is greater than field \"%@\" size (%0# bits)",0,
                                       64,value,-1,
                                       &(__Vtemp_2),
                                       32,([&]() {
                                this->__VnoInFunc_get_n_bits(vlSymsp, __Vfunc_get_n_bits__164__Vfuncout);
                            }(), __Vfunc_get_n_bits__164__Vfuncout)) ;
                __Vtask_uvm_report_warning__162__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__165__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__165__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__166__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__166__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__162__id, __Vtask_uvm_report_warning__162__message, __Vtask_uvm_report_warning__162__verbosity, __Vtask_uvm_report_warning__162__filename, __Vtask_uvm_report_warning__162__line, __Vtask_uvm_report_warning__162__context_name, (IData)(__Vtask_uvm_report_warning__162__report_enabled_checked));
            }
            value = (value & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__size) 
                              - 1ULL));
        }
        tmp = 0ULL;
        segsiz = VL_SHIFTL_III(32,32,32, ([&]() {
                    VL_NULL_CHECK(mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 649)
                                          ->__VnoInFunc_get_n_bytes(vlSymsp, __Vtask_get_n_bytes__168__Vfuncout);
                }(), __Vtask_get_n_bytes__168__Vfuncout), 3U);
        this->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __Vfunc_get_lsb_pos_in_register__169__Vfuncout);
        flsb = __Vfunc_get_lsb_pos_in_register__169__Vfuncout;
        segoff = (([&]() {
                    VL_NULL_CHECK(this->__PVT__parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 651)
                   ->__VnoInFunc_get_offset_in_memory(vlProcess, vlSymsp, idx, __Vtask_get_offset_in_memory__170__Vfuncout);
                }(), __Vtask_get_offset_in_memory__170__Vfuncout) 
                  + VL_DIV_QQQ(64, (QData)((IData)(flsb)), (QData)((IData)(segsiz))));
        rmwbits = VL_MODDIVS_III(32, flsb, segsiz);
        segn = ((IData)(1U) + VL_DIV_III(32, ((rmwbits 
                                               + ([&]() {
                                this->__VnoInFunc_get_n_bits(vlSymsp, __Vfunc_get_n_bits__171__Vfuncout);
                            }(), __Vfunc_get_n_bits__171__Vfuncout)) 
                                              - (IData)(1U)), segsiz));
        if (VL_LTS_III(32, 0U, rmwbits)) {
            VL_NULL_CHECK(mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 662)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__172__status, segoff, __Vtask_peek__172__value, ""s, parent, extension, fname, lineno);
            st = __Vtask_peek__172__status;
            tmp = __Vtask_peek__172__value;
            if (((0U != st) & (2U != st))) {
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__173__id = "RegModel"s;
                                __Vfunc_uvm_report_enabled__173__severity = 2U;
                                __Vfunc_uvm_report_enabled__173__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__174__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__174__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__175__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__175__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__173__verbosity, (IData)(__Vfunc_uvm_report_enabled__173__severity), __Vfunc_uvm_report_enabled__173__id, __Vtask_uvm_report_enabled__176__Vfuncout);
                                __Vfunc_uvm_report_enabled__173__Vfuncout 
                                    = __Vtask_uvm_report_enabled__176__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__173__Vfuncout))) {
                    __Vtask_uvm_report_error__177__report_enabled_checked = 1U;
                    __Vtask_uvm_report_error__177__context_name = ""s;
                    __Vtask_uvm_report_error__177__line = 0x0000029aU;
                    __Vtask_uvm_report_error__177__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh"s;
                    __Vtask_uvm_report_error__177__verbosity = 0U;
                    __Vtemp_3 = ([&]() {
                            VL_NULL_CHECK(mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 666)
                                 ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__178__Vfuncout);
                        }(), __Vtask_get_full_name__178__Vfuncout);
                    __Vtemp_4 = ([&]() {
                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__179__Vfuncout);
                        }(), __Vfunc_get_full_name__179__Vfuncout);
                    __Vtask_uvm_report_error__177__message 
                        = VL_SFORMATF_N_NX("Unable to read LSB bits in %@[%0#] to for RMW cycle on virtual field %@.",0,
                                           -1,&(__Vtemp_3),
                                           64,segoff,
                                           -1,&(__Vtemp_4)) ;
                    __Vtask_uvm_report_error__177__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__180__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__180__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__181__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__181__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__177__id, __Vtask_uvm_report_error__177__message, __Vtask_uvm_report_error__177__verbosity, __Vtask_uvm_report_error__177__filename, __Vtask_uvm_report_error__177__line, __Vtask_uvm_report_error__177__context_name, (IData)(__Vtask_uvm_report_error__177__report_enabled_checked));
                }
                status = 1U;
                co_await VL_NULL_CHECK(this->__PVT__parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 668)->__VnoInFunc_XatomicX(vlSymsp, 0U);
                goto __Vlabel0;
            }
            value = (VL_SHIFTL_QQI(64,64,32, value, rmwbits) 
                     | (tmp & (VL_SHIFTL_QQI(64,64,32, 1ULL, rmwbits) 
                               - 1ULL)));
        }
        fmsb = ((rmwbits + ([&]() {
                        this->__VnoInFunc_get_n_bits(vlSymsp, __Vfunc_get_n_bits__184__Vfuncout);
                    }(), __Vfunc_get_n_bits__184__Vfuncout)) 
                - (IData)(1U));
        rmwbits = VL_MODDIVS_III(32, ((IData)(1U) + fmsb), segsiz);
        if (VL_LTS_III(32, 0U, rmwbits)) {
            if (VL_LTS_III(32, 0U, segn)) {
                VL_NULL_CHECK(mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 680)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__185__status, 
                                                                                ((segoff 
                                                                                + (QData)((IData)(segn))) 
                                                                                - 1ULL), __Vtask_peek__185__value, ""s, parent, extension, fname, lineno);
                st = __Vtask_peek__185__status;
                tmp = __Vtask_peek__185__value;
                if (((0U != st) & (2U != st))) {
                    if ((0U != ([&]() {
                                    __Vfunc_uvm_report_enabled__186__id = "RegModel"s;
                                    __Vfunc_uvm_report_enabled__186__severity = 2U;
                                    __Vfunc_uvm_report_enabled__186__verbosity = 0U;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__187__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                        = __Vfunc_get__187__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__188__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                        = __Vtask_get_root__188__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__186__verbosity, (IData)(__Vfunc_uvm_report_enabled__186__severity), __Vfunc_uvm_report_enabled__186__id, __Vtask_uvm_report_enabled__189__Vfuncout);
                                    __Vfunc_uvm_report_enabled__186__Vfuncout 
                                        = __Vtask_uvm_report_enabled__189__Vfuncout;
                                }(), __Vfunc_uvm_report_enabled__186__Vfuncout))) {
                        __Vtask_uvm_report_error__190__report_enabled_checked = 1U;
                        __Vtask_uvm_report_error__190__context_name = ""s;
                        __Vtask_uvm_report_error__190__line = 0x000002adU;
                        __Vtask_uvm_report_error__190__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh"s;
                        __Vtask_uvm_report_error__190__verbosity = 0U;
                        __Vtemp_5 = ([&]() {
                                VL_NULL_CHECK(mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 685)
                                     ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__191__Vfuncout);
                            }(), __Vtask_get_full_name__191__Vfuncout);
                        __Vtemp_6 = ([&]() {
                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__192__Vfuncout);
                            }(), __Vfunc_get_full_name__192__Vfuncout);
                        __Vtask_uvm_report_error__190__message 
                            = VL_SFORMATF_N_NX("Unable to read MSB bits in %@[%0#] to for RMW cycle on virtual field %@.",0,
                                               -1,&(__Vtemp_5),
                                               64,(
                                                   (segoff 
                                                    + (QData)((IData)(segn))) 
                                                   - 1ULL),
                                               -1,&(__Vtemp_6)) ;
                        __Vtask_uvm_report_error__190__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__193__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                            = __Vfunc_get__193__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__194__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                            = __Vtask_get_root__194__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__190__id, __Vtask_uvm_report_error__190__message, __Vtask_uvm_report_error__190__verbosity, __Vtask_uvm_report_error__190__filename, __Vtask_uvm_report_error__190__line, __Vtask_uvm_report_error__190__context_name, (IData)(__Vtask_uvm_report_error__190__report_enabled_checked));
                    }
                    status = 1U;
                    co_await VL_NULL_CHECK(this->__PVT__parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 687)->__VnoInFunc_XatomicX(vlSymsp, 0U);
                    goto __Vlabel0;
                }
            }
            value = (value | VL_SHIFTL_QQI(64,64,32, 
                                           (tmp & (~ 
                                                   (VL_SHIFTL_QQI(64,64,32, 1ULL, rmwbits) 
                                                    - 1ULL))), 
                                           VL_MULS_III(32, 
                                                       (segn 
                                                        - (IData)(1U)), segsiz)));
        }
        tmp = value;
        unnamedblk1_3__DOT____Vrepeat2 = segn;
        while (VL_LTS_III(32, 0U, unnamedblk1_3__DOT____Vrepeat2)) {
            VL_NULL_CHECK(mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 697)->__VnoInFunc_poke(vlProcess, vlSymsp, __Vtask_poke__197__status, segoff, tmp, ""s, parent, extension, fname, lineno);
            st = __Vtask_poke__197__status;
            if (((0U != st) & (2U != st))) {
                status = 1U;
            }
            segoff = (1ULL + segoff);
            tmp = VL_SHIFTR_QQI(64,64,32, tmp, segsiz);
            unnamedblk1_3__DOT____Vrepeat2 = (unnamedblk1_3__DOT____Vrepeat2 
                                              - (IData)(1U));
        }
        co_await VL_NULL_CHECK(this->__PVT__parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 704)->__VnoInFunc_XatomicX(vlSymsp, 0U);
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__199__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__199__severity = 0U;
                        __Vfunc_uvm_report_enabled__199__verbosity = 0x000000c8U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__200__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__200__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__201__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__201__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__199__verbosity, (IData)(__Vfunc_uvm_report_enabled__199__severity), __Vfunc_uvm_report_enabled__199__id, __Vtask_uvm_report_enabled__202__Vfuncout);
                        __Vfunc_uvm_report_enabled__199__Vfuncout 
                            = __Vtask_uvm_report_enabled__202__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__199__Vfuncout))) {
            __Vtask_uvm_report_info__203__report_enabled_checked = 1U;
            __Vtask_uvm_report_info__203__context_name = ""s;
            __Vtask_uvm_report_info__203__line = 0x000002c3U;
            __Vtask_uvm_report_info__203__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh"s;
            __Vtask_uvm_report_info__203__verbosity = 0x000000c8U;
            __Vtemp_7 = ([&]() {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__204__Vfuncout);
                }(), __Vfunc_get_full_name__204__Vfuncout);
            __Vtask_uvm_report_info__203__message = VL_SFORMATF_N_NX("Wrote virtual field \"%@\"[%0#] with: 'h%x",0,
                                                                     -1,
                                                                     &(__Vtemp_7),
                                                                     64,
                                                                     idx,
                                                                     64,
                                                                     value) ;
            __Vtask_uvm_report_info__203__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__205__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__205__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__206__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__206__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__203__id, __Vtask_uvm_report_info__203__message, __Vtask_uvm_report_info__203__verbosity, __Vtask_uvm_report_info__203__filename, __Vtask_uvm_report_info__203__line, __Vtask_uvm_report_info__203__context_name, (IData)(__Vtask_uvm_report_info__203__report_enabled_checked));
        }
        this->__PVT__fname = ""s;
        this->__PVT__lineno = 0U;
        __Vlabel0: ;
    }
    co_return;}

VlCoroutine Vtransactions_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_peek(Vtransactions__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ &value, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_peek\n"); );
    // Locals
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_mem> __Vtask_get_memory__208__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__209__Vfuncout;
    __Vfunc_uvm_report_enabled__209__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__209__verbosity;
    __Vfunc_uvm_report_enabled__209__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__209__severity;
    __Vfunc_uvm_report_enabled__209__severity = 0;
    std::string __Vfunc_uvm_report_enabled__209__id;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__210__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__211__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__212__Vfuncout;
    __Vtask_uvm_report_enabled__212__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__213__id;
    std::string __Vtask_uvm_report_error__213__message;
    IData/*31:0*/ __Vtask_uvm_report_error__213__verbosity;
    __Vtask_uvm_report_error__213__verbosity = 0;
    std::string __Vtask_uvm_report_error__213__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__213__line;
    __Vtask_uvm_report_error__213__line = 0;
    std::string __Vtask_uvm_report_error__213__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__213__report_enabled_checked;
    __Vtask_uvm_report_error__213__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__214__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__215__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__216__Vfuncout;
    IData/*31:0*/ __Vtask_get_n_bytes__219__Vfuncout;
    __Vtask_get_n_bytes__219__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_lsb_pos_in_register__220__Vfuncout;
    __Vfunc_get_lsb_pos_in_register__220__Vfuncout = 0;
    QData/*63:0*/ __Vtask_get_offset_in_memory__221__Vfuncout;
    __Vtask_get_offset_in_memory__221__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_n_bits__222__Vfuncout;
    __Vfunc_get_n_bits__222__Vfuncout = 0;
    IData/*31:0*/ __Vtask_peek__223__status;
    __Vtask_peek__223__status = 0;
    QData/*63:0*/ __Vtask_peek__223__value;
    __Vtask_peek__223__value = 0;
    IData/*31:0*/ __Vfunc_get_n_bits__224__Vfuncout;
    __Vfunc_get_n_bits__224__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__226__Vfuncout;
    __Vfunc_uvm_report_enabled__226__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__226__verbosity;
    __Vfunc_uvm_report_enabled__226__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__226__severity;
    __Vfunc_uvm_report_enabled__226__severity = 0;
    std::string __Vfunc_uvm_report_enabled__226__id;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__227__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__228__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__229__Vfuncout;
    __Vtask_uvm_report_enabled__229__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__230__id;
    std::string __Vtask_uvm_report_info__230__message;
    IData/*31:0*/ __Vtask_uvm_report_info__230__verbosity;
    __Vtask_uvm_report_info__230__verbosity = 0;
    std::string __Vtask_uvm_report_info__230__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__230__line;
    __Vtask_uvm_report_info__230__line = 0;
    std::string __Vtask_uvm_report_info__230__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__230__report_enabled_checked;
    __Vtask_uvm_report_info__230__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__231__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__232__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__233__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1_4__DOT____Vrepeat3;
    unnamedblk1_4__DOT____Vrepeat3 = 0;
    QData/*63:0*/ tmp;
    tmp = 0;
    QData/*63:0*/ segval;
    segval = 0;
    QData/*63:0*/ segoff;
    segoff = 0;
    IData/*31:0*/ st;
    st = 0;
    IData/*31:0*/ flsb;
    flsb = 0;
    IData/*31:0*/ lsb;
    lsb = 0;
    IData/*31:0*/ segsiz;
    segsiz = 0;
    IData/*31:0*/ segn;
    segn = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_mem> mem;
    {
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        VL_NULL_CHECK(this->__PVT__parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 732)->__VnoInFunc_get_memory(vlSymsp, __Vtask_get_memory__208__Vfuncout);
        mem = __Vtask_get_memory__208__Vfuncout;
        if ((VlNull{} == mem)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__209__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__209__severity = 2U;
                            __Vfunc_uvm_report_enabled__209__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__210__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__210__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__211__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__211__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__209__verbosity, (IData)(__Vfunc_uvm_report_enabled__209__severity), __Vfunc_uvm_report_enabled__209__id, __Vtask_uvm_report_enabled__212__Vfuncout);
                            __Vfunc_uvm_report_enabled__209__Vfuncout 
                                = __Vtask_uvm_report_enabled__212__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__209__Vfuncout))) {
                __Vtask_uvm_report_error__213__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__213__context_name = ""s;
                __Vtask_uvm_report_error__213__line = 0x000002dfU;
                __Vtask_uvm_report_error__213__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh"s;
                __Vtask_uvm_report_error__213__verbosity = 0U;
                __Vtemp_1 = ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__214__Vfuncout);
                    }(), __Vfunc_get_full_name__214__Vfuncout);
                __Vtask_uvm_report_error__213__message 
                    = VL_SFORMATF_N_NX("Cannot call uvm_vreg_field::peek() on unimplemented virtual register \"%@\"",0,
                                       -1,&(__Vtemp_1)) ;
                __Vtask_uvm_report_error__213__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__215__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__215__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__216__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__216__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__213__id, __Vtask_uvm_report_error__213__message, __Vtask_uvm_report_error__213__verbosity, __Vtask_uvm_report_error__213__filename, __Vtask_uvm_report_error__213__line, __Vtask_uvm_report_error__213__context_name, (IData)(__Vtask_uvm_report_error__213__report_enabled_checked));
            }
            status = 1U;
            goto __Vlabel0;
        }
        status = 0U;
        co_await VL_NULL_CHECK(this->__PVT__parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 742)->__VnoInFunc_XatomicX(vlSymsp, 1U);
        value = 0ULL;
        segsiz = VL_SHIFTL_III(32,32,32, ([&]() {
                    VL_NULL_CHECK(mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 746)
                                          ->__VnoInFunc_get_n_bytes(vlSymsp, __Vtask_get_n_bytes__219__Vfuncout);
                }(), __Vtask_get_n_bytes__219__Vfuncout), 3U);
        this->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __Vfunc_get_lsb_pos_in_register__220__Vfuncout);
        flsb = __Vfunc_get_lsb_pos_in_register__220__Vfuncout;
        segoff = (([&]() {
                    VL_NULL_CHECK(this->__PVT__parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 748)
                   ->__VnoInFunc_get_offset_in_memory(vlProcess, vlSymsp, idx, __Vtask_get_offset_in_memory__221__Vfuncout);
                }(), __Vtask_get_offset_in_memory__221__Vfuncout) 
                  + VL_DIV_QQQ(64, (QData)((IData)(flsb)), (QData)((IData)(segsiz))));
        lsb = VL_MODDIVS_III(32, flsb, segsiz);
        segn = ((IData)(1U) + VL_DIV_III(32, ((lsb 
                                               + ([&]() {
                                this->__VnoInFunc_get_n_bits(vlSymsp, __Vfunc_get_n_bits__222__Vfuncout);
                            }(), __Vfunc_get_n_bits__222__Vfuncout)) 
                                              - (IData)(1U)), segsiz));
        segoff = (segoff + ((QData)((IData)(segn)) 
                            - 1ULL));
        unnamedblk1_4__DOT____Vrepeat3 = segn;
        while (VL_LTS_III(32, 0U, unnamedblk1_4__DOT____Vrepeat3)) {
            value = VL_SHIFTL_QQI(64,64,32, value, segsiz);
            VL_NULL_CHECK(mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 759)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__223__status, segoff, __Vtask_peek__223__value, ""s, parent, extension, fname, lineno);
            st = __Vtask_peek__223__status;
            tmp = __Vtask_peek__223__value;
            if (((0U != st) & (2U != st))) {
                status = 1U;
            }
            segoff = (segoff - 1ULL);
            value = (value | tmp);
            unnamedblk1_4__DOT____Vrepeat3 = (unnamedblk1_4__DOT____Vrepeat3 
                                              - (IData)(1U));
        }
        value = VL_SHIFTR_QQI(64,64,32, value, lsb);
        value = (value & (VL_SHIFTL_QQI(64,64,32, 1ULL, 
                                        ([&]() {
                            this->__VnoInFunc_get_n_bits(vlSymsp, __Vfunc_get_n_bits__224__Vfuncout);
                        }(), __Vfunc_get_n_bits__224__Vfuncout)) 
                          - 1ULL));
        co_await VL_NULL_CHECK(this->__PVT__parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 773)->__VnoInFunc_XatomicX(vlSymsp, 0U);
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__226__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__226__severity = 0U;
                        __Vfunc_uvm_report_enabled__226__verbosity = 0x000000c8U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__227__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__227__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__228__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__228__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__226__verbosity, (IData)(__Vfunc_uvm_report_enabled__226__severity), __Vfunc_uvm_report_enabled__226__id, __Vtask_uvm_report_enabled__229__Vfuncout);
                        __Vfunc_uvm_report_enabled__226__Vfuncout 
                            = __Vtask_uvm_report_enabled__229__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__226__Vfuncout))) {
            __Vtask_uvm_report_info__230__report_enabled_checked = 1U;
            __Vtask_uvm_report_info__230__context_name = ""s;
            __Vtask_uvm_report_info__230__line = 0x00000307U;
            __Vtask_uvm_report_info__230__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh"s;
            __Vtask_uvm_report_info__230__verbosity = 0x000000c8U;
            __Vtemp_2 = ([&]() {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__231__Vfuncout);
                }(), __Vfunc_get_full_name__231__Vfuncout);
            __Vtask_uvm_report_info__230__message = VL_SFORMATF_N_NX("Peeked virtual field \"%@\"[%0#]: 'h%x",0,
                                                                     -1,
                                                                     &(__Vtemp_2),
                                                                     64,
                                                                     idx,
                                                                     64,
                                                                     value) ;
            __Vtask_uvm_report_info__230__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__232__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__232__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__233__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__233__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__230__id, __Vtask_uvm_report_info__230__message, __Vtask_uvm_report_info__230__verbosity, __Vtask_uvm_report_info__230__filename, __Vtask_uvm_report_info__230__line, __Vtask_uvm_report_info__230__context_name, (IData)(__Vtask_uvm_report_info__230__report_enabled_checked));
        }
        this->__PVT__fname = ""s;
        this->__PVT__lineno = 0U;
        __Vlabel0: ;
    }
    co_return;}

void Vtransactions_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_do_print\n"); );
    // Locals
    std::string __Vtask_get_type_name__237__Vfuncout;
    std::string __Vfunc_convert2string__238__Vfuncout;
    // Body
    Vtransactions_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 784)->__VnoInFunc_print_generic(vlProcess, vlSymsp, "initiator"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                    VL_NULL_CHECK(this->__PVT__parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_vreg_field.svh", 784)
                                                                                ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__237__Vfuncout);
                }(), __Vtask_get_type_name__237__Vfuncout)), 0xffffffffU, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                    this->__VnoInFunc_convert2string(vlProcess, vlSymsp, __Vfunc_convert2string__238__Vfuncout);
                }(), __Vfunc_convert2string__238__Vfuncout)), 0x2eU);
}

void Vtransactions_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_convert2string\n"); );
    // Locals
    std::string __Vfunc_get_name__239__Vfuncout;
    IData/*31:0*/ __Vfunc_get_lsb_pos_in_register__240__Vfuncout;
    __Vfunc_get_lsb_pos_in_register__240__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_n_bits__241__Vfuncout;
    __Vfunc_get_n_bits__241__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_lsb_pos_in_register__242__Vfuncout;
    __Vfunc_get_lsb_pos_in_register__242__Vfuncout = 0;
    std::string __Vtemp_1;
    // Body
    std::string res_str;
    std::string t_str;
    CData/*0:0*/ with_debug_info;
    with_debug_info = 0;
    with_debug_info = 0U;
    __Vtemp_1 = ([&]() {
            this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__239__Vfuncout);
        }(), __Vfunc_get_name__239__Vfuncout);
    VL_SFORMAT_NX(64,convert2string__Vfuncrtn," 45275008804733919578580061%@%10#%10#",0,
                  -1,&(__Vtemp_1),32,((([&]() {
                            this->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __Vfunc_get_lsb_pos_in_register__240__Vfuncout);
                        }(), __Vfunc_get_lsb_pos_in_register__240__Vfuncout) 
                                       + ([&]() {
                            this->__VnoInFunc_get_n_bits(vlSymsp, __Vfunc_get_n_bits__241__Vfuncout);
                        }(), __Vfunc_get_n_bits__241__Vfuncout)) 
                                      - (IData)(1U)),
                  32,([&]() {
                    this->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __Vfunc_get_lsb_pos_in_register__242__Vfuncout);
                }(), __Vfunc_get_lsb_pos_in_register__242__Vfuncout));
    if (this->__PVT__read_in_progress) {
        if (((""s != this->__PVT__fname) & (0U != this->__PVT__lineno))) {
            VL_SFORMAT_NX(64,res_str,"%@:%0d ",0,-1,
                          &(this->__PVT__fname),32,
                          this->__PVT__lineno);
        }
        convert2string__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(convert2string__Vfuncrtn, "\n"s), res_str), "currently executing read method"s);
    }
    if (this->__PVT__write_in_progress) {
        if (((""s != this->__PVT__fname) & (0U != this->__PVT__lineno))) {
            VL_SFORMAT_NX(64,res_str,"%@:%0d ",0,-1,
                          &(this->__PVT__fname),32,
                          this->__PVT__lineno);
        }
        convert2string__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(convert2string__Vfuncrtn, "\n"s), res_str), "currently executing write method"s);
    }
}

void Vtransactions_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_clone(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_clone\n"); );
    // Body
    clone__Vfuncrtn = VlNull{};
}

void Vtransactions_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_do_copy\n"); );
}

void Vtransactions_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_do_compare(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_do_compare\n"); );
    // Body
    do_compare__Vfuncrtn = 0U;
}

void Vtransactions_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_do_pack(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_do_pack\n"); );
}

void Vtransactions_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_do_unpack(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_do_unpack\n"); );
}

void Vtransactions_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_randomize(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__244__Vfuncout;
    __Vfunc___VBasicRand__244__Vfuncout = 0;
    // Body
    Vtransactions_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtransactions_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__244__Vfuncout);
            }(), __Vfunc___VBasicRand__244__Vfuncout));
}

void Vtransactions_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc___Vsetup_constraints(Vtransactions__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtransactions_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc___VBasicRand(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtransactions_uvm_pkg__03a__03auvm_vreg_field::_ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_vreg_field::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__lsb = 0;
    __PVT__size = 0;
    __PVT__lineno = 0;
    __PVT__read_in_progress = 0;
    __PVT__write_in_progress = 0;
}

Vtransactions_uvm_pkg__03a__03auvm_vreg_field::~Vtransactions_uvm_pkg__03a__03auvm_vreg_field() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_vreg_field::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_vreg_field>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_vreg_field::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtransactions_uvm_pkg__03a__03auvm_vreg_field::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_vreg_field::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtransactions_uvm_pkg__03a__03auvm_vreg_field::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_vreg_field::to_string_middle\n"); );
    // Body
    std::string out;
    out += "parent:" + VL_TO_STRING(__PVT__parent);
    out += ", lsb:" + VL_TO_STRING(__PVT__lsb);
    out += ", size:" + VL_TO_STRING(__PVT__size);
    out += ", fname:" + VL_TO_STRING(__PVT__fname);
    out += ", lineno:" + VL_TO_STRING(__PVT__lineno);
    out += ", read_in_progress:" + VL_TO_STRING(__PVT__read_in_progress);
    out += ", write_in_progress:" + VL_TO_STRING(__PVT__write_in_progress);
    out += ", "+ Vtransactions_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
