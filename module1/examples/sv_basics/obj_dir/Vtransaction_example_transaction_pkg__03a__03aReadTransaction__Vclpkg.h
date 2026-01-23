// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtransaction_example.h for the primary calling header

#ifndef VERILATED_VTRANSACTION_EXAMPLE_TRANSACTION_PKG__03A__03AREADTRANSACTION__VCLPKG_H_
#define VERILATED_VTRANSACTION_EXAMPLE_TRANSACTION_PKG__03A__03AREADTRANSACTION__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtransaction_example_transaction_pkg__03a__03aTransaction;


class Vtransaction_example__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtransaction_example_transaction_pkg__03a__03aReadTransaction__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtransaction_example__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtransaction_example_transaction_pkg__03a__03aReadTransaction__Vclpkg(Vtransaction_example__Syms* symsp, const char* v__name);
    ~Vtransaction_example_transaction_pkg__03a__03aReadTransaction__Vclpkg();
    VL_UNCOPYABLE(Vtransaction_example_transaction_pkg__03a__03aReadTransaction__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vtransaction_example_transaction_pkg__03a__03aTransaction__Vclpkg.h"

class Vtransaction_example__Syms;

class Vtransaction_example_transaction_pkg__03a__03aReadTransaction : public Vtransaction_example_transaction_pkg__03a__03aTransaction {
  public:

    // DESIGN SPECIFIC STATE
    SData/*15:0*/ __PVT__address;
    std::string __PVT__transaction_type;
    void __VnoInFunc_convert2string(Vtransaction_example__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    void __VnoInFunc_get_address(Vtransaction_example__Syms* __restrict vlSymsp, SData/*15:0*/ &get_address__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtransaction_example__Syms* __restrict vlSymsp);
  public:
    Vtransaction_example_transaction_pkg__03a__03aReadTransaction(Vtransaction_example__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtransaction_example_transaction_pkg__03a__03aReadTransaction() {}
};

std::string VL_TO_STRING(const VlClassRef<Vtransaction_example_transaction_pkg__03a__03aReadTransaction>& obj);

#endif  // guard
