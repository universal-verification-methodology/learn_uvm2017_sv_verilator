// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_example.h for the primary calling header

#include "Vuart_example__pch.h"

void Vuart_example_uvm_pkg__03a__03auvm_resource__Tz8__Vclpkg::__VnoInFunc_type_name(Vuart_example__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03auvm_resource__Tz8__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_resource#(logic[4095:0])"s;
}

void Vuart_example_uvm_pkg__03a__03auvm_resource__Tz8__Vclpkg::__VnoInFunc_get_type(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_resource__Tz8> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03auvm_resource__Tz8__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    if ((VlNull{} == this->__PVT__my_type)) {
        this->__PVT__my_type = VL_NEW(Vuart_example_uvm_pkg__03a__03auvm_resource__Tz8, vlProcess, vlSymsp, ""s);
    }
    get_type__Vfuncrtn = this->__PVT__my_type;
}

void Vuart_example_uvm_pkg__03a__03auvm_resource__Tz8__Vclpkg::__VnoInFunc_get_highest_precedence(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_queue__Tz5> &q, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_resource__Tz8> &get_highest_precedence__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03auvm_resource__Tz8__Vclpkg::__VnoInFunc_get_highest_precedence\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_resource_pool> __Vfunc_get__2__Vfuncout;
    IData/*31:0*/ __Vtask_size__3__Vfuncout;
    __Vtask_size__3__Vfuncout = 0;
    IData/*31:0*/ __Vtask_size__5__Vfuncout;
    __Vtask_size__5__Vfuncout = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_resource_base> __Vtask_get__6__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_resource_base> __Vfunc_get_highest_precedence__8__Vfuncout;
    // Body
    IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_resource__Tz8> rsrc;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_resource__Tz8> r;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_queue__Tz5> tq;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_resource_base> rb;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_resource_pool> rp;
    {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__2__Vfuncout);
        rp = __Vfunc_get__2__Vfuncout;
        if ((0U == ([&]() {
                        VL_NULL_CHECK(q, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 1403)
                    ->__VnoInFunc_size(vlSymsp, __Vtask_size__3__Vfuncout);
                    }(), __Vtask_size__3__Vfuncout))) {
            get_highest_precedence__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        tq = VL_NEW(Vuart_example_uvm_pkg__03a__03auvm_queue__Tz5, vlProcess, vlSymsp, ""s);
        rsrc = VlNull{};
        unnamedblk1__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk1__DOT__i, 
                          ([&]() {
                        VL_NULL_CHECK(q, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 1409)
                           ->__VnoInFunc_size(vlSymsp, __Vtask_size__5__Vfuncout);
                    }(), __Vtask_size__5__Vfuncout))) {
            if (VL_CAST_DYNAMIC(([&]() {
                            VL_NULL_CHECK(q, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 1410)
                                 ->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk1__DOT__i, __Vtask_get__6__Vfuncout);
                        }(), __Vtask_get__6__Vfuncout), r)) {
                VL_NULL_CHECK(tq, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_resource.svh", 1411)->__VnoInFunc_push_back(vlSymsp, r);
            }
            unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get_highest_precedence(vlProcess, vlSymsp, tq, __Vfunc_get_highest_precedence__8__Vfuncout);
        rb = __Vfunc_get_highest_precedence__8__Vfuncout;
        if ((! VL_CAST_DYNAMIC(rb, rsrc))) {
            get_highest_precedence__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        get_highest_precedence__Vfuncrtn = rsrc;
        __Vlabel0: ;
    }
}

