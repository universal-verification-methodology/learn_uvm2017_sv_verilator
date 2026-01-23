// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdata_structures_example.h for the primary calling header

#include "Vdata_structures_example__pch.h"

Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue::Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue(Vdata_structures_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue::__VnoInFunc_push(Vdata_structures_example__Syms* __restrict vlSymsp, VlClassRef<Vdata_structures_example_data_structures_pkg__03a__03aSimpleTransaction> txn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue::__VnoInFunc_push\n"); );
    // Body
    this->__PVT__queue.push_back(txn);
}

void Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue::__VnoInFunc_pop(Vdata_structures_example__Syms* __restrict vlSymsp, VlClassRef<Vdata_structures_example_data_structures_pkg__03a__03aSimpleTransaction> &pop__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue::__VnoInFunc_pop\n"); );
    // Body
    VlClassRef<Vdata_structures_example_data_structures_pkg__03a__03aSimpleTransaction> txn;
    if (VL_LTS_III(32, 0U, this->__PVT__queue.size())) {
        txn = this->__PVT__queue.pop_front();
    }
    pop__Vfuncrtn = txn;
}

void Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue::__VnoInFunc_size(Vdata_structures_example__Syms* __restrict vlSymsp, IData/*31:0*/ &size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue::__VnoInFunc_size\n"); );
    // Body
    size__Vfuncrtn = this->__PVT__queue.size();
}

void Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue::__VnoInFunc_is_empty(Vdata_structures_example__Syms* __restrict vlSymsp, CData/*0:0*/ &is_empty__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue::__VnoInFunc_is_empty\n"); );
    // Body
    is_empty__Vfuncrtn = (0U == this->__PVT__queue.size());
}

void Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue::_ctor_var_reset(Vdata_structures_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue::to_string_middle\n"); );
    // Body
    std::string out;
    out += "queue:" + VL_TO_STRING(__PVT__queue);
    return (out);
}
