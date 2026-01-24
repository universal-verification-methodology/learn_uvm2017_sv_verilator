// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrecorders_top.h for the primary calling header

#include "Vrecorders_top__pch.h"

void Vrecorders_top___024unit__03a__03aRecorderTransaction__Vclpkg::__VnoInFunc_get_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_registry__Tz1_TBz2> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vrecorders_top___024unit__03a__03aRecorderTransaction__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_registry__Tz1_TBz2> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz1_TBz2__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vrecorders_top___024unit__03a__03aRecorderTransaction__Vclpkg::__VnoInFunc_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vrecorders_top___024unit__03a__03aRecorderTransaction__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "RecorderTransaction"s;
}

void Vrecorders_top___024unit__03a__03aRecorderTransaction::__VnoInFunc_get_object_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrecorders_top___024unit__03a__03aRecorderTransaction::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_registry__Tz1_TBz2> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz1_TBz2__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vrecorders_top___024unit__03a__03aRecorderTransaction::__VnoInFunc_create(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrecorders_top___024unit__03a__03aRecorderTransaction::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vrecorders_top___024unit__03a__03aRecorderTransaction> tmp;
    tmp = ((""s == name) ? VL_NEW(Vrecorders_top___024unit__03a__03aRecorderTransaction, vlProcess, vlSymsp, "RecorderTransaction"s)
            : VL_NEW(Vrecorders_top___024unit__03a__03aRecorderTransaction, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vrecorders_top___024unit__03a__03aRecorderTransaction::__VnoInFunc_get_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrecorders_top___024unit__03a__03aRecorderTransaction::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "RecorderTransaction"s;
}

Vrecorders_top___024unit__03a__03aRecorderTransaction::Vrecorders_top___024unit__03a__03aRecorderTransaction(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name)
    : Vrecorders_top_uvm_pkg__03a__03auvm_sequence_item(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrecorders_top___024unit__03a__03aRecorderTransaction::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    this->__PVT__timestamp = 0U;
}

void Vrecorders_top___024unit__03a__03aRecorderTransaction::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrecorders_top___024unit__03a__03aRecorderTransaction::__VnoInFunc_convert2string\n"); );
    // Body
    convert2string__Vfuncrtn = VL_SFORMATF_N_NX("data=0x%02x, addr=0x%04x, ts=%0d",0,
                                                8,this->__PVT__data,
                                                16,
                                                (IData)(this->__PVT__address),
                                                32,
                                                this->__PVT__timestamp) ;
}

void Vrecorders_top___024unit__03a__03aRecorderTransaction::__VnoInFunc_do_record(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_recorder> recorder) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrecorders_top___024unit__03a__03aRecorderTransaction::__VnoInFunc_do_record\n"); );
    // Locals
    VlWide<128>/*4095:0*/ __Vtemp_1;
    VlWide<128>/*4095:0*/ __Vtemp_2;
    VlWide<128>/*4095:0*/ __Vtemp_3;
    // Body
    Vrecorders_top_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_record(vlProcess, vlSymsp, recorder);
    __Vtemp_1[0U] = this->__PVT__data;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 1U;
    while ((__Vilp1 <= 0x0000007fU)) {
        __Vtemp_1[__Vilp1] = 0U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    VL_NULL_CHECK(recorder, "recorders.sv", 92)->__VnoInFunc_record_field(vlProcess, vlSymsp, "data"s, __Vtemp_1, 8U, 0x07000000U);
    __Vtemp_2[0U] = this->__PVT__address;
    IData/*31:0*/ __Vilp2;
    __Vilp2 = 1U;
    while ((__Vilp2 <= 0x0000007fU)) {
        __Vtemp_2[__Vilp2] = 0U;
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    VL_NULL_CHECK(recorder, "recorders.sv", 93)->__VnoInFunc_record_field(vlProcess, vlSymsp, "address"s, __Vtemp_2, 0x00000010U, 0x07000000U);
    VL_EXTENDS_WI(4096,32, __Vtemp_3, this->__PVT__timestamp);
    VL_NULL_CHECK(recorder, "recorders.sv", 94)->__VnoInFunc_record_field(vlProcess, vlSymsp, "timestamp"s, __Vtemp_3, 0x00000020U, 0x02000000U);
}

void Vrecorders_top___024unit__03a__03aRecorderTransaction::__VnoInFunc_randomize(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrecorders_top___024unit__03a__03aRecorderTransaction::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__9__Vfuncout;
    __Vfunc___VBasicRand__9__Vfuncout = 0;
    // Body
    Vrecorders_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vrecorders_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__9__Vfuncout);
            }(), __Vfunc___VBasicRand__9__Vfuncout));
}

void Vrecorders_top___024unit__03a__03aRecorderTransaction::__VnoInFunc___Vsetup_constraints(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrecorders_top___024unit__03a__03aRecorderTransaction::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vrecorders_top___024unit__03a__03aRecorderTransaction::__VnoInFunc___VBasicRand(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrecorders_top___024unit__03a__03aRecorderTransaction::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
    this->__PVT__data = (0x000000ffU & VL_RANDOM_RNG_I(__Vm_rng));
    this->__PVT__address = (0x0000ffffU & VL_RANDOM_RNG_I(__Vm_rng));
}

void Vrecorders_top___024unit__03a__03aRecorderTransaction::_ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrecorders_top___024unit__03a__03aRecorderTransaction::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__data = VL_SCOPED_RAND_RESET_I(8, 1358684570737143334ULL, 10363016170300574568ull);
    __PVT__address = VL_SCOPED_RAND_RESET_I(16, 1358684570737143334ULL, 12021632533271657083ull);
    __PVT__timestamp = 0;
}

Vrecorders_top___024unit__03a__03aRecorderTransaction::~Vrecorders_top___024unit__03a__03aRecorderTransaction() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrecorders_top___024unit__03a__03aRecorderTransaction::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top___024unit__03a__03aRecorderTransaction>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrecorders_top___024unit__03a__03aRecorderTransaction::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vrecorders_top___024unit__03a__03aRecorderTransaction::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrecorders_top___024unit__03a__03aRecorderTransaction::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vrecorders_top___024unit__03a__03aRecorderTransaction::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrecorders_top___024unit__03a__03aRecorderTransaction::to_string_middle\n"); );
    // Body
    std::string out;
    out += "data:" + VL_TO_STRING(__PVT__data);
    out += ", address:" + VL_TO_STRING(__PVT__address);
    out += ", timestamp:" + VL_TO_STRING(__PVT__timestamp);
    out += ", "+ Vrecorders_top_uvm_pkg__03a__03auvm_sequence_item::to_string_middle();
    return (out);
}
