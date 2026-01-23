// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_simple_register_uvm.h for the primary calling header

#include "Vtest_simple_register_uvm__pch.h"

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field__Vclpkg::__VnoInFunc_get_type(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_registry__pi110> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_registry__pi110> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi110__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field__Vclpkg::__VnoInFunc_type_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_reg_field"s;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field__Vclpkg::__VnoInFunc_get_max_size(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_max_size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field__Vclpkg::__VnoInFunc_get_max_size\n"); );
    // Body
    get_max_size__Vfuncrtn = this->__PVT__m_max_size;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field__Vclpkg::__VnoInFunc_define_access(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name, CData/*0:0*/ &define_access__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field__Vclpkg::__VnoInFunc_define_access\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_m_predefine_policies__3__Vfuncout;
    __Vfunc_m_predefine_policies__3__Vfuncout = 0;
    // Body
    {
        if ((1U & (~ (IData)(this->__PVT__m_predefined)))) {
            this->__VnoInFunc_m_predefine_policies(vlSymsp, __Vfunc_m_predefine_policies__3__Vfuncout);
            this->__PVT__m_predefined = __Vfunc_m_predefine_policies__3__Vfuncout;
        }
        name = VL_TOUPPER_NN(name);
        if (this->__PVT__m_policy_names.exists(name)) {
            define_access__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        this->__PVT__m_policy_names.at(name) = 1U;
        define_access__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field__Vclpkg::__VnoInFunc_m_predefine_policies(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &m_predefine_policies__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field__Vclpkg::__VnoInFunc_m_predefine_policies\n"); );
    // Locals
    CData/*0:0*/ __Vtask_define_access__4__Vfuncout;
    __Vtask_define_access__4__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__5__Vfuncout;
    __Vtask_define_access__5__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__6__Vfuncout;
    __Vtask_define_access__6__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__7__Vfuncout;
    __Vtask_define_access__7__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__8__Vfuncout;
    __Vtask_define_access__8__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__9__Vfuncout;
    __Vtask_define_access__9__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__10__Vfuncout;
    __Vtask_define_access__10__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__11__Vfuncout;
    __Vtask_define_access__11__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__12__Vfuncout;
    __Vtask_define_access__12__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__13__Vfuncout;
    __Vtask_define_access__13__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__14__Vfuncout;
    __Vtask_define_access__14__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__15__Vfuncout;
    __Vtask_define_access__15__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__16__Vfuncout;
    __Vtask_define_access__16__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__17__Vfuncout;
    __Vtask_define_access__17__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__18__Vfuncout;
    __Vtask_define_access__18__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__19__Vfuncout;
    __Vtask_define_access__19__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__20__Vfuncout;
    __Vtask_define_access__20__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__21__Vfuncout;
    __Vtask_define_access__21__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__22__Vfuncout;
    __Vtask_define_access__22__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__23__Vfuncout;
    __Vtask_define_access__23__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__24__Vfuncout;
    __Vtask_define_access__24__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__25__Vfuncout;
    __Vtask_define_access__25__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__26__Vfuncout;
    __Vtask_define_access__26__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__27__Vfuncout;
    __Vtask_define_access__27__Vfuncout = 0;
    CData/*0:0*/ __Vtask_define_access__28__Vfuncout;
    __Vtask_define_access__28__Vfuncout = 0;
    // Body
    {
        if (this->__PVT__m_predefined) {
            m_predefine_policies__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        this->__PVT__m_predefined = 1U;
        this->__VnoInFunc_define_access(vlSymsp, "RO"s, __Vtask_define_access__4__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "RW"s, __Vtask_define_access__5__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "RC"s, __Vtask_define_access__6__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "RS"s, __Vtask_define_access__7__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "WRC"s, __Vtask_define_access__8__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "WRS"s, __Vtask_define_access__9__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "WC"s, __Vtask_define_access__10__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "WS"s, __Vtask_define_access__11__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "WSRC"s, __Vtask_define_access__12__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "WCRS"s, __Vtask_define_access__13__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "W1C"s, __Vtask_define_access__14__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "W1S"s, __Vtask_define_access__15__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "W1T"s, __Vtask_define_access__16__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "W0C"s, __Vtask_define_access__17__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "W0S"s, __Vtask_define_access__18__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "W0T"s, __Vtask_define_access__19__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "W1SRC"s, __Vtask_define_access__20__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "W1CRS"s, __Vtask_define_access__21__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "W0SRC"s, __Vtask_define_access__22__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "W0CRS"s, __Vtask_define_access__23__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "WO"s, __Vtask_define_access__24__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "WOC"s, __Vtask_define_access__25__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "WOS"s, __Vtask_define_access__26__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "W1"s, __Vtask_define_access__27__Vfuncout);
        this->__VnoInFunc_define_access(vlSymsp, "WO1"s, __Vtask_define_access__28__Vfuncout);
        m_predefine_policies__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_object_type(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_registry__pi110> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi110__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_create(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field> tmp;
    tmp = ((""s == name) ? VL_NEW(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field, vlProcess, vlSymsp, "uvm_reg_field"s)
            : VL_NEW(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_type_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_field"s;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_pre_write(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_pre_write\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_post_write(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_post_write\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_pre_read(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_pre_read\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_post_read(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_post_read\n"); );
}

Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name)
    : Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    IData/*31:0*/ unnamedblk2_1__DOT__i;
    unnamedblk2_1__DOT__i = 0;
    ;
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__Vrandmode.resize(1U);
    unnamedblk2_1__DOT__i = 0U;
    while ((unnamedblk2_1__DOT__i < Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__Vrandmode.size())) {
        Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__Vrandmode.atWrite(unnamedblk2_1__DOT__i) = 1U;
        unnamedblk2_1__DOT__i = ((IData)(1U) + unnamedblk2_1__DOT__i);
    }
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.write_var(this->__PVT__value, 0x0000000000000040ULL, 
                                                                                "value", 0ULL, 0ULL);
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_configure(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg> parent, IData/*31:0*/ size, IData/*31:0*/ lsb_pos, std::string access, CData/*0:0*/ __SYM__volatile, QData/*63:0*/ reset, CData/*0:0*/ has_reset, CData/*0:0*/ is_rand, CData/*0:0*/ individually_accessible) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_configure\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__4__Vfuncout;
    __Vfunc_uvm_report_enabled__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__4__verbosity;
    __Vfunc_uvm_report_enabled__4__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__4__severity;
    __Vfunc_uvm_report_enabled__4__severity = 0;
    std::string __Vfunc_uvm_report_enabled__4__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__5__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__6__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__7__Vfuncout;
    __Vtask_uvm_report_enabled__7__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__8__id;
    std::string __Vtask_uvm_report_error__8__message;
    IData/*31:0*/ __Vtask_uvm_report_error__8__verbosity;
    __Vtask_uvm_report_error__8__verbosity = 0;
    std::string __Vtask_uvm_report_error__8__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__8__line;
    __Vtask_uvm_report_error__8__line = 0;
    std::string __Vtask_uvm_report_error__8__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__8__report_enabled_checked;
    __Vtask_uvm_report_error__8__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__9__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__10__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__11__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__15__Vfuncout;
    __Vfunc_uvm_report_enabled__15__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__15__verbosity;
    __Vfunc_uvm_report_enabled__15__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__15__severity;
    __Vfunc_uvm_report_enabled__15__severity = 0;
    std::string __Vfunc_uvm_report_enabled__15__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__16__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__17__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__18__Vfuncout;
    __Vtask_uvm_report_enabled__18__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__19__id;
    std::string __Vtask_uvm_report_error__19__message;
    IData/*31:0*/ __Vtask_uvm_report_error__19__verbosity;
    __Vtask_uvm_report_error__19__verbosity = 0;
    std::string __Vtask_uvm_report_error__19__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__19__line;
    __Vtask_uvm_report_error__19__line = 0;
    std::string __Vtask_uvm_report_error__19__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__19__report_enabled_checked;
    __Vtask_uvm_report_error__19__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__20__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__21__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__22__Vfuncout;
    std::string __Vtemp_1;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__PVT__m_parent = parent;
    if ((0U == size)) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__4__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__4__severity = 2U;
                        __Vfunc_uvm_report_enabled__4__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__5__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__5__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__6__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__6__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__4__verbosity, (IData)(__Vfunc_uvm_report_enabled__4__severity), __Vfunc_uvm_report_enabled__4__id, __Vtask_uvm_report_enabled__7__Vfuncout);
                        __Vfunc_uvm_report_enabled__4__Vfuncout 
                            = __Vtask_uvm_report_enabled__7__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__4__Vfuncout))) {
            __Vtask_uvm_report_error__8__report_enabled_checked = 1U;
            __Vtask_uvm_report_error__8__context_name = ""s;
            __Vtask_uvm_report_error__8__line = 0x000001a0U;
            __Vtask_uvm_report_error__8__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
            __Vtask_uvm_report_error__8__verbosity = 0U;
            __Vtemp_1 = ([&]() {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__9__Vfuncout);
                }(), __Vfunc_get_full_name__9__Vfuncout);
            __Vtask_uvm_report_error__8__message = VL_SFORMATF_N_NX("Field \"%@\" cannot have 0 bits",0,
                                                                    -1,
                                                                    &(__Vtemp_1)) ;
            __Vtask_uvm_report_error__8__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__10__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__10__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__11__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__11__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__8__id, __Vtask_uvm_report_error__8__message, __Vtask_uvm_report_error__8__verbosity, __Vtask_uvm_report_error__8__filename, __Vtask_uvm_report_error__8__line, __Vtask_uvm_report_error__8__context_name, (IData)(__Vtask_uvm_report_error__8__report_enabled_checked));
        }
        size = 1U;
    }
    this->__PVT__m_size = size;
    this->__PVT__m_volatile = __SYM__volatile;
    this->__PVT__m_access = VL_TOUPPER_NN(access);
    this->__PVT__m_lsb = lsb_pos;
    this->__PVT__m_cover_on = 0U;
    this->__PVT__m_written = 0U;
    this->__PVT__m_check = ((IData)(__SYM__volatile)
                             ? 0U : 1U);
    this->__PVT__m_individually_accessible = individually_accessible;
    if (has_reset) {
        this->__VnoInFunc_set_reset(vlSymsp, reset, "HARD"s);
    }
    VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 432)->__VnoInFunc_add_field(vlSymsp, 
                                                                                VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field>{this});
    if ((! vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_field__Vclpkg.__PVT__m_policy_names.exists(this->__PVT__m_access))) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__15__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__15__severity = 2U;
                        __Vfunc_uvm_report_enabled__15__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__16__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__16__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__17__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__17__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__15__verbosity, (IData)(__Vfunc_uvm_report_enabled__15__severity), __Vfunc_uvm_report_enabled__15__id, __Vtask_uvm_report_enabled__18__Vfuncout);
                        __Vfunc_uvm_report_enabled__15__Vfuncout 
                            = __Vtask_uvm_report_enabled__18__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__15__Vfuncout))) {
            __Vtask_uvm_report_error__19__report_enabled_checked = 1U;
            __Vtask_uvm_report_error__19__context_name = ""s;
            __Vtask_uvm_report_error__19__line = 0x000001b4U;
            __Vtask_uvm_report_error__19__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
            __Vtask_uvm_report_error__19__verbosity = 0U;
            __Vtask_uvm_report_error__19__message = 
                VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Access policy '"s, access), "' for field '"s), 
                                                                 ([&]() {
                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__20__Vfuncout);
                            }(), __Vfunc_get_full_name__20__Vfuncout)), "' is not defined. Setting to RW"s));
            __Vtask_uvm_report_error__19__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__21__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__21__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__22__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__22__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__19__id, __Vtask_uvm_report_error__19__message, __Vtask_uvm_report_error__19__verbosity, __Vtask_uvm_report_error__19__filename, __Vtask_uvm_report_error__19__line, __Vtask_uvm_report_error__19__context_name, (IData)(__Vtask_uvm_report_error__19__report_enabled_checked));
        }
        this->__PVT__m_access = "RW"s;
    }
    if ((size > vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_field__Vclpkg.__PVT__m_max_size)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_field__Vclpkg.__PVT__m_max_size 
            = size;
    }
    if (((((((((((((((((((("RO"s == access) || ("RC"s 
                                                == access)) 
                         || ("RS"s == access)) || ("WC"s 
                                                   == access)) 
                       || ("WS"s == access)) || ("W1C"s 
                                                 == access)) 
                     || ("W1S"s == access)) || ("W1T"s 
                                                == access)) 
                   || ("W0C"s == access)) || ("W0S"s 
                                              == access)) 
                 || ("W0T"s == access)) || ("W1SRC"s 
                                            == access)) 
               || ("W1CRS"s == access)) || ("W0SRC"s 
                                            == access)) 
             || ("W0CRS"s == access)) || ("WSRC"s == access)) 
           || ("WCRS"s == access)) || ("WOC"s == access)) 
         || ("WOS"s == access))) {
        is_rand = 0U;
    }
    if ((1U & (~ (IData)(is_rand)))) {
        Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__Vrandmode.atWrite(0U) = 0U;
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_parent(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg> &get_parent__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_parent\n"); );
    // Body
    get_parent__Vfuncrtn = this->__PVT__m_parent;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_full_name(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_full_name\n"); );
    // Locals
    std::string __Vtask_get_full_name__24__Vfuncout;
    std::string __Vfunc_get_name__25__Vfuncout;
    // Body
    get_full_name__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                            ([&]() {
                    VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 468)
                                                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__24__Vfuncout);
                }(), __Vtask_get_full_name__24__Vfuncout), "."s), 
                                             ([&]() {
                this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__25__Vfuncout);
            }(), __Vfunc_get_name__25__Vfuncout));
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_register(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg> &get_register__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_register\n"); );
    // Body
    get_register__Vfuncrtn = this->__PVT__m_parent;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_lsb_pos(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_lsb_pos__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_lsb_pos\n"); );
    // Body
    get_lsb_pos__Vfuncrtn = this->__PVT__m_lsb;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_n_bits(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bits__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_n_bits\n"); );
    // Body
    get_n_bits__Vfuncrtn = this->__PVT__m_size;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_is_known_access(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> map, CData/*0:0*/ &is_known_access__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_is_known_access\n"); );
    // Locals
    std::string __Vfunc_get_access__26__Vfuncout;
    // Body
    std::string acc;
    {
        this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vfunc_get_access__26__Vfuncout);
        acc = __Vfunc_get_access__26__Vfuncout;
        if (((((((((((((((((((((((((("RO"s == acc) 
                                    || ("RW"s == acc)) 
                                   || ("RC"s == acc)) 
                                  || ("RS"s == acc)) 
                                 || ("WC"s == acc)) 
                                || ("WS"s == acc)) 
                               || ("W1C"s == acc)) 
                              || ("W1S"s == acc)) || 
                             ("W1T"s == acc)) || ("W0C"s 
                                                  == acc)) 
                           || ("W0S"s == acc)) || ("W0T"s 
                                                   == acc)) 
                         || ("WRC"s == acc)) || ("WRS"s 
                                                 == acc)) 
                       || ("W1SRC"s == acc)) || ("W1CRS"s 
                                                 == acc)) 
                     || ("W0SRC"s == acc)) || ("W0CRS"s 
                                               == acc)) 
                   || ("WSRC"s == acc)) || ("WCRS"s 
                                            == acc)) 
                 || ("WO"s == acc)) || ("WOC"s == acc)) 
               || ("WOS"s == acc)) || ("W1"s == acc)) 
             || ("WO1"s == acc))) {
            is_known_access__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        is_known_access__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_access(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_access__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_access\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> __Vfunc_backdoor__27__Vfuncout;
    std::string __Vtask_get_rights__28__Vfuncout;
    std::string __Vtask_get_rights__29__Vfuncout;
    std::string __Vtask_get_rights__30__Vfuncout;
    std::string __Vtask_get_rights__31__Vfuncout;
    std::string __Vtask_get_rights__32__Vfuncout;
    std::string __Vtask_get_rights__33__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__34__Vfuncout;
    __Vfunc_uvm_report_enabled__34__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__34__verbosity;
    __Vfunc_uvm_report_enabled__34__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__34__severity;
    __Vfunc_uvm_report_enabled__34__severity = 0;
    std::string __Vfunc_uvm_report_enabled__34__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__35__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__36__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__37__Vfuncout;
    __Vtask_uvm_report_enabled__37__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__38__id;
    std::string __Vtask_uvm_report_warning__38__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__38__verbosity;
    __Vtask_uvm_report_warning__38__verbosity = 0;
    std::string __Vtask_uvm_report_warning__38__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__38__line;
    __Vtask_uvm_report_warning__38__line = 0;
    std::string __Vtask_uvm_report_warning__38__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__38__report_enabled_checked;
    __Vtask_uvm_report_warning__38__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__39__Vfuncout;
    std::string __Vfunc_get_name__40__Vfuncout;
    std::string __Vtask_get_full_name__41__Vfuncout;
    std::string __Vtask_get_rights__42__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__43__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__44__Vfuncout;
    // Body
    std::string field_access;
    {
        field_access = this->__PVT__m_access;
        if ((map == ([&]() {
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_map__Vclpkg.__VnoInFunc_backdoor(vlProcess, vlSymsp, __Vfunc_backdoor__27__Vfuncout);
                    }(), __Vfunc_backdoor__27__Vfuncout))) {
            get_access__Vfuncrtn = field_access;
            goto __Vlabel0;
        }
        if ((1U | ((("RW"s == ([&]() {
                                    VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 523)
                               ->__VnoInFunc_get_rights(vlProcess, vlSymsp, map, __Vtask_get_rights__28__Vfuncout);
                                }(), __Vtask_get_rights__28__Vfuncout)) 
                    | ("RO"s == ([&]() {
                                    VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 523)
                                 ->__VnoInFunc_get_rights(vlProcess, vlSymsp, map, __Vtask_get_rights__29__Vfuncout);
                                }(), __Vtask_get_rights__29__Vfuncout))) 
                   | ("WO"s == ([&]() {
                                VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 523)
                                ->__VnoInFunc_get_rights(vlProcess, vlSymsp, map, __Vtask_get_rights__30__Vfuncout);
                            }(), __Vtask_get_rights__30__Vfuncout))))) {
            if (("RW"s == ([&]() {
                            VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 523)
                           ->__VnoInFunc_get_rights(vlProcess, vlSymsp, map, __Vtask_get_rights__31__Vfuncout);
                        }(), __Vtask_get_rights__31__Vfuncout))) {
                get_access__Vfuncrtn = field_access;
                goto __Vlabel0;
            } else if (("RO"s == ([&]() {
                            VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 523)
                                  ->__VnoInFunc_get_rights(vlProcess, vlSymsp, map, __Vtask_get_rights__32__Vfuncout);
                        }(), __Vtask_get_rights__32__Vfuncout))) {
                if (((((((((((("RW"s == field_access) 
                              || ("RO"s == field_access)) 
                             || ("WC"s == field_access)) 
                            || ("WS"s == field_access)) 
                           || ("W1C"s == field_access)) 
                          || ("W1S"s == field_access)) 
                         || ("W1T"s == field_access)) 
                        || ("W0C"s == field_access)) 
                       || ("W0S"s == field_access)) 
                      || ("W0T"s == field_access)) 
                     || ("W1"s == field_access))) {
                    field_access = "RO"s;
                } else if (((((("RC"s == field_access) 
                               || ("WRC"s == field_access)) 
                              || ("W1SRC"s == field_access)) 
                             || ("W0SRC"s == field_access)) 
                            || ("WSRC"s == field_access))) {
                    field_access = "RC"s;
                } else if (((((("RS"s == field_access) 
                               || ("WRS"s == field_access)) 
                              || ("W1CRS"s == field_access)) 
                             || ("W0CRS"s == field_access)) 
                            || ("WCRS"s == field_access))) {
                    field_access = "RS"s;
                } else if ((((("WO"s == field_access) 
                              || ("WOC"s == field_access)) 
                             || ("WOS"s == field_access)) 
                            || ("WO1"s == field_access))) {
                    field_access = "NOACCESS"s;
                }
            } else if (("WO"s == ([&]() {
                            VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 523)
                                  ->__VnoInFunc_get_rights(vlProcess, vlSymsp, map, __Vtask_get_rights__33__Vfuncout);
                        }(), __Vtask_get_rights__33__Vfuncout))) {
                if ((((((((((("RW"s == field_access) 
                             || ("WRC"s == field_access)) 
                            || ("WRS"s == field_access)) 
                           | ("W1SRC"s == field_access)) 
                          | ("W0SRC"s == field_access)) 
                         | ("W1CRS"s == field_access)) 
                        | ("W0CRS"s == field_access)) 
                       | ("WCRS"s == field_access)) 
                      | ("W1"s == field_access)) | 
                     ("WO1"s == field_access))) {
                    field_access = (((("RW"s == field_access) 
                                      || ("WRC"s == field_access)) 
                                     || ("WRS"s == field_access))
                                     ? "WO"s : (("W1SRC"s 
                                                 == field_access)
                                                 ? "W1S"s
                                                 : 
                                                (("W0SRC"s 
                                                  == field_access)
                                                  ? "W0S"s
                                                  : 
                                                 (("W1CRS"s 
                                                   == field_access)
                                                   ? "W1C"s
                                                   : 
                                                  (("W0CRS"s 
                                                    == field_access)
                                                    ? "W0C"s
                                                    : 
                                                   (("WCRS"s 
                                                     == field_access)
                                                     ? "WC"s
                                                     : 
                                                    (("W1"s 
                                                      == field_access)
                                                      ? "W1"s
                                                      : "WO1"s)))))));
                } else if (("WSRC"s == field_access)) {
                    field_access = "WS"s;
                } else if (((("RO"s == field_access) 
                             || ("RC"s == field_access)) 
                            || ("RS"s == field_access))) {
                    field_access = "NOACCESS"s;
                }
            } else {
                field_access = "NOACCESS"s;
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__34__id = "RegModel"s;
                                __Vfunc_uvm_report_enabled__34__severity = 1U;
                                __Vfunc_uvm_report_enabled__34__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__35__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__35__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__36__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__36__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__34__verbosity, (IData)(__Vfunc_uvm_report_enabled__34__severity), __Vfunc_uvm_report_enabled__34__id, __Vtask_uvm_report_enabled__37__Vfuncout);
                                __Vfunc_uvm_report_enabled__34__Vfuncout 
                                    = __Vtask_uvm_report_enabled__37__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__34__Vfuncout))) {
                    __Vtask_uvm_report_warning__38__report_enabled_checked = 1U;
                    __Vtask_uvm_report_warning__38__context_name = ""s;
                    __Vtask_uvm_report_warning__38__line = 0x0000023aU;
                    __Vtask_uvm_report_warning__38__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
                    __Vtask_uvm_report_warning__38__verbosity = 0U;
                    __Vtask_uvm_report_warning__38__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register '"s, 
                                                                                ([&]() {
                                                                VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 570)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__39__Vfuncout);
                                                            }(), __Vtask_get_full_name__39__Vfuncout)), "' containing field '"s), 
                                                                                ([&]() {
                                                        this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__40__Vfuncout);
                                                    }(), __Vfunc_get_name__40__Vfuncout)), "' is mapped in map '"s), 
                                                                                ([&]() {
                                                VL_NULL_CHECK(map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 570)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__41__Vfuncout);
                                            }(), __Vtask_get_full_name__41__Vfuncout)), "' with unknown access right '"s), 
                                                                           ([&]() {
                                        VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 570)
                                                                            ->__VnoInFunc_get_rights(vlProcess, vlSymsp, map, __Vtask_get_rights__42__Vfuncout);
                                    }(), __Vtask_get_rights__42__Vfuncout)), "'"s));
                    __Vtask_uvm_report_warning__38__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__43__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__43__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__44__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__44__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__38__id, __Vtask_uvm_report_warning__38__message, __Vtask_uvm_report_warning__38__verbosity, __Vtask_uvm_report_warning__38__filename, __Vtask_uvm_report_warning__38__line, __Vtask_uvm_report_warning__38__context_name, (IData)(__Vtask_uvm_report_warning__38__report_enabled_checked));
                }
            }
        }
        get_access__Vfuncrtn = field_access;
        __Vlabel0: ;
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_set_access(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string mode, std::string &set_access__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_set_access\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__46__Vfuncout;
    __Vfunc_uvm_report_enabled__46__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__46__verbosity;
    __Vfunc_uvm_report_enabled__46__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__46__severity;
    __Vfunc_uvm_report_enabled__46__severity = 0;
    std::string __Vfunc_uvm_report_enabled__46__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__47__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__48__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__49__Vfuncout;
    __Vtask_uvm_report_enabled__49__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__50__id;
    std::string __Vtask_uvm_report_error__50__message;
    IData/*31:0*/ __Vtask_uvm_report_error__50__verbosity;
    __Vtask_uvm_report_error__50__verbosity = 0;
    std::string __Vtask_uvm_report_error__50__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__50__line;
    __Vtask_uvm_report_error__50__line = 0;
    std::string __Vtask_uvm_report_error__50__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__50__report_enabled_checked;
    __Vtask_uvm_report_error__50__report_enabled_checked = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__51__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__52__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    set_access__Vfuncrtn = this->__PVT__m_access;
    this->__PVT__m_access = VL_TOUPPER_NN(mode);
    if ((! vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_field__Vclpkg.__PVT__m_policy_names.exists(this->__PVT__m_access))) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__46__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__46__severity = 2U;
                        __Vfunc_uvm_report_enabled__46__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__47__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__47__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__48__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__48__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__46__verbosity, (IData)(__Vfunc_uvm_report_enabled__46__severity), __Vfunc_uvm_report_enabled__46__id, __Vtask_uvm_report_enabled__49__Vfuncout);
                        __Vfunc_uvm_report_enabled__46__Vfuncout 
                            = __Vtask_uvm_report_enabled__49__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__46__Vfuncout))) {
            __Vtask_uvm_report_error__50__report_enabled_checked = 1U;
            __Vtask_uvm_report_error__50__context_name = ""s;
            __Vtask_uvm_report_error__50__line = 0x00000248U;
            __Vtask_uvm_report_error__50__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
            __Vtask_uvm_report_error__50__verbosity = 0U;
            __Vtask_uvm_report_error__50__message = 
                VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_CONCATN_NNN("Access policy '"s, this->__PVT__m_access), "' is not a defined field access policy"s));
            __Vtask_uvm_report_error__50__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__51__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__51__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__52__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__52__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__50__id, __Vtask_uvm_report_error__50__message, __Vtask_uvm_report_error__50__verbosity, __Vtask_uvm_report_error__50__filename, __Vtask_uvm_report_error__50__line, __Vtask_uvm_report_error__50__context_name, (IData)(__Vtask_uvm_report_error__50__report_enabled_checked));
        }
        this->__PVT__m_access = set_access__Vfuncrtn;
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_set_volatility(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ __SYM__volatile) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_set_volatility\n"); );
    // Body
    this->__PVT__m_volatile = __SYM__volatile;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_is_volatile(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &is_volatile__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_is_volatile\n"); );
    // Body
    is_volatile__Vfuncrtn = this->__PVT__m_volatile;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_XpredictX(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ cur_val, QData/*63:0*/ wr_val, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ &XpredictX__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_XpredictX\n"); );
    // Locals
    std::string __Vfunc_get_access__54__Vfuncout;
    std::string __Vfunc_get_access__55__Vfuncout;
    std::string __Vfunc_get_access__56__Vfuncout;
    std::string __Vfunc_get_access__57__Vfuncout;
    std::string __Vfunc_get_access__58__Vfuncout;
    std::string __Vfunc_get_access__59__Vfuncout;
    std::string __Vfunc_get_access__60__Vfuncout;
    std::string __Vfunc_get_access__61__Vfuncout;
    std::string __Vfunc_get_access__62__Vfuncout;
    std::string __Vfunc_get_access__63__Vfuncout;
    std::string __Vfunc_get_access__64__Vfuncout;
    std::string __Vfunc_get_access__65__Vfuncout;
    std::string __Vfunc_get_access__66__Vfuncout;
    std::string __Vfunc_get_access__67__Vfuncout;
    std::string __Vfunc_get_access__68__Vfuncout;
    std::string __Vfunc_get_access__69__Vfuncout;
    std::string __Vfunc_get_access__70__Vfuncout;
    std::string __Vfunc_get_access__71__Vfuncout;
    std::string __Vfunc_get_access__72__Vfuncout;
    std::string __Vfunc_get_access__73__Vfuncout;
    std::string __Vfunc_get_access__74__Vfuncout;
    std::string __Vfunc_get_access__75__Vfuncout;
    std::string __Vfunc_get_access__76__Vfuncout;
    std::string __Vfunc_get_access__77__Vfuncout;
    std::string __Vfunc_get_access__78__Vfuncout;
    std::string __Vfunc_get_access__79__Vfuncout;
    std::string __Vfunc_get_access__80__Vfuncout;
    std::string __Vfunc_get_access__81__Vfuncout;
    std::string __Vfunc_get_access__82__Vfuncout;
    std::string __Vfunc_get_access__83__Vfuncout;
    std::string __Vfunc_get_access__84__Vfuncout;
    std::string __Vfunc_get_access__85__Vfuncout;
    std::string __Vfunc_get_access__86__Vfuncout;
    std::string __Vfunc_get_access__87__Vfuncout;
    std::string __Vfunc_get_access__88__Vfuncout;
    std::string __Vfunc_get_access__89__Vfuncout;
    std::string __Vfunc_get_access__90__Vfuncout;
    std::string __Vfunc_get_access__91__Vfuncout;
    std::string __Vfunc_get_access__92__Vfuncout;
    std::string __Vfunc_get_access__93__Vfuncout;
    std::string __Vfunc_get_access__94__Vfuncout;
    std::string __Vfunc_get_access__95__Vfuncout;
    std::string __Vfunc_get_access__96__Vfuncout;
    std::string __Vfunc_get_access__97__Vfuncout;
    std::string __Vfunc_get_access__98__Vfuncout;
    std::string __Vfunc_get_access__99__Vfuncout;
    std::string __Vfunc_get_access__100__Vfuncout;
    std::string __Vfunc_get_access__101__Vfuncout;
    std::string __Vfunc_get_access__102__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__103__Vfuncout;
    __Vfunc_uvm_report_enabled__103__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__103__verbosity;
    __Vfunc_uvm_report_enabled__103__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__103__severity;
    __Vfunc_uvm_report_enabled__103__severity = 0;
    std::string __Vfunc_uvm_report_enabled__103__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__104__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__105__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__106__Vfuncout;
    __Vtask_uvm_report_enabled__106__Vfuncout = 0;
    // Body
    QData/*63:0*/ mask;
    mask = 0;
    {
        mask = (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                - 1ULL);
        if ((((((((("RO"s == ([&]() {
                                                    this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vfunc_get_access__54__Vfuncout);
                                                }(), __Vfunc_get_access__54__Vfuncout)) 
                   | ("RW"s == ([&]() {
                                                    this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vfunc_get_access__55__Vfuncout);
                                                }(), __Vfunc_get_access__55__Vfuncout))) 
                  | ("RC"s == ([&]() {
                                                this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vfunc_get_access__56__Vfuncout);
                                            }(), __Vfunc_get_access__56__Vfuncout))) 
                 | ("RS"s == ([&]() {
                                            this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vfunc_get_access__57__Vfuncout);
                                        }(), __Vfunc_get_access__57__Vfuncout))) 
                | ("WC"s == ([&]() {
                                        this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vfunc_get_access__58__Vfuncout);
                                    }(), __Vfunc_get_access__58__Vfuncout))) 
               | ("WS"s == ([&]() {
                                    this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vfunc_get_access__59__Vfuncout);
                                }(), __Vfunc_get_access__59__Vfuncout))) 
              | ("WRC"s == ([&]() {
                                this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vfunc_get_access__60__Vfuncout);
                            }(), __Vfunc_get_access__60__Vfuncout))) 
             | ("WRS"s == ([&]() {
                            this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vfunc_get_access__61__Vfuncout);
                        }(), __Vfunc_get_access__61__Vfuncout)))) {
            if (("RO"s == ([&]() {
                            this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vfunc_get_access__62__Vfuncout);
                        }(), __Vfunc_get_access__62__Vfuncout))) {
                XpredictX__Vfuncrtn = cur_val;
                goto __Vlabel0;
            } else if (("RW"s == ([&]() {
                            this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vfunc_get_access__63__Vfuncout);
                        }(), __Vfunc_get_access__63__Vfuncout))) {
                XpredictX__Vfuncrtn = wr_val;
                goto __Vlabel0;
            } else if (("RC"s == ([&]() {
                            this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vfunc_get_access__64__Vfuncout);
                        }(), __Vfunc_get_access__64__Vfuncout))) {
                XpredictX__Vfuncrtn = cur_val;
                goto __Vlabel0;
            } else if (("RS"s == ([&]() {
                            this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vfunc_get_access__65__Vfuncout);
                        }(), __Vfunc_get_access__65__Vfuncout))) {
                XpredictX__Vfuncrtn = cur_val;
                goto __Vlabel0;
            } else if (("WC"s == ([&]() {
                            this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vfunc_get_access__66__Vfuncout);
                        }(), __Vfunc_get_access__66__Vfuncout))) {
                XpredictX__Vfuncrtn = 0ULL;
                goto __Vlabel0;
            } else if (("WS"s == ([&]() {
                            this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vfunc_get_access__67__Vfuncout);
                        }(), __Vfunc_get_access__67__Vfuncout))) {
                XpredictX__Vfuncrtn = mask;
                goto __Vlabel0;
            } else if (("WRC"s == ([&]() {
                            this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vfunc_get_access__68__Vfuncout);
                        }(), __Vfunc_get_access__68__Vfuncout))) {
                XpredictX__Vfuncrtn = wr_val;
                goto __Vlabel0;
            } else {
                XpredictX__Vfuncrtn = wr_val;
                goto __Vlabel0;
            }
        } else if ((((((((("WSRC"s == ([&]() {
                                                    this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vfunc_get_access__69__Vfuncout);
                                                }(), __Vfunc_get_access__69__Vfuncout)) 
                          | ("WCRS"s == ([&]() {
                                                    this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vfunc_get_access__70__Vfuncout);
                                                }(), __Vfunc_get_access__70__Vfuncout))) 
                         | ("W1C"s == ([&]() {
                                                this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vfunc_get_access__71__Vfuncout);
                                            }(), __Vfunc_get_access__71__Vfuncout))) 
                        | ("W1S"s == ([&]() {
                                            this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vfunc_get_access__72__Vfuncout);
                                        }(), __Vfunc_get_access__72__Vfuncout))) 
                       | ("W1T"s == ([&]() {
                                        this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vfunc_get_access__73__Vfuncout);
                                    }(), __Vfunc_get_access__73__Vfuncout))) 
                      | ("W0C"s == ([&]() {
                                    this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vfunc_get_access__74__Vfuncout);
                                }(), __Vfunc_get_access__74__Vfuncout))) 
                     | ("W0S"s == ([&]() {
                                this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vfunc_get_access__75__Vfuncout);
                            }(), __Vfunc_get_access__75__Vfuncout))) 
                    | ("W0T"s == ([&]() {
                            this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vfunc_get_access__76__Vfuncout);
                        }(), __Vfunc_get_access__76__Vfuncout)))) {
            if (("WSRC"s == ([&]() {
                            this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vfunc_get_access__77__Vfuncout);
                        }(), __Vfunc_get_access__77__Vfuncout))) {
                XpredictX__Vfuncrtn = mask;
                goto __Vlabel0;
            } else if (("WCRS"s == ([&]() {
                            this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vfunc_get_access__78__Vfuncout);
                        }(), __Vfunc_get_access__78__Vfuncout))) {
                XpredictX__Vfuncrtn = 0ULL;
                goto __Vlabel0;
            } else if (("W1C"s == ([&]() {
                            this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vfunc_get_access__79__Vfuncout);
                        }(), __Vfunc_get_access__79__Vfuncout))) {
                XpredictX__Vfuncrtn = (cur_val & (~ wr_val));
                goto __Vlabel0;
            } else if (("W1S"s == ([&]() {
                            this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vfunc_get_access__80__Vfuncout);
                        }(), __Vfunc_get_access__80__Vfuncout))) {
                XpredictX__Vfuncrtn = (cur_val | wr_val);
                goto __Vlabel0;
            } else if (("W1T"s == ([&]() {
                            this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vfunc_get_access__81__Vfuncout);
                        }(), __Vfunc_get_access__81__Vfuncout))) {
                XpredictX__Vfuncrtn = (cur_val ^ wr_val);
                goto __Vlabel0;
            } else if (("W0C"s == ([&]() {
                            this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vfunc_get_access__82__Vfuncout);
                        }(), __Vfunc_get_access__82__Vfuncout))) {
                XpredictX__Vfuncrtn = (cur_val & wr_val);
                goto __Vlabel0;
            } else if (("W0S"s == ([&]() {
                            this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vfunc_get_access__83__Vfuncout);
                        }(), __Vfunc_get_access__83__Vfuncout))) {
                XpredictX__Vfuncrtn = (cur_val | ((~ wr_val) 
                                                  & mask));
                goto __Vlabel0;
            } else {
                XpredictX__Vfuncrtn = (cur_val ^ ((~ wr_val) 
                                                  & mask));
                goto __Vlabel0;
            }
        } else if ((((((((("W1SRC"s == ([&]() {
                                                    this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vfunc_get_access__84__Vfuncout);
                                                }(), __Vfunc_get_access__84__Vfuncout)) 
                          | ("W1CRS"s == ([&]() {
                                                    this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vfunc_get_access__85__Vfuncout);
                                                }(), __Vfunc_get_access__85__Vfuncout))) 
                         | ("W0SRC"s == ([&]() {
                                                this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vfunc_get_access__86__Vfuncout);
                                            }(), __Vfunc_get_access__86__Vfuncout))) 
                        | ("W0CRS"s == ([&]() {
                                            this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vfunc_get_access__87__Vfuncout);
                                        }(), __Vfunc_get_access__87__Vfuncout))) 
                       | ("WO"s == ([&]() {
                                        this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vfunc_get_access__88__Vfuncout);
                                    }(), __Vfunc_get_access__88__Vfuncout))) 
                      | ("WOC"s == ([&]() {
                                    this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vfunc_get_access__89__Vfuncout);
                                }(), __Vfunc_get_access__89__Vfuncout))) 
                     | ("WOS"s == ([&]() {
                                this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vfunc_get_access__90__Vfuncout);
                            }(), __Vfunc_get_access__90__Vfuncout))) 
                    | ("W1"s == ([&]() {
                            this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vfunc_get_access__91__Vfuncout);
                        }(), __Vfunc_get_access__91__Vfuncout)))) {
            if (("W1SRC"s == ([&]() {
                            this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vfunc_get_access__92__Vfuncout);
                        }(), __Vfunc_get_access__92__Vfuncout))) {
                XpredictX__Vfuncrtn = (cur_val | wr_val);
                goto __Vlabel0;
            } else if (("W1CRS"s == ([&]() {
                            this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vfunc_get_access__93__Vfuncout);
                        }(), __Vfunc_get_access__93__Vfuncout))) {
                XpredictX__Vfuncrtn = (cur_val & (~ wr_val));
                goto __Vlabel0;
            } else if (("W0SRC"s == ([&]() {
                            this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vfunc_get_access__94__Vfuncout);
                        }(), __Vfunc_get_access__94__Vfuncout))) {
                XpredictX__Vfuncrtn = (cur_val | ((~ wr_val) 
                                                  & mask));
                goto __Vlabel0;
            } else if (("W0CRS"s == ([&]() {
                            this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vfunc_get_access__95__Vfuncout);
                        }(), __Vfunc_get_access__95__Vfuncout))) {
                XpredictX__Vfuncrtn = (cur_val & wr_val);
                goto __Vlabel0;
            } else if (("WO"s == ([&]() {
                            this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vfunc_get_access__96__Vfuncout);
                        }(), __Vfunc_get_access__96__Vfuncout))) {
                XpredictX__Vfuncrtn = wr_val;
                goto __Vlabel0;
            } else if (("WOC"s == ([&]() {
                            this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vfunc_get_access__97__Vfuncout);
                        }(), __Vfunc_get_access__97__Vfuncout))) {
                XpredictX__Vfuncrtn = 0ULL;
                goto __Vlabel0;
            } else if (("WOS"s == ([&]() {
                            this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vfunc_get_access__98__Vfuncout);
                        }(), __Vfunc_get_access__98__Vfuncout))) {
                XpredictX__Vfuncrtn = mask;
                goto __Vlabel0;
            } else {
                XpredictX__Vfuncrtn = ((IData)(this->__PVT__m_written)
                                        ? cur_val : wr_val);
                goto __Vlabel0;
            }
        } else if ((1U | (("WO1"s == ([&]() {
                                this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vfunc_get_access__99__Vfuncout);
                            }(), __Vfunc_get_access__99__Vfuncout)) 
                          | ("NOACCESS"s == ([&]() {
                                this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vfunc_get_access__100__Vfuncout);
                            }(), __Vfunc_get_access__100__Vfuncout))))) {
            if (("WO1"s == ([&]() {
                            this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vfunc_get_access__101__Vfuncout);
                        }(), __Vfunc_get_access__101__Vfuncout))) {
                XpredictX__Vfuncrtn = ((IData)(this->__PVT__m_written)
                                        ? cur_val : wr_val);
                goto __Vlabel0;
            } else if (("NOACCESS"s == ([&]() {
                            this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vfunc_get_access__102__Vfuncout);
                        }(), __Vfunc_get_access__102__Vfuncout))) {
                XpredictX__Vfuncrtn = cur_val;
                goto __Vlabel0;
            } else {
                XpredictX__Vfuncrtn = wr_val;
                goto __Vlabel0;
            }
        }
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__103__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__103__severity = 3U;
                        __Vfunc_uvm_report_enabled__103__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__104__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__104__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__105__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__105__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__103__verbosity, (IData)(__Vfunc_uvm_report_enabled__103__severity), __Vfunc_uvm_report_enabled__103__id, __Vtask_uvm_report_enabled__106__Vfuncout);
                        __Vfunc_uvm_report_enabled__103__Vfuncout 
                            = __Vtask_uvm_report_enabled__106__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__103__Vfuncout))) {
            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "uvm_reg_field::XpredictX(): Internal error"s, 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s, 0x000002b3U, ""s, 1U);
        }
        XpredictX__Vfuncrtn = 0ULL;
        __Vlabel0: ;
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_predict(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ value, CData/*7:0*/ be, IData/*31:0*/ kind, IData/*31:0*/ path, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> map, std::string fname, IData/*31:0*/ lineno, CData/*0:0*/ &predict__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_predict\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> rw;
    rw = VL_NEW(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item, vlProcess, vlSymsp, ""s);
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 707)->__PVT__value.atWrite(0U) 
        = value;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 708)->__PVT__path 
        = path;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 709)->__PVT__map 
        = map;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 710)->__PVT__fname 
        = fname;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 711)->__PVT__lineno 
        = lineno;
    this->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, kind, (IData)(be));
    predict__Vfuncrtn = ((1U == VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 713)
                          ->__PVT__status) ? 0U : 1U);
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_predict(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> rw, IData/*31:0*/ kind, CData/*7:0*/ be) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_predict\n"); );
    // Locals
    QData/*63:0*/ __Vfunc_XpredictX__111__Vfuncout;
    __Vfunc_XpredictX__111__Vfuncout = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_first__112__Vfuncout;
    QData/*63:0*/ __Vtask_post_predict__113__value;
    __Vtask_post_predict__113__value = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_next__114__Vfuncout;
    std::string __Vfunc_get_access__116__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_first__117__Vfuncout;
    QData/*63:0*/ __Vtask_post_predict__118__value;
    __Vtask_post_predict__118__value = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_next__119__Vfuncout;
    CData/*0:0*/ __Vtask_is_busy__120__Vfuncout;
    __Vtask_is_busy__120__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__121__Vfuncout;
    __Vfunc_uvm_report_enabled__121__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__121__verbosity;
    __Vfunc_uvm_report_enabled__121__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__121__severity;
    __Vfunc_uvm_report_enabled__121__severity = 0;
    std::string __Vfunc_uvm_report_enabled__121__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__122__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__123__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__124__Vfuncout;
    __Vtask_uvm_report_enabled__124__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__125__id;
    std::string __Vtask_uvm_report_warning__125__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__125__verbosity;
    __Vtask_uvm_report_warning__125__verbosity = 0;
    std::string __Vtask_uvm_report_warning__125__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__125__line;
    __Vtask_uvm_report_warning__125__line = 0;
    std::string __Vtask_uvm_report_warning__125__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__125__report_enabled_checked;
    __Vtask_uvm_report_warning__125__report_enabled_checked = 0;
    std::string __Vfunc_get_name__126__Vfuncout;
    std::string __Vtask_get_full_name__127__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__128__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__129__Vfuncout;
    // Body
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callback_iter__pi101> unnamedblk271__DOT__cbs;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk271__DOT__unnamedblk272__DOT__cb;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callback_iter__pi101> unnamedblk273__DOT__cbs;
    std::string unnamedblk273__DOT__unnamedblk274__DOT__acc;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk273__DOT__unnamedblk275__DOT__cb;
    QData/*63:0*/ field_val;
    field_val = 0;
    {
        field_val = (VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 723)
                     ->__PVT__value.at(0U) & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                                              - 1ULL));
        if ((1U != VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 725)
             ->__PVT__status)) {
            VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 726)->__PVT__status = 0U;
        }
        if ((1U & (~ (IData)(be)))) {
            goto __Vlabel0;
        }
        this->__PVT__m_fname = VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 732)
            ->__PVT__fname;
        this->__PVT__m_lineno = VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 733)
            ->__PVT__lineno;
        if ((2U == kind)) {
            unnamedblk271__DOT__cbs = VL_NEW(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callback_iter__pi101, vlSymsp, 
                                             VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field>{this});
            if (((0U == VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 741)
                  ->__PVT__path) || (2U == VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 741)
                                     ->__PVT__path))) {
                this->__VnoInFunc_XpredictX(vlProcess, vlSymsp, this->__PVT__m_mirrored, field_val, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 742)
                                            ->__PVT__map, __Vfunc_XpredictX__111__Vfuncout);
                field_val = __Vfunc_XpredictX__111__Vfuncout;
            }
            this->__PVT__m_written = 1U;
            VL_NULL_CHECK(unnamedblk271__DOT__cbs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 746)->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__112__Vfuncout);
            unnamedblk271__DOT__unnamedblk272__DOT__cb 
                = __Vtask_first__112__Vfuncout;
            while ((VlNull{} != unnamedblk271__DOT__unnamedblk272__DOT__cb)) {
                __Vtask_post_predict__113__value = field_val;
                VL_NULL_CHECK(unnamedblk271__DOT__unnamedblk272__DOT__cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 747)->__VnoInFunc_post_predict(vlSymsp, 
                                                                                VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field>{this}, this->__PVT__m_mirrored, __Vtask_post_predict__113__value, 2U, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 748)
                                                                                ->__PVT__path, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 748)
                                                                                ->__PVT__map);
                field_val = __Vtask_post_predict__113__value;
                VL_NULL_CHECK(unnamedblk271__DOT__cbs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 746)->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__114__Vfuncout);
                unnamedblk271__DOT__unnamedblk272__DOT__cb 
                    = __Vtask_next__114__Vfuncout;
            }
            field_val = (field_val & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                                      - 1ULL));
        } else if ((1U == kind)) {
            unnamedblk273__DOT__cbs = VL_NEW(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callback_iter__pi101, vlSymsp, 
                                             VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field>{this});
            if (((0U == VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 758)
                  ->__PVT__path) || (2U == VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 758)
                                     ->__PVT__path))) {
                this->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 760)
                                             ->__PVT__map, __Vfunc_get_access__116__Vfuncout);
                unnamedblk273__DOT__unnamedblk274__DOT__acc 
                    = __Vfunc_get_access__116__Vfuncout;
                if (((((("RC"s == unnamedblk273__DOT__unnamedblk274__DOT__acc) 
                        | ("WRC"s == unnamedblk273__DOT__unnamedblk274__DOT__acc)) 
                       | ("WSRC"s == unnamedblk273__DOT__unnamedblk274__DOT__acc)) 
                      | ("W1SRC"s == unnamedblk273__DOT__unnamedblk274__DOT__acc)) 
                     | ("W0SRC"s == unnamedblk273__DOT__unnamedblk274__DOT__acc))) {
                    field_val = 0ULL;
                } else if (((((("RS"s == unnamedblk273__DOT__unnamedblk274__DOT__acc) 
                               | ("WRS"s == unnamedblk273__DOT__unnamedblk274__DOT__acc)) 
                              | ("WCRS"s == unnamedblk273__DOT__unnamedblk274__DOT__acc)) 
                             | ("W1CRS"s == unnamedblk273__DOT__unnamedblk274__DOT__acc)) 
                            | ("W0CRS"s == unnamedblk273__DOT__unnamedblk274__DOT__acc))) {
                    field_val = (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                                 - 1ULL);
                } else if (((((("WO"s == unnamedblk273__DOT__unnamedblk274__DOT__acc) 
                               | ("WOC"s == unnamedblk273__DOT__unnamedblk274__DOT__acc)) 
                              | ("WOS"s == unnamedblk273__DOT__unnamedblk274__DOT__acc)) 
                             | ("WO1"s == unnamedblk273__DOT__unnamedblk274__DOT__acc)) 
                            | ("NOACCESS"s == unnamedblk273__DOT__unnamedblk274__DOT__acc))) {
                    goto __Vlabel0;
                }
            }
            VL_NULL_CHECK(unnamedblk273__DOT__cbs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 784)->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__117__Vfuncout);
            unnamedblk273__DOT__unnamedblk275__DOT__cb 
                = __Vtask_first__117__Vfuncout;
            while ((VlNull{} != unnamedblk273__DOT__unnamedblk275__DOT__cb)) {
                __Vtask_post_predict__118__value = field_val;
                VL_NULL_CHECK(unnamedblk273__DOT__unnamedblk275__DOT__cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 785)->__VnoInFunc_post_predict(vlSymsp, 
                                                                                VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field>{this}, this->__PVT__m_mirrored, __Vtask_post_predict__118__value, 1U, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 786)
                                                                                ->__PVT__path, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 786)
                                                                                ->__PVT__map);
                field_val = __Vtask_post_predict__118__value;
                VL_NULL_CHECK(unnamedblk273__DOT__cbs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 784)->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__119__Vfuncout);
                unnamedblk273__DOT__unnamedblk275__DOT__cb 
                    = __Vtask_next__119__Vfuncout;
            }
            field_val = (field_val & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                                      - 1ULL));
        } else if ((0U == kind)) {
            if (([&]() {
                        VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 794)
                 ->__VnoInFunc_is_busy(vlSymsp, __Vtask_is_busy__120__Vfuncout);
                    }(), (IData)(__Vtask_is_busy__120__Vfuncout))) {
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__121__id = "RegModel"s;
                                __Vfunc_uvm_report_enabled__121__severity = 1U;
                                __Vfunc_uvm_report_enabled__121__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__122__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__122__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__123__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__123__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__121__verbosity, (IData)(__Vfunc_uvm_report_enabled__121__severity), __Vfunc_uvm_report_enabled__121__id, __Vtask_uvm_report_enabled__124__Vfuncout);
                                __Vfunc_uvm_report_enabled__121__Vfuncout 
                                    = __Vtask_uvm_report_enabled__124__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__121__Vfuncout))) {
                    __Vtask_uvm_report_warning__125__report_enabled_checked = 1U;
                    __Vtask_uvm_report_warning__125__context_name = ""s;
                    __Vtask_uvm_report_warning__125__line = 0x0000031dU;
                    __Vtask_uvm_report_warning__125__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
                    __Vtask_uvm_report_warning__125__verbosity = 0U;
                    __Vtask_uvm_report_warning__125__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Trying to predict value of field '"s, 
                                                                                ([&]() {
                                                this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__126__Vfuncout);
                                            }(), __Vfunc_get_name__126__Vfuncout)), "' while register '"s), 
                                                                           ([&]() {
                                        VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 797)
                                                                            ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__127__Vfuncout);
                                    }(), __Vtask_get_full_name__127__Vfuncout)), "' is being accessed"s));
                    __Vtask_uvm_report_warning__125__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__128__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__128__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__129__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__129__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__125__id, __Vtask_uvm_report_warning__125__message, __Vtask_uvm_report_warning__125__verbosity, __Vtask_uvm_report_warning__125__filename, __Vtask_uvm_report_warning__125__line, __Vtask_uvm_report_warning__125__context_name, (IData)(__Vtask_uvm_report_warning__125__report_enabled_checked));
                }
                VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 798)->__PVT__status = 1U;
            }
        }
        this->__PVT__m_mirrored = field_val;
        this->__PVT__m_desired = field_val;
        this->__PVT__value = field_val;
        __Vlabel0: ;
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_XupdateX(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ &XupdateX__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_XupdateX\n"); );
    // Body
    XupdateX__Vfuncrtn = ((((((((("RO"s == this->__PVT__m_access) 
                                 | ("RW"s == this->__PVT__m_access)) 
                                | ("RC"s == this->__PVT__m_access)) 
                               | ("RS"s == this->__PVT__m_access)) 
                              | ("WRC"s == this->__PVT__m_access)) 
                             | ("WRS"s == this->__PVT__m_access)) 
                            | ("WC"s == this->__PVT__m_access)) 
                           | ("WS"s == this->__PVT__m_access))
                           ? this->__PVT__m_desired
                           : ((((((((("WSRC"s == this->__PVT__m_access) 
                                     | ("WCRS"s == this->__PVT__m_access)) 
                                    | ("W1C"s == this->__PVT__m_access)) 
                                   | ("W1S"s == this->__PVT__m_access)) 
                                  | ("W1T"s == this->__PVT__m_access)) 
                                 | ("W0C"s == this->__PVT__m_access)) 
                                | ("W0S"s == this->__PVT__m_access)) 
                               | ("W0T"s == this->__PVT__m_access))
                               ? (("WSRC"s == this->__PVT__m_access)
                                   ? this->__PVT__m_desired
                                   : (("WCRS"s == this->__PVT__m_access)
                                       ? this->__PVT__m_desired
                                       : (("W1C"s == this->__PVT__m_access)
                                           ? (~ this->__PVT__m_desired)
                                           : (("W1S"s 
                                               == this->__PVT__m_access)
                                               ? this->__PVT__m_desired
                                               : (("W1T"s 
                                                   == this->__PVT__m_access)
                                                   ? 
                                                  (this->__PVT__m_desired 
                                                   ^ this->__PVT__m_mirrored)
                                                   : 
                                                  (("W0C"s 
                                                    == this->__PVT__m_access)
                                                    ? this->__PVT__m_desired
                                                    : 
                                                   (("W0S"s 
                                                     == this->__PVT__m_access)
                                                     ? 
                                                    (~ this->__PVT__m_desired)
                                                     : 
                                                    (~ 
                                                     (this->__PVT__m_desired 
                                                      ^ this->__PVT__m_mirrored)))))))))
                               : ((((((((("W1SRC"s 
                                          == this->__PVT__m_access) 
                                         | ("W1CRS"s 
                                            == this->__PVT__m_access)) 
                                        | ("W0SRC"s 
                                           == this->__PVT__m_access)) 
                                       | ("W0CRS"s 
                                          == this->__PVT__m_access)) 
                                      | ("WO"s == this->__PVT__m_access)) 
                                     | ("WOC"s == this->__PVT__m_access)) 
                                    | ("WOS"s == this->__PVT__m_access)) 
                                   | ("W1"s == this->__PVT__m_access))
                                   ? (("W1SRC"s == this->__PVT__m_access)
                                       ? this->__PVT__m_desired
                                       : (("W1CRS"s 
                                           == this->__PVT__m_access)
                                           ? (~ this->__PVT__m_desired)
                                           : (("W0SRC"s 
                                               == this->__PVT__m_access)
                                               ? (~ this->__PVT__m_desired)
                                               : this->__PVT__m_desired)))
                                   : this->__PVT__m_desired)));
    XupdateX__Vfuncrtn = (XupdateX__Vfuncrtn & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                                                - 1ULL));
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_set(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ value, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_set\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__131__Vfuncout;
    __Vfunc_uvm_report_enabled__131__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__131__verbosity;
    __Vfunc_uvm_report_enabled__131__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__131__severity;
    __Vfunc_uvm_report_enabled__131__severity = 0;
    std::string __Vfunc_uvm_report_enabled__131__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__132__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__133__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__134__Vfuncout;
    __Vtask_uvm_report_enabled__134__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__135__id;
    std::string __Vtask_uvm_report_warning__135__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__135__verbosity;
    __Vtask_uvm_report_warning__135__verbosity = 0;
    std::string __Vtask_uvm_report_warning__135__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__135__line;
    __Vtask_uvm_report_warning__135__line = 0;
    std::string __Vtask_uvm_report_warning__135__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__135__report_enabled_checked;
    __Vtask_uvm_report_warning__135__report_enabled_checked = 0;
    std::string __Vfunc_get_name__136__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__137__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__138__Vfuncout;
    CData/*0:0*/ __Vtask_is_busy__140__Vfuncout;
    __Vtask_is_busy__140__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__141__Vfuncout;
    __Vfunc_uvm_report_enabled__141__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__141__verbosity;
    __Vfunc_uvm_report_enabled__141__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__141__severity;
    __Vfunc_uvm_report_enabled__141__severity = 0;
    std::string __Vfunc_uvm_report_enabled__141__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__142__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__143__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__144__Vfuncout;
    __Vtask_uvm_report_enabled__144__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__145__id;
    std::string __Vtask_uvm_report_warning__145__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__145__verbosity;
    __Vtask_uvm_report_warning__145__verbosity = 0;
    std::string __Vtask_uvm_report_warning__145__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__145__line;
    __Vtask_uvm_report_warning__145__line = 0;
    std::string __Vtask_uvm_report_warning__145__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__145__report_enabled_checked;
    __Vtask_uvm_report_warning__145__report_enabled_checked = 0;
    std::string __Vfunc_get_name__146__Vfuncout;
    std::string __Vtask_get_full_name__147__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__148__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__149__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    // Body
    QData/*63:0*/ mask;
    mask = 0;
    mask = (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
            - 1ULL);
    this->__PVT__m_fname = fname;
    this->__PVT__m_lineno = lineno;
    if ((0U != VL_SHIFTR_QQI(64,64,32, value, this->__PVT__m_size))) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__131__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__131__severity = 1U;
                        __Vfunc_uvm_report_enabled__131__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__132__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__132__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__133__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__133__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__131__verbosity, (IData)(__Vfunc_uvm_report_enabled__131__severity), __Vfunc_uvm_report_enabled__131__id, __Vtask_uvm_report_enabled__134__Vfuncout);
                        __Vfunc_uvm_report_enabled__131__Vfuncout 
                            = __Vtask_uvm_report_enabled__134__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__131__Vfuncout))) {
            __Vtask_uvm_report_warning__135__report_enabled_checked = 1U;
            __Vtask_uvm_report_warning__135__context_name = ""s;
            __Vtask_uvm_report_warning__135__line = 0x0000035fU;
            __Vtask_uvm_report_warning__135__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
            __Vtask_uvm_report_warning__135__verbosity = 0U;
            __Vtemp_1 = ([&]() {
                    this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__136__Vfuncout);
                }(), __Vfunc_get_name__136__Vfuncout);
            __Vtask_uvm_report_warning__135__message 
                = VL_SFORMATF_N_NX("Specified value (0x%x) greater than field \"%@\" size (%0# bits)",0,
                                   64,value,-1,&(__Vtemp_1),
                                   32,this->__PVT__m_size) ;
            __Vtask_uvm_report_warning__135__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__137__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__137__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__138__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__138__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__135__id, __Vtask_uvm_report_warning__135__message, __Vtask_uvm_report_warning__135__verbosity, __Vtask_uvm_report_warning__135__filename, __Vtask_uvm_report_warning__135__line, __Vtask_uvm_report_warning__135__context_name, (IData)(__Vtask_uvm_report_warning__135__report_enabled_checked));
        }
        value = (value & mask);
    }
    if (([&]() {
                VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 867)
         ->__VnoInFunc_is_busy(vlSymsp, __Vtask_is_busy__140__Vfuncout);
            }(), (IData)(__Vtask_is_busy__140__Vfuncout))) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__141__id = "UVM/FLD/SET/BSY"s;
                        __Vfunc_uvm_report_enabled__141__severity = 1U;
                        __Vfunc_uvm_report_enabled__141__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__142__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__142__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__143__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__143__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__141__verbosity, (IData)(__Vfunc_uvm_report_enabled__141__severity), __Vfunc_uvm_report_enabled__141__id, __Vtask_uvm_report_enabled__144__Vfuncout);
                        __Vfunc_uvm_report_enabled__141__Vfuncout 
                            = __Vtask_uvm_report_enabled__144__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__141__Vfuncout))) {
            __Vtask_uvm_report_warning__145__report_enabled_checked = 1U;
            __Vtask_uvm_report_warning__145__context_name = ""s;
            __Vtask_uvm_report_warning__145__line = 0x00000366U;
            __Vtask_uvm_report_warning__145__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
            __Vtask_uvm_report_warning__145__verbosity = 0U;
            __Vtemp_2 = ([&]() {
                    this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__146__Vfuncout);
                }(), __Vfunc_get_name__146__Vfuncout);
            __Vtemp_3 = ([&]() {
                    VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 870)
                         ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__147__Vfuncout);
                }(), __Vtask_get_full_name__147__Vfuncout);
            __Vtask_uvm_report_warning__145__message 
                = VL_SFORMATF_N_NX("Setting the value of field \"%@\" while containing register \"%@\" is being accessed may result in loss of desired field value. A race condition between threads concurrently accessing the register model is the likely cause of the problem.",0,
                                   -1,&(__Vtemp_2),
                                   -1,&(__Vtemp_3)) ;
            __Vtask_uvm_report_warning__145__id = "UVM/FLD/SET/BSY"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__148__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__148__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__149__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__149__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__145__id, __Vtask_uvm_report_warning__145__message, __Vtask_uvm_report_warning__145__verbosity, __Vtask_uvm_report_warning__145__filename, __Vtask_uvm_report_warning__145__line, __Vtask_uvm_report_warning__145__context_name, (IData)(__Vtask_uvm_report_warning__145__report_enabled_checked));
        }
    }
    if ((((((((("RO"s == this->__PVT__m_access) | ("RW"s 
                                                   == this->__PVT__m_access)) 
              | ("RC"s == this->__PVT__m_access)) | 
             ("RS"s == this->__PVT__m_access)) | ("WC"s 
                                                  == this->__PVT__m_access)) 
           | ("WS"s == this->__PVT__m_access)) | ("WRC"s 
                                                  == this->__PVT__m_access)) 
         | ("WRS"s == this->__PVT__m_access))) {
        if ((1U & (~ ("RO"s == this->__PVT__m_access)))) {
            if (("RW"s == this->__PVT__m_access)) {
                this->__PVT__m_desired = value;
            } else if ((1U & (~ ("RC"s == this->__PVT__m_access)))) {
                if ((1U & (~ ("RS"s == this->__PVT__m_access)))) {
                    this->__PVT__m_desired = (("WC"s 
                                               == this->__PVT__m_access)
                                               ? 0ULL
                                               : (("WS"s 
                                                   == this->__PVT__m_access)
                                                   ? mask
                                                   : value));
                }
            }
        }
    } else {
        this->__PVT__m_desired = ((((((((("WSRC"s == this->__PVT__m_access) 
                                         | ("WCRS"s 
                                            == this->__PVT__m_access)) 
                                        | ("W1C"s == this->__PVT__m_access)) 
                                       | ("W1S"s == this->__PVT__m_access)) 
                                      | ("W1T"s == this->__PVT__m_access)) 
                                     | ("W0C"s == this->__PVT__m_access)) 
                                    | ("W0S"s == this->__PVT__m_access)) 
                                   | ("W0T"s == this->__PVT__m_access))
                                   ? (("WSRC"s == this->__PVT__m_access)
                                       ? mask : (("WCRS"s 
                                                  == this->__PVT__m_access)
                                                  ? 0ULL
                                                  : 
                                                 (("W1C"s 
                                                   == this->__PVT__m_access)
                                                   ? 
                                                  (this->__PVT__m_desired 
                                                   & (~ value))
                                                   : 
                                                  (("W1S"s 
                                                    == this->__PVT__m_access)
                                                    ? 
                                                   (this->__PVT__m_desired 
                                                    | value)
                                                    : 
                                                   (("W1T"s 
                                                     == this->__PVT__m_access)
                                                     ? 
                                                    (this->__PVT__m_desired 
                                                     ^ value)
                                                     : 
                                                    (("W0C"s 
                                                      == this->__PVT__m_access)
                                                      ? 
                                                     (this->__PVT__m_desired 
                                                      & value)
                                                      : 
                                                     (("W0S"s 
                                                       == this->__PVT__m_access)
                                                       ? 
                                                      (this->__PVT__m_desired 
                                                       | ((~ value) 
                                                          & mask))
                                                       : 
                                                      (this->__PVT__m_desired 
                                                       ^ 
                                                       ((~ value) 
                                                        & mask)))))))))
                                   : ((((((((("W1SRC"s 
                                              == this->__PVT__m_access) 
                                             | ("W1CRS"s 
                                                == this->__PVT__m_access)) 
                                            | ("W0SRC"s 
                                               == this->__PVT__m_access)) 
                                           | ("W0CRS"s 
                                              == this->__PVT__m_access)) 
                                          | ("WO"s 
                                             == this->__PVT__m_access)) 
                                         | ("WOC"s 
                                            == this->__PVT__m_access)) 
                                        | ("WOS"s == this->__PVT__m_access)) 
                                       | ("W1"s == this->__PVT__m_access))
                                       ? (("W1SRC"s 
                                           == this->__PVT__m_access)
                                           ? (this->__PVT__m_desired 
                                              | value)
                                           : (("W1CRS"s 
                                               == this->__PVT__m_access)
                                               ? (this->__PVT__m_desired 
                                                  & (~ value))
                                               : (("W0SRC"s 
                                                   == this->__PVT__m_access)
                                                   ? 
                                                  (this->__PVT__m_desired 
                                                   | ((~ value) 
                                                      & mask))
                                                   : 
                                                  (("W0CRS"s 
                                                    == this->__PVT__m_access)
                                                    ? 
                                                   (this->__PVT__m_desired 
                                                    & value)
                                                    : 
                                                   (("WO"s 
                                                     == this->__PVT__m_access)
                                                     ? value
                                                     : 
                                                    (("WOC"s 
                                                      == this->__PVT__m_access)
                                                      ? 0ULL
                                                      : 
                                                     (("WOS"s 
                                                       == this->__PVT__m_access)
                                                       ? mask
                                                       : 
                                                      ((IData)(this->__PVT__m_written)
                                                        ? this->__PVT__m_desired
                                                        : value))))))))
                                       : (("WO1"s == this->__PVT__m_access)
                                           ? ((IData)(this->__PVT__m_written)
                                               ? this->__PVT__m_desired
                                               : value)
                                           : value)));
    }
    this->__PVT__value = this->__PVT__m_desired;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string fname, IData/*31:0*/ lineno, QData/*63:0*/ &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get\n"); );
    // Body
    this->__PVT__m_fname = fname;
    this->__PVT__m_lineno = lineno;
    get__Vfuncrtn = this->__PVT__m_desired;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_mirrored_value(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string fname, IData/*31:0*/ lineno, QData/*63:0*/ &get_mirrored_value__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_mirrored_value\n"); );
    // Body
    this->__PVT__m_fname = fname;
    this->__PVT__m_lineno = lineno;
    get_mirrored_value__Vfuncrtn = this->__PVT__m_mirrored;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_reset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_reset\n"); );
    // Body
    {
        if ((! this->__PVT__m_reset.exists(kind))) {
            goto __Vlabel0;
        }
        this->__PVT__m_mirrored = this->__PVT__m_reset
            .at(kind);
        this->__PVT__m_desired = this->__PVT__m_mirrored;
        this->__PVT__value = this->__PVT__m_mirrored;
        if (("HARD"s == kind)) {
            this->__PVT__m_written = 0U;
        }
        __Vlabel0: ;
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_has_reset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ __SYM__delete, CData/*0:0*/ &has_reset__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_has_reset\n"); );
    // Body
    {
        if ((! this->__PVT__m_reset.exists(kind))) {
            has_reset__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if (__SYM__delete) {
            this->__PVT__m_reset.erase(kind);
        }
        has_reset__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_reset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string kind, QData/*63:0*/ &get_reset__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_reset\n"); );
    // Body
    {
        if ((! this->__PVT__m_reset.exists(kind))) {
            get_reset__Vfuncrtn = this->__PVT__m_desired;
            goto __Vlabel0;
        }
        get_reset__Vfuncrtn = this->__PVT__m_reset.at(kind);
        __Vlabel0: ;
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_set_reset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ value, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_set_reset\n"); );
    // Body
    this->__PVT__m_reset.at(kind) = (value & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                                              - 1ULL));
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_needs_update(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &needs_update__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_needs_update\n"); );
    // Body
    needs_update__Vfuncrtn = ((this->__PVT__m_mirrored 
                               != this->__PVT__m_desired) 
                              | (IData)(this->__PVT__m_volatile));
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_Xcheck_accessX(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map_info> &map_info, CData/*0:0*/ &Xcheck_accessX__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_Xcheck_accessX\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_block> __Vtask_get_block__151__Vfuncout;
    IData/*31:0*/ __Vtask_get_default_door__152__Vfuncout;
    __Vtask_get_default_door__152__Vfuncout = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_backdoor> __Vtask_get_backdoor__153__Vfuncout;
    CData/*0:0*/ __Vtask_has_hdl_path__154__Vfuncout;
    __Vtask_has_hdl_path__154__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__155__Vfuncout;
    __Vfunc_uvm_report_enabled__155__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__155__verbosity;
    __Vfunc_uvm_report_enabled__155__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__155__severity;
    __Vfunc_uvm_report_enabled__155__severity = 0;
    std::string __Vfunc_uvm_report_enabled__155__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__156__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__157__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__158__Vfuncout;
    __Vtask_uvm_report_enabled__158__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__159__id;
    std::string __Vtask_uvm_report_warning__159__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__159__verbosity;
    __Vtask_uvm_report_warning__159__verbosity = 0;
    std::string __Vtask_uvm_report_warning__159__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__159__line;
    __Vtask_uvm_report_warning__159__line = 0;
    std::string __Vtask_uvm_report_warning__159__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__159__report_enabled_checked;
    __Vtask_uvm_report_warning__159__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__160__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__161__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__162__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> __Vfunc_backdoor__164__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> __Vtask_get_local_map__165__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__166__Vfuncout;
    __Vfunc_uvm_report_enabled__166__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__166__verbosity;
    __Vfunc_uvm_report_enabled__166__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__166__severity;
    __Vfunc_uvm_report_enabled__166__severity = 0;
    std::string __Vfunc_uvm_report_enabled__166__id;
    std::string __Vfunc_get_type_name__167__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__168__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__169__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__170__Vfuncout;
    __Vtask_uvm_report_enabled__170__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__171__id;
    std::string __Vtask_uvm_report_error__171__message;
    IData/*31:0*/ __Vtask_uvm_report_error__171__verbosity;
    __Vtask_uvm_report_error__171__verbosity = 0;
    std::string __Vtask_uvm_report_error__171__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__171__line;
    __Vtask_uvm_report_error__171__line = 0;
    std::string __Vtask_uvm_report_error__171__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__171__report_enabled_checked;
    __Vtask_uvm_report_error__171__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__172__Vfuncout;
    std::string __Vfunc_get_type_name__173__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__174__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__175__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map_info> __Vtask_get_reg_map_info__177__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__178__Vfuncout;
    __Vfunc_uvm_report_enabled__178__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__178__verbosity;
    __Vfunc_uvm_report_enabled__178__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__178__severity;
    __Vfunc_uvm_report_enabled__178__severity = 0;
    std::string __Vfunc_uvm_report_enabled__178__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__179__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__180__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__181__Vfuncout;
    __Vtask_uvm_report_enabled__181__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__182__id;
    std::string __Vtask_uvm_report_error__182__message;
    IData/*31:0*/ __Vtask_uvm_report_error__182__verbosity;
    __Vtask_uvm_report_error__182__verbosity = 0;
    std::string __Vtask_uvm_report_error__182__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__182__line;
    __Vtask_uvm_report_error__182__line = 0;
    std::string __Vtask_uvm_report_error__182__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__182__report_enabled_checked;
    __Vtask_uvm_report_error__182__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__183__Vfuncout;
    std::string __Vtask_get_full_name__184__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__185__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__186__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_block> unnamedblk276__DOT__blk;
    {
        if ((3U == VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 992)
             ->__PVT__path)) {
            VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 993)->__VnoInFunc_get_block(vlSymsp, __Vtask_get_block__151__Vfuncout);
            unnamedblk276__DOT__blk = __Vtask_get_block__151__Vfuncout;
            VL_NULL_CHECK(unnamedblk276__DOT__blk, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 994)->__VnoInFunc_get_default_door(vlSymsp, __Vtask_get_default_door__152__Vfuncout);
            VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 994)->__PVT__path 
                = __Vtask_get_default_door__152__Vfuncout;
        }
        if ((1U == VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 997)
             ->__PVT__path)) {
            if (((VlNull{} == ([&]() {
                                VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 998)
                               ->__VnoInFunc_get_backdoor(vlSymsp, 1U, __Vtask_get_backdoor__153__Vfuncout);
                            }(), __Vtask_get_backdoor__153__Vfuncout)) 
                 && (1U & (~ ([&]() {
                                    VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 998)
                              ->__VnoInFunc_has_hdl_path(vlSymsp, ""s, __Vtask_has_hdl_path__154__Vfuncout);
                                }(), (IData)(__Vtask_has_hdl_path__154__Vfuncout)))))) {
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__155__id = "RegModel"s;
                                __Vfunc_uvm_report_enabled__155__severity = 1U;
                                __Vfunc_uvm_report_enabled__155__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__156__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__156__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__157__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__157__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__155__verbosity, (IData)(__Vfunc_uvm_report_enabled__155__severity), __Vfunc_uvm_report_enabled__155__id, __Vtask_uvm_report_enabled__158__Vfuncout);
                                __Vfunc_uvm_report_enabled__155__Vfuncout 
                                    = __Vtask_uvm_report_enabled__158__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__155__Vfuncout))) {
                    __Vtask_uvm_report_warning__159__report_enabled_checked = 1U;
                    __Vtask_uvm_report_warning__159__context_name = ""s;
                    __Vtask_uvm_report_warning__159__line = 0x000003e9U;
                    __Vtask_uvm_report_warning__159__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
                    __Vtask_uvm_report_warning__159__verbosity = 0U;
                    __Vtask_uvm_report_warning__159__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN("No backdoor access available for field '"s, 
                                                                           ([&]() {
                                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__160__Vfuncout);
                                    }(), __Vfunc_get_full_name__160__Vfuncout)), "' . Using frontdoor instead."s));
                    __Vtask_uvm_report_warning__159__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__161__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__161__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__162__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__162__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__159__id, __Vtask_uvm_report_warning__159__message, __Vtask_uvm_report_warning__159__verbosity, __Vtask_uvm_report_warning__159__filename, __Vtask_uvm_report_warning__159__line, __Vtask_uvm_report_warning__159__context_name, (IData)(__Vtask_uvm_report_warning__159__report_enabled_checked));
                }
                VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1002)->__PVT__path = 0U;
            } else {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_map__Vclpkg.__VnoInFunc_backdoor(vlProcess, vlSymsp, __Vfunc_backdoor__164__Vfuncout);
                VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1005)->__PVT__map 
                    = __Vfunc_backdoor__164__Vfuncout;
            }
        }
        if ((1U != VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1008)
             ->__PVT__path)) {
            VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1010)->__VnoInFunc_get_local_map(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1010)
                                                                                ->__PVT__map, __Vtask_get_local_map__165__Vfuncout);
            VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1010)->__PVT__local_map 
                = __Vtask_get_local_map__165__Vfuncout;
            if ((VlNull{} == VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1012)
                 ->__PVT__local_map)) {
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__166__id 
                                    = VL_CVT_PACK_STR_NN(
                                                         ([&]() {
                                            this->__VnoInFunc_get_type_name(vlSymsp, __Vfunc_get_type_name__167__Vfuncout);
                                        }(), __Vfunc_get_type_name__167__Vfuncout));
                                __Vfunc_uvm_report_enabled__166__severity = 2U;
                                __Vfunc_uvm_report_enabled__166__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__168__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__168__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__169__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__169__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__166__verbosity, (IData)(__Vfunc_uvm_report_enabled__166__severity), __Vfunc_uvm_report_enabled__166__id, __Vtask_uvm_report_enabled__170__Vfuncout);
                                __Vfunc_uvm_report_enabled__166__Vfuncout 
                                    = __Vtask_uvm_report_enabled__170__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__166__Vfuncout))) {
                    __Vtask_uvm_report_error__171__report_enabled_checked = 1U;
                    __Vtask_uvm_report_error__171__context_name = ""s;
                    __Vtask_uvm_report_error__171__line = 0x000003f7U;
                    __Vtask_uvm_report_error__171__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
                    __Vtask_uvm_report_error__171__verbosity = 0U;
                    __Vtask_uvm_report_error__171__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN("No transactor available to physically access memory from map '"s, 
                                                                           ([&]() {
                                        VL_NULL_CHECK(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1015)
                                                      ->__PVT__map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1015)
                                                                            ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__172__Vfuncout);
                                    }(), __Vtask_get_full_name__172__Vfuncout)), "'"s));
                    __Vtask_uvm_report_error__171__id 
                        = VL_CVT_PACK_STR_NN(([&]() {
                                this->__VnoInFunc_get_type_name(vlSymsp, __Vfunc_get_type_name__173__Vfuncout);
                            }(), __Vfunc_get_type_name__173__Vfuncout));
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__174__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__174__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__175__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__175__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__171__id, __Vtask_uvm_report_error__171__message, __Vtask_uvm_report_error__171__verbosity, __Vtask_uvm_report_error__171__filename, __Vtask_uvm_report_error__171__line, __Vtask_uvm_report_error__171__context_name, (IData)(__Vtask_uvm_report_error__171__report_enabled_checked));
                }
                VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1016)->__PVT__status = 1U;
                Xcheck_accessX__Vfuncrtn = 0U;
                goto __Vlabel0;
            }
            VL_NULL_CHECK(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1020)
                          ->__PVT__local_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1020)->__VnoInFunc_get_reg_map_info(vlProcess, vlSymsp, this->__PVT__m_parent, 1U, __Vtask_get_reg_map_info__177__Vfuncout);
            map_info = __Vtask_get_reg_map_info__177__Vfuncout;
            if (((VlNull{} == VL_NULL_CHECK(map_info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1022)
                  ->__PVT__frontdoor) && VL_NULL_CHECK(map_info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1022)
                 ->__PVT__unmapped)) {
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__178__id = "RegModel"s;
                                __Vfunc_uvm_report_enabled__178__severity = 2U;
                                __Vfunc_uvm_report_enabled__178__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__179__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__179__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__180__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__180__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__178__verbosity, (IData)(__Vfunc_uvm_report_enabled__178__severity), __Vfunc_uvm_report_enabled__178__id, __Vtask_uvm_report_enabled__181__Vfuncout);
                                __Vfunc_uvm_report_enabled__178__Vfuncout 
                                    = __Vtask_uvm_report_enabled__181__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__178__Vfuncout))) {
                    __Vtask_uvm_report_error__182__report_enabled_checked = 1U;
                    __Vtask_uvm_report_error__182__context_name = ""s;
                    __Vtask_uvm_report_error__182__line = 0x00000402U;
                    __Vtask_uvm_report_error__182__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
                    __Vtask_uvm_report_error__182__verbosity = 0U;
                    __Vtask_uvm_report_error__182__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Field '"s, 
                                                                                ([&]() {
                                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__183__Vfuncout);
                                            }(), __Vfunc_get_full_name__183__Vfuncout)), "' in register that is unmapped in map '"s), 
                                                                           ([&]() {
                                        VL_NULL_CHECK(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1026)
                                                      ->__PVT__map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1026)
                                                                            ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__184__Vfuncout);
                                    }(), __Vtask_get_full_name__184__Vfuncout)), "' and does not have a user-defined frontdoor"s));
                    __Vtask_uvm_report_error__182__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__185__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__185__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__186__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__186__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__182__id, __Vtask_uvm_report_error__182__message, __Vtask_uvm_report_error__182__verbosity, __Vtask_uvm_report_error__182__filename, __Vtask_uvm_report_error__182__line, __Vtask_uvm_report_error__182__context_name, (IData)(__Vtask_uvm_report_error__182__report_enabled_checked));
                }
                VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1027)->__PVT__status = 1U;
                Xcheck_accessX__Vfuncrtn = 0U;
                goto __Vlabel0;
            }
            if ((VlNull{} == VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1031)
                 ->__PVT__map)) {
                VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1032)->__PVT__map 
                    = VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1032)
                    ->__PVT__local_map;
            }
        }
        Xcheck_accessX__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

