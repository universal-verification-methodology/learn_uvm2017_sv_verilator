// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransaction_example.h for the primary calling header

#include "Vtransaction_example__pch.h"

Vtransaction_example_transaction_pkg__03a__03aTransaction::Vtransaction_example_transaction_pkg__03a__03aTransaction(Vtransaction_example__Syms* __restrict vlSymsp, std::string name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransaction_example_transaction_pkg__03a__03aTransaction::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    vlSymsp->TOP__transaction_pkg__03a__03aTransaction__Vclpkg.__PVT__id_counter 
        = ((IData)(1U) + vlSymsp->TOP__transaction_pkg__03a__03aTransaction__Vclpkg.__PVT__id_counter);
    this->__PVT__id = vlSymsp->TOP__transaction_pkg__03a__03aTransaction__Vclpkg.__PVT__id_counter;
    this->__PVT__data = 0U;
    this->__PVT__timestamp = 0U;
}

void Vtransaction_example_transaction_pkg__03a__03aTransaction::__VnoInFunc_copy(Vtransaction_example__Syms* __restrict vlSymsp, VlClassRef<Vtransaction_example_transaction_pkg__03a__03aTransaction> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransaction_example_transaction_pkg__03a__03aTransaction::__VnoInFunc_copy\n"); );
    // Body
    {
        if (VL_UNLIKELY(((VlNull{} == rhs)))) {
            VL_WRITEF_NX("[%0t] %%Error: transaction.sv:43: Assertion failed in %Ntransaction_pkg.Transaction.copy: Copy failed: null pointer\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("transaction.sv", 43, "");
            goto __Vlabel0;
        }
        this->__PVT__id = VL_NULL_CHECK(rhs, "transaction.sv", 46)
            ->__PVT__id;
        this->__PVT__data = VL_NULL_CHECK(rhs, "transaction.sv", 47)
            ->__PVT__data;
        this->__PVT__timestamp = VL_NULL_CHECK(rhs, "transaction.sv", 48)
            ->__PVT__timestamp;
        __Vlabel0: ;
    }
}

void Vtransaction_example_transaction_pkg__03a__03aTransaction::__VnoInFunc_compare(Vtransaction_example__Syms* __restrict vlSymsp, VlClassRef<Vtransaction_example_transaction_pkg__03a__03aTransaction> rhs, CData/*0:0*/ &compare__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransaction_example_transaction_pkg__03a__03aTransaction::__VnoInFunc_compare\n"); );
    // Body
    {
        if ((VlNull{} == rhs)) {
            compare__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        compare__Vfuncrtn = ((this->__PVT__id == VL_NULL_CHECK(rhs, "transaction.sv", 56)
                              ->__PVT__id) && (this->__PVT__data 
                                               == VL_NULL_CHECK(rhs, "transaction.sv", 56)
                                               ->__PVT__data));
        __Vlabel0: ;
    }
}

void Vtransaction_example_transaction_pkg__03a__03aTransaction::__VnoInFunc_convert2string(Vtransaction_example__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransaction_example_transaction_pkg__03a__03aTransaction::__VnoInFunc_convert2string\n"); );
    // Body
    convert2string__Vfuncrtn = VL_SFORMATF_N_NX("Transaction(id=%0d, data=0x%0x, timestamp=%0#)",0,
                                                32,
                                                this->__PVT__id,
                                                32,
                                                this->__PVT__data,
                                                32,
                                                this->__PVT__timestamp) ;
}

void Vtransaction_example_transaction_pkg__03a__03aTransaction::__VnoInFunc_set_timestamp(Vtransaction_example__Syms* __restrict vlSymsp, IData/*31:0*/ ts) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransaction_example_transaction_pkg__03a__03aTransaction::__VnoInFunc_set_timestamp\n"); );
    // Body
    this->__PVT__timestamp = ts;
}

void Vtransaction_example_transaction_pkg__03a__03aTransaction::__VnoInFunc_get_id(Vtransaction_example__Syms* __restrict vlSymsp, IData/*31:0*/ &get_id__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransaction_example_transaction_pkg__03a__03aTransaction::__VnoInFunc_get_id\n"); );
    // Body
    get_id__Vfuncrtn = this->__PVT__id;
}

void Vtransaction_example_transaction_pkg__03a__03aTransaction::_ctor_var_reset(Vtransaction_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransaction_example_transaction_pkg__03a__03aTransaction::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__id = 0;
    __PVT__data = 0;
    __PVT__timestamp = 0;
}

std::string VL_TO_STRING(const VlClassRef<Vtransaction_example_transaction_pkg__03a__03aTransaction>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransaction_example_transaction_pkg__03a__03aTransaction::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtransaction_example_transaction_pkg__03a__03aTransaction::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransaction_example_transaction_pkg__03a__03aTransaction::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtransaction_example_transaction_pkg__03a__03aTransaction::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransaction_example_transaction_pkg__03a__03aTransaction::to_string_middle\n"); );
    // Body
    std::string out;
    out += "id:" + VL_TO_STRING(__PVT__id);
    out += ", data:" + VL_TO_STRING(__PVT__data);
    out += ", timestamp:" + VL_TO_STRING(__PVT__timestamp);
    return (out);
}
