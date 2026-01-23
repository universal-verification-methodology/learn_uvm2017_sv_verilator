// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclass_hierarchy.h for the primary calling header

#include "Vclass_hierarchy__pch.h"

void Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer__Vclpkg::__VnoInFunc_get_type(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_registry__pi24> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_registry__pi24> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi24__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer__Vclpkg::__VnoInFunc_type_name(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_comparer"s;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer__Vclpkg::__VnoInFunc_set_default(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer> comparer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer__Vclpkg::__VnoInFunc_set_default\n"); );
    // Locals
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__1__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> coreservice;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__1__Vfuncout);
    coreservice = __Vfunc_get__1__Vfuncout;
    VL_NULL_CHECK(coreservice, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_comparer.svh", 234)->__VnoInFunc_set_default_comparer(vlSymsp, comparer);
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer__Vclpkg::__VnoInFunc_get_default(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer> &get_default__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer__Vclpkg::__VnoInFunc_get_default\n"); );
    // Locals
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__3__Vfuncout;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer> __Vtask_get_default_comparer__4__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> coreservice;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__3__Vfuncout);
    coreservice = __Vfunc_get__3__Vfuncout;
    VL_NULL_CHECK(coreservice, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_comparer.svh", 241)->__VnoInFunc_get_default_comparer(vlSymsp, __Vtask_get_default_comparer__4__Vfuncout);
    get_default__Vfuncrtn = __Vtask_get_default_comparer__4__Vfuncout;
}

std::string VL_TO_STRING(const Vclass_hierarchy_state_info_t__struct__0& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer__Vclpkg::VL_TO_STRING\n"); );
    // Body
    std::string out;
    out += "'{state:" + VL_TO_STRING(obj.__PVT__state);
    out += ", ret_val:" + VL_TO_STRING(obj.__PVT__ret_val);
    out += "}";
    return (out);
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_get_object_type(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_registry__pi24> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi24__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_create(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer> tmp;
    tmp = ((""s == name) ? VL_NEW(Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer, vlProcess, vlSymsp, ""s)
            : VL_NEW(Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_get_type_name(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_comparer"s;
}

Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name)
    : Vclass_hierarchy_uvm_pkg__03a__03auvm_policy(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__result = 0U;
    this->__PVT__check_type = 1U;
    this->__PVT__miscompares = ""s;
    this->__PVT__sev = 0U;
    this->__PVT__verbosity = 0x00000064U;
    this->__PVT__show_max = 1U;
    this->__PVT__policy = 0U;
    ;
    this->__PVT__m_threshold = 1U;
}

extern const VlWide<128>/*4095:0*/ Vclass_hierarchy__ConstPool__CONST_h8cd26482_0;

void Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_compare_field(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name, VlWide<128>/*4095:0*/ lhs, VlWide<128>/*4095:0*/ rhs, IData/*31:0*/ size, IData/*27:0*/ radix, CData/*0:0*/ &compare_field__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_compare_field\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_compare_field_int__4__Vfuncout;
    __Vfunc_compare_field_int__4__Vfuncout = 0;
    VlWide<128>/*4095:0*/ __Vtemp_1;
    VlWide<128>/*4095:0*/ __Vtemp_4;
    VlWide<128>/*4095:0*/ __Vtemp_5;
    VlWide<128>/*4095:0*/ __Vtemp_6;
    VlWide<128>/*4095:0*/ __Vtemp_7;
    VlWide<128>/*4095:0*/ __Vtemp_8;
    VlWide<128>/*4095:0*/ __Vtemp_9;
    VlWide<128>/*4095:0*/ __Vtemp_10;
    VlWide<128>/*4095:0*/ __Vtemp_11;
    VlWide<128>/*4095:0*/ __Vtemp_12;
    VlWide<128>/*4095:0*/ __Vtemp_13;
    VlWide<128>/*4095:0*/ __Vtemp_14;
    VlWide<128>/*4095:0*/ __Vtemp_15;
    VlWide<128>/*4095:0*/ __Vtemp_16;
    VlWide<128>/*4095:0*/ __Vtemp_17;
    IData/*31:0*/ __Vdeeptemp_h87cfe50e__0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlWide<128>/*4095:0*/ mask;
    VL_ZERO_W(4096, mask);
    std::string msg;
    {
        if (VL_GTES_III(32, 0x00000040U, size)) {
            this->__VnoInFunc_compare_field_int(vlProcess, vlSymsp, name, 
                                                (((QData)((IData)(
                                                                  lhs[1U])) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(
                                                                   lhs[0U]))), 
                                                (((QData)((IData)(
                                                                  rhs[1U])) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(
                                                                   rhs[0U]))), size, radix, __Vfunc_compare_field_int__4__Vfuncout);
            compare_field__Vfuncrtn = __Vfunc_compare_field_int__4__Vfuncout;
            goto __Vlabel0;
        }
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x0000007fU)) {
            mask[__Vilp1] = Vclass_hierarchy__ConstPool__CONST_h8cd26482_0[__Vilp1];
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        VL_SHIFTR_WWI(4096,4096,32, __Vtemp_1, mask, 
                      ((IData)(0x00001000U) - size));
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0x0000007fU)) {
            mask[__Vilp2] = __Vtemp_1[__Vilp2];
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        __Vdeeptemp_h87cfe50e__0 = ((((((((((((((((
                                                   (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((lhs[0U] 
                                                                                & mask[0U]) 
                                                                                ^ 
                                                                                (rhs[0U] 
                                                                                & mask[0U])) 
                                                                                | ((lhs[1U] 
                                                                                & mask[1U]) 
                                                                                ^ 
                                                                                (rhs[1U] 
                                                                                & mask[1U]))) 
                                                                                | ((lhs[2U] 
                                                                                & mask[2U]) 
                                                                                ^ 
                                                                                (rhs[2U] 
                                                                                & mask[2U]))) 
                                                                                | ((lhs[3U] 
                                                                                & mask[3U]) 
                                                                                ^ 
                                                                                (rhs[3U] 
                                                                                & mask[3U]))) 
                                                                                | ((lhs[4U] 
                                                                                & mask[4U]) 
                                                                                ^ 
                                                                                (rhs[4U] 
                                                                                & mask[4U]))) 
                                                                                | ((lhs[5U] 
                                                                                & mask[5U]) 
                                                                                ^ 
                                                                                (rhs[5U] 
                                                                                & mask[5U]))) 
                                                                                | ((lhs[6U] 
                                                                                & mask[6U]) 
                                                                                ^ 
                                                                                (rhs[6U] 
                                                                                & mask[6U]))) 
                                                                                | ((lhs[7U] 
                                                                                & mask[7U]) 
                                                                                ^ 
                                                                                (rhs[7U] 
                                                                                & mask[7U]))) 
                                                                                | ((lhs[8U] 
                                                                                & mask[8U]) 
                                                                                ^ 
                                                                                (rhs[8U] 
                                                                                & mask[8U]))) 
                                                                                | ((lhs[9U] 
                                                                                & mask[9U]) 
                                                                                ^ 
                                                                                (rhs[9U] 
                                                                                & mask[9U]))) 
                                                                                | ((lhs[0x0000000aU] 
                                                                                & mask[0x0000000aU]) 
                                                                                ^ 
                                                                                (rhs[0x0000000aU] 
                                                                                & mask[0x0000000aU]))) 
                                                                                | ((lhs[0x0000000bU] 
                                                                                & mask[0x0000000bU]) 
                                                                                ^ 
                                                                                (rhs[0x0000000bU] 
                                                                                & mask[0x0000000bU]))) 
                                                                                | ((lhs[0x0000000cU] 
                                                                                & mask[0x0000000cU]) 
                                                                                ^ 
                                                                                (rhs[0x0000000cU] 
                                                                                & mask[0x0000000cU]))) 
                                                                                | ((lhs[0x0000000dU] 
                                                                                & mask[0x0000000dU]) 
                                                                                ^ 
                                                                                (rhs[0x0000000dU] 
                                                                                & mask[0x0000000dU]))) 
                                                                                | ((lhs[0x0000000eU] 
                                                                                & mask[0x0000000eU]) 
                                                                                ^ 
                                                                                (rhs[0x0000000eU] 
                                                                                & mask[0x0000000eU]))) 
                                                                                | ((lhs[0x0000000fU] 
                                                                                & mask[0x0000000fU]) 
                                                                                ^ 
                                                                                (rhs[0x0000000fU] 
                                                                                & mask[0x0000000fU]))) 
                                                                                | ((lhs[0x00000010U] 
                                                                                & mask[0x00000010U]) 
                                                                                ^ 
                                                                                (rhs[0x00000010U] 
                                                                                & mask[0x00000010U]))) 
                                                                                | ((lhs[0x00000011U] 
                                                                                & mask[0x00000011U]) 
                                                                                ^ 
                                                                                (rhs[0x00000011U] 
                                                                                & mask[0x00000011U]))) 
                                                                                | ((lhs[0x00000012U] 
                                                                                & mask[0x00000012U]) 
                                                                                ^ 
                                                                                (rhs[0x00000012U] 
                                                                                & mask[0x00000012U]))) 
                                                                                | ((lhs[0x00000013U] 
                                                                                & mask[0x00000013U]) 
                                                                                ^ 
                                                                                (rhs[0x00000013U] 
                                                                                & mask[0x00000013U]))) 
                                                                                | ((lhs[0x00000014U] 
                                                                                & mask[0x00000014U]) 
                                                                                ^ 
                                                                                (rhs[0x00000014U] 
                                                                                & mask[0x00000014U]))) 
                                                                                | ((lhs[0x00000015U] 
                                                                                & mask[0x00000015U]) 
                                                                                ^ 
                                                                                (rhs[0x00000015U] 
                                                                                & mask[0x00000015U]))) 
                                                                                | ((lhs[0x00000016U] 
                                                                                & mask[0x00000016U]) 
                                                                                ^ 
                                                                                (rhs[0x00000016U] 
                                                                                & mask[0x00000016U]))) 
                                                                                | ((lhs[0x00000017U] 
                                                                                & mask[0x00000017U]) 
                                                                                ^ 
                                                                                (rhs[0x00000017U] 
                                                                                & mask[0x00000017U]))) 
                                                                                | ((lhs[0x00000018U] 
                                                                                & mask[0x00000018U]) 
                                                                                ^ 
                                                                                (rhs[0x00000018U] 
                                                                                & mask[0x00000018U]))) 
                                                                                | ((lhs[0x00000019U] 
                                                                                & mask[0x00000019U]) 
                                                                                ^ 
                                                                                (rhs[0x00000019U] 
                                                                                & mask[0x00000019U]))) 
                                                                                | ((lhs[0x0000001aU] 
                                                                                & mask[0x0000001aU]) 
                                                                                ^ 
                                                                                (rhs[0x0000001aU] 
                                                                                & mask[0x0000001aU]))) 
                                                                                | ((lhs[0x0000001bU] 
                                                                                & mask[0x0000001bU]) 
                                                                                ^ 
                                                                                (rhs[0x0000001bU] 
                                                                                & mask[0x0000001bU]))) 
                                                                                | ((lhs[0x0000001cU] 
                                                                                & mask[0x0000001cU]) 
                                                                                ^ 
                                                                                (rhs[0x0000001cU] 
                                                                                & mask[0x0000001cU]))) 
                                                                                | ((lhs[0x0000001dU] 
                                                                                & mask[0x0000001dU]) 
                                                                                ^ 
                                                                                (rhs[0x0000001dU] 
                                                                                & mask[0x0000001dU]))) 
                                                                                | ((lhs[0x0000001eU] 
                                                                                & mask[0x0000001eU]) 
                                                                                ^ 
                                                                                (rhs[0x0000001eU] 
                                                                                & mask[0x0000001eU]))) 
                                                                                | ((lhs[0x0000001fU] 
                                                                                & mask[0x0000001fU]) 
                                                                                ^ 
                                                                                (rhs[0x0000001fU] 
                                                                                & mask[0x0000001fU]))) 
                                                                                | ((lhs[0x00000020U] 
                                                                                & mask[0x00000020U]) 
                                                                                ^ 
                                                                                (rhs[0x00000020U] 
                                                                                & mask[0x00000020U]))) 
                                                                                | ((lhs[0x00000021U] 
                                                                                & mask[0x00000021U]) 
                                                                                ^ 
                                                                                (rhs[0x00000021U] 
                                                                                & mask[0x00000021U]))) 
                                                                                | ((lhs[0x00000022U] 
                                                                                & mask[0x00000022U]) 
                                                                                ^ 
                                                                                (rhs[0x00000022U] 
                                                                                & mask[0x00000022U]))) 
                                                                                | ((lhs[0x00000023U] 
                                                                                & mask[0x00000023U]) 
                                                                                ^ 
                                                                                (rhs[0x00000023U] 
                                                                                & mask[0x00000023U]))) 
                                                                                | ((lhs[0x00000024U] 
                                                                                & mask[0x00000024U]) 
                                                                                ^ 
                                                                                (rhs[0x00000024U] 
                                                                                & mask[0x00000024U]))) 
                                                                                | ((lhs[0x00000025U] 
                                                                                & mask[0x00000025U]) 
                                                                                ^ 
                                                                                (rhs[0x00000025U] 
                                                                                & mask[0x00000025U]))) 
                                                                                | ((lhs[0x00000026U] 
                                                                                & mask[0x00000026U]) 
                                                                                ^ 
                                                                                (rhs[0x00000026U] 
                                                                                & mask[0x00000026U]))) 
                                                                                | ((lhs[0x00000027U] 
                                                                                & mask[0x00000027U]) 
                                                                                ^ 
                                                                                (rhs[0x00000027U] 
                                                                                & mask[0x00000027U]))) 
                                                                                | ((lhs[0x00000028U] 
                                                                                & mask[0x00000028U]) 
                                                                                ^ 
                                                                                (rhs[0x00000028U] 
                                                                                & mask[0x00000028U]))) 
                                                                                | ((lhs[0x00000029U] 
                                                                                & mask[0x00000029U]) 
                                                                                ^ 
                                                                                (rhs[0x00000029U] 
                                                                                & mask[0x00000029U]))) 
                                                                                | ((lhs[0x0000002aU] 
                                                                                & mask[0x0000002aU]) 
                                                                                ^ 
                                                                                (rhs[0x0000002aU] 
                                                                                & mask[0x0000002aU]))) 
                                                                                | ((lhs[0x0000002bU] 
                                                                                & mask[0x0000002bU]) 
                                                                                ^ 
                                                                                (rhs[0x0000002bU] 
                                                                                & mask[0x0000002bU]))) 
                                                                                | ((lhs[0x0000002cU] 
                                                                                & mask[0x0000002cU]) 
                                                                                ^ 
                                                                                (rhs[0x0000002cU] 
                                                                                & mask[0x0000002cU]))) 
                                                                                | ((lhs[0x0000002dU] 
                                                                                & mask[0x0000002dU]) 
                                                                                ^ 
                                                                                (rhs[0x0000002dU] 
                                                                                & mask[0x0000002dU]))) 
                                                                                | ((lhs[0x0000002eU] 
                                                                                & mask[0x0000002eU]) 
                                                                                ^ 
                                                                                (rhs[0x0000002eU] 
                                                                                & mask[0x0000002eU]))) 
                                                                                | ((lhs[0x0000002fU] 
                                                                                & mask[0x0000002fU]) 
                                                                                ^ 
                                                                                (rhs[0x0000002fU] 
                                                                                & mask[0x0000002fU]))) 
                                                                                | ((lhs[0x00000030U] 
                                                                                & mask[0x00000030U]) 
                                                                                ^ 
                                                                                (rhs[0x00000030U] 
                                                                                & mask[0x00000030U]))) 
                                                                                | ((lhs[0x00000031U] 
                                                                                & mask[0x00000031U]) 
                                                                                ^ 
                                                                                (rhs[0x00000031U] 
                                                                                & mask[0x00000031U]))) 
                                                                                | ((lhs[0x00000032U] 
                                                                                & mask[0x00000032U]) 
                                                                                ^ 
                                                                                (rhs[0x00000032U] 
                                                                                & mask[0x00000032U]))) 
                                                                                | ((lhs[0x00000033U] 
                                                                                & mask[0x00000033U]) 
                                                                                ^ 
                                                                                (rhs[0x00000033U] 
                                                                                & mask[0x00000033U]))) 
                                                                                | ((lhs[0x00000034U] 
                                                                                & mask[0x00000034U]) 
                                                                                ^ 
                                                                                (rhs[0x00000034U] 
                                                                                & mask[0x00000034U]))) 
                                                                                | ((lhs[0x00000035U] 
                                                                                & mask[0x00000035U]) 
                                                                                ^ 
                                                                                (rhs[0x00000035U] 
                                                                                & mask[0x00000035U]))) 
                                                                                | ((lhs[0x00000036U] 
                                                                                & mask[0x00000036U]) 
                                                                                ^ 
                                                                                (rhs[0x00000036U] 
                                                                                & mask[0x00000036U]))) 
                                                                                | ((lhs[0x00000037U] 
                                                                                & mask[0x00000037U]) 
                                                                                ^ 
                                                                                (rhs[0x00000037U] 
                                                                                & mask[0x00000037U]))) 
                                                                                | ((lhs[0x00000038U] 
                                                                                & mask[0x00000038U]) 
                                                                                ^ 
                                                                                (rhs[0x00000038U] 
                                                                                & mask[0x00000038U]))) 
                                                                                | ((lhs[0x00000039U] 
                                                                                & mask[0x00000039U]) 
                                                                                ^ 
                                                                                (rhs[0x00000039U] 
                                                                                & mask[0x00000039U]))) 
                                                                                | ((lhs[0x0000003aU] 
                                                                                & mask[0x0000003aU]) 
                                                                                ^ 
                                                                                (rhs[0x0000003aU] 
                                                                                & mask[0x0000003aU]))) 
                                                                                | ((lhs[0x0000003bU] 
                                                                                & mask[0x0000003bU]) 
                                                                                ^ 
                                                                                (rhs[0x0000003bU] 
                                                                                & mask[0x0000003bU]))) 
                                                                                | ((lhs[0x0000003cU] 
                                                                                & mask[0x0000003cU]) 
                                                                                ^ 
                                                                                (rhs[0x0000003cU] 
                                                                                & mask[0x0000003cU]))) 
                                                                                | ((lhs[0x0000003dU] 
                                                                                & mask[0x0000003dU]) 
                                                                                ^ 
                                                                                (rhs[0x0000003dU] 
                                                                                & mask[0x0000003dU]))) 
                                                                                | ((lhs[0x0000003eU] 
                                                                                & mask[0x0000003eU]) 
                                                                                ^ 
                                                                                (rhs[0x0000003eU] 
                                                                                & mask[0x0000003eU]))) 
                                                                                | ((lhs[0x0000003fU] 
                                                                                & mask[0x0000003fU]) 
                                                                                ^ 
                                                                                (rhs[0x0000003fU] 
                                                                                & mask[0x0000003fU]))) 
                                                                                | ((lhs[0x00000040U] 
                                                                                & mask[0x00000040U]) 
                                                                                ^ 
                                                                                (rhs[0x00000040U] 
                                                                                & mask[0x00000040U]))) 
                                                                                | ((lhs[0x00000041U] 
                                                                                & mask[0x00000041U]) 
                                                                                ^ 
                                                                                (rhs[0x00000041U] 
                                                                                & mask[0x00000041U]))) 
                                                                                | ((lhs[0x00000042U] 
                                                                                & mask[0x00000042U]) 
                                                                                ^ 
                                                                                (rhs[0x00000042U] 
                                                                                & mask[0x00000042U]))) 
                                                                                | ((lhs[0x00000043U] 
                                                                                & mask[0x00000043U]) 
                                                                                ^ 
                                                                                (rhs[0x00000043U] 
                                                                                & mask[0x00000043U]))) 
                                                                                | ((lhs[0x00000044U] 
                                                                                & mask[0x00000044U]) 
                                                                                ^ 
                                                                                (rhs[0x00000044U] 
                                                                                & mask[0x00000044U]))) 
                                                                                | ((lhs[0x00000045U] 
                                                                                & mask[0x00000045U]) 
                                                                                ^ 
                                                                                (rhs[0x00000045U] 
                                                                                & mask[0x00000045U]))) 
                                                                                | ((lhs[0x00000046U] 
                                                                                & mask[0x00000046U]) 
                                                                                ^ 
                                                                                (rhs[0x00000046U] 
                                                                                & mask[0x00000046U]))) 
                                                                                | ((lhs[0x00000047U] 
                                                                                & mask[0x00000047U]) 
                                                                                ^ 
                                                                                (rhs[0x00000047U] 
                                                                                & mask[0x00000047U]))) 
                                                                                | ((lhs[0x00000048U] 
                                                                                & mask[0x00000048U]) 
                                                                                ^ 
                                                                                (rhs[0x00000048U] 
                                                                                & mask[0x00000048U]))) 
                                                                                | ((lhs[0x00000049U] 
                                                                                & mask[0x00000049U]) 
                                                                                ^ 
                                                                                (rhs[0x00000049U] 
                                                                                & mask[0x00000049U]))) 
                                                                               | ((lhs[0x0000004aU] 
                                                                                & mask[0x0000004aU]) 
                                                                                ^ 
                                                                                (rhs[0x0000004aU] 
                                                                                & mask[0x0000004aU]))) 
                                                                              | ((lhs[0x0000004bU] 
                                                                                & mask[0x0000004bU]) 
                                                                                ^ 
                                                                                (rhs[0x0000004bU] 
                                                                                & mask[0x0000004bU]))) 
                                                                             | ((lhs[0x0000004cU] 
                                                                                & mask[0x0000004cU]) 
                                                                                ^ 
                                                                                (rhs[0x0000004cU] 
                                                                                & mask[0x0000004cU]))) 
                                                                            | ((lhs[0x0000004dU] 
                                                                                & mask[0x0000004dU]) 
                                                                               ^ 
                                                                               (rhs[0x0000004dU] 
                                                                                & mask[0x0000004dU]))) 
                                                                           | ((lhs[0x0000004eU] 
                                                                               & mask[0x0000004eU]) 
                                                                              ^ 
                                                                              (rhs[0x0000004eU] 
                                                                               & mask[0x0000004eU]))) 
                                                                          | ((lhs[0x0000004fU] 
                                                                              & mask[0x0000004fU]) 
                                                                             ^ 
                                                                             (rhs[0x0000004fU] 
                                                                              & mask[0x0000004fU]))) 
                                                                         | ((lhs[0x00000050U] 
                                                                             & mask[0x00000050U]) 
                                                                            ^ 
                                                                            (rhs[0x00000050U] 
                                                                             & mask[0x00000050U]))) 
                                                                        | ((lhs[0x00000051U] 
                                                                            & mask[0x00000051U]) 
                                                                           ^ 
                                                                           (rhs[0x00000051U] 
                                                                            & mask[0x00000051U]))) 
                                                                       | ((lhs[0x00000052U] 
                                                                           & mask[0x00000052U]) 
                                                                          ^ 
                                                                          (rhs[0x00000052U] 
                                                                           & mask[0x00000052U]))) 
                                                                      | ((lhs[0x00000053U] 
                                                                          & mask[0x00000053U]) 
                                                                         ^ 
                                                                         (rhs[0x00000053U] 
                                                                          & mask[0x00000053U]))) 
                                                                     | ((lhs[0x00000054U] 
                                                                         & mask[0x00000054U]) 
                                                                        ^ 
                                                                        (rhs[0x00000054U] 
                                                                         & mask[0x00000054U]))) 
                                                                    | ((lhs[0x00000055U] 
                                                                        & mask[0x00000055U]) 
                                                                       ^ 
                                                                       (rhs[0x00000055U] 
                                                                        & mask[0x00000055U]))) 
                                                                   | ((lhs[0x00000056U] 
                                                                       & mask[0x00000056U]) 
                                                                      ^ 
                                                                      (rhs[0x00000056U] 
                                                                       & mask[0x00000056U]))) 
                                                                  | ((lhs[0x00000057U] 
                                                                      & mask[0x00000057U]) 
                                                                     ^ 
                                                                     (rhs[0x00000057U] 
                                                                      & mask[0x00000057U]))) 
                                                                 | ((lhs[0x00000058U] 
                                                                     & mask[0x00000058U]) 
                                                                    ^ 
                                                                    (rhs[0x00000058U] 
                                                                     & mask[0x00000058U]))) 
                                                                | ((lhs[0x00000059U] 
                                                                    & mask[0x00000059U]) 
                                                                   ^ 
                                                                   (rhs[0x00000059U] 
                                                                    & mask[0x00000059U]))) 
                                                               | ((lhs[0x0000005aU] 
                                                                   & mask[0x0000005aU]) 
                                                                  ^ 
                                                                  (rhs[0x0000005aU] 
                                                                   & mask[0x0000005aU]))) 
                                                              | ((lhs[0x0000005bU] 
                                                                  & mask[0x0000005bU]) 
                                                                 ^ 
                                                                 (rhs[0x0000005bU] 
                                                                  & mask[0x0000005bU]))) 
                                                             | ((lhs[0x0000005cU] 
                                                                 & mask[0x0000005cU]) 
                                                                ^ 
                                                                (rhs[0x0000005cU] 
                                                                 & mask[0x0000005cU]))) 
                                                            | ((lhs[0x0000005dU] 
                                                                & mask[0x0000005dU]) 
                                                               ^ 
                                                               (rhs[0x0000005dU] 
                                                                & mask[0x0000005dU]))) 
                                                           | ((lhs[0x0000005eU] 
                                                               & mask[0x0000005eU]) 
                                                              ^ 
                                                              (rhs[0x0000005eU] 
                                                               & mask[0x0000005eU]))) 
                                                          | ((lhs[0x0000005fU] 
                                                              & mask[0x0000005fU]) 
                                                             ^ 
                                                             (rhs[0x0000005fU] 
                                                              & mask[0x0000005fU]))) 
                                                         | ((lhs[0x00000060U] 
                                                             & mask[0x00000060U]) 
                                                            ^ 
                                                            (rhs[0x00000060U] 
                                                             & mask[0x00000060U]))) 
                                                        | ((lhs[0x00000061U] 
                                                            & mask[0x00000061U]) 
                                                           ^ 
                                                           (rhs[0x00000061U] 
                                                            & mask[0x00000061U]))) 
                                                       | ((lhs[0x00000062U] 
                                                           & mask[0x00000062U]) 
                                                          ^ 
                                                          (rhs[0x00000062U] 
                                                           & mask[0x00000062U]))) 
                                                      | ((lhs[0x00000063U] 
                                                          & mask[0x00000063U]) 
                                                         ^ 
                                                         (rhs[0x00000063U] 
                                                          & mask[0x00000063U]))) 
                                                     | ((lhs[0x00000064U] 
                                                         & mask[0x00000064U]) 
                                                        ^ 
                                                        (rhs[0x00000064U] 
                                                         & mask[0x00000064U]))) 
                                                    | ((lhs[0x00000065U] 
                                                        & mask[0x00000065U]) 
                                                       ^ 
                                                       (rhs[0x00000065U] 
                                                        & mask[0x00000065U]))) 
                                                   | ((lhs[0x00000066U] 
                                                       & mask[0x00000066U]) 
                                                      ^ 
                                                      (rhs[0x00000066U] 
                                                       & mask[0x00000066U]))) 
                                                  | ((lhs[0x00000067U] 
                                                      & mask[0x00000067U]) 
                                                     ^ 
                                                     (rhs[0x00000067U] 
                                                      & mask[0x00000067U]))) 
                                                 | ((lhs[0x00000068U] 
                                                     & mask[0x00000068U]) 
                                                    ^ 
                                                    (rhs[0x00000068U] 
                                                     & mask[0x00000068U]))) 
                                                | ((lhs[0x00000069U] 
                                                    & mask[0x00000069U]) 
                                                   ^ 
                                                   (rhs[0x00000069U] 
                                                    & mask[0x00000069U]))) 
                                               | ((lhs[0x0000006aU] 
                                                   & mask[0x0000006aU]) 
                                                  ^ 
                                                  (rhs[0x0000006aU] 
                                                   & mask[0x0000006aU]))) 
                                              | ((lhs[0x0000006bU] 
                                                  & mask[0x0000006bU]) 
                                                 ^ 
                                                 (rhs[0x0000006bU] 
                                                  & mask[0x0000006bU]))) 
                                             | ((lhs[0x0000006cU] 
                                                 & mask[0x0000006cU]) 
                                                ^ (
                                                   rhs[0x0000006cU] 
                                                   & mask[0x0000006cU]))) 
                                            | ((lhs[0x0000006dU] 
                                                & mask[0x0000006dU]) 
                                               ^ (rhs[0x0000006dU] 
                                                  & mask[0x0000006dU]))) 
                                           | ((lhs[0x0000006eU] 
                                               & mask[0x0000006eU]) 
                                              ^ (rhs[0x0000006eU] 
                                                 & mask[0x0000006eU]))) 
                                          | ((lhs[0x0000006fU] 
                                              & mask[0x0000006fU]) 
                                             ^ (rhs[0x0000006fU] 
                                                & mask[0x0000006fU]))) 
                                         | ((lhs[0x00000070U] 
                                             & mask[0x00000070U]) 
                                            ^ (rhs[0x00000070U] 
                                               & mask[0x00000070U]))) 
                                        | ((lhs[0x00000071U] 
                                            & mask[0x00000071U]) 
                                           ^ (rhs[0x00000071U] 
                                              & mask[0x00000071U]))) 
                                       | ((lhs[0x00000072U] 
                                           & mask[0x00000072U]) 
                                          ^ (rhs[0x00000072U] 
                                             & mask[0x00000072U]))) 
                                      | ((lhs[0x00000073U] 
                                          & mask[0x00000073U]) 
                                         ^ (rhs[0x00000073U] 
                                            & mask[0x00000073U]))) 
                                     | ((lhs[0x00000074U] 
                                         & mask[0x00000074U]) 
                                        ^ (rhs[0x00000074U] 
                                           & mask[0x00000074U]))) 
                                    | ((lhs[0x00000075U] 
                                        & mask[0x00000075U]) 
                                       ^ (rhs[0x00000075U] 
                                          & mask[0x00000075U])));
        if ((0U != ((((((((((__Vdeeptemp_h87cfe50e__0 
                             | ((lhs[0x00000076U] & 
                                 mask[0x00000076U]) 
                                ^ (rhs[0x00000076U] 
                                   & mask[0x00000076U]))) 
                            | ((lhs[0x00000077U] & 
                                mask[0x00000077U]) 
                               ^ (rhs[0x00000077U] 
                                  & mask[0x00000077U]))) 
                           | ((lhs[0x00000078U] & mask[0x00000078U]) 
                              ^ (rhs[0x00000078U] & 
                                 mask[0x00000078U]))) 
                          | ((lhs[0x00000079U] & mask[0x00000079U]) 
                             ^ (rhs[0x00000079U] & 
                                mask[0x00000079U]))) 
                         | ((lhs[0x0000007aU] & mask[0x0000007aU]) 
                            ^ (rhs[0x0000007aU] & mask[0x0000007aU]))) 
                        | ((lhs[0x0000007bU] & mask[0x0000007bU]) 
                           ^ (rhs[0x0000007bU] & mask[0x0000007bU]))) 
                       | ((lhs[0x0000007cU] & mask[0x0000007cU]) 
                          ^ (rhs[0x0000007cU] & mask[0x0000007cU]))) 
                      | ((lhs[0x0000007dU] & mask[0x0000007dU]) 
                         ^ (rhs[0x0000007dU] & mask[0x0000007dU]))) 
                     | ((lhs[0x0000007eU] & mask[0x0000007eU]) 
                        ^ (rhs[0x0000007eU] & mask[0x0000007eU]))) 
                    | ((lhs[0x0000007fU] & mask[0x0000007fU]) 
                       ^ (rhs[0x0000007fU] & mask[0x0000007fU]))))) {
            if ((0x01000000U == radix)) {
                __Vtemp_4[0U] = (lhs[0U] & mask[0U]);
                __Vtemp_4[1U] = (lhs[1U] & mask[1U]);
                __Vtemp_4[2U] = (lhs[2U] & mask[2U]);
                __Vtemp_4[3U] = (lhs[3U] & mask[3U]);
                __Vtemp_4[4U] = (lhs[4U] & mask[4U]);
                __Vtemp_4[5U] = (lhs[5U] & mask[5U]);
                __Vtemp_4[6U] = (lhs[6U] & mask[6U]);
                __Vtemp_4[7U] = (lhs[7U] & mask[7U]);
                __Vtemp_4[8U] = (lhs[8U] & mask[8U]);
                __Vtemp_4[9U] = (lhs[9U] & mask[9U]);
                __Vtemp_4[0x0000000aU] = (lhs[0x0000000aU] 
                                          & mask[0x0000000aU]);
                __Vtemp_4[0x0000000bU] = (lhs[0x0000000bU] 
                                          & mask[0x0000000bU]);
                __Vtemp_4[0x0000000cU] = (lhs[0x0000000cU] 
                                          & mask[0x0000000cU]);
                __Vtemp_4[0x0000000dU] = (lhs[0x0000000dU] 
                                          & mask[0x0000000dU]);
                __Vtemp_4[0x0000000eU] = (lhs[0x0000000eU] 
                                          & mask[0x0000000eU]);
                __Vtemp_4[0x0000000fU] = (lhs[0x0000000fU] 
                                          & mask[0x0000000fU]);
                __Vtemp_4[0x00000010U] = (lhs[0x00000010U] 
                                          & mask[0x00000010U]);
                __Vtemp_4[0x00000011U] = (lhs[0x00000011U] 
                                          & mask[0x00000011U]);
                __Vtemp_4[0x00000012U] = (lhs[0x00000012U] 
                                          & mask[0x00000012U]);
                __Vtemp_4[0x00000013U] = (lhs[0x00000013U] 
                                          & mask[0x00000013U]);
                __Vtemp_4[0x00000014U] = (lhs[0x00000014U] 
                                          & mask[0x00000014U]);
                __Vtemp_4[0x00000015U] = (lhs[0x00000015U] 
                                          & mask[0x00000015U]);
                __Vtemp_4[0x00000016U] = (lhs[0x00000016U] 
                                          & mask[0x00000016U]);
                __Vtemp_4[0x00000017U] = (lhs[0x00000017U] 
                                          & mask[0x00000017U]);
                __Vtemp_4[0x00000018U] = (lhs[0x00000018U] 
                                          & mask[0x00000018U]);
                __Vtemp_4[0x00000019U] = (lhs[0x00000019U] 
                                          & mask[0x00000019U]);
                __Vtemp_4[0x0000001aU] = (lhs[0x0000001aU] 
                                          & mask[0x0000001aU]);
                __Vtemp_4[0x0000001bU] = (lhs[0x0000001bU] 
                                          & mask[0x0000001bU]);
                __Vtemp_4[0x0000001cU] = (lhs[0x0000001cU] 
                                          & mask[0x0000001cU]);
                __Vtemp_4[0x0000001dU] = (lhs[0x0000001dU] 
                                          & mask[0x0000001dU]);
                __Vtemp_4[0x0000001eU] = (lhs[0x0000001eU] 
                                          & mask[0x0000001eU]);
                __Vtemp_4[0x0000001fU] = (lhs[0x0000001fU] 
                                          & mask[0x0000001fU]);
                __Vtemp_4[0x00000020U] = (lhs[0x00000020U] 
                                          & mask[0x00000020U]);
                __Vtemp_4[0x00000021U] = (lhs[0x00000021U] 
                                          & mask[0x00000021U]);
                __Vtemp_4[0x00000022U] = (lhs[0x00000022U] 
                                          & mask[0x00000022U]);
                __Vtemp_4[0x00000023U] = (lhs[0x00000023U] 
                                          & mask[0x00000023U]);
                __Vtemp_4[0x00000024U] = (lhs[0x00000024U] 
                                          & mask[0x00000024U]);
                __Vtemp_4[0x00000025U] = (lhs[0x00000025U] 
                                          & mask[0x00000025U]);
                __Vtemp_4[0x00000026U] = (lhs[0x00000026U] 
                                          & mask[0x00000026U]);
                __Vtemp_4[0x00000027U] = (lhs[0x00000027U] 
                                          & mask[0x00000027U]);
                __Vtemp_4[0x00000028U] = (lhs[0x00000028U] 
                                          & mask[0x00000028U]);
                __Vtemp_4[0x00000029U] = (lhs[0x00000029U] 
                                          & mask[0x00000029U]);
                __Vtemp_4[0x0000002aU] = (lhs[0x0000002aU] 
                                          & mask[0x0000002aU]);
                __Vtemp_4[0x0000002bU] = (lhs[0x0000002bU] 
                                          & mask[0x0000002bU]);
                __Vtemp_4[0x0000002cU] = (lhs[0x0000002cU] 
                                          & mask[0x0000002cU]);
                __Vtemp_4[0x0000002dU] = (lhs[0x0000002dU] 
                                          & mask[0x0000002dU]);
                __Vtemp_4[0x0000002eU] = (lhs[0x0000002eU] 
                                          & mask[0x0000002eU]);
                __Vtemp_4[0x0000002fU] = (lhs[0x0000002fU] 
                                          & mask[0x0000002fU]);
                __Vtemp_4[0x00000030U] = (lhs[0x00000030U] 
                                          & mask[0x00000030U]);
                __Vtemp_4[0x00000031U] = (lhs[0x00000031U] 
                                          & mask[0x00000031U]);
                __Vtemp_4[0x00000032U] = (lhs[0x00000032U] 
                                          & mask[0x00000032U]);
                __Vtemp_4[0x00000033U] = (lhs[0x00000033U] 
                                          & mask[0x00000033U]);
                __Vtemp_4[0x00000034U] = (lhs[0x00000034U] 
                                          & mask[0x00000034U]);
                __Vtemp_4[0x00000035U] = (lhs[0x00000035U] 
                                          & mask[0x00000035U]);
                __Vtemp_4[0x00000036U] = (lhs[0x00000036U] 
                                          & mask[0x00000036U]);
                __Vtemp_4[0x00000037U] = (lhs[0x00000037U] 
                                          & mask[0x00000037U]);
                __Vtemp_4[0x00000038U] = (lhs[0x00000038U] 
                                          & mask[0x00000038U]);
                __Vtemp_4[0x00000039U] = (lhs[0x00000039U] 
                                          & mask[0x00000039U]);
                __Vtemp_4[0x0000003aU] = (lhs[0x0000003aU] 
                                          & mask[0x0000003aU]);
                __Vtemp_4[0x0000003bU] = (lhs[0x0000003bU] 
                                          & mask[0x0000003bU]);
                __Vtemp_4[0x0000003cU] = (lhs[0x0000003cU] 
                                          & mask[0x0000003cU]);
                __Vtemp_4[0x0000003dU] = (lhs[0x0000003dU] 
                                          & mask[0x0000003dU]);
                __Vtemp_4[0x0000003eU] = (lhs[0x0000003eU] 
                                          & mask[0x0000003eU]);
                __Vtemp_4[0x0000003fU] = (lhs[0x0000003fU] 
                                          & mask[0x0000003fU]);
                __Vtemp_4[0x00000040U] = (lhs[0x00000040U] 
                                          & mask[0x00000040U]);
                __Vtemp_4[0x00000041U] = (lhs[0x00000041U] 
                                          & mask[0x00000041U]);
                __Vtemp_4[0x00000042U] = (lhs[0x00000042U] 
                                          & mask[0x00000042U]);
                __Vtemp_4[0x00000043U] = (lhs[0x00000043U] 
                                          & mask[0x00000043U]);
                __Vtemp_4[0x00000044U] = (lhs[0x00000044U] 
                                          & mask[0x00000044U]);
                __Vtemp_4[0x00000045U] = (lhs[0x00000045U] 
                                          & mask[0x00000045U]);
                __Vtemp_4[0x00000046U] = (lhs[0x00000046U] 
                                          & mask[0x00000046U]);
                __Vtemp_4[0x00000047U] = (lhs[0x00000047U] 
                                          & mask[0x00000047U]);
                __Vtemp_4[0x00000048U] = (lhs[0x00000048U] 
                                          & mask[0x00000048U]);
                __Vtemp_4[0x00000049U] = (lhs[0x00000049U] 
                                          & mask[0x00000049U]);
                __Vtemp_4[0x0000004aU] = (lhs[0x0000004aU] 
                                          & mask[0x0000004aU]);
                __Vtemp_4[0x0000004bU] = (lhs[0x0000004bU] 
                                          & mask[0x0000004bU]);
                __Vtemp_4[0x0000004cU] = (lhs[0x0000004cU] 
                                          & mask[0x0000004cU]);
                __Vtemp_4[0x0000004dU] = (lhs[0x0000004dU] 
                                          & mask[0x0000004dU]);
                __Vtemp_4[0x0000004eU] = (lhs[0x0000004eU] 
                                          & mask[0x0000004eU]);
                __Vtemp_4[0x0000004fU] = (lhs[0x0000004fU] 
                                          & mask[0x0000004fU]);
                __Vtemp_4[0x00000050U] = (lhs[0x00000050U] 
                                          & mask[0x00000050U]);
                __Vtemp_4[0x00000051U] = (lhs[0x00000051U] 
                                          & mask[0x00000051U]);
                __Vtemp_4[0x00000052U] = (lhs[0x00000052U] 
                                          & mask[0x00000052U]);
                __Vtemp_4[0x00000053U] = (lhs[0x00000053U] 
                                          & mask[0x00000053U]);
                __Vtemp_4[0x00000054U] = (lhs[0x00000054U] 
                                          & mask[0x00000054U]);
                __Vtemp_4[0x00000055U] = (lhs[0x00000055U] 
                                          & mask[0x00000055U]);
                __Vtemp_4[0x00000056U] = (lhs[0x00000056U] 
                                          & mask[0x00000056U]);
                __Vtemp_4[0x00000057U] = (lhs[0x00000057U] 
                                          & mask[0x00000057U]);
                __Vtemp_4[0x00000058U] = (lhs[0x00000058U] 
                                          & mask[0x00000058U]);
                __Vtemp_4[0x00000059U] = (lhs[0x00000059U] 
                                          & mask[0x00000059U]);
                __Vtemp_4[0x0000005aU] = (lhs[0x0000005aU] 
                                          & mask[0x0000005aU]);
                __Vtemp_4[0x0000005bU] = (lhs[0x0000005bU] 
                                          & mask[0x0000005bU]);
                __Vtemp_4[0x0000005cU] = (lhs[0x0000005cU] 
                                          & mask[0x0000005cU]);
                __Vtemp_4[0x0000005dU] = (lhs[0x0000005dU] 
                                          & mask[0x0000005dU]);
                __Vtemp_4[0x0000005eU] = (lhs[0x0000005eU] 
                                          & mask[0x0000005eU]);
                __Vtemp_4[0x0000005fU] = (lhs[0x0000005fU] 
                                          & mask[0x0000005fU]);
                __Vtemp_4[0x00000060U] = (lhs[0x00000060U] 
                                          & mask[0x00000060U]);
                __Vtemp_4[0x00000061U] = (lhs[0x00000061U] 
                                          & mask[0x00000061U]);
                __Vtemp_4[0x00000062U] = (lhs[0x00000062U] 
                                          & mask[0x00000062U]);
                __Vtemp_4[0x00000063U] = (lhs[0x00000063U] 
                                          & mask[0x00000063U]);
                __Vtemp_4[0x00000064U] = (lhs[0x00000064U] 
                                          & mask[0x00000064U]);
                __Vtemp_4[0x00000065U] = (lhs[0x00000065U] 
                                          & mask[0x00000065U]);
                __Vtemp_4[0x00000066U] = (lhs[0x00000066U] 
                                          & mask[0x00000066U]);
                __Vtemp_4[0x00000067U] = (lhs[0x00000067U] 
                                          & mask[0x00000067U]);
                __Vtemp_4[0x00000068U] = (lhs[0x00000068U] 
                                          & mask[0x00000068U]);
                __Vtemp_4[0x00000069U] = (lhs[0x00000069U] 
                                          & mask[0x00000069U]);
                __Vtemp_4[0x0000006aU] = (lhs[0x0000006aU] 
                                          & mask[0x0000006aU]);
                __Vtemp_4[0x0000006bU] = (lhs[0x0000006bU] 
                                          & mask[0x0000006bU]);
                __Vtemp_4[0x0000006cU] = (lhs[0x0000006cU] 
                                          & mask[0x0000006cU]);
                __Vtemp_4[0x0000006dU] = (lhs[0x0000006dU] 
                                          & mask[0x0000006dU]);
                __Vtemp_4[0x0000006eU] = (lhs[0x0000006eU] 
                                          & mask[0x0000006eU]);
                __Vtemp_4[0x0000006fU] = (lhs[0x0000006fU] 
                                          & mask[0x0000006fU]);
                __Vtemp_4[0x00000070U] = (lhs[0x00000070U] 
                                          & mask[0x00000070U]);
                __Vtemp_4[0x00000071U] = (lhs[0x00000071U] 
                                          & mask[0x00000071U]);
                __Vtemp_4[0x00000072U] = (lhs[0x00000072U] 
                                          & mask[0x00000072U]);
                __Vtemp_4[0x00000073U] = (lhs[0x00000073U] 
                                          & mask[0x00000073U]);
                __Vtemp_4[0x00000074U] = (lhs[0x00000074U] 
                                          & mask[0x00000074U]);
                __Vtemp_4[0x00000075U] = (lhs[0x00000075U] 
                                          & mask[0x00000075U]);
                __Vtemp_4[0x00000076U] = (lhs[0x00000076U] 
                                          & mask[0x00000076U]);
                __Vtemp_4[0x00000077U] = (lhs[0x00000077U] 
                                          & mask[0x00000077U]);
                __Vtemp_4[0x00000078U] = (lhs[0x00000078U] 
                                          & mask[0x00000078U]);
                __Vtemp_4[0x00000079U] = (lhs[0x00000079U] 
                                          & mask[0x00000079U]);
                __Vtemp_4[0x0000007aU] = (lhs[0x0000007aU] 
                                          & mask[0x0000007aU]);
                __Vtemp_4[0x0000007bU] = (lhs[0x0000007bU] 
                                          & mask[0x0000007bU]);
                __Vtemp_4[0x0000007cU] = (lhs[0x0000007cU] 
                                          & mask[0x0000007cU]);
                __Vtemp_4[0x0000007dU] = (lhs[0x0000007dU] 
                                          & mask[0x0000007dU]);
                __Vtemp_4[0x0000007eU] = (lhs[0x0000007eU] 
                                          & mask[0x0000007eU]);
                __Vtemp_4[0x0000007fU] = (lhs[0x0000007fU] 
                                          & mask[0x0000007fU]);
                __Vtemp_5[0U] = (rhs[0U] & mask[0U]);
                __Vtemp_5[1U] = (rhs[1U] & mask[1U]);
                __Vtemp_5[2U] = (rhs[2U] & mask[2U]);
                __Vtemp_5[3U] = (rhs[3U] & mask[3U]);
                __Vtemp_5[4U] = (rhs[4U] & mask[4U]);
                __Vtemp_5[5U] = (rhs[5U] & mask[5U]);
                __Vtemp_5[6U] = (rhs[6U] & mask[6U]);
                __Vtemp_5[7U] = (rhs[7U] & mask[7U]);
                __Vtemp_5[8U] = (rhs[8U] & mask[8U]);
                __Vtemp_5[9U] = (rhs[9U] & mask[9U]);
                __Vtemp_5[0x0000000aU] = (rhs[0x0000000aU] 
                                          & mask[0x0000000aU]);
                __Vtemp_5[0x0000000bU] = (rhs[0x0000000bU] 
                                          & mask[0x0000000bU]);
                __Vtemp_5[0x0000000cU] = (rhs[0x0000000cU] 
                                          & mask[0x0000000cU]);
                __Vtemp_5[0x0000000dU] = (rhs[0x0000000dU] 
                                          & mask[0x0000000dU]);
                __Vtemp_5[0x0000000eU] = (rhs[0x0000000eU] 
                                          & mask[0x0000000eU]);
                __Vtemp_5[0x0000000fU] = (rhs[0x0000000fU] 
                                          & mask[0x0000000fU]);
                __Vtemp_5[0x00000010U] = (rhs[0x00000010U] 
                                          & mask[0x00000010U]);
                __Vtemp_5[0x00000011U] = (rhs[0x00000011U] 
                                          & mask[0x00000011U]);
                __Vtemp_5[0x00000012U] = (rhs[0x00000012U] 
                                          & mask[0x00000012U]);
                __Vtemp_5[0x00000013U] = (rhs[0x00000013U] 
                                          & mask[0x00000013U]);
                __Vtemp_5[0x00000014U] = (rhs[0x00000014U] 
                                          & mask[0x00000014U]);
                __Vtemp_5[0x00000015U] = (rhs[0x00000015U] 
                                          & mask[0x00000015U]);
                __Vtemp_5[0x00000016U] = (rhs[0x00000016U] 
                                          & mask[0x00000016U]);
                __Vtemp_5[0x00000017U] = (rhs[0x00000017U] 
                                          & mask[0x00000017U]);
                __Vtemp_5[0x00000018U] = (rhs[0x00000018U] 
                                          & mask[0x00000018U]);
                __Vtemp_5[0x00000019U] = (rhs[0x00000019U] 
                                          & mask[0x00000019U]);
                __Vtemp_5[0x0000001aU] = (rhs[0x0000001aU] 
                                          & mask[0x0000001aU]);
                __Vtemp_5[0x0000001bU] = (rhs[0x0000001bU] 
                                          & mask[0x0000001bU]);
                __Vtemp_5[0x0000001cU] = (rhs[0x0000001cU] 
                                          & mask[0x0000001cU]);
                __Vtemp_5[0x0000001dU] = (rhs[0x0000001dU] 
                                          & mask[0x0000001dU]);
                __Vtemp_5[0x0000001eU] = (rhs[0x0000001eU] 
                                          & mask[0x0000001eU]);
                __Vtemp_5[0x0000001fU] = (rhs[0x0000001fU] 
                                          & mask[0x0000001fU]);
                __Vtemp_5[0x00000020U] = (rhs[0x00000020U] 
                                          & mask[0x00000020U]);
                __Vtemp_5[0x00000021U] = (rhs[0x00000021U] 
                                          & mask[0x00000021U]);
                __Vtemp_5[0x00000022U] = (rhs[0x00000022U] 
                                          & mask[0x00000022U]);
                __Vtemp_5[0x00000023U] = (rhs[0x00000023U] 
                                          & mask[0x00000023U]);
                __Vtemp_5[0x00000024U] = (rhs[0x00000024U] 
                                          & mask[0x00000024U]);
                __Vtemp_5[0x00000025U] = (rhs[0x00000025U] 
                                          & mask[0x00000025U]);
                __Vtemp_5[0x00000026U] = (rhs[0x00000026U] 
                                          & mask[0x00000026U]);
                __Vtemp_5[0x00000027U] = (rhs[0x00000027U] 
                                          & mask[0x00000027U]);
                __Vtemp_5[0x00000028U] = (rhs[0x00000028U] 
                                          & mask[0x00000028U]);
                __Vtemp_5[0x00000029U] = (rhs[0x00000029U] 
                                          & mask[0x00000029U]);
                __Vtemp_5[0x0000002aU] = (rhs[0x0000002aU] 
                                          & mask[0x0000002aU]);
                __Vtemp_5[0x0000002bU] = (rhs[0x0000002bU] 
                                          & mask[0x0000002bU]);
                __Vtemp_5[0x0000002cU] = (rhs[0x0000002cU] 
                                          & mask[0x0000002cU]);
                __Vtemp_5[0x0000002dU] = (rhs[0x0000002dU] 
                                          & mask[0x0000002dU]);
                __Vtemp_5[0x0000002eU] = (rhs[0x0000002eU] 
                                          & mask[0x0000002eU]);
                __Vtemp_5[0x0000002fU] = (rhs[0x0000002fU] 
                                          & mask[0x0000002fU]);
                __Vtemp_5[0x00000030U] = (rhs[0x00000030U] 
                                          & mask[0x00000030U]);
                __Vtemp_5[0x00000031U] = (rhs[0x00000031U] 
                                          & mask[0x00000031U]);
                __Vtemp_5[0x00000032U] = (rhs[0x00000032U] 
                                          & mask[0x00000032U]);
                __Vtemp_5[0x00000033U] = (rhs[0x00000033U] 
                                          & mask[0x00000033U]);
                __Vtemp_5[0x00000034U] = (rhs[0x00000034U] 
                                          & mask[0x00000034U]);
                __Vtemp_5[0x00000035U] = (rhs[0x00000035U] 
                                          & mask[0x00000035U]);
                __Vtemp_5[0x00000036U] = (rhs[0x00000036U] 
                                          & mask[0x00000036U]);
                __Vtemp_5[0x00000037U] = (rhs[0x00000037U] 
                                          & mask[0x00000037U]);
                __Vtemp_5[0x00000038U] = (rhs[0x00000038U] 
                                          & mask[0x00000038U]);
                __Vtemp_5[0x00000039U] = (rhs[0x00000039U] 
                                          & mask[0x00000039U]);
                __Vtemp_5[0x0000003aU] = (rhs[0x0000003aU] 
                                          & mask[0x0000003aU]);
                __Vtemp_5[0x0000003bU] = (rhs[0x0000003bU] 
                                          & mask[0x0000003bU]);
                __Vtemp_5[0x0000003cU] = (rhs[0x0000003cU] 
                                          & mask[0x0000003cU]);
                __Vtemp_5[0x0000003dU] = (rhs[0x0000003dU] 
                                          & mask[0x0000003dU]);
                __Vtemp_5[0x0000003eU] = (rhs[0x0000003eU] 
                                          & mask[0x0000003eU]);
                __Vtemp_5[0x0000003fU] = (rhs[0x0000003fU] 
                                          & mask[0x0000003fU]);
                __Vtemp_5[0x00000040U] = (rhs[0x00000040U] 
                                          & mask[0x00000040U]);
                __Vtemp_5[0x00000041U] = (rhs[0x00000041U] 
                                          & mask[0x00000041U]);
                __Vtemp_5[0x00000042U] = (rhs[0x00000042U] 
                                          & mask[0x00000042U]);
                __Vtemp_5[0x00000043U] = (rhs[0x00000043U] 
                                          & mask[0x00000043U]);
                __Vtemp_5[0x00000044U] = (rhs[0x00000044U] 
                                          & mask[0x00000044U]);
                __Vtemp_5[0x00000045U] = (rhs[0x00000045U] 
                                          & mask[0x00000045U]);
                __Vtemp_5[0x00000046U] = (rhs[0x00000046U] 
                                          & mask[0x00000046U]);
                __Vtemp_5[0x00000047U] = (rhs[0x00000047U] 
                                          & mask[0x00000047U]);
                __Vtemp_5[0x00000048U] = (rhs[0x00000048U] 
                                          & mask[0x00000048U]);
                __Vtemp_5[0x00000049U] = (rhs[0x00000049U] 
                                          & mask[0x00000049U]);
                __Vtemp_5[0x0000004aU] = (rhs[0x0000004aU] 
                                          & mask[0x0000004aU]);
                __Vtemp_5[0x0000004bU] = (rhs[0x0000004bU] 
                                          & mask[0x0000004bU]);
                __Vtemp_5[0x0000004cU] = (rhs[0x0000004cU] 
                                          & mask[0x0000004cU]);
                __Vtemp_5[0x0000004dU] = (rhs[0x0000004dU] 
                                          & mask[0x0000004dU]);
                __Vtemp_5[0x0000004eU] = (rhs[0x0000004eU] 
                                          & mask[0x0000004eU]);
                __Vtemp_5[0x0000004fU] = (rhs[0x0000004fU] 
                                          & mask[0x0000004fU]);
                __Vtemp_5[0x00000050U] = (rhs[0x00000050U] 
                                          & mask[0x00000050U]);
                __Vtemp_5[0x00000051U] = (rhs[0x00000051U] 
                                          & mask[0x00000051U]);
                __Vtemp_5[0x00000052U] = (rhs[0x00000052U] 
                                          & mask[0x00000052U]);
                __Vtemp_5[0x00000053U] = (rhs[0x00000053U] 
                                          & mask[0x00000053U]);
                __Vtemp_5[0x00000054U] = (rhs[0x00000054U] 
                                          & mask[0x00000054U]);
                __Vtemp_5[0x00000055U] = (rhs[0x00000055U] 
                                          & mask[0x00000055U]);
                __Vtemp_5[0x00000056U] = (rhs[0x00000056U] 
                                          & mask[0x00000056U]);
                __Vtemp_5[0x00000057U] = (rhs[0x00000057U] 
                                          & mask[0x00000057U]);
                __Vtemp_5[0x00000058U] = (rhs[0x00000058U] 
                                          & mask[0x00000058U]);
                __Vtemp_5[0x00000059U] = (rhs[0x00000059U] 
                                          & mask[0x00000059U]);
                __Vtemp_5[0x0000005aU] = (rhs[0x0000005aU] 
                                          & mask[0x0000005aU]);
                __Vtemp_5[0x0000005bU] = (rhs[0x0000005bU] 
                                          & mask[0x0000005bU]);
                __Vtemp_5[0x0000005cU] = (rhs[0x0000005cU] 
                                          & mask[0x0000005cU]);
                __Vtemp_5[0x0000005dU] = (rhs[0x0000005dU] 
                                          & mask[0x0000005dU]);
                __Vtemp_5[0x0000005eU] = (rhs[0x0000005eU] 
                                          & mask[0x0000005eU]);
                __Vtemp_5[0x0000005fU] = (rhs[0x0000005fU] 
                                          & mask[0x0000005fU]);
                __Vtemp_5[0x00000060U] = (rhs[0x00000060U] 
                                          & mask[0x00000060U]);
                __Vtemp_5[0x00000061U] = (rhs[0x00000061U] 
                                          & mask[0x00000061U]);
                __Vtemp_5[0x00000062U] = (rhs[0x00000062U] 
                                          & mask[0x00000062U]);
                __Vtemp_5[0x00000063U] = (rhs[0x00000063U] 
                                          & mask[0x00000063U]);
                __Vtemp_5[0x00000064U] = (rhs[0x00000064U] 
                                          & mask[0x00000064U]);
                __Vtemp_5[0x00000065U] = (rhs[0x00000065U] 
                                          & mask[0x00000065U]);
                __Vtemp_5[0x00000066U] = (rhs[0x00000066U] 
                                          & mask[0x00000066U]);
                __Vtemp_5[0x00000067U] = (rhs[0x00000067U] 
                                          & mask[0x00000067U]);
                __Vtemp_5[0x00000068U] = (rhs[0x00000068U] 
                                          & mask[0x00000068U]);
                __Vtemp_5[0x00000069U] = (rhs[0x00000069U] 
                                          & mask[0x00000069U]);
                __Vtemp_5[0x0000006aU] = (rhs[0x0000006aU] 
                                          & mask[0x0000006aU]);
                __Vtemp_5[0x0000006bU] = (rhs[0x0000006bU] 
                                          & mask[0x0000006bU]);
                __Vtemp_5[0x0000006cU] = (rhs[0x0000006cU] 
                                          & mask[0x0000006cU]);
                __Vtemp_5[0x0000006dU] = (rhs[0x0000006dU] 
                                          & mask[0x0000006dU]);
                __Vtemp_5[0x0000006eU] = (rhs[0x0000006eU] 
                                          & mask[0x0000006eU]);
                __Vtemp_5[0x0000006fU] = (rhs[0x0000006fU] 
                                          & mask[0x0000006fU]);
                __Vtemp_5[0x00000070U] = (rhs[0x00000070U] 
                                          & mask[0x00000070U]);
                __Vtemp_5[0x00000071U] = (rhs[0x00000071U] 
                                          & mask[0x00000071U]);
                __Vtemp_5[0x00000072U] = (rhs[0x00000072U] 
                                          & mask[0x00000072U]);
                __Vtemp_5[0x00000073U] = (rhs[0x00000073U] 
                                          & mask[0x00000073U]);
                __Vtemp_5[0x00000074U] = (rhs[0x00000074U] 
                                          & mask[0x00000074U]);
                __Vtemp_5[0x00000075U] = (rhs[0x00000075U] 
                                          & mask[0x00000075U]);
                __Vtemp_5[0x00000076U] = (rhs[0x00000076U] 
                                          & mask[0x00000076U]);
                __Vtemp_5[0x00000077U] = (rhs[0x00000077U] 
                                          & mask[0x00000077U]);
                __Vtemp_5[0x00000078U] = (rhs[0x00000078U] 
                                          & mask[0x00000078U]);
                __Vtemp_5[0x00000079U] = (rhs[0x00000079U] 
                                          & mask[0x00000079U]);
                __Vtemp_5[0x0000007aU] = (rhs[0x0000007aU] 
                                          & mask[0x0000007aU]);
                __Vtemp_5[0x0000007bU] = (rhs[0x0000007bU] 
                                          & mask[0x0000007bU]);
                __Vtemp_5[0x0000007cU] = (rhs[0x0000007cU] 
                                          & mask[0x0000007cU]);
                __Vtemp_5[0x0000007dU] = (rhs[0x0000007dU] 
                                          & mask[0x0000007dU]);
                __Vtemp_5[0x0000007eU] = (rhs[0x0000007eU] 
                                          & mask[0x0000007eU]);
                __Vtemp_5[0x0000007fU] = (rhs[0x0000007fU] 
                                          & mask[0x0000007fU]);
                VL_SFORMAT_NX(64,msg,"%@: lhs = 'b%0b : rhs = 'b%0b",0,
                              -1,&(name),4096,__Vtemp_4.data(),
                              4096,__Vtemp_5.data());
            } else if ((0x06000000U == radix)) {
                __Vtemp_6[0U] = (lhs[0U] & mask[0U]);
                __Vtemp_6[1U] = (lhs[1U] & mask[1U]);
                __Vtemp_6[2U] = (lhs[2U] & mask[2U]);
                __Vtemp_6[3U] = (lhs[3U] & mask[3U]);
                __Vtemp_6[4U] = (lhs[4U] & mask[4U]);
                __Vtemp_6[5U] = (lhs[5U] & mask[5U]);
                __Vtemp_6[6U] = (lhs[6U] & mask[6U]);
                __Vtemp_6[7U] = (lhs[7U] & mask[7U]);
                __Vtemp_6[8U] = (lhs[8U] & mask[8U]);
                __Vtemp_6[9U] = (lhs[9U] & mask[9U]);
                __Vtemp_6[0x0000000aU] = (lhs[0x0000000aU] 
                                          & mask[0x0000000aU]);
                __Vtemp_6[0x0000000bU] = (lhs[0x0000000bU] 
                                          & mask[0x0000000bU]);
                __Vtemp_6[0x0000000cU] = (lhs[0x0000000cU] 
                                          & mask[0x0000000cU]);
                __Vtemp_6[0x0000000dU] = (lhs[0x0000000dU] 
                                          & mask[0x0000000dU]);
                __Vtemp_6[0x0000000eU] = (lhs[0x0000000eU] 
                                          & mask[0x0000000eU]);
                __Vtemp_6[0x0000000fU] = (lhs[0x0000000fU] 
                                          & mask[0x0000000fU]);
                __Vtemp_6[0x00000010U] = (lhs[0x00000010U] 
                                          & mask[0x00000010U]);
                __Vtemp_6[0x00000011U] = (lhs[0x00000011U] 
                                          & mask[0x00000011U]);
                __Vtemp_6[0x00000012U] = (lhs[0x00000012U] 
                                          & mask[0x00000012U]);
                __Vtemp_6[0x00000013U] = (lhs[0x00000013U] 
                                          & mask[0x00000013U]);
                __Vtemp_6[0x00000014U] = (lhs[0x00000014U] 
                                          & mask[0x00000014U]);
                __Vtemp_6[0x00000015U] = (lhs[0x00000015U] 
                                          & mask[0x00000015U]);
                __Vtemp_6[0x00000016U] = (lhs[0x00000016U] 
                                          & mask[0x00000016U]);
                __Vtemp_6[0x00000017U] = (lhs[0x00000017U] 
                                          & mask[0x00000017U]);
                __Vtemp_6[0x00000018U] = (lhs[0x00000018U] 
                                          & mask[0x00000018U]);
                __Vtemp_6[0x00000019U] = (lhs[0x00000019U] 
                                          & mask[0x00000019U]);
                __Vtemp_6[0x0000001aU] = (lhs[0x0000001aU] 
                                          & mask[0x0000001aU]);
                __Vtemp_6[0x0000001bU] = (lhs[0x0000001bU] 
                                          & mask[0x0000001bU]);
                __Vtemp_6[0x0000001cU] = (lhs[0x0000001cU] 
                                          & mask[0x0000001cU]);
                __Vtemp_6[0x0000001dU] = (lhs[0x0000001dU] 
                                          & mask[0x0000001dU]);
                __Vtemp_6[0x0000001eU] = (lhs[0x0000001eU] 
                                          & mask[0x0000001eU]);
                __Vtemp_6[0x0000001fU] = (lhs[0x0000001fU] 
                                          & mask[0x0000001fU]);
                __Vtemp_6[0x00000020U] = (lhs[0x00000020U] 
                                          & mask[0x00000020U]);
                __Vtemp_6[0x00000021U] = (lhs[0x00000021U] 
                                          & mask[0x00000021U]);
                __Vtemp_6[0x00000022U] = (lhs[0x00000022U] 
                                          & mask[0x00000022U]);
                __Vtemp_6[0x00000023U] = (lhs[0x00000023U] 
                                          & mask[0x00000023U]);
                __Vtemp_6[0x00000024U] = (lhs[0x00000024U] 
                                          & mask[0x00000024U]);
                __Vtemp_6[0x00000025U] = (lhs[0x00000025U] 
                                          & mask[0x00000025U]);
                __Vtemp_6[0x00000026U] = (lhs[0x00000026U] 
                                          & mask[0x00000026U]);
                __Vtemp_6[0x00000027U] = (lhs[0x00000027U] 
                                          & mask[0x00000027U]);
                __Vtemp_6[0x00000028U] = (lhs[0x00000028U] 
                                          & mask[0x00000028U]);
                __Vtemp_6[0x00000029U] = (lhs[0x00000029U] 
                                          & mask[0x00000029U]);
                __Vtemp_6[0x0000002aU] = (lhs[0x0000002aU] 
                                          & mask[0x0000002aU]);
                __Vtemp_6[0x0000002bU] = (lhs[0x0000002bU] 
                                          & mask[0x0000002bU]);
                __Vtemp_6[0x0000002cU] = (lhs[0x0000002cU] 
                                          & mask[0x0000002cU]);
                __Vtemp_6[0x0000002dU] = (lhs[0x0000002dU] 
                                          & mask[0x0000002dU]);
                __Vtemp_6[0x0000002eU] = (lhs[0x0000002eU] 
                                          & mask[0x0000002eU]);
                __Vtemp_6[0x0000002fU] = (lhs[0x0000002fU] 
                                          & mask[0x0000002fU]);
                __Vtemp_6[0x00000030U] = (lhs[0x00000030U] 
                                          & mask[0x00000030U]);
                __Vtemp_6[0x00000031U] = (lhs[0x00000031U] 
                                          & mask[0x00000031U]);
                __Vtemp_6[0x00000032U] = (lhs[0x00000032U] 
                                          & mask[0x00000032U]);
                __Vtemp_6[0x00000033U] = (lhs[0x00000033U] 
                                          & mask[0x00000033U]);
                __Vtemp_6[0x00000034U] = (lhs[0x00000034U] 
                                          & mask[0x00000034U]);
                __Vtemp_6[0x00000035U] = (lhs[0x00000035U] 
                                          & mask[0x00000035U]);
                __Vtemp_6[0x00000036U] = (lhs[0x00000036U] 
                                          & mask[0x00000036U]);
                __Vtemp_6[0x00000037U] = (lhs[0x00000037U] 
                                          & mask[0x00000037U]);
                __Vtemp_6[0x00000038U] = (lhs[0x00000038U] 
                                          & mask[0x00000038U]);
                __Vtemp_6[0x00000039U] = (lhs[0x00000039U] 
                                          & mask[0x00000039U]);
                __Vtemp_6[0x0000003aU] = (lhs[0x0000003aU] 
                                          & mask[0x0000003aU]);
                __Vtemp_6[0x0000003bU] = (lhs[0x0000003bU] 
                                          & mask[0x0000003bU]);
                __Vtemp_6[0x0000003cU] = (lhs[0x0000003cU] 
                                          & mask[0x0000003cU]);
                __Vtemp_6[0x0000003dU] = (lhs[0x0000003dU] 
                                          & mask[0x0000003dU]);
                __Vtemp_6[0x0000003eU] = (lhs[0x0000003eU] 
                                          & mask[0x0000003eU]);
                __Vtemp_6[0x0000003fU] = (lhs[0x0000003fU] 
                                          & mask[0x0000003fU]);
                __Vtemp_6[0x00000040U] = (lhs[0x00000040U] 
                                          & mask[0x00000040U]);
                __Vtemp_6[0x00000041U] = (lhs[0x00000041U] 
                                          & mask[0x00000041U]);
                __Vtemp_6[0x00000042U] = (lhs[0x00000042U] 
                                          & mask[0x00000042U]);
                __Vtemp_6[0x00000043U] = (lhs[0x00000043U] 
                                          & mask[0x00000043U]);
                __Vtemp_6[0x00000044U] = (lhs[0x00000044U] 
                                          & mask[0x00000044U]);
                __Vtemp_6[0x00000045U] = (lhs[0x00000045U] 
                                          & mask[0x00000045U]);
                __Vtemp_6[0x00000046U] = (lhs[0x00000046U] 
                                          & mask[0x00000046U]);
                __Vtemp_6[0x00000047U] = (lhs[0x00000047U] 
                                          & mask[0x00000047U]);
                __Vtemp_6[0x00000048U] = (lhs[0x00000048U] 
                                          & mask[0x00000048U]);
                __Vtemp_6[0x00000049U] = (lhs[0x00000049U] 
                                          & mask[0x00000049U]);
                __Vtemp_6[0x0000004aU] = (lhs[0x0000004aU] 
                                          & mask[0x0000004aU]);
                __Vtemp_6[0x0000004bU] = (lhs[0x0000004bU] 
                                          & mask[0x0000004bU]);
                __Vtemp_6[0x0000004cU] = (lhs[0x0000004cU] 
                                          & mask[0x0000004cU]);
                __Vtemp_6[0x0000004dU] = (lhs[0x0000004dU] 
                                          & mask[0x0000004dU]);
                __Vtemp_6[0x0000004eU] = (lhs[0x0000004eU] 
                                          & mask[0x0000004eU]);
                __Vtemp_6[0x0000004fU] = (lhs[0x0000004fU] 
                                          & mask[0x0000004fU]);
                __Vtemp_6[0x00000050U] = (lhs[0x00000050U] 
                                          & mask[0x00000050U]);
                __Vtemp_6[0x00000051U] = (lhs[0x00000051U] 
                                          & mask[0x00000051U]);
                __Vtemp_6[0x00000052U] = (lhs[0x00000052U] 
                                          & mask[0x00000052U]);
                __Vtemp_6[0x00000053U] = (lhs[0x00000053U] 
                                          & mask[0x00000053U]);
                __Vtemp_6[0x00000054U] = (lhs[0x00000054U] 
                                          & mask[0x00000054U]);
                __Vtemp_6[0x00000055U] = (lhs[0x00000055U] 
                                          & mask[0x00000055U]);
                __Vtemp_6[0x00000056U] = (lhs[0x00000056U] 
                                          & mask[0x00000056U]);
                __Vtemp_6[0x00000057U] = (lhs[0x00000057U] 
                                          & mask[0x00000057U]);
                __Vtemp_6[0x00000058U] = (lhs[0x00000058U] 
                                          & mask[0x00000058U]);
                __Vtemp_6[0x00000059U] = (lhs[0x00000059U] 
                                          & mask[0x00000059U]);
                __Vtemp_6[0x0000005aU] = (lhs[0x0000005aU] 
                                          & mask[0x0000005aU]);
                __Vtemp_6[0x0000005bU] = (lhs[0x0000005bU] 
                                          & mask[0x0000005bU]);
                __Vtemp_6[0x0000005cU] = (lhs[0x0000005cU] 
                                          & mask[0x0000005cU]);
                __Vtemp_6[0x0000005dU] = (lhs[0x0000005dU] 
                                          & mask[0x0000005dU]);
                __Vtemp_6[0x0000005eU] = (lhs[0x0000005eU] 
                                          & mask[0x0000005eU]);
                __Vtemp_6[0x0000005fU] = (lhs[0x0000005fU] 
                                          & mask[0x0000005fU]);
                __Vtemp_6[0x00000060U] = (lhs[0x00000060U] 
                                          & mask[0x00000060U]);
                __Vtemp_6[0x00000061U] = (lhs[0x00000061U] 
                                          & mask[0x00000061U]);
                __Vtemp_6[0x00000062U] = (lhs[0x00000062U] 
                                          & mask[0x00000062U]);
                __Vtemp_6[0x00000063U] = (lhs[0x00000063U] 
                                          & mask[0x00000063U]);
                __Vtemp_6[0x00000064U] = (lhs[0x00000064U] 
                                          & mask[0x00000064U]);
                __Vtemp_6[0x00000065U] = (lhs[0x00000065U] 
                                          & mask[0x00000065U]);
                __Vtemp_6[0x00000066U] = (lhs[0x00000066U] 
                                          & mask[0x00000066U]);
                __Vtemp_6[0x00000067U] = (lhs[0x00000067U] 
                                          & mask[0x00000067U]);
                __Vtemp_6[0x00000068U] = (lhs[0x00000068U] 
                                          & mask[0x00000068U]);
                __Vtemp_6[0x00000069U] = (lhs[0x00000069U] 
                                          & mask[0x00000069U]);
                __Vtemp_6[0x0000006aU] = (lhs[0x0000006aU] 
                                          & mask[0x0000006aU]);
                __Vtemp_6[0x0000006bU] = (lhs[0x0000006bU] 
                                          & mask[0x0000006bU]);
                __Vtemp_6[0x0000006cU] = (lhs[0x0000006cU] 
                                          & mask[0x0000006cU]);
                __Vtemp_6[0x0000006dU] = (lhs[0x0000006dU] 
                                          & mask[0x0000006dU]);
                __Vtemp_6[0x0000006eU] = (lhs[0x0000006eU] 
                                          & mask[0x0000006eU]);
                __Vtemp_6[0x0000006fU] = (lhs[0x0000006fU] 
                                          & mask[0x0000006fU]);
                __Vtemp_6[0x00000070U] = (lhs[0x00000070U] 
                                          & mask[0x00000070U]);
                __Vtemp_6[0x00000071U] = (lhs[0x00000071U] 
                                          & mask[0x00000071U]);
                __Vtemp_6[0x00000072U] = (lhs[0x00000072U] 
                                          & mask[0x00000072U]);
                __Vtemp_6[0x00000073U] = (lhs[0x00000073U] 
                                          & mask[0x00000073U]);
                __Vtemp_6[0x00000074U] = (lhs[0x00000074U] 
                                          & mask[0x00000074U]);
                __Vtemp_6[0x00000075U] = (lhs[0x00000075U] 
                                          & mask[0x00000075U]);
                __Vtemp_6[0x00000076U] = (lhs[0x00000076U] 
                                          & mask[0x00000076U]);
                __Vtemp_6[0x00000077U] = (lhs[0x00000077U] 
                                          & mask[0x00000077U]);
                __Vtemp_6[0x00000078U] = (lhs[0x00000078U] 
                                          & mask[0x00000078U]);
                __Vtemp_6[0x00000079U] = (lhs[0x00000079U] 
                                          & mask[0x00000079U]);
                __Vtemp_6[0x0000007aU] = (lhs[0x0000007aU] 
                                          & mask[0x0000007aU]);
                __Vtemp_6[0x0000007bU] = (lhs[0x0000007bU] 
                                          & mask[0x0000007bU]);
                __Vtemp_6[0x0000007cU] = (lhs[0x0000007cU] 
                                          & mask[0x0000007cU]);
                __Vtemp_6[0x0000007dU] = (lhs[0x0000007dU] 
                                          & mask[0x0000007dU]);
                __Vtemp_6[0x0000007eU] = (lhs[0x0000007eU] 
                                          & mask[0x0000007eU]);
                __Vtemp_6[0x0000007fU] = (lhs[0x0000007fU] 
                                          & mask[0x0000007fU]);
                __Vtemp_7[0U] = (rhs[0U] & mask[0U]);
                __Vtemp_7[1U] = (rhs[1U] & mask[1U]);
                __Vtemp_7[2U] = (rhs[2U] & mask[2U]);
                __Vtemp_7[3U] = (rhs[3U] & mask[3U]);
                __Vtemp_7[4U] = (rhs[4U] & mask[4U]);
                __Vtemp_7[5U] = (rhs[5U] & mask[5U]);
                __Vtemp_7[6U] = (rhs[6U] & mask[6U]);
                __Vtemp_7[7U] = (rhs[7U] & mask[7U]);
                __Vtemp_7[8U] = (rhs[8U] & mask[8U]);
                __Vtemp_7[9U] = (rhs[9U] & mask[9U]);
                __Vtemp_7[0x0000000aU] = (rhs[0x0000000aU] 
                                          & mask[0x0000000aU]);
                __Vtemp_7[0x0000000bU] = (rhs[0x0000000bU] 
                                          & mask[0x0000000bU]);
                __Vtemp_7[0x0000000cU] = (rhs[0x0000000cU] 
                                          & mask[0x0000000cU]);
                __Vtemp_7[0x0000000dU] = (rhs[0x0000000dU] 
                                          & mask[0x0000000dU]);
                __Vtemp_7[0x0000000eU] = (rhs[0x0000000eU] 
                                          & mask[0x0000000eU]);
                __Vtemp_7[0x0000000fU] = (rhs[0x0000000fU] 
                                          & mask[0x0000000fU]);
                __Vtemp_7[0x00000010U] = (rhs[0x00000010U] 
                                          & mask[0x00000010U]);
                __Vtemp_7[0x00000011U] = (rhs[0x00000011U] 
                                          & mask[0x00000011U]);
                __Vtemp_7[0x00000012U] = (rhs[0x00000012U] 
                                          & mask[0x00000012U]);
                __Vtemp_7[0x00000013U] = (rhs[0x00000013U] 
                                          & mask[0x00000013U]);
                __Vtemp_7[0x00000014U] = (rhs[0x00000014U] 
                                          & mask[0x00000014U]);
                __Vtemp_7[0x00000015U] = (rhs[0x00000015U] 
                                          & mask[0x00000015U]);
                __Vtemp_7[0x00000016U] = (rhs[0x00000016U] 
                                          & mask[0x00000016U]);
                __Vtemp_7[0x00000017U] = (rhs[0x00000017U] 
                                          & mask[0x00000017U]);
                __Vtemp_7[0x00000018U] = (rhs[0x00000018U] 
                                          & mask[0x00000018U]);
                __Vtemp_7[0x00000019U] = (rhs[0x00000019U] 
                                          & mask[0x00000019U]);
                __Vtemp_7[0x0000001aU] = (rhs[0x0000001aU] 
                                          & mask[0x0000001aU]);
                __Vtemp_7[0x0000001bU] = (rhs[0x0000001bU] 
                                          & mask[0x0000001bU]);
                __Vtemp_7[0x0000001cU] = (rhs[0x0000001cU] 
                                          & mask[0x0000001cU]);
                __Vtemp_7[0x0000001dU] = (rhs[0x0000001dU] 
                                          & mask[0x0000001dU]);
                __Vtemp_7[0x0000001eU] = (rhs[0x0000001eU] 
                                          & mask[0x0000001eU]);
                __Vtemp_7[0x0000001fU] = (rhs[0x0000001fU] 
                                          & mask[0x0000001fU]);
                __Vtemp_7[0x00000020U] = (rhs[0x00000020U] 
                                          & mask[0x00000020U]);
                __Vtemp_7[0x00000021U] = (rhs[0x00000021U] 
                                          & mask[0x00000021U]);
                __Vtemp_7[0x00000022U] = (rhs[0x00000022U] 
                                          & mask[0x00000022U]);
                __Vtemp_7[0x00000023U] = (rhs[0x00000023U] 
                                          & mask[0x00000023U]);
                __Vtemp_7[0x00000024U] = (rhs[0x00000024U] 
                                          & mask[0x00000024U]);
                __Vtemp_7[0x00000025U] = (rhs[0x00000025U] 
                                          & mask[0x00000025U]);
                __Vtemp_7[0x00000026U] = (rhs[0x00000026U] 
                                          & mask[0x00000026U]);
                __Vtemp_7[0x00000027U] = (rhs[0x00000027U] 
                                          & mask[0x00000027U]);
                __Vtemp_7[0x00000028U] = (rhs[0x00000028U] 
                                          & mask[0x00000028U]);
                __Vtemp_7[0x00000029U] = (rhs[0x00000029U] 
                                          & mask[0x00000029U]);
                __Vtemp_7[0x0000002aU] = (rhs[0x0000002aU] 
                                          & mask[0x0000002aU]);
                __Vtemp_7[0x0000002bU] = (rhs[0x0000002bU] 
                                          & mask[0x0000002bU]);
                __Vtemp_7[0x0000002cU] = (rhs[0x0000002cU] 
                                          & mask[0x0000002cU]);
                __Vtemp_7[0x0000002dU] = (rhs[0x0000002dU] 
                                          & mask[0x0000002dU]);
                __Vtemp_7[0x0000002eU] = (rhs[0x0000002eU] 
                                          & mask[0x0000002eU]);
                __Vtemp_7[0x0000002fU] = (rhs[0x0000002fU] 
                                          & mask[0x0000002fU]);
                __Vtemp_7[0x00000030U] = (rhs[0x00000030U] 
                                          & mask[0x00000030U]);
                __Vtemp_7[0x00000031U] = (rhs[0x00000031U] 
                                          & mask[0x00000031U]);
                __Vtemp_7[0x00000032U] = (rhs[0x00000032U] 
                                          & mask[0x00000032U]);
                __Vtemp_7[0x00000033U] = (rhs[0x00000033U] 
                                          & mask[0x00000033U]);
                __Vtemp_7[0x00000034U] = (rhs[0x00000034U] 
                                          & mask[0x00000034U]);
                __Vtemp_7[0x00000035U] = (rhs[0x00000035U] 
                                          & mask[0x00000035U]);
                __Vtemp_7[0x00000036U] = (rhs[0x00000036U] 
                                          & mask[0x00000036U]);
                __Vtemp_7[0x00000037U] = (rhs[0x00000037U] 
                                          & mask[0x00000037U]);
                __Vtemp_7[0x00000038U] = (rhs[0x00000038U] 
                                          & mask[0x00000038U]);
                __Vtemp_7[0x00000039U] = (rhs[0x00000039U] 
                                          & mask[0x00000039U]);
                __Vtemp_7[0x0000003aU] = (rhs[0x0000003aU] 
                                          & mask[0x0000003aU]);
                __Vtemp_7[0x0000003bU] = (rhs[0x0000003bU] 
                                          & mask[0x0000003bU]);
                __Vtemp_7[0x0000003cU] = (rhs[0x0000003cU] 
                                          & mask[0x0000003cU]);
                __Vtemp_7[0x0000003dU] = (rhs[0x0000003dU] 
                                          & mask[0x0000003dU]);
                __Vtemp_7[0x0000003eU] = (rhs[0x0000003eU] 
                                          & mask[0x0000003eU]);
                __Vtemp_7[0x0000003fU] = (rhs[0x0000003fU] 
                                          & mask[0x0000003fU]);
                __Vtemp_7[0x00000040U] = (rhs[0x00000040U] 
                                          & mask[0x00000040U]);
                __Vtemp_7[0x00000041U] = (rhs[0x00000041U] 
                                          & mask[0x00000041U]);
                __Vtemp_7[0x00000042U] = (rhs[0x00000042U] 
                                          & mask[0x00000042U]);
                __Vtemp_7[0x00000043U] = (rhs[0x00000043U] 
                                          & mask[0x00000043U]);
                __Vtemp_7[0x00000044U] = (rhs[0x00000044U] 
                                          & mask[0x00000044U]);
                __Vtemp_7[0x00000045U] = (rhs[0x00000045U] 
                                          & mask[0x00000045U]);
                __Vtemp_7[0x00000046U] = (rhs[0x00000046U] 
                                          & mask[0x00000046U]);
                __Vtemp_7[0x00000047U] = (rhs[0x00000047U] 
                                          & mask[0x00000047U]);
                __Vtemp_7[0x00000048U] = (rhs[0x00000048U] 
                                          & mask[0x00000048U]);
                __Vtemp_7[0x00000049U] = (rhs[0x00000049U] 
                                          & mask[0x00000049U]);
                __Vtemp_7[0x0000004aU] = (rhs[0x0000004aU] 
                                          & mask[0x0000004aU]);
                __Vtemp_7[0x0000004bU] = (rhs[0x0000004bU] 
                                          & mask[0x0000004bU]);
                __Vtemp_7[0x0000004cU] = (rhs[0x0000004cU] 
                                          & mask[0x0000004cU]);
                __Vtemp_7[0x0000004dU] = (rhs[0x0000004dU] 
                                          & mask[0x0000004dU]);
                __Vtemp_7[0x0000004eU] = (rhs[0x0000004eU] 
                                          & mask[0x0000004eU]);
                __Vtemp_7[0x0000004fU] = (rhs[0x0000004fU] 
                                          & mask[0x0000004fU]);
                __Vtemp_7[0x00000050U] = (rhs[0x00000050U] 
                                          & mask[0x00000050U]);
                __Vtemp_7[0x00000051U] = (rhs[0x00000051U] 
                                          & mask[0x00000051U]);
                __Vtemp_7[0x00000052U] = (rhs[0x00000052U] 
                                          & mask[0x00000052U]);
                __Vtemp_7[0x00000053U] = (rhs[0x00000053U] 
                                          & mask[0x00000053U]);
                __Vtemp_7[0x00000054U] = (rhs[0x00000054U] 
                                          & mask[0x00000054U]);
                __Vtemp_7[0x00000055U] = (rhs[0x00000055U] 
                                          & mask[0x00000055U]);
                __Vtemp_7[0x00000056U] = (rhs[0x00000056U] 
                                          & mask[0x00000056U]);
                __Vtemp_7[0x00000057U] = (rhs[0x00000057U] 
                                          & mask[0x00000057U]);
                __Vtemp_7[0x00000058U] = (rhs[0x00000058U] 
                                          & mask[0x00000058U]);
                __Vtemp_7[0x00000059U] = (rhs[0x00000059U] 
                                          & mask[0x00000059U]);
                __Vtemp_7[0x0000005aU] = (rhs[0x0000005aU] 
                                          & mask[0x0000005aU]);
                __Vtemp_7[0x0000005bU] = (rhs[0x0000005bU] 
                                          & mask[0x0000005bU]);
                __Vtemp_7[0x0000005cU] = (rhs[0x0000005cU] 
                                          & mask[0x0000005cU]);
                __Vtemp_7[0x0000005dU] = (rhs[0x0000005dU] 
                                          & mask[0x0000005dU]);
                __Vtemp_7[0x0000005eU] = (rhs[0x0000005eU] 
                                          & mask[0x0000005eU]);
                __Vtemp_7[0x0000005fU] = (rhs[0x0000005fU] 
                                          & mask[0x0000005fU]);
                __Vtemp_7[0x00000060U] = (rhs[0x00000060U] 
                                          & mask[0x00000060U]);
                __Vtemp_7[0x00000061U] = (rhs[0x00000061U] 
                                          & mask[0x00000061U]);
                __Vtemp_7[0x00000062U] = (rhs[0x00000062U] 
                                          & mask[0x00000062U]);
                __Vtemp_7[0x00000063U] = (rhs[0x00000063U] 
                                          & mask[0x00000063U]);
                __Vtemp_7[0x00000064U] = (rhs[0x00000064U] 
                                          & mask[0x00000064U]);
                __Vtemp_7[0x00000065U] = (rhs[0x00000065U] 
                                          & mask[0x00000065U]);
                __Vtemp_7[0x00000066U] = (rhs[0x00000066U] 
                                          & mask[0x00000066U]);
                __Vtemp_7[0x00000067U] = (rhs[0x00000067U] 
                                          & mask[0x00000067U]);
                __Vtemp_7[0x00000068U] = (rhs[0x00000068U] 
                                          & mask[0x00000068U]);
                __Vtemp_7[0x00000069U] = (rhs[0x00000069U] 
                                          & mask[0x00000069U]);
                __Vtemp_7[0x0000006aU] = (rhs[0x0000006aU] 
                                          & mask[0x0000006aU]);
                __Vtemp_7[0x0000006bU] = (rhs[0x0000006bU] 
                                          & mask[0x0000006bU]);
                __Vtemp_7[0x0000006cU] = (rhs[0x0000006cU] 
                                          & mask[0x0000006cU]);
                __Vtemp_7[0x0000006dU] = (rhs[0x0000006dU] 
                                          & mask[0x0000006dU]);
                __Vtemp_7[0x0000006eU] = (rhs[0x0000006eU] 
                                          & mask[0x0000006eU]);
                __Vtemp_7[0x0000006fU] = (rhs[0x0000006fU] 
                                          & mask[0x0000006fU]);
                __Vtemp_7[0x00000070U] = (rhs[0x00000070U] 
                                          & mask[0x00000070U]);
                __Vtemp_7[0x00000071U] = (rhs[0x00000071U] 
                                          & mask[0x00000071U]);
                __Vtemp_7[0x00000072U] = (rhs[0x00000072U] 
                                          & mask[0x00000072U]);
                __Vtemp_7[0x00000073U] = (rhs[0x00000073U] 
                                          & mask[0x00000073U]);
                __Vtemp_7[0x00000074U] = (rhs[0x00000074U] 
                                          & mask[0x00000074U]);
                __Vtemp_7[0x00000075U] = (rhs[0x00000075U] 
                                          & mask[0x00000075U]);
                __Vtemp_7[0x00000076U] = (rhs[0x00000076U] 
                                          & mask[0x00000076U]);
                __Vtemp_7[0x00000077U] = (rhs[0x00000077U] 
                                          & mask[0x00000077U]);
                __Vtemp_7[0x00000078U] = (rhs[0x00000078U] 
                                          & mask[0x00000078U]);
                __Vtemp_7[0x00000079U] = (rhs[0x00000079U] 
                                          & mask[0x00000079U]);
                __Vtemp_7[0x0000007aU] = (rhs[0x0000007aU] 
                                          & mask[0x0000007aU]);
                __Vtemp_7[0x0000007bU] = (rhs[0x0000007bU] 
                                          & mask[0x0000007bU]);
                __Vtemp_7[0x0000007cU] = (rhs[0x0000007cU] 
                                          & mask[0x0000007cU]);
                __Vtemp_7[0x0000007dU] = (rhs[0x0000007dU] 
                                          & mask[0x0000007dU]);
                __Vtemp_7[0x0000007eU] = (rhs[0x0000007eU] 
                                          & mask[0x0000007eU]);
                __Vtemp_7[0x0000007fU] = (rhs[0x0000007fU] 
                                          & mask[0x0000007fU]);
                VL_SFORMAT_NX(64,msg,"%@: lhs = 'o%0o : rhs = 'o%0o",0,
                              -1,&(name),4096,__Vtemp_6.data(),
                              4096,__Vtemp_7.data());
            } else if ((0x02000000U == radix)) {
                __Vtemp_8[0U] = (lhs[0U] & mask[0U]);
                __Vtemp_8[1U] = (lhs[1U] & mask[1U]);
                __Vtemp_8[2U] = (lhs[2U] & mask[2U]);
                __Vtemp_8[3U] = (lhs[3U] & mask[3U]);
                __Vtemp_8[4U] = (lhs[4U] & mask[4U]);
                __Vtemp_8[5U] = (lhs[5U] & mask[5U]);
                __Vtemp_8[6U] = (lhs[6U] & mask[6U]);
                __Vtemp_8[7U] = (lhs[7U] & mask[7U]);
                __Vtemp_8[8U] = (lhs[8U] & mask[8U]);
                __Vtemp_8[9U] = (lhs[9U] & mask[9U]);
                __Vtemp_8[0x0000000aU] = (lhs[0x0000000aU] 
                                          & mask[0x0000000aU]);
                __Vtemp_8[0x0000000bU] = (lhs[0x0000000bU] 
                                          & mask[0x0000000bU]);
                __Vtemp_8[0x0000000cU] = (lhs[0x0000000cU] 
                                          & mask[0x0000000cU]);
                __Vtemp_8[0x0000000dU] = (lhs[0x0000000dU] 
                                          & mask[0x0000000dU]);
                __Vtemp_8[0x0000000eU] = (lhs[0x0000000eU] 
                                          & mask[0x0000000eU]);
                __Vtemp_8[0x0000000fU] = (lhs[0x0000000fU] 
                                          & mask[0x0000000fU]);
                __Vtemp_8[0x00000010U] = (lhs[0x00000010U] 
                                          & mask[0x00000010U]);
                __Vtemp_8[0x00000011U] = (lhs[0x00000011U] 
                                          & mask[0x00000011U]);
                __Vtemp_8[0x00000012U] = (lhs[0x00000012U] 
                                          & mask[0x00000012U]);
                __Vtemp_8[0x00000013U] = (lhs[0x00000013U] 
                                          & mask[0x00000013U]);
                __Vtemp_8[0x00000014U] = (lhs[0x00000014U] 
                                          & mask[0x00000014U]);
                __Vtemp_8[0x00000015U] = (lhs[0x00000015U] 
                                          & mask[0x00000015U]);
                __Vtemp_8[0x00000016U] = (lhs[0x00000016U] 
                                          & mask[0x00000016U]);
                __Vtemp_8[0x00000017U] = (lhs[0x00000017U] 
                                          & mask[0x00000017U]);
                __Vtemp_8[0x00000018U] = (lhs[0x00000018U] 
                                          & mask[0x00000018U]);
                __Vtemp_8[0x00000019U] = (lhs[0x00000019U] 
                                          & mask[0x00000019U]);
                __Vtemp_8[0x0000001aU] = (lhs[0x0000001aU] 
                                          & mask[0x0000001aU]);
                __Vtemp_8[0x0000001bU] = (lhs[0x0000001bU] 
                                          & mask[0x0000001bU]);
                __Vtemp_8[0x0000001cU] = (lhs[0x0000001cU] 
                                          & mask[0x0000001cU]);
                __Vtemp_8[0x0000001dU] = (lhs[0x0000001dU] 
                                          & mask[0x0000001dU]);
                __Vtemp_8[0x0000001eU] = (lhs[0x0000001eU] 
                                          & mask[0x0000001eU]);
                __Vtemp_8[0x0000001fU] = (lhs[0x0000001fU] 
                                          & mask[0x0000001fU]);
                __Vtemp_8[0x00000020U] = (lhs[0x00000020U] 
                                          & mask[0x00000020U]);
                __Vtemp_8[0x00000021U] = (lhs[0x00000021U] 
                                          & mask[0x00000021U]);
                __Vtemp_8[0x00000022U] = (lhs[0x00000022U] 
                                          & mask[0x00000022U]);
                __Vtemp_8[0x00000023U] = (lhs[0x00000023U] 
                                          & mask[0x00000023U]);
                __Vtemp_8[0x00000024U] = (lhs[0x00000024U] 
                                          & mask[0x00000024U]);
                __Vtemp_8[0x00000025U] = (lhs[0x00000025U] 
                                          & mask[0x00000025U]);
                __Vtemp_8[0x00000026U] = (lhs[0x00000026U] 
                                          & mask[0x00000026U]);
                __Vtemp_8[0x00000027U] = (lhs[0x00000027U] 
                                          & mask[0x00000027U]);
                __Vtemp_8[0x00000028U] = (lhs[0x00000028U] 
                                          & mask[0x00000028U]);
                __Vtemp_8[0x00000029U] = (lhs[0x00000029U] 
                                          & mask[0x00000029U]);
                __Vtemp_8[0x0000002aU] = (lhs[0x0000002aU] 
                                          & mask[0x0000002aU]);
                __Vtemp_8[0x0000002bU] = (lhs[0x0000002bU] 
                                          & mask[0x0000002bU]);
                __Vtemp_8[0x0000002cU] = (lhs[0x0000002cU] 
                                          & mask[0x0000002cU]);
                __Vtemp_8[0x0000002dU] = (lhs[0x0000002dU] 
                                          & mask[0x0000002dU]);
                __Vtemp_8[0x0000002eU] = (lhs[0x0000002eU] 
                                          & mask[0x0000002eU]);
                __Vtemp_8[0x0000002fU] = (lhs[0x0000002fU] 
                                          & mask[0x0000002fU]);
                __Vtemp_8[0x00000030U] = (lhs[0x00000030U] 
                                          & mask[0x00000030U]);
                __Vtemp_8[0x00000031U] = (lhs[0x00000031U] 
                                          & mask[0x00000031U]);
                __Vtemp_8[0x00000032U] = (lhs[0x00000032U] 
                                          & mask[0x00000032U]);
                __Vtemp_8[0x00000033U] = (lhs[0x00000033U] 
                                          & mask[0x00000033U]);
                __Vtemp_8[0x00000034U] = (lhs[0x00000034U] 
                                          & mask[0x00000034U]);
                __Vtemp_8[0x00000035U] = (lhs[0x00000035U] 
                                          & mask[0x00000035U]);
                __Vtemp_8[0x00000036U] = (lhs[0x00000036U] 
                                          & mask[0x00000036U]);
                __Vtemp_8[0x00000037U] = (lhs[0x00000037U] 
                                          & mask[0x00000037U]);
                __Vtemp_8[0x00000038U] = (lhs[0x00000038U] 
                                          & mask[0x00000038U]);
                __Vtemp_8[0x00000039U] = (lhs[0x00000039U] 
                                          & mask[0x00000039U]);
                __Vtemp_8[0x0000003aU] = (lhs[0x0000003aU] 
                                          & mask[0x0000003aU]);
                __Vtemp_8[0x0000003bU] = (lhs[0x0000003bU] 
                                          & mask[0x0000003bU]);
                __Vtemp_8[0x0000003cU] = (lhs[0x0000003cU] 
                                          & mask[0x0000003cU]);
                __Vtemp_8[0x0000003dU] = (lhs[0x0000003dU] 
                                          & mask[0x0000003dU]);
                __Vtemp_8[0x0000003eU] = (lhs[0x0000003eU] 
                                          & mask[0x0000003eU]);
                __Vtemp_8[0x0000003fU] = (lhs[0x0000003fU] 
                                          & mask[0x0000003fU]);
                __Vtemp_8[0x00000040U] = (lhs[0x00000040U] 
                                          & mask[0x00000040U]);
                __Vtemp_8[0x00000041U] = (lhs[0x00000041U] 
                                          & mask[0x00000041U]);
                __Vtemp_8[0x00000042U] = (lhs[0x00000042U] 
                                          & mask[0x00000042U]);
                __Vtemp_8[0x00000043U] = (lhs[0x00000043U] 
                                          & mask[0x00000043U]);
                __Vtemp_8[0x00000044U] = (lhs[0x00000044U] 
                                          & mask[0x00000044U]);
                __Vtemp_8[0x00000045U] = (lhs[0x00000045U] 
                                          & mask[0x00000045U]);
                __Vtemp_8[0x00000046U] = (lhs[0x00000046U] 
                                          & mask[0x00000046U]);
                __Vtemp_8[0x00000047U] = (lhs[0x00000047U] 
                                          & mask[0x00000047U]);
                __Vtemp_8[0x00000048U] = (lhs[0x00000048U] 
                                          & mask[0x00000048U]);
                __Vtemp_8[0x00000049U] = (lhs[0x00000049U] 
                                          & mask[0x00000049U]);
                __Vtemp_8[0x0000004aU] = (lhs[0x0000004aU] 
                                          & mask[0x0000004aU]);
                __Vtemp_8[0x0000004bU] = (lhs[0x0000004bU] 
                                          & mask[0x0000004bU]);
                __Vtemp_8[0x0000004cU] = (lhs[0x0000004cU] 
                                          & mask[0x0000004cU]);
                __Vtemp_8[0x0000004dU] = (lhs[0x0000004dU] 
                                          & mask[0x0000004dU]);
                __Vtemp_8[0x0000004eU] = (lhs[0x0000004eU] 
                                          & mask[0x0000004eU]);
                __Vtemp_8[0x0000004fU] = (lhs[0x0000004fU] 
                                          & mask[0x0000004fU]);
                __Vtemp_8[0x00000050U] = (lhs[0x00000050U] 
                                          & mask[0x00000050U]);
                __Vtemp_8[0x00000051U] = (lhs[0x00000051U] 
                                          & mask[0x00000051U]);
                __Vtemp_8[0x00000052U] = (lhs[0x00000052U] 
                                          & mask[0x00000052U]);
                __Vtemp_8[0x00000053U] = (lhs[0x00000053U] 
                                          & mask[0x00000053U]);
                __Vtemp_8[0x00000054U] = (lhs[0x00000054U] 
                                          & mask[0x00000054U]);
                __Vtemp_8[0x00000055U] = (lhs[0x00000055U] 
                                          & mask[0x00000055U]);
                __Vtemp_8[0x00000056U] = (lhs[0x00000056U] 
                                          & mask[0x00000056U]);
                __Vtemp_8[0x00000057U] = (lhs[0x00000057U] 
                                          & mask[0x00000057U]);
                __Vtemp_8[0x00000058U] = (lhs[0x00000058U] 
                                          & mask[0x00000058U]);
                __Vtemp_8[0x00000059U] = (lhs[0x00000059U] 
                                          & mask[0x00000059U]);
                __Vtemp_8[0x0000005aU] = (lhs[0x0000005aU] 
                                          & mask[0x0000005aU]);
                __Vtemp_8[0x0000005bU] = (lhs[0x0000005bU] 
                                          & mask[0x0000005bU]);
                __Vtemp_8[0x0000005cU] = (lhs[0x0000005cU] 
                                          & mask[0x0000005cU]);
                __Vtemp_8[0x0000005dU] = (lhs[0x0000005dU] 
                                          & mask[0x0000005dU]);
                __Vtemp_8[0x0000005eU] = (lhs[0x0000005eU] 
                                          & mask[0x0000005eU]);
                __Vtemp_8[0x0000005fU] = (lhs[0x0000005fU] 
                                          & mask[0x0000005fU]);
                __Vtemp_8[0x00000060U] = (lhs[0x00000060U] 
                                          & mask[0x00000060U]);
                __Vtemp_8[0x00000061U] = (lhs[0x00000061U] 
                                          & mask[0x00000061U]);
                __Vtemp_8[0x00000062U] = (lhs[0x00000062U] 
                                          & mask[0x00000062U]);
                __Vtemp_8[0x00000063U] = (lhs[0x00000063U] 
                                          & mask[0x00000063U]);
                __Vtemp_8[0x00000064U] = (lhs[0x00000064U] 
                                          & mask[0x00000064U]);
                __Vtemp_8[0x00000065U] = (lhs[0x00000065U] 
                                          & mask[0x00000065U]);
                __Vtemp_8[0x00000066U] = (lhs[0x00000066U] 
                                          & mask[0x00000066U]);
                __Vtemp_8[0x00000067U] = (lhs[0x00000067U] 
                                          & mask[0x00000067U]);
                __Vtemp_8[0x00000068U] = (lhs[0x00000068U] 
                                          & mask[0x00000068U]);
                __Vtemp_8[0x00000069U] = (lhs[0x00000069U] 
                                          & mask[0x00000069U]);
                __Vtemp_8[0x0000006aU] = (lhs[0x0000006aU] 
                                          & mask[0x0000006aU]);
                __Vtemp_8[0x0000006bU] = (lhs[0x0000006bU] 
                                          & mask[0x0000006bU]);
                __Vtemp_8[0x0000006cU] = (lhs[0x0000006cU] 
                                          & mask[0x0000006cU]);
                __Vtemp_8[0x0000006dU] = (lhs[0x0000006dU] 
                                          & mask[0x0000006dU]);
                __Vtemp_8[0x0000006eU] = (lhs[0x0000006eU] 
                                          & mask[0x0000006eU]);
                __Vtemp_8[0x0000006fU] = (lhs[0x0000006fU] 
                                          & mask[0x0000006fU]);
                __Vtemp_8[0x00000070U] = (lhs[0x00000070U] 
                                          & mask[0x00000070U]);
                __Vtemp_8[0x00000071U] = (lhs[0x00000071U] 
                                          & mask[0x00000071U]);
                __Vtemp_8[0x00000072U] = (lhs[0x00000072U] 
                                          & mask[0x00000072U]);
                __Vtemp_8[0x00000073U] = (lhs[0x00000073U] 
                                          & mask[0x00000073U]);
                __Vtemp_8[0x00000074U] = (lhs[0x00000074U] 
                                          & mask[0x00000074U]);
                __Vtemp_8[0x00000075U] = (lhs[0x00000075U] 
                                          & mask[0x00000075U]);
                __Vtemp_8[0x00000076U] = (lhs[0x00000076U] 
                                          & mask[0x00000076U]);
                __Vtemp_8[0x00000077U] = (lhs[0x00000077U] 
                                          & mask[0x00000077U]);
                __Vtemp_8[0x00000078U] = (lhs[0x00000078U] 
                                          & mask[0x00000078U]);
                __Vtemp_8[0x00000079U] = (lhs[0x00000079U] 
                                          & mask[0x00000079U]);
                __Vtemp_8[0x0000007aU] = (lhs[0x0000007aU] 
                                          & mask[0x0000007aU]);
                __Vtemp_8[0x0000007bU] = (lhs[0x0000007bU] 
                                          & mask[0x0000007bU]);
                __Vtemp_8[0x0000007cU] = (lhs[0x0000007cU] 
                                          & mask[0x0000007cU]);
                __Vtemp_8[0x0000007dU] = (lhs[0x0000007dU] 
                                          & mask[0x0000007dU]);
                __Vtemp_8[0x0000007eU] = (lhs[0x0000007eU] 
                                          & mask[0x0000007eU]);
                __Vtemp_8[0x0000007fU] = (lhs[0x0000007fU] 
                                          & mask[0x0000007fU]);
                __Vtemp_9[0U] = (rhs[0U] & mask[0U]);
                __Vtemp_9[1U] = (rhs[1U] & mask[1U]);
                __Vtemp_9[2U] = (rhs[2U] & mask[2U]);
                __Vtemp_9[3U] = (rhs[3U] & mask[3U]);
                __Vtemp_9[4U] = (rhs[4U] & mask[4U]);
                __Vtemp_9[5U] = (rhs[5U] & mask[5U]);
                __Vtemp_9[6U] = (rhs[6U] & mask[6U]);
                __Vtemp_9[7U] = (rhs[7U] & mask[7U]);
                __Vtemp_9[8U] = (rhs[8U] & mask[8U]);
                __Vtemp_9[9U] = (rhs[9U] & mask[9U]);
                __Vtemp_9[0x0000000aU] = (rhs[0x0000000aU] 
                                          & mask[0x0000000aU]);
                __Vtemp_9[0x0000000bU] = (rhs[0x0000000bU] 
                                          & mask[0x0000000bU]);
                __Vtemp_9[0x0000000cU] = (rhs[0x0000000cU] 
                                          & mask[0x0000000cU]);
                __Vtemp_9[0x0000000dU] = (rhs[0x0000000dU] 
                                          & mask[0x0000000dU]);
                __Vtemp_9[0x0000000eU] = (rhs[0x0000000eU] 
                                          & mask[0x0000000eU]);
                __Vtemp_9[0x0000000fU] = (rhs[0x0000000fU] 
                                          & mask[0x0000000fU]);
                __Vtemp_9[0x00000010U] = (rhs[0x00000010U] 
                                          & mask[0x00000010U]);
                __Vtemp_9[0x00000011U] = (rhs[0x00000011U] 
                                          & mask[0x00000011U]);
                __Vtemp_9[0x00000012U] = (rhs[0x00000012U] 
                                          & mask[0x00000012U]);
                __Vtemp_9[0x00000013U] = (rhs[0x00000013U] 
                                          & mask[0x00000013U]);
                __Vtemp_9[0x00000014U] = (rhs[0x00000014U] 
                                          & mask[0x00000014U]);
                __Vtemp_9[0x00000015U] = (rhs[0x00000015U] 
                                          & mask[0x00000015U]);
                __Vtemp_9[0x00000016U] = (rhs[0x00000016U] 
                                          & mask[0x00000016U]);
                __Vtemp_9[0x00000017U] = (rhs[0x00000017U] 
                                          & mask[0x00000017U]);
                __Vtemp_9[0x00000018U] = (rhs[0x00000018U] 
                                          & mask[0x00000018U]);
                __Vtemp_9[0x00000019U] = (rhs[0x00000019U] 
                                          & mask[0x00000019U]);
                __Vtemp_9[0x0000001aU] = (rhs[0x0000001aU] 
                                          & mask[0x0000001aU]);
                __Vtemp_9[0x0000001bU] = (rhs[0x0000001bU] 
                                          & mask[0x0000001bU]);
                __Vtemp_9[0x0000001cU] = (rhs[0x0000001cU] 
                                          & mask[0x0000001cU]);
                __Vtemp_9[0x0000001dU] = (rhs[0x0000001dU] 
                                          & mask[0x0000001dU]);
                __Vtemp_9[0x0000001eU] = (rhs[0x0000001eU] 
                                          & mask[0x0000001eU]);
                __Vtemp_9[0x0000001fU] = (rhs[0x0000001fU] 
                                          & mask[0x0000001fU]);
                __Vtemp_9[0x00000020U] = (rhs[0x00000020U] 
                                          & mask[0x00000020U]);
                __Vtemp_9[0x00000021U] = (rhs[0x00000021U] 
                                          & mask[0x00000021U]);
                __Vtemp_9[0x00000022U] = (rhs[0x00000022U] 
                                          & mask[0x00000022U]);
                __Vtemp_9[0x00000023U] = (rhs[0x00000023U] 
                                          & mask[0x00000023U]);
                __Vtemp_9[0x00000024U] = (rhs[0x00000024U] 
                                          & mask[0x00000024U]);
                __Vtemp_9[0x00000025U] = (rhs[0x00000025U] 
                                          & mask[0x00000025U]);
                __Vtemp_9[0x00000026U] = (rhs[0x00000026U] 
                                          & mask[0x00000026U]);
                __Vtemp_9[0x00000027U] = (rhs[0x00000027U] 
                                          & mask[0x00000027U]);
                __Vtemp_9[0x00000028U] = (rhs[0x00000028U] 
                                          & mask[0x00000028U]);
                __Vtemp_9[0x00000029U] = (rhs[0x00000029U] 
                                          & mask[0x00000029U]);
                __Vtemp_9[0x0000002aU] = (rhs[0x0000002aU] 
                                          & mask[0x0000002aU]);
                __Vtemp_9[0x0000002bU] = (rhs[0x0000002bU] 
                                          & mask[0x0000002bU]);
                __Vtemp_9[0x0000002cU] = (rhs[0x0000002cU] 
                                          & mask[0x0000002cU]);
                __Vtemp_9[0x0000002dU] = (rhs[0x0000002dU] 
                                          & mask[0x0000002dU]);
                __Vtemp_9[0x0000002eU] = (rhs[0x0000002eU] 
                                          & mask[0x0000002eU]);
                __Vtemp_9[0x0000002fU] = (rhs[0x0000002fU] 
                                          & mask[0x0000002fU]);
                __Vtemp_9[0x00000030U] = (rhs[0x00000030U] 
                                          & mask[0x00000030U]);
                __Vtemp_9[0x00000031U] = (rhs[0x00000031U] 
                                          & mask[0x00000031U]);
                __Vtemp_9[0x00000032U] = (rhs[0x00000032U] 
                                          & mask[0x00000032U]);
                __Vtemp_9[0x00000033U] = (rhs[0x00000033U] 
                                          & mask[0x00000033U]);
                __Vtemp_9[0x00000034U] = (rhs[0x00000034U] 
                                          & mask[0x00000034U]);
                __Vtemp_9[0x00000035U] = (rhs[0x00000035U] 
                                          & mask[0x00000035U]);
                __Vtemp_9[0x00000036U] = (rhs[0x00000036U] 
                                          & mask[0x00000036U]);
                __Vtemp_9[0x00000037U] = (rhs[0x00000037U] 
                                          & mask[0x00000037U]);
                __Vtemp_9[0x00000038U] = (rhs[0x00000038U] 
                                          & mask[0x00000038U]);
                __Vtemp_9[0x00000039U] = (rhs[0x00000039U] 
                                          & mask[0x00000039U]);
                __Vtemp_9[0x0000003aU] = (rhs[0x0000003aU] 
                                          & mask[0x0000003aU]);
                __Vtemp_9[0x0000003bU] = (rhs[0x0000003bU] 
                                          & mask[0x0000003bU]);
                __Vtemp_9[0x0000003cU] = (rhs[0x0000003cU] 
                                          & mask[0x0000003cU]);
                __Vtemp_9[0x0000003dU] = (rhs[0x0000003dU] 
                                          & mask[0x0000003dU]);
                __Vtemp_9[0x0000003eU] = (rhs[0x0000003eU] 
                                          & mask[0x0000003eU]);
                __Vtemp_9[0x0000003fU] = (rhs[0x0000003fU] 
                                          & mask[0x0000003fU]);
                __Vtemp_9[0x00000040U] = (rhs[0x00000040U] 
                                          & mask[0x00000040U]);
                __Vtemp_9[0x00000041U] = (rhs[0x00000041U] 
                                          & mask[0x00000041U]);
                __Vtemp_9[0x00000042U] = (rhs[0x00000042U] 
                                          & mask[0x00000042U]);
                __Vtemp_9[0x00000043U] = (rhs[0x00000043U] 
                                          & mask[0x00000043U]);
                __Vtemp_9[0x00000044U] = (rhs[0x00000044U] 
                                          & mask[0x00000044U]);
                __Vtemp_9[0x00000045U] = (rhs[0x00000045U] 
                                          & mask[0x00000045U]);
                __Vtemp_9[0x00000046U] = (rhs[0x00000046U] 
                                          & mask[0x00000046U]);
                __Vtemp_9[0x00000047U] = (rhs[0x00000047U] 
                                          & mask[0x00000047U]);
                __Vtemp_9[0x00000048U] = (rhs[0x00000048U] 
                                          & mask[0x00000048U]);
                __Vtemp_9[0x00000049U] = (rhs[0x00000049U] 
                                          & mask[0x00000049U]);
                __Vtemp_9[0x0000004aU] = (rhs[0x0000004aU] 
                                          & mask[0x0000004aU]);
                __Vtemp_9[0x0000004bU] = (rhs[0x0000004bU] 
                                          & mask[0x0000004bU]);
                __Vtemp_9[0x0000004cU] = (rhs[0x0000004cU] 
                                          & mask[0x0000004cU]);
                __Vtemp_9[0x0000004dU] = (rhs[0x0000004dU] 
                                          & mask[0x0000004dU]);
                __Vtemp_9[0x0000004eU] = (rhs[0x0000004eU] 
                                          & mask[0x0000004eU]);
                __Vtemp_9[0x0000004fU] = (rhs[0x0000004fU] 
                                          & mask[0x0000004fU]);
                __Vtemp_9[0x00000050U] = (rhs[0x00000050U] 
                                          & mask[0x00000050U]);
                __Vtemp_9[0x00000051U] = (rhs[0x00000051U] 
                                          & mask[0x00000051U]);
                __Vtemp_9[0x00000052U] = (rhs[0x00000052U] 
                                          & mask[0x00000052U]);
                __Vtemp_9[0x00000053U] = (rhs[0x00000053U] 
                                          & mask[0x00000053U]);
                __Vtemp_9[0x00000054U] = (rhs[0x00000054U] 
                                          & mask[0x00000054U]);
                __Vtemp_9[0x00000055U] = (rhs[0x00000055U] 
                                          & mask[0x00000055U]);
                __Vtemp_9[0x00000056U] = (rhs[0x00000056U] 
                                          & mask[0x00000056U]);
                __Vtemp_9[0x00000057U] = (rhs[0x00000057U] 
                                          & mask[0x00000057U]);
                __Vtemp_9[0x00000058U] = (rhs[0x00000058U] 
                                          & mask[0x00000058U]);
                __Vtemp_9[0x00000059U] = (rhs[0x00000059U] 
                                          & mask[0x00000059U]);
                __Vtemp_9[0x0000005aU] = (rhs[0x0000005aU] 
                                          & mask[0x0000005aU]);
                __Vtemp_9[0x0000005bU] = (rhs[0x0000005bU] 
                                          & mask[0x0000005bU]);
                __Vtemp_9[0x0000005cU] = (rhs[0x0000005cU] 
                                          & mask[0x0000005cU]);
                __Vtemp_9[0x0000005dU] = (rhs[0x0000005dU] 
                                          & mask[0x0000005dU]);
                __Vtemp_9[0x0000005eU] = (rhs[0x0000005eU] 
                                          & mask[0x0000005eU]);
                __Vtemp_9[0x0000005fU] = (rhs[0x0000005fU] 
                                          & mask[0x0000005fU]);
                __Vtemp_9[0x00000060U] = (rhs[0x00000060U] 
                                          & mask[0x00000060U]);
                __Vtemp_9[0x00000061U] = (rhs[0x00000061U] 
                                          & mask[0x00000061U]);
                __Vtemp_9[0x00000062U] = (rhs[0x00000062U] 
                                          & mask[0x00000062U]);
                __Vtemp_9[0x00000063U] = (rhs[0x00000063U] 
                                          & mask[0x00000063U]);
                __Vtemp_9[0x00000064U] = (rhs[0x00000064U] 
                                          & mask[0x00000064U]);
                __Vtemp_9[0x00000065U] = (rhs[0x00000065U] 
                                          & mask[0x00000065U]);
                __Vtemp_9[0x00000066U] = (rhs[0x00000066U] 
                                          & mask[0x00000066U]);
                __Vtemp_9[0x00000067U] = (rhs[0x00000067U] 
                                          & mask[0x00000067U]);
                __Vtemp_9[0x00000068U] = (rhs[0x00000068U] 
                                          & mask[0x00000068U]);
                __Vtemp_9[0x00000069U] = (rhs[0x00000069U] 
                                          & mask[0x00000069U]);
                __Vtemp_9[0x0000006aU] = (rhs[0x0000006aU] 
                                          & mask[0x0000006aU]);
                __Vtemp_9[0x0000006bU] = (rhs[0x0000006bU] 
                                          & mask[0x0000006bU]);
                __Vtemp_9[0x0000006cU] = (rhs[0x0000006cU] 
                                          & mask[0x0000006cU]);
                __Vtemp_9[0x0000006dU] = (rhs[0x0000006dU] 
                                          & mask[0x0000006dU]);
                __Vtemp_9[0x0000006eU] = (rhs[0x0000006eU] 
                                          & mask[0x0000006eU]);
                __Vtemp_9[0x0000006fU] = (rhs[0x0000006fU] 
                                          & mask[0x0000006fU]);
                __Vtemp_9[0x00000070U] = (rhs[0x00000070U] 
                                          & mask[0x00000070U]);
                __Vtemp_9[0x00000071U] = (rhs[0x00000071U] 
                                          & mask[0x00000071U]);
                __Vtemp_9[0x00000072U] = (rhs[0x00000072U] 
                                          & mask[0x00000072U]);
                __Vtemp_9[0x00000073U] = (rhs[0x00000073U] 
                                          & mask[0x00000073U]);
                __Vtemp_9[0x00000074U] = (rhs[0x00000074U] 
                                          & mask[0x00000074U]);
                __Vtemp_9[0x00000075U] = (rhs[0x00000075U] 
                                          & mask[0x00000075U]);
                __Vtemp_9[0x00000076U] = (rhs[0x00000076U] 
                                          & mask[0x00000076U]);
                __Vtemp_9[0x00000077U] = (rhs[0x00000077U] 
                                          & mask[0x00000077U]);
                __Vtemp_9[0x00000078U] = (rhs[0x00000078U] 
                                          & mask[0x00000078U]);
                __Vtemp_9[0x00000079U] = (rhs[0x00000079U] 
                                          & mask[0x00000079U]);
                __Vtemp_9[0x0000007aU] = (rhs[0x0000007aU] 
                                          & mask[0x0000007aU]);
                __Vtemp_9[0x0000007bU] = (rhs[0x0000007bU] 
                                          & mask[0x0000007bU]);
                __Vtemp_9[0x0000007cU] = (rhs[0x0000007cU] 
                                          & mask[0x0000007cU]);
                __Vtemp_9[0x0000007dU] = (rhs[0x0000007dU] 
                                          & mask[0x0000007dU]);
                __Vtemp_9[0x0000007eU] = (rhs[0x0000007eU] 
                                          & mask[0x0000007eU]);
                __Vtemp_9[0x0000007fU] = (rhs[0x0000007fU] 
                                          & mask[0x0000007fU]);
                VL_SFORMAT_NX(64,msg,"%@: lhs = %0d : rhs = %0d",0,
                              -1,&(name),4096,__Vtemp_8.data(),
                              4096,__Vtemp_9.data());
            } else if ((0x09000000U == radix)) {
                __Vtemp_10[0U] = (lhs[0U] & mask[0U]);
                __Vtemp_10[1U] = (lhs[1U] & mask[1U]);
                __Vtemp_10[2U] = (lhs[2U] & mask[2U]);
                __Vtemp_10[3U] = (lhs[3U] & mask[3U]);
                __Vtemp_10[4U] = (lhs[4U] & mask[4U]);
                __Vtemp_10[5U] = (lhs[5U] & mask[5U]);
                __Vtemp_10[6U] = (lhs[6U] & mask[6U]);
                __Vtemp_10[7U] = (lhs[7U] & mask[7U]);
                __Vtemp_10[8U] = (lhs[8U] & mask[8U]);
                __Vtemp_10[9U] = (lhs[9U] & mask[9U]);
                __Vtemp_10[0x0000000aU] = (lhs[0x0000000aU] 
                                           & mask[0x0000000aU]);
                __Vtemp_10[0x0000000bU] = (lhs[0x0000000bU] 
                                           & mask[0x0000000bU]);
                __Vtemp_10[0x0000000cU] = (lhs[0x0000000cU] 
                                           & mask[0x0000000cU]);
                __Vtemp_10[0x0000000dU] = (lhs[0x0000000dU] 
                                           & mask[0x0000000dU]);
                __Vtemp_10[0x0000000eU] = (lhs[0x0000000eU] 
                                           & mask[0x0000000eU]);
                __Vtemp_10[0x0000000fU] = (lhs[0x0000000fU] 
                                           & mask[0x0000000fU]);
                __Vtemp_10[0x00000010U] = (lhs[0x00000010U] 
                                           & mask[0x00000010U]);
                __Vtemp_10[0x00000011U] = (lhs[0x00000011U] 
                                           & mask[0x00000011U]);
                __Vtemp_10[0x00000012U] = (lhs[0x00000012U] 
                                           & mask[0x00000012U]);
                __Vtemp_10[0x00000013U] = (lhs[0x00000013U] 
                                           & mask[0x00000013U]);
                __Vtemp_10[0x00000014U] = (lhs[0x00000014U] 
                                           & mask[0x00000014U]);
                __Vtemp_10[0x00000015U] = (lhs[0x00000015U] 
                                           & mask[0x00000015U]);
                __Vtemp_10[0x00000016U] = (lhs[0x00000016U] 
                                           & mask[0x00000016U]);
                __Vtemp_10[0x00000017U] = (lhs[0x00000017U] 
                                           & mask[0x00000017U]);
                __Vtemp_10[0x00000018U] = (lhs[0x00000018U] 
                                           & mask[0x00000018U]);
                __Vtemp_10[0x00000019U] = (lhs[0x00000019U] 
                                           & mask[0x00000019U]);
                __Vtemp_10[0x0000001aU] = (lhs[0x0000001aU] 
                                           & mask[0x0000001aU]);
                __Vtemp_10[0x0000001bU] = (lhs[0x0000001bU] 
                                           & mask[0x0000001bU]);
                __Vtemp_10[0x0000001cU] = (lhs[0x0000001cU] 
                                           & mask[0x0000001cU]);
                __Vtemp_10[0x0000001dU] = (lhs[0x0000001dU] 
                                           & mask[0x0000001dU]);
                __Vtemp_10[0x0000001eU] = (lhs[0x0000001eU] 
                                           & mask[0x0000001eU]);
                __Vtemp_10[0x0000001fU] = (lhs[0x0000001fU] 
                                           & mask[0x0000001fU]);
                __Vtemp_10[0x00000020U] = (lhs[0x00000020U] 
                                           & mask[0x00000020U]);
                __Vtemp_10[0x00000021U] = (lhs[0x00000021U] 
                                           & mask[0x00000021U]);
                __Vtemp_10[0x00000022U] = (lhs[0x00000022U] 
                                           & mask[0x00000022U]);
                __Vtemp_10[0x00000023U] = (lhs[0x00000023U] 
                                           & mask[0x00000023U]);
                __Vtemp_10[0x00000024U] = (lhs[0x00000024U] 
                                           & mask[0x00000024U]);
                __Vtemp_10[0x00000025U] = (lhs[0x00000025U] 
                                           & mask[0x00000025U]);
                __Vtemp_10[0x00000026U] = (lhs[0x00000026U] 
                                           & mask[0x00000026U]);
                __Vtemp_10[0x00000027U] = (lhs[0x00000027U] 
                                           & mask[0x00000027U]);
                __Vtemp_10[0x00000028U] = (lhs[0x00000028U] 
                                           & mask[0x00000028U]);
                __Vtemp_10[0x00000029U] = (lhs[0x00000029U] 
                                           & mask[0x00000029U]);
                __Vtemp_10[0x0000002aU] = (lhs[0x0000002aU] 
                                           & mask[0x0000002aU]);
                __Vtemp_10[0x0000002bU] = (lhs[0x0000002bU] 
                                           & mask[0x0000002bU]);
                __Vtemp_10[0x0000002cU] = (lhs[0x0000002cU] 
                                           & mask[0x0000002cU]);
                __Vtemp_10[0x0000002dU] = (lhs[0x0000002dU] 
                                           & mask[0x0000002dU]);
                __Vtemp_10[0x0000002eU] = (lhs[0x0000002eU] 
                                           & mask[0x0000002eU]);
                __Vtemp_10[0x0000002fU] = (lhs[0x0000002fU] 
                                           & mask[0x0000002fU]);
                __Vtemp_10[0x00000030U] = (lhs[0x00000030U] 
                                           & mask[0x00000030U]);
                __Vtemp_10[0x00000031U] = (lhs[0x00000031U] 
                                           & mask[0x00000031U]);
                __Vtemp_10[0x00000032U] = (lhs[0x00000032U] 
                                           & mask[0x00000032U]);
                __Vtemp_10[0x00000033U] = (lhs[0x00000033U] 
                                           & mask[0x00000033U]);
                __Vtemp_10[0x00000034U] = (lhs[0x00000034U] 
                                           & mask[0x00000034U]);
                __Vtemp_10[0x00000035U] = (lhs[0x00000035U] 
                                           & mask[0x00000035U]);
                __Vtemp_10[0x00000036U] = (lhs[0x00000036U] 
                                           & mask[0x00000036U]);
                __Vtemp_10[0x00000037U] = (lhs[0x00000037U] 
                                           & mask[0x00000037U]);
                __Vtemp_10[0x00000038U] = (lhs[0x00000038U] 
                                           & mask[0x00000038U]);
                __Vtemp_10[0x00000039U] = (lhs[0x00000039U] 
                                           & mask[0x00000039U]);
                __Vtemp_10[0x0000003aU] = (lhs[0x0000003aU] 
                                           & mask[0x0000003aU]);
                __Vtemp_10[0x0000003bU] = (lhs[0x0000003bU] 
                                           & mask[0x0000003bU]);
                __Vtemp_10[0x0000003cU] = (lhs[0x0000003cU] 
                                           & mask[0x0000003cU]);
                __Vtemp_10[0x0000003dU] = (lhs[0x0000003dU] 
                                           & mask[0x0000003dU]);
                __Vtemp_10[0x0000003eU] = (lhs[0x0000003eU] 
                                           & mask[0x0000003eU]);
                __Vtemp_10[0x0000003fU] = (lhs[0x0000003fU] 
                                           & mask[0x0000003fU]);
                __Vtemp_10[0x00000040U] = (lhs[0x00000040U] 
                                           & mask[0x00000040U]);
                __Vtemp_10[0x00000041U] = (lhs[0x00000041U] 
                                           & mask[0x00000041U]);
                __Vtemp_10[0x00000042U] = (lhs[0x00000042U] 
                                           & mask[0x00000042U]);
                __Vtemp_10[0x00000043U] = (lhs[0x00000043U] 
                                           & mask[0x00000043U]);
                __Vtemp_10[0x00000044U] = (lhs[0x00000044U] 
                                           & mask[0x00000044U]);
                __Vtemp_10[0x00000045U] = (lhs[0x00000045U] 
                                           & mask[0x00000045U]);
                __Vtemp_10[0x00000046U] = (lhs[0x00000046U] 
                                           & mask[0x00000046U]);
                __Vtemp_10[0x00000047U] = (lhs[0x00000047U] 
                                           & mask[0x00000047U]);
                __Vtemp_10[0x00000048U] = (lhs[0x00000048U] 
                                           & mask[0x00000048U]);
                __Vtemp_10[0x00000049U] = (lhs[0x00000049U] 
                                           & mask[0x00000049U]);
                __Vtemp_10[0x0000004aU] = (lhs[0x0000004aU] 
                                           & mask[0x0000004aU]);
                __Vtemp_10[0x0000004bU] = (lhs[0x0000004bU] 
                                           & mask[0x0000004bU]);
                __Vtemp_10[0x0000004cU] = (lhs[0x0000004cU] 
                                           & mask[0x0000004cU]);
                __Vtemp_10[0x0000004dU] = (lhs[0x0000004dU] 
                                           & mask[0x0000004dU]);
                __Vtemp_10[0x0000004eU] = (lhs[0x0000004eU] 
                                           & mask[0x0000004eU]);
                __Vtemp_10[0x0000004fU] = (lhs[0x0000004fU] 
                                           & mask[0x0000004fU]);
                __Vtemp_10[0x00000050U] = (lhs[0x00000050U] 
                                           & mask[0x00000050U]);
                __Vtemp_10[0x00000051U] = (lhs[0x00000051U] 
                                           & mask[0x00000051U]);
                __Vtemp_10[0x00000052U] = (lhs[0x00000052U] 
                                           & mask[0x00000052U]);
                __Vtemp_10[0x00000053U] = (lhs[0x00000053U] 
                                           & mask[0x00000053U]);
                __Vtemp_10[0x00000054U] = (lhs[0x00000054U] 
                                           & mask[0x00000054U]);
                __Vtemp_10[0x00000055U] = (lhs[0x00000055U] 
                                           & mask[0x00000055U]);
                __Vtemp_10[0x00000056U] = (lhs[0x00000056U] 
                                           & mask[0x00000056U]);
                __Vtemp_10[0x00000057U] = (lhs[0x00000057U] 
                                           & mask[0x00000057U]);
                __Vtemp_10[0x00000058U] = (lhs[0x00000058U] 
                                           & mask[0x00000058U]);
                __Vtemp_10[0x00000059U] = (lhs[0x00000059U] 
                                           & mask[0x00000059U]);
                __Vtemp_10[0x0000005aU] = (lhs[0x0000005aU] 
                                           & mask[0x0000005aU]);
                __Vtemp_10[0x0000005bU] = (lhs[0x0000005bU] 
                                           & mask[0x0000005bU]);
                __Vtemp_10[0x0000005cU] = (lhs[0x0000005cU] 
                                           & mask[0x0000005cU]);
                __Vtemp_10[0x0000005dU] = (lhs[0x0000005dU] 
                                           & mask[0x0000005dU]);
                __Vtemp_10[0x0000005eU] = (lhs[0x0000005eU] 
                                           & mask[0x0000005eU]);
                __Vtemp_10[0x0000005fU] = (lhs[0x0000005fU] 
                                           & mask[0x0000005fU]);
                __Vtemp_10[0x00000060U] = (lhs[0x00000060U] 
                                           & mask[0x00000060U]);
                __Vtemp_10[0x00000061U] = (lhs[0x00000061U] 
                                           & mask[0x00000061U]);
                __Vtemp_10[0x00000062U] = (lhs[0x00000062U] 
                                           & mask[0x00000062U]);
                __Vtemp_10[0x00000063U] = (lhs[0x00000063U] 
                                           & mask[0x00000063U]);
                __Vtemp_10[0x00000064U] = (lhs[0x00000064U] 
                                           & mask[0x00000064U]);
                __Vtemp_10[0x00000065U] = (lhs[0x00000065U] 
                                           & mask[0x00000065U]);
                __Vtemp_10[0x00000066U] = (lhs[0x00000066U] 
                                           & mask[0x00000066U]);
                __Vtemp_10[0x00000067U] = (lhs[0x00000067U] 
                                           & mask[0x00000067U]);
                __Vtemp_10[0x00000068U] = (lhs[0x00000068U] 
                                           & mask[0x00000068U]);
                __Vtemp_10[0x00000069U] = (lhs[0x00000069U] 
                                           & mask[0x00000069U]);
                __Vtemp_10[0x0000006aU] = (lhs[0x0000006aU] 
                                           & mask[0x0000006aU]);
                __Vtemp_10[0x0000006bU] = (lhs[0x0000006bU] 
                                           & mask[0x0000006bU]);
                __Vtemp_10[0x0000006cU] = (lhs[0x0000006cU] 
                                           & mask[0x0000006cU]);
                __Vtemp_10[0x0000006dU] = (lhs[0x0000006dU] 
                                           & mask[0x0000006dU]);
                __Vtemp_10[0x0000006eU] = (lhs[0x0000006eU] 
                                           & mask[0x0000006eU]);
                __Vtemp_10[0x0000006fU] = (lhs[0x0000006fU] 
                                           & mask[0x0000006fU]);
                __Vtemp_10[0x00000070U] = (lhs[0x00000070U] 
                                           & mask[0x00000070U]);
                __Vtemp_10[0x00000071U] = (lhs[0x00000071U] 
                                           & mask[0x00000071U]);
                __Vtemp_10[0x00000072U] = (lhs[0x00000072U] 
                                           & mask[0x00000072U]);
                __Vtemp_10[0x00000073U] = (lhs[0x00000073U] 
                                           & mask[0x00000073U]);
                __Vtemp_10[0x00000074U] = (lhs[0x00000074U] 
                                           & mask[0x00000074U]);
                __Vtemp_10[0x00000075U] = (lhs[0x00000075U] 
                                           & mask[0x00000075U]);
                __Vtemp_10[0x00000076U] = (lhs[0x00000076U] 
                                           & mask[0x00000076U]);
                __Vtemp_10[0x00000077U] = (lhs[0x00000077U] 
                                           & mask[0x00000077U]);
                __Vtemp_10[0x00000078U] = (lhs[0x00000078U] 
                                           & mask[0x00000078U]);
                __Vtemp_10[0x00000079U] = (lhs[0x00000079U] 
                                           & mask[0x00000079U]);
                __Vtemp_10[0x0000007aU] = (lhs[0x0000007aU] 
                                           & mask[0x0000007aU]);
                __Vtemp_10[0x0000007bU] = (lhs[0x0000007bU] 
                                           & mask[0x0000007bU]);
                __Vtemp_10[0x0000007cU] = (lhs[0x0000007cU] 
                                           & mask[0x0000007cU]);
                __Vtemp_10[0x0000007dU] = (lhs[0x0000007dU] 
                                           & mask[0x0000007dU]);
                __Vtemp_10[0x0000007eU] = (lhs[0x0000007eU] 
                                           & mask[0x0000007eU]);
                __Vtemp_10[0x0000007fU] = (lhs[0x0000007fU] 
                                           & mask[0x0000007fU]);
                __Vtemp_11[0U] = (rhs[0U] & mask[0U]);
                __Vtemp_11[1U] = (rhs[1U] & mask[1U]);
                __Vtemp_11[2U] = (rhs[2U] & mask[2U]);
                __Vtemp_11[3U] = (rhs[3U] & mask[3U]);
                __Vtemp_11[4U] = (rhs[4U] & mask[4U]);
                __Vtemp_11[5U] = (rhs[5U] & mask[5U]);
                __Vtemp_11[6U] = (rhs[6U] & mask[6U]);
                __Vtemp_11[7U] = (rhs[7U] & mask[7U]);
                __Vtemp_11[8U] = (rhs[8U] & mask[8U]);
                __Vtemp_11[9U] = (rhs[9U] & mask[9U]);
                __Vtemp_11[0x0000000aU] = (rhs[0x0000000aU] 
                                           & mask[0x0000000aU]);
                __Vtemp_11[0x0000000bU] = (rhs[0x0000000bU] 
                                           & mask[0x0000000bU]);
                __Vtemp_11[0x0000000cU] = (rhs[0x0000000cU] 
                                           & mask[0x0000000cU]);
                __Vtemp_11[0x0000000dU] = (rhs[0x0000000dU] 
                                           & mask[0x0000000dU]);
                __Vtemp_11[0x0000000eU] = (rhs[0x0000000eU] 
                                           & mask[0x0000000eU]);
                __Vtemp_11[0x0000000fU] = (rhs[0x0000000fU] 
                                           & mask[0x0000000fU]);
                __Vtemp_11[0x00000010U] = (rhs[0x00000010U] 
                                           & mask[0x00000010U]);
                __Vtemp_11[0x00000011U] = (rhs[0x00000011U] 
                                           & mask[0x00000011U]);
                __Vtemp_11[0x00000012U] = (rhs[0x00000012U] 
                                           & mask[0x00000012U]);
                __Vtemp_11[0x00000013U] = (rhs[0x00000013U] 
                                           & mask[0x00000013U]);
                __Vtemp_11[0x00000014U] = (rhs[0x00000014U] 
                                           & mask[0x00000014U]);
                __Vtemp_11[0x00000015U] = (rhs[0x00000015U] 
                                           & mask[0x00000015U]);
                __Vtemp_11[0x00000016U] = (rhs[0x00000016U] 
                                           & mask[0x00000016U]);
                __Vtemp_11[0x00000017U] = (rhs[0x00000017U] 
                                           & mask[0x00000017U]);
                __Vtemp_11[0x00000018U] = (rhs[0x00000018U] 
                                           & mask[0x00000018U]);
                __Vtemp_11[0x00000019U] = (rhs[0x00000019U] 
                                           & mask[0x00000019U]);
                __Vtemp_11[0x0000001aU] = (rhs[0x0000001aU] 
                                           & mask[0x0000001aU]);
                __Vtemp_11[0x0000001bU] = (rhs[0x0000001bU] 
                                           & mask[0x0000001bU]);
                __Vtemp_11[0x0000001cU] = (rhs[0x0000001cU] 
                                           & mask[0x0000001cU]);
                __Vtemp_11[0x0000001dU] = (rhs[0x0000001dU] 
                                           & mask[0x0000001dU]);
                __Vtemp_11[0x0000001eU] = (rhs[0x0000001eU] 
                                           & mask[0x0000001eU]);
                __Vtemp_11[0x0000001fU] = (rhs[0x0000001fU] 
                                           & mask[0x0000001fU]);
                __Vtemp_11[0x00000020U] = (rhs[0x00000020U] 
                                           & mask[0x00000020U]);
                __Vtemp_11[0x00000021U] = (rhs[0x00000021U] 
                                           & mask[0x00000021U]);
                __Vtemp_11[0x00000022U] = (rhs[0x00000022U] 
                                           & mask[0x00000022U]);
                __Vtemp_11[0x00000023U] = (rhs[0x00000023U] 
                                           & mask[0x00000023U]);
                __Vtemp_11[0x00000024U] = (rhs[0x00000024U] 
                                           & mask[0x00000024U]);
                __Vtemp_11[0x00000025U] = (rhs[0x00000025U] 
                                           & mask[0x00000025U]);
                __Vtemp_11[0x00000026U] = (rhs[0x00000026U] 
                                           & mask[0x00000026U]);
                __Vtemp_11[0x00000027U] = (rhs[0x00000027U] 
                                           & mask[0x00000027U]);
                __Vtemp_11[0x00000028U] = (rhs[0x00000028U] 
                                           & mask[0x00000028U]);
                __Vtemp_11[0x00000029U] = (rhs[0x00000029U] 
                                           & mask[0x00000029U]);
                __Vtemp_11[0x0000002aU] = (rhs[0x0000002aU] 
                                           & mask[0x0000002aU]);
                __Vtemp_11[0x0000002bU] = (rhs[0x0000002bU] 
                                           & mask[0x0000002bU]);
                __Vtemp_11[0x0000002cU] = (rhs[0x0000002cU] 
                                           & mask[0x0000002cU]);
                __Vtemp_11[0x0000002dU] = (rhs[0x0000002dU] 
                                           & mask[0x0000002dU]);
                __Vtemp_11[0x0000002eU] = (rhs[0x0000002eU] 
                                           & mask[0x0000002eU]);
                __Vtemp_11[0x0000002fU] = (rhs[0x0000002fU] 
                                           & mask[0x0000002fU]);
                __Vtemp_11[0x00000030U] = (rhs[0x00000030U] 
                                           & mask[0x00000030U]);
                __Vtemp_11[0x00000031U] = (rhs[0x00000031U] 
                                           & mask[0x00000031U]);
                __Vtemp_11[0x00000032U] = (rhs[0x00000032U] 
                                           & mask[0x00000032U]);
                __Vtemp_11[0x00000033U] = (rhs[0x00000033U] 
                                           & mask[0x00000033U]);
                __Vtemp_11[0x00000034U] = (rhs[0x00000034U] 
                                           & mask[0x00000034U]);
                __Vtemp_11[0x00000035U] = (rhs[0x00000035U] 
                                           & mask[0x00000035U]);
                __Vtemp_11[0x00000036U] = (rhs[0x00000036U] 
                                           & mask[0x00000036U]);
                __Vtemp_11[0x00000037U] = (rhs[0x00000037U] 
                                           & mask[0x00000037U]);
                __Vtemp_11[0x00000038U] = (rhs[0x00000038U] 
                                           & mask[0x00000038U]);
                __Vtemp_11[0x00000039U] = (rhs[0x00000039U] 
                                           & mask[0x00000039U]);
                __Vtemp_11[0x0000003aU] = (rhs[0x0000003aU] 
                                           & mask[0x0000003aU]);
                __Vtemp_11[0x0000003bU] = (rhs[0x0000003bU] 
                                           & mask[0x0000003bU]);
                __Vtemp_11[0x0000003cU] = (rhs[0x0000003cU] 
                                           & mask[0x0000003cU]);
                __Vtemp_11[0x0000003dU] = (rhs[0x0000003dU] 
                                           & mask[0x0000003dU]);
                __Vtemp_11[0x0000003eU] = (rhs[0x0000003eU] 
                                           & mask[0x0000003eU]);
                __Vtemp_11[0x0000003fU] = (rhs[0x0000003fU] 
                                           & mask[0x0000003fU]);
                __Vtemp_11[0x00000040U] = (rhs[0x00000040U] 
                                           & mask[0x00000040U]);
                __Vtemp_11[0x00000041U] = (rhs[0x00000041U] 
                                           & mask[0x00000041U]);
                __Vtemp_11[0x00000042U] = (rhs[0x00000042U] 
                                           & mask[0x00000042U]);
                __Vtemp_11[0x00000043U] = (rhs[0x00000043U] 
                                           & mask[0x00000043U]);
                __Vtemp_11[0x00000044U] = (rhs[0x00000044U] 
                                           & mask[0x00000044U]);
                __Vtemp_11[0x00000045U] = (rhs[0x00000045U] 
                                           & mask[0x00000045U]);
                __Vtemp_11[0x00000046U] = (rhs[0x00000046U] 
                                           & mask[0x00000046U]);
                __Vtemp_11[0x00000047U] = (rhs[0x00000047U] 
                                           & mask[0x00000047U]);
                __Vtemp_11[0x00000048U] = (rhs[0x00000048U] 
                                           & mask[0x00000048U]);
                __Vtemp_11[0x00000049U] = (rhs[0x00000049U] 
                                           & mask[0x00000049U]);
                __Vtemp_11[0x0000004aU] = (rhs[0x0000004aU] 
                                           & mask[0x0000004aU]);
                __Vtemp_11[0x0000004bU] = (rhs[0x0000004bU] 
                                           & mask[0x0000004bU]);
                __Vtemp_11[0x0000004cU] = (rhs[0x0000004cU] 
                                           & mask[0x0000004cU]);
                __Vtemp_11[0x0000004dU] = (rhs[0x0000004dU] 
                                           & mask[0x0000004dU]);
                __Vtemp_11[0x0000004eU] = (rhs[0x0000004eU] 
                                           & mask[0x0000004eU]);
                __Vtemp_11[0x0000004fU] = (rhs[0x0000004fU] 
                                           & mask[0x0000004fU]);
                __Vtemp_11[0x00000050U] = (rhs[0x00000050U] 
                                           & mask[0x00000050U]);
                __Vtemp_11[0x00000051U] = (rhs[0x00000051U] 
                                           & mask[0x00000051U]);
                __Vtemp_11[0x00000052U] = (rhs[0x00000052U] 
                                           & mask[0x00000052U]);
                __Vtemp_11[0x00000053U] = (rhs[0x00000053U] 
                                           & mask[0x00000053U]);
                __Vtemp_11[0x00000054U] = (rhs[0x00000054U] 
                                           & mask[0x00000054U]);
                __Vtemp_11[0x00000055U] = (rhs[0x00000055U] 
                                           & mask[0x00000055U]);
                __Vtemp_11[0x00000056U] = (rhs[0x00000056U] 
                                           & mask[0x00000056U]);
                __Vtemp_11[0x00000057U] = (rhs[0x00000057U] 
                                           & mask[0x00000057U]);
                __Vtemp_11[0x00000058U] = (rhs[0x00000058U] 
                                           & mask[0x00000058U]);
                __Vtemp_11[0x00000059U] = (rhs[0x00000059U] 
                                           & mask[0x00000059U]);
                __Vtemp_11[0x0000005aU] = (rhs[0x0000005aU] 
                                           & mask[0x0000005aU]);
                __Vtemp_11[0x0000005bU] = (rhs[0x0000005bU] 
                                           & mask[0x0000005bU]);
                __Vtemp_11[0x0000005cU] = (rhs[0x0000005cU] 
                                           & mask[0x0000005cU]);
                __Vtemp_11[0x0000005dU] = (rhs[0x0000005dU] 
                                           & mask[0x0000005dU]);
                __Vtemp_11[0x0000005eU] = (rhs[0x0000005eU] 
                                           & mask[0x0000005eU]);
                __Vtemp_11[0x0000005fU] = (rhs[0x0000005fU] 
                                           & mask[0x0000005fU]);
                __Vtemp_11[0x00000060U] = (rhs[0x00000060U] 
                                           & mask[0x00000060U]);
                __Vtemp_11[0x00000061U] = (rhs[0x00000061U] 
                                           & mask[0x00000061U]);
                __Vtemp_11[0x00000062U] = (rhs[0x00000062U] 
                                           & mask[0x00000062U]);
                __Vtemp_11[0x00000063U] = (rhs[0x00000063U] 
                                           & mask[0x00000063U]);
                __Vtemp_11[0x00000064U] = (rhs[0x00000064U] 
                                           & mask[0x00000064U]);
                __Vtemp_11[0x00000065U] = (rhs[0x00000065U] 
                                           & mask[0x00000065U]);
                __Vtemp_11[0x00000066U] = (rhs[0x00000066U] 
                                           & mask[0x00000066U]);
                __Vtemp_11[0x00000067U] = (rhs[0x00000067U] 
                                           & mask[0x00000067U]);
                __Vtemp_11[0x00000068U] = (rhs[0x00000068U] 
                                           & mask[0x00000068U]);
                __Vtemp_11[0x00000069U] = (rhs[0x00000069U] 
                                           & mask[0x00000069U]);
                __Vtemp_11[0x0000006aU] = (rhs[0x0000006aU] 
                                           & mask[0x0000006aU]);
                __Vtemp_11[0x0000006bU] = (rhs[0x0000006bU] 
                                           & mask[0x0000006bU]);
                __Vtemp_11[0x0000006cU] = (rhs[0x0000006cU] 
                                           & mask[0x0000006cU]);
                __Vtemp_11[0x0000006dU] = (rhs[0x0000006dU] 
                                           & mask[0x0000006dU]);
                __Vtemp_11[0x0000006eU] = (rhs[0x0000006eU] 
                                           & mask[0x0000006eU]);
                __Vtemp_11[0x0000006fU] = (rhs[0x0000006fU] 
                                           & mask[0x0000006fU]);
                __Vtemp_11[0x00000070U] = (rhs[0x00000070U] 
                                           & mask[0x00000070U]);
                __Vtemp_11[0x00000071U] = (rhs[0x00000071U] 
                                           & mask[0x00000071U]);
                __Vtemp_11[0x00000072U] = (rhs[0x00000072U] 
                                           & mask[0x00000072U]);
                __Vtemp_11[0x00000073U] = (rhs[0x00000073U] 
                                           & mask[0x00000073U]);
                __Vtemp_11[0x00000074U] = (rhs[0x00000074U] 
                                           & mask[0x00000074U]);
                __Vtemp_11[0x00000075U] = (rhs[0x00000075U] 
                                           & mask[0x00000075U]);
                __Vtemp_11[0x00000076U] = (rhs[0x00000076U] 
                                           & mask[0x00000076U]);
                __Vtemp_11[0x00000077U] = (rhs[0x00000077U] 
                                           & mask[0x00000077U]);
                __Vtemp_11[0x00000078U] = (rhs[0x00000078U] 
                                           & mask[0x00000078U]);
                __Vtemp_11[0x00000079U] = (rhs[0x00000079U] 
                                           & mask[0x00000079U]);
                __Vtemp_11[0x0000007aU] = (rhs[0x0000007aU] 
                                           & mask[0x0000007aU]);
                __Vtemp_11[0x0000007bU] = (rhs[0x0000007bU] 
                                           & mask[0x0000007bU]);
                __Vtemp_11[0x0000007cU] = (rhs[0x0000007cU] 
                                           & mask[0x0000007cU]);
                __Vtemp_11[0x0000007dU] = (rhs[0x0000007dU] 
                                           & mask[0x0000007dU]);
                __Vtemp_11[0x0000007eU] = (rhs[0x0000007eU] 
                                           & mask[0x0000007eU]);
                __Vtemp_11[0x0000007fU] = (rhs[0x0000007fU] 
                                           & mask[0x0000007fU]);
                VL_SFORMAT_NX(64,msg,"%@: lhs = %0t : rhs = %0t",0,
                              -1,&(name),4096,__Vtemp_10.data(),
                              -12,4096,__Vtemp_11.data(),
                              -12);
            } else if ((0x08000000U == radix)) {
                __Vtemp_12[0U] = (lhs[0U] & mask[0U]);
                __Vtemp_12[1U] = (lhs[1U] & mask[1U]);
                __Vtemp_12[2U] = (lhs[2U] & mask[2U]);
                __Vtemp_12[3U] = (lhs[3U] & mask[3U]);
                __Vtemp_12[4U] = (lhs[4U] & mask[4U]);
                __Vtemp_12[5U] = (lhs[5U] & mask[5U]);
                __Vtemp_12[6U] = (lhs[6U] & mask[6U]);
                __Vtemp_12[7U] = (lhs[7U] & mask[7U]);
                __Vtemp_12[8U] = (lhs[8U] & mask[8U]);
                __Vtemp_12[9U] = (lhs[9U] & mask[9U]);
                __Vtemp_12[0x0000000aU] = (lhs[0x0000000aU] 
                                           & mask[0x0000000aU]);
                __Vtemp_12[0x0000000bU] = (lhs[0x0000000bU] 
                                           & mask[0x0000000bU]);
                __Vtemp_12[0x0000000cU] = (lhs[0x0000000cU] 
                                           & mask[0x0000000cU]);
                __Vtemp_12[0x0000000dU] = (lhs[0x0000000dU] 
                                           & mask[0x0000000dU]);
                __Vtemp_12[0x0000000eU] = (lhs[0x0000000eU] 
                                           & mask[0x0000000eU]);
                __Vtemp_12[0x0000000fU] = (lhs[0x0000000fU] 
                                           & mask[0x0000000fU]);
                __Vtemp_12[0x00000010U] = (lhs[0x00000010U] 
                                           & mask[0x00000010U]);
                __Vtemp_12[0x00000011U] = (lhs[0x00000011U] 
                                           & mask[0x00000011U]);
                __Vtemp_12[0x00000012U] = (lhs[0x00000012U] 
                                           & mask[0x00000012U]);
                __Vtemp_12[0x00000013U] = (lhs[0x00000013U] 
                                           & mask[0x00000013U]);
                __Vtemp_12[0x00000014U] = (lhs[0x00000014U] 
                                           & mask[0x00000014U]);
                __Vtemp_12[0x00000015U] = (lhs[0x00000015U] 
                                           & mask[0x00000015U]);
                __Vtemp_12[0x00000016U] = (lhs[0x00000016U] 
                                           & mask[0x00000016U]);
                __Vtemp_12[0x00000017U] = (lhs[0x00000017U] 
                                           & mask[0x00000017U]);
                __Vtemp_12[0x00000018U] = (lhs[0x00000018U] 
                                           & mask[0x00000018U]);
                __Vtemp_12[0x00000019U] = (lhs[0x00000019U] 
                                           & mask[0x00000019U]);
                __Vtemp_12[0x0000001aU] = (lhs[0x0000001aU] 
                                           & mask[0x0000001aU]);
                __Vtemp_12[0x0000001bU] = (lhs[0x0000001bU] 
                                           & mask[0x0000001bU]);
                __Vtemp_12[0x0000001cU] = (lhs[0x0000001cU] 
                                           & mask[0x0000001cU]);
                __Vtemp_12[0x0000001dU] = (lhs[0x0000001dU] 
                                           & mask[0x0000001dU]);
                __Vtemp_12[0x0000001eU] = (lhs[0x0000001eU] 
                                           & mask[0x0000001eU]);
                __Vtemp_12[0x0000001fU] = (lhs[0x0000001fU] 
                                           & mask[0x0000001fU]);
                __Vtemp_12[0x00000020U] = (lhs[0x00000020U] 
                                           & mask[0x00000020U]);
                __Vtemp_12[0x00000021U] = (lhs[0x00000021U] 
                                           & mask[0x00000021U]);
                __Vtemp_12[0x00000022U] = (lhs[0x00000022U] 
                                           & mask[0x00000022U]);
                __Vtemp_12[0x00000023U] = (lhs[0x00000023U] 
                                           & mask[0x00000023U]);
                __Vtemp_12[0x00000024U] = (lhs[0x00000024U] 
                                           & mask[0x00000024U]);
                __Vtemp_12[0x00000025U] = (lhs[0x00000025U] 
                                           & mask[0x00000025U]);
                __Vtemp_12[0x00000026U] = (lhs[0x00000026U] 
                                           & mask[0x00000026U]);
                __Vtemp_12[0x00000027U] = (lhs[0x00000027U] 
                                           & mask[0x00000027U]);
                __Vtemp_12[0x00000028U] = (lhs[0x00000028U] 
                                           & mask[0x00000028U]);
                __Vtemp_12[0x00000029U] = (lhs[0x00000029U] 
                                           & mask[0x00000029U]);
                __Vtemp_12[0x0000002aU] = (lhs[0x0000002aU] 
                                           & mask[0x0000002aU]);
                __Vtemp_12[0x0000002bU] = (lhs[0x0000002bU] 
                                           & mask[0x0000002bU]);
                __Vtemp_12[0x0000002cU] = (lhs[0x0000002cU] 
                                           & mask[0x0000002cU]);
                __Vtemp_12[0x0000002dU] = (lhs[0x0000002dU] 
                                           & mask[0x0000002dU]);
                __Vtemp_12[0x0000002eU] = (lhs[0x0000002eU] 
                                           & mask[0x0000002eU]);
                __Vtemp_12[0x0000002fU] = (lhs[0x0000002fU] 
                                           & mask[0x0000002fU]);
                __Vtemp_12[0x00000030U] = (lhs[0x00000030U] 
                                           & mask[0x00000030U]);
                __Vtemp_12[0x00000031U] = (lhs[0x00000031U] 
                                           & mask[0x00000031U]);
                __Vtemp_12[0x00000032U] = (lhs[0x00000032U] 
                                           & mask[0x00000032U]);
                __Vtemp_12[0x00000033U] = (lhs[0x00000033U] 
                                           & mask[0x00000033U]);
                __Vtemp_12[0x00000034U] = (lhs[0x00000034U] 
                                           & mask[0x00000034U]);
                __Vtemp_12[0x00000035U] = (lhs[0x00000035U] 
                                           & mask[0x00000035U]);
                __Vtemp_12[0x00000036U] = (lhs[0x00000036U] 
                                           & mask[0x00000036U]);
                __Vtemp_12[0x00000037U] = (lhs[0x00000037U] 
                                           & mask[0x00000037U]);
                __Vtemp_12[0x00000038U] = (lhs[0x00000038U] 
                                           & mask[0x00000038U]);
                __Vtemp_12[0x00000039U] = (lhs[0x00000039U] 
                                           & mask[0x00000039U]);
                __Vtemp_12[0x0000003aU] = (lhs[0x0000003aU] 
                                           & mask[0x0000003aU]);
                __Vtemp_12[0x0000003bU] = (lhs[0x0000003bU] 
                                           & mask[0x0000003bU]);
                __Vtemp_12[0x0000003cU] = (lhs[0x0000003cU] 
                                           & mask[0x0000003cU]);
                __Vtemp_12[0x0000003dU] = (lhs[0x0000003dU] 
                                           & mask[0x0000003dU]);
                __Vtemp_12[0x0000003eU] = (lhs[0x0000003eU] 
                                           & mask[0x0000003eU]);
                __Vtemp_12[0x0000003fU] = (lhs[0x0000003fU] 
                                           & mask[0x0000003fU]);
                __Vtemp_12[0x00000040U] = (lhs[0x00000040U] 
                                           & mask[0x00000040U]);
                __Vtemp_12[0x00000041U] = (lhs[0x00000041U] 
                                           & mask[0x00000041U]);
                __Vtemp_12[0x00000042U] = (lhs[0x00000042U] 
                                           & mask[0x00000042U]);
                __Vtemp_12[0x00000043U] = (lhs[0x00000043U] 
                                           & mask[0x00000043U]);
                __Vtemp_12[0x00000044U] = (lhs[0x00000044U] 
                                           & mask[0x00000044U]);
                __Vtemp_12[0x00000045U] = (lhs[0x00000045U] 
                                           & mask[0x00000045U]);
                __Vtemp_12[0x00000046U] = (lhs[0x00000046U] 
                                           & mask[0x00000046U]);
                __Vtemp_12[0x00000047U] = (lhs[0x00000047U] 
                                           & mask[0x00000047U]);
                __Vtemp_12[0x00000048U] = (lhs[0x00000048U] 
                                           & mask[0x00000048U]);
                __Vtemp_12[0x00000049U] = (lhs[0x00000049U] 
                                           & mask[0x00000049U]);
                __Vtemp_12[0x0000004aU] = (lhs[0x0000004aU] 
                                           & mask[0x0000004aU]);
                __Vtemp_12[0x0000004bU] = (lhs[0x0000004bU] 
                                           & mask[0x0000004bU]);
                __Vtemp_12[0x0000004cU] = (lhs[0x0000004cU] 
                                           & mask[0x0000004cU]);
                __Vtemp_12[0x0000004dU] = (lhs[0x0000004dU] 
                                           & mask[0x0000004dU]);
                __Vtemp_12[0x0000004eU] = (lhs[0x0000004eU] 
                                           & mask[0x0000004eU]);
                __Vtemp_12[0x0000004fU] = (lhs[0x0000004fU] 
                                           & mask[0x0000004fU]);
                __Vtemp_12[0x00000050U] = (lhs[0x00000050U] 
                                           & mask[0x00000050U]);
                __Vtemp_12[0x00000051U] = (lhs[0x00000051U] 
                                           & mask[0x00000051U]);
                __Vtemp_12[0x00000052U] = (lhs[0x00000052U] 
                                           & mask[0x00000052U]);
                __Vtemp_12[0x00000053U] = (lhs[0x00000053U] 
                                           & mask[0x00000053U]);
                __Vtemp_12[0x00000054U] = (lhs[0x00000054U] 
                                           & mask[0x00000054U]);
                __Vtemp_12[0x00000055U] = (lhs[0x00000055U] 
                                           & mask[0x00000055U]);
                __Vtemp_12[0x00000056U] = (lhs[0x00000056U] 
                                           & mask[0x00000056U]);
                __Vtemp_12[0x00000057U] = (lhs[0x00000057U] 
                                           & mask[0x00000057U]);
                __Vtemp_12[0x00000058U] = (lhs[0x00000058U] 
                                           & mask[0x00000058U]);
                __Vtemp_12[0x00000059U] = (lhs[0x00000059U] 
                                           & mask[0x00000059U]);
                __Vtemp_12[0x0000005aU] = (lhs[0x0000005aU] 
                                           & mask[0x0000005aU]);
                __Vtemp_12[0x0000005bU] = (lhs[0x0000005bU] 
                                           & mask[0x0000005bU]);
                __Vtemp_12[0x0000005cU] = (lhs[0x0000005cU] 
                                           & mask[0x0000005cU]);
                __Vtemp_12[0x0000005dU] = (lhs[0x0000005dU] 
                                           & mask[0x0000005dU]);
                __Vtemp_12[0x0000005eU] = (lhs[0x0000005eU] 
                                           & mask[0x0000005eU]);
                __Vtemp_12[0x0000005fU] = (lhs[0x0000005fU] 
                                           & mask[0x0000005fU]);
                __Vtemp_12[0x00000060U] = (lhs[0x00000060U] 
                                           & mask[0x00000060U]);
                __Vtemp_12[0x00000061U] = (lhs[0x00000061U] 
                                           & mask[0x00000061U]);
                __Vtemp_12[0x00000062U] = (lhs[0x00000062U] 
                                           & mask[0x00000062U]);
                __Vtemp_12[0x00000063U] = (lhs[0x00000063U] 
                                           & mask[0x00000063U]);
                __Vtemp_12[0x00000064U] = (lhs[0x00000064U] 
                                           & mask[0x00000064U]);
                __Vtemp_12[0x00000065U] = (lhs[0x00000065U] 
                                           & mask[0x00000065U]);
                __Vtemp_12[0x00000066U] = (lhs[0x00000066U] 
                                           & mask[0x00000066U]);
                __Vtemp_12[0x00000067U] = (lhs[0x00000067U] 
                                           & mask[0x00000067U]);
                __Vtemp_12[0x00000068U] = (lhs[0x00000068U] 
                                           & mask[0x00000068U]);
                __Vtemp_12[0x00000069U] = (lhs[0x00000069U] 
                                           & mask[0x00000069U]);
                __Vtemp_12[0x0000006aU] = (lhs[0x0000006aU] 
                                           & mask[0x0000006aU]);
                __Vtemp_12[0x0000006bU] = (lhs[0x0000006bU] 
                                           & mask[0x0000006bU]);
                __Vtemp_12[0x0000006cU] = (lhs[0x0000006cU] 
                                           & mask[0x0000006cU]);
                __Vtemp_12[0x0000006dU] = (lhs[0x0000006dU] 
                                           & mask[0x0000006dU]);
                __Vtemp_12[0x0000006eU] = (lhs[0x0000006eU] 
                                           & mask[0x0000006eU]);
                __Vtemp_12[0x0000006fU] = (lhs[0x0000006fU] 
                                           & mask[0x0000006fU]);
                __Vtemp_12[0x00000070U] = (lhs[0x00000070U] 
                                           & mask[0x00000070U]);
                __Vtemp_12[0x00000071U] = (lhs[0x00000071U] 
                                           & mask[0x00000071U]);
                __Vtemp_12[0x00000072U] = (lhs[0x00000072U] 
                                           & mask[0x00000072U]);
                __Vtemp_12[0x00000073U] = (lhs[0x00000073U] 
                                           & mask[0x00000073U]);
                __Vtemp_12[0x00000074U] = (lhs[0x00000074U] 
                                           & mask[0x00000074U]);
                __Vtemp_12[0x00000075U] = (lhs[0x00000075U] 
                                           & mask[0x00000075U]);
                __Vtemp_12[0x00000076U] = (lhs[0x00000076U] 
                                           & mask[0x00000076U]);
                __Vtemp_12[0x00000077U] = (lhs[0x00000077U] 
                                           & mask[0x00000077U]);
                __Vtemp_12[0x00000078U] = (lhs[0x00000078U] 
                                           & mask[0x00000078U]);
                __Vtemp_12[0x00000079U] = (lhs[0x00000079U] 
                                           & mask[0x00000079U]);
                __Vtemp_12[0x0000007aU] = (lhs[0x0000007aU] 
                                           & mask[0x0000007aU]);
                __Vtemp_12[0x0000007bU] = (lhs[0x0000007bU] 
                                           & mask[0x0000007bU]);
                __Vtemp_12[0x0000007cU] = (lhs[0x0000007cU] 
                                           & mask[0x0000007cU]);
                __Vtemp_12[0x0000007dU] = (lhs[0x0000007dU] 
                                           & mask[0x0000007dU]);
                __Vtemp_12[0x0000007eU] = (lhs[0x0000007eU] 
                                           & mask[0x0000007eU]);
                __Vtemp_12[0x0000007fU] = (lhs[0x0000007fU] 
                                           & mask[0x0000007fU]);
                __Vtemp_13[0U] = (rhs[0U] & mask[0U]);
                __Vtemp_13[1U] = (rhs[1U] & mask[1U]);
                __Vtemp_13[2U] = (rhs[2U] & mask[2U]);
                __Vtemp_13[3U] = (rhs[3U] & mask[3U]);
                __Vtemp_13[4U] = (rhs[4U] & mask[4U]);
                __Vtemp_13[5U] = (rhs[5U] & mask[5U]);
                __Vtemp_13[6U] = (rhs[6U] & mask[6U]);
                __Vtemp_13[7U] = (rhs[7U] & mask[7U]);
                __Vtemp_13[8U] = (rhs[8U] & mask[8U]);
                __Vtemp_13[9U] = (rhs[9U] & mask[9U]);
                __Vtemp_13[0x0000000aU] = (rhs[0x0000000aU] 
                                           & mask[0x0000000aU]);
                __Vtemp_13[0x0000000bU] = (rhs[0x0000000bU] 
                                           & mask[0x0000000bU]);
                __Vtemp_13[0x0000000cU] = (rhs[0x0000000cU] 
                                           & mask[0x0000000cU]);
                __Vtemp_13[0x0000000dU] = (rhs[0x0000000dU] 
                                           & mask[0x0000000dU]);
                __Vtemp_13[0x0000000eU] = (rhs[0x0000000eU] 
                                           & mask[0x0000000eU]);
                __Vtemp_13[0x0000000fU] = (rhs[0x0000000fU] 
                                           & mask[0x0000000fU]);
                __Vtemp_13[0x00000010U] = (rhs[0x00000010U] 
                                           & mask[0x00000010U]);
                __Vtemp_13[0x00000011U] = (rhs[0x00000011U] 
                                           & mask[0x00000011U]);
                __Vtemp_13[0x00000012U] = (rhs[0x00000012U] 
                                           & mask[0x00000012U]);
                __Vtemp_13[0x00000013U] = (rhs[0x00000013U] 
                                           & mask[0x00000013U]);
                __Vtemp_13[0x00000014U] = (rhs[0x00000014U] 
                                           & mask[0x00000014U]);
                __Vtemp_13[0x00000015U] = (rhs[0x00000015U] 
                                           & mask[0x00000015U]);
                __Vtemp_13[0x00000016U] = (rhs[0x00000016U] 
                                           & mask[0x00000016U]);
                __Vtemp_13[0x00000017U] = (rhs[0x00000017U] 
                                           & mask[0x00000017U]);
                __Vtemp_13[0x00000018U] = (rhs[0x00000018U] 
                                           & mask[0x00000018U]);
                __Vtemp_13[0x00000019U] = (rhs[0x00000019U] 
                                           & mask[0x00000019U]);
                __Vtemp_13[0x0000001aU] = (rhs[0x0000001aU] 
                                           & mask[0x0000001aU]);
                __Vtemp_13[0x0000001bU] = (rhs[0x0000001bU] 
                                           & mask[0x0000001bU]);
                __Vtemp_13[0x0000001cU] = (rhs[0x0000001cU] 
                                           & mask[0x0000001cU]);
                __Vtemp_13[0x0000001dU] = (rhs[0x0000001dU] 
                                           & mask[0x0000001dU]);
                __Vtemp_13[0x0000001eU] = (rhs[0x0000001eU] 
                                           & mask[0x0000001eU]);
                __Vtemp_13[0x0000001fU] = (rhs[0x0000001fU] 
                                           & mask[0x0000001fU]);
                __Vtemp_13[0x00000020U] = (rhs[0x00000020U] 
                                           & mask[0x00000020U]);
                __Vtemp_13[0x00000021U] = (rhs[0x00000021U] 
                                           & mask[0x00000021U]);
                __Vtemp_13[0x00000022U] = (rhs[0x00000022U] 
                                           & mask[0x00000022U]);
                __Vtemp_13[0x00000023U] = (rhs[0x00000023U] 
                                           & mask[0x00000023U]);
                __Vtemp_13[0x00000024U] = (rhs[0x00000024U] 
                                           & mask[0x00000024U]);
                __Vtemp_13[0x00000025U] = (rhs[0x00000025U] 
                                           & mask[0x00000025U]);
                __Vtemp_13[0x00000026U] = (rhs[0x00000026U] 
                                           & mask[0x00000026U]);
                __Vtemp_13[0x00000027U] = (rhs[0x00000027U] 
                                           & mask[0x00000027U]);
                __Vtemp_13[0x00000028U] = (rhs[0x00000028U] 
                                           & mask[0x00000028U]);
                __Vtemp_13[0x00000029U] = (rhs[0x00000029U] 
                                           & mask[0x00000029U]);
                __Vtemp_13[0x0000002aU] = (rhs[0x0000002aU] 
                                           & mask[0x0000002aU]);
                __Vtemp_13[0x0000002bU] = (rhs[0x0000002bU] 
                                           & mask[0x0000002bU]);
                __Vtemp_13[0x0000002cU] = (rhs[0x0000002cU] 
                                           & mask[0x0000002cU]);
                __Vtemp_13[0x0000002dU] = (rhs[0x0000002dU] 
                                           & mask[0x0000002dU]);
                __Vtemp_13[0x0000002eU] = (rhs[0x0000002eU] 
                                           & mask[0x0000002eU]);
                __Vtemp_13[0x0000002fU] = (rhs[0x0000002fU] 
                                           & mask[0x0000002fU]);
                __Vtemp_13[0x00000030U] = (rhs[0x00000030U] 
                                           & mask[0x00000030U]);
                __Vtemp_13[0x00000031U] = (rhs[0x00000031U] 
                                           & mask[0x00000031U]);
                __Vtemp_13[0x00000032U] = (rhs[0x00000032U] 
                                           & mask[0x00000032U]);
                __Vtemp_13[0x00000033U] = (rhs[0x00000033U] 
                                           & mask[0x00000033U]);
                __Vtemp_13[0x00000034U] = (rhs[0x00000034U] 
                                           & mask[0x00000034U]);
                __Vtemp_13[0x00000035U] = (rhs[0x00000035U] 
                                           & mask[0x00000035U]);
                __Vtemp_13[0x00000036U] = (rhs[0x00000036U] 
                                           & mask[0x00000036U]);
                __Vtemp_13[0x00000037U] = (rhs[0x00000037U] 
                                           & mask[0x00000037U]);
                __Vtemp_13[0x00000038U] = (rhs[0x00000038U] 
                                           & mask[0x00000038U]);
                __Vtemp_13[0x00000039U] = (rhs[0x00000039U] 
                                           & mask[0x00000039U]);
                __Vtemp_13[0x0000003aU] = (rhs[0x0000003aU] 
                                           & mask[0x0000003aU]);
                __Vtemp_13[0x0000003bU] = (rhs[0x0000003bU] 
                                           & mask[0x0000003bU]);
                __Vtemp_13[0x0000003cU] = (rhs[0x0000003cU] 
                                           & mask[0x0000003cU]);
                __Vtemp_13[0x0000003dU] = (rhs[0x0000003dU] 
                                           & mask[0x0000003dU]);
                __Vtemp_13[0x0000003eU] = (rhs[0x0000003eU] 
                                           & mask[0x0000003eU]);
                __Vtemp_13[0x0000003fU] = (rhs[0x0000003fU] 
                                           & mask[0x0000003fU]);
                __Vtemp_13[0x00000040U] = (rhs[0x00000040U] 
                                           & mask[0x00000040U]);
                __Vtemp_13[0x00000041U] = (rhs[0x00000041U] 
                                           & mask[0x00000041U]);
                __Vtemp_13[0x00000042U] = (rhs[0x00000042U] 
                                           & mask[0x00000042U]);
                __Vtemp_13[0x00000043U] = (rhs[0x00000043U] 
                                           & mask[0x00000043U]);
                __Vtemp_13[0x00000044U] = (rhs[0x00000044U] 
                                           & mask[0x00000044U]);
                __Vtemp_13[0x00000045U] = (rhs[0x00000045U] 
                                           & mask[0x00000045U]);
                __Vtemp_13[0x00000046U] = (rhs[0x00000046U] 
                                           & mask[0x00000046U]);
                __Vtemp_13[0x00000047U] = (rhs[0x00000047U] 
                                           & mask[0x00000047U]);
                __Vtemp_13[0x00000048U] = (rhs[0x00000048U] 
                                           & mask[0x00000048U]);
                __Vtemp_13[0x00000049U] = (rhs[0x00000049U] 
                                           & mask[0x00000049U]);
                __Vtemp_13[0x0000004aU] = (rhs[0x0000004aU] 
                                           & mask[0x0000004aU]);
                __Vtemp_13[0x0000004bU] = (rhs[0x0000004bU] 
                                           & mask[0x0000004bU]);
                __Vtemp_13[0x0000004cU] = (rhs[0x0000004cU] 
                                           & mask[0x0000004cU]);
                __Vtemp_13[0x0000004dU] = (rhs[0x0000004dU] 
                                           & mask[0x0000004dU]);
                __Vtemp_13[0x0000004eU] = (rhs[0x0000004eU] 
                                           & mask[0x0000004eU]);
                __Vtemp_13[0x0000004fU] = (rhs[0x0000004fU] 
                                           & mask[0x0000004fU]);
                __Vtemp_13[0x00000050U] = (rhs[0x00000050U] 
                                           & mask[0x00000050U]);
                __Vtemp_13[0x00000051U] = (rhs[0x00000051U] 
                                           & mask[0x00000051U]);
                __Vtemp_13[0x00000052U] = (rhs[0x00000052U] 
                                           & mask[0x00000052U]);
                __Vtemp_13[0x00000053U] = (rhs[0x00000053U] 
                                           & mask[0x00000053U]);
                __Vtemp_13[0x00000054U] = (rhs[0x00000054U] 
                                           & mask[0x00000054U]);
                __Vtemp_13[0x00000055U] = (rhs[0x00000055U] 
                                           & mask[0x00000055U]);
                __Vtemp_13[0x00000056U] = (rhs[0x00000056U] 
                                           & mask[0x00000056U]);
                __Vtemp_13[0x00000057U] = (rhs[0x00000057U] 
                                           & mask[0x00000057U]);
                __Vtemp_13[0x00000058U] = (rhs[0x00000058U] 
                                           & mask[0x00000058U]);
                __Vtemp_13[0x00000059U] = (rhs[0x00000059U] 
                                           & mask[0x00000059U]);
                __Vtemp_13[0x0000005aU] = (rhs[0x0000005aU] 
                                           & mask[0x0000005aU]);
                __Vtemp_13[0x0000005bU] = (rhs[0x0000005bU] 
                                           & mask[0x0000005bU]);
                __Vtemp_13[0x0000005cU] = (rhs[0x0000005cU] 
                                           & mask[0x0000005cU]);
                __Vtemp_13[0x0000005dU] = (rhs[0x0000005dU] 
                                           & mask[0x0000005dU]);
                __Vtemp_13[0x0000005eU] = (rhs[0x0000005eU] 
                                           & mask[0x0000005eU]);
                __Vtemp_13[0x0000005fU] = (rhs[0x0000005fU] 
                                           & mask[0x0000005fU]);
                __Vtemp_13[0x00000060U] = (rhs[0x00000060U] 
                                           & mask[0x00000060U]);
                __Vtemp_13[0x00000061U] = (rhs[0x00000061U] 
                                           & mask[0x00000061U]);
                __Vtemp_13[0x00000062U] = (rhs[0x00000062U] 
                                           & mask[0x00000062U]);
                __Vtemp_13[0x00000063U] = (rhs[0x00000063U] 
                                           & mask[0x00000063U]);
                __Vtemp_13[0x00000064U] = (rhs[0x00000064U] 
                                           & mask[0x00000064U]);
                __Vtemp_13[0x00000065U] = (rhs[0x00000065U] 
                                           & mask[0x00000065U]);
                __Vtemp_13[0x00000066U] = (rhs[0x00000066U] 
                                           & mask[0x00000066U]);
                __Vtemp_13[0x00000067U] = (rhs[0x00000067U] 
                                           & mask[0x00000067U]);
                __Vtemp_13[0x00000068U] = (rhs[0x00000068U] 
                                           & mask[0x00000068U]);
                __Vtemp_13[0x00000069U] = (rhs[0x00000069U] 
                                           & mask[0x00000069U]);
                __Vtemp_13[0x0000006aU] = (rhs[0x0000006aU] 
                                           & mask[0x0000006aU]);
                __Vtemp_13[0x0000006bU] = (rhs[0x0000006bU] 
                                           & mask[0x0000006bU]);
                __Vtemp_13[0x0000006cU] = (rhs[0x0000006cU] 
                                           & mask[0x0000006cU]);
                __Vtemp_13[0x0000006dU] = (rhs[0x0000006dU] 
                                           & mask[0x0000006dU]);
                __Vtemp_13[0x0000006eU] = (rhs[0x0000006eU] 
                                           & mask[0x0000006eU]);
                __Vtemp_13[0x0000006fU] = (rhs[0x0000006fU] 
                                           & mask[0x0000006fU]);
                __Vtemp_13[0x00000070U] = (rhs[0x00000070U] 
                                           & mask[0x00000070U]);
                __Vtemp_13[0x00000071U] = (rhs[0x00000071U] 
                                           & mask[0x00000071U]);
                __Vtemp_13[0x00000072U] = (rhs[0x00000072U] 
                                           & mask[0x00000072U]);
                __Vtemp_13[0x00000073U] = (rhs[0x00000073U] 
                                           & mask[0x00000073U]);
                __Vtemp_13[0x00000074U] = (rhs[0x00000074U] 
                                           & mask[0x00000074U]);
                __Vtemp_13[0x00000075U] = (rhs[0x00000075U] 
                                           & mask[0x00000075U]);
                __Vtemp_13[0x00000076U] = (rhs[0x00000076U] 
                                           & mask[0x00000076U]);
                __Vtemp_13[0x00000077U] = (rhs[0x00000077U] 
                                           & mask[0x00000077U]);
                __Vtemp_13[0x00000078U] = (rhs[0x00000078U] 
                                           & mask[0x00000078U]);
                __Vtemp_13[0x00000079U] = (rhs[0x00000079U] 
                                           & mask[0x00000079U]);
                __Vtemp_13[0x0000007aU] = (rhs[0x0000007aU] 
                                           & mask[0x0000007aU]);
                __Vtemp_13[0x0000007bU] = (rhs[0x0000007bU] 
                                           & mask[0x0000007bU]);
                __Vtemp_13[0x0000007cU] = (rhs[0x0000007cU] 
                                           & mask[0x0000007cU]);
                __Vtemp_13[0x0000007dU] = (rhs[0x0000007dU] 
                                           & mask[0x0000007dU]);
                __Vtemp_13[0x0000007eU] = (rhs[0x0000007eU] 
                                           & mask[0x0000007eU]);
                __Vtemp_13[0x0000007fU] = (rhs[0x0000007fU] 
                                           & mask[0x0000007fU]);
                VL_SFORMAT_NX(64,msg,"%@: lhs = %0s : rhs = %0s",0,
                              -1,&(name),4096,__Vtemp_12.data(),
                              4096,__Vtemp_13.data());
            } else if ((0x0a000000U == radix)) {
                __Vtemp_14[0U] = (lhs[0U] & mask[0U]);
                __Vtemp_14[1U] = (lhs[1U] & mask[1U]);
                __Vtemp_14[2U] = (lhs[2U] & mask[2U]);
                __Vtemp_14[3U] = (lhs[3U] & mask[3U]);
                __Vtemp_14[4U] = (lhs[4U] & mask[4U]);
                __Vtemp_14[5U] = (lhs[5U] & mask[5U]);
                __Vtemp_14[6U] = (lhs[6U] & mask[6U]);
                __Vtemp_14[7U] = (lhs[7U] & mask[7U]);
                __Vtemp_14[8U] = (lhs[8U] & mask[8U]);
                __Vtemp_14[9U] = (lhs[9U] & mask[9U]);
                __Vtemp_14[0x0000000aU] = (lhs[0x0000000aU] 
                                           & mask[0x0000000aU]);
                __Vtemp_14[0x0000000bU] = (lhs[0x0000000bU] 
                                           & mask[0x0000000bU]);
                __Vtemp_14[0x0000000cU] = (lhs[0x0000000cU] 
                                           & mask[0x0000000cU]);
                __Vtemp_14[0x0000000dU] = (lhs[0x0000000dU] 
                                           & mask[0x0000000dU]);
                __Vtemp_14[0x0000000eU] = (lhs[0x0000000eU] 
                                           & mask[0x0000000eU]);
                __Vtemp_14[0x0000000fU] = (lhs[0x0000000fU] 
                                           & mask[0x0000000fU]);
                __Vtemp_14[0x00000010U] = (lhs[0x00000010U] 
                                           & mask[0x00000010U]);
                __Vtemp_14[0x00000011U] = (lhs[0x00000011U] 
                                           & mask[0x00000011U]);
                __Vtemp_14[0x00000012U] = (lhs[0x00000012U] 
                                           & mask[0x00000012U]);
                __Vtemp_14[0x00000013U] = (lhs[0x00000013U] 
                                           & mask[0x00000013U]);
                __Vtemp_14[0x00000014U] = (lhs[0x00000014U] 
                                           & mask[0x00000014U]);
                __Vtemp_14[0x00000015U] = (lhs[0x00000015U] 
                                           & mask[0x00000015U]);
                __Vtemp_14[0x00000016U] = (lhs[0x00000016U] 
                                           & mask[0x00000016U]);
                __Vtemp_14[0x00000017U] = (lhs[0x00000017U] 
                                           & mask[0x00000017U]);
                __Vtemp_14[0x00000018U] = (lhs[0x00000018U] 
                                           & mask[0x00000018U]);
                __Vtemp_14[0x00000019U] = (lhs[0x00000019U] 
                                           & mask[0x00000019U]);
                __Vtemp_14[0x0000001aU] = (lhs[0x0000001aU] 
                                           & mask[0x0000001aU]);
                __Vtemp_14[0x0000001bU] = (lhs[0x0000001bU] 
                                           & mask[0x0000001bU]);
                __Vtemp_14[0x0000001cU] = (lhs[0x0000001cU] 
                                           & mask[0x0000001cU]);
                __Vtemp_14[0x0000001dU] = (lhs[0x0000001dU] 
                                           & mask[0x0000001dU]);
                __Vtemp_14[0x0000001eU] = (lhs[0x0000001eU] 
                                           & mask[0x0000001eU]);
                __Vtemp_14[0x0000001fU] = (lhs[0x0000001fU] 
                                           & mask[0x0000001fU]);
                __Vtemp_14[0x00000020U] = (lhs[0x00000020U] 
                                           & mask[0x00000020U]);
                __Vtemp_14[0x00000021U] = (lhs[0x00000021U] 
                                           & mask[0x00000021U]);
                __Vtemp_14[0x00000022U] = (lhs[0x00000022U] 
                                           & mask[0x00000022U]);
                __Vtemp_14[0x00000023U] = (lhs[0x00000023U] 
                                           & mask[0x00000023U]);
                __Vtemp_14[0x00000024U] = (lhs[0x00000024U] 
                                           & mask[0x00000024U]);
                __Vtemp_14[0x00000025U] = (lhs[0x00000025U] 
                                           & mask[0x00000025U]);
                __Vtemp_14[0x00000026U] = (lhs[0x00000026U] 
                                           & mask[0x00000026U]);
                __Vtemp_14[0x00000027U] = (lhs[0x00000027U] 
                                           & mask[0x00000027U]);
                __Vtemp_14[0x00000028U] = (lhs[0x00000028U] 
                                           & mask[0x00000028U]);
                __Vtemp_14[0x00000029U] = (lhs[0x00000029U] 
                                           & mask[0x00000029U]);
                __Vtemp_14[0x0000002aU] = (lhs[0x0000002aU] 
                                           & mask[0x0000002aU]);
                __Vtemp_14[0x0000002bU] = (lhs[0x0000002bU] 
                                           & mask[0x0000002bU]);
                __Vtemp_14[0x0000002cU] = (lhs[0x0000002cU] 
                                           & mask[0x0000002cU]);
                __Vtemp_14[0x0000002dU] = (lhs[0x0000002dU] 
                                           & mask[0x0000002dU]);
                __Vtemp_14[0x0000002eU] = (lhs[0x0000002eU] 
                                           & mask[0x0000002eU]);
                __Vtemp_14[0x0000002fU] = (lhs[0x0000002fU] 
                                           & mask[0x0000002fU]);
                __Vtemp_14[0x00000030U] = (lhs[0x00000030U] 
                                           & mask[0x00000030U]);
                __Vtemp_14[0x00000031U] = (lhs[0x00000031U] 
                                           & mask[0x00000031U]);
                __Vtemp_14[0x00000032U] = (lhs[0x00000032U] 
                                           & mask[0x00000032U]);
                __Vtemp_14[0x00000033U] = (lhs[0x00000033U] 
                                           & mask[0x00000033U]);
                __Vtemp_14[0x00000034U] = (lhs[0x00000034U] 
                                           & mask[0x00000034U]);
                __Vtemp_14[0x00000035U] = (lhs[0x00000035U] 
                                           & mask[0x00000035U]);
                __Vtemp_14[0x00000036U] = (lhs[0x00000036U] 
                                           & mask[0x00000036U]);
                __Vtemp_14[0x00000037U] = (lhs[0x00000037U] 
                                           & mask[0x00000037U]);
                __Vtemp_14[0x00000038U] = (lhs[0x00000038U] 
                                           & mask[0x00000038U]);
                __Vtemp_14[0x00000039U] = (lhs[0x00000039U] 
                                           & mask[0x00000039U]);
                __Vtemp_14[0x0000003aU] = (lhs[0x0000003aU] 
                                           & mask[0x0000003aU]);
                __Vtemp_14[0x0000003bU] = (lhs[0x0000003bU] 
                                           & mask[0x0000003bU]);
                __Vtemp_14[0x0000003cU] = (lhs[0x0000003cU] 
                                           & mask[0x0000003cU]);
                __Vtemp_14[0x0000003dU] = (lhs[0x0000003dU] 
                                           & mask[0x0000003dU]);
                __Vtemp_14[0x0000003eU] = (lhs[0x0000003eU] 
                                           & mask[0x0000003eU]);
                __Vtemp_14[0x0000003fU] = (lhs[0x0000003fU] 
                                           & mask[0x0000003fU]);
                __Vtemp_14[0x00000040U] = (lhs[0x00000040U] 
                                           & mask[0x00000040U]);
                __Vtemp_14[0x00000041U] = (lhs[0x00000041U] 
                                           & mask[0x00000041U]);
                __Vtemp_14[0x00000042U] = (lhs[0x00000042U] 
                                           & mask[0x00000042U]);
                __Vtemp_14[0x00000043U] = (lhs[0x00000043U] 
                                           & mask[0x00000043U]);
                __Vtemp_14[0x00000044U] = (lhs[0x00000044U] 
                                           & mask[0x00000044U]);
                __Vtemp_14[0x00000045U] = (lhs[0x00000045U] 
                                           & mask[0x00000045U]);
                __Vtemp_14[0x00000046U] = (lhs[0x00000046U] 
                                           & mask[0x00000046U]);
                __Vtemp_14[0x00000047U] = (lhs[0x00000047U] 
                                           & mask[0x00000047U]);
                __Vtemp_14[0x00000048U] = (lhs[0x00000048U] 
                                           & mask[0x00000048U]);
                __Vtemp_14[0x00000049U] = (lhs[0x00000049U] 
                                           & mask[0x00000049U]);
                __Vtemp_14[0x0000004aU] = (lhs[0x0000004aU] 
                                           & mask[0x0000004aU]);
                __Vtemp_14[0x0000004bU] = (lhs[0x0000004bU] 
                                           & mask[0x0000004bU]);
                __Vtemp_14[0x0000004cU] = (lhs[0x0000004cU] 
                                           & mask[0x0000004cU]);
                __Vtemp_14[0x0000004dU] = (lhs[0x0000004dU] 
                                           & mask[0x0000004dU]);
                __Vtemp_14[0x0000004eU] = (lhs[0x0000004eU] 
                                           & mask[0x0000004eU]);
                __Vtemp_14[0x0000004fU] = (lhs[0x0000004fU] 
                                           & mask[0x0000004fU]);
                __Vtemp_14[0x00000050U] = (lhs[0x00000050U] 
                                           & mask[0x00000050U]);
                __Vtemp_14[0x00000051U] = (lhs[0x00000051U] 
                                           & mask[0x00000051U]);
                __Vtemp_14[0x00000052U] = (lhs[0x00000052U] 
                                           & mask[0x00000052U]);
                __Vtemp_14[0x00000053U] = (lhs[0x00000053U] 
                                           & mask[0x00000053U]);
                __Vtemp_14[0x00000054U] = (lhs[0x00000054U] 
                                           & mask[0x00000054U]);
                __Vtemp_14[0x00000055U] = (lhs[0x00000055U] 
                                           & mask[0x00000055U]);
                __Vtemp_14[0x00000056U] = (lhs[0x00000056U] 
                                           & mask[0x00000056U]);
                __Vtemp_14[0x00000057U] = (lhs[0x00000057U] 
                                           & mask[0x00000057U]);
                __Vtemp_14[0x00000058U] = (lhs[0x00000058U] 
                                           & mask[0x00000058U]);
                __Vtemp_14[0x00000059U] = (lhs[0x00000059U] 
                                           & mask[0x00000059U]);
                __Vtemp_14[0x0000005aU] = (lhs[0x0000005aU] 
                                           & mask[0x0000005aU]);
                __Vtemp_14[0x0000005bU] = (lhs[0x0000005bU] 
                                           & mask[0x0000005bU]);
                __Vtemp_14[0x0000005cU] = (lhs[0x0000005cU] 
                                           & mask[0x0000005cU]);
                __Vtemp_14[0x0000005dU] = (lhs[0x0000005dU] 
                                           & mask[0x0000005dU]);
                __Vtemp_14[0x0000005eU] = (lhs[0x0000005eU] 
                                           & mask[0x0000005eU]);
                __Vtemp_14[0x0000005fU] = (lhs[0x0000005fU] 
                                           & mask[0x0000005fU]);
                __Vtemp_14[0x00000060U] = (lhs[0x00000060U] 
                                           & mask[0x00000060U]);
                __Vtemp_14[0x00000061U] = (lhs[0x00000061U] 
                                           & mask[0x00000061U]);
                __Vtemp_14[0x00000062U] = (lhs[0x00000062U] 
                                           & mask[0x00000062U]);
                __Vtemp_14[0x00000063U] = (lhs[0x00000063U] 
                                           & mask[0x00000063U]);
                __Vtemp_14[0x00000064U] = (lhs[0x00000064U] 
                                           & mask[0x00000064U]);
                __Vtemp_14[0x00000065U] = (lhs[0x00000065U] 
                                           & mask[0x00000065U]);
                __Vtemp_14[0x00000066U] = (lhs[0x00000066U] 
                                           & mask[0x00000066U]);
                __Vtemp_14[0x00000067U] = (lhs[0x00000067U] 
                                           & mask[0x00000067U]);
                __Vtemp_14[0x00000068U] = (lhs[0x00000068U] 
                                           & mask[0x00000068U]);
                __Vtemp_14[0x00000069U] = (lhs[0x00000069U] 
                                           & mask[0x00000069U]);
                __Vtemp_14[0x0000006aU] = (lhs[0x0000006aU] 
                                           & mask[0x0000006aU]);
                __Vtemp_14[0x0000006bU] = (lhs[0x0000006bU] 
                                           & mask[0x0000006bU]);
                __Vtemp_14[0x0000006cU] = (lhs[0x0000006cU] 
                                           & mask[0x0000006cU]);
                __Vtemp_14[0x0000006dU] = (lhs[0x0000006dU] 
                                           & mask[0x0000006dU]);
                __Vtemp_14[0x0000006eU] = (lhs[0x0000006eU] 
                                           & mask[0x0000006eU]);
                __Vtemp_14[0x0000006fU] = (lhs[0x0000006fU] 
                                           & mask[0x0000006fU]);
                __Vtemp_14[0x00000070U] = (lhs[0x00000070U] 
                                           & mask[0x00000070U]);
                __Vtemp_14[0x00000071U] = (lhs[0x00000071U] 
                                           & mask[0x00000071U]);
                __Vtemp_14[0x00000072U] = (lhs[0x00000072U] 
                                           & mask[0x00000072U]);
                __Vtemp_14[0x00000073U] = (lhs[0x00000073U] 
                                           & mask[0x00000073U]);
                __Vtemp_14[0x00000074U] = (lhs[0x00000074U] 
                                           & mask[0x00000074U]);
                __Vtemp_14[0x00000075U] = (lhs[0x00000075U] 
                                           & mask[0x00000075U]);
                __Vtemp_14[0x00000076U] = (lhs[0x00000076U] 
                                           & mask[0x00000076U]);
                __Vtemp_14[0x00000077U] = (lhs[0x00000077U] 
                                           & mask[0x00000077U]);
                __Vtemp_14[0x00000078U] = (lhs[0x00000078U] 
                                           & mask[0x00000078U]);
                __Vtemp_14[0x00000079U] = (lhs[0x00000079U] 
                                           & mask[0x00000079U]);
                __Vtemp_14[0x0000007aU] = (lhs[0x0000007aU] 
                                           & mask[0x0000007aU]);
                __Vtemp_14[0x0000007bU] = (lhs[0x0000007bU] 
                                           & mask[0x0000007bU]);
                __Vtemp_14[0x0000007cU] = (lhs[0x0000007cU] 
                                           & mask[0x0000007cU]);
                __Vtemp_14[0x0000007dU] = (lhs[0x0000007dU] 
                                           & mask[0x0000007dU]);
                __Vtemp_14[0x0000007eU] = (lhs[0x0000007eU] 
                                           & mask[0x0000007eU]);
                __Vtemp_14[0x0000007fU] = (lhs[0x0000007fU] 
                                           & mask[0x0000007fU]);
                __Vtemp_15[0U] = (rhs[0U] & mask[0U]);
                __Vtemp_15[1U] = (rhs[1U] & mask[1U]);
                __Vtemp_15[2U] = (rhs[2U] & mask[2U]);
                __Vtemp_15[3U] = (rhs[3U] & mask[3U]);
                __Vtemp_15[4U] = (rhs[4U] & mask[4U]);
                __Vtemp_15[5U] = (rhs[5U] & mask[5U]);
                __Vtemp_15[6U] = (rhs[6U] & mask[6U]);
                __Vtemp_15[7U] = (rhs[7U] & mask[7U]);
                __Vtemp_15[8U] = (rhs[8U] & mask[8U]);
                __Vtemp_15[9U] = (rhs[9U] & mask[9U]);
                __Vtemp_15[0x0000000aU] = (rhs[0x0000000aU] 
                                           & mask[0x0000000aU]);
                __Vtemp_15[0x0000000bU] = (rhs[0x0000000bU] 
                                           & mask[0x0000000bU]);
                __Vtemp_15[0x0000000cU] = (rhs[0x0000000cU] 
                                           & mask[0x0000000cU]);
                __Vtemp_15[0x0000000dU] = (rhs[0x0000000dU] 
                                           & mask[0x0000000dU]);
                __Vtemp_15[0x0000000eU] = (rhs[0x0000000eU] 
                                           & mask[0x0000000eU]);
                __Vtemp_15[0x0000000fU] = (rhs[0x0000000fU] 
                                           & mask[0x0000000fU]);
                __Vtemp_15[0x00000010U] = (rhs[0x00000010U] 
                                           & mask[0x00000010U]);
                __Vtemp_15[0x00000011U] = (rhs[0x00000011U] 
                                           & mask[0x00000011U]);
                __Vtemp_15[0x00000012U] = (rhs[0x00000012U] 
                                           & mask[0x00000012U]);
                __Vtemp_15[0x00000013U] = (rhs[0x00000013U] 
                                           & mask[0x00000013U]);
                __Vtemp_15[0x00000014U] = (rhs[0x00000014U] 
                                           & mask[0x00000014U]);
                __Vtemp_15[0x00000015U] = (rhs[0x00000015U] 
                                           & mask[0x00000015U]);
                __Vtemp_15[0x00000016U] = (rhs[0x00000016U] 
                                           & mask[0x00000016U]);
                __Vtemp_15[0x00000017U] = (rhs[0x00000017U] 
                                           & mask[0x00000017U]);
                __Vtemp_15[0x00000018U] = (rhs[0x00000018U] 
                                           & mask[0x00000018U]);
                __Vtemp_15[0x00000019U] = (rhs[0x00000019U] 
                                           & mask[0x00000019U]);
                __Vtemp_15[0x0000001aU] = (rhs[0x0000001aU] 
                                           & mask[0x0000001aU]);
                __Vtemp_15[0x0000001bU] = (rhs[0x0000001bU] 
                                           & mask[0x0000001bU]);
                __Vtemp_15[0x0000001cU] = (rhs[0x0000001cU] 
                                           & mask[0x0000001cU]);
                __Vtemp_15[0x0000001dU] = (rhs[0x0000001dU] 
                                           & mask[0x0000001dU]);
                __Vtemp_15[0x0000001eU] = (rhs[0x0000001eU] 
                                           & mask[0x0000001eU]);
                __Vtemp_15[0x0000001fU] = (rhs[0x0000001fU] 
                                           & mask[0x0000001fU]);
                __Vtemp_15[0x00000020U] = (rhs[0x00000020U] 
                                           & mask[0x00000020U]);
                __Vtemp_15[0x00000021U] = (rhs[0x00000021U] 
                                           & mask[0x00000021U]);
                __Vtemp_15[0x00000022U] = (rhs[0x00000022U] 
                                           & mask[0x00000022U]);
                __Vtemp_15[0x00000023U] = (rhs[0x00000023U] 
                                           & mask[0x00000023U]);
                __Vtemp_15[0x00000024U] = (rhs[0x00000024U] 
                                           & mask[0x00000024U]);
                __Vtemp_15[0x00000025U] = (rhs[0x00000025U] 
                                           & mask[0x00000025U]);
                __Vtemp_15[0x00000026U] = (rhs[0x00000026U] 
                                           & mask[0x00000026U]);
                __Vtemp_15[0x00000027U] = (rhs[0x00000027U] 
                                           & mask[0x00000027U]);
                __Vtemp_15[0x00000028U] = (rhs[0x00000028U] 
                                           & mask[0x00000028U]);
                __Vtemp_15[0x00000029U] = (rhs[0x00000029U] 
                                           & mask[0x00000029U]);
                __Vtemp_15[0x0000002aU] = (rhs[0x0000002aU] 
                                           & mask[0x0000002aU]);
                __Vtemp_15[0x0000002bU] = (rhs[0x0000002bU] 
                                           & mask[0x0000002bU]);
                __Vtemp_15[0x0000002cU] = (rhs[0x0000002cU] 
                                           & mask[0x0000002cU]);
                __Vtemp_15[0x0000002dU] = (rhs[0x0000002dU] 
                                           & mask[0x0000002dU]);
                __Vtemp_15[0x0000002eU] = (rhs[0x0000002eU] 
                                           & mask[0x0000002eU]);
                __Vtemp_15[0x0000002fU] = (rhs[0x0000002fU] 
                                           & mask[0x0000002fU]);
                __Vtemp_15[0x00000030U] = (rhs[0x00000030U] 
                                           & mask[0x00000030U]);
                __Vtemp_15[0x00000031U] = (rhs[0x00000031U] 
                                           & mask[0x00000031U]);
                __Vtemp_15[0x00000032U] = (rhs[0x00000032U] 
                                           & mask[0x00000032U]);
                __Vtemp_15[0x00000033U] = (rhs[0x00000033U] 
                                           & mask[0x00000033U]);
                __Vtemp_15[0x00000034U] = (rhs[0x00000034U] 
                                           & mask[0x00000034U]);
                __Vtemp_15[0x00000035U] = (rhs[0x00000035U] 
                                           & mask[0x00000035U]);
                __Vtemp_15[0x00000036U] = (rhs[0x00000036U] 
                                           & mask[0x00000036U]);
                __Vtemp_15[0x00000037U] = (rhs[0x00000037U] 
                                           & mask[0x00000037U]);
                __Vtemp_15[0x00000038U] = (rhs[0x00000038U] 
                                           & mask[0x00000038U]);
                __Vtemp_15[0x00000039U] = (rhs[0x00000039U] 
                                           & mask[0x00000039U]);
                __Vtemp_15[0x0000003aU] = (rhs[0x0000003aU] 
                                           & mask[0x0000003aU]);
                __Vtemp_15[0x0000003bU] = (rhs[0x0000003bU] 
                                           & mask[0x0000003bU]);
                __Vtemp_15[0x0000003cU] = (rhs[0x0000003cU] 
                                           & mask[0x0000003cU]);
                __Vtemp_15[0x0000003dU] = (rhs[0x0000003dU] 
                                           & mask[0x0000003dU]);
                __Vtemp_15[0x0000003eU] = (rhs[0x0000003eU] 
                                           & mask[0x0000003eU]);
                __Vtemp_15[0x0000003fU] = (rhs[0x0000003fU] 
                                           & mask[0x0000003fU]);
                __Vtemp_15[0x00000040U] = (rhs[0x00000040U] 
                                           & mask[0x00000040U]);
                __Vtemp_15[0x00000041U] = (rhs[0x00000041U] 
                                           & mask[0x00000041U]);
                __Vtemp_15[0x00000042U] = (rhs[0x00000042U] 
                                           & mask[0x00000042U]);
                __Vtemp_15[0x00000043U] = (rhs[0x00000043U] 
                                           & mask[0x00000043U]);
                __Vtemp_15[0x00000044U] = (rhs[0x00000044U] 
                                           & mask[0x00000044U]);
                __Vtemp_15[0x00000045U] = (rhs[0x00000045U] 
                                           & mask[0x00000045U]);
                __Vtemp_15[0x00000046U] = (rhs[0x00000046U] 
                                           & mask[0x00000046U]);
                __Vtemp_15[0x00000047U] = (rhs[0x00000047U] 
                                           & mask[0x00000047U]);
                __Vtemp_15[0x00000048U] = (rhs[0x00000048U] 
                                           & mask[0x00000048U]);
                __Vtemp_15[0x00000049U] = (rhs[0x00000049U] 
                                           & mask[0x00000049U]);
                __Vtemp_15[0x0000004aU] = (rhs[0x0000004aU] 
                                           & mask[0x0000004aU]);
                __Vtemp_15[0x0000004bU] = (rhs[0x0000004bU] 
                                           & mask[0x0000004bU]);
                __Vtemp_15[0x0000004cU] = (rhs[0x0000004cU] 
                                           & mask[0x0000004cU]);
                __Vtemp_15[0x0000004dU] = (rhs[0x0000004dU] 
                                           & mask[0x0000004dU]);
                __Vtemp_15[0x0000004eU] = (rhs[0x0000004eU] 
                                           & mask[0x0000004eU]);
                __Vtemp_15[0x0000004fU] = (rhs[0x0000004fU] 
                                           & mask[0x0000004fU]);
                __Vtemp_15[0x00000050U] = (rhs[0x00000050U] 
                                           & mask[0x00000050U]);
                __Vtemp_15[0x00000051U] = (rhs[0x00000051U] 
                                           & mask[0x00000051U]);
                __Vtemp_15[0x00000052U] = (rhs[0x00000052U] 
                                           & mask[0x00000052U]);
                __Vtemp_15[0x00000053U] = (rhs[0x00000053U] 
                                           & mask[0x00000053U]);
                __Vtemp_15[0x00000054U] = (rhs[0x00000054U] 
                                           & mask[0x00000054U]);
                __Vtemp_15[0x00000055U] = (rhs[0x00000055U] 
                                           & mask[0x00000055U]);
                __Vtemp_15[0x00000056U] = (rhs[0x00000056U] 
                                           & mask[0x00000056U]);
                __Vtemp_15[0x00000057U] = (rhs[0x00000057U] 
                                           & mask[0x00000057U]);
                __Vtemp_15[0x00000058U] = (rhs[0x00000058U] 
                                           & mask[0x00000058U]);
                __Vtemp_15[0x00000059U] = (rhs[0x00000059U] 
                                           & mask[0x00000059U]);
                __Vtemp_15[0x0000005aU] = (rhs[0x0000005aU] 
                                           & mask[0x0000005aU]);
                __Vtemp_15[0x0000005bU] = (rhs[0x0000005bU] 
                                           & mask[0x0000005bU]);
                __Vtemp_15[0x0000005cU] = (rhs[0x0000005cU] 
                                           & mask[0x0000005cU]);
                __Vtemp_15[0x0000005dU] = (rhs[0x0000005dU] 
                                           & mask[0x0000005dU]);
                __Vtemp_15[0x0000005eU] = (rhs[0x0000005eU] 
                                           & mask[0x0000005eU]);
                __Vtemp_15[0x0000005fU] = (rhs[0x0000005fU] 
                                           & mask[0x0000005fU]);
                __Vtemp_15[0x00000060U] = (rhs[0x00000060U] 
                                           & mask[0x00000060U]);
                __Vtemp_15[0x00000061U] = (rhs[0x00000061U] 
                                           & mask[0x00000061U]);
                __Vtemp_15[0x00000062U] = (rhs[0x00000062U] 
                                           & mask[0x00000062U]);
                __Vtemp_15[0x00000063U] = (rhs[0x00000063U] 
                                           & mask[0x00000063U]);
                __Vtemp_15[0x00000064U] = (rhs[0x00000064U] 
                                           & mask[0x00000064U]);
                __Vtemp_15[0x00000065U] = (rhs[0x00000065U] 
                                           & mask[0x00000065U]);
                __Vtemp_15[0x00000066U] = (rhs[0x00000066U] 
                                           & mask[0x00000066U]);
                __Vtemp_15[0x00000067U] = (rhs[0x00000067U] 
                                           & mask[0x00000067U]);
                __Vtemp_15[0x00000068U] = (rhs[0x00000068U] 
                                           & mask[0x00000068U]);
                __Vtemp_15[0x00000069U] = (rhs[0x00000069U] 
                                           & mask[0x00000069U]);
                __Vtemp_15[0x0000006aU] = (rhs[0x0000006aU] 
                                           & mask[0x0000006aU]);
                __Vtemp_15[0x0000006bU] = (rhs[0x0000006bU] 
                                           & mask[0x0000006bU]);
                __Vtemp_15[0x0000006cU] = (rhs[0x0000006cU] 
                                           & mask[0x0000006cU]);
                __Vtemp_15[0x0000006dU] = (rhs[0x0000006dU] 
                                           & mask[0x0000006dU]);
                __Vtemp_15[0x0000006eU] = (rhs[0x0000006eU] 
                                           & mask[0x0000006eU]);
                __Vtemp_15[0x0000006fU] = (rhs[0x0000006fU] 
                                           & mask[0x0000006fU]);
                __Vtemp_15[0x00000070U] = (rhs[0x00000070U] 
                                           & mask[0x00000070U]);
                __Vtemp_15[0x00000071U] = (rhs[0x00000071U] 
                                           & mask[0x00000071U]);
                __Vtemp_15[0x00000072U] = (rhs[0x00000072U] 
                                           & mask[0x00000072U]);
                __Vtemp_15[0x00000073U] = (rhs[0x00000073U] 
                                           & mask[0x00000073U]);
                __Vtemp_15[0x00000074U] = (rhs[0x00000074U] 
                                           & mask[0x00000074U]);
                __Vtemp_15[0x00000075U] = (rhs[0x00000075U] 
                                           & mask[0x00000075U]);
                __Vtemp_15[0x00000076U] = (rhs[0x00000076U] 
                                           & mask[0x00000076U]);
                __Vtemp_15[0x00000077U] = (rhs[0x00000077U] 
                                           & mask[0x00000077U]);
                __Vtemp_15[0x00000078U] = (rhs[0x00000078U] 
                                           & mask[0x00000078U]);
                __Vtemp_15[0x00000079U] = (rhs[0x00000079U] 
                                           & mask[0x00000079U]);
                __Vtemp_15[0x0000007aU] = (rhs[0x0000007aU] 
                                           & mask[0x0000007aU]);
                __Vtemp_15[0x0000007bU] = (rhs[0x0000007bU] 
                                           & mask[0x0000007bU]);
                __Vtemp_15[0x0000007cU] = (rhs[0x0000007cU] 
                                           & mask[0x0000007cU]);
                __Vtemp_15[0x0000007dU] = (rhs[0x0000007dU] 
                                           & mask[0x0000007dU]);
                __Vtemp_15[0x0000007eU] = (rhs[0x0000007eU] 
                                           & mask[0x0000007eU]);
                __Vtemp_15[0x0000007fU] = (rhs[0x0000007fU] 
                                           & mask[0x0000007fU]);
                VL_SFORMAT_NX(64,msg,"%@: lhs = %0d : rhs = %0d",0,
                              -1,&(name),4096,__Vtemp_14.data(),
                              4096,__Vtemp_15.data());
            } else {
                __Vtemp_16[0U] = (lhs[0U] & mask[0U]);
                __Vtemp_16[1U] = (lhs[1U] & mask[1U]);
                __Vtemp_16[2U] = (lhs[2U] & mask[2U]);
                __Vtemp_16[3U] = (lhs[3U] & mask[3U]);
                __Vtemp_16[4U] = (lhs[4U] & mask[4U]);
                __Vtemp_16[5U] = (lhs[5U] & mask[5U]);
                __Vtemp_16[6U] = (lhs[6U] & mask[6U]);
                __Vtemp_16[7U] = (lhs[7U] & mask[7U]);
                __Vtemp_16[8U] = (lhs[8U] & mask[8U]);
                __Vtemp_16[9U] = (lhs[9U] & mask[9U]);
                __Vtemp_16[0x0000000aU] = (lhs[0x0000000aU] 
                                           & mask[0x0000000aU]);
                __Vtemp_16[0x0000000bU] = (lhs[0x0000000bU] 
                                           & mask[0x0000000bU]);
                __Vtemp_16[0x0000000cU] = (lhs[0x0000000cU] 
                                           & mask[0x0000000cU]);
                __Vtemp_16[0x0000000dU] = (lhs[0x0000000dU] 
                                           & mask[0x0000000dU]);
                __Vtemp_16[0x0000000eU] = (lhs[0x0000000eU] 
                                           & mask[0x0000000eU]);
                __Vtemp_16[0x0000000fU] = (lhs[0x0000000fU] 
                                           & mask[0x0000000fU]);
                __Vtemp_16[0x00000010U] = (lhs[0x00000010U] 
                                           & mask[0x00000010U]);
                __Vtemp_16[0x00000011U] = (lhs[0x00000011U] 
                                           & mask[0x00000011U]);
                __Vtemp_16[0x00000012U] = (lhs[0x00000012U] 
                                           & mask[0x00000012U]);
                __Vtemp_16[0x00000013U] = (lhs[0x00000013U] 
                                           & mask[0x00000013U]);
                __Vtemp_16[0x00000014U] = (lhs[0x00000014U] 
                                           & mask[0x00000014U]);
                __Vtemp_16[0x00000015U] = (lhs[0x00000015U] 
                                           & mask[0x00000015U]);
                __Vtemp_16[0x00000016U] = (lhs[0x00000016U] 
                                           & mask[0x00000016U]);
                __Vtemp_16[0x00000017U] = (lhs[0x00000017U] 
                                           & mask[0x00000017U]);
                __Vtemp_16[0x00000018U] = (lhs[0x00000018U] 
                                           & mask[0x00000018U]);
                __Vtemp_16[0x00000019U] = (lhs[0x00000019U] 
                                           & mask[0x00000019U]);
                __Vtemp_16[0x0000001aU] = (lhs[0x0000001aU] 
                                           & mask[0x0000001aU]);
                __Vtemp_16[0x0000001bU] = (lhs[0x0000001bU] 
                                           & mask[0x0000001bU]);
                __Vtemp_16[0x0000001cU] = (lhs[0x0000001cU] 
                                           & mask[0x0000001cU]);
                __Vtemp_16[0x0000001dU] = (lhs[0x0000001dU] 
                                           & mask[0x0000001dU]);
                __Vtemp_16[0x0000001eU] = (lhs[0x0000001eU] 
                                           & mask[0x0000001eU]);
                __Vtemp_16[0x0000001fU] = (lhs[0x0000001fU] 
                                           & mask[0x0000001fU]);
                __Vtemp_16[0x00000020U] = (lhs[0x00000020U] 
                                           & mask[0x00000020U]);
                __Vtemp_16[0x00000021U] = (lhs[0x00000021U] 
                                           & mask[0x00000021U]);
                __Vtemp_16[0x00000022U] = (lhs[0x00000022U] 
                                           & mask[0x00000022U]);
                __Vtemp_16[0x00000023U] = (lhs[0x00000023U] 
                                           & mask[0x00000023U]);
                __Vtemp_16[0x00000024U] = (lhs[0x00000024U] 
                                           & mask[0x00000024U]);
                __Vtemp_16[0x00000025U] = (lhs[0x00000025U] 
                                           & mask[0x00000025U]);
                __Vtemp_16[0x00000026U] = (lhs[0x00000026U] 
                                           & mask[0x00000026U]);
                __Vtemp_16[0x00000027U] = (lhs[0x00000027U] 
                                           & mask[0x00000027U]);
                __Vtemp_16[0x00000028U] = (lhs[0x00000028U] 
                                           & mask[0x00000028U]);
                __Vtemp_16[0x00000029U] = (lhs[0x00000029U] 
                                           & mask[0x00000029U]);
                __Vtemp_16[0x0000002aU] = (lhs[0x0000002aU] 
                                           & mask[0x0000002aU]);
                __Vtemp_16[0x0000002bU] = (lhs[0x0000002bU] 
                                           & mask[0x0000002bU]);
                __Vtemp_16[0x0000002cU] = (lhs[0x0000002cU] 
                                           & mask[0x0000002cU]);
                __Vtemp_16[0x0000002dU] = (lhs[0x0000002dU] 
                                           & mask[0x0000002dU]);
                __Vtemp_16[0x0000002eU] = (lhs[0x0000002eU] 
                                           & mask[0x0000002eU]);
                __Vtemp_16[0x0000002fU] = (lhs[0x0000002fU] 
                                           & mask[0x0000002fU]);
                __Vtemp_16[0x00000030U] = (lhs[0x00000030U] 
                                           & mask[0x00000030U]);
                __Vtemp_16[0x00000031U] = (lhs[0x00000031U] 
                                           & mask[0x00000031U]);
                __Vtemp_16[0x00000032U] = (lhs[0x00000032U] 
                                           & mask[0x00000032U]);
                __Vtemp_16[0x00000033U] = (lhs[0x00000033U] 
                                           & mask[0x00000033U]);
                __Vtemp_16[0x00000034U] = (lhs[0x00000034U] 
                                           & mask[0x00000034U]);
                __Vtemp_16[0x00000035U] = (lhs[0x00000035U] 
                                           & mask[0x00000035U]);
                __Vtemp_16[0x00000036U] = (lhs[0x00000036U] 
                                           & mask[0x00000036U]);
                __Vtemp_16[0x00000037U] = (lhs[0x00000037U] 
                                           & mask[0x00000037U]);
                __Vtemp_16[0x00000038U] = (lhs[0x00000038U] 
                                           & mask[0x00000038U]);
                __Vtemp_16[0x00000039U] = (lhs[0x00000039U] 
                                           & mask[0x00000039U]);
                __Vtemp_16[0x0000003aU] = (lhs[0x0000003aU] 
                                           & mask[0x0000003aU]);
                __Vtemp_16[0x0000003bU] = (lhs[0x0000003bU] 
                                           & mask[0x0000003bU]);
                __Vtemp_16[0x0000003cU] = (lhs[0x0000003cU] 
                                           & mask[0x0000003cU]);
                __Vtemp_16[0x0000003dU] = (lhs[0x0000003dU] 
                                           & mask[0x0000003dU]);
                __Vtemp_16[0x0000003eU] = (lhs[0x0000003eU] 
                                           & mask[0x0000003eU]);
                __Vtemp_16[0x0000003fU] = (lhs[0x0000003fU] 
                                           & mask[0x0000003fU]);
                __Vtemp_16[0x00000040U] = (lhs[0x00000040U] 
                                           & mask[0x00000040U]);
                __Vtemp_16[0x00000041U] = (lhs[0x00000041U] 
                                           & mask[0x00000041U]);
                __Vtemp_16[0x00000042U] = (lhs[0x00000042U] 
                                           & mask[0x00000042U]);
                __Vtemp_16[0x00000043U] = (lhs[0x00000043U] 
                                           & mask[0x00000043U]);
                __Vtemp_16[0x00000044U] = (lhs[0x00000044U] 
                                           & mask[0x00000044U]);
                __Vtemp_16[0x00000045U] = (lhs[0x00000045U] 
                                           & mask[0x00000045U]);
                __Vtemp_16[0x00000046U] = (lhs[0x00000046U] 
                                           & mask[0x00000046U]);
                __Vtemp_16[0x00000047U] = (lhs[0x00000047U] 
                                           & mask[0x00000047U]);
                __Vtemp_16[0x00000048U] = (lhs[0x00000048U] 
                                           & mask[0x00000048U]);
                __Vtemp_16[0x00000049U] = (lhs[0x00000049U] 
                                           & mask[0x00000049U]);
                __Vtemp_16[0x0000004aU] = (lhs[0x0000004aU] 
                                           & mask[0x0000004aU]);
                __Vtemp_16[0x0000004bU] = (lhs[0x0000004bU] 
                                           & mask[0x0000004bU]);
                __Vtemp_16[0x0000004cU] = (lhs[0x0000004cU] 
                                           & mask[0x0000004cU]);
                __Vtemp_16[0x0000004dU] = (lhs[0x0000004dU] 
                                           & mask[0x0000004dU]);
                __Vtemp_16[0x0000004eU] = (lhs[0x0000004eU] 
                                           & mask[0x0000004eU]);
                __Vtemp_16[0x0000004fU] = (lhs[0x0000004fU] 
                                           & mask[0x0000004fU]);
                __Vtemp_16[0x00000050U] = (lhs[0x00000050U] 
                                           & mask[0x00000050U]);
                __Vtemp_16[0x00000051U] = (lhs[0x00000051U] 
                                           & mask[0x00000051U]);
                __Vtemp_16[0x00000052U] = (lhs[0x00000052U] 
                                           & mask[0x00000052U]);
                __Vtemp_16[0x00000053U] = (lhs[0x00000053U] 
                                           & mask[0x00000053U]);
                __Vtemp_16[0x00000054U] = (lhs[0x00000054U] 
                                           & mask[0x00000054U]);
                __Vtemp_16[0x00000055U] = (lhs[0x00000055U] 
                                           & mask[0x00000055U]);
                __Vtemp_16[0x00000056U] = (lhs[0x00000056U] 
                                           & mask[0x00000056U]);
                __Vtemp_16[0x00000057U] = (lhs[0x00000057U] 
                                           & mask[0x00000057U]);
                __Vtemp_16[0x00000058U] = (lhs[0x00000058U] 
                                           & mask[0x00000058U]);
                __Vtemp_16[0x00000059U] = (lhs[0x00000059U] 
                                           & mask[0x00000059U]);
                __Vtemp_16[0x0000005aU] = (lhs[0x0000005aU] 
                                           & mask[0x0000005aU]);
                __Vtemp_16[0x0000005bU] = (lhs[0x0000005bU] 
                                           & mask[0x0000005bU]);
                __Vtemp_16[0x0000005cU] = (lhs[0x0000005cU] 
                                           & mask[0x0000005cU]);
                __Vtemp_16[0x0000005dU] = (lhs[0x0000005dU] 
                                           & mask[0x0000005dU]);
                __Vtemp_16[0x0000005eU] = (lhs[0x0000005eU] 
                                           & mask[0x0000005eU]);
                __Vtemp_16[0x0000005fU] = (lhs[0x0000005fU] 
                                           & mask[0x0000005fU]);
                __Vtemp_16[0x00000060U] = (lhs[0x00000060U] 
                                           & mask[0x00000060U]);
                __Vtemp_16[0x00000061U] = (lhs[0x00000061U] 
                                           & mask[0x00000061U]);
                __Vtemp_16[0x00000062U] = (lhs[0x00000062U] 
                                           & mask[0x00000062U]);
                __Vtemp_16[0x00000063U] = (lhs[0x00000063U] 
                                           & mask[0x00000063U]);
                __Vtemp_16[0x00000064U] = (lhs[0x00000064U] 
                                           & mask[0x00000064U]);
                __Vtemp_16[0x00000065U] = (lhs[0x00000065U] 
                                           & mask[0x00000065U]);
                __Vtemp_16[0x00000066U] = (lhs[0x00000066U] 
                                           & mask[0x00000066U]);
                __Vtemp_16[0x00000067U] = (lhs[0x00000067U] 
                                           & mask[0x00000067U]);
                __Vtemp_16[0x00000068U] = (lhs[0x00000068U] 
                                           & mask[0x00000068U]);
                __Vtemp_16[0x00000069U] = (lhs[0x00000069U] 
                                           & mask[0x00000069U]);
                __Vtemp_16[0x0000006aU] = (lhs[0x0000006aU] 
                                           & mask[0x0000006aU]);
                __Vtemp_16[0x0000006bU] = (lhs[0x0000006bU] 
                                           & mask[0x0000006bU]);
                __Vtemp_16[0x0000006cU] = (lhs[0x0000006cU] 
                                           & mask[0x0000006cU]);
                __Vtemp_16[0x0000006dU] = (lhs[0x0000006dU] 
                                           & mask[0x0000006dU]);
                __Vtemp_16[0x0000006eU] = (lhs[0x0000006eU] 
                                           & mask[0x0000006eU]);
                __Vtemp_16[0x0000006fU] = (lhs[0x0000006fU] 
                                           & mask[0x0000006fU]);
                __Vtemp_16[0x00000070U] = (lhs[0x00000070U] 
                                           & mask[0x00000070U]);
                __Vtemp_16[0x00000071U] = (lhs[0x00000071U] 
                                           & mask[0x00000071U]);
                __Vtemp_16[0x00000072U] = (lhs[0x00000072U] 
                                           & mask[0x00000072U]);
                __Vtemp_16[0x00000073U] = (lhs[0x00000073U] 
                                           & mask[0x00000073U]);
                __Vtemp_16[0x00000074U] = (lhs[0x00000074U] 
                                           & mask[0x00000074U]);
                __Vtemp_16[0x00000075U] = (lhs[0x00000075U] 
                                           & mask[0x00000075U]);
                __Vtemp_16[0x00000076U] = (lhs[0x00000076U] 
                                           & mask[0x00000076U]);
                __Vtemp_16[0x00000077U] = (lhs[0x00000077U] 
                                           & mask[0x00000077U]);
                __Vtemp_16[0x00000078U] = (lhs[0x00000078U] 
                                           & mask[0x00000078U]);
                __Vtemp_16[0x00000079U] = (lhs[0x00000079U] 
                                           & mask[0x00000079U]);
                __Vtemp_16[0x0000007aU] = (lhs[0x0000007aU] 
                                           & mask[0x0000007aU]);
                __Vtemp_16[0x0000007bU] = (lhs[0x0000007bU] 
                                           & mask[0x0000007bU]);
                __Vtemp_16[0x0000007cU] = (lhs[0x0000007cU] 
                                           & mask[0x0000007cU]);
                __Vtemp_16[0x0000007dU] = (lhs[0x0000007dU] 
                                           & mask[0x0000007dU]);
                __Vtemp_16[0x0000007eU] = (lhs[0x0000007eU] 
                                           & mask[0x0000007eU]);
                __Vtemp_16[0x0000007fU] = (lhs[0x0000007fU] 
                                           & mask[0x0000007fU]);
                __Vtemp_17[0U] = (rhs[0U] & mask[0U]);
                __Vtemp_17[1U] = (rhs[1U] & mask[1U]);
                __Vtemp_17[2U] = (rhs[2U] & mask[2U]);
                __Vtemp_17[3U] = (rhs[3U] & mask[3U]);
                __Vtemp_17[4U] = (rhs[4U] & mask[4U]);
                __Vtemp_17[5U] = (rhs[5U] & mask[5U]);
                __Vtemp_17[6U] = (rhs[6U] & mask[6U]);
                __Vtemp_17[7U] = (rhs[7U] & mask[7U]);
                __Vtemp_17[8U] = (rhs[8U] & mask[8U]);
                __Vtemp_17[9U] = (rhs[9U] & mask[9U]);
                __Vtemp_17[0x0000000aU] = (rhs[0x0000000aU] 
                                           & mask[0x0000000aU]);
                __Vtemp_17[0x0000000bU] = (rhs[0x0000000bU] 
                                           & mask[0x0000000bU]);
                __Vtemp_17[0x0000000cU] = (rhs[0x0000000cU] 
                                           & mask[0x0000000cU]);
                __Vtemp_17[0x0000000dU] = (rhs[0x0000000dU] 
                                           & mask[0x0000000dU]);
                __Vtemp_17[0x0000000eU] = (rhs[0x0000000eU] 
                                           & mask[0x0000000eU]);
                __Vtemp_17[0x0000000fU] = (rhs[0x0000000fU] 
                                           & mask[0x0000000fU]);
                __Vtemp_17[0x00000010U] = (rhs[0x00000010U] 
                                           & mask[0x00000010U]);
                __Vtemp_17[0x00000011U] = (rhs[0x00000011U] 
                                           & mask[0x00000011U]);
                __Vtemp_17[0x00000012U] = (rhs[0x00000012U] 
                                           & mask[0x00000012U]);
                __Vtemp_17[0x00000013U] = (rhs[0x00000013U] 
                                           & mask[0x00000013U]);
                __Vtemp_17[0x00000014U] = (rhs[0x00000014U] 
                                           & mask[0x00000014U]);
                __Vtemp_17[0x00000015U] = (rhs[0x00000015U] 
                                           & mask[0x00000015U]);
                __Vtemp_17[0x00000016U] = (rhs[0x00000016U] 
                                           & mask[0x00000016U]);
                __Vtemp_17[0x00000017U] = (rhs[0x00000017U] 
                                           & mask[0x00000017U]);
                __Vtemp_17[0x00000018U] = (rhs[0x00000018U] 
                                           & mask[0x00000018U]);
                __Vtemp_17[0x00000019U] = (rhs[0x00000019U] 
                                           & mask[0x00000019U]);
                __Vtemp_17[0x0000001aU] = (rhs[0x0000001aU] 
                                           & mask[0x0000001aU]);
                __Vtemp_17[0x0000001bU] = (rhs[0x0000001bU] 
                                           & mask[0x0000001bU]);
                __Vtemp_17[0x0000001cU] = (rhs[0x0000001cU] 
                                           & mask[0x0000001cU]);
                __Vtemp_17[0x0000001dU] = (rhs[0x0000001dU] 
                                           & mask[0x0000001dU]);
                __Vtemp_17[0x0000001eU] = (rhs[0x0000001eU] 
                                           & mask[0x0000001eU]);
                __Vtemp_17[0x0000001fU] = (rhs[0x0000001fU] 
                                           & mask[0x0000001fU]);
                __Vtemp_17[0x00000020U] = (rhs[0x00000020U] 
                                           & mask[0x00000020U]);
                __Vtemp_17[0x00000021U] = (rhs[0x00000021U] 
                                           & mask[0x00000021U]);
                __Vtemp_17[0x00000022U] = (rhs[0x00000022U] 
                                           & mask[0x00000022U]);
                __Vtemp_17[0x00000023U] = (rhs[0x00000023U] 
                                           & mask[0x00000023U]);
                __Vtemp_17[0x00000024U] = (rhs[0x00000024U] 
                                           & mask[0x00000024U]);
                __Vtemp_17[0x00000025U] = (rhs[0x00000025U] 
                                           & mask[0x00000025U]);
                __Vtemp_17[0x00000026U] = (rhs[0x00000026U] 
                                           & mask[0x00000026U]);
                __Vtemp_17[0x00000027U] = (rhs[0x00000027U] 
                                           & mask[0x00000027U]);
                __Vtemp_17[0x00000028U] = (rhs[0x00000028U] 
                                           & mask[0x00000028U]);
                __Vtemp_17[0x00000029U] = (rhs[0x00000029U] 
                                           & mask[0x00000029U]);
                __Vtemp_17[0x0000002aU] = (rhs[0x0000002aU] 
                                           & mask[0x0000002aU]);
                __Vtemp_17[0x0000002bU] = (rhs[0x0000002bU] 
                                           & mask[0x0000002bU]);
                __Vtemp_17[0x0000002cU] = (rhs[0x0000002cU] 
                                           & mask[0x0000002cU]);
                __Vtemp_17[0x0000002dU] = (rhs[0x0000002dU] 
                                           & mask[0x0000002dU]);
                __Vtemp_17[0x0000002eU] = (rhs[0x0000002eU] 
                                           & mask[0x0000002eU]);
                __Vtemp_17[0x0000002fU] = (rhs[0x0000002fU] 
                                           & mask[0x0000002fU]);
                __Vtemp_17[0x00000030U] = (rhs[0x00000030U] 
                                           & mask[0x00000030U]);
                __Vtemp_17[0x00000031U] = (rhs[0x00000031U] 
                                           & mask[0x00000031U]);
                __Vtemp_17[0x00000032U] = (rhs[0x00000032U] 
                                           & mask[0x00000032U]);
                __Vtemp_17[0x00000033U] = (rhs[0x00000033U] 
                                           & mask[0x00000033U]);
                __Vtemp_17[0x00000034U] = (rhs[0x00000034U] 
                                           & mask[0x00000034U]);
                __Vtemp_17[0x00000035U] = (rhs[0x00000035U] 
                                           & mask[0x00000035U]);
                __Vtemp_17[0x00000036U] = (rhs[0x00000036U] 
                                           & mask[0x00000036U]);
                __Vtemp_17[0x00000037U] = (rhs[0x00000037U] 
                                           & mask[0x00000037U]);
                __Vtemp_17[0x00000038U] = (rhs[0x00000038U] 
                                           & mask[0x00000038U]);
                __Vtemp_17[0x00000039U] = (rhs[0x00000039U] 
                                           & mask[0x00000039U]);
                __Vtemp_17[0x0000003aU] = (rhs[0x0000003aU] 
                                           & mask[0x0000003aU]);
                __Vtemp_17[0x0000003bU] = (rhs[0x0000003bU] 
                                           & mask[0x0000003bU]);
                __Vtemp_17[0x0000003cU] = (rhs[0x0000003cU] 
                                           & mask[0x0000003cU]);
                __Vtemp_17[0x0000003dU] = (rhs[0x0000003dU] 
                                           & mask[0x0000003dU]);
                __Vtemp_17[0x0000003eU] = (rhs[0x0000003eU] 
                                           & mask[0x0000003eU]);
                __Vtemp_17[0x0000003fU] = (rhs[0x0000003fU] 
                                           & mask[0x0000003fU]);
                __Vtemp_17[0x00000040U] = (rhs[0x00000040U] 
                                           & mask[0x00000040U]);
                __Vtemp_17[0x00000041U] = (rhs[0x00000041U] 
                                           & mask[0x00000041U]);
                __Vtemp_17[0x00000042U] = (rhs[0x00000042U] 
                                           & mask[0x00000042U]);
                __Vtemp_17[0x00000043U] = (rhs[0x00000043U] 
                                           & mask[0x00000043U]);
                __Vtemp_17[0x00000044U] = (rhs[0x00000044U] 
                                           & mask[0x00000044U]);
                __Vtemp_17[0x00000045U] = (rhs[0x00000045U] 
                                           & mask[0x00000045U]);
                __Vtemp_17[0x00000046U] = (rhs[0x00000046U] 
                                           & mask[0x00000046U]);
                __Vtemp_17[0x00000047U] = (rhs[0x00000047U] 
                                           & mask[0x00000047U]);
                __Vtemp_17[0x00000048U] = (rhs[0x00000048U] 
                                           & mask[0x00000048U]);
                __Vtemp_17[0x00000049U] = (rhs[0x00000049U] 
                                           & mask[0x00000049U]);
                __Vtemp_17[0x0000004aU] = (rhs[0x0000004aU] 
                                           & mask[0x0000004aU]);
                __Vtemp_17[0x0000004bU] = (rhs[0x0000004bU] 
                                           & mask[0x0000004bU]);
                __Vtemp_17[0x0000004cU] = (rhs[0x0000004cU] 
                                           & mask[0x0000004cU]);
                __Vtemp_17[0x0000004dU] = (rhs[0x0000004dU] 
                                           & mask[0x0000004dU]);
                __Vtemp_17[0x0000004eU] = (rhs[0x0000004eU] 
                                           & mask[0x0000004eU]);
                __Vtemp_17[0x0000004fU] = (rhs[0x0000004fU] 
                                           & mask[0x0000004fU]);
                __Vtemp_17[0x00000050U] = (rhs[0x00000050U] 
                                           & mask[0x00000050U]);
                __Vtemp_17[0x00000051U] = (rhs[0x00000051U] 
                                           & mask[0x00000051U]);
                __Vtemp_17[0x00000052U] = (rhs[0x00000052U] 
                                           & mask[0x00000052U]);
                __Vtemp_17[0x00000053U] = (rhs[0x00000053U] 
                                           & mask[0x00000053U]);
                __Vtemp_17[0x00000054U] = (rhs[0x00000054U] 
                                           & mask[0x00000054U]);
                __Vtemp_17[0x00000055U] = (rhs[0x00000055U] 
                                           & mask[0x00000055U]);
                __Vtemp_17[0x00000056U] = (rhs[0x00000056U] 
                                           & mask[0x00000056U]);
                __Vtemp_17[0x00000057U] = (rhs[0x00000057U] 
                                           & mask[0x00000057U]);
                __Vtemp_17[0x00000058U] = (rhs[0x00000058U] 
                                           & mask[0x00000058U]);
                __Vtemp_17[0x00000059U] = (rhs[0x00000059U] 
                                           & mask[0x00000059U]);
                __Vtemp_17[0x0000005aU] = (rhs[0x0000005aU] 
                                           & mask[0x0000005aU]);
                __Vtemp_17[0x0000005bU] = (rhs[0x0000005bU] 
                                           & mask[0x0000005bU]);
                __Vtemp_17[0x0000005cU] = (rhs[0x0000005cU] 
                                           & mask[0x0000005cU]);
                __Vtemp_17[0x0000005dU] = (rhs[0x0000005dU] 
                                           & mask[0x0000005dU]);
                __Vtemp_17[0x0000005eU] = (rhs[0x0000005eU] 
                                           & mask[0x0000005eU]);
                __Vtemp_17[0x0000005fU] = (rhs[0x0000005fU] 
                                           & mask[0x0000005fU]);
                __Vtemp_17[0x00000060U] = (rhs[0x00000060U] 
                                           & mask[0x00000060U]);
                __Vtemp_17[0x00000061U] = (rhs[0x00000061U] 
                                           & mask[0x00000061U]);
                __Vtemp_17[0x00000062U] = (rhs[0x00000062U] 
                                           & mask[0x00000062U]);
                __Vtemp_17[0x00000063U] = (rhs[0x00000063U] 
                                           & mask[0x00000063U]);
                __Vtemp_17[0x00000064U] = (rhs[0x00000064U] 
                                           & mask[0x00000064U]);
                __Vtemp_17[0x00000065U] = (rhs[0x00000065U] 
                                           & mask[0x00000065U]);
                __Vtemp_17[0x00000066U] = (rhs[0x00000066U] 
                                           & mask[0x00000066U]);
                __Vtemp_17[0x00000067U] = (rhs[0x00000067U] 
                                           & mask[0x00000067U]);
                __Vtemp_17[0x00000068U] = (rhs[0x00000068U] 
                                           & mask[0x00000068U]);
                __Vtemp_17[0x00000069U] = (rhs[0x00000069U] 
                                           & mask[0x00000069U]);
                __Vtemp_17[0x0000006aU] = (rhs[0x0000006aU] 
                                           & mask[0x0000006aU]);
                __Vtemp_17[0x0000006bU] = (rhs[0x0000006bU] 
                                           & mask[0x0000006bU]);
                __Vtemp_17[0x0000006cU] = (rhs[0x0000006cU] 
                                           & mask[0x0000006cU]);
                __Vtemp_17[0x0000006dU] = (rhs[0x0000006dU] 
                                           & mask[0x0000006dU]);
                __Vtemp_17[0x0000006eU] = (rhs[0x0000006eU] 
                                           & mask[0x0000006eU]);
                __Vtemp_17[0x0000006fU] = (rhs[0x0000006fU] 
                                           & mask[0x0000006fU]);
                __Vtemp_17[0x00000070U] = (rhs[0x00000070U] 
                                           & mask[0x00000070U]);
                __Vtemp_17[0x00000071U] = (rhs[0x00000071U] 
                                           & mask[0x00000071U]);
                __Vtemp_17[0x00000072U] = (rhs[0x00000072U] 
                                           & mask[0x00000072U]);
                __Vtemp_17[0x00000073U] = (rhs[0x00000073U] 
                                           & mask[0x00000073U]);
                __Vtemp_17[0x00000074U] = (rhs[0x00000074U] 
                                           & mask[0x00000074U]);
                __Vtemp_17[0x00000075U] = (rhs[0x00000075U] 
                                           & mask[0x00000075U]);
                __Vtemp_17[0x00000076U] = (rhs[0x00000076U] 
                                           & mask[0x00000076U]);
                __Vtemp_17[0x00000077U] = (rhs[0x00000077U] 
                                           & mask[0x00000077U]);
                __Vtemp_17[0x00000078U] = (rhs[0x00000078U] 
                                           & mask[0x00000078U]);
                __Vtemp_17[0x00000079U] = (rhs[0x00000079U] 
                                           & mask[0x00000079U]);
                __Vtemp_17[0x0000007aU] = (rhs[0x0000007aU] 
                                           & mask[0x0000007aU]);
                __Vtemp_17[0x0000007bU] = (rhs[0x0000007bU] 
                                           & mask[0x0000007bU]);
                __Vtemp_17[0x0000007cU] = (rhs[0x0000007cU] 
                                           & mask[0x0000007cU]);
                __Vtemp_17[0x0000007dU] = (rhs[0x0000007dU] 
                                           & mask[0x0000007dU]);
                __Vtemp_17[0x0000007eU] = (rhs[0x0000007eU] 
                                           & mask[0x0000007eU]);
                __Vtemp_17[0x0000007fU] = (rhs[0x0000007fU] 
                                           & mask[0x0000007fU]);
                VL_SFORMAT_NX(64,msg,"%@: lhs = 'h%0x : rhs = 'h%0x",0,
                              -1,&(name),4096,__Vtemp_16.data(),
                              4096,__Vtemp_17.data());
            }
            this->__VnoInFunc_print_msg(vlProcess, vlSymsp, msg);
            compare_field__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        compare_field__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}
