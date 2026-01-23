// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vclass_hierarchy.h for the primary calling header

#ifndef VERILATED_VCLASS_HIERARCHY_UVM_PKG__03A__03AUVM_RESOURCE_TYPES__VCLPKG_H_
#define VERILATED_VCLASS_HIERARCHY_UVM_PKG__03A__03AUVM_RESOURCE_TYPES__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vclass_hierarchy_uvm_pkg__03a__03auvm_resource_types__Vclpkg.h"


class Vclass_hierarchy__Syms;
struct Vclass_hierarchy_access_t__struct__0 {
    QData/*63:0*/ __PVT__read_time;
    QData/*63:0*/ __PVT__write_time;
    IData/*31:0*/ __PVT__read_count;
    IData/*31:0*/ __PVT__write_count;

    bool operator==(const Vclass_hierarchy_access_t__struct__0& rhs) const {
        return __PVT__read_time == rhs.__PVT__read_time
            && __PVT__write_time == rhs.__PVT__write_time
            && __PVT__read_count == rhs.__PVT__read_count
            && __PVT__write_count == rhs.__PVT__write_count;
    }
    bool operator!=(const Vclass_hierarchy_access_t__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Vclass_hierarchy_access_t__struct__0& rhs) const {
        return std::tie(__PVT__read_time, __PVT__write_time, __PVT__read_count, __PVT__write_count)
            <  std::tie(rhs.__PVT__read_time, rhs.__PVT__write_time, rhs.__PVT__read_count, rhs.__PVT__write_count);
    }
};
template <>
struct VlIsCustomStruct<Vclass_hierarchy_access_t__struct__0> : public std::true_type {};

class alignas(VL_CACHE_LINE_BYTES) Vclass_hierarchy_uvm_pkg__03a__03auvm_resource_types__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vclass_hierarchy__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vclass_hierarchy_uvm_pkg__03a__03auvm_resource_types__Vclpkg();
    ~Vclass_hierarchy_uvm_pkg__03a__03auvm_resource_types__Vclpkg();
    void ctor(Vclass_hierarchy__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vclass_hierarchy_uvm_pkg__03a__03auvm_resource_types__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vclass_hierarchy_access_t__struct__0& obj);

class Vclass_hierarchy__Syms;

class Vclass_hierarchy_uvm_pkg__03a__03auvm_resource_types : public virtual VlClass {
  public:
  private:
    void _ctor_var_reset(Vclass_hierarchy__Syms* __restrict vlSymsp);
  public:
    Vclass_hierarchy_uvm_pkg__03a__03auvm_resource_types(Vclass_hierarchy__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vclass_hierarchy_uvm_pkg__03a__03auvm_resource_types() {}
};

std::string VL_TO_STRING(const VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_resource_types>& obj);

#endif  // guard
