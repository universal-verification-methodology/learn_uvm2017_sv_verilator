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
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__6__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__6__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__4__verbosity, (IData)(__Vfunc_uvm_report_enabled__4__severity), __Vfunc_uvm_report_enabled__4__id, __Vtask_uvm_report_enabled__7__Vfuncout);
                        __Vfunc_uvm_report_enabled__4__Vfuncout 
                            = __Vtask_uvm_report_enabled__7__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__4__Vfuncout))) {
            __Vtask_uvm_report_error__8__report_enabled_checked = 1U;
            __Vtask_uvm_report_error__8__context_name = ""s;
            __Vtask_uvm_report_error__8__line = 0x000001a0U;
            __Vtask_uvm_report_error__8__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
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
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__11__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__11__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__8__id, __Vtask_uvm_report_error__8__message, __Vtask_uvm_report_error__8__verbosity, __Vtask_uvm_report_error__8__filename, __Vtask_uvm_report_error__8__line, __Vtask_uvm_report_error__8__context_name, (IData)(__Vtask_uvm_report_error__8__report_enabled_checked));
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
    VL_NULL_CHECK(this->__PVT__m_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 432)->__VnoInFunc_add_field(vlSymsp, 
                                                                                VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field>{this});
    if ((! vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_field__Vclpkg.__PVT__m_policy_names.exists(this->__PVT__m_access))) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__15__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__15__severity = 2U;
                        __Vfunc_uvm_report_enabled__15__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__16__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__16__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__17__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__17__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__15__verbosity, (IData)(__Vfunc_uvm_report_enabled__15__severity), __Vfunc_uvm_report_enabled__15__id, __Vtask_uvm_report_enabled__18__Vfuncout);
                        __Vfunc_uvm_report_enabled__15__Vfuncout 
                            = __Vtask_uvm_report_enabled__18__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__15__Vfuncout))) {
            __Vtask_uvm_report_error__19__report_enabled_checked = 1U;
            __Vtask_uvm_report_error__19__context_name = ""s;
            __Vtask_uvm_report_error__19__line = 0x000001b4U;
            __Vtask_uvm_report_error__19__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
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
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__22__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__22__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__19__id, __Vtask_uvm_report_error__19__message, __Vtask_uvm_report_error__19__verbosity, __Vtask_uvm_report_error__19__filename, __Vtask_uvm_report_error__19__line, __Vtask_uvm_report_error__19__context_name, (IData)(__Vtask_uvm_report_error__19__report_enabled_checked));
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
                    VL_NULL_CHECK(this->__PVT__m_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 468)
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
    IData/*31:0*/ __Vfunc_uvm_report_enabled__29__Vfuncout;
    __Vfunc_uvm_report_enabled__29__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__29__verbosity;
    __Vfunc_uvm_report_enabled__29__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__29__severity;
    __Vfunc_uvm_report_enabled__29__severity = 0;
    std::string __Vfunc_uvm_report_enabled__29__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__30__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__31__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__32__Vfuncout;
    __Vtask_uvm_report_enabled__32__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__33__id;
    std::string __Vtask_uvm_report_warning__33__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__33__verbosity;
    __Vtask_uvm_report_warning__33__verbosity = 0;
    std::string __Vtask_uvm_report_warning__33__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__33__line;
    __Vtask_uvm_report_warning__33__line = 0;
    std::string __Vtask_uvm_report_warning__33__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__33__report_enabled_checked;
    __Vtask_uvm_report_warning__33__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__34__Vfuncout;
    std::string __Vfunc_get_name__35__Vfuncout;
    std::string __Vtask_get_full_name__36__Vfuncout;
    std::string __Vtask_get_rights__37__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__38__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__39__Vfuncout;
    // Body
    std::string __VCase_h74345898__0;
    std::string field_access;
    {
        field_access = this->__PVT__m_access;
        if ((map == ([&]() {
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_map__Vclpkg.__VnoInFunc_backdoor(vlProcess, vlSymsp, __Vfunc_backdoor__27__Vfuncout);
                    }(), __Vfunc_backdoor__27__Vfuncout))) {
            get_access__Vfuncrtn = field_access;
            goto __Vlabel0;
        }
        if (([&]() {
                    VL_NULL_CHECK(this->__PVT__m_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 523)
             ->__VnoInFunc_get_rights(vlProcess, vlSymsp, map, __Vtask_get_rights__28__Vfuncout);
                    __VCase_h74345898__0 = __Vtask_get_rights__28__Vfuncout;
                }(), 1U)) {
            if (("RW"s == __VCase_h74345898__0)) {
                get_access__Vfuncrtn = field_access;
                goto __Vlabel0;
            } else if (("RO"s == __VCase_h74345898__0)) {
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
            } else if (("WO"s == __VCase_h74345898__0)) {
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
                                __Vfunc_uvm_report_enabled__29__id = "RegModel"s;
                                __Vfunc_uvm_report_enabled__29__severity = 1U;
                                __Vfunc_uvm_report_enabled__29__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__30__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__30__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__31__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__31__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__29__verbosity, (IData)(__Vfunc_uvm_report_enabled__29__severity), __Vfunc_uvm_report_enabled__29__id, __Vtask_uvm_report_enabled__32__Vfuncout);
                                __Vfunc_uvm_report_enabled__29__Vfuncout 
                                    = __Vtask_uvm_report_enabled__32__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__29__Vfuncout))) {
                    __Vtask_uvm_report_warning__33__report_enabled_checked = 1U;
                    __Vtask_uvm_report_warning__33__context_name = ""s;
                    __Vtask_uvm_report_warning__33__line = 0x0000023aU;
                    __Vtask_uvm_report_warning__33__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
                    __Vtask_uvm_report_warning__33__verbosity = 0U;
                    __Vtask_uvm_report_warning__33__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register '"s, 
                                                                                ([&]() {
                                                                VL_NULL_CHECK(this->__PVT__m_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 570)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__34__Vfuncout);
                                                            }(), __Vtask_get_full_name__34__Vfuncout)), "' containing field '"s), 
                                                                                ([&]() {
                                                        this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__35__Vfuncout);
                                                    }(), __Vfunc_get_name__35__Vfuncout)), "' is mapped in map '"s), 
                                                                                ([&]() {
                                                VL_NULL_CHECK(map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 570)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__36__Vfuncout);
                                            }(), __Vtask_get_full_name__36__Vfuncout)), "' with unknown access right '"s), 
                                                                           ([&]() {
                                        VL_NULL_CHECK(this->__PVT__m_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 570)
                                                                            ->__VnoInFunc_get_rights(vlProcess, vlSymsp, map, __Vtask_get_rights__37__Vfuncout);
                                    }(), __Vtask_get_rights__37__Vfuncout)), "'"s));
                    __Vtask_uvm_report_warning__33__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__38__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__38__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__39__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__39__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__33__id, __Vtask_uvm_report_warning__33__message, __Vtask_uvm_report_warning__33__verbosity, __Vtask_uvm_report_warning__33__filename, __Vtask_uvm_report_warning__33__line, __Vtask_uvm_report_warning__33__context_name, (IData)(__Vtask_uvm_report_warning__33__report_enabled_checked));
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
    IData/*31:0*/ __Vfunc_uvm_report_enabled__41__Vfuncout;
    __Vfunc_uvm_report_enabled__41__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__41__verbosity;
    __Vfunc_uvm_report_enabled__41__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__41__severity;
    __Vfunc_uvm_report_enabled__41__severity = 0;
    std::string __Vfunc_uvm_report_enabled__41__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__42__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__43__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__44__Vfuncout;
    __Vtask_uvm_report_enabled__44__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__45__id;
    std::string __Vtask_uvm_report_error__45__message;
    IData/*31:0*/ __Vtask_uvm_report_error__45__verbosity;
    __Vtask_uvm_report_error__45__verbosity = 0;
    std::string __Vtask_uvm_report_error__45__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__45__line;
    __Vtask_uvm_report_error__45__line = 0;
    std::string __Vtask_uvm_report_error__45__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__45__report_enabled_checked;
    __Vtask_uvm_report_error__45__report_enabled_checked = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__46__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__47__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    set_access__Vfuncrtn = this->__PVT__m_access;
    this->__PVT__m_access = VL_TOUPPER_NN(mode);
    if ((! vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_field__Vclpkg.__PVT__m_policy_names.exists(this->__PVT__m_access))) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__41__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__41__severity = 2U;
                        __Vfunc_uvm_report_enabled__41__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__42__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__42__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__43__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__43__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__41__verbosity, (IData)(__Vfunc_uvm_report_enabled__41__severity), __Vfunc_uvm_report_enabled__41__id, __Vtask_uvm_report_enabled__44__Vfuncout);
                        __Vfunc_uvm_report_enabled__41__Vfuncout 
                            = __Vtask_uvm_report_enabled__44__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__41__Vfuncout))) {
            __Vtask_uvm_report_error__45__report_enabled_checked = 1U;
            __Vtask_uvm_report_error__45__context_name = ""s;
            __Vtask_uvm_report_error__45__line = 0x00000248U;
            __Vtask_uvm_report_error__45__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
            __Vtask_uvm_report_error__45__verbosity = 0U;
            __Vtask_uvm_report_error__45__message = 
                VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_CONCATN_NNN("Access policy '"s, this->__PVT__m_access), "' is not a defined field access policy"s));
            __Vtask_uvm_report_error__45__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__46__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__46__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__47__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__47__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__45__id, __Vtask_uvm_report_error__45__message, __Vtask_uvm_report_error__45__verbosity, __Vtask_uvm_report_error__45__filename, __Vtask_uvm_report_error__45__line, __Vtask_uvm_report_error__45__context_name, (IData)(__Vtask_uvm_report_error__45__report_enabled_checked));
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
    std::string __Vfunc_get_access__49__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__50__Vfuncout;
    __Vfunc_uvm_report_enabled__50__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__50__verbosity;
    __Vfunc_uvm_report_enabled__50__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__50__severity;
    __Vfunc_uvm_report_enabled__50__severity = 0;
    std::string __Vfunc_uvm_report_enabled__50__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__51__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__52__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__53__Vfuncout;
    __Vtask_uvm_report_enabled__53__Vfuncout = 0;
    // Body
    std::string __VCase_hce4fdefc__0;
    QData/*63:0*/ mask;
    mask = 0;
    {
        mask = (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                - 1ULL);
        if (([&]() {
                    this->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __Vfunc_get_access__49__Vfuncout);
                    __VCase_hce4fdefc__0 = __Vfunc_get_access__49__Vfuncout;
                }(), (((((((("RO"s == __VCase_hce4fdefc__0) 
                            | ("RW"s == __VCase_hce4fdefc__0)) 
                           | ("RC"s == __VCase_hce4fdefc__0)) 
                          | ("RS"s == __VCase_hce4fdefc__0)) 
                         | ("WC"s == __VCase_hce4fdefc__0)) 
                        | ("WS"s == __VCase_hce4fdefc__0)) 
                       | ("WRC"s == __VCase_hce4fdefc__0)) 
                      | ("WRS"s == __VCase_hce4fdefc__0)))) {
            if (("RO"s == __VCase_hce4fdefc__0)) {
                XpredictX__Vfuncrtn = cur_val;
                goto __Vlabel0;
            } else if (("RW"s == __VCase_hce4fdefc__0)) {
                XpredictX__Vfuncrtn = wr_val;
                goto __Vlabel0;
            } else if (("RC"s == __VCase_hce4fdefc__0)) {
                XpredictX__Vfuncrtn = cur_val;
                goto __Vlabel0;
            } else if (("RS"s == __VCase_hce4fdefc__0)) {
                XpredictX__Vfuncrtn = cur_val;
                goto __Vlabel0;
            } else if (("WC"s == __VCase_hce4fdefc__0)) {
                XpredictX__Vfuncrtn = 0ULL;
                goto __Vlabel0;
            } else if (("WS"s == __VCase_hce4fdefc__0)) {
                XpredictX__Vfuncrtn = mask;
                goto __Vlabel0;
            } else if (("WRC"s == __VCase_hce4fdefc__0)) {
                XpredictX__Vfuncrtn = wr_val;
                goto __Vlabel0;
            } else {
                XpredictX__Vfuncrtn = wr_val;
                goto __Vlabel0;
            }
        } else if ((((((((("WSRC"s == __VCase_hce4fdefc__0) 
                          | ("WCRS"s == __VCase_hce4fdefc__0)) 
                         | ("W1C"s == __VCase_hce4fdefc__0)) 
                        | ("W1S"s == __VCase_hce4fdefc__0)) 
                       | ("W1T"s == __VCase_hce4fdefc__0)) 
                      | ("W0C"s == __VCase_hce4fdefc__0)) 
                     | ("W0S"s == __VCase_hce4fdefc__0)) 
                    | ("W0T"s == __VCase_hce4fdefc__0))) {
            if (("WSRC"s == __VCase_hce4fdefc__0)) {
                XpredictX__Vfuncrtn = mask;
                goto __Vlabel0;
            } else if (("WCRS"s == __VCase_hce4fdefc__0)) {
                XpredictX__Vfuncrtn = 0ULL;
                goto __Vlabel0;
            } else if (("W1C"s == __VCase_hce4fdefc__0)) {
                XpredictX__Vfuncrtn = (cur_val & (~ wr_val));
                goto __Vlabel0;
            } else if (("W1S"s == __VCase_hce4fdefc__0)) {
                XpredictX__Vfuncrtn = (cur_val | wr_val);
                goto __Vlabel0;
            } else if (("W1T"s == __VCase_hce4fdefc__0)) {
                XpredictX__Vfuncrtn = (cur_val ^ wr_val);
                goto __Vlabel0;
            } else if (("W0C"s == __VCase_hce4fdefc__0)) {
                XpredictX__Vfuncrtn = (cur_val & wr_val);
                goto __Vlabel0;
            } else if (("W0S"s == __VCase_hce4fdefc__0)) {
                XpredictX__Vfuncrtn = (cur_val | ((~ wr_val) 
                                                  & mask));
                goto __Vlabel0;
            } else {
                XpredictX__Vfuncrtn = (cur_val ^ ((~ wr_val) 
                                                  & mask));
                goto __Vlabel0;
            }
        } else if ((((((((("W1SRC"s == __VCase_hce4fdefc__0) 
                          | ("W1CRS"s == __VCase_hce4fdefc__0)) 
                         | ("W0SRC"s == __VCase_hce4fdefc__0)) 
                        | ("W0CRS"s == __VCase_hce4fdefc__0)) 
                       | ("WO"s == __VCase_hce4fdefc__0)) 
                      | ("WOC"s == __VCase_hce4fdefc__0)) 
                     | ("WOS"s == __VCase_hce4fdefc__0)) 
                    | ("W1"s == __VCase_hce4fdefc__0))) {
            if (("W1SRC"s == __VCase_hce4fdefc__0)) {
                XpredictX__Vfuncrtn = (cur_val | wr_val);
                goto __Vlabel0;
            } else if (("W1CRS"s == __VCase_hce4fdefc__0)) {
                XpredictX__Vfuncrtn = (cur_val & (~ wr_val));
                goto __Vlabel0;
            } else if (("W0SRC"s == __VCase_hce4fdefc__0)) {
                XpredictX__Vfuncrtn = (cur_val | ((~ wr_val) 
                                                  & mask));
                goto __Vlabel0;
            } else if (("W0CRS"s == __VCase_hce4fdefc__0)) {
                XpredictX__Vfuncrtn = (cur_val & wr_val);
                goto __Vlabel0;
            } else if (("WO"s == __VCase_hce4fdefc__0)) {
                XpredictX__Vfuncrtn = wr_val;
                goto __Vlabel0;
            } else if (("WOC"s == __VCase_hce4fdefc__0)) {
                XpredictX__Vfuncrtn = 0ULL;
                goto __Vlabel0;
            } else if (("WOS"s == __VCase_hce4fdefc__0)) {
                XpredictX__Vfuncrtn = mask;
                goto __Vlabel0;
            } else {
                XpredictX__Vfuncrtn = ((IData)(this->__PVT__m_written)
                                        ? cur_val : wr_val);
                goto __Vlabel0;
            }
        } else if (("WO1"s == __VCase_hce4fdefc__0)) {
            XpredictX__Vfuncrtn = ((IData)(this->__PVT__m_written)
                                    ? cur_val : wr_val);
            goto __Vlabel0;
        } else if (("NOACCESS"s == __VCase_hce4fdefc__0)) {
            XpredictX__Vfuncrtn = cur_val;
            goto __Vlabel0;
        } else {
            XpredictX__Vfuncrtn = wr_val;
            goto __Vlabel0;
        }
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__50__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__50__severity = 3U;
                        __Vfunc_uvm_report_enabled__50__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__51__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__51__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__52__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__52__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__50__verbosity, (IData)(__Vfunc_uvm_report_enabled__50__severity), __Vfunc_uvm_report_enabled__50__id, __Vtask_uvm_report_enabled__53__Vfuncout);
                        __Vfunc_uvm_report_enabled__50__Vfuncout 
                            = __Vtask_uvm_report_enabled__53__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__50__Vfuncout))) {
            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "uvm_reg_field::XpredictX(): Internal error"s, 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s, 0x000002b3U, ""s, 1U);
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
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 707)->__PVT__value.atWrite(0U) 
        = value;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 708)->__PVT__path 
        = path;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 709)->__PVT__map 
        = map;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 710)->__PVT__fname 
        = fname;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 711)->__PVT__lineno 
        = lineno;
    this->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, kind, (IData)(be));
    predict__Vfuncrtn = ((1U == VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 713)
                          ->__PVT__status) ? 0U : 1U);
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_predict(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> rw, IData/*31:0*/ kind, CData/*7:0*/ be) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_predict\n"); );
    // Locals
    QData/*63:0*/ __Vfunc_XpredictX__58__Vfuncout;
    __Vfunc_XpredictX__58__Vfuncout = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_first__59__Vfuncout;
    QData/*63:0*/ __Vtask_post_predict__60__value;
    __Vtask_post_predict__60__value = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_next__61__Vfuncout;
    std::string __Vfunc_get_access__63__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_first__64__Vfuncout;
    QData/*63:0*/ __Vtask_post_predict__65__value;
    __Vtask_post_predict__65__value = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_next__66__Vfuncout;
    CData/*0:0*/ __Vtask_is_busy__67__Vfuncout;
    __Vtask_is_busy__67__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__68__Vfuncout;
    __Vfunc_uvm_report_enabled__68__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__68__verbosity;
    __Vfunc_uvm_report_enabled__68__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__68__severity;
    __Vfunc_uvm_report_enabled__68__severity = 0;
    std::string __Vfunc_uvm_report_enabled__68__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__69__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__70__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__71__Vfuncout;
    __Vtask_uvm_report_enabled__71__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__72__id;
    std::string __Vtask_uvm_report_warning__72__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__72__verbosity;
    __Vtask_uvm_report_warning__72__verbosity = 0;
    std::string __Vtask_uvm_report_warning__72__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__72__line;
    __Vtask_uvm_report_warning__72__line = 0;
    std::string __Vtask_uvm_report_warning__72__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__72__report_enabled_checked;
    __Vtask_uvm_report_warning__72__report_enabled_checked = 0;
    std::string __Vfunc_get_name__73__Vfuncout;
    std::string __Vtask_get_full_name__74__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__75__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__76__Vfuncout;
    // Body
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callback_iter__pi101> unnamedblk278__DOT__cbs;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk278__DOT__unnamedblk279__DOT__cb;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callback_iter__pi101> unnamedblk280__DOT__cbs;
    std::string unnamedblk280__DOT__unnamedblk281__DOT__acc;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk280__DOT__unnamedblk282__DOT__cb;
    QData/*63:0*/ field_val;
    field_val = 0;
    {
        field_val = (VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 723)
                     ->__PVT__value.at(0U) & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                                              - 1ULL));
        if ((1U != VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 725)
             ->__PVT__status)) {
            VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 726)->__PVT__status = 0U;
        }
        if ((1U & (~ (IData)(be)))) {
            goto __Vlabel0;
        }
        this->__PVT__m_fname = VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 732)
            ->__PVT__fname;
        this->__PVT__m_lineno = VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 733)
            ->__PVT__lineno;
        if ((2U == kind)) {
            unnamedblk278__DOT__cbs = VL_NEW(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callback_iter__pi101, vlSymsp, 
                                             VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field>{this});
            if (((0U == VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 741)
                  ->__PVT__path) || (2U == VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 741)
                                     ->__PVT__path))) {
                this->__VnoInFunc_XpredictX(vlProcess, vlSymsp, this->__PVT__m_mirrored, field_val, VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 742)
                                            ->__PVT__map, __Vfunc_XpredictX__58__Vfuncout);
                field_val = __Vfunc_XpredictX__58__Vfuncout;
            }
            this->__PVT__m_written = 1U;
            VL_NULL_CHECK(unnamedblk278__DOT__cbs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 746)->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__59__Vfuncout);
            unnamedblk278__DOT__unnamedblk279__DOT__cb 
                = __Vtask_first__59__Vfuncout;
            while ((VlNull{} != unnamedblk278__DOT__unnamedblk279__DOT__cb)) {
                __Vtask_post_predict__60__value = field_val;
                VL_NULL_CHECK(unnamedblk278__DOT__unnamedblk279__DOT__cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 747)->__VnoInFunc_post_predict(vlSymsp, 
                                                                                VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field>{this}, this->__PVT__m_mirrored, __Vtask_post_predict__60__value, 2U, VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 748)
                                                                                ->__PVT__path, VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 748)
                                                                                ->__PVT__map);
                field_val = __Vtask_post_predict__60__value;
                VL_NULL_CHECK(unnamedblk278__DOT__cbs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 746)->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__61__Vfuncout);
                unnamedblk278__DOT__unnamedblk279__DOT__cb 
                    = __Vtask_next__61__Vfuncout;
            }
            field_val = (field_val & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                                      - 1ULL));
        } else if ((1U == kind)) {
            unnamedblk280__DOT__cbs = VL_NEW(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callback_iter__pi101, vlSymsp, 
                                             VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field>{this});
            if (((0U == VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 758)
                  ->__PVT__path) || (2U == VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 758)
                                     ->__PVT__path))) {
                this->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 760)
                                             ->__PVT__map, __Vfunc_get_access__63__Vfuncout);
                unnamedblk280__DOT__unnamedblk281__DOT__acc 
                    = __Vfunc_get_access__63__Vfuncout;
                if (((((("RC"s == unnamedblk280__DOT__unnamedblk281__DOT__acc) 
                        | ("WRC"s == unnamedblk280__DOT__unnamedblk281__DOT__acc)) 
                       | ("WSRC"s == unnamedblk280__DOT__unnamedblk281__DOT__acc)) 
                      | ("W1SRC"s == unnamedblk280__DOT__unnamedblk281__DOT__acc)) 
                     | ("W0SRC"s == unnamedblk280__DOT__unnamedblk281__DOT__acc))) {
                    field_val = 0ULL;
                } else if (((((("RS"s == unnamedblk280__DOT__unnamedblk281__DOT__acc) 
                               | ("WRS"s == unnamedblk280__DOT__unnamedblk281__DOT__acc)) 
                              | ("WCRS"s == unnamedblk280__DOT__unnamedblk281__DOT__acc)) 
                             | ("W1CRS"s == unnamedblk280__DOT__unnamedblk281__DOT__acc)) 
                            | ("W0CRS"s == unnamedblk280__DOT__unnamedblk281__DOT__acc))) {
                    field_val = (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                                 - 1ULL);
                } else if (((((("WO"s == unnamedblk280__DOT__unnamedblk281__DOT__acc) 
                               | ("WOC"s == unnamedblk280__DOT__unnamedblk281__DOT__acc)) 
                              | ("WOS"s == unnamedblk280__DOT__unnamedblk281__DOT__acc)) 
                             | ("WO1"s == unnamedblk280__DOT__unnamedblk281__DOT__acc)) 
                            | ("NOACCESS"s == unnamedblk280__DOT__unnamedblk281__DOT__acc))) {
                    goto __Vlabel0;
                }
            }
            VL_NULL_CHECK(unnamedblk280__DOT__cbs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 784)->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__64__Vfuncout);
            unnamedblk280__DOT__unnamedblk282__DOT__cb 
                = __Vtask_first__64__Vfuncout;
            while ((VlNull{} != unnamedblk280__DOT__unnamedblk282__DOT__cb)) {
                __Vtask_post_predict__65__value = field_val;
                VL_NULL_CHECK(unnamedblk280__DOT__unnamedblk282__DOT__cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 785)->__VnoInFunc_post_predict(vlSymsp, 
                                                                                VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field>{this}, this->__PVT__m_mirrored, __Vtask_post_predict__65__value, 1U, VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 786)
                                                                                ->__PVT__path, VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 786)
                                                                                ->__PVT__map);
                field_val = __Vtask_post_predict__65__value;
                VL_NULL_CHECK(unnamedblk280__DOT__cbs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 784)->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__66__Vfuncout);
                unnamedblk280__DOT__unnamedblk282__DOT__cb 
                    = __Vtask_next__66__Vfuncout;
            }
            field_val = (field_val & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                                      - 1ULL));
        } else if ((0U == kind)) {
            if (([&]() {
                        VL_NULL_CHECK(this->__PVT__m_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 794)
                 ->__VnoInFunc_is_busy(vlSymsp, __Vtask_is_busy__67__Vfuncout);
                    }(), (IData)(__Vtask_is_busy__67__Vfuncout))) {
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__68__id = "RegModel"s;
                                __Vfunc_uvm_report_enabled__68__severity = 1U;
                                __Vfunc_uvm_report_enabled__68__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__69__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__69__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__70__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__70__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__68__verbosity, (IData)(__Vfunc_uvm_report_enabled__68__severity), __Vfunc_uvm_report_enabled__68__id, __Vtask_uvm_report_enabled__71__Vfuncout);
                                __Vfunc_uvm_report_enabled__68__Vfuncout 
                                    = __Vtask_uvm_report_enabled__71__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__68__Vfuncout))) {
                    __Vtask_uvm_report_warning__72__report_enabled_checked = 1U;
                    __Vtask_uvm_report_warning__72__context_name = ""s;
                    __Vtask_uvm_report_warning__72__line = 0x0000031dU;
                    __Vtask_uvm_report_warning__72__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
                    __Vtask_uvm_report_warning__72__verbosity = 0U;
                    __Vtask_uvm_report_warning__72__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Trying to predict value of field '"s, 
                                                                                ([&]() {
                                                this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__73__Vfuncout);
                                            }(), __Vfunc_get_name__73__Vfuncout)), "' while register '"s), 
                                                                           ([&]() {
                                        VL_NULL_CHECK(this->__PVT__m_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 797)
                                                                            ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__74__Vfuncout);
                                    }(), __Vtask_get_full_name__74__Vfuncout)), "' is being accessed"s));
                    __Vtask_uvm_report_warning__72__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__75__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__75__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__76__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__76__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__72__id, __Vtask_uvm_report_warning__72__message, __Vtask_uvm_report_warning__72__verbosity, __Vtask_uvm_report_warning__72__filename, __Vtask_uvm_report_warning__72__line, __Vtask_uvm_report_warning__72__context_name, (IData)(__Vtask_uvm_report_warning__72__report_enabled_checked));
                }
                VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 798)->__PVT__status = 1U;
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
    IData/*31:0*/ __Vfunc_uvm_report_enabled__78__Vfuncout;
    __Vfunc_uvm_report_enabled__78__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__78__verbosity;
    __Vfunc_uvm_report_enabled__78__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__78__severity;
    __Vfunc_uvm_report_enabled__78__severity = 0;
    std::string __Vfunc_uvm_report_enabled__78__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__79__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__80__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__81__Vfuncout;
    __Vtask_uvm_report_enabled__81__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__82__id;
    std::string __Vtask_uvm_report_warning__82__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__82__verbosity;
    __Vtask_uvm_report_warning__82__verbosity = 0;
    std::string __Vtask_uvm_report_warning__82__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__82__line;
    __Vtask_uvm_report_warning__82__line = 0;
    std::string __Vtask_uvm_report_warning__82__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__82__report_enabled_checked;
    __Vtask_uvm_report_warning__82__report_enabled_checked = 0;
    std::string __Vfunc_get_name__83__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__84__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__85__Vfuncout;
    CData/*0:0*/ __Vtask_is_busy__87__Vfuncout;
    __Vtask_is_busy__87__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__88__Vfuncout;
    __Vfunc_uvm_report_enabled__88__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__88__verbosity;
    __Vfunc_uvm_report_enabled__88__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__88__severity;
    __Vfunc_uvm_report_enabled__88__severity = 0;
    std::string __Vfunc_uvm_report_enabled__88__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__89__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__90__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__91__Vfuncout;
    __Vtask_uvm_report_enabled__91__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__92__id;
    std::string __Vtask_uvm_report_warning__92__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__92__verbosity;
    __Vtask_uvm_report_warning__92__verbosity = 0;
    std::string __Vtask_uvm_report_warning__92__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__92__line;
    __Vtask_uvm_report_warning__92__line = 0;
    std::string __Vtask_uvm_report_warning__92__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__92__report_enabled_checked;
    __Vtask_uvm_report_warning__92__report_enabled_checked = 0;
    std::string __Vfunc_get_name__93__Vfuncout;
    std::string __Vtask_get_full_name__94__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__95__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__96__Vfuncout;
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
                        __Vfunc_uvm_report_enabled__78__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__78__severity = 1U;
                        __Vfunc_uvm_report_enabled__78__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__79__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__79__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__80__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__80__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__78__verbosity, (IData)(__Vfunc_uvm_report_enabled__78__severity), __Vfunc_uvm_report_enabled__78__id, __Vtask_uvm_report_enabled__81__Vfuncout);
                        __Vfunc_uvm_report_enabled__78__Vfuncout 
                            = __Vtask_uvm_report_enabled__81__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__78__Vfuncout))) {
            __Vtask_uvm_report_warning__82__report_enabled_checked = 1U;
            __Vtask_uvm_report_warning__82__context_name = ""s;
            __Vtask_uvm_report_warning__82__line = 0x0000035fU;
            __Vtask_uvm_report_warning__82__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
            __Vtask_uvm_report_warning__82__verbosity = 0U;
            __Vtemp_1 = ([&]() {
                    this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__83__Vfuncout);
                }(), __Vfunc_get_name__83__Vfuncout);
            __Vtask_uvm_report_warning__82__message 
                = VL_SFORMATF_N_NX("Specified value (0x%x) greater than field \"%@\" size (%0# bits)",0,
                                   64,value,-1,&(__Vtemp_1),
                                   32,this->__PVT__m_size) ;
            __Vtask_uvm_report_warning__82__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__84__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__84__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__85__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__85__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__82__id, __Vtask_uvm_report_warning__82__message, __Vtask_uvm_report_warning__82__verbosity, __Vtask_uvm_report_warning__82__filename, __Vtask_uvm_report_warning__82__line, __Vtask_uvm_report_warning__82__context_name, (IData)(__Vtask_uvm_report_warning__82__report_enabled_checked));
        }
        value = (value & mask);
    }
    if (([&]() {
                VL_NULL_CHECK(this->__PVT__m_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 867)
         ->__VnoInFunc_is_busy(vlSymsp, __Vtask_is_busy__87__Vfuncout);
            }(), (IData)(__Vtask_is_busy__87__Vfuncout))) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__88__id = "UVM/FLD/SET/BSY"s;
                        __Vfunc_uvm_report_enabled__88__severity = 1U;
                        __Vfunc_uvm_report_enabled__88__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__89__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__89__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__90__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__90__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__88__verbosity, (IData)(__Vfunc_uvm_report_enabled__88__severity), __Vfunc_uvm_report_enabled__88__id, __Vtask_uvm_report_enabled__91__Vfuncout);
                        __Vfunc_uvm_report_enabled__88__Vfuncout 
                            = __Vtask_uvm_report_enabled__91__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__88__Vfuncout))) {
            __Vtask_uvm_report_warning__92__report_enabled_checked = 1U;
            __Vtask_uvm_report_warning__92__context_name = ""s;
            __Vtask_uvm_report_warning__92__line = 0x00000366U;
            __Vtask_uvm_report_warning__92__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
            __Vtask_uvm_report_warning__92__verbosity = 0U;
            __Vtemp_2 = ([&]() {
                    this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__93__Vfuncout);
                }(), __Vfunc_get_name__93__Vfuncout);
            __Vtemp_3 = ([&]() {
                    VL_NULL_CHECK(this->__PVT__m_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 870)
                         ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__94__Vfuncout);
                }(), __Vtask_get_full_name__94__Vfuncout);
            __Vtask_uvm_report_warning__92__message 
                = VL_SFORMATF_N_NX("Setting the value of field \"%@\" while containing register \"%@\" is being accessed may result in loss of desired field value. A race condition between threads concurrently accessing the register model is the likely cause of the problem.",0,
                                   -1,&(__Vtemp_2),
                                   -1,&(__Vtemp_3)) ;
            __Vtask_uvm_report_warning__92__id = "UVM/FLD/SET/BSY"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__95__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__95__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__96__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__96__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__92__id, __Vtask_uvm_report_warning__92__message, __Vtask_uvm_report_warning__92__verbosity, __Vtask_uvm_report_warning__92__filename, __Vtask_uvm_report_warning__92__line, __Vtask_uvm_report_warning__92__context_name, (IData)(__Vtask_uvm_report_warning__92__report_enabled_checked));
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
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_block> __Vtask_get_block__98__Vfuncout;
    IData/*31:0*/ __Vtask_get_default_door__99__Vfuncout;
    __Vtask_get_default_door__99__Vfuncout = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_backdoor> __Vtask_get_backdoor__100__Vfuncout;
    CData/*0:0*/ __Vtask_has_hdl_path__101__Vfuncout;
    __Vtask_has_hdl_path__101__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__102__Vfuncout;
    __Vfunc_uvm_report_enabled__102__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__102__verbosity;
    __Vfunc_uvm_report_enabled__102__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__102__severity;
    __Vfunc_uvm_report_enabled__102__severity = 0;
    std::string __Vfunc_uvm_report_enabled__102__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__103__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__104__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__105__Vfuncout;
    __Vtask_uvm_report_enabled__105__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__106__id;
    std::string __Vtask_uvm_report_warning__106__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__106__verbosity;
    __Vtask_uvm_report_warning__106__verbosity = 0;
    std::string __Vtask_uvm_report_warning__106__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__106__line;
    __Vtask_uvm_report_warning__106__line = 0;
    std::string __Vtask_uvm_report_warning__106__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__106__report_enabled_checked;
    __Vtask_uvm_report_warning__106__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__107__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__108__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__109__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> __Vfunc_backdoor__111__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> __Vtask_get_local_map__112__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__113__Vfuncout;
    __Vfunc_uvm_report_enabled__113__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__113__verbosity;
    __Vfunc_uvm_report_enabled__113__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__113__severity;
    __Vfunc_uvm_report_enabled__113__severity = 0;
    std::string __Vfunc_uvm_report_enabled__113__id;
    std::string __Vfunc_get_type_name__114__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__115__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__116__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__117__Vfuncout;
    __Vtask_uvm_report_enabled__117__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__118__id;
    std::string __Vtask_uvm_report_error__118__message;
    IData/*31:0*/ __Vtask_uvm_report_error__118__verbosity;
    __Vtask_uvm_report_error__118__verbosity = 0;
    std::string __Vtask_uvm_report_error__118__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__118__line;
    __Vtask_uvm_report_error__118__line = 0;
    std::string __Vtask_uvm_report_error__118__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__118__report_enabled_checked;
    __Vtask_uvm_report_error__118__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__119__Vfuncout;
    std::string __Vfunc_get_type_name__120__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__121__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__122__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map_info> __Vtask_get_reg_map_info__124__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__125__Vfuncout;
    __Vfunc_uvm_report_enabled__125__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__125__verbosity;
    __Vfunc_uvm_report_enabled__125__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__125__severity;
    __Vfunc_uvm_report_enabled__125__severity = 0;
    std::string __Vfunc_uvm_report_enabled__125__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__126__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__127__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__128__Vfuncout;
    __Vtask_uvm_report_enabled__128__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__129__id;
    std::string __Vtask_uvm_report_error__129__message;
    IData/*31:0*/ __Vtask_uvm_report_error__129__verbosity;
    __Vtask_uvm_report_error__129__verbosity = 0;
    std::string __Vtask_uvm_report_error__129__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__129__line;
    __Vtask_uvm_report_error__129__line = 0;
    std::string __Vtask_uvm_report_error__129__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__129__report_enabled_checked;
    __Vtask_uvm_report_error__129__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__130__Vfuncout;
    std::string __Vtask_get_full_name__131__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__132__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__133__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_block> unnamedblk283__DOT__blk;
    {
        if ((3U == VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 992)
             ->__PVT__path)) {
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 993)->__VnoInFunc_get_block(vlSymsp, __Vtask_get_block__98__Vfuncout);
            unnamedblk283__DOT__blk = __Vtask_get_block__98__Vfuncout;
            VL_NULL_CHECK(unnamedblk283__DOT__blk, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 994)->__VnoInFunc_get_default_door(vlSymsp, __Vtask_get_default_door__99__Vfuncout);
            VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 994)->__PVT__path 
                = __Vtask_get_default_door__99__Vfuncout;
        }
        if ((1U == VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 997)
             ->__PVT__path)) {
            if (((VlNull{} == ([&]() {
                                VL_NULL_CHECK(this->__PVT__m_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 998)
                               ->__VnoInFunc_get_backdoor(vlSymsp, 1U, __Vtask_get_backdoor__100__Vfuncout);
                            }(), __Vtask_get_backdoor__100__Vfuncout)) 
                 && (1U & (~ ([&]() {
                                    VL_NULL_CHECK(this->__PVT__m_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 998)
                              ->__VnoInFunc_has_hdl_path(vlSymsp, ""s, __Vtask_has_hdl_path__101__Vfuncout);
                                }(), (IData)(__Vtask_has_hdl_path__101__Vfuncout)))))) {
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__102__id = "RegModel"s;
                                __Vfunc_uvm_report_enabled__102__severity = 1U;
                                __Vfunc_uvm_report_enabled__102__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__103__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__103__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__104__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__104__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__102__verbosity, (IData)(__Vfunc_uvm_report_enabled__102__severity), __Vfunc_uvm_report_enabled__102__id, __Vtask_uvm_report_enabled__105__Vfuncout);
                                __Vfunc_uvm_report_enabled__102__Vfuncout 
                                    = __Vtask_uvm_report_enabled__105__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__102__Vfuncout))) {
                    __Vtask_uvm_report_warning__106__report_enabled_checked = 1U;
                    __Vtask_uvm_report_warning__106__context_name = ""s;
                    __Vtask_uvm_report_warning__106__line = 0x000003e9U;
                    __Vtask_uvm_report_warning__106__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
                    __Vtask_uvm_report_warning__106__verbosity = 0U;
                    __Vtask_uvm_report_warning__106__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN("No backdoor access available for field '"s, 
                                                                           ([&]() {
                                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__107__Vfuncout);
                                    }(), __Vfunc_get_full_name__107__Vfuncout)), "' . Using frontdoor instead."s));
                    __Vtask_uvm_report_warning__106__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__108__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__108__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__109__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__109__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__106__id, __Vtask_uvm_report_warning__106__message, __Vtask_uvm_report_warning__106__verbosity, __Vtask_uvm_report_warning__106__filename, __Vtask_uvm_report_warning__106__line, __Vtask_uvm_report_warning__106__context_name, (IData)(__Vtask_uvm_report_warning__106__report_enabled_checked));
                }
                VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1002)->__PVT__path = 0U;
            } else {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_map__Vclpkg.__VnoInFunc_backdoor(vlProcess, vlSymsp, __Vfunc_backdoor__111__Vfuncout);
                VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1005)->__PVT__map 
                    = __Vfunc_backdoor__111__Vfuncout;
            }
        }
        if ((1U != VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1008)
             ->__PVT__path)) {
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1010)->__VnoInFunc_get_local_map(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1010)
                                                                                ->__PVT__map, __Vtask_get_local_map__112__Vfuncout);
            VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1010)->__PVT__local_map 
                = __Vtask_get_local_map__112__Vfuncout;
            if ((VlNull{} == VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1012)
                 ->__PVT__local_map)) {
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__113__id 
                                    = VL_CVT_PACK_STR_NN(
                                                         ([&]() {
                                            this->__VnoInFunc_get_type_name(vlSymsp, __Vfunc_get_type_name__114__Vfuncout);
                                        }(), __Vfunc_get_type_name__114__Vfuncout));
                                __Vfunc_uvm_report_enabled__113__severity = 2U;
                                __Vfunc_uvm_report_enabled__113__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__115__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__115__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__116__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__116__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__113__verbosity, (IData)(__Vfunc_uvm_report_enabled__113__severity), __Vfunc_uvm_report_enabled__113__id, __Vtask_uvm_report_enabled__117__Vfuncout);
                                __Vfunc_uvm_report_enabled__113__Vfuncout 
                                    = __Vtask_uvm_report_enabled__117__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__113__Vfuncout))) {
                    __Vtask_uvm_report_error__118__report_enabled_checked = 1U;
                    __Vtask_uvm_report_error__118__context_name = ""s;
                    __Vtask_uvm_report_error__118__line = 0x000003f7U;
                    __Vtask_uvm_report_error__118__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
                    __Vtask_uvm_report_error__118__verbosity = 0U;
                    __Vtask_uvm_report_error__118__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN("No transactor available to physically access memory from map '"s, 
                                                                           ([&]() {
                                        VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1015)
                                                      ->__PVT__map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1015)
                                                                            ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__119__Vfuncout);
                                    }(), __Vtask_get_full_name__119__Vfuncout)), "'"s));
                    __Vtask_uvm_report_error__118__id 
                        = VL_CVT_PACK_STR_NN(([&]() {
                                this->__VnoInFunc_get_type_name(vlSymsp, __Vfunc_get_type_name__120__Vfuncout);
                            }(), __Vfunc_get_type_name__120__Vfuncout));
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__121__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__121__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__122__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__122__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__118__id, __Vtask_uvm_report_error__118__message, __Vtask_uvm_report_error__118__verbosity, __Vtask_uvm_report_error__118__filename, __Vtask_uvm_report_error__118__line, __Vtask_uvm_report_error__118__context_name, (IData)(__Vtask_uvm_report_error__118__report_enabled_checked));
                }
                VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1016)->__PVT__status = 1U;
                Xcheck_accessX__Vfuncrtn = 0U;
                goto __Vlabel0;
            }
            VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1020)
                          ->__PVT__local_map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1020)->__VnoInFunc_get_reg_map_info(vlProcess, vlSymsp, this->__PVT__m_parent, 1U, __Vtask_get_reg_map_info__124__Vfuncout);
            map_info = __Vtask_get_reg_map_info__124__Vfuncout;
            if (((VlNull{} == VL_NULL_CHECK(map_info, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1022)
                  ->__PVT__frontdoor) && VL_NULL_CHECK(map_info, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1022)
                 ->__PVT__unmapped)) {
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__125__id = "RegModel"s;
                                __Vfunc_uvm_report_enabled__125__severity = 2U;
                                __Vfunc_uvm_report_enabled__125__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__126__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__126__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__127__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__127__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__125__verbosity, (IData)(__Vfunc_uvm_report_enabled__125__severity), __Vfunc_uvm_report_enabled__125__id, __Vtask_uvm_report_enabled__128__Vfuncout);
                                __Vfunc_uvm_report_enabled__125__Vfuncout 
                                    = __Vtask_uvm_report_enabled__128__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__125__Vfuncout))) {
                    __Vtask_uvm_report_error__129__report_enabled_checked = 1U;
                    __Vtask_uvm_report_error__129__context_name = ""s;
                    __Vtask_uvm_report_error__129__line = 0x00000402U;
                    __Vtask_uvm_report_error__129__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
                    __Vtask_uvm_report_error__129__verbosity = 0U;
                    __Vtask_uvm_report_error__129__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Field '"s, 
                                                                                ([&]() {
                                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__130__Vfuncout);
                                            }(), __Vfunc_get_full_name__130__Vfuncout)), "' in register that is unmapped in map '"s), 
                                                                           ([&]() {
                                        VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1026)
                                                      ->__PVT__map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1026)
                                                                            ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__131__Vfuncout);
                                    }(), __Vtask_get_full_name__131__Vfuncout)), "' and does not have a user-defined frontdoor"s));
                    __Vtask_uvm_report_error__129__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__132__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__132__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__133__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__133__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__129__id, __Vtask_uvm_report_error__129__message, __Vtask_uvm_report_error__129__verbosity, __Vtask_uvm_report_error__129__filename, __Vtask_uvm_report_error__129__line, __Vtask_uvm_report_error__129__context_name, (IData)(__Vtask_uvm_report_error__129__report_enabled_checked));
                }
                VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1027)->__PVT__status = 1U;
                Xcheck_accessX__Vfuncrtn = 0U;
                goto __Vlabel0;
            }
            if ((VlNull{} == VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1031)
                 ->__PVT__map)) {
                VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1032)->__PVT__map 
                    = VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1032)
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
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> __Vfunc_create__135__Vfuncout;
    std::string __Vfunc_get_full_name__136__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> rw;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi118__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "field_write_item"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__136__Vfuncout);
                }(), __Vfunc_get_full_name__136__Vfuncout)), __Vfunc_create__135__Vfuncout);
    rw = __Vfunc_create__135__Vfuncout;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1053)->__PVT__element 
        = VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field>{this};
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1054)->__PVT__element_kind = 1U;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1055)->__PVT__kind = 1U;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1056)->__PVT__value.atWrite(0U) 
        = value;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1057)->__PVT__path 
        = path;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1058)->__PVT__map 
        = map;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1059)->__PVT__parent 
        = parent;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1060)->__PVT__prior 
        = prior;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1061)->__PVT__extension 
        = extension;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1062)->__PVT__fname 
        = fname;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1063)->__PVT__lineno 
        = lineno;
    co_await this->__VnoInFunc_do_write(vlSymsp, rw);
    status = VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1067)
        ->__PVT__status;
    co_return;}

