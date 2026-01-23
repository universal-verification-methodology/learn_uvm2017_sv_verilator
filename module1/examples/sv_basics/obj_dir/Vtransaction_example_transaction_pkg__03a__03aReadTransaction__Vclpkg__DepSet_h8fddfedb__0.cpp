// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransaction_example.h for the primary calling header

#include "Vtransaction_example__pch.h"
#include "Vtransaction_example_transaction_pkg__03a__03aReadTransaction__Vclpkg.h"
#include "Vtransaction_example_transaction_pkg__03a__03aTransaction__Vclpkg.h"

void Vtransaction_example_transaction_pkg__03a__03aReadTransaction::__VnoInFunc_convert2string(Vtransaction_example__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtransaction_example_transaction_pkg__03a__03aReadTransaction::__VnoInFunc_convert2string\n"); );
    // Body
    convert2string__Vfuncrtn = VL_SFORMATF_N_NX("ReadTransaction(id=%0d, address=0x%0x, data=0x%0x)",0,
                                                32,
                                                Vtransaction_example_transaction_pkg__03a__03aTransaction::__PVT__id,
                                                16,
                                                (IData)(this->__PVT__address),
                                                32,
                                                Vtransaction_example_transaction_pkg__03a__03aTransaction::__PVT__data) ;
}