void Vuart_example_uvm_pkg__03a__03auvm_resource__Tz8::__VnoInFunc_get_object_type(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuart_example_uvm_pkg__03a__03auvm_resource__Tz8::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_registry__Tz61> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz61__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vuart_example_uvm_pkg__03a__03auvm_resource__Tz8::__VnoInFunc_create(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuart_example_uvm_pkg__03a__03auvm_resource__Tz8::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_resource__Tz8> tmp;
    tmp = ((""s == name) ? VL_NEW(Vuart_example_uvm_pkg__03a__03auvm_resource__Tz8, vlProcess, vlSymsp, ""s)
            : VL_NEW(Vuart_example_uvm_pkg__03a__03auvm_resource__Tz8, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vuart_example_uvm_pkg__03a__03auvm_resource__Tz8::__VnoInFunc_get_type_name(Vuart_example__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuart_example_uvm_pkg__03a__03auvm_resource__Tz8::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_resource#(logic[4095:0])"s;
}

Vuart_example_uvm_pkg__03a__03auvm_resource__Tz8::Vuart_example_uvm_pkg__03a__03auvm_resource__Tz8(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string name)
    : Vuart_example_uvm_pkg__03a__03auvm_resource_base(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuart_example_uvm_pkg__03a__03auvm_resource__Tz8::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vuart_example_uvm_pkg__03a__03auvm_resource__Tz8::__VnoInFunc_m_value_type_name(Vuart_example__Syms* __restrict vlSymsp, std::string &m_value_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuart_example_uvm_pkg__03a__03auvm_resource__Tz8::__VnoInFunc_m_value_type_name\n"); );
    // Body
    m_value_type_name__Vfuncrtn = "logic[4095:0]"s;
}

void Vuart_example_uvm_pkg__03a__03auvm_resource__Tz8::__VnoInFunc_m_value_as_string(Vuart_example__Syms* __restrict vlSymsp, std::string &m_value_as_string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuart_example_uvm_pkg__03a__03auvm_resource__Tz8::__VnoInFunc_m_value_as_string\n"); );
    // Body
    m_value_as_string__Vfuncrtn = VL_SFORMATF_N_NX("'h%0x",0,
                                                   4096,
                                                   this->__PVT__val.data()) ;
}

void Vuart_example_uvm_pkg__03a__03auvm_resource__Tz8::__VnoInFunc_get_type_handle(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_resource_base> &get_type_handle__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuart_example_uvm_pkg__03a__03auvm_resource__Tz8::__VnoInFunc_get_type_handle\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_resource__Tz8> __Vfunc_get_type__4__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource__Tz8__Vclpkg.__VnoInFunc_get_type(vlProcess, vlSymsp, __Vfunc_get_type__4__Vfuncout);
    get_type_handle__Vfuncrtn = __Vfunc_get_type__4__Vfuncout;
}

void Vuart_example_uvm_pkg__03a__03auvm_resource__Tz8::__VnoInFunc_read(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> accessor, VlWide<128>/*4095:0*/ &read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuart_example_uvm_pkg__03a__03auvm_resource__Tz8::__VnoInFunc_read\n"); );
    // Body
    this->__VnoInFunc_record_read_access(vlProcess, vlSymsp, accessor);
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x0000007fU)) {
        read__Vfuncrtn[__Vilp1] = this->__PVT__val[__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
}

void Vuart_example_uvm_pkg__03a__03auvm_resource__Tz8::__VnoInFunc_write(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ t, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> accessor) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuart_example_uvm_pkg__03a__03auvm_resource__Tz8::__VnoInFunc_write\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_is_read_only__6__Vfuncout;
    __Vfunc_is_read_only__6__Vfuncout = 0;
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
    std::string __Vfunc_get_name__8__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__9__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__10__Vfuncout;
    std::string __Vtemp_1;
    IData/*31:0*/ __Vdeeptemp_h8e6291c0__0;
    // Body
    {
        if (([&]() {
                    this->__VnoInFunc_is_read_only(vlSymsp, __Vfunc_is_read_only__6__Vfuncout);
                }(), (IData)(__Vfunc_is_read_only__6__Vfuncout))) {
            __Vtask_uvm_report_error__7__report_enabled_checked = 0U;
            __Vtask_uvm_report_error__7__context_name = ""s;
            __Vtask_uvm_report_error__7__line = 0U;
            __Vtask_uvm_report_error__7__filename = ""s;
            __Vtask_uvm_report_error__7__verbosity = 0U;
            __Vtemp_1 = ([&]() {
                    this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__8__Vfuncout);
                }(), __Vfunc_get_name__8__Vfuncout);
            __Vtask_uvm_report_error__7__message = VL_SFORMATF_N_NX("resource %@ is read only -- cannot modify",0,
                                                                    -1,
                                                                    &(__Vtemp_1)) ;
            __Vtask_uvm_report_error__7__id = "resource"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__9__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__9__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__10__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__10__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__7__id, __Vtask_uvm_report_error__7__message, __Vtask_uvm_report_error__7__verbosity, __Vtask_uvm_report_error__7__filename, __Vtask_uvm_report_error__7__line, __Vtask_uvm_report_error__7__context_name, (IData)(__Vtask_uvm_report_error__7__report_enabled_checked));
            goto __Vlabel0;
        }
        __Vdeeptemp_h8e6291c0__0 = ((((((((((((((((
                                                   (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((this->__PVT__val[0U] 
                                                                                ^ 
                                                                                t[0U]) 
                                                                                | (this->__PVT__val[1U] 
                                                                                ^ 
                                                                                t[1U])) 
                                                                                | (this->__PVT__val[2U] 
                                                                                ^ 
                                                                                t[2U])) 
                                                                                | (this->__PVT__val[3U] 
                                                                                ^ 
                                                                                t[3U])) 
                                                                                | (this->__PVT__val[4U] 
                                                                                ^ 
                                                                                t[4U])) 
                                                                                | (this->__PVT__val[5U] 
                                                                                ^ 
                                                                                t[5U])) 
                                                                                | (this->__PVT__val[6U] 
                                                                                ^ 
                                                                                t[6U])) 
                                                                                | (this->__PVT__val[7U] 
                                                                                ^ 
                                                                                t[7U])) 
                                                                                | (this->__PVT__val[8U] 
                                                                                ^ 
                                                                                t[8U])) 
                                                                                | (this->__PVT__val[9U] 
                                                                                ^ 
                                                                                t[9U])) 
                                                                                | (this->__PVT__val[0x0000000aU] 
                                                                                ^ 
                                                                                t[0x0000000aU])) 
                                                                                | (this->__PVT__val[0x0000000bU] 
                                                                                ^ 
                                                                                t[0x0000000bU])) 
                                                                                | (this->__PVT__val[0x0000000cU] 
                                                                                ^ 
                                                                                t[0x0000000cU])) 
                                                                                | (this->__PVT__val[0x0000000dU] 
                                                                                ^ 
                                                                                t[0x0000000dU])) 
                                                                                | (this->__PVT__val[0x0000000eU] 
                                                                                ^ 
                                                                                t[0x0000000eU])) 
                                                                                | (this->__PVT__val[0x0000000fU] 
                                                                                ^ 
                                                                                t[0x0000000fU])) 
                                                                                | (this->__PVT__val[0x00000010U] 
                                                                                ^ 
                                                                                t[0x00000010U])) 
                                                                                | (this->__PVT__val[0x00000011U] 
                                                                                ^ 
                                                                                t[0x00000011U])) 
                                                                                | (this->__PVT__val[0x00000012U] 
                                                                                ^ 
                                                                                t[0x00000012U])) 
                                                                                | (this->__PVT__val[0x00000013U] 
                                                                                ^ 
                                                                                t[0x00000013U])) 
                                                                                | (this->__PVT__val[0x00000014U] 
                                                                                ^ 
                                                                                t[0x00000014U])) 
                                                                                | (this->__PVT__val[0x00000015U] 
                                                                                ^ 
                                                                                t[0x00000015U])) 
                                                                                | (this->__PVT__val[0x00000016U] 
                                                                                ^ 
                                                                                t[0x00000016U])) 
                                                                                | (this->__PVT__val[0x00000017U] 
                                                                                ^ 
                                                                                t[0x00000017U])) 
                                                                                | (this->__PVT__val[0x00000018U] 
                                                                                ^ 
                                                                                t[0x00000018U])) 
                                                                                | (this->__PVT__val[0x00000019U] 
                                                                                ^ 
                                                                                t[0x00000019U])) 
                                                                                | (this->__PVT__val[0x0000001aU] 
                                                                                ^ 
                                                                                t[0x0000001aU])) 
                                                                                | (this->__PVT__val[0x0000001bU] 
                                                                                ^ 
                                                                                t[0x0000001bU])) 
                                                                                | (this->__PVT__val[0x0000001cU] 
                                                                                ^ 
                                                                                t[0x0000001cU])) 
                                                                                | (this->__PVT__val[0x0000001dU] 
                                                                                ^ 
                                                                                t[0x0000001dU])) 
                                                                                | (this->__PVT__val[0x0000001eU] 
                                                                                ^ 
                                                                                t[0x0000001eU])) 
                                                                                | (this->__PVT__val[0x0000001fU] 
                                                                                ^ 
                                                                                t[0x0000001fU])) 
                                                                                | (this->__PVT__val[0x00000020U] 
                                                                                ^ 
                                                                                t[0x00000020U])) 
                                                                                | (this->__PVT__val[0x00000021U] 
                                                                                ^ 
                                                                                t[0x00000021U])) 
                                                                                | (this->__PVT__val[0x00000022U] 
                                                                                ^ 
                                                                                t[0x00000022U])) 
                                                                                | (this->__PVT__val[0x00000023U] 
                                                                                ^ 
                                                                                t[0x00000023U])) 
                                                                                | (this->__PVT__val[0x00000024U] 
                                                                                ^ 
                                                                                t[0x00000024U])) 
                                                                                | (this->__PVT__val[0x00000025U] 
                                                                                ^ 
                                                                                t[0x00000025U])) 
                                                                                | (this->__PVT__val[0x00000026U] 
                                                                                ^ 
                                                                                t[0x00000026U])) 
                                                                                | (this->__PVT__val[0x00000027U] 
                                                                                ^ 
                                                                                t[0x00000027U])) 
                                                                                | (this->__PVT__val[0x00000028U] 
                                                                                ^ 
                                                                                t[0x00000028U])) 
                                                                                | (this->__PVT__val[0x00000029U] 
                                                                                ^ 
                                                                                t[0x00000029U])) 
                                                                                | (this->__PVT__val[0x0000002aU] 
                                                                                ^ 
                                                                                t[0x0000002aU])) 
                                                                                | (this->__PVT__val[0x0000002bU] 
                                                                                ^ 
                                                                                t[0x0000002bU])) 
                                                                                | (this->__PVT__val[0x0000002cU] 
                                                                                ^ 
                                                                                t[0x0000002cU])) 
                                                                                | (this->__PVT__val[0x0000002dU] 
                                                                                ^ 
                                                                                t[0x0000002dU])) 
                                                                                | (this->__PVT__val[0x0000002eU] 
                                                                                ^ 
                                                                                t[0x0000002eU])) 
                                                                                | (this->__PVT__val[0x0000002fU] 
                                                                                ^ 
                                                                                t[0x0000002fU])) 
                                                                                | (this->__PVT__val[0x00000030U] 
                                                                                ^ 
                                                                                t[0x00000030U])) 
                                                                                | (this->__PVT__val[0x00000031U] 
                                                                                ^ 
                                                                                t[0x00000031U])) 
                                                                                | (this->__PVT__val[0x00000032U] 
                                                                                ^ 
                                                                                t[0x00000032U])) 
                                                                                | (this->__PVT__val[0x00000033U] 
                                                                                ^ 
                                                                                t[0x00000033U])) 
                                                                                | (this->__PVT__val[0x00000034U] 
                                                                                ^ 
                                                                                t[0x00000034U])) 
                                                                                | (this->__PVT__val[0x00000035U] 
                                                                                ^ 
                                                                                t[0x00000035U])) 
                                                                                | (this->__PVT__val[0x00000036U] 
                                                                                ^ 
                                                                                t[0x00000036U])) 
                                                                                | (this->__PVT__val[0x00000037U] 
                                                                                ^ 
                                                                                t[0x00000037U])) 
                                                                                | (this->__PVT__val[0x00000038U] 
                                                                                ^ 
                                                                                t[0x00000038U])) 
                                                                                | (this->__PVT__val[0x00000039U] 
                                                                                ^ 
                                                                                t[0x00000039U])) 
                                                                                | (this->__PVT__val[0x0000003aU] 
                                                                                ^ 
                                                                                t[0x0000003aU])) 
                                                                                | (this->__PVT__val[0x0000003bU] 
                                                                                ^ 
                                                                                t[0x0000003bU])) 
                                                                                | (this->__PVT__val[0x0000003cU] 
                                                                                ^ 
                                                                                t[0x0000003cU])) 
                                                                                | (this->__PVT__val[0x0000003dU] 
                                                                                ^ 
                                                                                t[0x0000003dU])) 
                                                                                | (this->__PVT__val[0x0000003eU] 
                                                                                ^ 
                                                                                t[0x0000003eU])) 
                                                                                | (this->__PVT__val[0x0000003fU] 
                                                                                ^ 
                                                                                t[0x0000003fU])) 
                                                                                | (this->__PVT__val[0x00000040U] 
                                                                                ^ 
                                                                                t[0x00000040U])) 
                                                                                | (this->__PVT__val[0x00000041U] 
                                                                                ^ 
                                                                                t[0x00000041U])) 
                                                                                | (this->__PVT__val[0x00000042U] 
                                                                                ^ 
                                                                                t[0x00000042U])) 
                                                                                | (this->__PVT__val[0x00000043U] 
                                                                                ^ 
                                                                                t[0x00000043U])) 
                                                                                | (this->__PVT__val[0x00000044U] 
                                                                                ^ 
                                                                                t[0x00000044U])) 
                                                                                | (this->__PVT__val[0x00000045U] 
                                                                                ^ 
                                                                                t[0x00000045U])) 
                                                                                | (this->__PVT__val[0x00000046U] 
                                                                                ^ 
                                                                                t[0x00000046U])) 
                                                                                | (this->__PVT__val[0x00000047U] 
                                                                                ^ 
                                                                                t[0x00000047U])) 
                                                                                | (this->__PVT__val[0x00000048U] 
                                                                                ^ 
                                                                                t[0x00000048U])) 
                                                                                | (this->__PVT__val[0x00000049U] 
                                                                                ^ 
                                                                                t[0x00000049U])) 
                                                                                | (this->__PVT__val[0x0000004aU] 
                                                                                ^ 
                                                                                t[0x0000004aU])) 
                                                                               | (this->__PVT__val[0x0000004bU] 
                                                                                ^ 
                                                                                t[0x0000004bU])) 
                                                                              | (this->__PVT__val[0x0000004cU] 
                                                                                ^ 
                                                                                t[0x0000004cU])) 
                                                                             | (this->__PVT__val[0x0000004dU] 
                                                                                ^ 
                                                                                t[0x0000004dU])) 
                                                                            | (this->__PVT__val[0x0000004eU] 
                                                                               ^ 
                                                                               t[0x0000004eU])) 
                                                                           | (this->__PVT__val[0x0000004fU] 
                                                                              ^ 
                                                                              t[0x0000004fU])) 
                                                                          | (this->__PVT__val[0x00000050U] 
                                                                             ^ 
                                                                             t[0x00000050U])) 
                                                                         | (this->__PVT__val[0x00000051U] 
                                                                            ^ 
                                                                            t[0x00000051U])) 
                                                                        | (this->__PVT__val[0x00000052U] 
                                                                           ^ 
                                                                           t[0x00000052U])) 
                                                                       | (this->__PVT__val[0x00000053U] 
                                                                          ^ 
                                                                          t[0x00000053U])) 
                                                                      | (this->__PVT__val[0x00000054U] 
                                                                         ^ 
                                                                         t[0x00000054U])) 
                                                                     | (this->__PVT__val[0x00000055U] 
                                                                        ^ 
                                                                        t[0x00000055U])) 
                                                                    | (this->__PVT__val[0x00000056U] 
                                                                       ^ 
                                                                       t[0x00000056U])) 
                                                                   | (this->__PVT__val[0x00000057U] 
                                                                      ^ 
                                                                      t[0x00000057U])) 
                                                                  | (this->__PVT__val[0x00000058U] 
                                                                     ^ 
                                                                     t[0x00000058U])) 
                                                                 | (this->__PVT__val[0x00000059U] 
                                                                    ^ 
                                                                    t[0x00000059U])) 
                                                                | (this->__PVT__val[0x0000005aU] 
                                                                   ^ 
                                                                   t[0x0000005aU])) 
                                                               | (this->__PVT__val[0x0000005bU] 
                                                                  ^ 
                                                                  t[0x0000005bU])) 
                                                              | (this->__PVT__val[0x0000005cU] 
                                                                 ^ 
                                                                 t[0x0000005cU])) 
                                                             | (this->__PVT__val[0x0000005dU] 
                                                                ^ 
                                                                t[0x0000005dU])) 
                                                            | (this->__PVT__val[0x0000005eU] 
                                                               ^ 
                                                               t[0x0000005eU])) 
                                                           | (this->__PVT__val[0x0000005fU] 
                                                              ^ 
                                                              t[0x0000005fU])) 
                                                          | (this->__PVT__val[0x00000060U] 
                                                             ^ 
                                                             t[0x00000060U])) 
                                                         | (this->__PVT__val[0x00000061U] 
                                                            ^ 
                                                            t[0x00000061U])) 
                                                        | (this->__PVT__val[0x00000062U] 
                                                           ^ 
                                                           t[0x00000062U])) 
                                                       | (this->__PVT__val[0x00000063U] 
                                                          ^ 
                                                          t[0x00000063U])) 
                                                      | (this->__PVT__val[0x00000064U] 
                                                         ^ 
                                                         t[0x00000064U])) 
                                                     | (this->__PVT__val[0x00000065U] 
                                                        ^ 
                                                        t[0x00000065U])) 
                                                    | (this->__PVT__val[0x00000066U] 
                                                       ^ 
                                                       t[0x00000066U])) 
                                                   | (this->__PVT__val[0x00000067U] 
                                                      ^ 
                                                      t[0x00000067U])) 
                                                  | (this->__PVT__val[0x00000068U] 
                                                     ^ 
                                                     t[0x00000068U])) 
                                                 | (this->__PVT__val[0x00000069U] 
                                                    ^ 
                                                    t[0x00000069U])) 
                                                | (this->__PVT__val[0x0000006aU] 
                                                   ^ 
                                                   t[0x0000006aU])) 
                                               | (this->__PVT__val[0x0000006bU] 
                                                  ^ 
                                                  t[0x0000006bU])) 
                                              | (this->__PVT__val[0x0000006cU] 
                                                 ^ 
                                                 t[0x0000006cU])) 
                                             | (this->__PVT__val[0x0000006dU] 
                                                ^ t[0x0000006dU])) 
                                            | (this->__PVT__val[0x0000006eU] 
                                               ^ t[0x0000006eU])) 
                                           | (this->__PVT__val[0x0000006fU] 
                                              ^ t[0x0000006fU])) 
                                          | (this->__PVT__val[0x00000070U] 
                                             ^ t[0x00000070U])) 
                                         | (this->__PVT__val[0x00000071U] 
                                            ^ t[0x00000071U])) 
                                        | (this->__PVT__val[0x00000072U] 
                                           ^ t[0x00000072U])) 
                                       | (this->__PVT__val[0x00000073U] 
                                          ^ t[0x00000073U])) 
                                      | (this->__PVT__val[0x00000074U] 
                                         ^ t[0x00000074U])) 
                                     | (this->__PVT__val[0x00000075U] 
                                        ^ t[0x00000075U])) 
                                    | (this->__PVT__val[0x00000076U] 
                                       ^ t[0x00000076U]));
        if ((0U == (((((((((__Vdeeptemp_h8e6291c0__0 
                            | (this->__PVT__val[0x00000077U] 
                               ^ t[0x00000077U])) | 
                           (this->__PVT__val[0x00000078U] 
                            ^ t[0x00000078U])) | (this->__PVT__val[0x00000079U] 
                                                  ^ 
                                                  t[0x00000079U])) 
                         | (this->__PVT__val[0x0000007aU] 
                            ^ t[0x0000007aU])) | (this->__PVT__val[0x0000007bU] 
                                                  ^ 
                                                  t[0x0000007bU])) 
                       | (this->__PVT__val[0x0000007cU] 
                          ^ t[0x0000007cU])) | (this->__PVT__val[0x0000007dU] 
                                                ^ t[0x0000007dU])) 
                     | (this->__PVT__val[0x0000007eU] 
                        ^ t[0x0000007eU])) | (this->__PVT__val[0x0000007fU] 
                                              ^ t[0x0000007fU])))) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_record_write_access(vlProcess, vlSymsp, accessor);
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x0000007fU)) {
            this->__PVT__val[__Vilp1] = t[__Vilp1];
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        Vuart_example_uvm_pkg__03a__03auvm_resource_base::__PVT__modified = 1U;
        __Vlabel0: ;
    }
}

