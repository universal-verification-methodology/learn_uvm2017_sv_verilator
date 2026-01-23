// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"

void Vdma_uvm_pkg__03a__03auvm_printer__Vclpkg::__VnoInFunc_get_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_abstract_object_registry__pi7> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03auvm_printer__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_abstract_object_registry__pi7> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_abstract_object_registry__pi7__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vdma_uvm_pkg__03a__03auvm_printer__Vclpkg::__VnoInFunc_type_name(Vdma__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03auvm_printer__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_printer"s;
}

void Vdma_uvm_pkg__03a__03auvm_printer__Vclpkg::__VnoInFunc_set_default(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03auvm_printer__Vclpkg::__VnoInFunc_set_default\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__1__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> coreservice;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__1__Vfuncout);
    coreservice = __Vfunc_get__1__Vfuncout;
    VL_NULL_CHECK(coreservice, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 904)->__VnoInFunc_set_default_printer(vlSymsp, printer);
}

void Vdma_uvm_pkg__03a__03auvm_printer__Vclpkg::__VnoInFunc_get_default(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_printer> &get_default__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03auvm_printer__Vclpkg::__VnoInFunc_get_default\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__3__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_printer> __Vtask_get_default_printer__4__Vfuncout;
    // Body
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> coreservice;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__3__Vfuncout);
    coreservice = __Vfunc_get__3__Vfuncout;
    VL_NULL_CHECK(coreservice, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 910)->__VnoInFunc_get_default_printer(vlProcess, vlSymsp, __Vtask_get_default_printer__4__Vfuncout);
    get_default__Vfuncrtn = __Vtask_get_default_printer__4__Vfuncout;
}

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_object_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_abstract_object_registry__pi7> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_abstract_object_registry__pi7__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_type_name(Vdma__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_printer"s;
}

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_knobs(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03am_uvm_printer_knobs> &get_knobs__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_knobs\n"); );
    // Body
    get_knobs__Vfuncrtn = this->__PVT__knobs;
}

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_m_get_stack_size(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &m_get_stack_size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_m_get_stack_size\n"); );
    // Body
    m_get_stack_size__Vfuncrtn = this->__PVT__m_element_stack.size();
}

Vdma_uvm_pkg__03a__03auvm_printer::Vdma_uvm_pkg__03a__03auvm_printer(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name)
    : Vdma_uvm_pkg__03a__03auvm_policy(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    this->__PVT__knobs = VL_NEW(Vdma_uvm_pkg__03a__03am_uvm_printer_knobs, vlSymsp);
    this->__VnoInFunc_flush(vlProcess, vlSymsp);
}