VlCoroutine Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_write(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_write\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_Xcheck_accessX__139__Vfuncout;
    __Vfunc_Xcheck_accessX__139__Vfuncout = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map_info> __Vfunc_Xcheck_accessX__139__map_info;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__140__Vfuncout;
    __Vfunc_uvm_report_enabled__140__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__140__verbosity;
    __Vfunc_uvm_report_enabled__140__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__140__severity;
    __Vfunc_uvm_report_enabled__140__severity = 0;
    std::string __Vfunc_uvm_report_enabled__140__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__141__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__142__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__143__Vfuncout;
    __Vtask_uvm_report_enabled__143__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__144__id;
    std::string __Vtask_uvm_report_warning__144__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__144__verbosity;
    __Vtask_uvm_report_warning__144__verbosity = 0;
    std::string __Vtask_uvm_report_warning__144__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__144__line;
    __Vtask_uvm_report_warning__144__line = 0;
    std::string __Vtask_uvm_report_warning__144__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__144__report_enabled_checked;
    __Vtask_uvm_report_warning__144__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__145__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__146__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__147__Vfuncout;
    std::string __Vtask_get_access__150__Vfuncout;
    IData/*31:0*/ __Vtask_get_n_bits__151__Vfuncout;
    __Vtask_get_n_bits__151__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_lsb_pos__152__Vfuncout;
    __Vtask_get_lsb_pos__152__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_lsb_pos__153__Vfuncout;
    __Vtask_get_lsb_pos__153__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_is_indv_accessible__154__Vfuncout;
    __Vfunc_is_indv_accessible__154__Vfuncout = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> __Vtask_get_root_map__155__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_first__159__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_next__161__Vfuncout;
    CData/*0:0*/ __Vtask_get_auto_predict__165__Vfuncout;
    __Vtask_get_auto_predict__165__Vfuncout = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_first__168__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_next__170__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__173__Vfuncout;
    __Vfunc_uvm_report_enabled__173__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__173__verbosity;
    __Vfunc_uvm_report_enabled__173__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__173__severity;
    __Vfunc_uvm_report_enabled__173__severity = 0;
    std::string __Vfunc_uvm_report_enabled__173__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__174__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__175__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__176__Vfuncout;
    __Vtask_uvm_report_enabled__176__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__177__id;
    std::string __Vtask_uvm_report_warning__177__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__177__verbosity;
    __Vtask_uvm_report_warning__177__verbosity = 0;
    std::string __Vtask_uvm_report_warning__177__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__177__line;
    __Vtask_uvm_report_warning__177__line = 0;
    std::string __Vtask_uvm_report_warning__177__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__177__report_enabled_checked;
    __Vtask_uvm_report_warning__177__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__178__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__179__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__180__Vfuncout;
    std::string __Vtemp_2;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk284__DOT__i;
    unnamedblk284__DOT__i = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> unnamedblk285__DOT__system_map;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callback_iter__pi101> unnamedblk285__DOT__cbs;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk285__DOT__unnamedblk286__DOT__cb;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk285__DOT__unnamedblk287__DOT__cb;
    std::string __VCase_h4e3e0c40__0;
    QData/*63:0*/ value_adjust;
    value_adjust = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map_info> map_info;
    VlQueue<VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field>> fields;
    CData/*0:0*/ bad_side_effect;
    bad_side_effect = 0;
    {
        co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1081)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
        this->__PVT__m_fname = VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1082)
            ->__PVT__fname;
        this->__PVT__m_lineno = VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1083)
            ->__PVT__lineno;
        if ((1U & (~ ([&]() {
                            this->__VnoInFunc_Xcheck_accessX(vlSymsp, rw, __Vfunc_Xcheck_accessX__139__map_info, __Vfunc_Xcheck_accessX__139__Vfuncout);
                            map_info = __Vfunc_Xcheck_accessX__139__map_info;
                        }(), (IData)(__Vfunc_Xcheck_accessX__139__Vfuncout))))) {
            goto __Vlabel0;
        }
        this->__PVT__m_write_in_progress = 1U;
        if ((0U != VL_SHIFTR_QQI(64,64,32, VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1090)
                                 ->__PVT__value.at(0U), this->__PVT__m_size))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__140__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__140__severity = 1U;
                            __Vfunc_uvm_report_enabled__140__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__141__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__141__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__142__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__142__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__140__verbosity, (IData)(__Vfunc_uvm_report_enabled__140__severity), __Vfunc_uvm_report_enabled__140__id, __Vtask_uvm_report_enabled__143__Vfuncout);
                            __Vfunc_uvm_report_enabled__140__Vfuncout 
                                = __Vtask_uvm_report_enabled__143__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__140__Vfuncout))) {
                __Vtask_uvm_report_warning__144__report_enabled_checked = 1U;
                __Vtask_uvm_report_warning__144__context_name = ""s;
                __Vtask_uvm_report_warning__144__line = 0x00000444U;
                __Vtask_uvm_report_warning__144__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
                __Vtask_uvm_report_warning__144__verbosity = 0U;
                __Vtask_uvm_report_warning__144__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("uvm_reg_field::write(): Value greater than field '"s, 
                                                                       ([&]() {
                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__145__Vfuncout);
                                }(), __Vfunc_get_full_name__145__Vfuncout)), "'"s));
                __Vtask_uvm_report_warning__144__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__146__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__146__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__147__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__147__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__144__id, __Vtask_uvm_report_warning__144__message, __Vtask_uvm_report_warning__144__verbosity, __Vtask_uvm_report_warning__144__filename, __Vtask_uvm_report_warning__144__line, __Vtask_uvm_report_warning__144__context_name, (IData)(__Vtask_uvm_report_warning__144__report_enabled_checked));
            }
            VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1093)->__PVT__value.atWrite(0U) 
                = (VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1093)
                   ->__PVT__value.at(0U) & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                                            - 1ULL));
        }
        VL_NULL_CHECK(this->__PVT__m_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1097)->__VnoInFunc_get_fields(vlSymsp, fields);
        unnamedblk284__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk284__DOT__i, fields.size())) {
            {
                if ((fields.at(unnamedblk284__DOT__i) 
                     == VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field>{this})) {
                    value_adjust = (value_adjust | 
                                    VL_SHIFTL_QQI(64,64,32, VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1101)
                                                  ->__PVT__value.at(0U), this->__PVT__m_lsb));
                    goto __Vlabel1;
                }
                if (([&]() {
                            VL_NULL_CHECK(fields.at(unnamedblk284__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                     ->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1106)
                                              ->__PVT__local_map, __Vtask_get_access__150__Vfuncout);
                            __VCase_h4e3e0c40__0 = __Vtask_get_access__150__Vfuncout;
                        }(), 1U)) {
                    if ((1U & (~ (((((((("RO"s == __VCase_h4e3e0c40__0) 
                                        || ("RC"s == __VCase_h4e3e0c40__0)) 
                                       || ("RS"s == __VCase_h4e3e0c40__0)) 
                                      || ("W1C"s == __VCase_h4e3e0c40__0)) 
                                     || ("W1S"s == __VCase_h4e3e0c40__0)) 
                                    || ("W1T"s == __VCase_h4e3e0c40__0)) 
                                   || ("W1SRC"s == __VCase_h4e3e0c40__0)) 
                                  || ("W1CRC"s == __VCase_h4e3e0c40__0))))) {
                        if (((((("W0C"s == __VCase_h4e3e0c40__0) 
                                || ("W0S"s == __VCase_h4e3e0c40__0)) 
                               || ("W0T"s == __VCase_h4e3e0c40__0)) 
                              || ("W0SRC"s == __VCase_h4e3e0c40__0)) 
                             || ("W0CRS"s == __VCase_h4e3e0c40__0))) {
                            value_adjust = (value_adjust 
                                            | VL_SHIFTL_QQI(64,64,32, 
                                                            (VL_SHIFTL_QQI(64,64,32, 1ULL, 
                                                                           ([&]() {
                                                    VL_NULL_CHECK(fields.at(unnamedblk284__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1115)
                                                                            ->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__151__Vfuncout);
                                                }(), __Vtask_get_n_bits__151__Vfuncout)) 
                                                             - 1ULL), 
                                                            ([&]() {
                                            VL_NULL_CHECK(fields.at(unnamedblk284__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1115)
                                                             ->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__152__Vfuncout);
                                        }(), __Vtask_get_lsb_pos__152__Vfuncout)));
                        } else if ((((((("WC"s == __VCase_h4e3e0c40__0) 
                                        || ("WS"s == __VCase_h4e3e0c40__0)) 
                                       || ("WCRS"s 
                                           == __VCase_h4e3e0c40__0)) 
                                      || ("WSRC"s == __VCase_h4e3e0c40__0)) 
                                     || ("WOC"s == __VCase_h4e3e0c40__0)) 
                                    || ("WOS"s == __VCase_h4e3e0c40__0))) {
                            bad_side_effect = 1U;
                        } else {
                            value_adjust = (value_adjust 
                                            | VL_SHIFTL_QQI(64,64,32, VL_NULL_CHECK(fields.at(unnamedblk284__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1122)
                                                            ->__PVT__m_mirrored, 
                                                            ([&]() {
                                            VL_NULL_CHECK(fields.at(unnamedblk284__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1122)
                                                             ->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__153__Vfuncout);
                                        }(), __Vtask_get_lsb_pos__153__Vfuncout)));
                        }
                    }
                }
                __Vlabel1: ;
            }
            unnamedblk284__DOT__i = ((IData)(1U) + unnamedblk284__DOT__i);
        }
        if (([&]() {
                    this->__VnoInFunc_is_indv_accessible(vlSymsp, VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1134)
                                                         ->__PVT__path, VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1134)
                                                         ->__PVT__local_map, __Vfunc_is_indv_accessible__154__Vfuncout);
                }(), (IData)(__Vfunc_is_indv_accessible__154__Vfuncout))) {
            VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1146)
                          ->__PVT__local_map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1146)->__VnoInFunc_get_root_map(vlSymsp, __Vtask_get_root_map__155__Vfuncout);
            unnamedblk285__DOT__system_map = __Vtask_get_root_map__155__Vfuncout;
            unnamedblk285__DOT__cbs = VL_NEW(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callback_iter__pi101, vlSymsp, 
                                             VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field>{this});
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1149)->__VnoInFunc_Xset_busyX(vlSymsp, 1U);
            VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1151)->__PVT__status = 0U;
            this->__VnoInFunc_pre_write(vlSymsp, rw);
            VL_NULL_CHECK(unnamedblk285__DOT__cbs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1154)->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__159__Vfuncout);
            unnamedblk285__DOT__unnamedblk286__DOT__cb 
                = __Vtask_first__159__Vfuncout;
            while ((VlNull{} != unnamedblk285__DOT__unnamedblk286__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk285__DOT__unnamedblk286__DOT__cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1155)->__VnoInFunc_pre_write(vlProcess, vlSymsp, rw);
                VL_NULL_CHECK(unnamedblk285__DOT__cbs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1154)->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__161__Vfuncout);
                unnamedblk285__DOT__unnamedblk286__DOT__cb 
                    = __Vtask_next__161__Vfuncout;
            }
            if ((0U != VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1157)
                 ->__PVT__status)) {
                this->__PVT__m_write_in_progress = 0U;
                VL_NULL_CHECK(this->__PVT__m_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1159)->__VnoInFunc_Xset_busyX(vlSymsp, 0U);
                co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1160)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
                goto __Vlabel0;
            }
            co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1165)
                                   ->__PVT__local_map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1165)->__VnoInFunc_do_write(vlProcess, vlSymsp, rw);
            if (([&]() {
                        VL_NULL_CHECK(unnamedblk285__DOT__system_map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1167)
                 ->__VnoInFunc_get_auto_predict(vlSymsp, __Vtask_get_auto_predict__165__Vfuncout);
                    }(), (IData)(__Vtask_get_auto_predict__165__Vfuncout))) {
                this->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, 2U, 0xffU);
            }
            this->__VnoInFunc_post_write(vlSymsp, rw);
            VL_NULL_CHECK(unnamedblk285__DOT__cbs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1172)->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__168__Vfuncout);
            unnamedblk285__DOT__unnamedblk287__DOT__cb 
                = __Vtask_first__168__Vfuncout;
            while ((VlNull{} != unnamedblk285__DOT__unnamedblk287__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk285__DOT__unnamedblk287__DOT__cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1173)->__VnoInFunc_post_write(vlSymsp, rw);
                VL_NULL_CHECK(unnamedblk285__DOT__cbs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1172)->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__170__Vfuncout);
                unnamedblk285__DOT__unnamedblk287__DOT__cb 
                    = __Vtask_next__170__Vfuncout;
            }
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1175)->__VnoInFunc_Xset_busyX(vlSymsp, 0U);
        } else {
            VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1135)->__PVT__element_kind = 0U;
            VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1136)->__PVT__element 
                = this->__PVT__m_parent;
            VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1137)->__PVT__value.atWrite(0U) 
                = value_adjust;
            co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1138)->__VnoInFunc_do_write(vlProcess, vlSymsp, rw);
            if (bad_side_effect) {
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__173__id = "RegModel"s;
                                __Vfunc_uvm_report_enabled__173__severity = 1U;
                                __Vfunc_uvm_report_enabled__173__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__174__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__174__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__175__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__175__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__173__verbosity, (IData)(__Vfunc_uvm_report_enabled__173__severity), __Vfunc_uvm_report_enabled__173__id, __Vtask_uvm_report_enabled__176__Vfuncout);
                                __Vfunc_uvm_report_enabled__173__Vfuncout 
                                    = __Vtask_uvm_report_enabled__176__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__173__Vfuncout))) {
                    __Vtask_uvm_report_warning__177__report_enabled_checked = 1U;
                    __Vtask_uvm_report_warning__177__context_name = ""s;
                    __Vtask_uvm_report_warning__177__line = 0x00000475U;
                    __Vtask_uvm_report_warning__177__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
                    __Vtask_uvm_report_warning__177__verbosity = 0U;
                    __Vtemp_2 = ([&]() {
                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__178__Vfuncout);
                        }(), __Vfunc_get_full_name__178__Vfuncout);
                    __Vtask_uvm_report_warning__177__message 
                        = VL_SFORMATF_N_NX("Writing field \"%@\" will cause unintended side effects in adjoining Write-to-Clear or Write-to-Set fields in the same register",0,
                                           -1,&(__Vtemp_2)) ;
                    __Vtask_uvm_report_warning__177__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__179__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__179__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__180__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__180__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__177__id, __Vtask_uvm_report_warning__177__message, __Vtask_uvm_report_warning__177__verbosity, __Vtask_uvm_report_warning__177__filename, __Vtask_uvm_report_warning__177__line, __Vtask_uvm_report_warning__177__context_name, (IData)(__Vtask_uvm_report_warning__177__report_enabled_checked));
                }
            }
        }
        this->__PVT__m_write_in_progress = 0U;
        co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1182)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
        __Vlabel0: ;
    }
    co_return;}

