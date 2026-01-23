// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_example.h for the primary calling header

#include "Vuart_example__pch.h"

void Vuart_example_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq__Vclpkg::__VnoInFunc_get_type(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_registry__pi169> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_registry__pi169> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi169__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vuart_example_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq__Vclpkg::__VnoInFunc_type_name(Vuart_example__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_reg_single_bit_bash_seq"s;
}

void Vuart_example_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_get_object_type(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_registry__pi169> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi169__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vuart_example_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_create(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq> tmp;
    tmp = ((""s == name) ? VL_NEW(Vuart_example_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq, vlProcess, vlSymsp, "uvm_reg_single_bit_bash_seq"s)
            : VL_NEW(Vuart_example_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vuart_example_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_get_type_name(Vuart_example__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_single_bit_bash_seq"s;
}

Vuart_example_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::Vuart_example_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string name)
    : Vuart_example_uvm_pkg__03a__03auvm_reg_sequence__Tz307(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

VlCoroutine Vuart_example_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_body(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_body\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__4__Vfuncout;
    __Vfunc_uvm_report_enabled__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__4__verbosity;
    __Vfunc_uvm_report_enabled__4__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__4__severity;
    __Vfunc_uvm_report_enabled__4__severity = 0;
    std::string __Vfunc_uvm_report_enabled__4__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__5__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__6__Vfuncout;
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
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__9__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__10__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_resource__Tz30> __Vfunc_get_by_name__12__Vfuncout;
    std::string __Vtask_get_full_name__13__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_resource__Tz30> __Vfunc_get_by_name__14__Vfuncout;
    std::string __Vtask_get_full_name__15__Vfuncout;
    IData/*31:0*/ __Vtask_get_n_bytes__16__Vfuncout;
    __Vtask_get_n_bytes__16__Vfuncout = 0;
    std::string __Vtask_get_access__19__Vfuncout;
    IData/*31:0*/ __Vtask_get_compare__20__Vfuncout;
    __Vtask_get_compare__20__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_lsb_pos__21__Vfuncout;
    __Vtask_get_lsb_pos__21__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bits__22__Vfuncout;
    __Vtask_get_n_bits__22__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__23__Vfuncout;
    __Vfunc_uvm_report_enabled__23__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__23__verbosity;
    __Vfunc_uvm_report_enabled__23__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__23__severity;
    __Vfunc_uvm_report_enabled__23__severity = 0;
    std::string __Vfunc_uvm_report_enabled__23__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__24__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__25__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__26__Vfuncout;
    __Vtask_uvm_report_enabled__26__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__27__id;
    std::string __Vtask_uvm_report_info__27__message;
    IData/*31:0*/ __Vtask_uvm_report_info__27__verbosity;
    __Vtask_uvm_report_info__27__verbosity = 0;
    std::string __Vtask_uvm_report_info__27__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__27__line;
    __Vtask_uvm_report_info__27__line = 0;
    std::string __Vtask_uvm_report_info__27__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__27__report_enabled_checked;
    __Vtask_uvm_report_info__27__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__28__Vfuncout;
    std::string __Vtask_get_full_name__29__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__30__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__31__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1__DOT__j;
    unnamedblk1__DOT__j = 0;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__status;
    unnamedblk1__DOT__unnamedblk2__DOT__status = 0;
    QData/*63:0*/ unnamedblk1__DOT__unnamedblk2__DOT__val;
    unnamedblk1__DOT__unnamedblk2__DOT__val = 0;
    QData/*63:0*/ unnamedblk1__DOT__unnamedblk2__DOT__exp;
    unnamedblk1__DOT__unnamedblk2__DOT__exp = 0;
    QData/*63:0*/ unnamedblk1__DOT__unnamedblk2__DOT__v;
    unnamedblk1__DOT__unnamedblk2__DOT__v = 0;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__next_lsb;
    unnamedblk1__DOT__unnamedblk2__DOT__next_lsb = 0;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k;
    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k = 0;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__lsb;
    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__lsb = 0;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__w;
    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__w = 0;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dc;
    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dc = 0;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__k;
    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__k = 0;
    IData/*31:0*/ __Vincrement2;
    __Vincrement2 = 0;
    IData/*31:0*/ __Vincrement1;
    __Vincrement1 = 0;
    VlQueue<VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_reg_field>> fields;
    VlUnpacked<std::string, 64> mode;
    VlQueue<VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_reg_map>> maps;
    QData/*63:0*/ dc_mask;
    dc_mask = 0;
    QData/*63:0*/ reset_val;
    reset_val = 0;
    IData/*31:0*/ n_bits;
    n_bits = 0;
    std::string field_access;
    {
        if ((VlNull{} == this->__PVT__rg)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__4__id = "uvm_reg_bit_bash_seq"s;
                            __Vfunc_uvm_report_enabled__4__severity = 2U;
                            __Vfunc_uvm_report_enabled__4__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__5__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__5__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__6__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__6__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__4__verbosity, (IData)(__Vfunc_uvm_report_enabled__4__severity), __Vfunc_uvm_report_enabled__4__id, __Vtask_uvm_report_enabled__7__Vfuncout);
                            __Vfunc_uvm_report_enabled__4__Vfuncout 
                                = __Vtask_uvm_report_enabled__7__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__4__Vfuncout))) {
                __Vtask_uvm_report_error__8__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__8__context_name = ""s;
                __Vtask_uvm_report_error__8__line = 0x00000052U;
                __Vtask_uvm_report_error__8__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh"s;
                __Vtask_uvm_report_error__8__verbosity = 0U;
                __Vtask_uvm_report_error__8__message = "No register specified to run sequence on"s;
                __Vtask_uvm_report_error__8__id = "uvm_reg_bit_bash_seq"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__9__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__9__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__10__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__10__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__8__id, __Vtask_uvm_report_error__8__message, __Vtask_uvm_report_error__8__verbosity, __Vtask_uvm_report_error__8__filename, __Vtask_uvm_report_error__8__line, __Vtask_uvm_report_error__8__context_name, (IData)(__Vtask_uvm_report_error__8__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        if (((VlNull{} != ([&]() {
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                VL_NULL_CHECK(this->__PVT__rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 87)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__13__Vfuncout);
                                            }(), __Vtask_get_full_name__13__Vfuncout))), "NO_REG_TESTS"s, 0U, __Vfunc_get_by_name__12__Vfuncout);
                        }(), __Vfunc_get_by_name__12__Vfuncout)) 
             || (VlNull{} != ([&]() {
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                VL_NULL_CHECK(this->__PVT__rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 89)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__15__Vfuncout);
                                            }(), __Vtask_get_full_name__15__Vfuncout))), "NO_REG_BIT_BASH_TEST"s, 0U, __Vfunc_get_by_name__14__Vfuncout);
                        }(), __Vfunc_get_by_name__14__Vfuncout)))) {
            goto __Vlabel0;
        }
        n_bits = VL_SHIFTL_III(32,32,32, ([&]() {
                    VL_NULL_CHECK(this->__PVT__rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 93)
                                          ->__VnoInFunc_get_n_bytes(vlSymsp, __Vtask_get_n_bytes__16__Vfuncout);
                }(), __Vtask_get_n_bytes__16__Vfuncout), 3U);
        VL_NULL_CHECK(this->__PVT__rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 96)->__VnoInFunc_get_fields(vlSymsp, fields);
        VL_NULL_CHECK(this->__PVT__rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 99)->__VnoInFunc_get_maps(vlSymsp, maps);
        unnamedblk1__DOT__j = 0U;
        while (VL_LTS_III(32, unnamedblk1__DOT__j, maps.size())) {
            unnamedblk1__DOT__unnamedblk2__DOT__next_lsb = 0U;
            dc_mask = 0ULL;
            unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k = 0U;
            while (VL_LTS_III(32, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k, fields.size())) {
                VL_NULL_CHECK(fields.at(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 112)->__VnoInFunc_get_access(vlProcess, vlSymsp, maps.at(unnamedblk1__DOT__j), __Vtask_get_access__19__Vfuncout);
                field_access = __Vtask_get_access__19__Vfuncout;
                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dc 
                    = VL_EXTEND_II(32,1, (0U == ([&]() {
                                VL_NULL_CHECK(fields.at(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 113)
                                                 ->__VnoInFunc_get_compare(vlSymsp, __Vtask_get_compare__20__Vfuncout);
                            }(), __Vtask_get_compare__20__Vfuncout)));
                VL_NULL_CHECK(fields.at(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 114)->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__21__Vfuncout);
                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__lsb 
                    = __Vtask_get_lsb_pos__21__Vfuncout;
                VL_NULL_CHECK(fields.at(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 115)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__22__Vfuncout);
                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__w 
                    = __Vtask_get_n_bits__22__Vfuncout;
                if (((((("WO"s == field_access) || 
                        ("WOC"s == field_access)) || 
                       ("WOS"s == field_access)) || 
                      ("WO1"s == field_access)) || 
                     ("NOACCESS"s == field_access))) {
                    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dc = 1U;
                }
                while (VL_LTS_III(32, unnamedblk1__DOT__unnamedblk2__DOT__next_lsb, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__lsb)) {
                    __Vincrement1 = unnamedblk1__DOT__unnamedblk2__DOT__next_lsb;
                    unnamedblk1__DOT__unnamedblk2__DOT__next_lsb 
                        = ((IData)(1U) + unnamedblk1__DOT__unnamedblk2__DOT__next_lsb);
                    mode[(0x0000003fU & __Vincrement1)] = "RO"s;
                }
                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_1__DOT____Vrepeat0 
                    = unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__w;
                while (VL_LTS_III(32, 0U, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
                    mode[(0x0000003fU & unnamedblk1__DOT__unnamedblk2__DOT__next_lsb)] 
                        = field_access;
                    dc_mask = (((~ (1ULL << (0x0000003fU 
                                             & unnamedblk1__DOT__unnamedblk2__DOT__next_lsb))) 
                                & dc_mask) | ((QData)((IData)(
                                                              (1U 
                                                               & unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__dc))) 
                                              << (0x0000003fU 
                                                  & unnamedblk1__DOT__unnamedblk2__DOT__next_lsb)));
                    unnamedblk1__DOT__unnamedblk2__DOT__next_lsb 
                        = ((IData)(1U) + unnamedblk1__DOT__unnamedblk2__DOT__next_lsb);
                    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_1__DOT____Vrepeat0 
                        = (unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk1_1__DOT____Vrepeat0 
                           - (IData)(1U));
                }
                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k 
                    = ((IData)(1U) + unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k);
            }
            while (VL_GTS_III(32, 0x00000040U, unnamedblk1__DOT__unnamedblk2__DOT__next_lsb)) {
                __Vincrement2 = unnamedblk1__DOT__unnamedblk2__DOT__next_lsb;
                unnamedblk1__DOT__unnamedblk2__DOT__next_lsb 
                    = ((IData)(1U) + unnamedblk1__DOT__unnamedblk2__DOT__next_lsb);
                mode[(0x0000003fU & __Vincrement2)] = "RO"s;
            }
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__23__id = "uvm_reg_bit_bash_seq"s;
                            __Vfunc_uvm_report_enabled__23__severity = 0U;
                            __Vfunc_uvm_report_enabled__23__verbosity = 0x00000064U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__24__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__24__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__25__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__25__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__23__verbosity, (IData)(__Vfunc_uvm_report_enabled__23__severity), __Vfunc_uvm_report_enabled__23__id, __Vtask_uvm_report_enabled__26__Vfuncout);
                            __Vfunc_uvm_report_enabled__23__Vfuncout 
                                = __Vtask_uvm_report_enabled__26__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__23__Vfuncout))) {
                __Vtask_uvm_report_info__27__report_enabled_checked = 1U;
                __Vtask_uvm_report_info__27__context_name = ""s;
                __Vtask_uvm_report_info__27__line = 0x00000087U;
                __Vtask_uvm_report_info__27__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh"s;
                __Vtask_uvm_report_info__27__verbosity = 0x00000064U;
                __Vtemp_1 = ([&]() {
                        VL_NULL_CHECK(this->__PVT__rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 135)
                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__28__Vfuncout);
                    }(), __Vtask_get_full_name__28__Vfuncout);
                __Vtemp_2 = ([&]() {
                        VL_NULL_CHECK(maps.at(unnamedblk1__DOT__j), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 135)
                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__29__Vfuncout);
                    }(), __Vtask_get_full_name__29__Vfuncout);
                __Vtask_uvm_report_info__27__message 
                    = VL_SFORMATF_N_NX("Verifying bits in register %@ in map \"%@\"...",0,
                                       -1,&(__Vtemp_1),
                                       -1,&(__Vtemp_2)) ;
                __Vtask_uvm_report_info__27__id = "uvm_reg_bit_bash_seq"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__30__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__30__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__31__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__31__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__27__id, __Vtask_uvm_report_info__27__message, __Vtask_uvm_report_info__27__verbosity, __Vtask_uvm_report_info__27__filename, __Vtask_uvm_report_info__27__line, __Vtask_uvm_report_info__27__context_name, (IData)(__Vtask_uvm_report_info__27__report_enabled_checked));
            }
            unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__k = 0U;
            while (VL_LTS_III(32, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__k, n_bits)) {
                {
                    if ((1U & (IData)((dc_mask >> (0x0000003fU 
                                                   & unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__k))))) {
                        goto __Vlabel1;
                    }
                    co_await this->__VnoInFunc_bash_kth_bit(vlProcess, vlSymsp, this->__PVT__rg, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__k, 
                                                            VL_CVT_PACK_STR_NN(
                                                                               mode
                                                                               [
                                                                               (0x0000003fU 
                                                                                & unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__k)]), maps.at(unnamedblk1__DOT__j), dc_mask);
                    __Vlabel1: ;
                }
                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__k 
                    = ((IData)(1U) + unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk5__DOT__k);
            }
            unnamedblk1__DOT__j = ((IData)(1U) + unnamedblk1__DOT__j);
        }
        __Vlabel0: ;
    }
}

