// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclass_hierarchy.h for the primary calling header

#include "Vclass_hierarchy__pch.h"

void Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_compare_field_int(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ lhs, QData/*63:0*/ rhs, IData/*31:0*/ size, IData/*27:0*/ radix, CData/*0:0*/ &compare_field_int__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_compare_field_int\n"); );
    // Body
    QData/*63:0*/ mask;
    mask = 0;
    std::string msg;
    {
        mask = 0xffffffffffffffffULL;
        mask = VL_SHIFTR_QQI(64,64,32, mask, ((IData)(0x00000040U) 
                                              - size));
        if (((lhs & mask) != (rhs & mask))) {
            if ((0x01000000U == radix)) {
                VL_SFORMAT_NX(64,msg,"%@: lhs = 'b%0b : rhs = 'b%0b",0,
                              -1,&(name),64,(lhs & mask),
                              64,(rhs & mask));
            } else if ((0x06000000U == radix)) {
                VL_SFORMAT_NX(64,msg,"%@: lhs = 'o%0o : rhs = 'o%0o",0,
                              -1,&(name),64,(lhs & mask),
                              64,(rhs & mask));
            } else if ((0x02000000U == radix)) {
                VL_SFORMAT_NX(64,msg,"%@: lhs = %0# : rhs = %0#",0,
                              -1,&(name),64,(lhs & mask),
                              64,(rhs & mask));
            } else if ((0x09000000U == radix)) {
                VL_SFORMAT_NX(64,msg,"%@: lhs = %0t : rhs = %0t",0,
                              -1,&(name),64,(lhs & mask),
                              -12,64,(rhs & mask),-12);
            } else if ((0x08000000U == radix)) {
                VL_SFORMAT_NX(64,msg,"%@: lhs = %0s : rhs = %0s",0,
                              -1,&(name),64,(lhs & mask),
                              64,(rhs & mask));
            } else if ((0x0a000000U == radix)) {
                VL_SFORMAT_NX(64,msg,"%@: lhs = %0# : rhs = %0#",0,
                              -1,&(name),64,(lhs & mask),
                              64,(rhs & mask));
            } else {
                VL_SFORMAT_NX(64,msg,"%@: lhs = 'h%0x : rhs = 'h%0x",0,
                              -1,&(name),64,(lhs & mask),
                              64,(rhs & mask));
            }
            this->__VnoInFunc_print_msg(vlProcess, vlSymsp, msg);
            compare_field_int__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        compare_field_int__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_compare_field_real(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name, double lhs, double rhs, CData/*0:0*/ &compare_field_real__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_compare_field_real\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string msg;
    {
        if ((lhs != rhs)) {
            VL_SFORMAT_NX(64,msg,"%@: lhs = %g : rhs = %g",0,
                          -1,&(name),64,lhs,64,rhs);
            this->__VnoInFunc_print_msg(vlProcess, vlSymsp, msg);
            compare_field_real__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        compare_field_real__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_m_current_context(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name, std::string &m_current_context__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_m_current_context\n"); );
    // Body
    std::string unnamedblk1__DOT__full_name;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__i;
    unnamedblk1__DOT__unnamedblk2__DOT__i = 0;
    if ((0U == this->__PVT__m_object_names.size())) {
        m_current_context__Vfuncrtn = name;
    } else if (((1U == this->__PVT__m_object_names.size()) 
                & (""s == name))) {
        m_current_context__Vfuncrtn = this->__PVT__m_object_names.at(0U);
    } else {
        unnamedblk1__DOT__unnamedblk2__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk1__DOT__unnamedblk2__DOT__i, this->__PVT__m_object_names.size())) {
            unnamedblk1__DOT__full_name = ((unnamedblk1__DOT__unnamedblk2__DOT__i 
                                            == (this->__PVT__m_object_names.size() 
                                                - (IData)(1U)))
                                            ? VL_CONCATN_NNN(unnamedblk1__DOT__full_name, this->__PVT__m_object_names.at(unnamedblk1__DOT__unnamedblk2__DOT__i))
                                            : VL_CONCATN_NNN(
                                                             VL_CONCATN_NNN(unnamedblk1__DOT__full_name, this->__PVT__m_object_names.at(unnamedblk1__DOT__unnamedblk2__DOT__i)), "."s));
            unnamedblk1__DOT__unnamedblk2__DOT__i = 
                ((IData)(1U) + unnamedblk1__DOT__unnamedblk2__DOT__i);
        }
        m_current_context__Vfuncrtn = ((""s != name)
                                        ? VL_CONCATN_NNN(
                                                         VL_CONCATN_NNN(unnamedblk1__DOT__full_name, "."s), name)
                                        : unnamedblk1__DOT__full_name);
    }
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_compare_object(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> lhs, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> rhs, CData/*0:0*/ &compare_object__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_compare_object\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_object_compared__10__Vfuncout;
    __Vfunc_object_compared__10__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_object_compared__10__ret_val;
    __Vfunc_object_compared__10__ret_val = 0;
    IData/*27:0*/ __Vfunc_get_recursion_policy__11__Vfuncout;
    __Vfunc_get_recursion_policy__11__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__12__Vfuncout;
    __Vfunc_uvm_report_enabled__12__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__12__verbosity;
    __Vfunc_uvm_report_enabled__12__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__12__severity;
    __Vfunc_uvm_report_enabled__12__severity = 0;
    std::string __Vfunc_uvm_report_enabled__12__id;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__13__Vfuncout;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__14__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__15__Vfuncout;
    __Vtask_uvm_report_enabled__15__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__16__id;
    std::string __Vtask_uvm_report_warning__16__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__16__verbosity;
    __Vtask_uvm_report_warning__16__verbosity = 0;
    std::string __Vtask_uvm_report_warning__16__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__16__line;
    __Vtask_uvm_report_warning__16__line = 0;
    std::string __Vtask_uvm_report_warning__16__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__16__report_enabled_checked;
    __Vtask_uvm_report_warning__16__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__17__Vfuncout;
    std::string __Vtask_get_full_name__18__Vfuncout;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__19__Vfuncout;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__20__Vfuncout;
    IData/*27:0*/ __Vfunc_get_recursion_policy__23__Vfuncout;
    __Vfunc_get_recursion_policy__23__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_result__24__Vfuncout;
    __Vfunc_get_result__24__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_get_check_type__25__Vfuncout;
    __Vfunc_get_check_type__25__Vfuncout = 0;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper> __Vtask_get_object_type__26__Vfuncout;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper> __Vtask_get_object_type__27__Vfuncout;
    std::string __Vtask_get_type_name__28__Vfuncout;
    std::string __Vtask_get_type_name__29__Vfuncout;
    std::string __Vtask_get_type_name__31__Vfuncout;
    std::string __Vtask_get_type_name__32__Vfuncout;
    std::string __Vtask_get_name__34__Vfuncout;
    std::string __Vtask_get_name__35__Vfuncout;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_field_op> __Vfunc_m_get_available_op__36__Vfuncout;
    CData/*0:0*/ __Vtask_user_hook_enabled__39__Vfuncout;
    __Vtask_user_hook_enabled__39__Vfuncout = 0;
    CData/*0:0*/ __Vtask_do_compare__40__Vfuncout;
    __Vtask_do_compare__40__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_result__42__Vfuncout;
    __Vfunc_get_result__42__Vfuncout = 0;
    IData/*27:0*/ __Vfunc_get_recursion_policy__43__Vfuncout;
    __Vfunc_get_recursion_policy__43__Vfuncout = 0;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> __Vtask_pop_active_object__44__Vfuncout;
    IData/*31:0*/ __Vfunc_get_active_object_depth__45__Vfuncout;
    __Vfunc_get_active_object_depth__45__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_result__46__Vfuncout;
    __Vfunc_get_result__46__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_show_max__47__Vfuncout;
    __Vfunc_get_show_max__47__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_show_max__48__Vfuncout;
    __Vfunc_get_show_max__48__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_result__49__Vfuncout;
    __Vfunc_get_result__49__Vfuncout = 0;
    CData/*1:0*/ __Vtask_uvm_report__50__severity;
    __Vtask_uvm_report__50__severity = 0;
    std::string __Vtask_uvm_report__50__id;
    std::string __Vtask_uvm_report__50__message;
    IData/*31:0*/ __Vtask_uvm_report__50__verbosity;
    __Vtask_uvm_report__50__verbosity = 0;
    std::string __Vtask_uvm_report__50__filename;
    IData/*31:0*/ __Vtask_uvm_report__50__line;
    __Vtask_uvm_report__50__line = 0;
    std::string __Vtask_uvm_report__50__context_name;
    CData/*0:0*/ __Vtask_uvm_report__50__report_enabled_checked;
    __Vtask_uvm_report__50__report_enabled_checked = 0;
    IData/*31:0*/ __Vfunc_get_verbosity__51__Vfuncout;
    __Vfunc_get_verbosity__51__Vfuncout = 0;
    std::string __Vtask_get_name__52__Vfuncout;
    IData/*31:0*/ __Vtask_get_inst_id__53__Vfuncout;
    __Vtask_get_inst_id__53__Vfuncout = 0;
    std::string __Vtask_get_name__54__Vfuncout;
    IData/*31:0*/ __Vtask_get_inst_id__55__Vfuncout;
    __Vtask_get_inst_id__55__Vfuncout = 0;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__56__Vfuncout;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__57__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string unnamedblk3__DOT__msg;
    IData/*31:0*/ old_result;
    old_result = 0;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_field_op> field_op;
    IData/*31:0*/ prev_state;
    prev_state = 0;
    CData/*0:0*/ ret_val;
    ret_val = 0;
    {
        ret_val = 1U;
        if ((rhs == lhs)) {
            compare_object__Vfuncrtn = ret_val;
            goto __Vlabel0;
        }
        this->__PVT__m_object_names.push_back(name);
        if (((0x00040000U == this->__PVT__policy) & 
             (lhs != rhs))) {
            this->__VnoInFunc_print_msg_object(vlSymsp, lhs, rhs);
            ret_val = 0U;
        }
        if (((IData)(ret_val) & ((VlNull{} == rhs) 
                                 | (VlNull{} == lhs)))) {
            this->__VnoInFunc_print_msg_object(vlSymsp, lhs, rhs);
            ret_val = 0U;
        }
        if (ret_val) {
            this->__VnoInFunc_object_compared(vlSymsp, lhs, rhs, 
                                              ([&]() {
                        this->__VnoInFunc_get_recursion_policy(vlSymsp, __Vfunc_get_recursion_policy__11__Vfuncout);
                    }(), __Vfunc_get_recursion_policy__11__Vfuncout), __Vfunc_object_compared__10__ret_val, __Vfunc_object_compared__10__Vfuncout);
            ret_val = __Vfunc_object_compared__10__ret_val;
            prev_state = __Vfunc_object_compared__10__Vfuncout;
            if ((0U != prev_state)) {
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__12__id = "UVM/COPIER/LOOP"s;
                                __Vfunc_uvm_report_enabled__12__severity = 1U;
                                __Vfunc_uvm_report_enabled__12__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__13__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__13__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__14__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__14__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__12__verbosity, (IData)(__Vfunc_uvm_report_enabled__12__severity), __Vfunc_uvm_report_enabled__12__id, __Vtask_uvm_report_enabled__15__Vfuncout);
                                __Vfunc_uvm_report_enabled__12__Vfuncout 
                                    = __Vtask_uvm_report_enabled__15__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__12__Vfuncout))) {
                    __Vtask_uvm_report_warning__16__report_enabled_checked = 1U;
                    __Vtask_uvm_report_warning__16__context_name = ""s;
                    __Vtask_uvm_report_warning__16__line = 0x000001d1U;
                    __Vtask_uvm_report_warning__16__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_comparer.svh"s;
                    __Vtask_uvm_report_warning__16__verbosity = 0U;
                    __Vtask_uvm_report_warning__16__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Possible loop when comparing '"s, 
                                                                                ([&]() {
                                                VL_NULL_CHECK(lhs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_comparer.svh", 465)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__17__Vfuncout);
                                            }(), __Vtask_get_full_name__17__Vfuncout)), "' to '"s), 
                                                                           ([&]() {
                                        VL_NULL_CHECK(rhs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_comparer.svh", 465)
                                                                            ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__18__Vfuncout);
                                    }(), __Vtask_get_full_name__18__Vfuncout)), "'"s));
                    __Vtask_uvm_report_warning__16__id = "UVM/COPIER/LOOP"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__19__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__19__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__20__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__20__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__16__id, __Vtask_uvm_report_warning__16__message, __Vtask_uvm_report_warning__16__verbosity, __Vtask_uvm_report_warning__16__filename, __Vtask_uvm_report_warning__16__line, __Vtask_uvm_report_warning__16__context_name, (IData)(__Vtask_uvm_report_warning__16__report_enabled_checked));
                }
            }
            this->__VnoInFunc_push_active_object(vlProcess, vlSymsp, lhs);
            this->__PVT__m_recur_states.at(lhs).at(rhs).at(
                                                           ([&]() {
                        this->__VnoInFunc_get_recursion_policy(vlSymsp, __Vfunc_get_recursion_policy__23__Vfuncout);
                    }(), __Vfunc_get_recursion_policy__23__Vfuncout)) 
                = Vclass_hierarchy_state_info_t__struct__0{
                .__PVT__state = (IData)(1U), .__PVT__ret_val = (CData)(0U)};
            this->__VnoInFunc_get_result(vlSymsp, __Vfunc_get_result__24__Vfuncout);
            old_result = __Vfunc_get_result__24__Vfuncout;
            if ((([&]() {
                            this->__VnoInFunc_get_check_type(vlSymsp, __Vfunc_get_check_type__25__Vfuncout);
                        }(), (IData)(__Vfunc_get_check_type__25__Vfuncout)) 
                 && (([&]() {
                                VL_NULL_CHECK(lhs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_comparer.svh", 474)
                      ->__VnoInFunc_get_object_type(vlSymsp, __Vtask_get_object_type__26__Vfuncout);
                            }(), __Vtask_get_object_type__26__Vfuncout) 
                     != ([&]() {
                                VL_NULL_CHECK(rhs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_comparer.svh", 474)
                         ->__VnoInFunc_get_object_type(vlSymsp, __Vtask_get_object_type__27__Vfuncout);
                            }(), __Vtask_get_object_type__27__Vfuncout)))) {
                if ((([&]() {
                                VL_NULL_CHECK(lhs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_comparer.svh", 475)
                      ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__28__Vfuncout);
                            }(), __Vtask_get_type_name__28__Vfuncout) 
                     != ([&]() {
                                VL_NULL_CHECK(rhs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_comparer.svh", 475)
                         ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__29__Vfuncout);
                            }(), __Vtask_get_type_name__29__Vfuncout))) {
                    this->__VnoInFunc_print_msg(vlProcess, vlSymsp, 
                                                VL_CVT_PACK_STR_NN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("type: lhs = \""s, 
                                                                                ([&]() {
                                            VL_NULL_CHECK(lhs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_comparer.svh", 476)
                                                                                ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__31__Vfuncout);
                                        }(), __Vtask_get_type_name__31__Vfuncout)), "\" : rhs = \""s), 
                                                                                ([&]() {
                                            VL_NULL_CHECK(rhs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_comparer.svh", 476)
                                                                                ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__32__Vfuncout);
                                        }(), __Vtask_get_type_name__32__Vfuncout)), "\""s)));
                            } else {
                                this->__VnoInFunc_print_msg(vlProcess, vlSymsp, 
                                                            VL_CVT_PACK_STR_NN(
                                                                               VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("get_object_type() for "s, 
                                                                                ([&]() {
                                                            VL_NULL_CHECK(lhs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_comparer.svh", 479)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__34__Vfuncout);
                                                        }(), __Vtask_get_name__34__Vfuncout)), " does not match get_object_type() for "s), 
                                                                                ([&]() {
                                                    VL_NULL_CHECK(rhs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_comparer.svh", 479)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__35__Vfuncout);
                                                }(), __Vtask_get_name__35__Vfuncout))));
                            }
                        }
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_field_op__Vclpkg.__VnoInFunc_m_get_available_op(vlProcess, vlSymsp, __Vfunc_m_get_available_op__36__Vfuncout);
                        field_op = __Vfunc_m_get_available_op__36__Vfuncout;
                        VL_NULL_CHECK(field_op, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_comparer.svh", 484)
                                                                                ->__VnoInFunc_set(vlProcess, vlSymsp, 4U, 
                                                                                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer>{this}, rhs);
                        VL_NULL_CHECK(lhs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_comparer.svh", 485)
                                                                                ->__VnoInFunc_do_execute_op(vlProcess, vlSymsp, field_op);
                        if (([&]() {
                                    VL_NULL_CHECK(field_op, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_comparer.svh", 486)
                             ->__VnoInFunc_user_hook_enabled(vlProcess, vlSymsp, __Vtask_user_hook_enabled__39__Vfuncout);
                                }(), (IData)(__Vtask_user_hook_enabled__39__Vfuncout))) {
                            VL_NULL_CHECK(lhs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_comparer.svh", 487)
                                                                                ->__VnoInFunc_do_compare(vlSymsp, rhs, 
                                                                                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer>{this}, __Vtask_do_compare__40__Vfuncout);
                            ret_val = __Vtask_do_compare__40__Vfuncout;
                        }
                        VL_NULL_CHECK(field_op, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_comparer.svh", 489)
                                                                                ->__VnoInFunc_m_recycle(vlSymsp);
                        if (((IData)(ret_val) & (([&]() {
                                            this->__VnoInFunc_get_result(vlSymsp, __Vfunc_get_result__42__Vfuncout);
                                        }(), __Vfunc_get_result__42__Vfuncout) 
                                                 > old_result))) {
                            ret_val = 0U;
                        }
                        this->__PVT__m_recur_states
                                                                                .at(lhs)
                                                                                .at(rhs)
                                                                                .at(
                                                                                ([&]() {
                                    this->__VnoInFunc_get_recursion_policy(vlSymsp, __Vfunc_get_recursion_policy__43__Vfuncout);
                                }(), __Vfunc_get_recursion_policy__43__Vfuncout)) 
                            = Vclass_hierarchy_state_info_t__struct__0{
                            .__PVT__state = (IData)(2U), 
                            .__PVT__ret_val = (CData)((IData)(ret_val))};
                        this->__VnoInFunc_pop_active_object(vlProcess, vlSymsp, __Vtask_pop_active_object__44__Vfuncout);
                    }
                    (void)this->__PVT__m_object_names.pop_back();
                    if (((~ (IData)(ret_val)) & (0U 
                                                 == 
                                                 ([&]() {
                                        this->__VnoInFunc_get_active_object_depth(vlSymsp, __Vfunc_get_active_object_depth__45__Vfuncout);
                                    }(), __Vfunc_get_active_object_depth__45__Vfuncout)))) {
                        if ((0U != ([&]() {
                                        this->__VnoInFunc_get_result(vlSymsp, __Vfunc_get_result__46__Vfuncout);
                                    }(), __Vfunc_get_result__46__Vfuncout))) {
                            if (((0U != ([&]() {
                                                this->__VnoInFunc_get_show_max(vlSymsp, __Vfunc_get_show_max__47__Vfuncout);
                                            }(), __Vfunc_get_show_max__47__Vfuncout)) 
                                 & (([&]() {
                                                this->__VnoInFunc_get_show_max(vlSymsp, __Vfunc_get_show_max__48__Vfuncout);
                                            }(), __Vfunc_get_show_max__48__Vfuncout) 
                                    < ([&]() {
                                                this->__VnoInFunc_get_result(vlSymsp, __Vfunc_get_result__49__Vfuncout);
                                            }(), __Vfunc_get_result__49__Vfuncout)))) {
                                VL_SFORMAT_NX(64,unnamedblk3__DOT__msg
                                              ,"%0# Miscompare(s) (%0# shown) for object ",0,
                                              32,this->__PVT__result,
                                              32,this->__PVT__show_max);
                            } else {
                                VL_SFORMAT_NX(64,unnamedblk3__DOT__msg
                                              ,"%0# Miscompare(s) for object ",0,
                                              32,this->__PVT__result);
                            }
                        }
                        __Vtask_uvm_report__50__report_enabled_checked = 0U;
                        __Vtask_uvm_report__50__context_name = ""s;
                        __Vtask_uvm_report__50__line = 0x0000020dU;
                        __Vtask_uvm_report__50__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_comparer.svh"s;
                        this->__VnoInFunc_get_verbosity(vlSymsp, __Vfunc_get_verbosity__51__Vfuncout);
                        __Vtask_uvm_report__50__verbosity 
                            = __Vfunc_get_verbosity__51__Vfuncout;
                        __Vtemp_1 = ((VlNull{} == lhs)
                                      ? "<null>"s : 
                                     ([&]() {
                                    VL_NULL_CHECK(lhs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_comparer.svh", 521)
                                      ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__52__Vfuncout);
                                }(), __Vtask_get_name__52__Vfuncout));
                        __Vtemp_2 = ((VlNull{} == rhs)
                                      ? "<null>"s : 
                                     ([&]() {
                                    VL_NULL_CHECK(rhs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_comparer.svh", 523)
                                      ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__54__Vfuncout);
                                }(), __Vtask_get_name__54__Vfuncout));
                        __Vtask_uvm_report__50__message 
                            = VL_SFORMATF_N_NX("%@%@@%0d vs. %@@%0d",0,
                                               -1,&(unnamedblk3__DOT__msg),
                                               -1,&(__Vtemp_1),
                                               32,(
                                                   (VlNull{} 
                                                    == lhs)
                                                    ? 0U
                                                    : 
                                                   ([&]() {
                                            VL_NULL_CHECK(lhs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_comparer.svh", 522)
                                                    ->__VnoInFunc_get_inst_id(vlSymsp, __Vtask_get_inst_id__53__Vfuncout);
                                        }(), __Vtask_get_inst_id__53__Vfuncout)),
                                               -1,&(__Vtemp_2),
                                               32,(
                                                   (VlNull{} 
                                                    == rhs)
                                                    ? 0U
                                                    : 
                                                   ([&]() {
                                            VL_NULL_CHECK(rhs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_comparer.svh", 524)
                                                    ->__VnoInFunc_get_inst_id(vlSymsp, __Vtask_get_inst_id__55__Vfuncout);
                                        }(), __Vtask_get_inst_id__55__Vfuncout))) ;
                        __Vtask_uvm_report__50__id = "MISCMP"s;
                        __Vtask_uvm_report__50__severity 
                            = this->__PVT__sev;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__56__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report__Vstatic__cs 
                            = __Vfunc_get__56__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 108)
                                                                                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__57__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report__Vstatic__top 
                            = __Vtask_get_root__57__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 109)
                                                                                ->__VnoInFunc_uvm_report(vlProcess, vlSymsp, __Vtask_uvm_report__50__severity, __Vtask_uvm_report__50__id, __Vtask_uvm_report__50__message, __Vtask_uvm_report__50__verbosity, __Vtask_uvm_report__50__filename, __Vtask_uvm_report__50__line, __Vtask_uvm_report__50__context_name, (IData)(__Vtask_uvm_report__50__report_enabled_checked));
                    }
                    compare_object__Vfuncrtn = ret_val;
                    __Vlabel0: ;
                }
            }

            void Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_compare_string(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name, std::string lhs, std::string rhs, CData/*0:0*/ &compare_string__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_compare_string\n"); );
                // Body
                std::string msg;
                {
                    if ((lhs != rhs)) {
                        msg = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(name, ": lhs = \""s), lhs), "\" : rhs = \""s), rhs), "\""s);
                                        this->__VnoInFunc_print_msg(vlProcess, vlSymsp, msg);
                                        compare_string__Vfuncrtn = 0U;
                                        goto __Vlabel0;
                                    }
                                    compare_string__Vfuncrtn = 1U;
                                    __Vlabel0: ;
                                }
                            }

                            void Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_print_msg(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string msg) {
                                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_print_msg\n"); );
                                // Locals
                                std::string __Vfunc_m_current_context__60__Vfuncout;
                                IData/*31:0*/ __Vfunc_get_show_max__61__Vfuncout;
                                __Vfunc_get_show_max__61__Vfuncout = 0;
                                IData/*31:0*/ __Vfunc_get_result__62__Vfuncout;
                                __Vfunc_get_result__62__Vfuncout = 0;
                                IData/*31:0*/ __Vfunc_get_show_max__63__Vfuncout;
                                __Vfunc_get_show_max__63__Vfuncout = 0;
                                CData/*1:0*/ __Vtask_uvm_report__64__severity;
                                __Vtask_uvm_report__64__severity = 0;
                                std::string __Vtask_uvm_report__64__id;
                                std::string __Vtask_uvm_report__64__message;
                                IData/*31:0*/ __Vtask_uvm_report__64__verbosity;
                                __Vtask_uvm_report__64__verbosity = 0;
                                std::string __Vtask_uvm_report__64__filename;
                                IData/*31:0*/ __Vtask_uvm_report__64__line;
                                __Vtask_uvm_report__64__line = 0;
                                std::string __Vtask_uvm_report__64__context_name;
                                CData/*0:0*/ __Vtask_uvm_report__64__report_enabled_checked;
                                __Vtask_uvm_report__64__report_enabled_checked = 0;
                                IData/*31:0*/ __Vfunc_get_verbosity__65__Vfuncout;
                                __Vfunc_get_verbosity__65__Vfuncout = 0;
                                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__66__Vfuncout;
                                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__67__Vfuncout;
                                // Body
                                std::string tmp;
                                this->__VnoInFunc_m_current_context(vlSymsp, msg, __Vfunc_m_current_context__60__Vfuncout);
                                tmp = __Vfunc_m_current_context__60__Vfuncout;
                                this->__PVT__result 
                                    = ((IData)(1U) 
                                       + this->__PVT__result);
                                if (((0U == ([&]() {
                                                    this->__VnoInFunc_get_show_max(vlSymsp, __Vfunc_get_show_max__61__Vfuncout);
                                                }(), __Vfunc_get_show_max__61__Vfuncout)) 
                                     | (([&]() {
                                                    this->__VnoInFunc_get_result(vlSymsp, __Vfunc_get_result__62__Vfuncout);
                                                }(), __Vfunc_get_result__62__Vfuncout) 
                                        <= ([&]() {
                                                    this->__VnoInFunc_get_show_max(vlSymsp, __Vfunc_get_show_max__63__Vfuncout);
                                                }(), __Vfunc_get_show_max__63__Vfuncout)))) {
                                    msg = VL_CONCATN_NNN("Miscompare for "s, tmp);
                                    __Vtask_uvm_report__64__report_enabled_checked = 0U;
                                    __Vtask_uvm_report__64__context_name = ""s;
                                    __Vtask_uvm_report__64__line = 0x0000023dU;
                                    __Vtask_uvm_report__64__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_comparer.svh"s;
                                    this->__VnoInFunc_get_verbosity(vlSymsp, __Vfunc_get_verbosity__65__Vfuncout);
                                    __Vtask_uvm_report__64__verbosity 
                                        = __Vfunc_get_verbosity__65__Vfuncout;
                                    __Vtask_uvm_report__64__message 
                                        = msg;
                                    __Vtask_uvm_report__64__id = "MISCMP"s;
                                    __Vtask_uvm_report__64__severity 
                                        = this->__PVT__sev;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__66__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report__Vstatic__cs 
                                        = __Vfunc_get__66__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 108)
                                                                           ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__67__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report__Vstatic__top 
                                        = __Vtask_get_root__67__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 109)
                                                                           ->__VnoInFunc_uvm_report(vlProcess, vlSymsp, __Vtask_uvm_report__64__severity, __Vtask_uvm_report__64__id, __Vtask_uvm_report__64__message, __Vtask_uvm_report__64__verbosity, __Vtask_uvm_report__64__filename, __Vtask_uvm_report__64__line, __Vtask_uvm_report__64__context_name, (IData)(__Vtask_uvm_report__64__report_enabled_checked));
                                }
                                this->__PVT__miscompares 
                                    = VL_CONCATN_NNN(
                                                     VL_CONCATN_NNN(this->__PVT__miscompares, tmp), "\n"s);
                            }

                            void Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_print_msg_object(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> lhs, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> rhs) {
                                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_print_msg_object\n"); );
                                // Locals
                                std::string __Vfunc_m_current_context__69__Vfuncout;
                                IData/*31:0*/ __Vtask_get_inst_id__70__Vfuncout;
                                __Vtask_get_inst_id__70__Vfuncout = 0;
                                IData/*31:0*/ __Vtask_get_inst_id__71__Vfuncout;
                                __Vtask_get_inst_id__71__Vfuncout = 0;
                                IData/*31:0*/ __Vfunc_get_show_max__72__Vfuncout;
                                __Vfunc_get_show_max__72__Vfuncout = 0;
                                IData/*31:0*/ __Vfunc_get_result__73__Vfuncout;
                                __Vfunc_get_result__73__Vfuncout = 0;
                                IData/*31:0*/ __Vfunc_get_show_max__74__Vfuncout;
                                __Vfunc_get_show_max__74__Vfuncout = 0;
                                CData/*1:0*/ __Vtask_uvm_report__75__severity;
                                __Vtask_uvm_report__75__severity = 0;
                                std::string __Vtask_uvm_report__75__id;
                                std::string __Vtask_uvm_report__75__message;
                                IData/*31:0*/ __Vtask_uvm_report__75__verbosity;
                                __Vtask_uvm_report__75__verbosity = 0;
                                std::string __Vtask_uvm_report__75__filename;
                                IData/*31:0*/ __Vtask_uvm_report__75__line;
                                __Vtask_uvm_report__75__line = 0;
                                std::string __Vtask_uvm_report__75__context_name;
                                CData/*0:0*/ __Vtask_uvm_report__75__report_enabled_checked;
                                __Vtask_uvm_report__75__report_enabled_checked = 0;
                                IData/*31:0*/ __Vfunc_get_verbosity__76__Vfuncout;
                                __Vfunc_get_verbosity__76__Vfuncout = 0;
                                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__77__Vfuncout;
                                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__78__Vfuncout;
                                std::string __Vtemp_1;
                                // Body
                                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                                std::string tmp;
                                __Vtemp_1 = ([&]() {
                                        this->__VnoInFunc_m_current_context(vlSymsp, ""s, __Vfunc_m_current_context__69__Vfuncout);
                                    }(), __Vfunc_m_current_context__69__Vfuncout);
                                tmp = VL_SFORMATF_N_NX("%@: lhs = @%0d : rhs = @%0d",0,
                                                       -1,
                                                       &(__Vtemp_1),
                                                       32,
                                                       ((VlNull{} 
                                                         != lhs)
                                                         ? 
                                                        ([&]() {
                                                    VL_NULL_CHECK(lhs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_comparer.svh", 588)
                                                         ->__VnoInFunc_get_inst_id(vlSymsp, __Vtask_get_inst_id__70__Vfuncout);
                                                }(), __Vtask_get_inst_id__70__Vfuncout)
                                                         : 0U),
                                                       32,
                                                       ((VlNull{} 
                                                         != rhs)
                                                         ? 
                                                        ([&]() {
                                                    VL_NULL_CHECK(rhs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_comparer.svh", 589)
                                                         ->__VnoInFunc_get_inst_id(vlSymsp, __Vtask_get_inst_id__71__Vfuncout);
                                                }(), __Vtask_get_inst_id__71__Vfuncout)
                                                         : 0U)) ;
                                this->__PVT__result 
                                    = ((IData)(1U) 
                                       + this->__PVT__result);
                                if (((0U == ([&]() {
                                                    this->__VnoInFunc_get_show_max(vlSymsp, __Vfunc_get_show_max__72__Vfuncout);
                                                }(), __Vfunc_get_show_max__72__Vfuncout)) 
                                     | (([&]() {
                                                    this->__VnoInFunc_get_result(vlSymsp, __Vfunc_get_result__73__Vfuncout);
                                                }(), __Vfunc_get_result__73__Vfuncout) 
                                        <= ([&]() {
                                                    this->__VnoInFunc_get_show_max(vlSymsp, __Vfunc_get_show_max__74__Vfuncout);
                                                }(), __Vfunc_get_show_max__74__Vfuncout)))) {
                                    __Vtask_uvm_report__75__report_enabled_checked = 0U;
                                    __Vtask_uvm_report__75__context_name = ""s;
                                    __Vtask_uvm_report__75__line = 0x00000257U;
                                    __Vtask_uvm_report__75__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_comparer.svh"s;
                                    this->__VnoInFunc_get_verbosity(vlSymsp, __Vfunc_get_verbosity__76__Vfuncout);
                                    __Vtask_uvm_report__75__verbosity 
                                        = __Vfunc_get_verbosity__76__Vfuncout;
                                    __Vtask_uvm_report__75__message 
                                        = VL_CVT_PACK_STR_NN(
                                                             VL_CONCATN_NNN("Miscompare for "s, tmp));
                                    __Vtask_uvm_report__75__id = "MISCMP"s;
                                    __Vtask_uvm_report__75__severity 
                                        = this->__PVT__sev;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__77__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report__Vstatic__cs 
                                        = __Vfunc_get__77__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 108)
                                                                           ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__78__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report__Vstatic__top 
                                        = __Vtask_get_root__78__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 109)
                                                                           ->__VnoInFunc_uvm_report(vlProcess, vlSymsp, __Vtask_uvm_report__75__severity, __Vtask_uvm_report__75__id, __Vtask_uvm_report__75__message, __Vtask_uvm_report__75__verbosity, __Vtask_uvm_report__75__filename, __Vtask_uvm_report__75__line, __Vtask_uvm_report__75__context_name, (IData)(__Vtask_uvm_report__75__report_enabled_checked));
                                }
                                this->__PVT__miscompares 
                                    = VL_CONCATN_NNN(
                                                     VL_CONCATN_NNN(this->__PVT__miscompares, tmp), "\n"s);
                            }

                            void Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_flush(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp) {
                                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_flush\n"); );
                                // Body
                                this->__PVT__miscompares = ""s;
                                this->__PVT__check_type = 1U;
                                this->__PVT__result = 0U;
                                this->__PVT__m_recur_states.clear();
                            }

                            void Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_object_compared(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> lhs, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> rhs, IData/*27:0*/ recursion, CData/*0:0*/ &ret_val, IData/*31:0*/ &object_compared__Vfuncrtn) {
                                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_object_compared\n"); );
                                // Body
                                if (this->__PVT__m_recur_states.exists(lhs)) {
                                    if (this->__PVT__m_recur_states
                                        .at(lhs).exists(rhs)) {
                                        if (this->__PVT__m_recur_states
                                            .at(lhs)
                                            .at(rhs).exists(recursion)) {
                                            if ((2U 
                                                 == this->__PVT__m_recur_states
                                                 .at(lhs)
                                                 .at(rhs)
                                                 .at(recursion)
                                                 .__PVT__state)) {
                                                ret_val 
                                                    = this->__PVT__m_recur_states
                                                    .at(lhs)
                                                    .at(rhs)
                                                    .at(recursion)
                                                    .__PVT__ret_val;
                                            }
                                            object_compared__Vfuncrtn 
                                                = this->__PVT__m_recur_states
                                                .at(lhs)
                                                .at(rhs)
                                                .at(recursion)
                                                .__PVT__state;
                                        } else {
                                            object_compared__Vfuncrtn = 0U;
                                        }
                                    } else {
                                        object_compared__Vfuncrtn = 0U;
                                    }
                                } else {
                                    object_compared__Vfuncrtn = 0U;
                                }
                            }

                            void Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_get_miscompares(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &get_miscompares__Vfuncrtn) {
                                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_get_miscompares\n"); );
                                // Body
                                get_miscompares__Vfuncrtn 
                                    = this->__PVT__miscompares;
                            }

                            void Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_get_result(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &get_result__Vfuncrtn) {
                                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_get_result\n"); );
                                // Body
                                get_result__Vfuncrtn 
                                    = this->__PVT__result;
                            }

                            void Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_set_result(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ result) {
                                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_set_result\n"); );
                                // Body
                                this->__PVT__result 
                                    = result;
                            }

                            void Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_set_recursion_policy(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*27:0*/ policy) {
                                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_set_recursion_policy\n"); );
                                // Body
                                this->__PVT__policy 
                                    = policy;
                            }

                            void Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_get_recursion_policy(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*27:0*/ &get_recursion_policy__Vfuncrtn) {
                                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_get_recursion_policy\n"); );
                                // Body
                                get_recursion_policy__Vfuncrtn 
                                    = this->__PVT__policy;
                            }

                            void Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_set_check_type(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*0:0*/ enabled) {
                                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_set_check_type\n"); );
                                // Body
                                this->__PVT__check_type 
                                    = enabled;
                            }

                            void Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_get_check_type(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*0:0*/ &get_check_type__Vfuncrtn) {
                                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_get_check_type\n"); );
                                // Body
                                get_check_type__Vfuncrtn 
                                    = this->__PVT__check_type;
                            }

                            void Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_set_show_max(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ show_max) {
                                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_set_show_max\n"); );
                                // Body
                                this->__PVT__show_max 
                                    = show_max;
                            }

                            void Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_get_show_max(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &get_show_max__Vfuncrtn) {
                                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_get_show_max\n"); );
                                // Body
                                get_show_max__Vfuncrtn 
                                    = this->__PVT__show_max;
                            }

                            void Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_set_verbosity(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ verbosity) {
                                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_set_verbosity\n"); );
                                // Body
                                this->__PVT__verbosity 
                                    = verbosity;
                            }

                            void Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_get_verbosity(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &get_verbosity__Vfuncrtn) {
                                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_get_verbosity\n"); );
                                // Body
                                get_verbosity__Vfuncrtn 
                                    = this->__PVT__verbosity;
                            }

                            void Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_set_severity(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*1:0*/ severity) {
                                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_set_severity\n"); );
                                // Body
                                this->__PVT__sev = severity;
                            }

                            void Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_get_severity(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*1:0*/ &get_severity__Vfuncrtn) {
                                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_get_severity\n"); );
                                // Body
                                get_severity__Vfuncrtn 
                                    = this->__PVT__sev;
                            }

                            void Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_set_threshold(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ threshold) {
                                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_set_threshold\n"); );
                                // Body
                                this->__PVT__m_threshold 
                                    = threshold;
                            }

                            void Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_get_threshold(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &get_threshold__Vfuncrtn) {
                                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_get_threshold\n"); );
                                // Body
                                get_threshold__Vfuncrtn 
                                    = this->__PVT__m_threshold;
                            }

                            void Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_randomize(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
                                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc_randomize\n"); );
                                // Locals
                                IData/*31:0*/ __Vfunc___VBasicRand__81__Vfuncout;
                                __Vfunc___VBasicRand__81__Vfuncout = 0;
                                // Body
                                Vclass_hierarchy_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
                                this->__VnoInFunc___Vsetup_constraints(vlSymsp);
                                randomize__Vfuncrtn 
                                    = Vclass_hierarchy_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
                                randomize__Vfuncrtn 
                                    = (randomize__Vfuncrtn 
                                       & ([&]() {
                                            this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__81__Vfuncout);
                                        }(), __Vfunc___VBasicRand__81__Vfuncout));
                            }

                            void Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc___Vsetup_constraints(Vclass_hierarchy__Syms* __restrict vlSymsp) {
                                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc___Vsetup_constraints\n"); );
                            }

                            void Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc___VBasicRand(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
                                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::__VnoInFunc___VBasicRand\n"); );
                                // Body
                                __VBasicRand__Vfuncrtn = 1U;
                            }

                            void Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::_ctor_var_reset(Vclass_hierarchy__Syms* __restrict vlSymsp) {
                                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::_ctor_var_reset\n"); );
                                // Body
                                (void)vlSymsp;  // Prevent unused variable warning
                                __PVT__m_recur_states.atDefault().atDefault().atDefault().__PVT__state = 0;
                                __PVT__m_recur_states.atDefault().atDefault().atDefault().__PVT__ret_val = 0;
                                __PVT__policy = 0;
                                __PVT__show_max = 0;
                                __PVT__verbosity = 0;
                                __PVT__sev = 0;
                                __PVT__check_type = 0;
                                __PVT__result = 0;
                                __PVT__m_threshold = 0;
                                __PVT__depth = 0;
                                __PVT__compare_map.atDefault().atDefault() = 0;
                            }

                            Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::~Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer() {
                                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::~\n"); );
                            }

                            std::string VL_TO_STRING(const VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer>& obj) {
                                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::VL_TO_STRING\n"); );
                                // Body
                                return (obj ? obj->to_string() : "null");
                            }

                            std::string Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::to_string() const {
                                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::to_string\n"); );
                                // Body
                                return ("'{"s + to_string_middle() + "}");
                            }

                            std::string Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::to_string_middle() const {
                                VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_comparer::to_string_middle\n"); );
                                // Body
                                std::string out;
                                out += "m_recur_states:" + VL_TO_STRING(__PVT__m_recur_states);
                                out += ", policy:" + VL_TO_STRING(__PVT__policy);
                                out += ", show_max:" + VL_TO_STRING(__PVT__show_max);
                                out += ", verbosity:" + VL_TO_STRING(__PVT__verbosity);
                                out += ", sev:" + VL_TO_STRING(__PVT__sev);
                                out += ", miscompares:" + VL_TO_STRING(__PVT__miscompares);
                                out += ", check_type:" + VL_TO_STRING(__PVT__check_type);
                                out += ", result:" + VL_TO_STRING(__PVT__result);
                                out += ", m_threshold:" + VL_TO_STRING(__PVT__m_threshold);
                                out += ", m_object_names:" + VL_TO_STRING(__PVT__m_object_names);
                                out += ", depth:" + VL_TO_STRING(__PVT__depth);
                                out += ", compare_map:" + VL_TO_STRING(__PVT__compare_map);
                                out += ", "+ Vclass_hierarchy_uvm_pkg__03a__03auvm_policy::to_string_middle();
                                return (out);
                            }