VlCoroutine Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_read(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_read\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> __Vfunc_create__183__Vfuncout;
    std::string __Vfunc_get_full_name__184__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> rw;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi118__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "field_read_item"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__184__Vfuncout);
                }(), __Vfunc_get_full_name__184__Vfuncout)), __Vfunc_create__183__Vfuncout);
    rw = __Vfunc_create__183__Vfuncout;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1201)->__PVT__element 
        = VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field>{this};
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1202)->__PVT__element_kind = 1U;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1203)->__PVT__kind = 0U;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1204)->__PVT__value.atWrite(0U) = 0ULL;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1205)->__PVT__path 
        = path;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1206)->__PVT__map 
        = map;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1207)->__PVT__parent 
        = parent;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1208)->__PVT__prior 
        = prior;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1209)->__PVT__extension 
        = extension;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1210)->__PVT__fname 
        = fname;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1211)->__PVT__lineno 
        = lineno;
    co_await this->__VnoInFunc_do_read(vlSymsp, rw);
    value = VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1215)
        ->__PVT__value.at(0U);
    status = VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1216)
        ->__PVT__status;
    co_return;}

VlCoroutine Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_read(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_read\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_Xcheck_accessX__187__Vfuncout;
    __Vfunc_Xcheck_accessX__187__Vfuncout = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map_info> __Vfunc_Xcheck_accessX__187__map_info;
    CData/*0:0*/ __Vfunc_is_indv_accessible__188__Vfuncout;
    __Vfunc_is_indv_accessible__188__Vfuncout = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> __Vtask_get_root_map__189__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_first__193__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_next__195__Vfuncout;
    CData/*0:0*/ __Vtask_get_auto_predict__199__Vfuncout;
    __Vtask_get_auto_predict__199__Vfuncout = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_first__202__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_next__204__Vfuncout;
    std::string __Vtask_get_access__209__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__210__Vfuncout;
    __Vfunc_uvm_report_enabled__210__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__210__verbosity;
    __Vfunc_uvm_report_enabled__210__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__210__severity;
    __Vfunc_uvm_report_enabled__210__severity = 0;
    std::string __Vfunc_uvm_report_enabled__210__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__211__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__212__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__213__Vfuncout;
    __Vtask_uvm_report_enabled__213__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__214__id;
    std::string __Vtask_uvm_report_warning__214__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__214__verbosity;
    __Vtask_uvm_report_warning__214__verbosity = 0;
    std::string __Vtask_uvm_report_warning__214__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__214__line;
    __Vtask_uvm_report_warning__214__line = 0;
    std::string __Vtask_uvm_report_warning__214__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__214__report_enabled_checked;
    __Vtask_uvm_report_warning__214__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__215__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__216__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__217__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> unnamedblk288__DOT__system_map;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callback_iter__pi101> unnamedblk288__DOT__cbs;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk288__DOT__unnamedblk289__DOT__cb;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk288__DOT__unnamedblk290__DOT__cb;
    VlQueue<VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field>> unnamedblk291__DOT__fields;
    IData/*31:0*/ unnamedblk291__DOT__unnamedblk292__DOT__i;
    unnamedblk291__DOT__unnamedblk292__DOT__i = 0;
    std::string unnamedblk291__DOT__unnamedblk292__DOT__unnamedblk293__DOT__mode;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map_info> map_info;
    CData/*0:0*/ bad_side_effect;
    bad_side_effect = 0;
    {
        co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1228)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
        this->__PVT__m_fname = VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1229)
            ->__PVT__fname;
        this->__PVT__m_lineno = VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1230)
            ->__PVT__lineno;
        this->__PVT__m_read_in_progress = 1U;
        if ((1U & (~ ([&]() {
                            this->__VnoInFunc_Xcheck_accessX(vlSymsp, rw, __Vfunc_Xcheck_accessX__187__map_info, __Vfunc_Xcheck_accessX__187__Vfuncout);
                            map_info = __Vfunc_Xcheck_accessX__187__map_info;
                        }(), (IData)(__Vfunc_Xcheck_accessX__187__Vfuncout))))) {
            goto __Vlabel0;
        }
        if (([&]() {
                    this->__VnoInFunc_is_indv_accessible(vlSymsp, VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1244)
                                                         ->__PVT__path, VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1244)
                                                         ->__PVT__local_map, __Vfunc_is_indv_accessible__188__Vfuncout);
                }(), (IData)(__Vfunc_is_indv_accessible__188__Vfuncout))) {
            VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1253)
                          ->__PVT__local_map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1253)->__VnoInFunc_get_root_map(vlSymsp, __Vtask_get_root_map__189__Vfuncout);
            unnamedblk288__DOT__system_map = __Vtask_get_root_map__189__Vfuncout;
            unnamedblk288__DOT__cbs = VL_NEW(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callback_iter__pi101, vlSymsp, 
                                             VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field>{this});
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1256)->__VnoInFunc_Xset_busyX(vlSymsp, 1U);
            VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1258)->__PVT__status = 0U;
            this->__VnoInFunc_pre_read(vlSymsp, rw);
            VL_NULL_CHECK(unnamedblk288__DOT__cbs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1261)->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__193__Vfuncout);
            unnamedblk288__DOT__unnamedblk289__DOT__cb 
                = __Vtask_first__193__Vfuncout;
            while ((VlNull{} != unnamedblk288__DOT__unnamedblk289__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk288__DOT__unnamedblk289__DOT__cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1262)->__VnoInFunc_pre_read(vlProcess, vlSymsp, rw);
                VL_NULL_CHECK(unnamedblk288__DOT__cbs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1261)->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__195__Vfuncout);
                unnamedblk288__DOT__unnamedblk289__DOT__cb 
                    = __Vtask_next__195__Vfuncout;
            }
            if ((0U != VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1264)
                 ->__PVT__status)) {
                this->__PVT__m_read_in_progress = 0U;
                VL_NULL_CHECK(this->__PVT__m_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1266)->__VnoInFunc_Xset_busyX(vlSymsp, 0U);
                co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1267)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
                goto __Vlabel0;
            }
            co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1272)
                                   ->__PVT__local_map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1272)->__VnoInFunc_do_read(vlProcess, vlSymsp, rw);
            if (([&]() {
                        VL_NULL_CHECK(unnamedblk288__DOT__system_map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1275)
                 ->__VnoInFunc_get_auto_predict(vlSymsp, __Vtask_get_auto_predict__199__Vfuncout);
                    }(), (IData)(__Vtask_get_auto_predict__199__Vfuncout))) {
                this->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, 1U, 0xffU);
            }
            this->__VnoInFunc_post_read(vlSymsp, rw);
            VL_NULL_CHECK(unnamedblk288__DOT__cbs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1280)->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__202__Vfuncout);
            unnamedblk288__DOT__unnamedblk290__DOT__cb 
                = __Vtask_first__202__Vfuncout;
            while ((VlNull{} != unnamedblk288__DOT__unnamedblk290__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk288__DOT__unnamedblk290__DOT__cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1281)->__VnoInFunc_post_read(vlSymsp, rw);
                VL_NULL_CHECK(unnamedblk288__DOT__cbs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1280)->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__204__Vfuncout);
                unnamedblk288__DOT__unnamedblk290__DOT__cb 
                    = __Vtask_next__204__Vfuncout;
            }
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1283)->__VnoInFunc_Xset_busyX(vlSymsp, 0U);
        } else {
            VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1245)->__PVT__element_kind = 0U;
            VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1246)->__PVT__element 
                = this->__PVT__m_parent;
            bad_side_effect = 1U;
            co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1248)->__VnoInFunc_do_read(vlProcess, vlSymsp, rw);
            VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1249)->__PVT__value.atWrite(0U) 
                = (VL_SHIFTR_QQI(64,64,32, VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1249)
                                 ->__PVT__value.at(0U), this->__PVT__m_lsb) 
                   & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                      - 1ULL));
        }
        this->__PVT__m_read_in_progress = 0U;
        co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1290)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
        if (bad_side_effect) {
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1294)->__VnoInFunc_get_fields(vlSymsp, unnamedblk291__DOT__fields);
            unnamedblk291__DOT__unnamedblk292__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk291__DOT__unnamedblk292__DOT__i, unnamedblk291__DOT__fields.size())) {
                {
                    if ((unnamedblk291__DOT__fields.at(unnamedblk291__DOT__unnamedblk292__DOT__i) 
                         == VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field>{this})) {
                        goto __Vlabel1;
                    }
                    VL_NULL_CHECK(unnamedblk291__DOT__fields.at(unnamedblk291__DOT__unnamedblk292__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1299)->__VnoInFunc_get_access(vlProcess, vlSymsp, VlNull{}, __Vtask_get_access__209__Vfuncout);
                    unnamedblk291__DOT__unnamedblk292__DOT__unnamedblk293__DOT__mode 
                        = __Vtask_get_access__209__Vfuncout;
                    if ((((((((((("RC"s == unnamedblk291__DOT__unnamedblk292__DOT__unnamedblk293__DOT__mode) 
                                 | ("RS"s == unnamedblk291__DOT__unnamedblk292__DOT__unnamedblk293__DOT__mode)) 
                                | ("WRC"s == unnamedblk291__DOT__unnamedblk292__DOT__unnamedblk293__DOT__mode)) 
                               | ("WRS"s == unnamedblk291__DOT__unnamedblk292__DOT__unnamedblk293__DOT__mode)) 
                              | ("WSRC"s == unnamedblk291__DOT__unnamedblk292__DOT__unnamedblk293__DOT__mode)) 
                             | ("WCRS"s == unnamedblk291__DOT__unnamedblk292__DOT__unnamedblk293__DOT__mode)) 
                            | ("W1SRC"s == unnamedblk291__DOT__unnamedblk292__DOT__unnamedblk293__DOT__mode)) 
                           | ("W1CRS"s == unnamedblk291__DOT__unnamedblk292__DOT__unnamedblk293__DOT__mode)) 
                          | ("W0SRC"s == unnamedblk291__DOT__unnamedblk292__DOT__unnamedblk293__DOT__mode)) 
                         | ("W0CRS"s == unnamedblk291__DOT__unnamedblk292__DOT__unnamedblk293__DOT__mode))) {
                        if ((0U != ([&]() {
                                        __Vfunc_uvm_report_enabled__210__id = "RegModel"s;
                                        __Vfunc_uvm_report_enabled__210__severity = 1U;
                                        __Vfunc_uvm_report_enabled__210__verbosity = 0U;
                                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__211__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                            = __Vfunc_get__211__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__212__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                            = __Vtask_get_root__212__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__210__verbosity, (IData)(__Vfunc_uvm_report_enabled__210__severity), __Vfunc_uvm_report_enabled__210__id, __Vtask_uvm_report_enabled__213__Vfuncout);
                                        __Vfunc_uvm_report_enabled__210__Vfuncout 
                                            = __Vtask_uvm_report_enabled__213__Vfuncout;
                                    }(), __Vfunc_uvm_report_enabled__210__Vfuncout))) {
                            __Vtask_uvm_report_warning__214__report_enabled_checked = 1U;
                            __Vtask_uvm_report_warning__214__context_name = ""s;
                            __Vtask_uvm_report_warning__214__line = 0x00000520U;
                            __Vtask_uvm_report_warning__214__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
                            __Vtask_uvm_report_warning__214__verbosity = 0U;
                            __Vtask_uvm_report_warning__214__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Reading field '"s, 
                                                                                ([&]() {
                                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__215__Vfuncout);
                                                }(), __Vfunc_get_full_name__215__Vfuncout)), "' will cause unintended side effects in adjoining "s), "Read-to-Clear or Read-to-Set fields in the same register"s));
                            __Vtask_uvm_report_warning__214__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__216__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                                = __Vfunc_get__216__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__217__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                = __Vtask_get_root__217__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__214__id, __Vtask_uvm_report_warning__214__message, __Vtask_uvm_report_warning__214__verbosity, __Vtask_uvm_report_warning__214__filename, __Vtask_uvm_report_warning__214__line, __Vtask_uvm_report_warning__214__context_name, (IData)(__Vtask_uvm_report_warning__214__report_enabled_checked));
                        }
                    }
                    __Vlabel1: ;
                }
                unnamedblk291__DOT__unnamedblk292__DOT__i 
                    = ((IData)(1U) + unnamedblk291__DOT__unnamedblk292__DOT__i);
            }
        }
        __Vlabel0: ;
    }
    co_return;}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_is_indv_accessible(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ path, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> local_map, CData/*0:0*/ &is_indv_accessible__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_is_indv_accessible\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__219__Vfuncout;
    __Vfunc_uvm_report_enabled__219__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__219__verbosity;
    __Vfunc_uvm_report_enabled__219__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__219__severity;
    __Vfunc_uvm_report_enabled__219__severity = 0;
    std::string __Vfunc_uvm_report_enabled__219__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__220__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__221__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__222__Vfuncout;
    __Vtask_uvm_report_enabled__222__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__223__id;
    std::string __Vtask_uvm_report_warning__223__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__223__verbosity;
    __Vtask_uvm_report_warning__223__verbosity = 0;
    std::string __Vtask_uvm_report_warning__223__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__223__line;
    __Vtask_uvm_report_warning__223__line = 0;
    std::string __Vtask_uvm_report_warning__223__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__223__report_enabled_checked;
    __Vtask_uvm_report_warning__223__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__224__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__225__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__226__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__228__Vfuncout;
    __Vfunc_uvm_report_enabled__228__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__228__verbosity;
    __Vfunc_uvm_report_enabled__228__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__228__severity;
    __Vfunc_uvm_report_enabled__228__severity = 0;
    std::string __Vfunc_uvm_report_enabled__228__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__229__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__230__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__231__Vfuncout;
    __Vtask_uvm_report_enabled__231__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__232__id;
    std::string __Vtask_uvm_report_warning__232__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__232__verbosity;
    __Vtask_uvm_report_warning__232__verbosity = 0;
    std::string __Vtask_uvm_report_warning__232__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__232__line;
    __Vtask_uvm_report_warning__232__line = 0;
    std::string __Vtask_uvm_report_warning__232__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__232__report_enabled_checked;
    __Vtask_uvm_report_warning__232__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__233__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__234__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__235__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_frontdoor> __Vtask_get_frontdoor__237__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__238__Vfuncout;
    __Vfunc_uvm_report_enabled__238__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__238__verbosity;
    __Vfunc_uvm_report_enabled__238__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__238__severity;
    __Vfunc_uvm_report_enabled__238__severity = 0;
    std::string __Vfunc_uvm_report_enabled__238__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__239__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__240__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__241__Vfuncout;
    __Vtask_uvm_report_enabled__241__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__242__id;
    std::string __Vtask_uvm_report_warning__242__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__242__verbosity;
    __Vtask_uvm_report_warning__242__verbosity = 0;
    std::string __Vtask_uvm_report_warning__242__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__242__line;
    __Vtask_uvm_report_warning__242__line = 0;
    std::string __Vtask_uvm_report_warning__242__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__242__report_enabled_checked;
    __Vtask_uvm_report_warning__242__report_enabled_checked = 0;
    std::string __Vfunc_get_name__243__Vfuncout;
    std::string __Vtask_get_full_name__244__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__245__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__246__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> __Vtask_get_root_map__248__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_adapter> __Vtask_get_adapter__249__Vfuncout;
    IData/*31:0*/ __Vtask_get_n_bytes__250__Vfuncout;
    __Vtask_get_n_bytes__250__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_lsb_pos__252__Vfuncout;
    __Vtask_get_lsb_pos__252__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bits__253__Vfuncout;
    __Vtask_get_n_bits__253__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_lsb_pos__254__Vfuncout;
    __Vtask_get_lsb_pos__254__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bits__255__Vfuncout;
    __Vtask_get_n_bits__255__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_lsb_pos__256__Vfuncout;
    __Vtask_get_lsb_pos__256__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bits__257__Vfuncout;
    __Vtask_get_n_bits__257__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__258__Vfuncout;
    __Vfunc_uvm_report_enabled__258__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__258__verbosity;
    __Vfunc_uvm_report_enabled__258__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__258__severity;
    __Vfunc_uvm_report_enabled__258__severity = 0;
    std::string __Vfunc_uvm_report_enabled__258__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__259__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__260__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__261__Vfuncout;
    __Vtask_uvm_report_enabled__261__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__262__id;
    std::string __Vtask_uvm_report_warning__262__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__262__verbosity;
    __Vtask_uvm_report_warning__262__verbosity = 0;
    std::string __Vtask_uvm_report_warning__262__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__262__line;
    __Vtask_uvm_report_warning__262__line = 0;
    std::string __Vtask_uvm_report_warning__262__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__262__report_enabled_checked;
    __Vtask_uvm_report_warning__262__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__263__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__264__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__265__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> unnamedblk294__DOT__system_map;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_adapter> unnamedblk294__DOT__adapter;
    IData/*31:0*/ unnamedblk295__DOT__fld_idx;
    unnamedblk295__DOT__fld_idx = 0;
    IData/*31:0*/ unnamedblk295__DOT__bus_width;
    unnamedblk295__DOT__bus_width = 0;
    VlQueue<VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field>> unnamedblk295__DOT__fields;
    CData/*0:0*/ unnamedblk295__DOT__sole_field;
    unnamedblk295__DOT__sole_field = 0;
    IData/*31:0*/ unnamedblk295__DOT__unnamedblk296__DOT__prev_lsb;
    unnamedblk295__DOT__unnamedblk296__DOT__prev_lsb = 0;
    IData/*31:0*/ unnamedblk295__DOT__unnamedblk296__DOT__this_lsb;
    unnamedblk295__DOT__unnamedblk296__DOT__this_lsb = 0;
    IData/*31:0*/ unnamedblk295__DOT__unnamedblk296__DOT__next_lsb;
    unnamedblk295__DOT__unnamedblk296__DOT__next_lsb = 0;
    IData/*31:0*/ unnamedblk295__DOT__unnamedblk296__DOT__prev_sz;
    unnamedblk295__DOT__unnamedblk296__DOT__prev_sz = 0;
    IData/*31:0*/ unnamedblk295__DOT__unnamedblk296__DOT__this_sz;
    unnamedblk295__DOT__unnamedblk296__DOT__this_sz = 0;
    IData/*31:0*/ unnamedblk295__DOT__unnamedblk296__DOT__next_sz;
    unnamedblk295__DOT__unnamedblk296__DOT__next_sz = 0;
    IData/*31:0*/ unnamedblk295__DOT__unnamedblk296__DOT__bus_sz;
    unnamedblk295__DOT__unnamedblk296__DOT__bus_sz = 0;
    IData/*31:0*/ unnamedblk295__DOT__unnamedblk296__DOT__unnamedblk297__DOT__i;
    unnamedblk295__DOT__unnamedblk296__DOT__unnamedblk297__DOT__i = 0;
    {
        if ((1U == path)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__219__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__219__severity = 1U;
                            __Vfunc_uvm_report_enabled__219__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__220__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__220__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__221__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__221__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__219__verbosity, (IData)(__Vfunc_uvm_report_enabled__219__severity), __Vfunc_uvm_report_enabled__219__id, __Vtask_uvm_report_enabled__222__Vfuncout);
                            __Vfunc_uvm_report_enabled__219__Vfuncout 
                                = __Vtask_uvm_report_enabled__222__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__219__Vfuncout))) {
                __Vtask_uvm_report_warning__223__report_enabled_checked = 1U;
                __Vtask_uvm_report_warning__223__context_name = ""s;
                __Vtask_uvm_report_warning__223__line = 0x0000052fU;
                __Vtask_uvm_report_warning__223__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
                __Vtask_uvm_report_warning__223__verbosity = 0U;
                __Vtask_uvm_report_warning__223__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Individual BACKDOOR field access not available for field '"s, 
                                                                       ([&]() {
                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__224__Vfuncout);
                                }(), __Vfunc_get_full_name__224__Vfuncout)), "'. Accessing complete register instead."s));
                __Vtask_uvm_report_warning__223__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__225__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__225__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__226__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__226__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__223__id, __Vtask_uvm_report_warning__223__message, __Vtask_uvm_report_warning__223__verbosity, __Vtask_uvm_report_warning__223__filename, __Vtask_uvm_report_warning__223__line, __Vtask_uvm_report_warning__223__context_name, (IData)(__Vtask_uvm_report_warning__223__report_enabled_checked));
            }
            is_indv_accessible__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if ((1U & (~ (IData)(this->__PVT__m_individually_accessible)))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__228__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__228__severity = 1U;
                            __Vfunc_uvm_report_enabled__228__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__229__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__229__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__230__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__230__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__228__verbosity, (IData)(__Vfunc_uvm_report_enabled__228__severity), __Vfunc_uvm_report_enabled__228__id, __Vtask_uvm_report_enabled__231__Vfuncout);
                            __Vfunc_uvm_report_enabled__228__Vfuncout 
                                = __Vtask_uvm_report_enabled__231__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__228__Vfuncout))) {
                __Vtask_uvm_report_warning__232__report_enabled_checked = 1U;
                __Vtask_uvm_report_warning__232__context_name = ""s;
                __Vtask_uvm_report_warning__232__line = 0x00000536U;
                __Vtask_uvm_report_warning__232__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
                __Vtask_uvm_report_warning__232__verbosity = 0U;
                __Vtask_uvm_report_warning__232__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Individual field access not available for field '"s, 
                                                                       ([&]() {
                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__233__Vfuncout);
                                }(), __Vfunc_get_full_name__233__Vfuncout)), "'. Accessing complete register instead."s));
                __Vtask_uvm_report_warning__232__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__234__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__234__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__235__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__235__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__232__id, __Vtask_uvm_report_warning__232__message, __Vtask_uvm_report_warning__232__verbosity, __Vtask_uvm_report_warning__232__filename, __Vtask_uvm_report_warning__232__line, __Vtask_uvm_report_warning__232__context_name, (IData)(__Vtask_uvm_report_warning__232__report_enabled_checked));
            }
            is_indv_accessible__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if ((VlNull{} != ([&]() {
                        VL_NULL_CHECK(this->__PVT__m_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1340)
                          ->__VnoInFunc_get_frontdoor(vlSymsp, local_map, __Vtask_get_frontdoor__237__Vfuncout);
                    }(), __Vtask_get_frontdoor__237__Vfuncout))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__238__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__238__severity = 1U;
                            __Vfunc_uvm_report_enabled__238__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__239__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__239__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__240__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__240__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__238__verbosity, (IData)(__Vfunc_uvm_report_enabled__238__severity), __Vfunc_uvm_report_enabled__238__id, __Vtask_uvm_report_enabled__241__Vfuncout);
                            __Vfunc_uvm_report_enabled__238__Vfuncout 
                                = __Vtask_uvm_report_enabled__241__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__238__Vfuncout))) {
                __Vtask_uvm_report_warning__242__report_enabled_checked = 1U;
                __Vtask_uvm_report_warning__242__context_name = ""s;
                __Vtask_uvm_report_warning__242__line = 0x0000053fU;
                __Vtask_uvm_report_warning__242__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
                __Vtask_uvm_report_warning__242__verbosity = 0U;
                __Vtask_uvm_report_warning__242__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Individual field access not available for field '"s, 
                                                                                ([&]() {
                                            this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__243__Vfuncout);
                                        }(), __Vfunc_get_name__243__Vfuncout)), "' because register '"s), 
                                                                       ([&]() {
                                    VL_NULL_CHECK(this->__PVT__m_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1343)
                                                                        ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__244__Vfuncout);
                                }(), __Vtask_get_full_name__244__Vfuncout)), "' has a user-defined front-door. Accessing complete register instead."s));
                __Vtask_uvm_report_warning__242__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__245__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__245__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__246__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__246__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__242__id, __Vtask_uvm_report_warning__242__message, __Vtask_uvm_report_warning__242__verbosity, __Vtask_uvm_report_warning__242__filename, __Vtask_uvm_report_warning__242__line, __Vtask_uvm_report_warning__242__context_name, (IData)(__Vtask_uvm_report_warning__242__report_enabled_checked));
            }
            is_indv_accessible__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(local_map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1348)->__VnoInFunc_get_root_map(vlSymsp, __Vtask_get_root_map__248__Vfuncout);
        unnamedblk294__DOT__system_map = __Vtask_get_root_map__248__Vfuncout;
        VL_NULL_CHECK(unnamedblk294__DOT__system_map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1349)->__VnoInFunc_get_adapter(vlSymsp, 1U, __Vtask_get_adapter__249__Vfuncout);
        unnamedblk294__DOT__adapter = __Vtask_get_adapter__249__Vfuncout;
        if (VL_NULL_CHECK(unnamedblk294__DOT__adapter, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1350)
            ->__PVT__supports_byte_enable) {
            is_indv_accessible__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(local_map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1356)->__VnoInFunc_get_n_bytes(vlSymsp, 1U, __Vtask_get_n_bytes__250__Vfuncout);
        unnamedblk295__DOT__bus_width = __Vtask_get_n_bytes__250__Vfuncout;
        VL_NULL_CHECK(this->__PVT__m_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1360)->__VnoInFunc_get_fields(vlSymsp, unnamedblk295__DOT__fields);
        if ((1U == unnamedblk295__DOT__fields.size())) {
            unnamedblk295__DOT__sole_field = 1U;
        } else {
            unnamedblk295__DOT__unnamedblk296__DOT__bus_sz 
                = VL_MULS_III(32, (IData)(8U), unnamedblk295__DOT__bus_width);
            {
                unnamedblk295__DOT__unnamedblk296__DOT__unnamedblk297__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk295__DOT__unnamedblk296__DOT__unnamedblk297__DOT__i, unnamedblk295__DOT__fields.size())) {
                    if ((unnamedblk295__DOT__fields.at(unnamedblk295__DOT__unnamedblk296__DOT__unnamedblk297__DOT__i) 
                         == VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field>{this})) {
                        unnamedblk295__DOT__fld_idx 
                            = unnamedblk295__DOT__unnamedblk296__DOT__unnamedblk297__DOT__i;
                        goto __Vlabel1;
                    }
                    unnamedblk295__DOT__unnamedblk296__DOT__unnamedblk297__DOT__i 
                        = ((IData)(1U) + unnamedblk295__DOT__unnamedblk296__DOT__unnamedblk297__DOT__i);
                }
                __Vlabel1: ;
            }
            VL_NULL_CHECK(unnamedblk295__DOT__fields.at(unnamedblk295__DOT__fld_idx), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1377)->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__252__Vfuncout);
            unnamedblk295__DOT__unnamedblk296__DOT__this_lsb 
                = __Vtask_get_lsb_pos__252__Vfuncout;
            VL_NULL_CHECK(unnamedblk295__DOT__fields.at(unnamedblk295__DOT__fld_idx), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1378)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__253__Vfuncout);
            unnamedblk295__DOT__unnamedblk296__DOT__this_sz 
                = __Vtask_get_n_bits__253__Vfuncout;
            if (VL_LTS_III(32, 0U, unnamedblk295__DOT__fld_idx)) {
                VL_NULL_CHECK(unnamedblk295__DOT__fields.at(
                                                            (unnamedblk295__DOT__fld_idx 
                                                             - (IData)(1U))), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1381)->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__254__Vfuncout);
                unnamedblk295__DOT__unnamedblk296__DOT__prev_lsb 
                    = __Vtask_get_lsb_pos__254__Vfuncout;
                VL_NULL_CHECK(unnamedblk295__DOT__fields.at(
                                                            (unnamedblk295__DOT__fld_idx 
                                                             - (IData)(1U))), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1382)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__255__Vfuncout);
                unnamedblk295__DOT__unnamedblk296__DOT__prev_sz 
                    = __Vtask_get_n_bits__255__Vfuncout;
            }
            if (VL_LTS_III(32, unnamedblk295__DOT__fld_idx, 
                           (unnamedblk295__DOT__fields.size() 
                            - (IData)(1U)))) {
                VL_NULL_CHECK(unnamedblk295__DOT__fields.at(
                                                            ((IData)(1U) 
                                                             + unnamedblk295__DOT__fld_idx)), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1386)->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__256__Vfuncout);
                unnamedblk295__DOT__unnamedblk296__DOT__next_lsb 
                    = __Vtask_get_lsb_pos__256__Vfuncout;
                VL_NULL_CHECK(unnamedblk295__DOT__fields.at(
                                                            ((IData)(1U) 
                                                             + unnamedblk295__DOT__fld_idx)), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1387)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__257__Vfuncout);
                unnamedblk295__DOT__unnamedblk296__DOT__next_sz 
                    = __Vtask_get_n_bits__257__Vfuncout;
            }
            if (((0U == unnamedblk295__DOT__fld_idx) 
                 & ((0U == VL_MODDIVS_III(32, unnamedblk295__DOT__unnamedblk296__DOT__next_lsb, unnamedblk295__DOT__unnamedblk296__DOT__bus_sz)) 
                    | VL_GTS_III(32, (unnamedblk295__DOT__unnamedblk296__DOT__next_lsb 
                                      - unnamedblk295__DOT__unnamedblk296__DOT__this_sz), 
                                 VL_MODDIVS_III(32, unnamedblk295__DOT__unnamedblk296__DOT__next_lsb, unnamedblk295__DOT__unnamedblk296__DOT__bus_sz))))) {
                is_indv_accessible__Vfuncrtn = 1U;
                goto __Vlabel0;
            } else if (((unnamedblk295__DOT__fld_idx 
                         == (unnamedblk295__DOT__fields.size() 
                             - (IData)(1U))) & ((0U 
                                                 == 
                                                 VL_MODDIVS_III(32, unnamedblk295__DOT__unnamedblk296__DOT__this_lsb, unnamedblk295__DOT__unnamedblk296__DOT__bus_sz)) 
                                                | VL_GTES_III(32, 
                                                              (unnamedblk295__DOT__unnamedblk296__DOT__this_lsb 
                                                               - 
                                                               (unnamedblk295__DOT__unnamedblk296__DOT__prev_lsb 
                                                                + unnamedblk295__DOT__unnamedblk296__DOT__prev_sz)), 
                                                              VL_MODDIVS_III(32, unnamedblk295__DOT__unnamedblk296__DOT__this_lsb, unnamedblk295__DOT__unnamedblk296__DOT__bus_sz))))) {
                is_indv_accessible__Vfuncrtn = 1U;
                goto __Vlabel0;
            } else if ((0U == VL_MODDIVS_III(32, unnamedblk295__DOT__unnamedblk296__DOT__this_lsb, unnamedblk295__DOT__unnamedblk296__DOT__bus_sz))) {
                if (((0U == VL_MODDIVS_III(32, unnamedblk295__DOT__unnamedblk296__DOT__next_lsb, unnamedblk295__DOT__unnamedblk296__DOT__bus_sz)) 
                     | VL_GTES_III(32, (unnamedblk295__DOT__unnamedblk296__DOT__next_lsb 
                                        - (unnamedblk295__DOT__unnamedblk296__DOT__this_lsb 
                                           + unnamedblk295__DOT__unnamedblk296__DOT__this_sz)), 
                                   VL_MODDIVS_III(32, unnamedblk295__DOT__unnamedblk296__DOT__next_lsb, unnamedblk295__DOT__unnamedblk296__DOT__bus_sz)))) {
                    is_indv_accessible__Vfuncrtn = 1U;
                    goto __Vlabel0;
                }
            } else if ((VL_GTES_III(32, (unnamedblk295__DOT__unnamedblk296__DOT__next_lsb 
                                         - (unnamedblk295__DOT__unnamedblk296__DOT__this_lsb 
                                            + unnamedblk295__DOT__unnamedblk296__DOT__this_sz)), 
                                    VL_MODDIVS_III(32, unnamedblk295__DOT__unnamedblk296__DOT__next_lsb, unnamedblk295__DOT__unnamedblk296__DOT__bus_sz)) 
                        & VL_GTES_III(32, (unnamedblk295__DOT__unnamedblk296__DOT__this_lsb 
                                           - (unnamedblk295__DOT__unnamedblk296__DOT__prev_lsb 
                                              + unnamedblk295__DOT__unnamedblk296__DOT__prev_sz)), 
                                      VL_MODDIVS_III(32, unnamedblk295__DOT__unnamedblk296__DOT__this_lsb, unnamedblk295__DOT__unnamedblk296__DOT__bus_sz)))) {
                is_indv_accessible__Vfuncrtn = 1U;
                goto __Vlabel0;
            }
        }
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__258__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__258__severity = 1U;
                        __Vfunc_uvm_report_enabled__258__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__259__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__259__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__260__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__260__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__258__verbosity, (IData)(__Vfunc_uvm_report_enabled__258__severity), __Vfunc_uvm_report_enabled__258__id, __Vtask_uvm_report_enabled__261__Vfuncout);
                        __Vfunc_uvm_report_enabled__258__Vfuncout 
                            = __Vtask_uvm_report_enabled__261__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__258__Vfuncout))) {
            __Vtask_uvm_report_warning__262__report_enabled_checked = 1U;
            __Vtask_uvm_report_warning__262__context_name = ""s;
            __Vtask_uvm_report_warning__262__line = 0x0000058eU;
            __Vtask_uvm_report_warning__262__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
            __Vtask_uvm_report_warning__262__verbosity = 0U;
            __Vtask_uvm_report_warning__262__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Target bus does not support byte enabling, and the field '"s, 
                                                                                ([&]() {
                                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__263__Vfuncout);
                                    }(), __Vfunc_get_full_name__263__Vfuncout)), "' is not the only field within the entire bus width. "s), "Individual field access will not be available. "s), "Accessing complete register instead."s));
            __Vtask_uvm_report_warning__262__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__264__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__264__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__265__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__265__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__262__id, __Vtask_uvm_report_warning__262__message, __Vtask_uvm_report_warning__262__verbosity, __Vtask_uvm_report_warning__262__filename, __Vtask_uvm_report_warning__262__line, __Vtask_uvm_report_warning__262__context_name, (IData)(__Vtask_uvm_report_warning__262__report_enabled_checked));
        }
        is_indv_accessible__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

