// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransactions.h for the primary calling header

#include "Vtransactions__pch.h"

void Vtransactions_uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg::__VnoInFunc_get_inst(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_cmdline_processor> &get_inst__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtransactions_uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg::__VnoInFunc_get_inst\n"); );
    // Body
    if ((VlNull{} == this->__PVT__m_inst)) {
        this->__PVT__m_inst = VL_NEW(Vtransactions_uvm_pkg__03a__03auvm_cmdline_processor, vlProcess, vlSymsp, "uvm_cmdline_proc"s);
    }
    get_inst__Vfuncrtn = this->__PVT__m_inst;
}

void Vtransactions_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_args(Vtransactions__Syms* __restrict vlSymsp, VlQueue<std::string> &args) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_args\n"); );
    // Body
    args = this->__PVT__m_argv;
}

void Vtransactions_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_plusargs(Vtransactions__Syms* __restrict vlSymsp, VlQueue<std::string> &args) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_plusargs\n"); );
    // Body
    args = this->__PVT__m_plus_argv;
}

void Vtransactions_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_uvm_args(Vtransactions__Syms* __restrict vlSymsp, VlQueue<std::string> &args) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_uvm_args\n"); );
    // Body
    args = this->__PVT__m_uvm_argv;
}

void Vtransactions_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_arg_matches(Vtransactions__Syms* __restrict vlSymsp, std::string match, VlQueue<std::string> &args, IData/*31:0*/ &get_arg_matches__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_arg_matches\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_uvm_is_match__0__Vfuncout;
    __Vfunc_uvm_is_match__0__Vfuncout = 0;
    std::string __Vfunc_uvm_is_match__0__expr;
    std::string __Vfunc_uvm_is_match__0__str;
    std::string __Vfunc_uvm_glob_to_re__1__Vfuncout;
    std::string __Vfunc_uvm_glob_to_re__1__glob;
    IData/*31:0*/ __Vfunc_uvm_re_match__2__Vfuncout;
    __Vfunc_uvm_re_match__2__Vfuncout = 0;
    std::string __Vfunc_uvm_re_match__2__re;
    std::string __Vfunc_uvm_re_match__2__str;
    IData/*31:0*/ __Vfunc_uvm_re_match__2____Vincrement1;
    __Vfunc_uvm_re_match__2____Vincrement1 = 0;
    // Body
    IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0;
    CData/*0:0*/ match_is_regex;
    match_is_regex = 0;
    IData/*31:0*/ len;
    len = 0;
    match_is_regex = ((VL_LTS_III(32, 2U, VL_LEN_IN(match)) 
                       & (0x2fU == VL_GETC_N(match,0U))) 
                      & (0x2fU == VL_GETC_N(match,(
                                                   VL_LEN_IN(match) 
                                                   - (IData)(1U)))));
    len = VL_LEN_IN(match);
    args.clear();
    unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk1__DOT__i, this->__PVT__m_argv.size())) {
        if (((IData)(match_is_regex) && ([&]() {
                        __Vfunc_uvm_is_match__0__str 
                            = VL_CVT_PACK_STR_NN(this->__PVT__m_argv.at(unnamedblk1__DOT__i));
                        __Vfunc_uvm_is_match__0__expr 
                            = match;
                        __Vfunc_uvm_glob_to_re__1__glob 
                            = __Vfunc_uvm_is_match__0__expr;
                        __Vfunc_uvm_glob_to_re__1__Vfuncout 
                            = __Vfunc_uvm_glob_to_re__1__glob;
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
                            = __Vfunc_uvm_glob_to_re__1__Vfuncout;
                        __Vfunc_uvm_is_match__0__Vfuncout 
                            = (0U == ([&]() {
                                    __Vfunc_uvm_re_match__2__str 
                                        = __Vfunc_uvm_is_match__0__str;
                                    __Vfunc_uvm_re_match__2__re 
                                        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s;
                                    {
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                                        if ((0U == 
                                             VL_LEN_IN(__Vfunc_uvm_re_match__2__re))) {
                                            __Vfunc_uvm_re_match__2__Vfuncout = 0U;
                                            goto __Vlabel0;
                                        }
                                        if ((0x5eU 
                                             == VL_GETC_N(__Vfunc_uvm_re_match__2__re,0U))) {
                                            __Vfunc_uvm_re_match__2__re 
                                                = VL_SUBSTR_N(__Vfunc_uvm_re_match__2__re,1U,
                                                              (VL_LEN_IN(__Vfunc_uvm_re_match__2__re) 
                                                               - (IData)(1U)));
                                        }
                                        while (((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                 != 
                                                 VL_LEN_IN(__Vfunc_uvm_re_match__2__str)) 
                                                & (0x2aU 
                                                   != 
                                                   VL_GETC_N(__Vfunc_uvm_re_match__2__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                            if (((VL_GETC_N(__Vfunc_uvm_re_match__2__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                                  != 
                                                  VL_GETC_N(__Vfunc_uvm_re_match__2__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                                 & (0x3fU 
                                                    != 
                                                    VL_GETC_N(__Vfunc_uvm_re_match__2__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                                __Vfunc_uvm_re_match__2__Vfuncout = 1U;
                                                goto __Vlabel0;
                                            }
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                = ((IData)(1U) 
                                                   + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                = ((IData)(1U) 
                                                   + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                        }
                                        while ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                != 
                                                VL_LEN_IN(__Vfunc_uvm_re_match__2__str))) {
                                            if ((0x2aU 
                                                 == 
                                                 VL_GETC_N(__Vfunc_uvm_re_match__2__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                                if (
                                                    (vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                     == 
                                                     VL_LEN_IN(__Vfunc_uvm_re_match__2__re))) {
                                                    __Vfunc_uvm_re_match__2__Vfuncout = 0U;
                                                    goto __Vlabel0;
                                                }
                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                                                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                            } else if (
                                                       ((VL_GETC_N(__Vfunc_uvm_re_match__2__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                                         == 
                                                         VL_GETC_N(__Vfunc_uvm_re_match__2__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                                        | (0x3fU 
                                                           == 
                                                           VL_GETC_N(__Vfunc_uvm_re_match__2__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                            } else {
                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                                                __Vfunc_uvm_re_match__2____Vincrement1 
                                                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                    = __Vfunc_uvm_re_match__2____Vincrement1;
                                            }
                                        }
                                        while ((VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                                           VL_LEN_IN(__Vfunc_uvm_re_match__2__re)) 
                                                & (0x2aU 
                                                   == 
                                                   VL_GETC_N(__Vfunc_uvm_re_match__2__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                = ((IData)(1U) 
                                                   + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                        }
                                        __Vfunc_uvm_re_match__2__Vfuncout 
                                            = ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                == 
                                                VL_LEN_IN(__Vfunc_uvm_re_match__2__re))
                                                ? 0U
                                                : 1U);
                                        __Vlabel0: ;
                                    }
                                }(), __Vfunc_uvm_re_match__2__Vfuncout));
                    }(), (IData)(__Vfunc_uvm_is_match__0__Vfuncout)))) {
            args.push_back(this->__PVT__m_argv.at(unnamedblk1__DOT__i));
        } else if ((VL_GTES_III(32, VL_LEN_IN(this->__PVT__m_argv.at(unnamedblk1__DOT__i)), len) 
                    & (VL_SUBSTR_N(this->__PVT__m_argv.at(unnamedblk1__DOT__i),0U,
                                   (len - (IData)(1U))) 
                       == match))) {
            args.push_back(this->__PVT__m_argv.at(unnamedblk1__DOT__i));
        }
        unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
    }
    get_arg_matches__Vfuncrtn = args.size();
}

void Vtransactions_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_arg_value(Vtransactions__Syms* __restrict vlSymsp, std::string match, std::string &value, IData/*31:0*/ &get_arg_value__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_arg_value\n"); );
    // Body
    IData/*31:0*/ unnamedblk2__DOT__i;
    unnamedblk2__DOT__i = 0;
    IData/*31:0*/ chars;
    chars = 0;
    chars = VL_LEN_IN(match);
    get_arg_value__Vfuncrtn = 0U;
    unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk2__DOT__i, this->__PVT__m_argv.size())) {
        if (VL_GTES_III(32, VL_LEN_IN(this->__PVT__m_argv.at(unnamedblk2__DOT__i)), chars)) {
            if ((VL_SUBSTR_N(this->__PVT__m_argv.at(unnamedblk2__DOT__i),0U,
                             (chars - (IData)(1U))) 
                 == match)) {
                get_arg_value__Vfuncrtn = ((IData)(1U) 
                                           + get_arg_value__Vfuncrtn);
                if ((1U == get_arg_value__Vfuncrtn)) {
                    value = VL_SUBSTR_N(this->__PVT__m_argv.at(unnamedblk2__DOT__i),chars,
                                        (VL_LEN_IN(this->__PVT__m_argv.at(unnamedblk2__DOT__i)) 
                                         - (IData)(1U)));
                }
            }
        }
        unnamedblk2__DOT__i = ((IData)(1U) + unnamedblk2__DOT__i);
    }
}

void Vtransactions_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_arg_values(Vtransactions__Syms* __restrict vlSymsp, std::string match, VlQueue<std::string> &values, IData/*31:0*/ &get_arg_values__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_arg_values\n"); );
    // Body
    IData/*31:0*/ unnamedblk3__DOT__i;
    unnamedblk3__DOT__i = 0;
    IData/*31:0*/ chars;
    chars = 0;
    chars = VL_LEN_IN(match);
    values.clear();
    unnamedblk3__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk3__DOT__i, this->__PVT__m_argv.size())) {
        if (VL_GTES_III(32, VL_LEN_IN(this->__PVT__m_argv.at(unnamedblk3__DOT__i)), chars)) {
            if ((VL_SUBSTR_N(this->__PVT__m_argv.at(unnamedblk3__DOT__i),0U,
                             (chars - (IData)(1U))) 
                 == match)) {
                values.push_back(VL_SUBSTR_N(this->__PVT__m_argv.at(unnamedblk3__DOT__i),chars,
                                             (VL_LEN_IN(this->__PVT__m_argv.at(unnamedblk3__DOT__i)) 
                                              - (IData)(1U))));
            }
        }
        unnamedblk3__DOT__i = ((IData)(1U) + unnamedblk3__DOT__i);
    }
    get_arg_values__Vfuncrtn = values.size();
}

void Vtransactions_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_tool_name(Vtransactions__Syms* __restrict vlSymsp, std::string &get_tool_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_tool_name\n"); );
    // Body
    get_tool_name__Vfuncrtn = "?"s;
}

void Vtransactions_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_tool_version(Vtransactions__Syms* __restrict vlSymsp, std::string &get_tool_version__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_tool_version\n"); );
    // Body
    get_tool_version__Vfuncrtn = "?"s;
}

Vtransactions_uvm_pkg__03a__03auvm_cmdline_processor::Vtransactions_uvm_pkg__03a__03auvm_cmdline_processor(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string name)
    : Vtransactions_uvm_pkg__03a__03auvm_report_object(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_cmdline_processor::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    std::string s;
    std::string sub;
    IData/*31:0*/ doInit;
    doInit = 0;
    doInit = 1U;
    ;
    s = ""s;
    doInit = 0U;
}

void Vtransactions_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_m_convert_verb(Vtransactions__Syms* __restrict vlSymsp, std::string verb_str, IData/*31:0*/ &verb_enum, CData/*0:0*/ &m_convert_verb__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_m_convert_verb\n"); );
    // Body
    if ((((((((("NONE"s == verb_str) | ("UVM_NONE"s 
                                        == verb_str)) 
              | ("LOW"s == verb_str)) | ("UVM_LOW"s 
                                         == verb_str)) 
            | ("MEDIUM"s == verb_str)) | ("UVM_MEDIUM"s 
                                          == verb_str)) 
          | ("HIGH"s == verb_str)) | ("UVM_HIGH"s == verb_str))) {
        if (("NONE"s == verb_str)) {
            verb_enum = 0U;
            m_convert_verb__Vfuncrtn = 1U;
        } else if (("UVM_NONE"s == verb_str)) {
            verb_enum = 0U;
            m_convert_verb__Vfuncrtn = 1U;
        } else if (("LOW"s == verb_str)) {
            verb_enum = 0x00000064U;
            m_convert_verb__Vfuncrtn = 1U;
        } else if (("UVM_LOW"s == verb_str)) {
            verb_enum = 0x00000064U;
            m_convert_verb__Vfuncrtn = 1U;
        } else if (("MEDIUM"s == verb_str)) {
            verb_enum = 0x000000c8U;
            m_convert_verb__Vfuncrtn = 1U;
        } else if (("UVM_MEDIUM"s == verb_str)) {
            verb_enum = 0x000000c8U;
            m_convert_verb__Vfuncrtn = 1U;
        } else if (("HIGH"s == verb_str)) {
            verb_enum = 0x0000012cU;
            m_convert_verb__Vfuncrtn = 1U;
        } else {
            verb_enum = 0x0000012cU;
            m_convert_verb__Vfuncrtn = 1U;
        }
    } else if (("FULL"s == verb_str)) {
        verb_enum = 0x00000190U;
        m_convert_verb__Vfuncrtn = 1U;
    } else if (("UVM_FULL"s == verb_str)) {
        verb_enum = 0x00000190U;
        m_convert_verb__Vfuncrtn = 1U;
    } else if (("DEBUG"s == verb_str)) {
        verb_enum = 0x000001f4U;
        m_convert_verb__Vfuncrtn = 1U;
    } else if (("UVM_DEBUG"s == verb_str)) {
        verb_enum = 0x000001f4U;
        m_convert_verb__Vfuncrtn = 1U;
    } else {
        m_convert_verb__Vfuncrtn = 0U;
    }
}

void Vtransactions_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_randomize(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__8__Vfuncout;
    __Vfunc___Vbasic_randomize__8__Vfuncout = 0;
    // Body
    Vtransactions_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtransactions_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__8__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__8__Vfuncout));
}

void Vtransactions_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc___Vbasic_randomize(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vtransactions_uvm_pkg__03a__03auvm_cmdline_processor::_ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_cmdline_processor::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_cmdline_processor>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_cmdline_processor::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtransactions_uvm_pkg__03a__03auvm_cmdline_processor::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_cmdline_processor::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtransactions_uvm_pkg__03a__03auvm_cmdline_processor::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_cmdline_processor::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_argv:" + VL_TO_STRING(__PVT__m_argv);
    out += ", m_plus_argv:" + VL_TO_STRING(__PVT__m_plus_argv);
    out += ", m_uvm_argv:" + VL_TO_STRING(__PVT__m_uvm_argv);
    out += ", "+ Vtransactions_uvm_pkg__03a__03auvm_report_object::to_string_middle();
    return (out);
}