VlCoroutine Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_write(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_write\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> __Vfunc_create__188__Vfuncout;
    std::string __Vfunc_get_full_name__189__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> rw;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi118__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "field_write_item"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__189__Vfuncout);
                }(), __Vfunc_get_full_name__189__Vfuncout)), __Vfunc_create__188__Vfuncout);
    rw = __Vfunc_create__188__Vfuncout;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1053)->__PVT__element 
        = VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field>{this};
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1054)->__PVT__element_kind = 1U;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1055)->__PVT__kind = 1U;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1056)->__PVT__value.atWrite(0U) 
        = value;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1057)->__PVT__path 
        = path;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1058)->__PVT__map 
        = map;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1059)->__PVT__parent 
        = parent;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1060)->__PVT__prior 
        = prior;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1061)->__PVT__extension 
        = extension;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1062)->__PVT__fname 
        = fname;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1063)->__PVT__lineno 
        = lineno;
    co_await this->__VnoInFunc_do_write(vlSymsp, rw);
    status = VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1067)
        ->__PVT__status;
}

VlCoroutine Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_write(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_write\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_Xcheck_accessX__192__Vfuncout;
    __Vfunc_Xcheck_accessX__192__Vfuncout = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map_info> __Vfunc_Xcheck_accessX__192__map_info;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__193__Vfuncout;
    __Vfunc_uvm_report_enabled__193__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__193__verbosity;
    __Vfunc_uvm_report_enabled__193__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__193__severity;
    __Vfunc_uvm_report_enabled__193__severity = 0;
    std::string __Vfunc_uvm_report_enabled__193__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__194__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__195__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__196__Vfuncout;
    __Vtask_uvm_report_enabled__196__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__197__id;
    std::string __Vtask_uvm_report_warning__197__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__197__verbosity;
    __Vtask_uvm_report_warning__197__verbosity = 0;
    std::string __Vtask_uvm_report_warning__197__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__197__line;
    __Vtask_uvm_report_warning__197__line = 0;
    std::string __Vtask_uvm_report_warning__197__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__197__report_enabled_checked;
    __Vtask_uvm_report_warning__197__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__198__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__199__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__200__Vfuncout;
    std::string __Vtask_get_access__203__Vfuncout;
    std::string __Vtask_get_access__204__Vfuncout;
    std::string __Vtask_get_access__205__Vfuncout;
    std::string __Vtask_get_access__206__Vfuncout;
    std::string __Vtask_get_access__207__Vfuncout;
    std::string __Vtask_get_access__208__Vfuncout;
    std::string __Vtask_get_access__209__Vfuncout;
    std::string __Vtask_get_access__210__Vfuncout;
    std::string __Vtask_get_access__211__Vfuncout;
    std::string __Vtask_get_access__212__Vfuncout;
    std::string __Vtask_get_access__213__Vfuncout;
    std::string __Vtask_get_access__214__Vfuncout;
    std::string __Vtask_get_access__215__Vfuncout;
    std::string __Vtask_get_access__216__Vfuncout;
    std::string __Vtask_get_access__217__Vfuncout;
    std::string __Vtask_get_access__218__Vfuncout;
    std::string __Vtask_get_access__219__Vfuncout;
    std::string __Vtask_get_access__220__Vfuncout;
    std::string __Vtask_get_access__221__Vfuncout;
    std::string __Vtask_get_access__222__Vfuncout;
    std::string __Vtask_get_access__223__Vfuncout;
    std::string __Vtask_get_access__224__Vfuncout;
    std::string __Vtask_get_access__225__Vfuncout;
    std::string __Vtask_get_access__226__Vfuncout;
    std::string __Vtask_get_access__227__Vfuncout;
    std::string __Vtask_get_access__228__Vfuncout;
    std::string __Vtask_get_access__229__Vfuncout;
    std::string __Vtask_get_access__230__Vfuncout;
    std::string __Vtask_get_access__231__Vfuncout;
    std::string __Vtask_get_access__232__Vfuncout;
    std::string __Vtask_get_access__233__Vfuncout;
    std::string __Vtask_get_access__234__Vfuncout;
    IData/*31:0*/ __Vtask_get_n_bits__235__Vfuncout;
    __Vtask_get_n_bits__235__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_lsb_pos__236__Vfuncout;
    __Vtask_get_lsb_pos__236__Vfuncout = 0;
    std::string __Vtask_get_access__237__Vfuncout;
    std::string __Vtask_get_access__238__Vfuncout;
    std::string __Vtask_get_access__239__Vfuncout;
    std::string __Vtask_get_access__240__Vfuncout;
    std::string __Vtask_get_access__241__Vfuncout;
    std::string __Vtask_get_access__242__Vfuncout;
    IData/*31:0*/ __Vtask_get_lsb_pos__243__Vfuncout;
    __Vtask_get_lsb_pos__243__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_is_indv_accessible__244__Vfuncout;
    __Vfunc_is_indv_accessible__244__Vfuncout = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> __Vtask_get_root_map__245__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_first__249__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_next__251__Vfuncout;
    CData/*0:0*/ __Vtask_get_auto_predict__255__Vfuncout;
    __Vtask_get_auto_predict__255__Vfuncout = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_first__258__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_next__260__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__263__Vfuncout;
    __Vfunc_uvm_report_enabled__263__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__263__verbosity;
    __Vfunc_uvm_report_enabled__263__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__263__severity;
    __Vfunc_uvm_report_enabled__263__severity = 0;
    std::string __Vfunc_uvm_report_enabled__263__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__264__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__265__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__266__Vfuncout;
    __Vtask_uvm_report_enabled__266__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__267__id;
    std::string __Vtask_uvm_report_warning__267__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__267__verbosity;
    __Vtask_uvm_report_warning__267__verbosity = 0;
    std::string __Vtask_uvm_report_warning__267__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__267__line;
    __Vtask_uvm_report_warning__267__line = 0;
    std::string __Vtask_uvm_report_warning__267__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__267__report_enabled_checked;
    __Vtask_uvm_report_warning__267__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__268__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__269__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__270__Vfuncout;
    std::string __Vtemp_2;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk277__DOT__i;
    unnamedblk277__DOT__i = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> unnamedblk278__DOT__system_map;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callback_iter__pi101> unnamedblk278__DOT__cbs;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk278__DOT__unnamedblk279__DOT__cb;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk278__DOT__unnamedblk280__DOT__cb;
    QData/*63:0*/ value_adjust;
    value_adjust = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map_info> map_info;
    VlQueue<VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field>> fields;
    CData/*0:0*/ bad_side_effect;
    bad_side_effect = 0;
    {
        co_await VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1081)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
        this->__PVT__m_fname = VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1082)
            ->__PVT__fname;
        this->__PVT__m_lineno = VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1083)
            ->__PVT__lineno;
        if ((1U & (~ ([&]() {
                            this->__VnoInFunc_Xcheck_accessX(vlSymsp, rw, __Vfunc_Xcheck_accessX__192__map_info, __Vfunc_Xcheck_accessX__192__Vfuncout);
                            map_info = __Vfunc_Xcheck_accessX__192__map_info;
                        }(), (IData)(__Vfunc_Xcheck_accessX__192__Vfuncout))))) {
            goto __Vlabel0;
        }
        this->__PVT__m_write_in_progress = 1U;
        if ((0U != VL_SHIFTR_QQI(64,64,32, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1090)
                                 ->__PVT__value.at(0U), this->__PVT__m_size))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__193__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__193__severity = 1U;
                            __Vfunc_uvm_report_enabled__193__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__194__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__194__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__195__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__195__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__193__verbosity, (IData)(__Vfunc_uvm_report_enabled__193__severity), __Vfunc_uvm_report_enabled__193__id, __Vtask_uvm_report_enabled__196__Vfuncout);
                            __Vfunc_uvm_report_enabled__193__Vfuncout 
                                = __Vtask_uvm_report_enabled__196__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__193__Vfuncout))) {
                __Vtask_uvm_report_warning__197__report_enabled_checked = 1U;
                __Vtask_uvm_report_warning__197__context_name = ""s;
                __Vtask_uvm_report_warning__197__line = 0x00000444U;
                __Vtask_uvm_report_warning__197__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
                __Vtask_uvm_report_warning__197__verbosity = 0U;
                __Vtask_uvm_report_warning__197__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("uvm_reg_field::write(): Value greater than field '"s, 
                                                                       ([&]() {
                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__198__Vfuncout);
                                }(), __Vfunc_get_full_name__198__Vfuncout)), "'"s));
                __Vtask_uvm_report_warning__197__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__199__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__199__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__200__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__200__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__197__id, __Vtask_uvm_report_warning__197__message, __Vtask_uvm_report_warning__197__verbosity, __Vtask_uvm_report_warning__197__filename, __Vtask_uvm_report_warning__197__line, __Vtask_uvm_report_warning__197__context_name, (IData)(__Vtask_uvm_report_warning__197__report_enabled_checked));
            }
            VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1093)->__PVT__value.atWrite(0U) 
                = (VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1093)
                   ->__PVT__value.at(0U) & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                                            - 1ULL));
        }
        VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1097)->__VnoInFunc_get_fields(vlSymsp, fields);
        unnamedblk277__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk277__DOT__i, fields.size())) {
            {
                if ((fields.at(unnamedblk277__DOT__i) 
                     == VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field>{this})) {
                    value_adjust = (value_adjust | 
                                    VL_SHIFTL_QQI(64,64,32, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1101)
                                                  ->__PVT__value.at(0U), this->__PVT__m_lsb));
                    goto __Vlabel1;
                }
                if ((1U | (((((((((("RO"s == ([&]() {
                                                                        VL_NULL_CHECK(fields.at(unnamedblk277__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                              ->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                                                       ->__PVT__local_map, __Vtask_get_access__203__Vfuncout);
                                                                    }(), __Vtask_get_access__203__Vfuncout)) 
                                   || ("RC"s == ([&]() {
                                                                        VL_NULL_CHECK(fields.at(unnamedblk277__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                                 ->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                                                          ->__PVT__local_map, __Vtask_get_access__204__Vfuncout);
                                                                    }(), __Vtask_get_access__204__Vfuncout))) 
                                  || ("RS"s == ([&]() {
                                                                    VL_NULL_CHECK(fields.at(unnamedblk277__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                                ->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                                                         ->__PVT__local_map, __Vtask_get_access__205__Vfuncout);
                                                                }(), __Vtask_get_access__205__Vfuncout))) 
                                 || ("W1C"s == ([&]() {
                                                                VL_NULL_CHECK(fields.at(unnamedblk277__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                                ->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                                                         ->__PVT__local_map, __Vtask_get_access__206__Vfuncout);
                                                            }(), __Vtask_get_access__206__Vfuncout))) 
                                || ("W1S"s == ([&]() {
                                                            VL_NULL_CHECK(fields.at(unnamedblk277__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                               ->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                                                        ->__PVT__local_map, __Vtask_get_access__207__Vfuncout);
                                                        }(), __Vtask_get_access__207__Vfuncout))) 
                               || ("W1T"s == ([&]() {
                                                        VL_NULL_CHECK(fields.at(unnamedblk277__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                              ->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                                                       ->__PVT__local_map, __Vtask_get_access__208__Vfuncout);
                                                    }(), __Vtask_get_access__208__Vfuncout))) 
                              || ("W1SRC"s == ([&]() {
                                                    VL_NULL_CHECK(fields.at(unnamedblk277__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                               ->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                                                        ->__PVT__local_map, __Vtask_get_access__209__Vfuncout);
                                                }(), __Vtask_get_access__209__Vfuncout))) 
                             || ("W1CRC"s == ([&]() {
                                                VL_NULL_CHECK(fields.at(unnamedblk277__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                              ->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                                                       ->__PVT__local_map, __Vtask_get_access__210__Vfuncout);
                                            }(), __Vtask_get_access__210__Vfuncout))) 
                            | ((((("W0C"s == ([&]() {
                                                            VL_NULL_CHECK(fields.at(unnamedblk277__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                              ->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                                                       ->__PVT__local_map, __Vtask_get_access__211__Vfuncout);
                                                        }(), __Vtask_get_access__211__Vfuncout)) 
                                  || ("W0S"s == ([&]() {
                                                            VL_NULL_CHECK(fields.at(unnamedblk277__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                                 ->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                                                          ->__PVT__local_map, __Vtask_get_access__212__Vfuncout);
                                                        }(), __Vtask_get_access__212__Vfuncout))) 
                                 || ("W0T"s == ([&]() {
                                                        VL_NULL_CHECK(fields.at(unnamedblk277__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                                ->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                                                         ->__PVT__local_map, __Vtask_get_access__213__Vfuncout);
                                                    }(), __Vtask_get_access__213__Vfuncout))) 
                                || ("W0SRC"s == ([&]() {
                                                    VL_NULL_CHECK(fields.at(unnamedblk277__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                                 ->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                                                          ->__PVT__local_map, __Vtask_get_access__214__Vfuncout);
                                                }(), __Vtask_get_access__214__Vfuncout))) 
                               || ("W0CRS"s == ([&]() {
                                                VL_NULL_CHECK(fields.at(unnamedblk277__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                                ->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                                                         ->__PVT__local_map, __Vtask_get_access__215__Vfuncout);
                                            }(), __Vtask_get_access__215__Vfuncout)))) 
                           | (((((("WC"s == ([&]() {
                                                            VL_NULL_CHECK(fields.at(unnamedblk277__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                             ->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                                                      ->__PVT__local_map, __Vtask_get_access__216__Vfuncout);
                                                        }(), __Vtask_get_access__216__Vfuncout)) 
                                  || ("WS"s == ([&]() {
                                                            VL_NULL_CHECK(fields.at(unnamedblk277__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                                ->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                                                         ->__PVT__local_map, __Vtask_get_access__217__Vfuncout);
                                                        }(), __Vtask_get_access__217__Vfuncout))) 
                                 || ("WCRS"s == ([&]() {
                                                        VL_NULL_CHECK(fields.at(unnamedblk277__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                                 ->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                                                          ->__PVT__local_map, __Vtask_get_access__218__Vfuncout);
                                                    }(), __Vtask_get_access__218__Vfuncout))) 
                                || ("WSRC"s == ([&]() {
                                                    VL_NULL_CHECK(fields.at(unnamedblk277__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                                ->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                                                         ->__PVT__local_map, __Vtask_get_access__219__Vfuncout);
                                                }(), __Vtask_get_access__219__Vfuncout))) 
                               || ("WOC"s == ([&]() {
                                                VL_NULL_CHECK(fields.at(unnamedblk277__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                              ->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                                                       ->__PVT__local_map, __Vtask_get_access__220__Vfuncout);
                                            }(), __Vtask_get_access__220__Vfuncout))) 
                              || ("WOS"s == ([&]() {
                                            VL_NULL_CHECK(fields.at(unnamedblk277__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                             ->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                                                      ->__PVT__local_map, __Vtask_get_access__221__Vfuncout);
                                        }(), __Vtask_get_access__221__Vfuncout)))))) {
                    if ((1U & (~ (((((((("RO"s == ([&]() {
                                                                        VL_NULL_CHECK(fields.at(unnamedblk277__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                                   ->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                                                            ->__PVT__local_map, __Vtask_get_access__222__Vfuncout);
                                                                    }(), __Vtask_get_access__222__Vfuncout)) 
                                        || ("RC"s == 
                                            ([&]() {
                                                                        VL_NULL_CHECK(fields.at(unnamedblk277__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                             ->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                                                      ->__PVT__local_map, __Vtask_get_access__223__Vfuncout);
                                                                    }(), __Vtask_get_access__223__Vfuncout))) 
                                       || ("RS"s == 
                                           ([&]() {
                                                                    VL_NULL_CHECK(fields.at(unnamedblk277__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                            ->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                                                     ->__PVT__local_map, __Vtask_get_access__224__Vfuncout);
                                                                }(), __Vtask_get_access__224__Vfuncout))) 
                                      || ("W1C"s == 
                                          ([&]() {
                                                                VL_NULL_CHECK(fields.at(unnamedblk277__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                           ->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                                                    ->__PVT__local_map, __Vtask_get_access__225__Vfuncout);
                                                            }(), __Vtask_get_access__225__Vfuncout))) 
                                     || ("W1S"s == 
                                         ([&]() {
                                                            VL_NULL_CHECK(fields.at(unnamedblk277__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                          ->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                                                   ->__PVT__local_map, __Vtask_get_access__226__Vfuncout);
                                                        }(), __Vtask_get_access__226__Vfuncout))) 
                                    || ("W1T"s == ([&]() {
                                                        VL_NULL_CHECK(fields.at(unnamedblk277__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                                   ->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                                                            ->__PVT__local_map, __Vtask_get_access__227__Vfuncout);
                                                    }(), __Vtask_get_access__227__Vfuncout))) 
                                   || ("W1SRC"s == 
                                       ([&]() {
                                                    VL_NULL_CHECK(fields.at(unnamedblk277__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                        ->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                                                 ->__PVT__local_map, __Vtask_get_access__228__Vfuncout);
                                                }(), __Vtask_get_access__228__Vfuncout))) 
                                  || ("W1CRC"s == ([&]() {
                                                VL_NULL_CHECK(fields.at(unnamedblk277__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                                   ->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                                                            ->__PVT__local_map, __Vtask_get_access__229__Vfuncout);
                                            }(), __Vtask_get_access__229__Vfuncout)))))) {
                        if (((((("W0C"s == ([&]() {
                                                        VL_NULL_CHECK(fields.at(unnamedblk277__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                            ->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                                                     ->__PVT__local_map, __Vtask_get_access__230__Vfuncout);
                                                    }(), __Vtask_get_access__230__Vfuncout)) 
                                || ("W0S"s == ([&]() {
                                                        VL_NULL_CHECK(fields.at(unnamedblk277__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                               ->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                                                        ->__PVT__local_map, __Vtask_get_access__231__Vfuncout);
                                                    }(), __Vtask_get_access__231__Vfuncout))) 
                               || ("W0T"s == ([&]() {
                                                    VL_NULL_CHECK(fields.at(unnamedblk277__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                              ->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                                                       ->__PVT__local_map, __Vtask_get_access__232__Vfuncout);
                                                }(), __Vtask_get_access__232__Vfuncout))) 
                              || ("W0SRC"s == ([&]() {
                                                VL_NULL_CHECK(fields.at(unnamedblk277__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                               ->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                                                        ->__PVT__local_map, __Vtask_get_access__233__Vfuncout);
                                            }(), __Vtask_get_access__233__Vfuncout))) 
                             || ("W0CRS"s == ([&]() {
                                            VL_NULL_CHECK(fields.at(unnamedblk277__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                              ->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                                                       ->__PVT__local_map, __Vtask_get_access__234__Vfuncout);
                                        }(), __Vtask_get_access__234__Vfuncout)))) {
                            value_adjust = (value_adjust 
                                            | VL_SHIFTL_QQI(64,64,32, 
                                                            (VL_SHIFTL_QQI(64,64,32, 1ULL, 
                                                                           ([&]() {
                                                    VL_NULL_CHECK(fields.at(unnamedblk277__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1115)
                                                                            ->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__235__Vfuncout);
                                                }(), __Vtask_get_n_bits__235__Vfuncout)) 
                                                             - 1ULL), 
                                                            ([&]() {
                                            VL_NULL_CHECK(fields.at(unnamedblk277__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1115)
                                                             ->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__236__Vfuncout);
                                        }(), __Vtask_get_lsb_pos__236__Vfuncout)));
                        } else if ((((((("WC"s == ([&]() {
                                                            VL_NULL_CHECK(fields.at(unnamedblk277__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                                   ->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                                                            ->__PVT__local_map, __Vtask_get_access__237__Vfuncout);
                                                        }(), __Vtask_get_access__237__Vfuncout)) 
                                        || ("WS"s == 
                                            ([&]() {
                                                            VL_NULL_CHECK(fields.at(unnamedblk277__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                             ->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                                                      ->__PVT__local_map, __Vtask_get_access__238__Vfuncout);
                                                        }(), __Vtask_get_access__238__Vfuncout))) 
                                       || ("WCRS"s 
                                           == ([&]() {
                                                        VL_NULL_CHECK(fields.at(unnamedblk277__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                               ->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                                                        ->__PVT__local_map, __Vtask_get_access__239__Vfuncout);
                                                    }(), __Vtask_get_access__239__Vfuncout))) 
                                      || ("WSRC"s == 
                                          ([&]() {
                                                    VL_NULL_CHECK(fields.at(unnamedblk277__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                           ->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                                                    ->__PVT__local_map, __Vtask_get_access__240__Vfuncout);
                                                }(), __Vtask_get_access__240__Vfuncout))) 
                                     || ("WOC"s == 
                                         ([&]() {
                                                VL_NULL_CHECK(fields.at(unnamedblk277__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                          ->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                                                   ->__PVT__local_map, __Vtask_get_access__241__Vfuncout);
                                            }(), __Vtask_get_access__241__Vfuncout))) 
                                    || ("WOS"s == ([&]() {
                                            VL_NULL_CHECK(fields.at(unnamedblk277__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                                   ->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                                                            ->__PVT__local_map, __Vtask_get_access__242__Vfuncout);
                                        }(), __Vtask_get_access__242__Vfuncout)))) {
                            bad_side_effect = 1U;
                        } else {
                            value_adjust = (value_adjust 
                                            | VL_SHIFTL_QQI(64,64,32, VL_NULL_CHECK(fields.at(unnamedblk277__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1122)
                                                            ->__PVT__m_mirrored, 
                                                            ([&]() {
                                            VL_NULL_CHECK(fields.at(unnamedblk277__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1122)
                                                             ->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__243__Vfuncout);
                                        }(), __Vtask_get_lsb_pos__243__Vfuncout)));
                        }
                    }
                }
                __Vlabel1: ;
            }
            unnamedblk277__DOT__i = ((IData)(1U) + unnamedblk277__DOT__i);
        }
        if (([&]() {
                    this->__VnoInFunc_is_indv_accessible(vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1134)
                                                         ->__PVT__path, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1134)
                                                         ->__PVT__local_map, __Vfunc_is_indv_accessible__244__Vfuncout);
                }(), (IData)(__Vfunc_is_indv_accessible__244__Vfuncout))) {
            VL_NULL_CHECK(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1146)
                          ->__PVT__local_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1146)->__VnoInFunc_get_root_map(vlSymsp, __Vtask_get_root_map__245__Vfuncout);
            unnamedblk278__DOT__system_map = __Vtask_get_root_map__245__Vfuncout;
            unnamedblk278__DOT__cbs = VL_NEW(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callback_iter__pi101, vlSymsp, 
                                             VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field>{this});
            VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1149)->__VnoInFunc_Xset_busyX(vlSymsp, 1U);
            VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1151)->__PVT__status = 0U;
            this->__VnoInFunc_pre_write(vlSymsp, rw);
            VL_NULL_CHECK(unnamedblk278__DOT__cbs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1154)->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__249__Vfuncout);
            unnamedblk278__DOT__unnamedblk279__DOT__cb 
                = __Vtask_first__249__Vfuncout;
            while ((VlNull{} != unnamedblk278__DOT__unnamedblk279__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk278__DOT__unnamedblk279__DOT__cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1155)->__VnoInFunc_pre_write(vlProcess, vlSymsp, rw);
                VL_NULL_CHECK(unnamedblk278__DOT__cbs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1154)->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__251__Vfuncout);
                unnamedblk278__DOT__unnamedblk279__DOT__cb 
                    = __Vtask_next__251__Vfuncout;
            }
            if ((0U != VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1157)
                 ->__PVT__status)) {
                this->__PVT__m_write_in_progress = 0U;
                VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1159)->__VnoInFunc_Xset_busyX(vlSymsp, 0U);
                co_await VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1160)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
                goto __Vlabel0;
            }
            co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1165)
                                   ->__PVT__local_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1165)->__VnoInFunc_do_write(vlProcess, vlSymsp, rw);
            if (([&]() {
                        VL_NULL_CHECK(unnamedblk278__DOT__system_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1167)
                 ->__VnoInFunc_get_auto_predict(vlSymsp, __Vtask_get_auto_predict__255__Vfuncout);
                    }(), (IData)(__Vtask_get_auto_predict__255__Vfuncout))) {
                this->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, 2U, 0xffU);
            }
            this->__VnoInFunc_post_write(vlSymsp, rw);
            VL_NULL_CHECK(unnamedblk278__DOT__cbs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1172)->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__258__Vfuncout);
            unnamedblk278__DOT__unnamedblk280__DOT__cb 
                = __Vtask_first__258__Vfuncout;
            while ((VlNull{} != unnamedblk278__DOT__unnamedblk280__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk278__DOT__unnamedblk280__DOT__cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1173)->__VnoInFunc_post_write(vlSymsp, rw);
                VL_NULL_CHECK(unnamedblk278__DOT__cbs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1172)->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__260__Vfuncout);
                unnamedblk278__DOT__unnamedblk280__DOT__cb 
                    = __Vtask_next__260__Vfuncout;
            }
            VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1175)->__VnoInFunc_Xset_busyX(vlSymsp, 0U);
        } else {
            VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1135)->__PVT__element_kind = 0U;
            VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1136)->__PVT__element 
                = this->__PVT__m_parent;
            VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1137)->__PVT__value.atWrite(0U) 
                = value_adjust;
            co_await VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1138)->__VnoInFunc_do_write(vlProcess, vlSymsp, rw);
            if (bad_side_effect) {
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__263__id = "RegModel"s;
                                __Vfunc_uvm_report_enabled__263__severity = 1U;
                                __Vfunc_uvm_report_enabled__263__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__264__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__264__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__265__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__265__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__263__verbosity, (IData)(__Vfunc_uvm_report_enabled__263__severity), __Vfunc_uvm_report_enabled__263__id, __Vtask_uvm_report_enabled__266__Vfuncout);
                                __Vfunc_uvm_report_enabled__263__Vfuncout 
                                    = __Vtask_uvm_report_enabled__266__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__263__Vfuncout))) {
                    __Vtask_uvm_report_warning__267__report_enabled_checked = 1U;
                    __Vtask_uvm_report_warning__267__context_name = ""s;
                    __Vtask_uvm_report_warning__267__line = 0x00000475U;
                    __Vtask_uvm_report_warning__267__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
                    __Vtask_uvm_report_warning__267__verbosity = 0U;
                    __Vtemp_2 = ([&]() {
                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__268__Vfuncout);
                        }(), __Vfunc_get_full_name__268__Vfuncout);
                    __Vtask_uvm_report_warning__267__message 
                        = VL_SFORMATF_N_NX("Writing field \"%@\" will cause unintended side effects in adjoining Write-to-Clear or Write-to-Set fields in the same register",0,
                                           -1,&(__Vtemp_2)) ;
                    __Vtask_uvm_report_warning__267__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__269__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__269__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__270__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__270__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__267__id, __Vtask_uvm_report_warning__267__message, __Vtask_uvm_report_warning__267__verbosity, __Vtask_uvm_report_warning__267__filename, __Vtask_uvm_report_warning__267__line, __Vtask_uvm_report_warning__267__context_name, (IData)(__Vtask_uvm_report_warning__267__report_enabled_checked));
                }
            }
        }
        this->__PVT__m_write_in_progress = 0U;
        co_await VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1182)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
        __Vlabel0: ;
    }
}

VlCoroutine Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_read(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_read\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> __Vfunc_create__273__Vfuncout;
    std::string __Vfunc_get_full_name__274__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> rw;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi118__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "field_read_item"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__274__Vfuncout);
                }(), __Vfunc_get_full_name__274__Vfuncout)), __Vfunc_create__273__Vfuncout);
    rw = __Vfunc_create__273__Vfuncout;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1201)->__PVT__element 
        = VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field>{this};
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1202)->__PVT__element_kind = 1U;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1203)->__PVT__kind = 0U;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1204)->__PVT__value.atWrite(0U) = 0ULL;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1205)->__PVT__path 
        = path;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1206)->__PVT__map 
        = map;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1207)->__PVT__parent 
        = parent;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1208)->__PVT__prior 
        = prior;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1209)->__PVT__extension 
        = extension;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1210)->__PVT__fname 
        = fname;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1211)->__PVT__lineno 
        = lineno;
    co_await this->__VnoInFunc_do_read(vlSymsp, rw);
    value = VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1215)
        ->__PVT__value.at(0U);
    status = VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1216)
        ->__PVT__status;
}