extern const VlWide<128>/*4095:0*/ Vdma__ConstPool__CONST_h1958c06c_0;

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_field(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size, IData/*27:0*/ radix, CData/*7:0*/ scope_separator, std::string type_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_field\n"); );
    // Locals
    IData/*27:0*/ __Vfunc_get_default_radix__4__Vfuncout;
    __Vfunc_get_default_radix__4__Vfuncout = 0;
    std::string __Vfunc_uvm_bitstream_to_string__5__Vfuncout;
    VlWide<128>/*4095:0*/ __Vfunc_uvm_bitstream_to_string__5__value;
    VL_ZERO_W(4096, __Vfunc_uvm_bitstream_to_string__5__value);
    IData/*31:0*/ __Vfunc_uvm_bitstream_to_string__5__size;
    __Vfunc_uvm_bitstream_to_string__5__size = 0;
    IData/*27:0*/ __Vfunc_uvm_bitstream_to_string__5__radix;
    __Vfunc_uvm_bitstream_to_string__5__radix = 0;
    std::string __Vfunc_uvm_bitstream_to_string__5__radix_str;
    IData/*31:0*/ __Vfunc_uvm_bitstream_to_string__5__unnamedblk3__DOT__unnamedblk4__DOT__idx;
    __Vfunc_uvm_bitstream_to_string__5__unnamedblk3__DOT__unnamedblk4__DOT__idx = 0;
    std::string __Vfunc_get_radix_string__6__Vfuncout;
    std::string __Vfunc_uvm_leaf_scope__7__Vfuncout;
    std::string __Vfunc_uvm_leaf_scope__7__full_name;
    CData/*7:0*/ __Vfunc_uvm_leaf_scope__7__scope_separator;
    __Vfunc_uvm_leaf_scope__7__scope_separator = 0;
    VlWide<128>/*4095:0*/ __Vtemp_1;
    VlWide<128>/*4095:0*/ __Vtemp_2;
    VlWide<128>/*4095:0*/ __Vtemp_3;
    // Body
    std::string sz_str;
    std::string val_str;
    if ((""s == type_name)) {
        type_name = ((0x09000000U == radix) ? "time"s
                      : ((0x08000000U == radix) ? "string"s
                          : "integral"s));
    }
    sz_str = VL_SFORMATF_N_NX("%0d",0,32,size) ;
    if ((0U == radix)) {
        this->__VnoInFunc_get_default_radix(vlSymsp, __Vfunc_get_default_radix__4__Vfuncout);
        radix = __Vfunc_get_default_radix__4__Vfuncout;
    }
    __Vfunc_uvm_bitstream_to_string__5__radix_str = 
        VL_CVT_PACK_STR_NN(([&]() {
                this->__VnoInFunc_get_radix_string(vlSymsp, radix, __Vfunc_get_radix_string__6__Vfuncout);
            }(), __Vfunc_get_radix_string__6__Vfuncout));
    __Vfunc_uvm_bitstream_to_string__5__radix = radix;
    __Vfunc_uvm_bitstream_to_string__5__size = size;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x0000007fU)) {
        __Vfunc_uvm_bitstream_to_string__5__value[__Vilp1] 
            = value[__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    __Vfunc_uvm_bitstream_to_string__5__unnamedblk3__DOT__unnamedblk4__DOT__idx = 0;
    {
        if (((0x02000000U == __Vfunc_uvm_bitstream_to_string__5__radix) 
             & (__Vfunc_uvm_bitstream_to_string__5__value[
                (0x0000007fU & ((__Vfunc_uvm_bitstream_to_string__5__size 
                                 - (IData)(1U)) >> 5U))] 
                >> (0x0000001fU & (__Vfunc_uvm_bitstream_to_string__5__size 
                                   - (IData)(1U)))))) {
            __Vfunc_uvm_bitstream_to_string__5__Vfuncout 
                = VL_SFORMATF_N_NX("%0d",0,4096,__Vfunc_uvm_bitstream_to_string__5__value.data()) ;
            goto __Vlabel0;
        }
        VL_SHIFTL_WWI(4096,4096,32, __Vtemp_2, Vdma__ConstPool__CONST_h1958c06c_0, __Vfunc_uvm_bitstream_to_string__5__size);
        VL_SUB_W(128, __Vtemp_3, __Vtemp_2, Vdma__ConstPool__CONST_h1958c06c_0);
        __Vtemp_1[1U] = (__Vfunc_uvm_bitstream_to_string__5__value[1U] 
                         & __Vtemp_3[1U]);
        __Vtemp_1[2U] = (__Vfunc_uvm_bitstream_to_string__5__value[2U] 
                         & __Vtemp_3[2U]);
        __Vtemp_1[3U] = (__Vfunc_uvm_bitstream_to_string__5__value[3U] 
                         & __Vtemp_3[3U]);
        __Vtemp_1[4U] = (__Vfunc_uvm_bitstream_to_string__5__value[4U] 
                         & __Vtemp_3[4U]);
        __Vtemp_1[5U] = (__Vfunc_uvm_bitstream_to_string__5__value[5U] 
                         & __Vtemp_3[5U]);
        __Vtemp_1[6U] = (__Vfunc_uvm_bitstream_to_string__5__value[6U] 
                         & __Vtemp_3[6U]);
        __Vtemp_1[7U] = (__Vfunc_uvm_bitstream_to_string__5__value[7U] 
                         & __Vtemp_3[7U]);
        __Vtemp_1[8U] = (__Vfunc_uvm_bitstream_to_string__5__value[8U] 
                         & __Vtemp_3[8U]);
        __Vtemp_1[9U] = (__Vfunc_uvm_bitstream_to_string__5__value[9U] 
                         & __Vtemp_3[9U]);
        __Vtemp_1[0x0000000aU] = (__Vfunc_uvm_bitstream_to_string__5__value[0x0000000aU] 
                                  & __Vtemp_3[0x0000000aU]);
        __Vtemp_1[0x0000000bU] = (__Vfunc_uvm_bitstream_to_string__5__value[0x0000000bU] 
                                  & __Vtemp_3[0x0000000bU]);
        __Vtemp_1[0x0000000cU] = (__Vfunc_uvm_bitstream_to_string__5__value[0x0000000cU] 
                                  & __Vtemp_3[0x0000000cU]);
        __Vtemp_1[0x0000000dU] = (__Vfunc_uvm_bitstream_to_string__5__value[0x0000000dU] 
                                  & __Vtemp_3[0x0000000dU]);
        __Vtemp_1[0x0000000eU] = (__Vfunc_uvm_bitstream_to_string__5__value[0x0000000eU] 
                                  & __Vtemp_3[0x0000000eU]);
        __Vtemp_1[0x0000000fU] = (__Vfunc_uvm_bitstream_to_string__5__value[0x0000000fU] 
                                  & __Vtemp_3[0x0000000fU]);
        __Vtemp_1[0x00000010U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000010U] 
                                  & __Vtemp_3[0x00000010U]);
        __Vtemp_1[0x00000011U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000011U] 
                                  & __Vtemp_3[0x00000011U]);
        __Vtemp_1[0x00000012U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000012U] 
                                  & __Vtemp_3[0x00000012U]);
        __Vtemp_1[0x00000013U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000013U] 
                                  & __Vtemp_3[0x00000013U]);
        __Vtemp_1[0x00000014U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000014U] 
                                  & __Vtemp_3[0x00000014U]);
        __Vtemp_1[0x00000015U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000015U] 
                                  & __Vtemp_3[0x00000015U]);
        __Vtemp_1[0x00000016U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000016U] 
                                  & __Vtemp_3[0x00000016U]);
        __Vtemp_1[0x00000017U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000017U] 
                                  & __Vtemp_3[0x00000017U]);
        __Vtemp_1[0x00000018U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000018U] 
                                  & __Vtemp_3[0x00000018U]);
        __Vtemp_1[0x00000019U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000019U] 
                                  & __Vtemp_3[0x00000019U]);
        __Vtemp_1[0x0000001aU] = (__Vfunc_uvm_bitstream_to_string__5__value[0x0000001aU] 
                                  & __Vtemp_3[0x0000001aU]);
        __Vtemp_1[0x0000001bU] = (__Vfunc_uvm_bitstream_to_string__5__value[0x0000001bU] 
                                  & __Vtemp_3[0x0000001bU]);
        __Vtemp_1[0x0000001cU] = (__Vfunc_uvm_bitstream_to_string__5__value[0x0000001cU] 
                                  & __Vtemp_3[0x0000001cU]);
        __Vtemp_1[0x0000001dU] = (__Vfunc_uvm_bitstream_to_string__5__value[0x0000001dU] 
                                  & __Vtemp_3[0x0000001dU]);
        __Vtemp_1[0x0000001eU] = (__Vfunc_uvm_bitstream_to_string__5__value[0x0000001eU] 
                                  & __Vtemp_3[0x0000001eU]);
        __Vtemp_1[0x0000001fU] = (__Vfunc_uvm_bitstream_to_string__5__value[0x0000001fU] 
                                  & __Vtemp_3[0x0000001fU]);
        __Vtemp_1[0x00000020U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000020U] 
                                  & __Vtemp_3[0x00000020U]);
        __Vtemp_1[0x00000021U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000021U] 
                                  & __Vtemp_3[0x00000021U]);
        __Vtemp_1[0x00000022U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000022U] 
                                  & __Vtemp_3[0x00000022U]);
        __Vtemp_1[0x00000023U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000023U] 
                                  & __Vtemp_3[0x00000023U]);
        __Vtemp_1[0x00000024U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000024U] 
                                  & __Vtemp_3[0x00000024U]);
        __Vtemp_1[0x00000025U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000025U] 
                                  & __Vtemp_3[0x00000025U]);
        __Vtemp_1[0x00000026U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000026U] 
                                  & __Vtemp_3[0x00000026U]);
        __Vtemp_1[0x00000027U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000027U] 
                                  & __Vtemp_3[0x00000027U]);
        __Vtemp_1[0x00000028U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000028U] 
                                  & __Vtemp_3[0x00000028U]);
        __Vtemp_1[0x00000029U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000029U] 
                                  & __Vtemp_3[0x00000029U]);
        __Vtemp_1[0x0000002aU] = (__Vfunc_uvm_bitstream_to_string__5__value[0x0000002aU] 
                                  & __Vtemp_3[0x0000002aU]);
        __Vtemp_1[0x0000002bU] = (__Vfunc_uvm_bitstream_to_string__5__value[0x0000002bU] 
                                  & __Vtemp_3[0x0000002bU]);
        __Vtemp_1[0x0000002cU] = (__Vfunc_uvm_bitstream_to_string__5__value[0x0000002cU] 
                                  & __Vtemp_3[0x0000002cU]);
        __Vtemp_1[0x0000002dU] = (__Vfunc_uvm_bitstream_to_string__5__value[0x0000002dU] 
                                  & __Vtemp_3[0x0000002dU]);
        __Vtemp_1[0x0000002eU] = (__Vfunc_uvm_bitstream_to_string__5__value[0x0000002eU] 
                                  & __Vtemp_3[0x0000002eU]);
        __Vtemp_1[0x0000002fU] = (__Vfunc_uvm_bitstream_to_string__5__value[0x0000002fU] 
                                  & __Vtemp_3[0x0000002fU]);
        __Vtemp_1[0x00000030U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000030U] 
                                  & __Vtemp_3[0x00000030U]);
        __Vtemp_1[0x00000031U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000031U] 
                                  & __Vtemp_3[0x00000031U]);
        __Vtemp_1[0x00000032U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000032U] 
                                  & __Vtemp_3[0x00000032U]);
        __Vtemp_1[0x00000033U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000033U] 
                                  & __Vtemp_3[0x00000033U]);
        __Vtemp_1[0x00000034U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000034U] 
                                  & __Vtemp_3[0x00000034U]);
        __Vtemp_1[0x00000035U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000035U] 
                                  & __Vtemp_3[0x00000035U]);
        __Vtemp_1[0x00000036U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000036U] 
                                  & __Vtemp_3[0x00000036U]);
        __Vtemp_1[0x00000037U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000037U] 
                                  & __Vtemp_3[0x00000037U]);
        __Vtemp_1[0x00000038U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000038U] 
                                  & __Vtemp_3[0x00000038U]);
        __Vtemp_1[0x00000039U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000039U] 
                                  & __Vtemp_3[0x00000039U]);
        __Vtemp_1[0x0000003aU] = (__Vfunc_uvm_bitstream_to_string__5__value[0x0000003aU] 
                                  & __Vtemp_3[0x0000003aU]);
        __Vtemp_1[0x0000003bU] = (__Vfunc_uvm_bitstream_to_string__5__value[0x0000003bU] 
                                  & __Vtemp_3[0x0000003bU]);
        __Vtemp_1[0x0000003cU] = (__Vfunc_uvm_bitstream_to_string__5__value[0x0000003cU] 
                                  & __Vtemp_3[0x0000003cU]);
        __Vtemp_1[0x0000003dU] = (__Vfunc_uvm_bitstream_to_string__5__value[0x0000003dU] 
                                  & __Vtemp_3[0x0000003dU]);
        __Vtemp_1[0x0000003eU] = (__Vfunc_uvm_bitstream_to_string__5__value[0x0000003eU] 
                                  & __Vtemp_3[0x0000003eU]);
        __Vtemp_1[0x0000003fU] = (__Vfunc_uvm_bitstream_to_string__5__value[0x0000003fU] 
                                  & __Vtemp_3[0x0000003fU]);
        __Vtemp_1[0x00000040U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000040U] 
                                  & __Vtemp_3[0x00000040U]);
        __Vtemp_1[0x00000041U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000041U] 
                                  & __Vtemp_3[0x00000041U]);
        __Vtemp_1[0x00000042U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000042U] 
                                  & __Vtemp_3[0x00000042U]);
        __Vtemp_1[0x00000043U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000043U] 
                                  & __Vtemp_3[0x00000043U]);
        __Vtemp_1[0x00000044U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000044U] 
                                  & __Vtemp_3[0x00000044U]);
        __Vtemp_1[0x00000045U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000045U] 
                                  & __Vtemp_3[0x00000045U]);
        __Vtemp_1[0x00000046U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000046U] 
                                  & __Vtemp_3[0x00000046U]);
        __Vtemp_1[0x00000047U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000047U] 
                                  & __Vtemp_3[0x00000047U]);
        __Vtemp_1[0x00000048U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000048U] 
                                  & __Vtemp_3[0x00000048U]);
        __Vtemp_1[0x00000049U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000049U] 
                                  & __Vtemp_3[0x00000049U]);
        __Vtemp_1[0x0000004aU] = (__Vfunc_uvm_bitstream_to_string__5__value[0x0000004aU] 
                                  & __Vtemp_3[0x0000004aU]);
        __Vtemp_1[0x0000004bU] = (__Vfunc_uvm_bitstream_to_string__5__value[0x0000004bU] 
                                  & __Vtemp_3[0x0000004bU]);
        __Vtemp_1[0x0000004cU] = (__Vfunc_uvm_bitstream_to_string__5__value[0x0000004cU] 
                                  & __Vtemp_3[0x0000004cU]);
        __Vtemp_1[0x0000004dU] = (__Vfunc_uvm_bitstream_to_string__5__value[0x0000004dU] 
                                  & __Vtemp_3[0x0000004dU]);
        __Vtemp_1[0x0000004eU] = (__Vfunc_uvm_bitstream_to_string__5__value[0x0000004eU] 
                                  & __Vtemp_3[0x0000004eU]);
        __Vtemp_1[0x0000004fU] = (__Vfunc_uvm_bitstream_to_string__5__value[0x0000004fU] 
                                  & __Vtemp_3[0x0000004fU]);
        __Vtemp_1[0x00000050U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000050U] 
                                  & __Vtemp_3[0x00000050U]);
        __Vtemp_1[0x00000051U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000051U] 
                                  & __Vtemp_3[0x00000051U]);
        __Vtemp_1[0x00000052U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000052U] 
                                  & __Vtemp_3[0x00000052U]);
        __Vtemp_1[0x00000053U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000053U] 
                                  & __Vtemp_3[0x00000053U]);
        __Vtemp_1[0x00000054U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000054U] 
                                  & __Vtemp_3[0x00000054U]);
        __Vtemp_1[0x00000055U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000055U] 
                                  & __Vtemp_3[0x00000055U]);
        __Vtemp_1[0x00000056U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000056U] 
                                  & __Vtemp_3[0x00000056U]);
        __Vtemp_1[0x00000057U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000057U] 
                                  & __Vtemp_3[0x00000057U]);
        __Vtemp_1[0x00000058U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000058U] 
                                  & __Vtemp_3[0x00000058U]);
        __Vtemp_1[0x00000059U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000059U] 
                                  & __Vtemp_3[0x00000059U]);
        __Vtemp_1[0x0000005aU] = (__Vfunc_uvm_bitstream_to_string__5__value[0x0000005aU] 
                                  & __Vtemp_3[0x0000005aU]);
        __Vtemp_1[0x0000005bU] = (__Vfunc_uvm_bitstream_to_string__5__value[0x0000005bU] 
                                  & __Vtemp_3[0x0000005bU]);
        __Vtemp_1[0x0000005cU] = (__Vfunc_uvm_bitstream_to_string__5__value[0x0000005cU] 
                                  & __Vtemp_3[0x0000005cU]);
        __Vtemp_1[0x0000005dU] = (__Vfunc_uvm_bitstream_to_string__5__value[0x0000005dU] 
                                  & __Vtemp_3[0x0000005dU]);
        __Vtemp_1[0x0000005eU] = (__Vfunc_uvm_bitstream_to_string__5__value[0x0000005eU] 
                                  & __Vtemp_3[0x0000005eU]);
        __Vtemp_1[0x0000005fU] = (__Vfunc_uvm_bitstream_to_string__5__value[0x0000005fU] 
                                  & __Vtemp_3[0x0000005fU]);
        __Vtemp_1[0x00000060U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000060U] 
                                  & __Vtemp_3[0x00000060U]);
        __Vtemp_1[0x00000061U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000061U] 
                                  & __Vtemp_3[0x00000061U]);
        __Vtemp_1[0x00000062U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000062U] 
                                  & __Vtemp_3[0x00000062U]);
        __Vtemp_1[0x00000063U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000063U] 
                                  & __Vtemp_3[0x00000063U]);
        __Vtemp_1[0x00000064U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000064U] 
                                  & __Vtemp_3[0x00000064U]);
        __Vtemp_1[0x00000065U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000065U] 
                                  & __Vtemp_3[0x00000065U]);
        __Vtemp_1[0x00000066U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000066U] 
                                  & __Vtemp_3[0x00000066U]);
        __Vtemp_1[0x00000067U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000067U] 
                                  & __Vtemp_3[0x00000067U]);
        __Vtemp_1[0x00000068U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000068U] 
                                  & __Vtemp_3[0x00000068U]);
        __Vtemp_1[0x00000069U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000069U] 
                                  & __Vtemp_3[0x00000069U]);
        __Vtemp_1[0x0000006aU] = (__Vfunc_uvm_bitstream_to_string__5__value[0x0000006aU] 
                                  & __Vtemp_3[0x0000006aU]);
        __Vtemp_1[0x0000006bU] = (__Vfunc_uvm_bitstream_to_string__5__value[0x0000006bU] 
                                  & __Vtemp_3[0x0000006bU]);
        __Vtemp_1[0x0000006cU] = (__Vfunc_uvm_bitstream_to_string__5__value[0x0000006cU] 
                                  & __Vtemp_3[0x0000006cU]);
        __Vtemp_1[0x0000006dU] = (__Vfunc_uvm_bitstream_to_string__5__value[0x0000006dU] 
                                  & __Vtemp_3[0x0000006dU]);
        __Vtemp_1[0x0000006eU] = (__Vfunc_uvm_bitstream_to_string__5__value[0x0000006eU] 
                                  & __Vtemp_3[0x0000006eU]);
        __Vtemp_1[0x0000006fU] = (__Vfunc_uvm_bitstream_to_string__5__value[0x0000006fU] 
                                  & __Vtemp_3[0x0000006fU]);
        __Vtemp_1[0x00000070U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000070U] 
                                  & __Vtemp_3[0x00000070U]);
        __Vtemp_1[0x00000071U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000071U] 
                                  & __Vtemp_3[0x00000071U]);
        __Vtemp_1[0x00000072U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000072U] 
                                  & __Vtemp_3[0x00000072U]);
        __Vtemp_1[0x00000073U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000073U] 
                                  & __Vtemp_3[0x00000073U]);
        __Vtemp_1[0x00000074U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000074U] 
                                  & __Vtemp_3[0x00000074U]);
        __Vtemp_1[0x00000075U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000075U] 
                                  & __Vtemp_3[0x00000075U]);
        __Vtemp_1[0x00000076U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000076U] 
                                  & __Vtemp_3[0x00000076U]);
        __Vtemp_1[0x00000077U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000077U] 
                                  & __Vtemp_3[0x00000077U]);
        __Vtemp_1[0x00000078U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000078U] 
                                  & __Vtemp_3[0x00000078U]);
        __Vtemp_1[0x00000079U] = (__Vfunc_uvm_bitstream_to_string__5__value[0x00000079U] 
                                  & __Vtemp_3[0x00000079U]);
        __Vtemp_1[0x0000007aU] = (__Vfunc_uvm_bitstream_to_string__5__value[0x0000007aU] 
                                  & __Vtemp_3[0x0000007aU]);
        __Vtemp_1[0x0000007bU] = (__Vfunc_uvm_bitstream_to_string__5__value[0x0000007bU] 
                                  & __Vtemp_3[0x0000007bU]);
        __Vtemp_1[0x0000007cU] = (__Vfunc_uvm_bitstream_to_string__5__value[0x0000007cU] 
                                  & __Vtemp_3[0x0000007cU]);
        __Vtemp_1[0x0000007dU] = (__Vfunc_uvm_bitstream_to_string__5__value[0x0000007dU] 
                                  & __Vtemp_3[0x0000007dU]);
        __Vtemp_1[0x0000007eU] = (__Vfunc_uvm_bitstream_to_string__5__value[0x0000007eU] 
                                  & __Vtemp_3[0x0000007eU]);
        __Vtemp_1[0x0000007fU] = (__Vfunc_uvm_bitstream_to_string__5__value[0x0000007fU] 
                                  & __Vtemp_3[0x0000007fU]);
        __Vfunc_uvm_bitstream_to_string__5__value[0U] 
            = (__Vfunc_uvm_bitstream_to_string__5__value[0U] 
               & __Vtemp_3[0U]);
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 1U;
        while ((__Vilp2 <= 0x0000007fU)) {
            __Vfunc_uvm_bitstream_to_string__5__value[__Vilp2] 
                = __Vtemp_1[__Vilp2];
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        __Vfunc_uvm_bitstream_to_string__5__Vfuncout 
            = ((0x01000000U == __Vfunc_uvm_bitstream_to_string__5__radix)
                ? VL_SFORMATF_N_NX("%0@%0b",0,-1,&(__Vfunc_uvm_bitstream_to_string__5__radix_str),
                                   4096,__Vfunc_uvm_bitstream_to_string__5__value.data()) 
                : ((0x06000000U == __Vfunc_uvm_bitstream_to_string__5__radix)
                    ? VL_SFORMATF_N_NX("%0@%0o",0,-1,
                                       &(__Vfunc_uvm_bitstream_to_string__5__radix_str),
                                       4096,__Vfunc_uvm_bitstream_to_string__5__value.data()) 
                    : ((0x03000000U == __Vfunc_uvm_bitstream_to_string__5__radix)
                        ? VL_SFORMATF_N_NX("%0@%0d",0,
                                           -1,&(__Vfunc_uvm_bitstream_to_string__5__radix_str),
                                           4096,__Vfunc_uvm_bitstream_to_string__5__value.data()) 
                        : ((0x08000000U == __Vfunc_uvm_bitstream_to_string__5__radix)
                            ? VL_SFORMATF_N_NX("%0@%0s",0,
                                               -1,&(__Vfunc_uvm_bitstream_to_string__5__radix_str),
                                               4096,
                                               __Vfunc_uvm_bitstream_to_string__5__value.data()) 
                            : ((0x09000000U == __Vfunc_uvm_bitstream_to_string__5__radix)
                                ? VL_SFORMATF_N_NX("%0@%0t",0,
                                                   -1,
                                                   &(__Vfunc_uvm_bitstream_to_string__5__radix_str),
                                                   4096,
                                                   __Vfunc_uvm_bitstream_to_string__5__value.data(),
                                                   -9) 
                                : ((0x02000000U == __Vfunc_uvm_bitstream_to_string__5__radix)
                                    ? VL_SFORMATF_N_NX("%0@%0d",0,
                                                       -1,
                                                       &(__Vfunc_uvm_bitstream_to_string__5__radix_str),
                                                       4096,
                                                       __Vfunc_uvm_bitstream_to_string__5__value.data()) 
                                    : VL_SFORMATF_N_NX("%0@%0x",0,
                                                       -1,
                                                       &(__Vfunc_uvm_bitstream_to_string__5__radix_str),
                                                       4096,
                                                       __Vfunc_uvm_bitstream_to_string__5__value.data()) ))))));
        __Vlabel0: ;
    }
    val_str = __Vfunc_uvm_bitstream_to_string__5__Vfuncout;
    __Vfunc_uvm_leaf_scope__7__scope_separator = scope_separator;
    __Vfunc_uvm_leaf_scope__7__full_name = name;
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bmatches = 0U;
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match 
        = ((0x5bU == (IData)(__Vfunc_uvm_leaf_scope__7__scope_separator))
            ? 0x5dU : ((0x28U == (IData)(__Vfunc_uvm_leaf_scope__7__scope_separator))
                        ? 0x29U : ((0x3cU == (IData)(__Vfunc_uvm_leaf_scope__7__scope_separator))
                                    ? 0x3eU : ((0x7bU 
                                                == (IData)(__Vfunc_uvm_leaf_scope__7__scope_separator))
                                                ? 0x7dU
                                                : 0U))));
    if (((0U != (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match)) 
         & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match) 
            != VL_GETC_N(__Vfunc_uvm_leaf_scope__7__full_name,
                         (VL_LEN_IN(__Vfunc_uvm_leaf_scope__7__full_name) 
                          - (IData)(1U)))))) {
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match = 0U;
    }
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos 
        = (VL_LEN_IN(__Vfunc_uvm_leaf_scope__7__full_name) 
           - (IData)(1U));
    {
        while (VL_LTS_III(32, 0U, vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos)) {
            if ((VL_GETC_N(__Vfunc_uvm_leaf_scope__7__full_name,vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos) 
                 == (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match))) {
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bmatches 
                    = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bmatches);
            } else if ((VL_GETC_N(__Vfunc_uvm_leaf_scope__7__full_name,vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos) 
                        == (IData)(__Vfunc_uvm_leaf_scope__7__scope_separator))) {
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bmatches 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bmatches 
                       - (IData)(1U));
                if ((1U & ((~ (0U != vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bmatches)) 
                           | (0U == (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match))))) {
                    goto __Vlabel1;
                }
            }
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos 
                = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos 
                   - (IData)(1U));
        }
        __Vlabel1: ;
    }
    if ((0U != vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos)) {
        if ((0x2eU != (IData)(__Vfunc_uvm_leaf_scope__7__scope_separator))) {
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos 
                = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos 
                   - (IData)(1U));
        }
        __Vfunc_uvm_leaf_scope__7__Vfuncout = VL_SUBSTR_N(__Vfunc_uvm_leaf_scope__7__full_name,
                                                          ((IData)(1U) 
                                                           + vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos),
                                                          (VL_LEN_IN(__Vfunc_uvm_leaf_scope__7__full_name) 
                                                           - (IData)(1U)));
    } else {
        __Vfunc_uvm_leaf_scope__7__Vfuncout = __Vfunc_uvm_leaf_scope__7__full_name;
    }
    name = __Vfunc_uvm_leaf_scope__7__Vfuncout;
    this->__VnoInFunc_push_element(vlProcess, vlSymsp, name, type_name, sz_str, val_str);
    this->__VnoInFunc_pop_element(vlSymsp);
}

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_field_int(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ value, IData/*31:0*/ size, IData/*27:0*/ radix, CData/*7:0*/ scope_separator, std::string type_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_field_int\n"); );
    // Locals
    IData/*27:0*/ __Vfunc_get_default_radix__10__Vfuncout;
    __Vfunc_get_default_radix__10__Vfuncout = 0;
    std::string __Vfunc_uvm_integral_to_string__11__Vfuncout;
    QData/*63:0*/ __Vfunc_uvm_integral_to_string__11__value;
    __Vfunc_uvm_integral_to_string__11__value = 0;
    IData/*31:0*/ __Vfunc_uvm_integral_to_string__11__size;
    __Vfunc_uvm_integral_to_string__11__size = 0;
    IData/*27:0*/ __Vfunc_uvm_integral_to_string__11__radix;
    __Vfunc_uvm_integral_to_string__11__radix = 0;
    std::string __Vfunc_uvm_integral_to_string__11__radix_str;
    IData/*31:0*/ __Vfunc_uvm_integral_to_string__11__unnamedblk5__DOT__unnamedblk6__DOT__idx;
    __Vfunc_uvm_integral_to_string__11__unnamedblk5__DOT__unnamedblk6__DOT__idx = 0;
    std::string __Vfunc_get_radix_string__12__Vfuncout;
    std::string __Vfunc_uvm_leaf_scope__13__Vfuncout;
    std::string __Vfunc_uvm_leaf_scope__13__full_name;
    CData/*7:0*/ __Vfunc_uvm_leaf_scope__13__scope_separator;
    __Vfunc_uvm_leaf_scope__13__scope_separator = 0;
    // Body
    std::string sz_str;
    std::string val_str;
    if ((""s == type_name)) {
        type_name = ((0x09000000U == radix) ? "time"s
                      : ((0x08000000U == radix) ? "string"s
                          : "integral"s));
    }
    sz_str = VL_SFORMATF_N_NX("%0d",0,32,size) ;
    if ((0U == radix)) {
        this->__VnoInFunc_get_default_radix(vlSymsp, __Vfunc_get_default_radix__10__Vfuncout);
        radix = __Vfunc_get_default_radix__10__Vfuncout;
    }
    __Vfunc_uvm_integral_to_string__11__radix_str = 
        VL_CVT_PACK_STR_NN(([&]() {
                this->__VnoInFunc_get_radix_string(vlSymsp, radix, __Vfunc_get_radix_string__12__Vfuncout);
            }(), __Vfunc_get_radix_string__12__Vfuncout));
    __Vfunc_uvm_integral_to_string__11__radix = radix;
    __Vfunc_uvm_integral_to_string__11__size = size;
    __Vfunc_uvm_integral_to_string__11__value = value;
    __Vfunc_uvm_integral_to_string__11__unnamedblk5__DOT__unnamedblk6__DOT__idx = 0;
    {
        if (((0x02000000U == __Vfunc_uvm_integral_to_string__11__radix) 
             & (IData)((__Vfunc_uvm_integral_to_string__11__value 
                        >> (0x0000003fU & (__Vfunc_uvm_integral_to_string__11__size 
                                           - (IData)(1U))))))) {
            __Vfunc_uvm_integral_to_string__11__Vfuncout 
                = VL_SFORMATF_N_NX("%0d",0,64,__Vfunc_uvm_integral_to_string__11__value) ;
            goto __Vlabel0;
        }
        __Vfunc_uvm_integral_to_string__11__value = 
            (__Vfunc_uvm_integral_to_string__11__value 
             & (VL_SHIFTL_QQI(64,64,32, 1ULL, __Vfunc_uvm_integral_to_string__11__size) 
                - 1ULL));
        __Vfunc_uvm_integral_to_string__11__Vfuncout 
            = ((0x01000000U == __Vfunc_uvm_integral_to_string__11__radix)
                ? VL_SFORMATF_N_NX("%0@%0b",0,-1,&(__Vfunc_uvm_integral_to_string__11__radix_str),
                                   64,__Vfunc_uvm_integral_to_string__11__value) 
                : ((0x06000000U == __Vfunc_uvm_integral_to_string__11__radix)
                    ? VL_SFORMATF_N_NX("%0@%0o",0,-1,
                                       &(__Vfunc_uvm_integral_to_string__11__radix_str),
                                       64,__Vfunc_uvm_integral_to_string__11__value) 
                    : ((0x03000000U == __Vfunc_uvm_integral_to_string__11__radix)
                        ? VL_SFORMATF_N_NX("%0@%0d",0,
                                           -1,&(__Vfunc_uvm_integral_to_string__11__radix_str),
                                           64,__Vfunc_uvm_integral_to_string__11__value) 
                        : ((0x08000000U == __Vfunc_uvm_integral_to_string__11__radix)
                            ? VL_SFORMATF_N_NX("%0@%0s",0,
                                               -1,&(__Vfunc_uvm_integral_to_string__11__radix_str),
                                               64,__Vfunc_uvm_integral_to_string__11__value) 
                            : ((0x09000000U == __Vfunc_uvm_integral_to_string__11__radix)
                                ? VL_SFORMATF_N_NX("%0@%0t",0,
                                                   -1,
                                                   &(__Vfunc_uvm_integral_to_string__11__radix_str),
                                                   64,
                                                   __Vfunc_uvm_integral_to_string__11__value,
                                                   -9) 
                                : ((0x02000000U == __Vfunc_uvm_integral_to_string__11__radix)
                                    ? VL_SFORMATF_N_NX("%0@%0d",0,
                                                       -1,
                                                       &(__Vfunc_uvm_integral_to_string__11__radix_str),
                                                       64,
                                                       __Vfunc_uvm_integral_to_string__11__value) 
                                    : VL_SFORMATF_N_NX("%0@%0x",0,
                                                       -1,
                                                       &(__Vfunc_uvm_integral_to_string__11__radix_str),
                                                       64,
                                                       __Vfunc_uvm_integral_to_string__11__value) ))))));
        __Vlabel0: ;
    }
    val_str = __Vfunc_uvm_integral_to_string__11__Vfuncout;
    __Vfunc_uvm_leaf_scope__13__scope_separator = scope_separator;
    __Vfunc_uvm_leaf_scope__13__full_name = name;
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bmatches = 0U;
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match 
        = ((0x5bU == (IData)(__Vfunc_uvm_leaf_scope__13__scope_separator))
            ? 0x5dU : ((0x28U == (IData)(__Vfunc_uvm_leaf_scope__13__scope_separator))
                        ? 0x29U : ((0x3cU == (IData)(__Vfunc_uvm_leaf_scope__13__scope_separator))
                                    ? 0x3eU : ((0x7bU 
                                                == (IData)(__Vfunc_uvm_leaf_scope__13__scope_separator))
                                                ? 0x7dU
                                                : 0U))));
    if (((0U != (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match)) 
         & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match) 
            != VL_GETC_N(__Vfunc_uvm_leaf_scope__13__full_name,
                         (VL_LEN_IN(__Vfunc_uvm_leaf_scope__13__full_name) 
                          - (IData)(1U)))))) {
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match = 0U;
    }
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos 
        = (VL_LEN_IN(__Vfunc_uvm_leaf_scope__13__full_name) 
           - (IData)(1U));
    {
        while (VL_LTS_III(32, 0U, vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos)) {
            if ((VL_GETC_N(__Vfunc_uvm_leaf_scope__13__full_name,vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos) 
                 == (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match))) {
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bmatches 
                    = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bmatches);
            } else if ((VL_GETC_N(__Vfunc_uvm_leaf_scope__13__full_name,vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos) 
                        == (IData)(__Vfunc_uvm_leaf_scope__13__scope_separator))) {
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bmatches 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bmatches 
                       - (IData)(1U));
                if ((1U & ((~ (0U != vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bmatches)) 
                           | (0U == (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match))))) {
                    goto __Vlabel1;
                }
            }
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos 
                = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos 
                   - (IData)(1U));
        }
        __Vlabel1: ;
    }
    if ((0U != vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos)) {
        if ((0x2eU != (IData)(__Vfunc_uvm_leaf_scope__13__scope_separator))) {
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos 
                = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos 
                   - (IData)(1U));
        }
        __Vfunc_uvm_leaf_scope__13__Vfuncout = VL_SUBSTR_N(__Vfunc_uvm_leaf_scope__13__full_name,
                                                           ((IData)(1U) 
                                                            + vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos),
                                                           (VL_LEN_IN(__Vfunc_uvm_leaf_scope__13__full_name) 
                                                            - (IData)(1U)));
    } else {
        __Vfunc_uvm_leaf_scope__13__Vfuncout = __Vfunc_uvm_leaf_scope__13__full_name;
    }
    name = __Vfunc_uvm_leaf_scope__13__Vfuncout;
    this->__VnoInFunc_push_element(vlProcess, vlSymsp, name, type_name, sz_str, val_str);
    this->__VnoInFunc_pop_element(vlSymsp);
}

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_emit(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string &emit__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_emit\n"); );
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
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__21__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__22__Vfuncout;
    // Body
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__16__id = "NO_OVERRIDE"s;
                    __Vfunc_uvm_report_enabled__16__severity = 2U;
                    __Vfunc_uvm_report_enabled__16__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__17__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__17__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__18__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__18__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__16__verbosity, (IData)(__Vfunc_uvm_report_enabled__16__severity), __Vfunc_uvm_report_enabled__16__id, __Vtask_uvm_report_enabled__19__Vfuncout);
                    __Vfunc_uvm_report_enabled__16__Vfuncout 
                        = __Vtask_uvm_report_enabled__19__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__16__Vfuncout))) {
        __Vtask_uvm_report_error__20__report_enabled_checked = 1U;
        __Vtask_uvm_report_error__20__context_name = ""s;
        __Vtask_uvm_report_error__20__line = 0x000003e7U;
        __Vtask_uvm_report_error__20__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh"s;
        __Vtask_uvm_report_error__20__verbosity = 0U;
        __Vtask_uvm_report_error__20__message = "emit() method not overridden in printer subtype"s;
        __Vtask_uvm_report_error__20__id = "NO_OVERRIDE"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__21__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__21__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__22__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__22__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__20__id, __Vtask_uvm_report_error__20__message, __Vtask_uvm_report_error__20__verbosity, __Vtask_uvm_report_error__20__filename, __Vtask_uvm_report_error__20__line, __Vtask_uvm_report_error__20__context_name, (IData)(__Vtask_uvm_report_error__20__report_enabled_checked));
    }
    emit__Vfuncrtn = ""s;
}

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_flush(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_flush\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_printer_element> __Vfunc_get_bottom_element__24__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_printer_element> __Vfunc_get_bottom_element__25__Vfuncout;
    // Body
    IData/*31:0*/ unnamedblk41__DOT__i;
    unnamedblk41__DOT__i = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_printer_element> element;
    this->__VnoInFunc_get_bottom_element(vlSymsp, __Vfunc_get_bottom_element__24__Vfuncout);
    element = __Vfunc_get_bottom_element__24__Vfuncout;
    VlQueue<VlClassRef<Vdma_uvm_pkg__03a__03auvm_printer_element>> all_descendent_elements;
    this->__VnoInFunc_get_bottom_element(vlSymsp, __Vfunc_get_bottom_element__25__Vfuncout);
    element = __Vfunc_get_bottom_element__25__Vfuncout;
    if ((VlNull{} != element)) {
        VL_NULL_CHECK(element, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1010)->__VnoInFunc_get_children(vlSymsp, all_descendent_elements, 1U);
        unnamedblk41__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk41__DOT__i, all_descendent_elements.size())) {
            this->__PVT__m_recycled_elements.push_back(all_descendent_elements.at(unnamedblk41__DOT__i));
            VL_NULL_CHECK(all_descendent_elements.at(unnamedblk41__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1013)->__VnoInFunc_clear_children(vlSymsp);
            unnamedblk41__DOT__i = ((IData)(1U) + unnamedblk41__DOT__i);
        }
        VL_NULL_CHECK(element, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1015)->__VnoInFunc_clear_children(vlSymsp);
        this->__PVT__m_recycled_elements.push_back(element);
        this->__PVT__m_element_stack.clear();
    }
    this->__PVT__m_recur_states.clear();
    this->__PVT__m_flushed = 1U;
}

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_name_enabled(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ enabled) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_name_enabled\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__knobs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1025)->__PVT__identifier 
        = enabled;
}

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_name_enabled(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &get_name_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_name_enabled\n"); );
    // Body
    get_name_enabled__Vfuncrtn = VL_NULL_CHECK(this->__PVT__knobs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1028)
        ->__PVT__identifier;
}

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_type_name_enabled(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ enabled) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_type_name_enabled\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__knobs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1032)->__PVT__type_name 
        = enabled;
}

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_type_name_enabled(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &get_type_name_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_type_name_enabled\n"); );
    // Body
    get_type_name_enabled__Vfuncrtn = VL_NULL_CHECK(this->__PVT__knobs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1035)
        ->__PVT__type_name;
}

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_size_enabled(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ enabled) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_size_enabled\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__knobs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1039)->__PVT__size 
        = enabled;
}

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_size_enabled(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &get_size_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_size_enabled\n"); );
    // Body
    get_size_enabled__Vfuncrtn = VL_NULL_CHECK(this->__PVT__knobs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1042)
        ->__PVT__size;
}

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_id_enabled(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ enabled) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_id_enabled\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__knobs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1046)->__PVT__reference 
        = enabled;
}

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_id_enabled(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &get_id_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_id_enabled\n"); );
    // Body
    get_id_enabled__Vfuncrtn = VL_NULL_CHECK(this->__PVT__knobs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1049)
        ->__PVT__reference;
}

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_radix_enabled(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ enabled) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_radix_enabled\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__knobs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1053)->__PVT__show_radix 
        = enabled;
}

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_radix_enabled(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &get_radix_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_radix_enabled\n"); );
    // Body
    get_radix_enabled__Vfuncrtn = VL_NULL_CHECK(this->__PVT__knobs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1056)
        ->__PVT__show_radix;
}

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_radix_string(Vdma__Syms* __restrict vlSymsp, IData/*27:0*/ radix, std::string prefix) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_radix_string\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__29__Vfuncout;
    __Vfunc_uvm_report_enabled__29__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__29__verbosity;
    __Vfunc_uvm_report_enabled__29__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__29__severity;
    __Vfunc_uvm_report_enabled__29__severity = 0;
    std::string __Vfunc_uvm_report_enabled__29__id;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__30__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__31__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__32__Vfuncout;
    __Vtask_uvm_report_enabled__32__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__33__id;
    std::string __Vtask_uvm_report_warning__33__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__33__verbosity;
    __Vtask_uvm_report_warning__33__verbosity = 0;
    std::string __Vtask_uvm_report_warning__33__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__33__line;
    __Vtask_uvm_report_warning__33__line = 0;
    std::string __Vtask_uvm_report_warning__33__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__33__report_enabled_checked;
    __Vtask_uvm_report_warning__33__report_enabled_checked = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__34__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__35__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((0x02000000U == radix)) {
        VL_NULL_CHECK(this->__PVT__knobs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1060)->__PVT__dec_radix 
            = prefix;
    } else if ((0x01000000U == radix)) {
        VL_NULL_CHECK(this->__PVT__knobs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1061)->__PVT__bin_radix 
            = prefix;
    } else if ((0x06000000U == radix)) {
        VL_NULL_CHECK(this->__PVT__knobs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1062)->__PVT__oct_radix 
            = prefix;
    } else if ((0x03000000U == radix)) {
        VL_NULL_CHECK(this->__PVT__knobs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1063)->__PVT__unsigned_radix 
            = prefix;
    } else if ((0x07000000U == radix)) {
        VL_NULL_CHECK(this->__PVT__knobs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1064)->__PVT__hex_radix 
            = prefix;
    } else if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__29__id = "PRINTER_UNKNOWN_RADIX"s;
                    __Vfunc_uvm_report_enabled__29__severity = 1U;
                    __Vfunc_uvm_report_enabled__29__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__30__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__30__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                       ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__31__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__31__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                       ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__29__verbosity, (IData)(__Vfunc_uvm_report_enabled__29__severity), __Vfunc_uvm_report_enabled__29__id, __Vtask_uvm_report_enabled__32__Vfuncout);
                    __Vfunc_uvm_report_enabled__29__Vfuncout 
                        = __Vtask_uvm_report_enabled__32__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__29__Vfuncout))) {
        __Vtask_uvm_report_warning__33__report_enabled_checked = 1U;
        __Vtask_uvm_report_warning__33__context_name = ""s;
        __Vtask_uvm_report_warning__33__line = 0x00000429U;
        __Vtask_uvm_report_warning__33__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh"s;
        __Vtask_uvm_report_warning__33__verbosity = 0U;
        __Vtask_uvm_report_warning__33__message = VL_SFORMATF_N_NX("set_radix_string called with unsupported radix %s",0,
                                                                   28,
                                                                   radix) ;
        __Vtask_uvm_report_warning__33__id = "PRINTER_UNKNOWN_RADIX"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__34__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__34__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__35__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__35__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__33__id, __Vtask_uvm_report_warning__33__message, __Vtask_uvm_report_warning__33__verbosity, __Vtask_uvm_report_warning__33__filename, __Vtask_uvm_report_warning__33__line, __Vtask_uvm_report_warning__33__context_name, (IData)(__Vtask_uvm_report_warning__33__report_enabled_checked));
    }
}

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_radix_string(Vdma__Syms* __restrict vlSymsp, IData/*27:0*/ radix, std::string &get_radix_string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_radix_string\n"); );
    // Body
    get_radix_string__Vfuncrtn = ((0x02000000U == radix)
                                   ? VL_NULL_CHECK(this->__PVT__knobs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1068)
                                  ->__PVT__dec_radix
                                   : ((0x01000000U 
                                       == radix) ? VL_NULL_CHECK(this->__PVT__knobs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1069)
                                      ->__PVT__bin_radix
                                       : ((0x06000000U 
                                           == radix)
                                           ? VL_NULL_CHECK(this->__PVT__knobs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1070)
                                          ->__PVT__oct_radix
                                           : ((0x03000000U 
                                               == radix)
                                               ? VL_NULL_CHECK(this->__PVT__knobs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1071)
                                              ->__PVT__unsigned_radix
                                               : ((0x07000000U 
                                                   == radix)
                                                   ? VL_NULL_CHECK(this->__PVT__knobs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1072)
                                                  ->__PVT__hex_radix
                                                   : ""s)))));
}

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_default_radix(Vdma__Syms* __restrict vlSymsp, IData/*27:0*/ radix) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_default_radix\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__knobs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1077)->__PVT__default_radix 
        = radix;
}

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_default_radix(Vdma__Syms* __restrict vlSymsp, IData/*27:0*/ &get_default_radix__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_default_radix\n"); );
    // Body
    get_default_radix__Vfuncrtn = VL_NULL_CHECK(this->__PVT__knobs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1080)
        ->__PVT__default_radix;
}

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_root_enabled(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ enabled) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_root_enabled\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__knobs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1084)->__PVT__show_root 
        = enabled;
}

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_root_enabled(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &get_root_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_root_enabled\n"); );
    // Body
    get_root_enabled__Vfuncrtn = VL_NULL_CHECK(this->__PVT__knobs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1087)
        ->__PVT__show_root;
}

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_recursion_policy(Vdma__Syms* __restrict vlSymsp, IData/*27:0*/ policy) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_recursion_policy\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__knobs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1091)->__PVT__recursion_policy 
        = policy;
}

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_recursion_policy(Vdma__Syms* __restrict vlSymsp, IData/*27:0*/ &get_recursion_policy__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_recursion_policy\n"); );
    // Body
    get_recursion_policy__Vfuncrtn = VL_NULL_CHECK(this->__PVT__knobs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1094)
        ->__PVT__recursion_policy;
}

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_max_depth(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ depth) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_max_depth\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__knobs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1098)->__PVT__depth 
        = depth;
}

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_max_depth(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &get_max_depth__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_max_depth\n"); );
    // Body
    get_max_depth__Vfuncrtn = VL_NULL_CHECK(this->__PVT__knobs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1101)
        ->__PVT__depth;
}

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_file(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ fl) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_file\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__knobs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1105)->__PVT__mcd 
        = fl;
}

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_file(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &get_file__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_file\n"); );
    // Body
    get_file__Vfuncrtn = VL_NULL_CHECK(this->__PVT__knobs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1108)
        ->__PVT__mcd;
}

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_line_prefix(Vdma__Syms* __restrict vlSymsp, std::string prefix) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_line_prefix\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__knobs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1112)->__PVT__prefix 
        = prefix;
}

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_line_prefix(Vdma__Syms* __restrict vlSymsp, std::string &get_line_prefix__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_line_prefix\n"); );
    // Body
    get_line_prefix__Vfuncrtn = VL_NULL_CHECK(this->__PVT__knobs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1115)
        ->__PVT__prefix;
}

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_begin_elements(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ elements) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_begin_elements\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__knobs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1119)->__PVT__begin_elements 
        = elements;
}

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_begin_elements(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &get_begin_elements__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_begin_elements\n"); );
    // Body
    get_begin_elements__Vfuncrtn = VL_NULL_CHECK(this->__PVT__knobs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1122)
        ->__PVT__begin_elements;
}

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_end_elements(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ elements) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_set_end_elements\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__knobs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1126)->__PVT__end_elements 
        = elements;
}

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_end_elements(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &get_end_elements__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_end_elements\n"); );
    // Body
    get_end_elements__Vfuncrtn = VL_NULL_CHECK(this->__PVT__knobs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1129)
        ->__PVT__end_elements;
}

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_bottom_element(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_printer_element> &get_bottom_element__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_bottom_element\n"); );
    // Body
    get_bottom_element__Vfuncrtn = (VL_LTS_III(32, 0U, this->__PVT__m_element_stack.size())
                                     ? this->__PVT__m_element_stack.at(0U)
                                     : VlNull{});
}

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_top_element(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_printer_element> &get_top_element__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_top_element\n"); );
    // Body
    get_top_element__Vfuncrtn = (VL_LTS_III(32, 0U, this->__PVT__m_element_stack.size())
                                  ? this->__PVT__m_element_stack.atBack(0U)
                                  : VlNull{});
}

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_push_element(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, std::string type_name, std::string size, std::string value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_push_element\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_printer_element> __Vfunc_get_unused_element__37__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_printer_element> __Vfunc_get_top_element__38__Vfuncout;
    // Body
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_printer_element> element;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_printer_element> parent;
    this->__VnoInFunc_get_unused_element(vlProcess, vlSymsp, __Vfunc_get_unused_element__37__Vfuncout);
    element = __Vfunc_get_unused_element__37__Vfuncout;
    this->__VnoInFunc_get_top_element(vlSymsp, __Vfunc_get_top_element__38__Vfuncout);
    parent = __Vfunc_get_top_element__38__Vfuncout;
    VL_NULL_CHECK(element, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1166)->__VnoInFunc_set(vlSymsp, name, type_name, size, value);
    if ((VlNull{} != parent)) {
        VL_NULL_CHECK(parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1167)->__VnoInFunc_add_child(vlSymsp, element);
    }
    this->__PVT__m_element_stack.push_back(element);
}

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_pop_element(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_pop_element\n"); );
    // Body
    if (VL_LTS_III(32, 1U, this->__PVT__m_element_stack.size())) {
        (void)this->__PVT__m_element_stack.pop_back();
    }
}

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_unused_element(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_printer_element> &get_unused_element__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_get_unused_element\n"); );
    // Body
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_printer_element> element;
    element = (VL_LTS_III(32, 0U, this->__PVT__m_recycled_elements.size())
                ? this->__PVT__m_recycled_elements.pop_back()
                : VL_NEW(Vdma_uvm_pkg__03a__03auvm_printer_element, vlProcess, vlSymsp, ""s));
    get_unused_element__Vfuncrtn = element;
}

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_array_header(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ size, std::string arraytype, CData/*7:0*/ scope_separator) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_array_header\n"); );
    // Body
    this->__VnoInFunc_push_element(vlProcess, vlSymsp, name, arraytype, VL_SFORMATF_N_NX("%0d",0,
                                                                                32,
                                                                                size) , "-"s);
}

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_array_footer(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ size) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_array_footer\n"); );
    // Body
    this->__VnoInFunc_pop_element(vlSymsp);
}

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_array_range(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ min, IData/*31:0*/ max) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_array_range\n"); );
    // Body
    std::string tmpstr;
    {
        if (((0xffffffffU == min) & (0xffffffffU == max))) {
            goto __Vlabel0;
        }
        if ((0xffffffffU == min)) {
            min = max;
        }
        if ((0xffffffffU == max)) {
            max = min;
        }
        if (VL_LTS_III(32, max, min)) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_print_generic_element(vlProcess, vlSymsp, "..."s, "..."s, "..."s, "..."s);
        __Vlabel0: ;
    }
}

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_object_header(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> value, CData/*7:0*/ scope_separator) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_object_header\n"); );
    // Locals
    std::string __Vtask_get_type_name__46__Vfuncout;
    CData/*0:0*/ __Vfunc_get_id_enabled__47__Vfuncout;
    __Vfunc_get_id_enabled__47__Vfuncout = 0;
    std::string __Vfunc_uvm_object_value_str__48__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> __Vfunc_uvm_object_value_str__48__v;
    IData/*31:0*/ __Vtask_get_inst_id__49__Vfuncout;
    __Vtask_get_inst_id__49__Vfuncout = 0;
    // Body
    if ((""s == name)) {
        name = "<unnamed>"s;
    }
    this->__VnoInFunc_push_element(vlProcess, vlSymsp, name, 
                                   VL_CVT_PACK_STR_NN(
                                                      ((VlNull{} 
                                                        != value)
                                                        ? 
                                                       ([&]() {
                        VL_NULL_CHECK(value, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1245)
                                                        ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__46__Vfuncout);
                    }(), __Vtask_get_type_name__46__Vfuncout)
                                                        : "object"s)), "-"s, 
                                   VL_CVT_PACK_STR_NN(
                                                      (([&]() {
                        this->__VnoInFunc_get_id_enabled(vlSymsp, __Vfunc_get_id_enabled__47__Vfuncout);
                    }(), (IData)(__Vfunc_get_id_enabled__47__Vfuncout))
                                                        ? 
                                                       ([&]() {
                        __Vfunc_uvm_object_value_str__48__v 
                            = value;
                        {
                            if ((VlNull{} == __Vfunc_uvm_object_value_str__48__v)) {
                                __Vfunc_uvm_object_value_str__48__Vfuncout = "<null>"s;
                                goto __Vlabel0;
                            }
                            __Vfunc_uvm_object_value_str__48__Vfuncout 
                                = VL_SFORMATF_N_NX("%0d",0,
                                                   32,
                                                   ([&]() {
                                            VL_NULL_CHECK(__Vfunc_uvm_object_value_str__48__v, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_misc.svh", 198)
                                                    ->__VnoInFunc_get_inst_id(vlSymsp, __Vtask_get_inst_id__49__Vfuncout);
                                        }(), __Vtask_get_inst_id__49__Vfuncout)) ;
                            __Vfunc_uvm_object_value_str__48__Vfuncout 
                                = VL_CONCATN_NNN("@"s, __Vfunc_uvm_object_value_str__48__Vfuncout);
                            __Vlabel0: ;
                        }
                    }(), __Vfunc_uvm_object_value_str__48__Vfuncout)
                                                        : "-"s)));
}

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_object(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> value, CData/*7:0*/ scope_separator) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_object\n"); );
    // Locals
    IData/*27:0*/ __Vfunc_get_recursion_policy__50__Vfuncout;
    __Vfunc_get_recursion_policy__50__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_max_depth__51__Vfuncout;
    __Vfunc_get_max_depth__51__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_active_object_depth__52__Vfuncout;
    __Vfunc_get_active_object_depth__52__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_first_child__57__Vfuncout;
    __Vtask_get_first_child__57__Vfuncout = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> __Vtask_get_child__58__Vfuncout;
    IData/*31:0*/ __Vtask_get_next_child__60__Vfuncout;
    __Vtask_get_next_child__60__Vfuncout = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_field_op> __Vfunc_m_get_available_op__61__Vfuncout;
    CData/*0:0*/ __Vtask_user_hook_enabled__64__Vfuncout;
    __Vtask_user_hook_enabled__64__Vfuncout = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> __Vtask_pop_active_object__68__Vfuncout;
    // Body
    std::string unnamedblk42__DOT__name;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> comp;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> child_comp;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_field_op> field_op;
    IData/*27:0*/ recursion_policy;
    recursion_policy = 0;
    this->__VnoInFunc_get_recursion_policy(vlSymsp, __Vfunc_get_recursion_policy__50__Vfuncout);
    recursion_policy = __Vfunc_get_recursion_policy__50__Vfuncout;
    if ((((VlNull{} == value) | (0x00040000U == recursion_policy)) 
         || (([&]() {
                        this->__VnoInFunc_get_max_depth(vlSymsp, __Vfunc_get_max_depth__51__Vfuncout);
                    }(), __Vfunc_get_max_depth__51__Vfuncout) 
             == ([&]() {
                        this->__VnoInFunc_get_active_object_depth(vlSymsp, __Vfunc_get_active_object_depth__52__Vfuncout);
                    }(), __Vfunc_get_active_object_depth__52__Vfuncout)))) {
        this->__VnoInFunc_print_object_header(vlProcess, vlSymsp, name, value, scope_separator);
        this->__VnoInFunc_pop_element(vlSymsp);
    } else {
        this->__VnoInFunc_push_active_object(vlProcess, vlSymsp, value);
        this->__PVT__m_recur_states.at(value).at(recursion_policy) = 1U;
        this->__VnoInFunc_print_object_header(vlProcess, vlSymsp, name, value, scope_separator);
        if (VL_CAST_DYNAMIC(value, comp)) {
            if ((0U != ([&]() {
                            VL_NULL_CHECK(comp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1276)
                        ->__VnoInFunc_get_first_child(vlSymsp, unnamedblk42__DOT__name, __Vtask_get_first_child__57__Vfuncout);
                        }(), __Vtask_get_first_child__57__Vfuncout))) {
                do {
                    VL_NULL_CHECK(comp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1278)->__VnoInFunc_get_child(vlProcess, vlSymsp, unnamedblk42__DOT__name, __Vtask_get_child__58__Vfuncout);
                    child_comp = __Vtask_get_child__58__Vfuncout;
                    if (VL_NULL_CHECK(child_comp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1279)
                        ->__PVT__print_enabled) {
                        this->__VnoInFunc_print_object(vlProcess, vlSymsp, unnamedblk42__DOT__name, child_comp, 0x2eU);
                    }
                } while ((0U != ([&]() {
                                VL_NULL_CHECK(comp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1281)
                                 ->__VnoInFunc_get_next_child(vlSymsp, unnamedblk42__DOT__name, __Vtask_get_next_child__60__Vfuncout);
                            }(), __Vtask_get_next_child__60__Vfuncout)));
            }
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_field_op__Vclpkg.__VnoInFunc_m_get_available_op(vlProcess, vlSymsp, __Vfunc_m_get_available_op__61__Vfuncout);
        field_op = __Vfunc_m_get_available_op__61__Vfuncout;
        VL_NULL_CHECK(field_op, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1285)->__VnoInFunc_set(vlProcess, vlSymsp, 0x00000010U, 
                                                                                VlClassRef<Vdma_uvm_pkg__03a__03auvm_printer>{this}, VlNull{});
        VL_NULL_CHECK(value, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1286)->__VnoInFunc_do_execute_op(vlProcess, vlSymsp, field_op);
        if (([&]() {
                    VL_NULL_CHECK(field_op, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1287)
             ->__VnoInFunc_user_hook_enabled(vlProcess, vlSymsp, __Vtask_user_hook_enabled__64__Vfuncout);
                }(), (IData)(__Vtask_user_hook_enabled__64__Vfuncout))) {
            VL_NULL_CHECK(value, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1288)->__VnoInFunc_do_print(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vdma_uvm_pkg__03a__03auvm_printer>{this});
        }
        VL_NULL_CHECK(field_op, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1289)->__VnoInFunc_m_recycle(vlSymsp);
        this->__VnoInFunc_pop_element(vlSymsp);
        this->__PVT__m_recur_states.at(value).at(recursion_policy) = 2U;
        this->__VnoInFunc_pop_active_object(vlProcess, vlSymsp, __Vtask_pop_active_object__68__Vfuncout);
    }
}

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_istop(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &istop__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_istop\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_get_active_object_depth__69__Vfuncout;
    __Vfunc_get_active_object_depth__69__Vfuncout = 0;
    // Body
    istop__Vfuncrtn = (0U == ([&]() {
                this->__VnoInFunc_get_active_object_depth(vlSymsp, __Vfunc_get_active_object_depth__69__Vfuncout);
            }(), __Vfunc_get_active_object_depth__69__Vfuncout));
}

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_generic(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, std::string type_name, IData/*31:0*/ size, std::string value, CData/*7:0*/ scope_separator) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_generic\n"); );
    // Body
    this->__VnoInFunc_push_element(vlProcess, vlSymsp, name, type_name, 
                                   VL_CVT_PACK_STR_NN(
                                                      ((0xfffffffeU 
                                                        == size)
                                                        ? "..."s
                                                        : VL_SFORMATF_N_NX("%0d",0,
                                                                           32,
                                                                           size) )), value);
    this->__VnoInFunc_pop_element(vlSymsp);
}

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_generic_element(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, std::string type_name, std::string size, std::string value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_generic_element\n"); );
    // Body
    this->__VnoInFunc_push_element(vlProcess, vlSymsp, name, type_name, size, value);
    this->__VnoInFunc_pop_element(vlSymsp);
}

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_time(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ value, CData/*7:0*/ scope_separator) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_time\n"); );
    // Body
    this->__VnoInFunc_print_field_int(vlProcess, vlSymsp, name, value, 0x00000040U, 0x09000000U, (IData)(scope_separator), ""s);
    vlSymsp->TOP.__Vm_traceActivity[2U] = 1U;
}

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_string(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, std::string value, CData/*7:0*/ scope_separator) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_string\n"); );
    // Body
    this->__VnoInFunc_push_element(vlProcess, vlSymsp, name, "string"s, VL_SFORMATF_N_NX("%0d",0,
                                                                                32,
                                                                                VL_LEN_IN(value)) , 
                                   VL_CVT_PACK_STR_NN(
                                                      ((""s 
                                                        == value)
                                                        ? "\"\""s
                                                        : value)));
    this->__VnoInFunc_pop_element(vlSymsp);
}

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_object_printed(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> value, IData/*27:0*/ recursion, IData/*31:0*/ &object_printed__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_object_printed\n"); );
    // Body
    {
        if ((! this->__PVT__m_recur_states.exists(value))) {
            object_printed__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if (this->__PVT__m_recur_states.at(value).exists(recursion)) {
            object_printed__Vfuncrtn = this->__PVT__m_recur_states
                .at(value).at(recursion);
        } else {
            object_printed__Vfuncrtn = 0U;
        }
        __Vlabel0: ;
    }
}

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_real(Vdma__Syms* __restrict vlSymsp, std::string name, double value, CData/*7:0*/ scope_separator) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_real\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_push_element(vlProcess, vlSymsp, name, "real"s, "64"s, VL_SFORMATF_N_NX("%f",0,
                                                                                64,
                                                                                value) );
    this->__VnoInFunc_pop_element(vlSymsp);
}

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_index_string(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ index, std::string name, std::string &index_string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_index_string\n"); );
    // Body
    index_string__Vfuncrtn = VL_SFORMATF_N_NX("%0d",0,
                                              32,index) ;
    index_string__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                           VL_CONCATN_NNN(name, "["s), index_string__Vfuncrtn), "]"s);
}

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__80__Vfuncout;
    __Vfunc___VBasicRand__80__Vfuncout = 0;
    // Body
    Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__80__Vfuncout);
            }(), __Vfunc___VBasicRand__80__Vfuncout));
}

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc___VBasicRand(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vdma_uvm_pkg__03a__03auvm_printer::_ctor_var_reset(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_flushed = 0;
    __PVT__m_recur_states.atDefault().atDefault() = 0;
}

Vdma_uvm_pkg__03a__03auvm_printer::~Vdma_uvm_pkg__03a__03auvm_printer() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_printer>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vdma_uvm_pkg__03a__03auvm_printer::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vdma_uvm_pkg__03a__03auvm_printer::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_printer::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_flushed:" + VL_TO_STRING(__PVT__m_flushed);
    out += ", knobs:" + VL_TO_STRING(__PVT__knobs);
    out += ", m_recur_states:" + VL_TO_STRING(__PVT__m_recur_states);
    out += ", m_element_stack:" + VL_TO_STRING(__PVT__m_element_stack);
    out += ", m_recycled_elements:" + VL_TO_STRING(__PVT__m_recycled_elements);
    out += ", m_string:" + VL_TO_STRING(__PVT__m_string);
    out += ", "+ Vdma_uvm_pkg__03a__03auvm_policy::to_string_middle();
    return (out);
}