VlCoroutine Vuart_example_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_bash_kth_bit(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_reg> rg, IData/*31:0*/ k, std::string mode, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ dc_mask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_bash_kth_bit\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__34__Vfuncout;
    __Vfunc_uvm_report_enabled__34__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__34__verbosity;
    __Vfunc_uvm_report_enabled__34__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__34__severity;
    __Vfunc_uvm_report_enabled__34__severity = 0;
    std::string __Vfunc_uvm_report_enabled__34__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__35__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__36__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__37__Vfuncout;
    __Vtask_uvm_report_enabled__37__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__38__id;
    std::string __Vtask_uvm_report_info__38__message;
    IData/*31:0*/ __Vtask_uvm_report_info__38__verbosity;
    __Vtask_uvm_report_info__38__verbosity = 0;
    std::string __Vtask_uvm_report_info__38__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__38__line;
    __Vtask_uvm_report_info__38__line = 0;
    std::string __Vtask_uvm_report_info__38__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__38__report_enabled_checked;
    __Vtask_uvm_report_info__38__report_enabled_checked = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__39__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__40__Vfuncout;
    QData/*63:0*/ __Vtask_get__42__Vfuncout;
    __Vtask_get__42__Vfuncout = 0;
    IData/*31:0*/ __Vtask_write__43__status;
    __Vtask_write__43__status = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__44__Vfuncout;
    __Vfunc_uvm_report_enabled__44__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__44__verbosity;
    __Vfunc_uvm_report_enabled__44__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__44__severity;
    __Vfunc_uvm_report_enabled__44__severity = 0;
    std::string __Vfunc_uvm_report_enabled__44__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__45__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__46__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__47__Vfuncout;
    __Vtask_uvm_report_enabled__47__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__48__id;
    std::string __Vtask_uvm_report_error__48__message;
    IData/*31:0*/ __Vtask_uvm_report_error__48__verbosity;
    __Vtask_uvm_report_error__48__verbosity = 0;
    std::string __Vtask_uvm_report_error__48__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__48__line;
    __Vtask_uvm_report_error__48__line = 0;
    std::string __Vtask_uvm_report_error__48__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__48__report_enabled_checked;
    __Vtask_uvm_report_error__48__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__49__Vfuncout;
    std::string __Vtask_get_full_name__50__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__51__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__52__Vfuncout;
    QData/*63:0*/ __Vtask_get__54__Vfuncout;
    __Vtask_get__54__Vfuncout = 0;
    IData/*31:0*/ __Vtask_read__55__status;
    __Vtask_read__55__status = 0;
    QData/*63:0*/ __Vtask_read__55__value;
    __Vtask_read__55__value = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__56__Vfuncout;
    __Vfunc_uvm_report_enabled__56__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__56__verbosity;
    __Vfunc_uvm_report_enabled__56__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__56__severity;
    __Vfunc_uvm_report_enabled__56__severity = 0;
    std::string __Vfunc_uvm_report_enabled__56__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__57__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__58__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__59__Vfuncout;
    __Vtask_uvm_report_enabled__59__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__60__id;
    std::string __Vtask_uvm_report_error__60__message;
    IData/*31:0*/ __Vtask_uvm_report_error__60__verbosity;
    __Vtask_uvm_report_error__60__verbosity = 0;
    std::string __Vtask_uvm_report_error__60__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__60__line;
    __Vtask_uvm_report_error__60__line = 0;
    std::string __Vtask_uvm_report_error__60__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__60__report_enabled_checked;
    __Vtask_uvm_report_error__60__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__61__Vfuncout;
    std::string __Vtask_get_full_name__62__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__63__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__64__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__66__Vfuncout;
    __Vfunc_uvm_report_enabled__66__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__66__verbosity;
    __Vfunc_uvm_report_enabled__66__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__66__severity;
    __Vfunc_uvm_report_enabled__66__severity = 0;
    std::string __Vfunc_uvm_report_enabled__66__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__67__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__68__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__69__Vfuncout;
    __Vtask_uvm_report_enabled__69__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__70__id;
    std::string __Vtask_uvm_report_error__70__message;
    IData/*31:0*/ __Vtask_uvm_report_error__70__verbosity;
    __Vtask_uvm_report_error__70__verbosity = 0;
    std::string __Vtask_uvm_report_error__70__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__70__line;
    __Vtask_uvm_report_error__70__line = 0;
    std::string __Vtask_uvm_report_error__70__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__70__report_enabled_checked;
    __Vtask_uvm_report_error__70__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__71__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__72__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__73__Vfuncout;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    std::string __Vtemp_6;
    std::string __Vtemp_7;
    std::string __Vtemp_8;
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1_2__DOT____Vrepeat1;
    unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ status;
    status = 0;
    QData/*63:0*/ val;
    val = 0;
    QData/*63:0*/ exp;
    exp = 0;
    QData/*63:0*/ v;
    v = 0;
    CData/*0:0*/ bit_val;
    bit_val = 0;
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__34__id = "uvm_reg_bit_bash_seq"s;
                    __Vfunc_uvm_report_enabled__34__severity = 0U;
                    __Vfunc_uvm_report_enabled__34__verbosity = 0x0000012cU;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__35__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__35__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__36__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__36__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__34__verbosity, (IData)(__Vfunc_uvm_report_enabled__34__severity), __Vfunc_uvm_report_enabled__34__id, __Vtask_uvm_report_enabled__37__Vfuncout);
                    __Vfunc_uvm_report_enabled__34__Vfuncout 
                        = __Vtask_uvm_report_enabled__37__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__34__Vfuncout))) {
        __Vtask_uvm_report_info__38__report_enabled_checked = 1U;
        __Vtask_uvm_report_info__38__context_name = ""s;
        __Vtask_uvm_report_info__38__line = 0x0000009eU;
        __Vtask_uvm_report_info__38__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh"s;
        __Vtask_uvm_report_info__38__verbosity = 0x0000012cU;
        __Vtask_uvm_report_info__38__message = VL_SFORMATF_N_NX("...Bashing %@ bit #%0d",0,
                                                                -1,
                                                                &(mode),
                                                                32,
                                                                k) ;
        __Vtask_uvm_report_info__38__id = "uvm_reg_bit_bash_seq"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__39__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
            = __Vfunc_get__39__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__40__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
            = __Vtask_get_root__40__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__38__id, __Vtask_uvm_report_info__38__message, __Vtask_uvm_report_info__38__verbosity, __Vtask_uvm_report_info__38__filename, __Vtask_uvm_report_info__38__line, __Vtask_uvm_report_info__38__context_name, (IData)(__Vtask_uvm_report_info__38__report_enabled_checked));
    }
    unnamedblk1_2__DOT____Vrepeat1 = 2U;
    while (VL_LTS_III(32, 0U, unnamedblk1_2__DOT____Vrepeat1)) {
        VL_NULL_CHECK(rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 161)->__VnoInFunc_get(vlProcess, vlSymsp, ""s, 0U, __Vtask_get__42__Vfuncout);
        val = __Vtask_get__42__Vfuncout;
        v = val;
        exp = val;
        val = (((~ (1ULL << (0x0000003fU & k))) & val) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (val 
                                                    >> 
                                                    (0x0000003fU 
                                                     & k))))))) 
                  << (0x0000003fU & k)));
        bit_val = (1U & (IData)((val >> (0x0000003fU 
                                         & k))));
        co_await VL_NULL_CHECK(rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 167)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__43__status, val, 0U, map, 
                                                                                VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
        status = __Vtask_write__43__status;
        if ((0U != status)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__44__id = "uvm_reg_bit_bash_seq"s;
                            __Vfunc_uvm_report_enabled__44__severity = 2U;
                            __Vfunc_uvm_report_enabled__44__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__45__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__45__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__46__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__46__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__44__verbosity, (IData)(__Vfunc_uvm_report_enabled__44__severity), __Vfunc_uvm_report_enabled__44__id, __Vtask_uvm_report_enabled__47__Vfuncout);
                            __Vfunc_uvm_report_enabled__44__Vfuncout 
                                = __Vtask_uvm_report_enabled__47__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__44__Vfuncout))) {
                __Vtask_uvm_report_error__48__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__48__context_name = ""s;
                __Vtask_uvm_report_error__48__line = 0x000000aaU;
                __Vtask_uvm_report_error__48__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh"s;
                __Vtask_uvm_report_error__48__verbosity = 0U;
                __Vtemp_2 = Vuart_example___024unit::__Venumtab_enum_name71
                    [(3U & status)];
                __Vtemp_3 = ([&]() {
                        VL_NULL_CHECK(rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 170)
                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__49__Vfuncout);
                    }(), __Vtask_get_full_name__49__Vfuncout);
                __Vtemp_4 = ([&]() {
                        VL_NULL_CHECK(map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 170)
                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__50__Vfuncout);
                    }(), __Vtask_get_full_name__50__Vfuncout);
                __Vtask_uvm_report_error__48__message 
                    = VL_SFORMATF_N_NX("Status was %@ when writing to register \"%@\" through map \"%@\".",0,
                                       -1,&(__Vtemp_2),
                                       -1,&(__Vtemp_3),
                                       -1,&(__Vtemp_4)) ;
                __Vtask_uvm_report_error__48__id = "uvm_reg_bit_bash_seq"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__51__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__51__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__52__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__52__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__48__id, __Vtask_uvm_report_error__48__message, __Vtask_uvm_report_error__48__verbosity, __Vtask_uvm_report_error__48__filename, __Vtask_uvm_report_error__48__line, __Vtask_uvm_report_error__48__context_name, (IData)(__Vtask_uvm_report_error__48__report_enabled_checked));
            }
        }
        exp = (([&]() {
                    VL_NULL_CHECK(rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 173)
                ->__VnoInFunc_get(vlProcess, vlSymsp, ""s, 0U, __Vtask_get__54__Vfuncout);
                }(), __Vtask_get__54__Vfuncout) & (~ dc_mask));
        co_await VL_NULL_CHECK(rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 174)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__55__status, __Vtask_read__55__value, 0U, map, 
                                                                                VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
        status = __Vtask_read__55__status;
        val = __Vtask_read__55__value;
        if ((0U != status)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__56__id = "uvm_reg_bit_bash_seq"s;
                            __Vfunc_uvm_report_enabled__56__severity = 2U;
                            __Vfunc_uvm_report_enabled__56__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__57__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__57__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__58__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__58__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__56__verbosity, (IData)(__Vfunc_uvm_report_enabled__56__severity), __Vfunc_uvm_report_enabled__56__id, __Vtask_uvm_report_enabled__59__Vfuncout);
                            __Vfunc_uvm_report_enabled__56__Vfuncout 
                                = __Vtask_uvm_report_enabled__59__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__56__Vfuncout))) {
                __Vtask_uvm_report_error__60__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__60__context_name = ""s;
                __Vtask_uvm_report_error__60__line = 0x000000b1U;
                __Vtask_uvm_report_error__60__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh"s;
                __Vtask_uvm_report_error__60__verbosity = 0U;
                __Vtemp_5 = Vuart_example___024unit::__Venumtab_enum_name71
                    [(3U & status)];
                __Vtemp_6 = ([&]() {
                        VL_NULL_CHECK(rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 177)
                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__61__Vfuncout);
                    }(), __Vtask_get_full_name__61__Vfuncout);
                __Vtemp_7 = ([&]() {
                        VL_NULL_CHECK(map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 177)
                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__62__Vfuncout);
                    }(), __Vtask_get_full_name__62__Vfuncout);
                __Vtask_uvm_report_error__60__message 
                    = VL_SFORMATF_N_NX("Status was %@ when reading register \"%@\" through map \"%@\".",0,
                                       -1,&(__Vtemp_5),
                                       -1,&(__Vtemp_6),
                                       -1,&(__Vtemp_7)) ;
                __Vtask_uvm_report_error__60__id = "uvm_reg_bit_bash_seq"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__63__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__63__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__64__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__64__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__60__id, __Vtask_uvm_report_error__60__message, __Vtask_uvm_report_error__60__verbosity, __Vtask_uvm_report_error__60__filename, __Vtask_uvm_report_error__60__line, __Vtask_uvm_report_error__60__context_name, (IData)(__Vtask_uvm_report_error__60__report_enabled_checked));
            }
        }
        val = (val & (~ dc_mask));
        if ((val != exp)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__66__id = "uvm_reg_bit_bash_seq"s;
                            __Vfunc_uvm_report_enabled__66__severity = 2U;
                            __Vfunc_uvm_report_enabled__66__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__67__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__67__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__68__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__68__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__66__verbosity, (IData)(__Vfunc_uvm_report_enabled__66__severity), __Vfunc_uvm_report_enabled__66__id, __Vtask_uvm_report_enabled__69__Vfuncout);
                            __Vfunc_uvm_report_enabled__66__Vfuncout 
                                = __Vtask_uvm_report_enabled__69__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__66__Vfuncout))) {
                __Vtask_uvm_report_error__70__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__70__context_name = ""s;
                __Vtask_uvm_report_error__70__line = 0x000000b7U;
                __Vtask_uvm_report_error__70__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh"s;
                __Vtask_uvm_report_error__70__verbosity = 0U;
                __Vtemp_8 = ([&]() {
                        VL_NULL_CHECK(rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 183)
                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__71__Vfuncout);
                    }(), __Vtask_get_full_name__71__Vfuncout);
                __Vtask_uvm_report_error__70__message 
                    = VL_SFORMATF_N_NX("Writing a %b in bit #%0d of register \"%@\" with initial value 'h%x yielded 'h%x instead of 'h%x",0,
                                       1,bit_val,32,
                                       k,-1,&(__Vtemp_8),
                                       64,v,64,val,
                                       64,exp) ;
                __Vtask_uvm_report_error__70__id = "uvm_reg_bit_bash_seq"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__72__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__72__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__73__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__73__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__70__id, __Vtask_uvm_report_error__70__message, __Vtask_uvm_report_error__70__verbosity, __Vtask_uvm_report_error__70__filename, __Vtask_uvm_report_error__70__line, __Vtask_uvm_report_error__70__context_name, (IData)(__Vtask_uvm_report_error__70__report_enabled_checked));
            }
        }
        unnamedblk1_2__DOT____Vrepeat1 = (unnamedblk1_2__DOT____Vrepeat1 
                                          - (IData)(1U));
    }
}

void Vuart_example_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_randomize(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__76__Vfuncout;
    __Vfunc___Vbasic_randomize__76__Vfuncout = 0;
    // Body
    Vuart_example_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vuart_example_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__76__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__76__Vfuncout));
}

void Vuart_example_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc___Vbasic_randomize(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vuart_example_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::_ctor_var_reset(Vuart_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vuart_example_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vuart_example_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::to_string_middle\n"); );
    // Body
    std::string out;
    out += "rg:" + VL_TO_STRING(__PVT__rg);
    out += ", "+ Vuart_example_uvm_pkg__03a__03auvm_reg_sequence__Tz307::to_string_middle();
    return (out);
}