VlCoroutine Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_read(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_read\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_Xcheck_accessX__277__Vfuncout;
    __Vfunc_Xcheck_accessX__277__Vfuncout = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map_info> __Vfunc_Xcheck_accessX__277__map_info;
    CData/*0:0*/ __Vfunc_is_indv_accessible__278__Vfuncout;
    __Vfunc_is_indv_accessible__278__Vfuncout = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> __Vtask_get_root_map__279__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_first__283__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_next__285__Vfuncout;
    CData/*0:0*/ __Vtask_get_auto_predict__289__Vfuncout;
    __Vtask_get_auto_predict__289__Vfuncout = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_first__292__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_next__294__Vfuncout;
    std::string __Vtask_get_access__299__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__300__Vfuncout;
    __Vfunc_uvm_report_enabled__300__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__300__verbosity;
    __Vfunc_uvm_report_enabled__300__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__300__severity;
    __Vfunc_uvm_report_enabled__300__severity = 0;
    std::string __Vfunc_uvm_report_enabled__300__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__301__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__302__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__303__Vfuncout;
    __Vtask_uvm_report_enabled__303__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__304__id;
    std::string __Vtask_uvm_report_warning__304__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__304__verbosity;
    __Vtask_uvm_report_warning__304__verbosity = 0;
    std::string __Vtask_uvm_report_warning__304__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__304__line;
    __Vtask_uvm_report_warning__304__line = 0;
    std::string __Vtask_uvm_report_warning__304__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__304__report_enabled_checked;
    __Vtask_uvm_report_warning__304__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__305__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__306__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__307__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> unnamedblk281__DOT__system_map;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callback_iter__pi101> unnamedblk281__DOT__cbs;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk281__DOT__unnamedblk282__DOT__cb;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk281__DOT__unnamedblk283__DOT__cb;
    VlQueue<VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field>> unnamedblk284__DOT__fields;
    IData/*31:0*/ unnamedblk284__DOT__unnamedblk285__DOT__i;
    unnamedblk284__DOT__unnamedblk285__DOT__i = 0;
    std::string unnamedblk284__DOT__unnamedblk285__DOT__unnamedblk286__DOT__mode;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map_info> map_info;
    CData/*0:0*/ bad_side_effect;
    bad_side_effect = 0;
    {
        co_await VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1228)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
        this->__PVT__m_fname = VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1229)
            ->__PVT__fname;
        this->__PVT__m_lineno = VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1230)
            ->__PVT__lineno;
        this->__PVT__m_read_in_progress = 1U;
        if ((1U & (~ ([&]() {
                            this->__VnoInFunc_Xcheck_accessX(vlSymsp, rw, __Vfunc_Xcheck_accessX__277__map_info, __Vfunc_Xcheck_accessX__277__Vfuncout);
                            map_info = __Vfunc_Xcheck_accessX__277__map_info;
                        }(), (IData)(__Vfunc_Xcheck_accessX__277__Vfuncout))))) {
            goto __Vlabel0;
        }
        if (([&]() {
                    this->__VnoInFunc_is_indv_accessible(vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1244)
                                                         ->__PVT__path, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1244)
                                                         ->__PVT__local_map, __Vfunc_is_indv_accessible__278__Vfuncout);
                }(), (IData)(__Vfunc_is_indv_accessible__278__Vfuncout))) {
            VL_NULL_CHECK(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1253)
                          ->__PVT__local_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1253)->__VnoInFunc_get_root_map(vlSymsp, __Vtask_get_root_map__279__Vfuncout);
            unnamedblk281__DOT__system_map = __Vtask_get_root_map__279__Vfuncout;
            unnamedblk281__DOT__cbs = VL_NEW(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callback_iter__pi101, vlSymsp, 
                                             VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field>{this});
            VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1256)->__VnoInFunc_Xset_busyX(vlSymsp, 1U);
            VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1258)->__PVT__status = 0U;
            this->__VnoInFunc_pre_read(vlSymsp, rw);
            VL_NULL_CHECK(unnamedblk281__DOT__cbs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1261)->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__283__Vfuncout);
            unnamedblk281__DOT__unnamedblk282__DOT__cb 
                = __Vtask_first__283__Vfuncout;
            while ((VlNull{} != unnamedblk281__DOT__unnamedblk282__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk281__DOT__unnamedblk282__DOT__cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1262)->__VnoInFunc_pre_read(vlProcess, vlSymsp, rw);
                VL_NULL_CHECK(unnamedblk281__DOT__cbs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1261)->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__285__Vfuncout);
                unnamedblk281__DOT__unnamedblk282__DOT__cb 
                    = __Vtask_next__285__Vfuncout;
            }
            if ((0U != VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1264)
                 ->__PVT__status)) {
                this->__PVT__m_read_in_progress = 0U;
                VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1266)->__VnoInFunc_Xset_busyX(vlSymsp, 0U);
                co_await VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1267)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
                goto __Vlabel0;
            }
            co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1272)
                                   ->__PVT__local_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1272)->__VnoInFunc_do_read(vlProcess, vlSymsp, rw);
            if (([&]() {
                        VL_NULL_CHECK(unnamedblk281__DOT__system_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1275)
                 ->__VnoInFunc_get_auto_predict(vlSymsp, __Vtask_get_auto_predict__289__Vfuncout);
                    }(), (IData)(__Vtask_get_auto_predict__289__Vfuncout))) {
                this->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, 1U, 0xffU);
            }
            this->__VnoInFunc_post_read(vlSymsp, rw);
            VL_NULL_CHECK(unnamedblk281__DOT__cbs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1280)->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__292__Vfuncout);
            unnamedblk281__DOT__unnamedblk283__DOT__cb 
                = __Vtask_first__292__Vfuncout;
            while ((VlNull{} != unnamedblk281__DOT__unnamedblk283__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk281__DOT__unnamedblk283__DOT__cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1281)->__VnoInFunc_post_read(vlSymsp, rw);
                VL_NULL_CHECK(unnamedblk281__DOT__cbs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1280)->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__294__Vfuncout);
                unnamedblk281__DOT__unnamedblk283__DOT__cb 
                    = __Vtask_next__294__Vfuncout;
            }
            VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1283)->__VnoInFunc_Xset_busyX(vlSymsp, 0U);
        } else {
            VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1245)->__PVT__element_kind = 0U;
            VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1246)->__PVT__element 
                = this->__PVT__m_parent;
            bad_side_effect = 1U;
            co_await VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1248)->__VnoInFunc_do_read(vlProcess, vlSymsp, rw);
            VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1249)->__PVT__value.atWrite(0U) 
                = (VL_SHIFTR_QQI(64,64,32, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1249)
                                 ->__PVT__value.at(0U), this->__PVT__m_lsb) 
                   & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                      - 1ULL));
        }
        this->__PVT__m_read_in_progress = 0U;
        co_await VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1290)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
        if (bad_side_effect) {
            VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1294)->__VnoInFunc_get_fields(vlSymsp, unnamedblk284__DOT__fields);
            unnamedblk284__DOT__unnamedblk285__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk284__DOT__unnamedblk285__DOT__i, unnamedblk284__DOT__fields.size())) {
                {
                    if ((unnamedblk284__DOT__fields.at(unnamedblk284__DOT__unnamedblk285__DOT__i) 
                         == VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field>{this})) {
                        goto __Vlabel1;
                    }
                    VL_NULL_CHECK(unnamedblk284__DOT__fields.at(unnamedblk284__DOT__unnamedblk285__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1299)->__VnoInFunc_get_access(vlProcess, vlSymsp, VlNull{}, __Vtask_get_access__299__Vfuncout);
                    unnamedblk284__DOT__unnamedblk285__DOT__unnamedblk286__DOT__mode 
                        = __Vtask_get_access__299__Vfuncout;
                    if ((((((((((("RC"s == unnamedblk284__DOT__unnamedblk285__DOT__unnamedblk286__DOT__mode) 
                                 | ("RS"s == unnamedblk284__DOT__unnamedblk285__DOT__unnamedblk286__DOT__mode)) 
                                | ("WRC"s == unnamedblk284__DOT__unnamedblk285__DOT__unnamedblk286__DOT__mode)) 
                               | ("WRS"s == unnamedblk284__DOT__unnamedblk285__DOT__unnamedblk286__DOT__mode)) 
                              | ("WSRC"s == unnamedblk284__DOT__unnamedblk285__DOT__unnamedblk286__DOT__mode)) 
                             | ("WCRS"s == unnamedblk284__DOT__unnamedblk285__DOT__unnamedblk286__DOT__mode)) 
                            | ("W1SRC"s == unnamedblk284__DOT__unnamedblk285__DOT__unnamedblk286__DOT__mode)) 
                           | ("W1CRS"s == unnamedblk284__DOT__unnamedblk285__DOT__unnamedblk286__DOT__mode)) 
                          | ("W0SRC"s == unnamedblk284__DOT__unnamedblk285__DOT__unnamedblk286__DOT__mode)) 
                         | ("W0CRS"s == unnamedblk284__DOT__unnamedblk285__DOT__unnamedblk286__DOT__mode))) {
                        if ((0U != ([&]() {
                                        __Vfunc_uvm_report_enabled__300__id = "RegModel"s;
                                        __Vfunc_uvm_report_enabled__300__severity = 1U;
                                        __Vfunc_uvm_report_enabled__300__verbosity = 0U;
                                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__301__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                            = __Vfunc_get__301__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__302__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                            = __Vtask_get_root__302__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__300__verbosity, (IData)(__Vfunc_uvm_report_enabled__300__severity), __Vfunc_uvm_report_enabled__300__id, __Vtask_uvm_report_enabled__303__Vfuncout);
                                        __Vfunc_uvm_report_enabled__300__Vfuncout 
                                            = __Vtask_uvm_report_enabled__303__Vfuncout;
                                    }(), __Vfunc_uvm_report_enabled__300__Vfuncout))) {
                            __Vtask_uvm_report_warning__304__report_enabled_checked = 1U;
                            __Vtask_uvm_report_warning__304__context_name = ""s;
                            __Vtask_uvm_report_warning__304__line = 0x00000520U;
                            __Vtask_uvm_report_warning__304__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
                            __Vtask_uvm_report_warning__304__verbosity = 0U;
                            __Vtask_uvm_report_warning__304__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Reading field '"s, 
                                                                                ([&]() {
                                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__305__Vfuncout);
                                                }(), __Vfunc_get_full_name__305__Vfuncout)), "' will cause unintended side effects in adjoining "s), "Read-to-Clear or Read-to-Set fields in the same register"s));
                            __Vtask_uvm_report_warning__304__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__306__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                                = __Vfunc_get__306__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__307__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                = __Vtask_get_root__307__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__304__id, __Vtask_uvm_report_warning__304__message, __Vtask_uvm_report_warning__304__verbosity, __Vtask_uvm_report_warning__304__filename, __Vtask_uvm_report_warning__304__line, __Vtask_uvm_report_warning__304__context_name, (IData)(__Vtask_uvm_report_warning__304__report_enabled_checked));
                        }
                    }
                    __Vlabel1: ;
                }
                unnamedblk284__DOT__unnamedblk285__DOT__i 
                    = ((IData)(1U) + unnamedblk284__DOT__unnamedblk285__DOT__i);
            }
        }
        __Vlabel0: ;
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_is_indv_accessible(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ path, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> local_map, CData/*0:0*/ &is_indv_accessible__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_is_indv_accessible\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__309__Vfuncout;
    __Vfunc_uvm_report_enabled__309__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__309__verbosity;
    __Vfunc_uvm_report_enabled__309__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__309__severity;
    __Vfunc_uvm_report_enabled__309__severity = 0;
    std::string __Vfunc_uvm_report_enabled__309__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__310__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__311__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__312__Vfuncout;
    __Vtask_uvm_report_enabled__312__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__313__id;
    std::string __Vtask_uvm_report_warning__313__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__313__verbosity;
    __Vtask_uvm_report_warning__313__verbosity = 0;
    std::string __Vtask_uvm_report_warning__313__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__313__line;
    __Vtask_uvm_report_warning__313__line = 0;
    std::string __Vtask_uvm_report_warning__313__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__313__report_enabled_checked;
    __Vtask_uvm_report_warning__313__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__314__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__315__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__316__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__318__Vfuncout;
    __Vfunc_uvm_report_enabled__318__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__318__verbosity;
    __Vfunc_uvm_report_enabled__318__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__318__severity;
    __Vfunc_uvm_report_enabled__318__severity = 0;
    std::string __Vfunc_uvm_report_enabled__318__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__319__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__320__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__321__Vfuncout;
    __Vtask_uvm_report_enabled__321__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__322__id;
    std::string __Vtask_uvm_report_warning__322__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__322__verbosity;
    __Vtask_uvm_report_warning__322__verbosity = 0;
    std::string __Vtask_uvm_report_warning__322__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__322__line;
    __Vtask_uvm_report_warning__322__line = 0;
    std::string __Vtask_uvm_report_warning__322__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__322__report_enabled_checked;
    __Vtask_uvm_report_warning__322__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__323__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__324__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__325__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_frontdoor> __Vtask_get_frontdoor__327__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__328__Vfuncout;
    __Vfunc_uvm_report_enabled__328__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__328__verbosity;
    __Vfunc_uvm_report_enabled__328__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__328__severity;
    __Vfunc_uvm_report_enabled__328__severity = 0;
    std::string __Vfunc_uvm_report_enabled__328__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__329__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__330__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__331__Vfuncout;
    __Vtask_uvm_report_enabled__331__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__332__id;
    std::string __Vtask_uvm_report_warning__332__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__332__verbosity;
    __Vtask_uvm_report_warning__332__verbosity = 0;
    std::string __Vtask_uvm_report_warning__332__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__332__line;
    __Vtask_uvm_report_warning__332__line = 0;
    std::string __Vtask_uvm_report_warning__332__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__332__report_enabled_checked;
    __Vtask_uvm_report_warning__332__report_enabled_checked = 0;
    std::string __Vfunc_get_name__333__Vfuncout;
    std::string __Vtask_get_full_name__334__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__335__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__336__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> __Vtask_get_root_map__338__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_adapter> __Vtask_get_adapter__339__Vfuncout;
    IData/*31:0*/ __Vtask_get_n_bytes__340__Vfuncout;
    __Vtask_get_n_bytes__340__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_lsb_pos__342__Vfuncout;
    __Vtask_get_lsb_pos__342__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bits__343__Vfuncout;
    __Vtask_get_n_bits__343__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_lsb_pos__344__Vfuncout;
    __Vtask_get_lsb_pos__344__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bits__345__Vfuncout;
    __Vtask_get_n_bits__345__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_lsb_pos__346__Vfuncout;
    __Vtask_get_lsb_pos__346__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bits__347__Vfuncout;
    __Vtask_get_n_bits__347__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__348__Vfuncout;
    __Vfunc_uvm_report_enabled__348__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__348__verbosity;
    __Vfunc_uvm_report_enabled__348__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__348__severity;
    __Vfunc_uvm_report_enabled__348__severity = 0;
    std::string __Vfunc_uvm_report_enabled__348__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__349__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__350__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__351__Vfuncout;
    __Vtask_uvm_report_enabled__351__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__352__id;
    std::string __Vtask_uvm_report_warning__352__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__352__verbosity;
    __Vtask_uvm_report_warning__352__verbosity = 0;
    std::string __Vtask_uvm_report_warning__352__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__352__line;
    __Vtask_uvm_report_warning__352__line = 0;
    std::string __Vtask_uvm_report_warning__352__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__352__report_enabled_checked;
    __Vtask_uvm_report_warning__352__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__353__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__354__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__355__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> unnamedblk287__DOT__system_map;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_adapter> unnamedblk287__DOT__adapter;
    IData/*31:0*/ unnamedblk288__DOT__fld_idx;
    unnamedblk288__DOT__fld_idx = 0;
    IData/*31:0*/ unnamedblk288__DOT__bus_width;
    unnamedblk288__DOT__bus_width = 0;
    VlQueue<VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field>> unnamedblk288__DOT__fields;
    CData/*0:0*/ unnamedblk288__DOT__sole_field;
    unnamedblk288__DOT__sole_field = 0;
    IData/*31:0*/ unnamedblk288__DOT__unnamedblk289__DOT__prev_lsb;
    unnamedblk288__DOT__unnamedblk289__DOT__prev_lsb = 0;
    IData/*31:0*/ unnamedblk288__DOT__unnamedblk289__DOT__this_lsb;
    unnamedblk288__DOT__unnamedblk289__DOT__this_lsb = 0;
    IData/*31:0*/ unnamedblk288__DOT__unnamedblk289__DOT__next_lsb;
    unnamedblk288__DOT__unnamedblk289__DOT__next_lsb = 0;
    IData/*31:0*/ unnamedblk288__DOT__unnamedblk289__DOT__prev_sz;
    unnamedblk288__DOT__unnamedblk289__DOT__prev_sz = 0;
    IData/*31:0*/ unnamedblk288__DOT__unnamedblk289__DOT__this_sz;
    unnamedblk288__DOT__unnamedblk289__DOT__this_sz = 0;
    IData/*31:0*/ unnamedblk288__DOT__unnamedblk289__DOT__next_sz;
    unnamedblk288__DOT__unnamedblk289__DOT__next_sz = 0;
    IData/*31:0*/ unnamedblk288__DOT__unnamedblk289__DOT__bus_sz;
    unnamedblk288__DOT__unnamedblk289__DOT__bus_sz = 0;
    IData/*31:0*/ unnamedblk288__DOT__unnamedblk289__DOT__unnamedblk290__DOT__i;
    unnamedblk288__DOT__unnamedblk289__DOT__unnamedblk290__DOT__i = 0;
    {
        if ((1U == path)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__309__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__309__severity = 1U;
                            __Vfunc_uvm_report_enabled__309__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__310__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__310__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__311__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__311__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__309__verbosity, (IData)(__Vfunc_uvm_report_enabled__309__severity), __Vfunc_uvm_report_enabled__309__id, __Vtask_uvm_report_enabled__312__Vfuncout);
                            __Vfunc_uvm_report_enabled__309__Vfuncout 
                                = __Vtask_uvm_report_enabled__312__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__309__Vfuncout))) {
                __Vtask_uvm_report_warning__313__report_enabled_checked = 1U;
                __Vtask_uvm_report_warning__313__context_name = ""s;
                __Vtask_uvm_report_warning__313__line = 0x0000052fU;
                __Vtask_uvm_report_warning__313__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
                __Vtask_uvm_report_warning__313__verbosity = 0U;
                __Vtask_uvm_report_warning__313__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Individual BACKDOOR field access not available for field '"s, 
                                                                       ([&]() {
                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__314__Vfuncout);
                                }(), __Vfunc_get_full_name__314__Vfuncout)), "'. Accessing complete register instead."s));
                __Vtask_uvm_report_warning__313__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__315__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__315__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__316__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__316__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__313__id, __Vtask_uvm_report_warning__313__message, __Vtask_uvm_report_warning__313__verbosity, __Vtask_uvm_report_warning__313__filename, __Vtask_uvm_report_warning__313__line, __Vtask_uvm_report_warning__313__context_name, (IData)(__Vtask_uvm_report_warning__313__report_enabled_checked));
            }
            is_indv_accessible__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if ((1U & (~ (IData)(this->__PVT__m_individually_accessible)))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__318__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__318__severity = 1U;
                            __Vfunc_uvm_report_enabled__318__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__319__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__319__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__320__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__320__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__318__verbosity, (IData)(__Vfunc_uvm_report_enabled__318__severity), __Vfunc_uvm_report_enabled__318__id, __Vtask_uvm_report_enabled__321__Vfuncout);
                            __Vfunc_uvm_report_enabled__318__Vfuncout 
                                = __Vtask_uvm_report_enabled__321__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__318__Vfuncout))) {
                __Vtask_uvm_report_warning__322__report_enabled_checked = 1U;
                __Vtask_uvm_report_warning__322__context_name = ""s;
                __Vtask_uvm_report_warning__322__line = 0x00000536U;
                __Vtask_uvm_report_warning__322__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
                __Vtask_uvm_report_warning__322__verbosity = 0U;
                __Vtask_uvm_report_warning__322__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Individual field access not available for field '"s, 
                                                                       ([&]() {
                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__323__Vfuncout);
                                }(), __Vfunc_get_full_name__323__Vfuncout)), "'. Accessing complete register instead."s));
                __Vtask_uvm_report_warning__322__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__324__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__324__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__325__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__325__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__322__id, __Vtask_uvm_report_warning__322__message, __Vtask_uvm_report_warning__322__verbosity, __Vtask_uvm_report_warning__322__filename, __Vtask_uvm_report_warning__322__line, __Vtask_uvm_report_warning__322__context_name, (IData)(__Vtask_uvm_report_warning__322__report_enabled_checked));
            }
            is_indv_accessible__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if ((VlNull{} != ([&]() {
                        VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1340)
                          ->__VnoInFunc_get_frontdoor(vlSymsp, local_map, __Vtask_get_frontdoor__327__Vfuncout);
                    }(), __Vtask_get_frontdoor__327__Vfuncout))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__328__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__328__severity = 1U;
                            __Vfunc_uvm_report_enabled__328__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__329__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__329__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__330__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__330__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__328__verbosity, (IData)(__Vfunc_uvm_report_enabled__328__severity), __Vfunc_uvm_report_enabled__328__id, __Vtask_uvm_report_enabled__331__Vfuncout);
                            __Vfunc_uvm_report_enabled__328__Vfuncout 
                                = __Vtask_uvm_report_enabled__331__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__328__Vfuncout))) {
                __Vtask_uvm_report_warning__332__report_enabled_checked = 1U;
                __Vtask_uvm_report_warning__332__context_name = ""s;
                __Vtask_uvm_report_warning__332__line = 0x0000053fU;
                __Vtask_uvm_report_warning__332__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
                __Vtask_uvm_report_warning__332__verbosity = 0U;
                __Vtask_uvm_report_warning__332__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Individual field access not available for field '"s, 
                                                                                ([&]() {
                                            this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__333__Vfuncout);
                                        }(), __Vfunc_get_name__333__Vfuncout)), "' because register '"s), 
                                                                       ([&]() {
                                    VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1343)
                                                                        ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__334__Vfuncout);
                                }(), __Vtask_get_full_name__334__Vfuncout)), "' has a user-defined front-door. Accessing complete register instead."s));
                __Vtask_uvm_report_warning__332__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__335__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__335__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__336__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__336__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__332__id, __Vtask_uvm_report_warning__332__message, __Vtask_uvm_report_warning__332__verbosity, __Vtask_uvm_report_warning__332__filename, __Vtask_uvm_report_warning__332__line, __Vtask_uvm_report_warning__332__context_name, (IData)(__Vtask_uvm_report_warning__332__report_enabled_checked));
            }
            is_indv_accessible__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(local_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1348)->__VnoInFunc_get_root_map(vlSymsp, __Vtask_get_root_map__338__Vfuncout);
        unnamedblk287__DOT__system_map = __Vtask_get_root_map__338__Vfuncout;
        VL_NULL_CHECK(unnamedblk287__DOT__system_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1349)->__VnoInFunc_get_adapter(vlSymsp, 1U, __Vtask_get_adapter__339__Vfuncout);
        unnamedblk287__DOT__adapter = __Vtask_get_adapter__339__Vfuncout;
        if (VL_NULL_CHECK(unnamedblk287__DOT__adapter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1350)
            ->__PVT__supports_byte_enable) {
            is_indv_accessible__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(local_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1356)->__VnoInFunc_get_n_bytes(vlSymsp, 1U, __Vtask_get_n_bytes__340__Vfuncout);
        unnamedblk288__DOT__bus_width = __Vtask_get_n_bytes__340__Vfuncout;
        VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1360)->__VnoInFunc_get_fields(vlSymsp, unnamedblk288__DOT__fields);
        if ((1U == unnamedblk288__DOT__fields.size())) {
            unnamedblk288__DOT__sole_field = 1U;
        } else {
            unnamedblk288__DOT__unnamedblk289__DOT__bus_sz 
                = VL_MULS_III(32, (IData)(8U), unnamedblk288__DOT__bus_width);
            {
                unnamedblk288__DOT__unnamedblk289__DOT__unnamedblk290__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk288__DOT__unnamedblk289__DOT__unnamedblk290__DOT__i, unnamedblk288__DOT__fields.size())) {
                    if ((unnamedblk288__DOT__fields.at(unnamedblk288__DOT__unnamedblk289__DOT__unnamedblk290__DOT__i) 
                         == VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field>{this})) {
                        unnamedblk288__DOT__fld_idx 
                            = unnamedblk288__DOT__unnamedblk289__DOT__unnamedblk290__DOT__i;
                        goto __Vlabel1;
                    }
                    unnamedblk288__DOT__unnamedblk289__DOT__unnamedblk290__DOT__i 
                        = ((IData)(1U) + unnamedblk288__DOT__unnamedblk289__DOT__unnamedblk290__DOT__i);
                }
                __Vlabel1: ;
            }
            VL_NULL_CHECK(unnamedblk288__DOT__fields.at(unnamedblk288__DOT__fld_idx), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1377)->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__342__Vfuncout);
            unnamedblk288__DOT__unnamedblk289__DOT__this_lsb 
                = __Vtask_get_lsb_pos__342__Vfuncout;
            VL_NULL_CHECK(unnamedblk288__DOT__fields.at(unnamedblk288__DOT__fld_idx), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1378)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__343__Vfuncout);
            unnamedblk288__DOT__unnamedblk289__DOT__this_sz 
                = __Vtask_get_n_bits__343__Vfuncout;
            if (VL_LTS_III(32, 0U, unnamedblk288__DOT__fld_idx)) {
                VL_NULL_CHECK(unnamedblk288__DOT__fields.at(
                                                            (unnamedblk288__DOT__fld_idx 
                                                             - (IData)(1U))), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1381)->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__344__Vfuncout);
                unnamedblk288__DOT__unnamedblk289__DOT__prev_lsb 
                    = __Vtask_get_lsb_pos__344__Vfuncout;
                VL_NULL_CHECK(unnamedblk288__DOT__fields.at(
                                                            (unnamedblk288__DOT__fld_idx 
                                                             - (IData)(1U))), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1382)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__345__Vfuncout);
                unnamedblk288__DOT__unnamedblk289__DOT__prev_sz 
                    = __Vtask_get_n_bits__345__Vfuncout;
            }
            if (VL_LTS_III(32, unnamedblk288__DOT__fld_idx, 
                           (unnamedblk288__DOT__fields.size() 
                            - (IData)(1U)))) {
                VL_NULL_CHECK(unnamedblk288__DOT__fields.at(
                                                            ((IData)(1U) 
                                                             + unnamedblk288__DOT__fld_idx)), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1386)->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__346__Vfuncout);
                unnamedblk288__DOT__unnamedblk289__DOT__next_lsb 
                    = __Vtask_get_lsb_pos__346__Vfuncout;
                VL_NULL_CHECK(unnamedblk288__DOT__fields.at(
                                                            ((IData)(1U) 
                                                             + unnamedblk288__DOT__fld_idx)), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1387)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__347__Vfuncout);
                unnamedblk288__DOT__unnamedblk289__DOT__next_sz 
                    = __Vtask_get_n_bits__347__Vfuncout;
            }
            if (((0U == unnamedblk288__DOT__fld_idx) 
                 & ((0U == VL_MODDIVS_III(32, unnamedblk288__DOT__unnamedblk289__DOT__next_lsb, unnamedblk288__DOT__unnamedblk289__DOT__bus_sz)) 
                    | VL_GTS_III(32, (unnamedblk288__DOT__unnamedblk289__DOT__next_lsb 
                                      - unnamedblk288__DOT__unnamedblk289__DOT__this_sz), 
                                 VL_MODDIVS_III(32, unnamedblk288__DOT__unnamedblk289__DOT__next_lsb, unnamedblk288__DOT__unnamedblk289__DOT__bus_sz))))) {
                is_indv_accessible__Vfuncrtn = 1U;
                goto __Vlabel0;
            } else if (((unnamedblk288__DOT__fld_idx 
                         == (unnamedblk288__DOT__fields.size() 
                             - (IData)(1U))) & ((0U 
                                                 == 
                                                 VL_MODDIVS_III(32, unnamedblk288__DOT__unnamedblk289__DOT__this_lsb, unnamedblk288__DOT__unnamedblk289__DOT__bus_sz)) 
                                                | VL_GTES_III(32, 
                                                              (unnamedblk288__DOT__unnamedblk289__DOT__this_lsb 
                                                               - 
                                                               (unnamedblk288__DOT__unnamedblk289__DOT__prev_lsb 
                                                                + unnamedblk288__DOT__unnamedblk289__DOT__prev_sz)), 
                                                              VL_MODDIVS_III(32, unnamedblk288__DOT__unnamedblk289__DOT__this_lsb, unnamedblk288__DOT__unnamedblk289__DOT__bus_sz))))) {
                is_indv_accessible__Vfuncrtn = 1U;
                goto __Vlabel0;
            } else if ((0U == VL_MODDIVS_III(32, unnamedblk288__DOT__unnamedblk289__DOT__this_lsb, unnamedblk288__DOT__unnamedblk289__DOT__bus_sz))) {
                if (((0U == VL_MODDIVS_III(32, unnamedblk288__DOT__unnamedblk289__DOT__next_lsb, unnamedblk288__DOT__unnamedblk289__DOT__bus_sz)) 
                     | VL_GTES_III(32, (unnamedblk288__DOT__unnamedblk289__DOT__next_lsb 
                                        - (unnamedblk288__DOT__unnamedblk289__DOT__this_lsb 
                                           + unnamedblk288__DOT__unnamedblk289__DOT__this_sz)), 
                                   VL_MODDIVS_III(32, unnamedblk288__DOT__unnamedblk289__DOT__next_lsb, unnamedblk288__DOT__unnamedblk289__DOT__bus_sz)))) {
                    is_indv_accessible__Vfuncrtn = 1U;
                    goto __Vlabel0;
                }
            } else if ((VL_GTES_III(32, (unnamedblk288__DOT__unnamedblk289__DOT__next_lsb 
                                         - (unnamedblk288__DOT__unnamedblk289__DOT__this_lsb 
                                            + unnamedblk288__DOT__unnamedblk289__DOT__this_sz)), 
                                    VL_MODDIVS_III(32, unnamedblk288__DOT__unnamedblk289__DOT__next_lsb, unnamedblk288__DOT__unnamedblk289__DOT__bus_sz)) 
                        & VL_GTES_III(32, (unnamedblk288__DOT__unnamedblk289__DOT__this_lsb 
                                           - (unnamedblk288__DOT__unnamedblk289__DOT__prev_lsb 
                                              + unnamedblk288__DOT__unnamedblk289__DOT__prev_sz)), 
                                      VL_MODDIVS_III(32, unnamedblk288__DOT__unnamedblk289__DOT__this_lsb, unnamedblk288__DOT__unnamedblk289__DOT__bus_sz)))) {
                is_indv_accessible__Vfuncrtn = 1U;
                goto __Vlabel0;
            }
        }
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__348__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__348__severity = 1U;
                        __Vfunc_uvm_report_enabled__348__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__349__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__349__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__350__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__350__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__348__verbosity, (IData)(__Vfunc_uvm_report_enabled__348__severity), __Vfunc_uvm_report_enabled__348__id, __Vtask_uvm_report_enabled__351__Vfuncout);
                        __Vfunc_uvm_report_enabled__348__Vfuncout 
                            = __Vtask_uvm_report_enabled__351__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__348__Vfuncout))) {
            __Vtask_uvm_report_warning__352__report_enabled_checked = 1U;
            __Vtask_uvm_report_warning__352__context_name = ""s;
            __Vtask_uvm_report_warning__352__line = 0x0000058eU;
            __Vtask_uvm_report_warning__352__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
            __Vtask_uvm_report_warning__352__verbosity = 0U;
            __Vtask_uvm_report_warning__352__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Target bus does not support byte enabling, and the field '"s, 
                                                                                ([&]() {
                                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__353__Vfuncout);
                                    }(), __Vfunc_get_full_name__353__Vfuncout)), "' is not the only field within the entire bus width. "s), "Individual field access will not be available. "s), "Accessing complete register instead."s));
            __Vtask_uvm_report_warning__352__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__354__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__354__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__355__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__355__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__352__id, __Vtask_uvm_report_warning__352__message, __Vtask_uvm_report_warning__352__verbosity, __Vtask_uvm_report_warning__352__filename, __Vtask_uvm_report_warning__352__line, __Vtask_uvm_report_warning__352__context_name, (IData)(__Vtask_uvm_report_warning__352__report_enabled_checked));
        }
        is_indv_accessible__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

