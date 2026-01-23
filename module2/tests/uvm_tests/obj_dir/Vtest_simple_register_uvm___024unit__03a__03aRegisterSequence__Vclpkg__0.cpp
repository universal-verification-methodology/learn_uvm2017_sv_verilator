// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_simple_register_uvm.h for the primary calling header

#include "Vtest_simple_register_uvm__pch.h"

void Vtest_simple_register_uvm___024unit__03a__03aRegisterSequence__Vclpkg::__VnoInFunc_get_type(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_registry__pi61> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm___024unit__03a__03aRegisterSequence__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_registry__pi61> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi61__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterSequence__Vclpkg::__VnoInFunc_type_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm___024unit__03a__03aRegisterSequence__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "RegisterSequence"s;
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterSequence::__VnoInFunc_get_object_type(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_simple_register_uvm___024unit__03a__03aRegisterSequence::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_registry__pi61> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi61__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterSequence::__VnoInFunc_create(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_simple_register_uvm___024unit__03a__03aRegisterSequence::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtest_simple_register_uvm___024unit__03a__03aRegisterSequence> tmp;
    tmp = ((""s == name) ? VL_NEW(Vtest_simple_register_uvm___024unit__03a__03aRegisterSequence, vlProcess, vlSymsp, "RegisterSequence"s)
            : VL_NEW(Vtest_simple_register_uvm___024unit__03a__03aRegisterSequence, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterSequence::__VnoInFunc_get_type_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_simple_register_uvm___024unit__03a__03aRegisterSequence::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "RegisterSequence"s;
}

Vtest_simple_register_uvm___024unit__03a__03aRegisterSequence::Vtest_simple_register_uvm___024unit__03a__03aRegisterSequence(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name)
    : Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence__Tz126_TBz126(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_simple_register_uvm___024unit__03a__03aRegisterSequence::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

VlCoroutine Vtest_simple_register_uvm___024unit__03a__03aRegisterSequence::__VnoInFunc_body(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_simple_register_uvm___024unit__03a__03aRegisterSequence::__VnoInFunc_body\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm___024unit__03a__03aRegisterTransaction> __Vfunc_create__4__Vfuncout;
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0;
    VlClassRef<Vtest_simple_register_uvm___024unit__03a__03aRegisterTransaction> txn;
    VlQueue<CData/*7:0*/> test_data;
    test_data.atDefault() = 0;
    test_data = VlQueue<CData/*7:0*/>::consVC(0x22U, 
                                              VlQueue<CData/*7:0*/>::consVC(0x11U, 
                                                                            VlQueue<CData/*7:0*/>::consVC(0xffU, 
                                                                                VlQueue<CData/*7:0*/>::consVC(0xaaU, 
                                                                                VlQueue<CData/*7:0*/>::consVC(0x55U, 
                                                                                VlQueue<CData/*7:0*/>::consVC(0U, 
                                                                                VlQueue<CData/*7:0*/>{}))))));
    unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk1__DOT__i, test_data.size())) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi60__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "txn"s, VlNull{}, ""s, __Vfunc_create__4__Vfuncout);
        txn = __Vfunc_create__4__Vfuncout;
        VL_NULL_CHECK(txn, "test_simple_register_uvm.sv", 54)->__PVT__data 
            = test_data.at(unnamedblk1__DOT__i);
        VL_NULL_CHECK(txn, "test_simple_register_uvm.sv", 55)->__PVT__expected_q 
            = test_data.at(unnamedblk1__DOT__i);
        co_await this->__VnoInFunc_start_item(vlProcess, vlSymsp, txn, 0xffffffffU, VlNull{});
        co_await this->__VnoInFunc_finish_item(vlProcess, vlSymsp, txn, 0xffffffffU);
        unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
    }
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterSequence::__VnoInFunc_randomize(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_simple_register_uvm___024unit__03a__03aRegisterSequence::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__8__Vfuncout;
    __Vfunc___Vbasic_randomize__8__Vfuncout = 0;
    // Body
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__8__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__8__Vfuncout));
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterSequence::__VnoInFunc___Vbasic_randomize(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_simple_register_uvm___024unit__03a__03aRegisterSequence::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterSequence::_ctor_var_reset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_simple_register_uvm___024unit__03a__03aRegisterSequence::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vtest_simple_register_uvm___024unit__03a__03aRegisterSequence>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_simple_register_uvm___024unit__03a__03aRegisterSequence::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtest_simple_register_uvm___024unit__03a__03aRegisterSequence::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_simple_register_uvm___024unit__03a__03aRegisterSequence::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtest_simple_register_uvm___024unit__03a__03aRegisterSequence::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_simple_register_uvm___024unit__03a__03aRegisterSequence::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence__Tz126_TBz126::to_string_middle();
    return (out);
}
