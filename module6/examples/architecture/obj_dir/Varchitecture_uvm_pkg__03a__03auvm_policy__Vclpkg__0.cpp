// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varchitecture.h for the primary calling header

#include "Varchitecture__pch.h"

Varchitecture_uvm_pkg__03a__03auvm_policy::Varchitecture_uvm_pkg__03a__03auvm_policy(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name)
    : Varchitecture_uvm_pkg__03a__03auvm_object(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_policy::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Varchitecture_uvm_pkg__03a__03auvm_policy::__VnoInFunc_flush(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_policy::__VnoInFunc_flush\n"); );
    // Body
    this->__PVT__m_policy_stack.clear();
}

void Varchitecture_uvm_pkg__03a__03auvm_policy::__VnoInFunc_extension_exists(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_wrapper> ext_type, CData/*0:0*/ &extension_exists__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_policy::__VnoInFunc_extension_exists\n"); );
    // Body
    extension_exists__Vfuncrtn = (this->__PVT__m_extensions.exists(ext_type)
                                   ? 1U : 0U);
}

void Varchitecture_uvm_pkg__03a__03auvm_policy::__VnoInFunc_set_extension(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> extension, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> &set_extension__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_policy::__VnoInFunc_set_extension\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_wrapper> __Vtask_get_object_type__2__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_wrapper> __Vtask_get_object_type__3__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_wrapper> __Vtask_get_object_type__4__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_wrapper> __Vtask_get_object_type__5__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> m_set_extension;
    if ((VlNull{} == extension)) {
        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "NULLEXT"s, "Attempting to set  null extension "s, 0U, ""s, 0U, ""s, 0U);
    }
    if (this->__PVT__m_extensions.exists(([&]() {
                    VL_NULL_CHECK(extension, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_policy.svh", 96)
                                          ->__VnoInFunc_get_object_type(vlSymsp, __Vtask_get_object_type__2__Vfuncout);
                }(), __Vtask_get_object_type__2__Vfuncout))) {
        m_set_extension = this->__PVT__m_extensions
            .at(([&]() {
                    VL_NULL_CHECK(extension, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_policy.svh", 97)
                 ->__VnoInFunc_get_object_type(vlSymsp, __Vtask_get_object_type__3__Vfuncout);
                }(), __Vtask_get_object_type__3__Vfuncout));
        this->__PVT__m_extensions.at(([&]() {
                    VL_NULL_CHECK(extension, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_policy.svh", 98)
                                      ->__VnoInFunc_get_object_type(vlSymsp, __Vtask_get_object_type__4__Vfuncout);
                }(), __Vtask_get_object_type__4__Vfuncout)) 
            = extension;
        set_extension__Vfuncrtn = m_set_extension;
    } else {
        this->__PVT__m_extensions.at(([&]() {
                    VL_NULL_CHECK(extension, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_policy.svh", 103)
                                      ->__VnoInFunc_get_object_type(vlSymsp, __Vtask_get_object_type__5__Vfuncout);
                }(), __Vtask_get_object_type__5__Vfuncout)) 
            = extension;
        set_extension__Vfuncrtn = VlNull{};
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_policy::__VnoInFunc_get_extension(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_wrapper> ext_type, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> &get_extension__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_policy::__VnoInFunc_get_extension\n"); );
    // Body
    if (this->__PVT__m_extensions.exists(ext_type)) {
        get_extension__Vfuncrtn = this->__PVT__m_extensions
            .at(ext_type);
    } else {
        get_extension__Vfuncrtn = VlNull{};
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_policy::__VnoInFunc_clear_extension(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_wrapper> ext_type) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_policy::__VnoInFunc_clear_extension\n"); );
    // Body
    this->__PVT__m_extensions.erase(ext_type);
}

void Varchitecture_uvm_pkg__03a__03auvm_policy::__VnoInFunc_clear_extensions(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_policy::__VnoInFunc_clear_extensions\n"); );
    // Body
    this->__PVT__m_extensions.clear();
}

void Varchitecture_uvm_pkg__03a__03auvm_policy::__VnoInFunc_push_active_object(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_policy::__VnoInFunc_push_active_object\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__6__Vfuncout;
    __Vfunc_uvm_report_enabled__6__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__6__verbosity;
    __Vfunc_uvm_report_enabled__6__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__6__severity;
    __Vfunc_uvm_report_enabled__6__severity = 0;
    std::string __Vfunc_uvm_report_enabled__6__id;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__7__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__8__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__9__Vfuncout;
    __Vtask_uvm_report_enabled__9__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__10__id;
    std::string __Vtask_uvm_report_error__10__message;
    IData/*31:0*/ __Vtask_uvm_report_error__10__verbosity;
    __Vtask_uvm_report_error__10__verbosity = 0;
    std::string __Vtask_uvm_report_error__10__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__10__line;
    __Vtask_uvm_report_error__10__line = 0;
    std::string __Vtask_uvm_report_error__10__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__10__report_enabled_checked;
    __Vtask_uvm_report_error__10__report_enabled_checked = 0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__11__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__12__Vfuncout;
    // Body
    if ((VlNull{} != obj)) {
        this->__PVT__m_policy_stack.push_front(obj);
    } else if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__6__id = "UVM_POLICY_PUSHNULL"s;
                    __Vfunc_uvm_report_enabled__6__severity = 2U;
                    __Vfunc_uvm_report_enabled__6__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__7__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__7__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                       ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__8__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__8__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                       ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__6__verbosity, (IData)(__Vfunc_uvm_report_enabled__6__severity), __Vfunc_uvm_report_enabled__6__id, __Vtask_uvm_report_enabled__9__Vfuncout);
                    __Vfunc_uvm_report_enabled__6__Vfuncout 
                        = __Vtask_uvm_report_enabled__9__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__6__Vfuncout))) {
        __Vtask_uvm_report_error__10__report_enabled_checked = 1U;
        __Vtask_uvm_report_error__10__context_name = ""s;
        __Vtask_uvm_report_error__10__line = 0x00000097U;
        __Vtask_uvm_report_error__10__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_policy.svh"s;
        __Vtask_uvm_report_error__10__verbosity = 0U;
        __Vtask_uvm_report_error__10__message = "Attempting to push an null object push_active_object onto the policy stack"s;
        __Vtask_uvm_report_error__10__id = "UVM_POLICY_PUSHNULL"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__11__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__11__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__12__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__12__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__10__id, __Vtask_uvm_report_error__10__message, __Vtask_uvm_report_error__10__verbosity, __Vtask_uvm_report_error__10__filename, __Vtask_uvm_report_error__10__line, __Vtask_uvm_report_error__10__context_name, (IData)(__Vtask_uvm_report_error__10__report_enabled_checked));
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_policy::__VnoInFunc_pop_active_object(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> &pop_active_object__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_policy::__VnoInFunc_pop_active_object\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__14__Vfuncout;
    __Vfunc_uvm_report_enabled__14__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__14__verbosity;
    __Vfunc_uvm_report_enabled__14__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__14__severity;
    __Vfunc_uvm_report_enabled__14__severity = 0;
    std::string __Vfunc_uvm_report_enabled__14__id;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__15__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__16__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__17__Vfuncout;
    __Vtask_uvm_report_enabled__17__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__18__id;
    std::string __Vtask_uvm_report_info__18__message;
    IData/*31:0*/ __Vtask_uvm_report_info__18__verbosity;
    __Vtask_uvm_report_info__18__verbosity = 0;
    std::string __Vtask_uvm_report_info__18__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__18__line;
    __Vtask_uvm_report_info__18__line = 0;
    std::string __Vtask_uvm_report_info__18__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__18__report_enabled_checked;
    __Vtask_uvm_report_info__18__report_enabled_checked = 0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__19__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__20__Vfuncout;
    // Body
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> m_tmp;
    if ((0U != this->__PVT__m_policy_stack.size())) {
        m_tmp = this->__PVT__m_policy_stack.pop_front();
        pop_active_object__Vfuncrtn = m_tmp;
    } else if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__14__id = "UVM_POLICY_EMPTY_POPACTIVE_OBJECT"s;
                    __Vfunc_uvm_report_enabled__14__severity = 0U;
                    __Vfunc_uvm_report_enabled__14__verbosity = 0x000001f4U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__15__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__15__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                       ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__16__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__16__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                       ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__14__verbosity, (IData)(__Vfunc_uvm_report_enabled__14__severity), __Vfunc_uvm_report_enabled__14__id, __Vtask_uvm_report_enabled__17__Vfuncout);
                    __Vfunc_uvm_report_enabled__14__Vfuncout 
                        = __Vtask_uvm_report_enabled__17__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__14__Vfuncout))) {
        __Vtask_uvm_report_info__18__report_enabled_checked = 1U;
        __Vtask_uvm_report_info__18__context_name = ""s;
        __Vtask_uvm_report_info__18__line = 0x000000a7U;
        __Vtask_uvm_report_info__18__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_policy.svh"s;
        __Vtask_uvm_report_info__18__verbosity = 0x000001f4U;
        __Vtask_uvm_report_info__18__message = "Attempting to pop an empty policy stack"s;
        __Vtask_uvm_report_info__18__id = "UVM_POLICY_EMPTY_POPACTIVE_OBJECT"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__19__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
            = __Vfunc_get__19__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__20__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
            = __Vtask_get_root__20__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__18__id, __Vtask_uvm_report_info__18__message, __Vtask_uvm_report_info__18__verbosity, __Vtask_uvm_report_info__18__filename, __Vtask_uvm_report_info__18__line, __Vtask_uvm_report_info__18__context_name, (IData)(__Vtask_uvm_report_info__18__report_enabled_checked));
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_policy::__VnoInFunc_get_active_object(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> &get_active_object__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_policy::__VnoInFunc_get_active_object\n"); );
    // Body
    if ((0U != this->__PVT__m_policy_stack.size())) {
        get_active_object__Vfuncrtn = this->__PVT__m_policy_stack.at(0U);
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_policy::__VnoInFunc_get_active_object_depth(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &get_active_object_depth__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_policy::__VnoInFunc_get_active_object_depth\n"); );
    // Body
    get_active_object_depth__Vfuncrtn = this->__PVT__m_policy_stack.size();
}

void Varchitecture_uvm_pkg__03a__03auvm_policy::__VnoInFunc_randomize(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_policy::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__23__Vfuncout;
    __Vfunc___Vbasic_randomize__23__Vfuncout = 0;
    // Body
    Varchitecture_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Varchitecture_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__23__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__23__Vfuncout));
}

void Varchitecture_uvm_pkg__03a__03auvm_policy::__VnoInFunc___Vbasic_randomize(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_policy::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Varchitecture_uvm_pkg__03a__03auvm_policy::_ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_policy::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_policy>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_policy::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Varchitecture_uvm_pkg__03a__03auvm_policy::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_policy::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Varchitecture_uvm_pkg__03a__03auvm_policy::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_policy::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_extensions:" + VL_TO_STRING(__PVT__m_extensions);
    out += ", m_policy_stack:" + VL_TO_STRING(__PVT__m_policy_stack);
    out += ", "+ Varchitecture_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