void Vuart_example_uvm_pkg__03a__03auvm_resource__Tz8::__VnoInFunc_randomize(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuart_example_uvm_pkg__03a__03auvm_resource__Tz8::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__14__Vfuncout;
    __Vfunc___Vbasic_randomize__14__Vfuncout = 0;
    // Body
    Vuart_example_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vuart_example_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__14__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__14__Vfuncout));
}

void Vuart_example_uvm_pkg__03a__03auvm_resource__Tz8::__VnoInFunc___Vbasic_randomize(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuart_example_uvm_pkg__03a__03auvm_resource__Tz8::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vuart_example_uvm_pkg__03a__03auvm_resource__Tz8::_ctor_var_reset(Vuart_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuart_example_uvm_pkg__03a__03auvm_resource__Tz8::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    VL_SCOPED_RAND_RESET_W(4096, __PVT__val, 5204624782258430644ULL, 14157650751545541461ull);
}

std::string VL_TO_STRING(const VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_resource__Tz8>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuart_example_uvm_pkg__03a__03auvm_resource__Tz8::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vuart_example_uvm_pkg__03a__03auvm_resource__Tz8::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuart_example_uvm_pkg__03a__03auvm_resource__Tz8::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vuart_example_uvm_pkg__03a__03auvm_resource__Tz8::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuart_example_uvm_pkg__03a__03auvm_resource__Tz8::to_string_middle\n"); );
    // Body
    std::string out;
    out += "val:" + VL_TO_STRING_W(128, __PVT__val);
    out += ", "+ Vuart_example_uvm_pkg__03a__03auvm_resource_base::to_string_middle();
    return (out);
}