VlCoroutine Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_poke(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ value, std::string kind, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_poke\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__357__Vfuncout;
    __Vfunc_uvm_report_enabled__357__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__357__verbosity;
    __Vfunc_uvm_report_enabled__357__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__357__severity;
    __Vfunc_uvm_report_enabled__357__severity = 0;
    std::string __Vfunc_uvm_report_enabled__357__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__358__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__359__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__360__Vfuncout;
    __Vtask_uvm_report_enabled__360__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__361__id;
    std::string __Vtask_uvm_report_warning__361__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__361__verbosity;
    __Vtask_uvm_report_warning__361__verbosity = 0;
    std::string __Vtask_uvm_report_warning__361__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__361__line;
    __Vtask_uvm_report_warning__361__line = 0;
    std::string __Vtask_uvm_report_warning__361__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__361__report_enabled_checked;
    __Vtask_uvm_report_warning__361__report_enabled_checked = 0;
    std::string __Vfunc_get_name__362__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__363__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__364__Vfuncout;
    IData/*31:0*/ __Vtask_peek__367__status;
    __Vtask_peek__367__status = 0;
    QData/*63:0*/ __Vtask_peek__367__value;
    __Vtask_peek__367__value = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__368__Vfuncout;
    __Vfunc_uvm_report_enabled__368__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__368__verbosity;
    __Vfunc_uvm_report_enabled__368__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__368__severity;
    __Vfunc_uvm_report_enabled__368__severity = 0;
    std::string __Vfunc_uvm_report_enabled__368__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__369__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__370__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__371__Vfuncout;
    __Vtask_uvm_report_enabled__371__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__372__id;
    std::string __Vtask_uvm_report_error__372__message;
    IData/*31:0*/ __Vtask_uvm_report_error__372__verbosity;
    __Vtask_uvm_report_error__372__verbosity = 0;
    std::string __Vtask_uvm_report_error__372__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__372__line;
    __Vtask_uvm_report_error__372__line = 0;
    std::string __Vtask_uvm_report_error__372__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__372__report_enabled_checked;
    __Vtask_uvm_report_error__372__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__373__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__374__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__375__Vfuncout;
    IData/*31:0*/ __Vtask_poke__378__status;
    __Vtask_poke__378__status = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    QData/*63:0*/ tmp;
    tmp = 0;
    {
        this->__PVT__m_fname = fname;
        this->__PVT__m_lineno = lineno;
        if ((0U != VL_SHIFTR_QQI(64,64,32, value, this->__PVT__m_size))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__357__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__357__severity = 1U;
                            __Vfunc_uvm_report_enabled__357__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__358__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__358__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__359__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__359__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__357__verbosity, (IData)(__Vfunc_uvm_report_enabled__357__severity), __Vfunc_uvm_report_enabled__357__id, __Vtask_uvm_report_enabled__360__Vfuncout);
                            __Vfunc_uvm_report_enabled__357__Vfuncout 
                                = __Vtask_uvm_report_enabled__360__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__357__Vfuncout))) {
                __Vtask_uvm_report_warning__361__report_enabled_checked = 1U;
                __Vtask_uvm_report_warning__361__context_name = ""s;
                __Vtask_uvm_report_warning__361__line = 0x000005a6U;
                __Vtask_uvm_report_warning__361__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
                __Vtask_uvm_report_warning__361__verbosity = 0U;
                __Vtask_uvm_report_warning__361__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("uvm_reg_field::poke(): Value exceeds size of field '"s, 
                                                                       ([&]() {
                                    this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__362__Vfuncout);
                                }(), __Vfunc_get_name__362__Vfuncout)), "'"s));
                __Vtask_uvm_report_warning__361__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__363__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__363__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__364__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__364__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__361__id, __Vtask_uvm_report_warning__361__message, __Vtask_uvm_report_warning__361__verbosity, __Vtask_uvm_report_warning__361__filename, __Vtask_uvm_report_warning__361__line, __Vtask_uvm_report_warning__361__context_name, (IData)(__Vtask_uvm_report_warning__361__report_enabled_checked));
            }
            value = (value & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                              - 1ULL));
        }
        co_await VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1451)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
        VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1452)->__PVT__m_is_locked_by_field = 1U;
        tmp = 0ULL;
        co_await VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1457)->__VnoInFunc_peek(vlSymsp, __Vtask_peek__367__status, __Vtask_peek__367__value, kind, parent, extension, fname, lineno);
        status = __Vtask_peek__367__status;
        tmp = __Vtask_peek__367__value;
        if ((1U == status)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__368__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__368__severity = 2U;
                            __Vfunc_uvm_report_enabled__368__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__369__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__369__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__370__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__370__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__368__verbosity, (IData)(__Vfunc_uvm_report_enabled__368__severity), __Vfunc_uvm_report_enabled__368__id, __Vtask_uvm_report_enabled__371__Vfuncout);
                            __Vfunc_uvm_report_enabled__368__Vfuncout 
                                = __Vtask_uvm_report_enabled__371__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__368__Vfuncout))) {
                __Vtask_uvm_report_error__372__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__372__context_name = ""s;
                __Vtask_uvm_report_error__372__line = 0x000005b5U;
                __Vtask_uvm_report_error__372__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
                __Vtask_uvm_report_error__372__verbosity = 0U;
                __Vtask_uvm_report_error__372__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN("uvm_reg_field::poke(): Peek of register '"s, 
                                                                                ([&]() {
                                        VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1461)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__373__Vfuncout);
                                    }(), __Vtask_get_full_name__373__Vfuncout)), "' returned status "s), 
                                                        Vtest_simple_register_uvm___024unit::__Venumtab_enum_name71
                                                        [
                                                        (3U 
                                                         & status)]));
                __Vtask_uvm_report_error__372__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__374__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__374__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__375__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__375__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__372__id, __Vtask_uvm_report_error__372__message, __Vtask_uvm_report_error__372__verbosity, __Vtask_uvm_report_error__372__filename, __Vtask_uvm_report_error__372__line, __Vtask_uvm_report_error__372__context_name, (IData)(__Vtask_uvm_report_error__372__report_enabled_checked));
            }
            co_await VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1462)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
            VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1463)->__PVT__m_is_locked_by_field = 0U;
            goto __Vlabel0;
        }
        tmp = (tmp & (~ VL_SHIFTL_QQI(64,64,32, (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                                                 - 1ULL), this->__PVT__m_lsb)));
        tmp = (tmp | VL_SHIFTL_QQI(64,64,32, value, this->__PVT__m_lsb));
        co_await VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1470)->__VnoInFunc_poke(vlSymsp, __Vtask_poke__378__status, tmp, kind, parent, extension, fname, lineno);
        status = __Vtask_poke__378__status;
        co_await VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1472)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
        VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1473)->__PVT__m_is_locked_by_field = 0U;
        __Vlabel0: ;
    }
}

