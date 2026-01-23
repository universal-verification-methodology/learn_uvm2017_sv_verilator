// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varchitecture.h for the primary calling header

#include "Varchitecture__pch.h"

void Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1__Vclpkg::__VnoInFunc_get_type(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_abstract_component_registry__pi89> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_abstract_component_registry__pi89> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_abstract_component_registry__pi89__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1::__VnoInFunc_get_object_type(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_abstract_component_registry__pi89> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_abstract_component_registry__pi89__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1::Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_component> parent)
    : Varchitecture_uvm_pkg__03a__03auvm_component(vlProcess, vlSymsp, name, parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    this->__PVT__put_export = VL_NEW(Varchitecture_uvm_pkg__03a__03auvm_put_imp__Tz1_TBz174, vlProcess, vlSymsp, "put_export"s, 
                                     VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1>{this});
    this->__PVT__blocking_put_export = this->__PVT__put_export;
    this->__PVT__nonblocking_put_export = this->__PVT__put_export;
    this->__PVT__get_peek_export = VL_NEW(Varchitecture_uvm_pkg__03a__03auvm_get_peek_imp__Tz1_TBz174, vlProcess, vlSymsp, "get_peek_export"s, 
                                          VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1>{this});
    this->__PVT__blocking_get_peek_export = this->__PVT__get_peek_export;
    this->__PVT__nonblocking_get_peek_export = this->__PVT__get_peek_export;
    this->__PVT__blocking_get_export = this->__PVT__get_peek_export;
    this->__PVT__nonblocking_get_export = this->__PVT__get_peek_export;
    this->__PVT__get_export = this->__PVT__get_peek_export;
    this->__PVT__blocking_peek_export = this->__PVT__get_peek_export;
    this->__PVT__nonblocking_peek_export = this->__PVT__get_peek_export;
    this->__PVT__peek_export = this->__PVT__get_peek_export;
    this->__PVT__put_ap = VL_NEW(Varchitecture_uvm_pkg__03a__03auvm_analysis_port__Tz1, vlProcess, vlSymsp, "put_ap"s, 
                                 VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1>{this});
    this->__PVT__get_ap = VL_NEW(Varchitecture_uvm_pkg__03a__03auvm_analysis_port__Tz1, vlProcess, vlSymsp, "get_ap"s, 
                                 VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1>{this});
}

void Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1::__VnoInFunc_use_automatic_config(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ &use_automatic_config__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1::__VnoInFunc_use_automatic_config\n"); );
    // Body
    use_automatic_config__Vfuncrtn = 0U;
}

void Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1::__VnoInFunc_flush(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1::__VnoInFunc_flush\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "flush"s, "fifo channel function not implemented"s, 0U, ""s, 0U, ""s, 0U);
}

void Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1::__VnoInFunc_size(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1::__VnoInFunc_size\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "size"s, "fifo channel function not implemented"s, 0U, ""s, 0U, ""s, 0U);
    size__Vfuncrtn = 0U;
}

VlCoroutine Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1::__VnoInFunc_put(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture___024unit__03a__03aArchTxn> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1::__VnoInFunc_put\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "put"s, "fifo channel task not implemented"s, 0U, ""s, 0U, ""s, 0U);
    co_return;}

VlCoroutine Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1::__VnoInFunc_get(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture___024unit__03a__03aArchTxn> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1::__VnoInFunc_get\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "get"s, "fifo channel task not implemented"s, 0U, ""s, 0U, ""s, 0U);
    co_return;}

VlCoroutine Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1::__VnoInFunc_peek(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture___024unit__03a__03aArchTxn> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1::__VnoInFunc_peek\n"); );
    // Body
    VL_KEEP_THIS;
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "peek"s, "fifo channel task not implemented"s, 0U, ""s, 0U, ""s, 0U);
    co_return;}

void Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1::__VnoInFunc_try_put(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture___024unit__03a__03aArchTxn> t, CData/*0:0*/ &try_put__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1::__VnoInFunc_try_put\n"); );
    // Body
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "try_put"s, "fifo channel function not implemented"s, 0U, ""s, 0U, ""s, 0U);
    try_put__Vfuncrtn = 0U;
}

void Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1::__VnoInFunc_try_get(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture___024unit__03a__03aArchTxn> &t, CData/*0:0*/ &try_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1::__VnoInFunc_try_get\n"); );
    // Body
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "try_get"s, "fifo channel function not implemented"s, 0U, ""s, 0U, ""s, 0U);
    try_get__Vfuncrtn = 0U;
}

void Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1::__VnoInFunc_try_peek(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture___024unit__03a__03aArchTxn> &t, CData/*0:0*/ &try_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1::__VnoInFunc_try_peek\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "try_peek"s, "fifo channel function not implemented"s, 0U, ""s, 0U, ""s, 0U);
    try_peek__Vfuncrtn = 0U;
}

void Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1::__VnoInFunc_can_put(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ &can_put__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1::__VnoInFunc_can_put\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "can_put"s, "fifo channel function not implemented"s, 0U, ""s, 0U, ""s, 0U);
    can_put__Vfuncrtn = 0U;
}

void Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1::__VnoInFunc_can_get(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ &can_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1::__VnoInFunc_can_get\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "can_get"s, "fifo channel function not implemented"s, 0U, ""s, 0U, ""s, 0U);
    can_get__Vfuncrtn = 0U;
}

void Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1::__VnoInFunc_can_peek(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ &can_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1::__VnoInFunc_can_peek\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "can_peek"s, "fifo channel function not implemented"s, 0U, ""s, 0U, ""s, 0U);
    can_peek__Vfuncrtn = 0U;
}

void Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1::__VnoInFunc_ok_to_put(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tlm_event> &ok_to_put__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1::__VnoInFunc_ok_to_put\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "ok_to_put"s, "fifo channel function not implemented"s, 0U, ""s, 0U, ""s, 0U);
    ok_to_put__Vfuncrtn = VlNull{};
}

void Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1::__VnoInFunc_ok_to_get(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tlm_event> &ok_to_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1::__VnoInFunc_ok_to_get\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "ok_to_get"s, "fifo channel function not implemented"s, 0U, ""s, 0U, ""s, 0U);
    ok_to_get__Vfuncrtn = VlNull{};
}

void Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1::__VnoInFunc_ok_to_peek(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tlm_event> &ok_to_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1::__VnoInFunc_ok_to_peek\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "ok_to_peek"s, "fifo channel function not implemented"s, 0U, ""s, 0U, ""s, 0U);
    ok_to_peek__Vfuncrtn = VlNull{};
}

void Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1::__VnoInFunc_is_empty(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ &is_empty__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1::__VnoInFunc_is_empty\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "is_empty"s, "fifo channel function not implemented"s, 0U, ""s, 0U, ""s, 0U);
    is_empty__Vfuncrtn = 0U;
}

void Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1::__VnoInFunc_is_full(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ &is_full__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1::__VnoInFunc_is_full\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "is_full"s, "fifo channel function not implemented"s, 0U, ""s, 0U, ""s, 0U);
    is_full__Vfuncrtn = 0U;
}

void Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1::__VnoInFunc_used(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &used__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1::__VnoInFunc_used\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "used"s, "fifo channel function not implemented"s, 0U, ""s, 0U, ""s, 0U);
    used__Vfuncrtn = 0U;
}

void Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1::__VnoInFunc_randomize(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__24__Vfuncout;
    __Vfunc___VBasicRand__24__Vfuncout = 0;
    // Body
    Varchitecture_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Varchitecture_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__24__Vfuncout);
            }(), __Vfunc___VBasicRand__24__Vfuncout));
}

void Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1::__VnoInFunc___Vsetup_constraints(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1::__VnoInFunc___Vsetup_constraints\n"); );
}

void Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1::__VnoInFunc___VBasicRand(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1::_ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1::~Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz1::to_string_middle\n"); );
    // Body
    std::string out;
    out += "put_export:" + VL_TO_STRING(__PVT__put_export);
    out += ", get_peek_export:" + VL_TO_STRING(__PVT__get_peek_export);
    out += ", put_ap:" + VL_TO_STRING(__PVT__put_ap);
    out += ", get_ap:" + VL_TO_STRING(__PVT__get_ap);
    out += ", blocking_put_export:" + VL_TO_STRING(__PVT__blocking_put_export);
    out += ", nonblocking_put_export:" + VL_TO_STRING(__PVT__nonblocking_put_export);
    out += ", blocking_get_export:" + VL_TO_STRING(__PVT__blocking_get_export);
    out += ", nonblocking_get_export:" + VL_TO_STRING(__PVT__nonblocking_get_export);
    out += ", get_export:" + VL_TO_STRING(__PVT__get_export);
    out += ", blocking_peek_export:" + VL_TO_STRING(__PVT__blocking_peek_export);
    out += ", nonblocking_peek_export:" + VL_TO_STRING(__PVT__nonblocking_peek_export);
    out += ", peek_export:" + VL_TO_STRING(__PVT__peek_export);
    out += ", blocking_get_peek_export:" + VL_TO_STRING(__PVT__blocking_get_peek_export);
    out += ", nonblocking_get_peek_export:" + VL_TO_STRING(__PVT__nonblocking_get_peek_export);
    out += ", "+ Varchitecture_uvm_pkg__03a__03auvm_component::to_string_middle();
    return (out);
}