VlCoroutine Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_poke(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ value, std::string kind, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_poke\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__267__Vfuncout;
    __Vfunc_uvm_report_enabled__267__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__267__verbosity;
    __Vfunc_uvm_report_enabled__267__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__267__severity;
    __Vfunc_uvm_report_enabled__267__severity = 0;
    std::string __Vfunc_uvm_report_enabled__267__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__268__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__269__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__270__Vfuncout;
    __Vtask_uvm_report_enabled__270__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__271__id;
    std::string __Vtask_uvm_report_warning__271__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__271__verbosity;
    __Vtask_uvm_report_warning__271__verbosity = 0;
    std::string __Vtask_uvm_report_warning__271__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__271__line;
    __Vtask_uvm_report_warning__271__line = 0;
    std::string __Vtask_uvm_report_warning__271__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__271__report_enabled_checked;
    __Vtask_uvm_report_warning__271__report_enabled_checked = 0;
    std::string __Vfunc_get_name__272__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__273__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__274__Vfuncout;
    IData/*31:0*/ __Vtask_peek__277__status;
    __Vtask_peek__277__status = 0;
    QData/*63:0*/ __Vtask_peek__277__value;
    __Vtask_peek__277__value = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__278__Vfuncout;
    __Vfunc_uvm_report_enabled__278__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__278__verbosity;
    __Vfunc_uvm_report_enabled__278__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__278__severity;
    __Vfunc_uvm_report_enabled__278__severity = 0;
    std::string __Vfunc_uvm_report_enabled__278__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__279__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__280__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__281__Vfuncout;
    __Vtask_uvm_report_enabled__281__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__282__id;
    std::string __Vtask_uvm_report_error__282__message;
    IData/*31:0*/ __Vtask_uvm_report_error__282__verbosity;
    __Vtask_uvm_report_error__282__verbosity = 0;
    std::string __Vtask_uvm_report_error__282__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__282__line;
    __Vtask_uvm_report_error__282__line = 0;
    std::string __Vtask_uvm_report_error__282__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__282__report_enabled_checked;
    __Vtask_uvm_report_error__282__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__283__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__284__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__285__Vfuncout;
    IData/*31:0*/ __Vtask_poke__288__status;
    __Vtask_poke__288__status = 0;
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
                            __Vfunc_uvm_report_enabled__267__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__267__severity = 1U;
                            __Vfunc_uvm_report_enabled__267__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__268__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__268__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__269__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__269__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__267__verbosity, (IData)(__Vfunc_uvm_report_enabled__267__severity), __Vfunc_uvm_report_enabled__267__id, __Vtask_uvm_report_enabled__270__Vfuncout);
                            __Vfunc_uvm_report_enabled__267__Vfuncout 
                                = __Vtask_uvm_report_enabled__270__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__267__Vfuncout))) {
                __Vtask_uvm_report_warning__271__report_enabled_checked = 1U;
                __Vtask_uvm_report_warning__271__context_name = ""s;
                __Vtask_uvm_report_warning__271__line = 0x000005a6U;
                __Vtask_uvm_report_warning__271__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
                __Vtask_uvm_report_warning__271__verbosity = 0U;
                __Vtask_uvm_report_warning__271__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("uvm_reg_field::poke(): Value exceeds size of field '"s, 
                                                                       ([&]() {
                                    this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__272__Vfuncout);
                                }(), __Vfunc_get_name__272__Vfuncout)), "'"s));
                __Vtask_uvm_report_warning__271__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__273__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__273__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__274__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__274__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__271__id, __Vtask_uvm_report_warning__271__message, __Vtask_uvm_report_warning__271__verbosity, __Vtask_uvm_report_warning__271__filename, __Vtask_uvm_report_warning__271__line, __Vtask_uvm_report_warning__271__context_name, (IData)(__Vtask_uvm_report_warning__271__report_enabled_checked));
            }
            value = (value & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                              - 1ULL));
        }
        co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1451)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
        VL_NULL_CHECK(this->__PVT__m_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1452)->__PVT__m_is_locked_by_field = 1U;
        tmp = 0ULL;
        co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1457)->__VnoInFunc_peek(vlSymsp, __Vtask_peek__277__status, __Vtask_peek__277__value, kind, parent, extension, fname, lineno);
        status = __Vtask_peek__277__status;
        tmp = __Vtask_peek__277__value;
        if ((1U == status)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__278__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__278__severity = 2U;
                            __Vfunc_uvm_report_enabled__278__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__279__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__279__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__280__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__280__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__278__verbosity, (IData)(__Vfunc_uvm_report_enabled__278__severity), __Vfunc_uvm_report_enabled__278__id, __Vtask_uvm_report_enabled__281__Vfuncout);
                            __Vfunc_uvm_report_enabled__278__Vfuncout 
                                = __Vtask_uvm_report_enabled__281__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__278__Vfuncout))) {
                __Vtask_uvm_report_error__282__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__282__context_name = ""s;
                __Vtask_uvm_report_error__282__line = 0x000005b5U;
                __Vtask_uvm_report_error__282__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
                __Vtask_uvm_report_error__282__verbosity = 0U;
                __Vtask_uvm_report_error__282__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN("uvm_reg_field::poke(): Peek of register '"s, 
                                                                                ([&]() {
                                        VL_NULL_CHECK(this->__PVT__m_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1461)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__283__Vfuncout);
                                    }(), __Vtask_get_full_name__283__Vfuncout)), "' returned status "s), 
                                                        Vtest_simple_register_uvm___024unit::__Venumtab_enum_name83
                                                        [
                                                        (3U 
                                                         & status)]));
                __Vtask_uvm_report_error__282__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__284__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__284__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__285__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__285__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__282__id, __Vtask_uvm_report_error__282__message, __Vtask_uvm_report_error__282__verbosity, __Vtask_uvm_report_error__282__filename, __Vtask_uvm_report_error__282__line, __Vtask_uvm_report_error__282__context_name, (IData)(__Vtask_uvm_report_error__282__report_enabled_checked));
            }
            co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1462)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
            VL_NULL_CHECK(this->__PVT__m_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1463)->__PVT__m_is_locked_by_field = 0U;
            goto __Vlabel0;
        }
        tmp = (tmp & (~ VL_SHIFTL_QQI(64,64,32, (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                                                 - 1ULL), this->__PVT__m_lsb)));
        tmp = (tmp | VL_SHIFTL_QQI(64,64,32, value, this->__PVT__m_lsb));
        co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1470)->__VnoInFunc_poke(vlSymsp, __Vtask_poke__288__status, tmp, kind, parent, extension, fname, lineno);
        status = __Vtask_poke__288__status;
        co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1472)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
        VL_NULL_CHECK(this->__PVT__m_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1473)->__PVT__m_is_locked_by_field = 0U;
        __Vlabel0: ;
    }
    co_return;}