VlCoroutine Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_peek(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ &value, std::string kind, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_peek\n"); );
    // Locals
    IData/*31:0*/ __Vtask_peek__380__status;
    __Vtask_peek__380__status = 0;
    QData/*63:0*/ __Vtask_peek__380__value;
    __Vtask_peek__380__value = 0;
    // Body
    VL_KEEP_THIS;
    QData/*63:0*/ reg_value;
    reg_value = 0;
    this->__PVT__m_fname = fname;
    this->__PVT__m_lineno = lineno;
    co_await VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1491)->__VnoInFunc_peek(vlSymsp, __Vtask_peek__380__status, __Vtask_peek__380__value, kind, parent, extension, fname, lineno);
    status = __Vtask_peek__380__status;
    reg_value = __Vtask_peek__380__value;
    value = (VL_SHIFTR_QQI(64,64,32, reg_value, this->__PVT__m_lsb) 
             & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                - 1ULL));
}

VlCoroutine Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_mirror(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ check, IData/*31:0*/ path, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_mirror\n"); );
    // Locals
    IData/*31:0*/ __Vtask_mirror__381__status;
    __Vtask_mirror__381__status = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    this->__PVT__m_fname = fname;
    this->__PVT__m_lineno = lineno;
    co_await VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1510)->__VnoInFunc_mirror(vlProcess, vlSymsp, __Vtask_mirror__381__status, check, path, map, parent, prior, extension, fname, lineno);
    status = __Vtask_mirror__381__status;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_set_compare(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ check) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_set_compare\n"); );
    // Body
    this->__PVT__m_check = check;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_compare(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_compare__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_get_compare\n"); );
    // Body
    get_compare__Vfuncrtn = this->__PVT__m_check;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_pre_randomize(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_pre_randomize\n"); );
    // Body
    this->__PVT__value = this->__PVT__m_desired;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_post_randomize(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_post_randomize\n"); );
    // Body
    this->__PVT__m_desired = this->__PVT__value;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_print\n"); );
    // Locals
    std::string __Vfunc_get_name__383__Vfuncout;
    std::string __Vfunc_get_type_name__384__Vfuncout;
    std::string __Vfunc_convert2string__385__Vfuncout;
    // Body
    VL_NULL_CHECK(printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1548)->__VnoInFunc_print_generic(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                    this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__383__Vfuncout);
                }(), __Vfunc_get_name__383__Vfuncout)), 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                    this->__VnoInFunc_get_type_name(vlSymsp, __Vfunc_get_type_name__384__Vfuncout);
                }(), __Vfunc_get_type_name__384__Vfuncout)), 0xffffffffU, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                    this->__VnoInFunc_convert2string(vlProcess, vlSymsp, __Vfunc_convert2string__385__Vfuncout);
                }(), __Vfunc_convert2string__385__Vfuncout)), 0x2eU);
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_convert2string\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg> __Vfunc_get_register__386__Vfuncout;
    IData/*31:0*/ __Vfunc_get_n_bits__387__Vfuncout;
    __Vfunc_get_n_bits__387__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_n_bits__388__Vfuncout;
    __Vfunc_get_n_bits__388__Vfuncout = 0;
    std::string __Vfunc_get_access__389__Vfuncout;
    std::string __Vtask_get_name__390__Vfuncout;
    IData/*31:0*/ __Vfunc_get_lsb_pos__391__Vfuncout;
    __Vfunc_get_lsb_pos__391__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_n_bits__392__Vfuncout;
    __Vfunc_get_n_bits__392__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_lsb_pos__393__Vfuncout;
    __Vfunc_get_lsb_pos__393__Vfuncout = 0;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    // Body
    std::string fmt;
    std::string res_str;
    std::string t_str;
    CData/*0:0*/ with_debug_info;
    with_debug_info = 0;
    std::string prefix;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg> reg_;
    this->__VnoInFunc_get_register(vlSymsp, __Vfunc_get_register__386__Vfuncout);
    reg_ = __Vfunc_get_register__386__Vfuncout;
    VL_SFORMAT_NX(64,fmt,"%0#'h%%%0#h",0,32,([&]() {
                    this->__VnoInFunc_get_n_bits(vlSymsp, __Vfunc_get_n_bits__387__Vfuncout);
                }(), __Vfunc_get_n_bits__387__Vfuncout),
                  32,((IData)(1U) + VL_SHIFTR_III(32,32,32, 
                                                  (([&]() {
                                this->__VnoInFunc_get_n_bits(vlSymsp, __Vfunc_get_n_bits__388__Vfuncout);
                            }(), __Vfunc_get_n_bits__388__Vfuncout) 
                                                   - (IData)(1U)), 2U)));
    __Vtemp_1 = VL_CONCATN_NNN(VL_CONCATN_NNN(" (Mirror: "s, fmt), ")"s);
    __Vtemp_2 = VL_CONCATN_NNN(VL_CONCATN_NNN("%s %s %s[%0d:%0d]="s, fmt), "%s"s);
    __Vtemp_3 = ([&]() {
            this->__VnoInFunc_get_access(vlProcess, vlSymsp, VlNull{}, __Vfunc_get_access__389__Vfuncout);
        }(), __Vfunc_get_access__389__Vfuncout);
    __Vtemp_4 = ([&]() {
            VL_NULL_CHECK(reg_, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1566)
                 ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__390__Vfuncout);
        }(), __Vtask_get_name__390__Vfuncout);
    __Vtemp_5 = ((this->__PVT__m_desired != this->__PVT__m_mirrored)
                  ? VL_SFORMATF_N_NX("%@%20#",0,-1,
                                     &(__Vtemp_1),64,
                                     this->__PVT__m_mirrored) 
                  : ""s);
    VL_SFORMAT_NX(64,convert2string__Vfuncrtn,"%@%@%@%@%10#%10#%20#%@",0,
                  -1,&(__Vtemp_2),-1,&(prefix),-1,&(__Vtemp_3),
                  -1,&(__Vtemp_4),32,((([&]() {
                            this->__VnoInFunc_get_lsb_pos(vlSymsp, __Vfunc_get_lsb_pos__391__Vfuncout);
                        }(), __Vfunc_get_lsb_pos__391__Vfuncout) 
                                       + ([&]() {
                            this->__VnoInFunc_get_n_bits(vlSymsp, __Vfunc_get_n_bits__392__Vfuncout);
                        }(), __Vfunc_get_n_bits__392__Vfuncout)) 
                                      - (IData)(1U)),
                  32,([&]() {
                    this->__VnoInFunc_get_lsb_pos(vlSymsp, __Vfunc_get_lsb_pos__393__Vfuncout);
                }(), __Vfunc_get_lsb_pos__393__Vfuncout),
                  64,this->__PVT__m_desired,-1,&(__Vtemp_5));
    if (this->__PVT__m_read_in_progress) {
        if (((""s != this->__PVT__m_fname) & (0U != this->__PVT__m_lineno))) {
            VL_SFORMAT_NX(64,res_str," from %@:%0d",0,
                          -1,&(this->__PVT__m_fname),
                          32,this->__PVT__m_lineno);
        }
        convert2string__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(convert2string__Vfuncrtn, "\n"s), "currently being read"s), res_str);
    }
    if (this->__PVT__m_write_in_progress) {
        if (((""s != this->__PVT__m_fname) & (0U != this->__PVT__m_lineno))) {
            VL_SFORMAT_NX(64,res_str," from %@:%0d",0,
                          -1,&(this->__PVT__m_fname),
                          32,this->__PVT__m_lineno);
        }
        convert2string__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(convert2string__Vfuncrtn, "\n"s), res_str), "currently being written"s);
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_clone(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_clone\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__394__Vfuncout;
    __Vfunc_uvm_report_enabled__394__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__394__verbosity;
    __Vfunc_uvm_report_enabled__394__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__394__severity;
    __Vfunc_uvm_report_enabled__394__severity = 0;
    std::string __Vfunc_uvm_report_enabled__394__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__395__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__396__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__397__Vfuncout;
    __Vtask_uvm_report_enabled__397__Vfuncout = 0;
    // Body
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__394__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__394__severity = 3U;
                    __Vfunc_uvm_report_enabled__394__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__395__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__395__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__396__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__396__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__394__verbosity, (IData)(__Vfunc_uvm_report_enabled__394__severity), __Vfunc_uvm_report_enabled__394__id, __Vtask_uvm_report_enabled__397__Vfuncout);
                    __Vfunc_uvm_report_enabled__394__Vfuncout 
                        = __Vtask_uvm_report_enabled__397__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__394__Vfuncout))) {
        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "RegModel field cannot be cloned"s, 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s, 0x00000634U, ""s, 1U);
    }
    clone__Vfuncrtn = VlNull{};
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_copy\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__399__Vfuncout;
    __Vfunc_uvm_report_enabled__399__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__399__verbosity;
    __Vfunc_uvm_report_enabled__399__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__399__severity;
    __Vfunc_uvm_report_enabled__399__severity = 0;
    std::string __Vfunc_uvm_report_enabled__399__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__400__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__401__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__402__Vfuncout;
    __Vtask_uvm_report_enabled__402__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__403__id;
    std::string __Vtask_uvm_report_warning__403__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__403__verbosity;
    __Vtask_uvm_report_warning__403__verbosity = 0;
    std::string __Vtask_uvm_report_warning__403__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__403__line;
    __Vtask_uvm_report_warning__403__line = 0;
    std::string __Vtask_uvm_report_warning__403__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__403__report_enabled_checked;
    __Vtask_uvm_report_warning__403__report_enabled_checked = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__404__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__405__Vfuncout;
    // Body
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__399__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__399__severity = 1U;
                    __Vfunc_uvm_report_enabled__399__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__400__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__400__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__401__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__401__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__399__verbosity, (IData)(__Vfunc_uvm_report_enabled__399__severity), __Vfunc_uvm_report_enabled__399__id, __Vtask_uvm_report_enabled__402__Vfuncout);
                    __Vfunc_uvm_report_enabled__399__Vfuncout 
                        = __Vtask_uvm_report_enabled__402__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__399__Vfuncout))) {
        __Vtask_uvm_report_warning__403__report_enabled_checked = 1U;
        __Vtask_uvm_report_warning__403__context_name = ""s;
        __Vtask_uvm_report_warning__403__line = 0x0000063bU;
        __Vtask_uvm_report_warning__403__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
        __Vtask_uvm_report_warning__403__verbosity = 0U;
        __Vtask_uvm_report_warning__403__message = "RegModel field copy not yet implemented"s;
        __Vtask_uvm_report_warning__403__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__404__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__404__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__405__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__405__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__403__id, __Vtask_uvm_report_warning__403__message, __Vtask_uvm_report_warning__403__verbosity, __Vtask_uvm_report_warning__403__filename, __Vtask_uvm_report_warning__403__line, __Vtask_uvm_report_warning__403__context_name, (IData)(__Vtask_uvm_report_warning__403__report_enabled_checked));
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_compare(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_compare\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__407__Vfuncout;
    __Vfunc_uvm_report_enabled__407__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__407__verbosity;
    __Vfunc_uvm_report_enabled__407__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__407__severity;
    __Vfunc_uvm_report_enabled__407__severity = 0;
    std::string __Vfunc_uvm_report_enabled__407__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__408__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__409__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__410__Vfuncout;
    __Vtask_uvm_report_enabled__410__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__411__id;
    std::string __Vtask_uvm_report_warning__411__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__411__verbosity;
    __Vtask_uvm_report_warning__411__verbosity = 0;
    std::string __Vtask_uvm_report_warning__411__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__411__line;
    __Vtask_uvm_report_warning__411__line = 0;
    std::string __Vtask_uvm_report_warning__411__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__411__report_enabled_checked;
    __Vtask_uvm_report_warning__411__report_enabled_checked = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__412__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__413__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__407__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__407__severity = 1U;
                    __Vfunc_uvm_report_enabled__407__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__408__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__408__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__409__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__409__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__407__verbosity, (IData)(__Vfunc_uvm_report_enabled__407__severity), __Vfunc_uvm_report_enabled__407__id, __Vtask_uvm_report_enabled__410__Vfuncout);
                    __Vfunc_uvm_report_enabled__407__Vfuncout 
                        = __Vtask_uvm_report_enabled__410__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__407__Vfuncout))) {
        __Vtask_uvm_report_warning__411__report_enabled_checked = 1U;
        __Vtask_uvm_report_warning__411__context_name = ""s;
        __Vtask_uvm_report_warning__411__line = 0x00000644U;
        __Vtask_uvm_report_warning__411__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
        __Vtask_uvm_report_warning__411__verbosity = 0U;
        __Vtask_uvm_report_warning__411__message = "RegModel field compare not yet implemented"s;
        __Vtask_uvm_report_warning__411__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__412__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__412__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__413__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__413__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__411__id, __Vtask_uvm_report_warning__411__message, __Vtask_uvm_report_warning__411__verbosity, __Vtask_uvm_report_warning__411__filename, __Vtask_uvm_report_warning__411__line, __Vtask_uvm_report_warning__411__context_name, (IData)(__Vtask_uvm_report_warning__411__report_enabled_checked));
    }
    do_compare__Vfuncrtn = 0U;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_pack(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_pack\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__415__Vfuncout;
    __Vfunc_uvm_report_enabled__415__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__415__verbosity;
    __Vfunc_uvm_report_enabled__415__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__415__severity;
    __Vfunc_uvm_report_enabled__415__severity = 0;
    std::string __Vfunc_uvm_report_enabled__415__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__416__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__417__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__418__Vfuncout;
    __Vtask_uvm_report_enabled__418__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__419__id;
    std::string __Vtask_uvm_report_warning__419__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__419__verbosity;
    __Vtask_uvm_report_warning__419__verbosity = 0;
    std::string __Vtask_uvm_report_warning__419__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__419__line;
    __Vtask_uvm_report_warning__419__line = 0;
    std::string __Vtask_uvm_report_warning__419__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__419__report_enabled_checked;
    __Vtask_uvm_report_warning__419__report_enabled_checked = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__420__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__421__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__415__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__415__severity = 1U;
                    __Vfunc_uvm_report_enabled__415__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__416__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__416__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__417__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__417__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__415__verbosity, (IData)(__Vfunc_uvm_report_enabled__415__severity), __Vfunc_uvm_report_enabled__415__id, __Vtask_uvm_report_enabled__418__Vfuncout);
                    __Vfunc_uvm_report_enabled__415__Vfuncout 
                        = __Vtask_uvm_report_enabled__418__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__415__Vfuncout))) {
        __Vtask_uvm_report_warning__419__report_enabled_checked = 1U;
        __Vtask_uvm_report_warning__419__context_name = ""s;
        __Vtask_uvm_report_warning__419__line = 0x0000064dU;
        __Vtask_uvm_report_warning__419__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
        __Vtask_uvm_report_warning__419__verbosity = 0U;
        __Vtask_uvm_report_warning__419__message = "RegModel field cannot be packed"s;
        __Vtask_uvm_report_warning__419__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__420__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__420__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__421__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__421__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__419__id, __Vtask_uvm_report_warning__419__message, __Vtask_uvm_report_warning__419__verbosity, __Vtask_uvm_report_warning__419__filename, __Vtask_uvm_report_warning__419__line, __Vtask_uvm_report_warning__419__context_name, (IData)(__Vtask_uvm_report_warning__419__report_enabled_checked));
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_unpack(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_unpack\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__423__Vfuncout;
    __Vfunc_uvm_report_enabled__423__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__423__verbosity;
    __Vfunc_uvm_report_enabled__423__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__423__severity;
    __Vfunc_uvm_report_enabled__423__severity = 0;
    std::string __Vfunc_uvm_report_enabled__423__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__424__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__425__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__426__Vfuncout;
    __Vtask_uvm_report_enabled__426__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__427__id;
    std::string __Vtask_uvm_report_warning__427__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__427__verbosity;
    __Vtask_uvm_report_warning__427__verbosity = 0;
    std::string __Vtask_uvm_report_warning__427__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__427__line;
    __Vtask_uvm_report_warning__427__line = 0;
    std::string __Vtask_uvm_report_warning__427__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__427__report_enabled_checked;
    __Vtask_uvm_report_warning__427__report_enabled_checked = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__428__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__429__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__423__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__423__severity = 1U;
                    __Vfunc_uvm_report_enabled__423__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__424__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__424__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__425__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__425__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__423__verbosity, (IData)(__Vfunc_uvm_report_enabled__423__severity), __Vfunc_uvm_report_enabled__423__id, __Vtask_uvm_report_enabled__426__Vfuncout);
                    __Vfunc_uvm_report_enabled__423__Vfuncout 
                        = __Vtask_uvm_report_enabled__426__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__423__Vfuncout))) {
        __Vtask_uvm_report_warning__427__report_enabled_checked = 1U;
        __Vtask_uvm_report_warning__427__context_name = ""s;
        __Vtask_uvm_report_warning__427__line = 0x00000654U;
        __Vtask_uvm_report_warning__427__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
        __Vtask_uvm_report_warning__427__verbosity = 0U;
        __Vtask_uvm_report_warning__427__message = "RegModel field cannot be unpacked"s;
        __Vtask_uvm_report_warning__427__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__428__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__428__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__429__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__429__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__427__id, __Vtask_uvm_report_warning__427__message, __Vtask_uvm_report_warning__427__verbosity, __Vtask_uvm_report_warning__427__filename, __Vtask_uvm_report_warning__427__line, __Vtask_uvm_report_warning__427__context_name, (IData)(__Vtask_uvm_report_warning__427__report_enabled_checked));
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_randomize(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__433__Vfuncout;
    __Vfunc___Vbasic_randomize__433__Vfuncout = 0;
    // Body
    this->__VnoInFunc_pre_randomize(vlSymsp);
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__433__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__433__Vfuncout));
    this->__VnoInFunc_post_randomize(vlSymsp);
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_uvm_reg_field_valid_setup_constraint(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_uvm_reg_field_valid_setup_constraint\n"); );
    // Locals
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    // Body
    __Vtemp_1 = (Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__Vrandmode.at(0U)
                  ? "value"s : VL_SFORMATF_N_NX("#x%x",0,
                                                64,
                                                this->__PVT__value) );
    __Vtemp_2 = VL_SFORMATF_N_NX("#x%x",0,64,VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size)) ;
    __Vtemp_3 = VL_SFORMATF_N_NX("#b%b",0,1,(0x00000040U 
                                             > this->__PVT__m_size)) ;
    __Vtemp_4 = VL_SFORMATF_N_NX("(__Vbv (bvult %@ %@))",0,
                                 -1,&(__Vtemp_1),-1,
                                 &(__Vtemp_2)) ;
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.hard(VL_SFORMATF_N_NX("(__Vbv (=> (__Vbool %@) (__Vbool %@)))",0,
                                                                                -1,
                                                                                &(__Vtemp_3),
                                                                                -1,
                                                                                &(__Vtemp_4)) );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc___Vsetup_constraints(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc___Vsetup_constraints\n"); );
    // Body
    this->__VnoInFunc_uvm_reg_field_valid_setup_constraint(vlSymsp);
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc___Vbasic_randomize(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::_ctor_var_reset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__value = 0;
    __PVT__m_mirrored = 0;
    __PVT__m_desired = 0;
    __PVT__m_lsb = 0;
    __PVT__m_size = 0;
    __PVT__m_volatile = 0;
    __PVT__m_reset.atDefault() = 0;
    __PVT__m_written = 0;
    __PVT__m_read_in_progress = 0;
    __PVT__m_write_in_progress = 0;
    __PVT__m_lineno = 0;
    __PVT__m_cover_on = 0;
    __PVT__m_individually_accessible = 0;
    __PVT__m_check = 0;
}

std::string VL_TO_STRING(const VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::to_string_middle\n"); );
    // Body
    std::string out;
    out += "value:" + VL_TO_STRING(__PVT__value);
    out += ", m_mirrored:" + VL_TO_STRING(__PVT__m_mirrored);
    out += ", m_desired:" + VL_TO_STRING(__PVT__m_desired);
    out += ", m_access:" + VL_TO_STRING(__PVT__m_access);
    out += ", m_parent:" + VL_TO_STRING(__PVT__m_parent);
    out += ", m_lsb:" + VL_TO_STRING(__PVT__m_lsb);
    out += ", m_size:" + VL_TO_STRING(__PVT__m_size);
    out += ", m_volatile:" + VL_TO_STRING(__PVT__m_volatile);
    out += ", m_reset:" + VL_TO_STRING(__PVT__m_reset);
    out += ", m_written:" + VL_TO_STRING(__PVT__m_written);
    out += ", m_read_in_progress:" + VL_TO_STRING(__PVT__m_read_in_progress);
    out += ", m_write_in_progress:" + VL_TO_STRING(__PVT__m_write_in_progress);
    out += ", m_fname:" + VL_TO_STRING(__PVT__m_fname);
    out += ", m_lineno:" + VL_TO_STRING(__PVT__m_lineno);
    out += ", m_cover_on:" + VL_TO_STRING(__PVT__m_cover_on);
    out += ", m_individually_accessible:" + VL_TO_STRING(__PVT__m_individually_accessible);
    out += ", m_check:" + VL_TO_STRING(__PVT__m_check);
    out += ", "+ Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
