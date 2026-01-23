// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpools_top.h for the primary calling header

#include "Vpools_top__pch.h"

Vpools_top_uvm_pkg__03a__03am_uvm_printer_knobs::Vpools_top_uvm_pkg__03a__03am_uvm_printer_knobs(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03am_uvm_printer_knobs::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__hex_radix = "'h"s;
    this->__PVT__unsigned_radix = "'d"s;
    this->__PVT__oct_radix = "'o"s;
    this->__PVT__bin_radix = "'b"s;
    this->__PVT__dec_radix = "'d"s;
    this->__PVT__default_radix = 0x07000000U;
    this->__PVT__show_radix = 1U;
    this->__PVT__separator = "{}"s;
    this->__PVT__mcd = 0x80000001U;
    this->__PVT__show_root = 0U;
    this->__PVT__indent = 2U;
    this->__PVT__prefix = ""s;
    this->__PVT__end_elements = 5U;
    this->__PVT__begin_elements = 5U;
    this->__PVT__reference = 1U;
    this->__PVT__depth = 0xffffffffU;
    this->__PVT__size = 1U;
    this->__PVT__type_name = 1U;
    this->__PVT__identifier = 1U;
}

void Vpools_top_uvm_pkg__03a__03am_uvm_printer_knobs::_ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03am_uvm_printer_knobs::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__identifier = 0;
    __PVT__type_name = 0;
    __PVT__size = 0;
    __PVT__depth = 0;
    __PVT__reference = 0;
    __PVT__begin_elements = 0;
    __PVT__end_elements = 0;
    __PVT__indent = 0;
    __PVT__show_root = 0;
    __PVT__mcd = 0;
    __PVT__show_radix = 0;
    __PVT__default_radix = 0;
    __PVT__recursion_policy = 0;
}

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03am_uvm_printer_knobs>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03am_uvm_printer_knobs::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vpools_top_uvm_pkg__03a__03am_uvm_printer_knobs::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03am_uvm_printer_knobs::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vpools_top_uvm_pkg__03a__03am_uvm_printer_knobs::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03am_uvm_printer_knobs::to_string_middle\n"); );
    // Body
    std::string out;
    out += "identifier:" + VL_TO_STRING(__PVT__identifier);
    out += ", type_name:" + VL_TO_STRING(__PVT__type_name);
    out += ", size:" + VL_TO_STRING(__PVT__size);
    out += ", depth:" + VL_TO_STRING(__PVT__depth);
    out += ", reference:" + VL_TO_STRING(__PVT__reference);
    out += ", begin_elements:" + VL_TO_STRING(__PVT__begin_elements);
    out += ", end_elements:" + VL_TO_STRING(__PVT__end_elements);
    out += ", prefix:" + VL_TO_STRING(__PVT__prefix);
    out += ", indent:" + VL_TO_STRING(__PVT__indent);
    out += ", show_root:" + VL_TO_STRING(__PVT__show_root);
    out += ", mcd:" + VL_TO_STRING(__PVT__mcd);
    out += ", separator:" + VL_TO_STRING(__PVT__separator);
    out += ", show_radix:" + VL_TO_STRING(__PVT__show_radix);
    out += ", default_radix:" + VL_TO_STRING(__PVT__default_radix);
    out += ", dec_radix:" + VL_TO_STRING(__PVT__dec_radix);
    out += ", bin_radix:" + VL_TO_STRING(__PVT__bin_radix);
    out += ", oct_radix:" + VL_TO_STRING(__PVT__oct_radix);
    out += ", unsigned_radix:" + VL_TO_STRING(__PVT__unsigned_radix);
    out += ", hex_radix:" + VL_TO_STRING(__PVT__hex_radix);
    out += ", recursion_policy:" + VL_TO_STRING(__PVT__recursion_policy);
    return (out);
}
