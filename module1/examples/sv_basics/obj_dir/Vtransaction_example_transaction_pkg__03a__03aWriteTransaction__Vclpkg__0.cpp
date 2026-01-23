// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransaction_example.h for the primary calling header

#include "Vtransaction_example__pch.h"

Vtransaction_example_transaction_pkg__03a__03aWriteTransaction::Vtransaction_example_transaction_pkg__03a__03aWriteTransaction(Vtransaction_example__Syms* __restrict vlSymsp, std::string name)
    : Vtransaction_example_transaction_pkg__03a__03aTransaction(vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransaction_example_transaction_pkg__03a__03aWriteTransaction::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    this->__PVT__address = 0U;
    this->__PVT__transaction_type = "WRITE"s;
}

void Vtransaction_example_transaction_pkg__03a__03aWriteTransaction::__VnoInFunc_convert2string(Vtransaction_example__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransaction_example_transaction_pkg__03a__03aWriteTransaction::__VnoInFunc_convert2string\n"); );
    // Body
    convert2string__Vfuncrtn = VL_SFORMATF_N_NX("WriteTransaction(id=%0d, address=0x%0x, data=0x%0x)",0,
                                                32,
                                                Vtransaction_example_transaction_pkg__03a__03aTransaction::__PVT__id,
                                                16,
                                                (IData)(this->__PVT__address),
                                                32,
                                                Vtransaction_example_transaction_pkg__03a__03aTransaction::__PVT__data) ;
}

void Vtransaction_example_transaction_pkg__03a__03aWriteTransaction::__VnoInFunc_get_address(Vtransaction_example__Syms* __restrict vlSymsp, SData/*15:0*/ &get_address__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransaction_example_transaction_pkg__03a__03aWriteTransaction::__VnoInFunc_get_address\n"); );
    // Body
    get_address__Vfuncrtn = this->__PVT__address;
}

void Vtransaction_example_transaction_pkg__03a__03aWriteTransaction::_ctor_var_reset(Vtransaction_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransaction_example_transaction_pkg__03a__03aWriteTransaction::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__address = 0;
}

std::string VL_TO_STRING(const VlClassRef<Vtransaction_example_transaction_pkg__03a__03aWriteTransaction>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransaction_example_transaction_pkg__03a__03aWriteTransaction::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtransaction_example_transaction_pkg__03a__03aWriteTransaction::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransaction_example_transaction_pkg__03a__03aWriteTransaction::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtransaction_example_transaction_pkg__03a__03aWriteTransaction::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransaction_example_transaction_pkg__03a__03aWriteTransaction::to_string_middle\n"); );
    // Body
    std::string out;
    out += "address:" + VL_TO_STRING(__PVT__address);
    out += ", transaction_type:" + VL_TO_STRING(__PVT__transaction_type);
    out += ", "+ Vtransaction_example_transaction_pkg__03a__03aTransaction::to_string_middle();
    return (out);
}