VlCoroutine Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_peek(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ &value, std::string kind, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_peek\n"); );
    // Locals
    IData/*31:0*/ __Vtask_peek__290__status;
    __Vtask_peek__290__status = 0;
    QData/*63:0*/ __Vtask_peek__290__value;
    __Vtask_peek__290__value = 0;
    // Body
    VL_KEEP_THIS;
    QData/*63:0*/ reg_value;
    reg_value = 0;
    this->__PVT__m_fname = fname;
    this->__PVT__m_lineno = lineno;
    co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1491)->__VnoInFunc_peek(vlSymsp, __Vtask_peek__290__status, __Vtask_peek__290__value, kind, parent, extension, fname, lineno);
    status = __Vtask_peek__290__status;
    reg_value = __Vtask_peek__290__value;
    value = (VL_SHIFTR_QQI(64,64,32, reg_value, this->__PVT__m_lsb) 
             & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_size) 
                - 1ULL));
    co_return;}

VlCoroutine Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_mirror(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ check, IData/*31:0*/ path, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_mirror\n"); );
    // Locals
    IData/*31:0*/ __Vtask_mirror__291__status;
    __Vtask_mirror__291__status = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    this->__PVT__m_fname = fname;
    this->__PVT__m_lineno = lineno;
    co_await VL_NULL_CHECK(this->__PVT__m_parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1510)->__VnoInFunc_mirror(vlProcess, vlSymsp, __Vtask_mirror__291__status, check, path, map, parent, prior, extension, fname, lineno);
    status = __Vtask_mirror__291__status;
    co_return;}

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
    std::string __Vfunc_get_name__293__Vfuncout;
    std::string __Vfunc_get_type_name__294__Vfuncout;
    std::string __Vfunc_convert2string__295__Vfuncout;
    // Body
    VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1548)->__VnoInFunc_print_generic(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                    this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__293__Vfuncout);
                }(), __Vfunc_get_name__293__Vfuncout)), 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                    this->__VnoInFunc_get_type_name(vlSymsp, __Vfunc_get_type_name__294__Vfuncout);
                }(), __Vfunc_get_type_name__294__Vfuncout)), 0xffffffffU, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                    this->__VnoInFunc_convert2string(vlProcess, vlSymsp, __Vfunc_convert2string__295__Vfuncout);
                }(), __Vfunc_convert2string__295__Vfuncout)), 0x2eU);
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_convert2string\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg> __Vfunc_get_register__296__Vfuncout;
    IData/*31:0*/ __Vfunc_get_n_bits__297__Vfuncout;
    __Vfunc_get_n_bits__297__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_n_bits__298__Vfuncout;
    __Vfunc_get_n_bits__298__Vfuncout = 0;
    std::string __Vfunc_get_access__299__Vfuncout;
    std::string __Vtask_get_name__300__Vfuncout;
    IData/*31:0*/ __Vfunc_get_lsb_pos__301__Vfuncout;
    __Vfunc_get_lsb_pos__301__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_n_bits__302__Vfuncout;
    __Vfunc_get_n_bits__302__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_lsb_pos__303__Vfuncout;
    __Vfunc_get_lsb_pos__303__Vfuncout = 0;
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
    this->__VnoInFunc_get_register(vlSymsp, __Vfunc_get_register__296__Vfuncout);
    reg_ = __Vfunc_get_register__296__Vfuncout;
    VL_SFORMAT_NX(64,fmt,"%0#'h%%%0#h",0,32,([&]() {
                    this->__VnoInFunc_get_n_bits(vlSymsp, __Vfunc_get_n_bits__297__Vfuncout);
                }(), __Vfunc_get_n_bits__297__Vfuncout),
                  32,((IData)(1U) + VL_SHIFTR_III(32,32,32, 
                                                  (([&]() {
                                this->__VnoInFunc_get_n_bits(vlSymsp, __Vfunc_get_n_bits__298__Vfuncout);
                            }(), __Vfunc_get_n_bits__298__Vfuncout) 
                                                   - (IData)(1U)), 2U)));
    __Vtemp_1 = VL_CONCATN_NNN(VL_CONCATN_NNN(" (Mirror: "s, fmt), ")"s);
    __Vtemp_2 = VL_CONCATN_NNN(VL_CONCATN_NNN("%s %s %s[%0d:%0d]="s, fmt), "%s"s);
    __Vtemp_3 = ([&]() {
            this->__VnoInFunc_get_access(vlProcess, vlSymsp, VlNull{}, __Vfunc_get_access__299__Vfuncout);
        }(), __Vfunc_get_access__299__Vfuncout);
    __Vtemp_4 = ([&]() {
            VL_NULL_CHECK(reg_, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 1566)
                 ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__300__Vfuncout);
        }(), __Vtask_get_name__300__Vfuncout);
    __Vtemp_5 = ((this->__PVT__m_desired != this->__PVT__m_mirrored)
                  ? VL_SFORMATF_N_NX("%@%20#",0,-1,
                                     &(__Vtemp_1),64,
                                     this->__PVT__m_mirrored) 
                  : ""s);
    VL_SFORMAT_NX(64,convert2string__Vfuncrtn,"%@%@%@%@%10#%10#%20#%@",0,
                  -1,&(__Vtemp_2),-1,&(prefix),-1,&(__Vtemp_3),
                  -1,&(__Vtemp_4),32,((([&]() {
                            this->__VnoInFunc_get_lsb_pos(vlSymsp, __Vfunc_get_lsb_pos__301__Vfuncout);
                        }(), __Vfunc_get_lsb_pos__301__Vfuncout) 
                                       + ([&]() {
                            this->__VnoInFunc_get_n_bits(vlSymsp, __Vfunc_get_n_bits__302__Vfuncout);
                        }(), __Vfunc_get_n_bits__302__Vfuncout)) 
                                      - (IData)(1U)),
                  32,([&]() {
                    this->__VnoInFunc_get_lsb_pos(vlSymsp, __Vfunc_get_lsb_pos__303__Vfuncout);
                }(), __Vfunc_get_lsb_pos__303__Vfuncout),
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
    IData/*31:0*/ __Vfunc_uvm_report_enabled__304__Vfuncout;
    __Vfunc_uvm_report_enabled__304__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__304__verbosity;
    __Vfunc_uvm_report_enabled__304__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__304__severity;
    __Vfunc_uvm_report_enabled__304__severity = 0;
    std::string __Vfunc_uvm_report_enabled__304__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__305__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__306__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__307__Vfuncout;
    __Vtask_uvm_report_enabled__307__Vfuncout = 0;
    // Body
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__304__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__304__severity = 3U;
                    __Vfunc_uvm_report_enabled__304__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__305__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__305__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__306__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__306__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__304__verbosity, (IData)(__Vfunc_uvm_report_enabled__304__severity), __Vfunc_uvm_report_enabled__304__id, __Vtask_uvm_report_enabled__307__Vfuncout);
                    __Vfunc_uvm_report_enabled__304__Vfuncout 
                        = __Vtask_uvm_report_enabled__307__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__304__Vfuncout))) {
        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "RegModel field cannot be cloned"s, 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s, 0x00000634U, ""s, 1U);
    }
    clone__Vfuncrtn = VlNull{};
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_copy\n"); );
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
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__314__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__315__Vfuncout;
    // Body
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__309__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__309__severity = 1U;
                    __Vfunc_uvm_report_enabled__309__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__310__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__310__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__311__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__311__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__309__verbosity, (IData)(__Vfunc_uvm_report_enabled__309__severity), __Vfunc_uvm_report_enabled__309__id, __Vtask_uvm_report_enabled__312__Vfuncout);
                    __Vfunc_uvm_report_enabled__309__Vfuncout 
                        = __Vtask_uvm_report_enabled__312__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__309__Vfuncout))) {
        __Vtask_uvm_report_warning__313__report_enabled_checked = 1U;
        __Vtask_uvm_report_warning__313__context_name = ""s;
        __Vtask_uvm_report_warning__313__line = 0x0000063bU;
        __Vtask_uvm_report_warning__313__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
        __Vtask_uvm_report_warning__313__verbosity = 0U;
        __Vtask_uvm_report_warning__313__message = "RegModel field copy not yet implemented"s;
        __Vtask_uvm_report_warning__313__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__314__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__314__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__315__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__315__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__313__id, __Vtask_uvm_report_warning__313__message, __Vtask_uvm_report_warning__313__verbosity, __Vtask_uvm_report_warning__313__filename, __Vtask_uvm_report_warning__313__line, __Vtask_uvm_report_warning__313__context_name, (IData)(__Vtask_uvm_report_warning__313__report_enabled_checked));
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_compare(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_compare\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__317__Vfuncout;
    __Vfunc_uvm_report_enabled__317__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__317__verbosity;
    __Vfunc_uvm_report_enabled__317__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__317__severity;
    __Vfunc_uvm_report_enabled__317__severity = 0;
    std::string __Vfunc_uvm_report_enabled__317__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__318__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__319__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__320__Vfuncout;
    __Vtask_uvm_report_enabled__320__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__321__id;
    std::string __Vtask_uvm_report_warning__321__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__321__verbosity;
    __Vtask_uvm_report_warning__321__verbosity = 0;
    std::string __Vtask_uvm_report_warning__321__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__321__line;
    __Vtask_uvm_report_warning__321__line = 0;
    std::string __Vtask_uvm_report_warning__321__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__321__report_enabled_checked;
    __Vtask_uvm_report_warning__321__report_enabled_checked = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__322__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__323__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__317__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__317__severity = 1U;
                    __Vfunc_uvm_report_enabled__317__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__318__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__318__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__319__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__319__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__317__verbosity, (IData)(__Vfunc_uvm_report_enabled__317__severity), __Vfunc_uvm_report_enabled__317__id, __Vtask_uvm_report_enabled__320__Vfuncout);
                    __Vfunc_uvm_report_enabled__317__Vfuncout 
                        = __Vtask_uvm_report_enabled__320__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__317__Vfuncout))) {
        __Vtask_uvm_report_warning__321__report_enabled_checked = 1U;
        __Vtask_uvm_report_warning__321__context_name = ""s;
        __Vtask_uvm_report_warning__321__line = 0x00000644U;
        __Vtask_uvm_report_warning__321__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
        __Vtask_uvm_report_warning__321__verbosity = 0U;
        __Vtask_uvm_report_warning__321__message = "RegModel field compare not yet implemented"s;
        __Vtask_uvm_report_warning__321__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__322__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__322__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__323__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__323__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__321__id, __Vtask_uvm_report_warning__321__message, __Vtask_uvm_report_warning__321__verbosity, __Vtask_uvm_report_warning__321__filename, __Vtask_uvm_report_warning__321__line, __Vtask_uvm_report_warning__321__context_name, (IData)(__Vtask_uvm_report_warning__321__report_enabled_checked));
    }
    do_compare__Vfuncrtn = 0U;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_pack(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_pack\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__325__Vfuncout;
    __Vfunc_uvm_report_enabled__325__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__325__verbosity;
    __Vfunc_uvm_report_enabled__325__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__325__severity;
    __Vfunc_uvm_report_enabled__325__severity = 0;
    std::string __Vfunc_uvm_report_enabled__325__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__326__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__327__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__328__Vfuncout;
    __Vtask_uvm_report_enabled__328__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__329__id;
    std::string __Vtask_uvm_report_warning__329__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__329__verbosity;
    __Vtask_uvm_report_warning__329__verbosity = 0;
    std::string __Vtask_uvm_report_warning__329__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__329__line;
    __Vtask_uvm_report_warning__329__line = 0;
    std::string __Vtask_uvm_report_warning__329__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__329__report_enabled_checked;
    __Vtask_uvm_report_warning__329__report_enabled_checked = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__330__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__331__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__325__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__325__severity = 1U;
                    __Vfunc_uvm_report_enabled__325__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__326__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__326__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__327__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__327__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__325__verbosity, (IData)(__Vfunc_uvm_report_enabled__325__severity), __Vfunc_uvm_report_enabled__325__id, __Vtask_uvm_report_enabled__328__Vfuncout);
                    __Vfunc_uvm_report_enabled__325__Vfuncout 
                        = __Vtask_uvm_report_enabled__328__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__325__Vfuncout))) {
        __Vtask_uvm_report_warning__329__report_enabled_checked = 1U;
        __Vtask_uvm_report_warning__329__context_name = ""s;
        __Vtask_uvm_report_warning__329__line = 0x0000064dU;
        __Vtask_uvm_report_warning__329__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
        __Vtask_uvm_report_warning__329__verbosity = 0U;
        __Vtask_uvm_report_warning__329__message = "RegModel field cannot be packed"s;
        __Vtask_uvm_report_warning__329__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__330__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__330__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__331__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__331__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__329__id, __Vtask_uvm_report_warning__329__message, __Vtask_uvm_report_warning__329__verbosity, __Vtask_uvm_report_warning__329__filename, __Vtask_uvm_report_warning__329__line, __Vtask_uvm_report_warning__329__context_name, (IData)(__Vtask_uvm_report_warning__329__report_enabled_checked));
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_unpack(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_do_unpack\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__333__Vfuncout;
    __Vfunc_uvm_report_enabled__333__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__333__verbosity;
    __Vfunc_uvm_report_enabled__333__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__333__severity;
    __Vfunc_uvm_report_enabled__333__severity = 0;
    std::string __Vfunc_uvm_report_enabled__333__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__334__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__335__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__336__Vfuncout;
    __Vtask_uvm_report_enabled__336__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__337__id;
    std::string __Vtask_uvm_report_warning__337__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__337__verbosity;
    __Vtask_uvm_report_warning__337__verbosity = 0;
    std::string __Vtask_uvm_report_warning__337__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__337__line;
    __Vtask_uvm_report_warning__337__line = 0;
    std::string __Vtask_uvm_report_warning__337__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__337__report_enabled_checked;
    __Vtask_uvm_report_warning__337__report_enabled_checked = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__338__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__339__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__333__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__333__severity = 1U;
                    __Vfunc_uvm_report_enabled__333__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__334__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__334__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__335__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__335__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__333__verbosity, (IData)(__Vfunc_uvm_report_enabled__333__severity), __Vfunc_uvm_report_enabled__333__id, __Vtask_uvm_report_enabled__336__Vfuncout);
                    __Vfunc_uvm_report_enabled__333__Vfuncout 
                        = __Vtask_uvm_report_enabled__336__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__333__Vfuncout))) {
        __Vtask_uvm_report_warning__337__report_enabled_checked = 1U;
        __Vtask_uvm_report_warning__337__context_name = ""s;
        __Vtask_uvm_report_warning__337__line = 0x00000654U;
        __Vtask_uvm_report_warning__337__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh"s;
        __Vtask_uvm_report_warning__337__verbosity = 0U;
        __Vtask_uvm_report_warning__337__message = "RegModel field cannot be unpacked"s;
        __Vtask_uvm_report_warning__337__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__338__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__338__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__339__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__339__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__337__id, __Vtask_uvm_report_warning__337__message, __Vtask_uvm_report_warning__337__verbosity, __Vtask_uvm_report_warning__337__filename, __Vtask_uvm_report_warning__337__line, __Vtask_uvm_report_warning__337__context_name, (IData)(__Vtask_uvm_report_warning__337__report_enabled_checked));
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_randomize(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__343__Vfuncout;
    __Vfunc___VBasicRand__343__Vfuncout = 0;
    // Body
    this->__VnoInFunc_pre_randomize(vlSymsp);
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__343__Vfuncout);
            }(), __Vfunc___VBasicRand__343__Vfuncout));
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
                  ? std::string("value") : VL_SFORMATF_N_NX("#x%x",0,
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
                                                                                &(__Vtemp_4)) , "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_field.svh", 
                                                                                63, 
                                                                                "      if (64 > m_size) {");
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc___Vsetup_constraints(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc___Vsetup_constraints\n"); );
    // Body
    this->__VnoInFunc_uvm_reg_field_valid_setup_constraint(vlSymsp);
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc___VBasicRand(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
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

Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::~Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field::~\n"); );
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
