// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Verror_handling_example.h for the primary calling header

#ifndef VERILATED_VERROR_HANDLING_EXAMPLE_ERROR_HANDLING_PKG__03A__03AVERIFICATIONEXCEPTION__VCLPKG_H_
#define VERILATED_VERROR_HANDLING_EXAMPLE_ERROR_HANDLING_PKG__03A__03AVERIFICATIONEXCEPTION__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Verror_handling_example__Syms;

class alignas(VL_CACHE_LINE_BYTES) Verror_handling_example_error_handling_pkg__03a__03aVerificationException__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Verror_handling_example__Syms* const vlSymsp;

    // CONSTRUCTORS
    Verror_handling_example_error_handling_pkg__03a__03aVerificationException__Vclpkg(Verror_handling_example__Syms* symsp, const char* v__name);
    ~Verror_handling_example_error_handling_pkg__03a__03aVerificationException__Vclpkg();
    VL_UNCOPYABLE(Verror_handling_example_error_handling_pkg__03a__03aVerificationException__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Verror_handling_example__Syms;

class Verror_handling_example_error_handling_pkg__03a__03aVerificationException : public VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__error_code;
    std::string __PVT__message;
    void __VnoInFunc_convert2string(Verror_handling_example__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
  private:
    void _ctor_var_reset(Verror_handling_example__Syms* __restrict vlSymsp);
  public:
    Verror_handling_example_error_handling_pkg__03a__03aVerificationException(Verror_handling_example__Syms* __restrict vlSymsp, std::string msg, IData/*31:0*/ code);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Verror_handling_example_error_handling_pkg__03a__03aVerificationException() {}
};

std::string VL_TO_STRING(const VlClassRef<Verror_handling_example_error_handling_pkg__03a__03aVerificationException>& obj);

#endif  // guard
