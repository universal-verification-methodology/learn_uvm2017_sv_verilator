// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtransactions.h for the primary calling header

#ifndef VERILATED_VTRANSACTIONS_STD__03A__03APROCESS__VCLPKG_H_
#define VERILATED_VTRANSACTIONS_STD__03A__03APROCESS__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtransactions_std__03a__03aprocess;


class Vtransactions__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtransactions_std__03a__03aprocess__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtransactions__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtransactions_std__03a__03aprocess__Vclpkg();
    ~Vtransactions_std__03a__03aprocess__Vclpkg();
    void ctor(Vtransactions__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtransactions_std__03a__03aprocess__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_killQueue(Vtransactions__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtransactions_std__03a__03aprocess>> &processQueue);
    void __VnoInFunc_self(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_std__03a__03aprocess> &self__Vfuncrtn);
};


class Vtransactions__Syms;

class Vtransactions_std__03a__03aprocess : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlProcessRef __PVT__m_process;

    // INTERNAL VARIABLES
    VlRNG __Vm_rng;
    VlCoroutine __VnoInFunc_await(Vtransactions__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_randstate(Vtransactions__Syms* __restrict vlSymsp, std::string &get_randstate__Vfuncrtn);
    void __VnoInFunc_kill(Vtransactions__Syms* __restrict vlSymsp);
    void __VnoInFunc_resume(Vtransactions__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_randstate(Vtransactions__Syms* __restrict vlSymsp, std::string s);
    void __VnoInFunc_set_status(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ s);
    void __VnoInFunc_srandom(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ seed);
    void __VnoInFunc_status(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &status__Vfuncrtn);
    void __VnoInFunc_suspend(Vtransactions__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp);
  public:
    Vtransactions_std__03a__03aprocess(Vtransactions__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtransactions_std__03a__03aprocess() {}
};

std::string VL_TO_STRING(const VlClassRef<Vtransactions_std__03a__03aprocess>& obj);


//*** Below code from `systemc in Verilog file
// From `systemc at /usr/local/share/verilator/include/verilated_std.sv:196:21

template<> template<>
inline bool VlClassRef<Vtransactions_std__03a__03aprocess>::operator==(const VlClassRef<Vtransactions_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return true;
    if (!m_objp || !rhs.m_objp) return false;
    return m_objp->__PVT__m_process == rhs.m_objp->__PVT__m_process;
};
template<> template<>
inline bool VlClassRef<Vtransactions_std__03a__03aprocess>::operator!=(const VlClassRef<Vtransactions_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return false;
    if (!m_objp || !rhs.m_objp) return true;
    return m_objp->__PVT__m_process != rhs.m_objp->__PVT__m_process;
};
template<> template<>
inline bool VlClassRef<Vtransactions_std__03a__03aprocess>::operator<(const VlClassRef<Vtransactions_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return false;
    if (!m_objp || !rhs.m_objp) return false;
    return m_objp->__PVT__m_process < rhs.m_objp->__PVT__m_process;
};
//*** Above code from `systemc in Verilog file


#endif  // guard
