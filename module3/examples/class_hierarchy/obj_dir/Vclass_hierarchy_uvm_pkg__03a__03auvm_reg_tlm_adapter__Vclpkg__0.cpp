// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclass_hierarchy.h for the primary calling header

#include "Vclass_hierarchy__pch.h"

void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_tlm_adapter__Vclpkg::__VnoInFunc_get_type(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_registry__pi168> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_tlm_adapter__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_registry__pi168> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi168__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_tlm_adapter__Vclpkg::__VnoInFunc_type_name(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_tlm_adapter__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_reg_tlm_adapter"s;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_get_object_type(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_registry__pi168> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi168__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_create(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_tlm_adapter> tmp;
    tmp = ((""s == name) ? VL_NEW(Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_tlm_adapter, vlProcess, vlSymsp, "uvm_reg_tlm_adapter"s)
            : VL_NEW(Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_tlm_adapter, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_get_type_name(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_tlm_adapter"s;
}

Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_tlm_adapter::Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_tlm_adapter(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name)
    : Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_adapter(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_tlm_adapter::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_reg2bus(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, const Vclass_hierarchy_uvm_reg_bus_op__struct__0 &rw, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_sequence_item> &reg2bus__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_reg2bus\n"); );
    // Locals
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_tlm_generic_payload> __Vfunc_create__4__Vfuncout;
    std::string __Vfunc_get_full_name__5__Vfuncout;
    IData/*31:0*/ __Vtask_get_streaming_width__10__Vfuncout;
    __Vtask_get_streaming_width__10__Vfuncout = 0;
    // Body
    IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_tlm_generic_payload> gp;
    IData/*31:0*/ nbytes;
    nbytes = 0;
    QData/*63:0*/ addr;
    addr = 0;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi98__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "tlm_gp"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__5__Vfuncout);
                }(), __Vfunc_get_full_name__5__Vfuncout)), __Vfunc_create__4__Vfuncout);
    gp = __Vfunc_create__4__Vfuncout;
    nbytes = ((IData)(1U) + VL_DIVS_III(32, (rw.__PVT__n_bits 
                                             - (IData)(1U)), (IData)(8U)));
    addr = rw.__PVT__addr;
    if ((1U == rw.__PVT__kind)) {
        VL_NULL_CHECK(gp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 195)->__VnoInFunc_set_command(vlSymsp, 1U);
    } else {
        VL_NULL_CHECK(gp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 197)->__VnoInFunc_set_command(vlSymsp, 0U);
    }
    VL_NULL_CHECK(gp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 199)->__VnoInFunc_set_address(vlSymsp, addr);
    VL_NULL_CHECK(gp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 201)->__PVT__m_byte_enable.renew(nbytes);
    VL_NULL_CHECK(gp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 202)->__PVT__m_byte_enable_length 
        = nbytes;
    VL_NULL_CHECK(gp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 204)->__VnoInFunc_set_streaming_width(vlSymsp, nbytes);
    VL_NULL_CHECK(gp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 206)->__PVT__m_data.renew(
                                                                                ([&]() {
                VL_NULL_CHECK(gp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 206)
                                                                                ->__VnoInFunc_get_streaming_width(vlSymsp, __Vtask_get_streaming_width__10__Vfuncout);
            }(), __Vtask_get_streaming_width__10__Vfuncout));
    VL_NULL_CHECK(gp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 207)->__PVT__m_length 
        = nbytes;
    unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk1__DOT__i, nbytes)) {
        VL_NULL_CHECK(gp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 210)->__PVT__m_data.atWrite(unnamedblk1__DOT__i) 
            = (0x000000ffU & (IData)((rw.__PVT__data 
                                      >> (0x0000003fU 
                                          & VL_MULS_III(32, (IData)(8U), unnamedblk1__DOT__i)))));
        VL_NULL_CHECK(gp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 211)->__PVT__m_byte_enable.atWrite(unnamedblk1__DOT__i) 
            = (VL_GTS_III(32, unnamedblk1__DOT__i, nbytes)
                ? 0U : ((1U & (rw.__PVT__byte_en >> 
                               (7U & unnamedblk1__DOT__i)))
                         ? 0xffU : 0U));
        unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
    }
    reg2bus__Vfuncrtn = gp;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_bus2reg(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_sequence_item> bus_item, Vclass_hierarchy_uvm_reg_bus_op__struct__0 &rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_bus2reg\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__11__Vfuncout;
    __Vfunc_uvm_report_enabled__11__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__11__verbosity;
    __Vfunc_uvm_report_enabled__11__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__11__severity;
    __Vfunc_uvm_report_enabled__11__severity = 0;
    std::string __Vfunc_uvm_report_enabled__11__id;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__12__Vfuncout;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__13__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__14__Vfuncout;
    __Vtask_uvm_report_enabled__14__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__16__Vfuncout;
    __Vfunc_uvm_report_enabled__16__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__16__verbosity;
    __Vfunc_uvm_report_enabled__16__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__16__severity;
    __Vfunc_uvm_report_enabled__16__severity = 0;
    std::string __Vfunc_uvm_report_enabled__16__id;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__17__Vfuncout;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__18__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__19__Vfuncout;
    __Vtask_uvm_report_enabled__19__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__20__id;
    std::string __Vtask_uvm_report_error__20__message;
    IData/*31:0*/ __Vtask_uvm_report_error__20__verbosity;
    __Vtask_uvm_report_error__20__verbosity = 0;
    std::string __Vtask_uvm_report_error__20__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__20__line;
    __Vtask_uvm_report_error__20__line = 0;
    std::string __Vtask_uvm_report_error__20__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__20__report_enabled_checked;
    __Vtask_uvm_report_error__20__report_enabled_checked = 0;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__21__Vfuncout;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__22__Vfuncout;
    IData/*31:0*/ __Vtask_get_command__24__Vfuncout;
    __Vtask_get_command__24__Vfuncout = 0;
    QData/*63:0*/ __Vtask_get_address__25__Vfuncout;
    __Vtask_get_address__25__Vfuncout = 0;
    CData/*0:0*/ __Vtask_is_response_ok__26__Vfuncout;
    __Vtask_is_response_ok__26__Vfuncout = 0;
    // Body
    IData/*31:0*/ unnamedblk2__DOT__i;
    unnamedblk2__DOT__i = 0;
    IData/*31:0*/ unnamedblk3__DOT__i;
    unnamedblk3__DOT__i = 0;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_tlm_generic_payload> gp;
    IData/*31:0*/ nbytes;
    nbytes = 0;
    {
        if ((VlNull{} == bus_item)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__11__id = "REG/NULL_ITEM"s;
                            __Vfunc_uvm_report_enabled__11__severity = 3U;
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
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "REG/NULL_ITEM"s, "bus2reg: bus_item argument is null"s, 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh"s, 0x000000e4U, ""s, 1U);
            }
        }
        if ((! VL_CAST_DYNAMIC(bus_item, gp))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__16__id = "WRONG_TYPE"s;
                            __Vfunc_uvm_report_enabled__16__severity = 2U;
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
                __Vtask_uvm_report_error__20__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__20__context_name = ""s;
                __Vtask_uvm_report_error__20__line = 0x000000e7U;
                __Vtask_uvm_report_error__20__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh"s;
                __Vtask_uvm_report_error__20__verbosity = 0U;
                __Vtask_uvm_report_error__20__message = "Provided bus_item is not of type uvm_tlm_gp"s;
                __Vtask_uvm_report_error__20__id = "WRONG_TYPE"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__21__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__21__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__22__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__22__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__20__id, __Vtask_uvm_report_error__20__message, __Vtask_uvm_report_error__20__verbosity, __Vtask_uvm_report_error__20__filename, __Vtask_uvm_report_error__20__line, __Vtask_uvm_report_error__20__context_name, (IData)(__Vtask_uvm_report_error__20__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        rw.__PVT__kind = ((1U == ([&]() {
                        VL_NULL_CHECK(gp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 235)
                                  ->__VnoInFunc_get_command(vlSymsp, __Vtask_get_command__24__Vfuncout);
                    }(), __Vtask_get_command__24__Vfuncout))
                           ? 1U : 0U);
        VL_NULL_CHECK(gp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 240)->__VnoInFunc_get_address(vlSymsp, __Vtask_get_address__25__Vfuncout);
        rw.__PVT__addr = __Vtask_get_address__25__Vfuncout;
        rw.__PVT__byte_en = 0U;
        unnamedblk2__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk2__DOT__i, VL_NULL_CHECK(gp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 243)
                          ->__PVT__m_byte_enable.size())) {
            rw.__PVT__byte_en = (((~ ((IData)(1U) << 
                                      (7U & unnamedblk2__DOT__i))) 
                                  & rw.__PVT__byte_en) 
                                 | (0x00ffU & ((1U 
                                                & VL_NULL_CHECK(gp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 244)
                                                ->__PVT__m_byte_enable.at(unnamedblk2__DOT__i)) 
                                               << (7U 
                                                   & unnamedblk2__DOT__i))));
            unnamedblk2__DOT__i = ((IData)(1U) + unnamedblk2__DOT__i);
        }
        rw.__PVT__data = 0ULL;
        unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk3__DOT__i, VL_NULL_CHECK(gp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 247)
                          ->__PVT__m_data.size())) {
            rw.__PVT__data = (((~ (0x00000000000000ffULL 
                                   << (0x0000003fU 
                                       & VL_MULS_III(32, (IData)(8U), unnamedblk3__DOT__i)))) 
                               & rw.__PVT__data) | 
                              ((QData)((IData)(VL_NULL_CHECK(gp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 248)
                                               ->__PVT__m_data.at(unnamedblk3__DOT__i))) 
                               << (0x0000003fU & VL_MULS_III(32, (IData)(8U), unnamedblk3__DOT__i))));
            unnamedblk3__DOT__i = ((IData)(1U) + unnamedblk3__DOT__i);
        }
        rw.__PVT__status = (([&]() {
                    VL_NULL_CHECK(gp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_adapter.svh", 250)
                             ->__VnoInFunc_is_response_ok(vlSymsp, __Vtask_is_response_ok__26__Vfuncout);
                }(), (IData)(__Vtask_is_response_ok__26__Vfuncout))
                             ? 0U : 1U);
        __Vlabel0: ;
    }
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_randomize(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__28__Vfuncout;
    __Vfunc___Vbasic_randomize__28__Vfuncout = 0;
    // Body
    Vclass_hierarchy_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vclass_hierarchy_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__28__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__28__Vfuncout));
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc___Vbasic_randomize(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_tlm_adapter::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_tlm_adapter::_ctor_var_reset(Vclass_hierarchy__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_tlm_adapter::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_tlm_adapter>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_tlm_adapter::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_tlm_adapter::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_tlm_adapter::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_tlm_adapter::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_tlm_adapter::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_adapter::to_string_middle();
    return (out);
}
