// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"

void Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126__Vclpkg::__VnoInFunc_get_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_abstract_component_registry__pi81> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_abstract_component_registry__pi81> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_abstract_component_registry__pi81__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126::__VnoInFunc_get_object_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_abstract_component_registry__pi81> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_abstract_component_registry__pi81__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126::Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> parent)
    : Vdma_uvm_pkg__03a__03auvm_component(vlProcess, vlSymsp, name, parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    this->__PVT__put_export = VL_NEW(Vdma_uvm_pkg__03a__03auvm_put_imp__Tz126_TBz158, vlProcess, vlSymsp, "put_export"s, 
                                     VlClassRef<Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126>{this});
    this->__PVT__blocking_put_export = this->__PVT__put_export;
    this->__PVT__nonblocking_put_export = this->__PVT__put_export;
    this->__PVT__get_peek_export = VL_NEW(Vdma_uvm_pkg__03a__03auvm_get_peek_imp__Tz126_TBz158, vlProcess, vlSymsp, "get_peek_export"s, 
                                          VlClassRef<Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126>{this});
    this->__PVT__blocking_get_peek_export = this->__PVT__get_peek_export;
    this->__PVT__nonblocking_get_peek_export = this->__PVT__get_peek_export;
    this->__PVT__blocking_get_export = this->__PVT__get_peek_export;
    this->__PVT__nonblocking_get_export = this->__PVT__get_peek_export;
    this->__PVT__get_export = this->__PVT__get_peek_export;
    this->__PVT__blocking_peek_export = this->__PVT__get_peek_export;
    this->__PVT__nonblocking_peek_export = this->__PVT__get_peek_export;
    this->__PVT__peek_export = this->__PVT__get_peek_export;
    this->__PVT__put_ap = VL_NEW(Vdma_uvm_pkg__03a__03auvm_analysis_port__Tz126, vlProcess, vlSymsp, "put_ap"s, 
                                 VlClassRef<Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126>{this});
    this->__PVT__get_ap = VL_NEW(Vdma_uvm_pkg__03a__03auvm_analysis_port__Tz126, vlProcess, vlSymsp, "get_ap"s, 
                                 VlClassRef<Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126>{this});
}

void Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126::__VnoInFunc_use_automatic_config(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &use_automatic_config__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126::__VnoInFunc_use_automatic_config\n"); );
    // Body
    use_automatic_config__Vfuncrtn = 0U;
}

void Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126::__VnoInFunc_flush(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126::__VnoInFunc_flush\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "flush"s, "fifo channel function not implemented"s, 0U, ""s, 0U, ""s, 0U);
}

void Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126::__VnoInFunc_size(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126::__VnoInFunc_size\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "size"s, "fifo channel function not implemented"s, 0U, ""s, 0U, ""s, 0U);
    size__Vfuncrtn = 0U;
}

VlCoroutine Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126::__VnoInFunc_put(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma___024unit__03a__03aDmaTxn> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126::__VnoInFunc_put\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "put"s, "fifo channel task not implemented"s, 0U, ""s, 0U, ""s, 0U);
    co_return;}

VlCoroutine Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126::__VnoInFunc_get(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma___024unit__03a__03aDmaTxn> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126::__VnoInFunc_get\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "get"s, "fifo channel task not implemented"s, 0U, ""s, 0U, ""s, 0U);
    co_return;}

VlCoroutine Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126::__VnoInFunc_peek(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma___024unit__03a__03aDmaTxn> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126::__VnoInFunc_peek\n"); );
    // Body
    VL_KEEP_THIS;
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "peek"s, "fifo channel task not implemented"s, 0U, ""s, 0U, ""s, 0U);
    co_return;}

void Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126::__VnoInFunc_try_put(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma___024unit__03a__03aDmaTxn> t, CData/*0:0*/ &try_put__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126::__VnoInFunc_try_put\n"); );
    // Body
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "try_put"s, "fifo channel function not implemented"s, 0U, ""s, 0U, ""s, 0U);
    try_put__Vfuncrtn = 0U;
}

void Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126::__VnoInFunc_try_get(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma___024unit__03a__03aDmaTxn> &t, CData/*0:0*/ &try_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126::__VnoInFunc_try_get\n"); );
    // Body
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "try_get"s, "fifo channel function not implemented"s, 0U, ""s, 0U, ""s, 0U);
    try_get__Vfuncrtn = 0U;
}

void Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126::__VnoInFunc_try_peek(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma___024unit__03a__03aDmaTxn> &t, CData/*0:0*/ &try_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126::__VnoInFunc_try_peek\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "try_peek"s, "fifo channel function not implemented"s, 0U, ""s, 0U, ""s, 0U);
    try_peek__Vfuncrtn = 0U;
}

void Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126::__VnoInFunc_can_put(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &can_put__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126::__VnoInFunc_can_put\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "can_put"s, "fifo channel function not implemented"s, 0U, ""s, 0U, ""s, 0U);
    can_put__Vfuncrtn = 0U;
}

void Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126::__VnoInFunc_can_get(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &can_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126::__VnoInFunc_can_get\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "can_get"s, "fifo channel function not implemented"s, 0U, ""s, 0U, ""s, 0U);
    can_get__Vfuncrtn = 0U;
}

void Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126::__VnoInFunc_can_peek(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &can_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126::__VnoInFunc_can_peek\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "can_peek"s, "fifo channel function not implemented"s, 0U, ""s, 0U, ""s, 0U);
    can_peek__Vfuncrtn = 0U;
}

void Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126::__VnoInFunc_ok_to_put(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_tlm_event> &ok_to_put__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126::__VnoInFunc_ok_to_put\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "ok_to_put"s, "fifo channel function not implemented"s, 0U, ""s, 0U, ""s, 0U);
    ok_to_put__Vfuncrtn = VlNull{};
}

void Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126::__VnoInFunc_ok_to_get(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_tlm_event> &ok_to_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126::__VnoInFunc_ok_to_get\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "ok_to_get"s, "fifo channel function not implemented"s, 0U, ""s, 0U, ""s, 0U);
    ok_to_get__Vfuncrtn = VlNull{};
}

void Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126::__VnoInFunc_ok_to_peek(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_tlm_event> &ok_to_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126::__VnoInFunc_ok_to_peek\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "ok_to_peek"s, "fifo channel function not implemented"s, 0U, ""s, 0U, ""s, 0U);
    ok_to_peek__Vfuncrtn = VlNull{};
}

void Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126::__VnoInFunc_is_empty(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &is_empty__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126::__VnoInFunc_is_empty\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "is_empty"s, "fifo channel function not implemented"s, 0U, ""s, 0U, ""s, 0U);
    is_empty__Vfuncrtn = 0U;
}

void Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126::__VnoInFunc_is_full(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &is_full__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126::__VnoInFunc_is_full\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "is_full"s, "fifo channel function not implemented"s, 0U, ""s, 0U, ""s, 0U);
    is_full__Vfuncrtn = 0U;
}

void Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126::__VnoInFunc_used(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &used__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126::__VnoInFunc_used\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "used"s, "fifo channel function not implemented"s, 0U, ""s, 0U, ""s, 0U);
    used__Vfuncrtn = 0U;
}

void Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126::__VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__24__Vfuncout;
    __Vfunc___VBasicRand__24__Vfuncout = 0;
    // Body
    Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__24__Vfuncout);
            }(), __Vfunc___VBasicRand__24__Vfuncout));
}

void Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126::__VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126::__VnoInFunc___VBasicRand(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126::_ctor_var_reset(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126::~Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vdma_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz126::to_string_middle\n"); );
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
    out += ", "+ Vdma_uvm_pkg__03a__03auvm_component::to_string_middle();
    return (out);
}
