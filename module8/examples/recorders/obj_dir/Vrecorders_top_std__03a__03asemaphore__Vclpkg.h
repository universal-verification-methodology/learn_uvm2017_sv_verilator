// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrecorders_top.h for the primary calling header

#ifndef VERILATED_VRECORDERS_TOP_STD__03A__03ASEMAPHORE__VCLPKG_H_
#define VERILATED_VRECORDERS_TOP_STD__03A__03ASEMAPHORE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vrecorders_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrecorders_top_std__03a__03asemaphore__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vrecorders_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vrecorders_top_std__03a__03asemaphore__Vclpkg();
    ~Vrecorders_top_std__03a__03asemaphore__Vclpkg();
    void ctor(Vrecorders_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vrecorders_top_std__03a__03asemaphore__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vrecorders_top__Syms;

class Vrecorders_top_std__03a__03asemaphore : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_keyCount;
    VlCoroutine __VnoInFunc_get(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    void __VnoInFunc_put(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    void __VnoInFunc_try_get(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount, IData/*31:0*/ &try_get__Vfuncrtn);
  private:
    void _ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp);
  public:
    Vrecorders_top_std__03a__03asemaphore(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vrecorders_top_std__03a__03asemaphore() {}
};

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_std__03a__03asemaphore>& obj);

#endif  // guard
