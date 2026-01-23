// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpools_top.h for the primary calling header

#include "Vpools_top__pch.h"

void Vpools_top_uvm_pkg__03a__03auvm_packer__Vclpkg::__VnoInFunc_get_type(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_registry__pi11> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vpools_top_uvm_pkg__03a__03auvm_packer__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_registry__pi11> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi11__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vpools_top_uvm_pkg__03a__03auvm_packer__Vclpkg::__VnoInFunc_type_name(Vpools_top__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vpools_top_uvm_pkg__03a__03auvm_packer__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_packer"s;
}

void Vpools_top_uvm_pkg__03a__03auvm_packer__Vclpkg::__VnoInFunc_set_default(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vpools_top_uvm_pkg__03a__03auvm_packer__Vclpkg::__VnoInFunc_set_default\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__1__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> coreservice;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__1__Vfuncout);
    coreservice = __Vfunc_get__1__Vfuncout;
    VL_NULL_CHECK(coreservice, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_packer.svh", 123)->__VnoInFunc_set_default_packer(vlSymsp, packer);
}

void Vpools_top_uvm_pkg__03a__03auvm_packer__Vclpkg::__VnoInFunc_get_default(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_packer> &get_default__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vpools_top_uvm_pkg__03a__03auvm_packer__Vclpkg::__VnoInFunc_get_default\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__3__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_packer> __Vtask_get_default_packer__4__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> coreservice;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__3__Vfuncout);
    coreservice = __Vfunc_get__3__Vfuncout;
    VL_NULL_CHECK(coreservice, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_packer.svh", 130)->__VnoInFunc_get_default_packer(vlSymsp, __Vtask_get_default_packer__4__Vfuncout);
    get_default__Vfuncrtn = __Vtask_get_default_packer__4__Vfuncout;
}

void Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_get_object_type(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_registry__pi11> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi11__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_create(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_packer> tmp;
    tmp = ((""s == name) ? VL_NEW(Vpools_top_uvm_pkg__03a__03auvm_packer, vlProcess, vlSymsp, ""s)
            : VL_NEW(Vpools_top_uvm_pkg__03a__03auvm_packer, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_get_type_name(Vpools_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_packer"s;
}

void Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_index_error(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ index, std::string id, IData/*31:0*/ sz) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_index_error\n"); );
    // Locals
    std::string __Vtask_uvm_report_error__3__id;
    std::string __Vtask_uvm_report_error__3__message;
    IData/*31:0*/ __Vtask_uvm_report_error__3__verbosity;
    __Vtask_uvm_report_error__3__verbosity = 0;
    std::string __Vtask_uvm_report_error__3__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__3__line;
    __Vtask_uvm_report_error__3__line = 0;
    std::string __Vtask_uvm_report_error__3__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__3__report_enabled_checked;
    __Vtask_uvm_report_error__3__report_enabled_checked = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__4__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__5__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    __Vtask_uvm_report_error__3__report_enabled_checked = 0U;
    __Vtask_uvm_report_error__3__context_name = ""s;
    __Vtask_uvm_report_error__3__line = 0U;
    __Vtask_uvm_report_error__3__filename = ""s;
    __Vtask_uvm_report_error__3__verbosity = 0U;
    __Vtask_uvm_report_error__3__message = VL_SFORMATF_N_NX("index %0d for get_%0@ too large; valid index range is 0-%0d.",0,
                                                            32,
                                                            index,
                                                            -1,
                                                            &(id),
                                                            32,
                                                            (VL_DIVS_III(32, 
                                                                         ((this->__PVT__m_pack_iter 
                                                                           + sz) 
                                                                          - (IData)(1U)), sz) 
                                                             - (IData)(1U))) ;
    __Vtask_uvm_report_error__3__id = "PCKIDX"s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__4__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__4__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__5__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__5__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__3__id, __Vtask_uvm_report_error__3__message, __Vtask_uvm_report_error__3__verbosity, __Vtask_uvm_report_error__3__filename, __Vtask_uvm_report_error__3__line, __Vtask_uvm_report_error__3__context_name, (IData)(__Vtask_uvm_report_error__3__report_enabled_checked));
}

void Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_enough_bits(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ needed, std::string id, CData/*0:0*/ &enough_bits__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_enough_bits\n"); );
    // Locals
    std::string __Vtask_uvm_report_error__7__id;
    std::string __Vtask_uvm_report_error__7__message;
    IData/*31:0*/ __Vtask_uvm_report_error__7__verbosity;
    __Vtask_uvm_report_error__7__verbosity = 0;
    std::string __Vtask_uvm_report_error__7__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__7__line;
    __Vtask_uvm_report_error__7__line = 0;
    std::string __Vtask_uvm_report_error__7__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__7__report_enabled_checked;
    __Vtask_uvm_report_error__7__report_enabled_checked = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__8__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__9__Vfuncout;
    // Body
    {
        if (VL_LTS_III(32, (this->__PVT__m_pack_iter 
                            - this->__PVT__m_unpack_iter), needed)) {
            __Vtask_uvm_report_error__7__report_enabled_checked = 0U;
            __Vtask_uvm_report_error__7__context_name = ""s;
            __Vtask_uvm_report_error__7__line = 0U;
            __Vtask_uvm_report_error__7__filename = ""s;
            __Vtask_uvm_report_error__7__verbosity = 0U;
            __Vtask_uvm_report_error__7__message = VL_SFORMATF_N_NX("%0d bits needed to unpack %0@, yet only %0d available.",0,
                                                                    32,
                                                                    needed,
                                                                    -1,
                                                                    &(id),
                                                                    32,
                                                                    (this->__PVT__m_pack_iter 
                                                                     - this->__PVT__m_unpack_iter)) ;
            __Vtask_uvm_report_error__7__id = "PCKSZ"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__8__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__8__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__9__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__9__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__7__id, __Vtask_uvm_report_error__7__message, __Vtask_uvm_report_error__7__verbosity, __Vtask_uvm_report_error__7__filename, __Vtask_uvm_report_error__7__line, __Vtask_uvm_report_error__7__context_name, (IData)(__Vtask_uvm_report_error__7__report_enabled_checked));
            enough_bits__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        enough_bits__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_get_packed_size(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_packed_size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_get_packed_size\n"); );
    // Body
    get_packed_size__Vfuncrtn = (this->__PVT__m_pack_iter 
                                 - this->__PVT__m_unpack_iter);
}

extern const VlWide<1024>/*32767:0*/ Vpools_top__ConstPool__CONST_hbc03216d_0;

void Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_flush(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_flush\n"); );
    // Body
    this->__PVT__m_pack_iter = 0x00000040U;
    this->__PVT__m_unpack_iter = 0x00000040U;
    VL_ASSIGN_W(32768, this->__PVT__m_bits, Vpools_top__ConstPool__CONST_hbc03216d_0);
    this->__PVT__m_object_references.clear();
    this->__PVT__m_object_references.at(0U) = VlNull{};
    this->__PVT__m_factory = VlNull{};
    Vpools_top_uvm_pkg__03a__03auvm_policy::__VnoInFunc_flush(vlProcess, vlSymsp);
}

void Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_get_packed_bits(Vpools_top__Syms* __restrict vlSymsp, VlQueue<CData/*0:0*/> &stream) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_get_packed_bits\n"); );
    // Body
    IData/*31:0*/ unnamedblk50__DOT__i;
    unnamedblk50__DOT__i = 0;
    stream.renew(this->__PVT__m_pack_iter);
    this->__PVT__m_bits[0U] = (IData)((((QData)((IData)(this->__PVT__m_unpack_iter)) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(this->__PVT__m_pack_iter))));
    this->__PVT__m_bits[1U] = (IData)(((((QData)((IData)(this->__PVT__m_unpack_iter)) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(this->__PVT__m_pack_iter))) 
                                       >> 0x00000020U));
    unnamedblk50__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk50__DOT__i, this->__PVT__m_pack_iter)) {
        stream.atWrite(unnamedblk50__DOT__i) = (1U 
                                                & (this->__PVT__m_bits[
                                                   (0x000003ffU 
                                                    & (unnamedblk50__DOT__i 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x0000001fU 
                                                    & unnamedblk50__DOT__i)));
        unnamedblk50__DOT__i = ((IData)(1U) + unnamedblk50__DOT__i);
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_get_packed_bytes(Vpools_top__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &stream) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_get_packed_bytes\n"); );
    // Body
    IData/*31:0*/ unnamedblk51__DOT__i;
    unnamedblk51__DOT__i = 0;
    IData/*31:0*/ sz;
    sz = 0;
    CData/*7:0*/ v;
    v = 0;
    sz = VL_DIVS_III(32, ((IData)(7U) + this->__PVT__m_pack_iter), (IData)(8U));
    this->__PVT__m_bits[0U] = (IData)((((QData)((IData)(this->__PVT__m_unpack_iter)) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(this->__PVT__m_pack_iter))));
    this->__PVT__m_bits[1U] = (IData)(((((QData)((IData)(this->__PVT__m_unpack_iter)) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(this->__PVT__m_pack_iter))) 
                                       >> 0x00000020U));
    stream.renew(sz);
    unnamedblk51__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk51__DOT__i, stream.size())) {
        v = (0x000000ffU & (((unnamedblk51__DOT__i 
                              != (sz - (IData)(1U))) 
                             | (0U == VL_MODDIVS_III(32, this->__PVT__m_pack_iter, (IData)(8U))))
                             ? (((0U == (0x0000001fU 
                                         & VL_MULS_III(32, (IData)(8U), unnamedblk51__DOT__i)))
                                  ? 0U : (this->__PVT__m_bits[
                                          (((IData)(7U) 
                                            + (0x00007fffU 
                                               & VL_MULS_III(32, (IData)(8U), unnamedblk51__DOT__i))) 
                                           >> 5U)] 
                                          << ((IData)(0x00000020U) 
                                              - (0x0000001fU 
                                                 & VL_MULS_III(32, (IData)(8U), unnamedblk51__DOT__i))))) 
                                | (this->__PVT__m_bits[
                                   (0x000003ffU & (
                                                   VL_MULS_III(32, (IData)(8U), unnamedblk51__DOT__i) 
                                                   >> 5U))] 
                                   >> (0x0000001fU 
                                       & VL_MULS_III(32, (IData)(8U), unnamedblk51__DOT__i))))
                             : ((((0U == (0x0000001fU 
                                          & VL_MULS_III(32, (IData)(8U), unnamedblk51__DOT__i)))
                                   ? 0U : (this->__PVT__m_bits[
                                           (((IData)(7U) 
                                             + (0x00007fffU 
                                                & VL_MULS_III(32, (IData)(8U), unnamedblk51__DOT__i))) 
                                            >> 5U)] 
                                           << ((IData)(0x00000020U) 
                                               - (0x0000001fU 
                                                  & VL_MULS_III(32, (IData)(8U), unnamedblk51__DOT__i))))) 
                                 | (this->__PVT__m_bits[
                                    (0x000003ffU & 
                                     (VL_MULS_III(32, (IData)(8U), unnamedblk51__DOT__i) 
                                      >> 5U))] >> (0x0000001fU 
                                                   & VL_MULS_III(32, (IData)(8U), unnamedblk51__DOT__i)))) 
                                & VL_SHIFTR_III(8,8,32, 0xffU, 
                                                ((IData)(8U) 
                                                 - 
                                                 VL_MODDIVS_III(32, this->__PVT__m_pack_iter, (IData)(8U)))))));
        stream.atWrite(unnamedblk51__DOT__i) = v;
        unnamedblk51__DOT__i = ((IData)(1U) + unnamedblk51__DOT__i);
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_get_packed_ints(Vpools_top__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> &stream) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_get_packed_ints\n"); );
    // Body
    IData/*31:0*/ unnamedblk52__DOT__i;
    unnamedblk52__DOT__i = 0;
    IData/*31:0*/ sz;
    sz = 0;
    IData/*31:0*/ v;
    v = 0;
    sz = VL_DIVS_III(32, ((IData)(0x0000001fU) + this->__PVT__m_pack_iter), (IData)(0x00000020U));
    this->__PVT__m_bits[0U] = (IData)((((QData)((IData)(this->__PVT__m_unpack_iter)) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(this->__PVT__m_pack_iter))));
    this->__PVT__m_bits[1U] = (IData)(((((QData)((IData)(this->__PVT__m_unpack_iter)) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(this->__PVT__m_pack_iter))) 
                                       >> 0x00000020U));
    stream.renew(sz);
    unnamedblk52__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk52__DOT__i, stream.size())) {
        v = (((unnamedblk52__DOT__i != (sz - (IData)(1U))) 
              | (0U == VL_MODDIVS_III(32, this->__PVT__m_pack_iter, (IData)(0x00000020U))))
              ? (((0U == (0x0000001fU & VL_MULS_III(32, (IData)(0x00000020U), unnamedblk52__DOT__i)))
                   ? 0U : (this->__PVT__m_bits[(((IData)(0x0000001fU) 
                                                 + 
                                                 (0x00007fffU 
                                                  & VL_MULS_III(32, (IData)(0x00000020U), unnamedblk52__DOT__i))) 
                                                >> 5U)] 
                           << ((IData)(0x00000020U) 
                               - (0x0000001fU & VL_MULS_III(32, (IData)(0x00000020U), unnamedblk52__DOT__i))))) 
                 | (this->__PVT__m_bits[(0x000003ffU 
                                         & (VL_MULS_III(32, (IData)(0x00000020U), unnamedblk52__DOT__i) 
                                            >> 5U))] 
                    >> (0x0000001fU & VL_MULS_III(32, (IData)(0x00000020U), unnamedblk52__DOT__i))))
              : ((((0U == (0x0000001fU & VL_MULS_III(32, (IData)(0x00000020U), unnamedblk52__DOT__i)))
                    ? 0U : (this->__PVT__m_bits[(((IData)(0x0000001fU) 
                                                  + 
                                                  (0x00007fffU 
                                                   & VL_MULS_III(32, (IData)(0x00000020U), unnamedblk52__DOT__i))) 
                                                 >> 5U)] 
                            << ((IData)(0x00000020U) 
                                - (0x0000001fU & VL_MULS_III(32, (IData)(0x00000020U), unnamedblk52__DOT__i))))) 
                  | (this->__PVT__m_bits[(0x000003ffU 
                                          & (VL_MULS_III(32, (IData)(0x00000020U), unnamedblk52__DOT__i) 
                                             >> 5U))] 
                     >> (0x0000001fU & VL_MULS_III(32, (IData)(0x00000020U), unnamedblk52__DOT__i)))) 
                 & VL_SHIFTR_III(32,32,32, 0xffffffffU, 
                                 ((IData)(0x00000020U) 
                                  - VL_MODDIVS_III(32, this->__PVT__m_pack_iter, (IData)(0x00000020U))))));
        stream.atWrite(unnamedblk52__DOT__i) = v;
        unnamedblk52__DOT__i = ((IData)(1U) + unnamedblk52__DOT__i);
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_get_packed_longints(Vpools_top__Syms* __restrict vlSymsp, VlQueue<QData/*63:0*/> &stream) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_get_packed_longints\n"); );
    // Body
    IData/*31:0*/ unnamedblk53__DOT__i;
    unnamedblk53__DOT__i = 0;
    IData/*31:0*/ sz;
    sz = 0;
    QData/*63:0*/ v;
    v = 0;
    sz = VL_DIVS_III(32, ((IData)(0x0000003fU) + this->__PVT__m_pack_iter), (IData)(0x00000040U));
    this->__PVT__m_bits[0U] = (IData)((((QData)((IData)(this->__PVT__m_unpack_iter)) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(this->__PVT__m_pack_iter))));
    this->__PVT__m_bits[1U] = (IData)(((((QData)((IData)(this->__PVT__m_unpack_iter)) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(this->__PVT__m_pack_iter))) 
                                       >> 0x00000020U));
    stream.renew(sz);
    unnamedblk53__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk53__DOT__i, stream.size())) {
        v = (((unnamedblk53__DOT__i != (sz - (IData)(1U))) 
              | (0U == VL_MODDIVS_III(32, this->__PVT__m_pack_iter, (IData)(0x00000040U))))
              ? (((QData)((IData)(this->__PVT__m_bits[
                                  (((IData)(0x0000003fU) 
                                    + (0x00007fffU 
                                       & VL_MULS_III(32, (IData)(0x00000040U), unnamedblk53__DOT__i))) 
                                   >> 5U)])) << ((0U 
                                                  == 
                                                  (0x0000001fU 
                                                   & VL_MULS_III(32, (IData)(0x00000040U), unnamedblk53__DOT__i)))
                                                  ? 0x00000020U
                                                  : 
                                                 ((IData)(0x00000040U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & VL_MULS_III(32, (IData)(0x00000040U), unnamedblk53__DOT__i))))) 
                 | (((0U == (0x0000001fU & VL_MULS_III(32, (IData)(0x00000040U), unnamedblk53__DOT__i)))
                      ? 0ULL : ((QData)((IData)(this->__PVT__m_bits[
                                                (((IData)(0x0000001fU) 
                                                  + 
                                                  (0x00007fffU 
                                                   & VL_MULS_III(32, (IData)(0x00000040U), unnamedblk53__DOT__i))) 
                                                 >> 5U)])) 
                                << ((IData)(0x00000020U) 
                                    - (0x0000001fU 
                                       & VL_MULS_III(32, (IData)(0x00000040U), unnamedblk53__DOT__i))))) 
                    | ((QData)((IData)(this->__PVT__m_bits[
                                       (0x000003ffU 
                                        & (VL_MULS_III(32, (IData)(0x00000040U), unnamedblk53__DOT__i) 
                                           >> 5U))])) 
                       >> (0x0000001fU & VL_MULS_III(32, (IData)(0x00000040U), unnamedblk53__DOT__i)))))
              : ((((QData)((IData)(this->__PVT__m_bits[
                                   (((IData)(0x0000003fU) 
                                     + (0x00007fffU 
                                        & VL_MULS_III(32, (IData)(0x00000040U), unnamedblk53__DOT__i))) 
                                    >> 5U)])) << ((0U 
                                                   == 
                                                   (0x0000001fU 
                                                    & VL_MULS_III(32, (IData)(0x00000040U), unnamedblk53__DOT__i)))
                                                   ? 0x00000020U
                                                   : 
                                                  ((IData)(0x00000040U) 
                                                   - 
                                                   (0x0000001fU 
                                                    & VL_MULS_III(32, (IData)(0x00000040U), unnamedblk53__DOT__i))))) 
                  | (((0U == (0x0000001fU & VL_MULS_III(32, (IData)(0x00000040U), unnamedblk53__DOT__i)))
                       ? 0ULL : ((QData)((IData)(this->__PVT__m_bits[
                                                 (((IData)(0x0000001fU) 
                                                   + 
                                                   (0x00007fffU 
                                                    & VL_MULS_III(32, (IData)(0x00000040U), unnamedblk53__DOT__i))) 
                                                  >> 5U)])) 
                                 << ((IData)(0x00000020U) 
                                     - (0x0000001fU 
                                        & VL_MULS_III(32, (IData)(0x00000040U), unnamedblk53__DOT__i))))) 
                     | ((QData)((IData)(this->__PVT__m_bits[
                                        (0x000003ffU 
                                         & (VL_MULS_III(32, (IData)(0x00000040U), unnamedblk53__DOT__i) 
                                            >> 5U))])) 
                        >> (0x0000001fU & VL_MULS_III(32, (IData)(0x00000040U), unnamedblk53__DOT__i))))) 
                 & VL_SHIFTR_QQI(64,64,32, 0xffffffffffffffffULL, 
                                 ((IData)(0x00000040U) 
                                  - VL_MODDIVS_III(32, this->__PVT__m_pack_iter, (IData)(0x00000040U))))));
        stream.atWrite(unnamedblk53__DOT__i) = v;
        unnamedblk53__DOT__i = ((IData)(1U) + unnamedblk53__DOT__i);
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_set_packed_bits(Vpools_top__Syms* __restrict vlSymsp, VlQueue<CData/*0:0*/> &stream) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_set_packed_bits\n"); );
    // Body
    IData/*31:0*/ unnamedblk54__DOT__i;
    unnamedblk54__DOT__i = 0;
    IData/*31:0*/ bit_size;
    bit_size = 0;
    bit_size = stream.size();
    unnamedblk54__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk54__DOT__i, bit_size)) {
        this->__PVT__m_bits[(0x000003ffU & (unnamedblk54__DOT__i 
                                            >> 5U))] 
            = (((~ ((IData)(1U) << (0x0000001fU & unnamedblk54__DOT__i))) 
                & this->__PVT__m_bits[(0x000003ffU 
                                       & (unnamedblk54__DOT__i 
                                          >> 5U))]) 
               | (stream.at(unnamedblk54__DOT__i) << 
                  (0x0000001fU & unnamedblk54__DOT__i)));
        unnamedblk54__DOT__i = ((IData)(1U) + unnamedblk54__DOT__i);
    }
    this->__PVT__m_pack_iter = this->__PVT__m_bits[0U];
    this->__PVT__m_unpack_iter = this->__PVT__m_bits[1U];
}

void Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_set_packed_bytes(Vpools_top__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &stream) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_set_packed_bytes\n"); );
    // Body
    IData/*31:0*/ unnamedblk55__DOT__i;
    unnamedblk55__DOT__i = 0;
    IData/*31:0*/ count;
    count = 0;
    unnamedblk55__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk55__DOT__i, stream.size())) {
        VL_ASSIGNSEL_WI(32768, 8, (0x00007fffU & count), this->__PVT__m_bits, stream.at(unnamedblk55__DOT__i));
        count = ((IData)(8U) + count);
        unnamedblk55__DOT__i = ((IData)(1U) + unnamedblk55__DOT__i);
    }
    this->__PVT__m_pack_iter = this->__PVT__m_bits[0U];
    this->__PVT__m_unpack_iter = this->__PVT__m_bits[1U];
}

void Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_set_packed_ints(Vpools_top__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> &stream) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_set_packed_ints\n"); );
    // Body
    IData/*31:0*/ unnamedblk56__DOT__i;
    unnamedblk56__DOT__i = 0;
    IData/*31:0*/ count;
    count = 0;
    unnamedblk56__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk56__DOT__i, stream.size())) {
        VL_ASSIGNSEL_WI(32768, 32, (0x00007fffU & count), this->__PVT__m_bits, stream.at(unnamedblk56__DOT__i));
        count = ((IData)(0x00000020U) + count);
        unnamedblk56__DOT__i = ((IData)(1U) + unnamedblk56__DOT__i);
    }
    this->__PVT__m_pack_iter = this->__PVT__m_bits[0U];
    this->__PVT__m_unpack_iter = this->__PVT__m_bits[1U];
}

void Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_set_packed_longints(Vpools_top__Syms* __restrict vlSymsp, VlQueue<QData/*63:0*/> &stream) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_set_packed_longints\n"); );
    // Body
    IData/*31:0*/ unnamedblk57__DOT__i;
    unnamedblk57__DOT__i = 0;
    IData/*31:0*/ count;
    count = 0;
    unnamedblk57__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk57__DOT__i, stream.size())) {
        VL_ASSIGNSEL_WQ(32768, 64, (0x00007fffU & count), this->__PVT__m_bits, stream.at(unnamedblk57__DOT__i));
        count = ((IData)(0x00000040U) + count);
        unnamedblk57__DOT__i = ((IData)(1U) + unnamedblk57__DOT__i);
    }
    this->__PVT__m_pack_iter = this->__PVT__m_bits[0U];
    this->__PVT__m_unpack_iter = this->__PVT__m_bits[1U];
}

void Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_pack_object(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_pack_object\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_field_op> __Vfunc_m_get_available_op__13__Vfuncout;
    CData/*0:0*/ __Vtask_user_hook_enabled__16__Vfuncout;
    __Vtask_user_hook_enabled__16__Vfuncout = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> __Vtask_pop_active_object__19__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_field_op> field_op;
    {
        if ((VlNull{} == value)) {
            VL_ASSIGNSEL_WI(32768, 4, (0x00007fffU 
                                       & this->__PVT__m_pack_iter), this->__PVT__m_bits, 0U);
            this->__PVT__m_pack_iter = ((IData)(4U) 
                                        + this->__PVT__m_pack_iter);
            goto __Vlabel0;
        } else {
            VL_ASSIGNSEL_WI(32768, 4, (0x00007fffU 
                                       & this->__PVT__m_pack_iter), this->__PVT__m_bits, 0x0fU);
            this->__PVT__m_pack_iter = ((IData)(4U) 
                                        + this->__PVT__m_pack_iter);
        }
        this->__VnoInFunc_push_active_object(vlProcess, vlSymsp, value);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_field_op__Vclpkg.__VnoInFunc_m_get_available_op(vlProcess, vlSymsp, __Vfunc_m_get_available_op__13__Vfuncout);
        field_op = __Vfunc_m_get_available_op__13__Vfuncout;
        VL_NULL_CHECK(field_op, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_packer.svh", 688)->__VnoInFunc_set(vlProcess, vlSymsp, 0x00000100U, 
                                                                                VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_packer>{this}, value);
        VL_NULL_CHECK(value, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_packer.svh", 689)->__VnoInFunc_do_execute_op(vlProcess, vlSymsp, field_op);
        if (([&]() {
                    VL_NULL_CHECK(field_op, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_packer.svh", 690)
             ->__VnoInFunc_user_hook_enabled(vlProcess, vlSymsp, __Vtask_user_hook_enabled__16__Vfuncout);
                }(), (IData)(__Vtask_user_hook_enabled__16__Vfuncout))) {
            VL_NULL_CHECK(value, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_packer.svh", 691)->__VnoInFunc_do_pack(vlSymsp, 
                                                                                VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_packer>{this});
        }
        VL_NULL_CHECK(field_op, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_packer.svh", 693)->__VnoInFunc_m_recycle(vlSymsp);
        this->__VnoInFunc_pop_active_object(vlProcess, vlSymsp, __Vtask_pop_active_object__19__Vfuncout);
        __Vlabel0: ;
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_pack_object_with_meta(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_pack_object_with_meta\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_wrapper> __Vtask_get_object_type__23__Vfuncout;
    // Body
    IData/*31:0*/ unnamedblk58__DOT__i;
    unnamedblk58__DOT__i = 0;
    CData/*0:0*/ unnamedblk58__DOT__i__Vfirst;
    unnamedblk58__DOT__i__Vfirst = 0;
    IData/*31:0*/ reference_id;
    reference_id = 0;
    {
        if ((0U != this->__PVT__m_object_references.first(unnamedblk58__DOT__i))) {
            unnamedblk58__DOT__i__Vfirst = 1U;
            while (((IData)(unnamedblk58__DOT__i__Vfirst) 
                    || (0U != this->__PVT__m_object_references.next(unnamedblk58__DOT__i)))) {
                unnamedblk58__DOT__i__Vfirst = 0U;
                if ((this->__PVT__m_object_references
                     .at(unnamedblk58__DOT__i) == value)) {
                    this->__VnoInFunc_pack_field_int(vlSymsp, 
                                                     VL_EXTENDS_QI(64,32, unnamedblk58__DOT__i), 0x00000020U);
                    goto __Vlabel0;
                }
            }
        }
        reference_id = this->__PVT__m_object_references.size();
        this->__VnoInFunc_pack_field_int(vlSymsp, VL_EXTENDS_QI(64,32, reference_id), 0x00000020U);
        this->__PVT__m_object_references.at(reference_id) 
            = value;
        this->__VnoInFunc_pack_object_wrapper(vlSymsp, 
                                              ([&]() {
                    VL_NULL_CHECK(value, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_packer.svh", 728)
                                               ->__VnoInFunc_get_object_type(vlSymsp, __Vtask_get_object_type__23__Vfuncout);
                }(), __Vtask_get_object_type__23__Vfuncout));
        this->__VnoInFunc_pack_object(vlSymsp, value);
        __Vlabel0: ;
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_pack_object_wrapper(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_wrapper> value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_pack_object_wrapper\n"); );
    // Locals
    std::string __Vtask_get_type_name__26__Vfuncout;
    // Body
    std::string type_name;
    if ((VlNull{} != value)) {
        this->__VnoInFunc_pack_string(vlSymsp, VL_CVT_PACK_STR_NN(
                                                                  ([&]() {
                        VL_NULL_CHECK(value, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_packer.svh", 737)
                                                                   ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__26__Vfuncout);
                    }(), __Vtask_get_type_name__26__Vfuncout)));
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_pack_real(Vpools_top__Syms* __restrict vlSymsp, double value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_pack_real\n"); );
    // Body
    this->__VnoInFunc_pack_field_int(vlSymsp, VL_CVT_Q_D(value), 0x00000040U);
}

void Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_pack_time(Vpools_top__Syms* __restrict vlSymsp, QData/*63:0*/ value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_pack_time\n"); );
    // Body
    this->__VnoInFunc_pack_field_int(vlSymsp, value, 0x00000040U);
}

void Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_pack_field(Vpools_top__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_pack_field\n"); );
    // Body
    IData/*31:0*/ unnamedblk59__DOT__i;
    unnamedblk59__DOT__i = 0;
    unnamedblk59__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk59__DOT__i, size)) {
        this->__PVT__m_bits[(0x000003ffU & ((this->__PVT__m_pack_iter 
                                             + unnamedblk59__DOT__i) 
                                            >> 5U))] 
            = (((~ ((IData)(1U) << (0x0000001fU & (this->__PVT__m_pack_iter 
                                                   + unnamedblk59__DOT__i)))) 
                & this->__PVT__m_bits[(0x000003ffU 
                                       & ((this->__PVT__m_pack_iter 
                                           + unnamedblk59__DOT__i) 
                                          >> 5U))]) 
               | ((1U & (value[(0x0000007fU & (unnamedblk59__DOT__i 
                                               >> 5U))] 
                         >> (0x0000001fU & unnamedblk59__DOT__i))) 
                  << (0x0000001fU & (this->__PVT__m_pack_iter 
                                     + unnamedblk59__DOT__i))));
        unnamedblk59__DOT__i = ((IData)(1U) + unnamedblk59__DOT__i);
    }
    this->__PVT__m_pack_iter = (this->__PVT__m_pack_iter 
                                + size);
}

void Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_pack_field_int(Vpools_top__Syms* __restrict vlSymsp, QData/*63:0*/ value, IData/*31:0*/ size) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_pack_field_int\n"); );
    // Body
    IData/*31:0*/ unnamedblk60__DOT__i;
    unnamedblk60__DOT__i = 0;
    unnamedblk60__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk60__DOT__i, size)) {
        this->__PVT__m_bits[(0x000003ffU & ((this->__PVT__m_pack_iter 
                                             + unnamedblk60__DOT__i) 
                                            >> 5U))] 
            = (((~ ((IData)(1U) << (0x0000001fU & (this->__PVT__m_pack_iter 
                                                   + unnamedblk60__DOT__i)))) 
                & this->__PVT__m_bits[(0x000003ffU 
                                       & ((this->__PVT__m_pack_iter 
                                           + unnamedblk60__DOT__i) 
                                          >> 5U))]) 
               | ((1U & (IData)((value >> (0x0000003fU 
                                           & unnamedblk60__DOT__i)))) 
                  << (0x0000001fU & (this->__PVT__m_pack_iter 
                                     + unnamedblk60__DOT__i))));
        unnamedblk60__DOT__i = ((IData)(1U) + unnamedblk60__DOT__i);
    }
    this->__PVT__m_pack_iter = (this->__PVT__m_pack_iter 
                                + size);
}

void Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_pack_bits(Vpools_top__Syms* __restrict vlSymsp, VlQueue<CData/*0:0*/> &value, IData/*31:0*/ size) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_pack_bits\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__29__Vfuncout;
    __Vfunc_uvm_report_enabled__29__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__29__verbosity;
    __Vfunc_uvm_report_enabled__29__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__29__severity;
    __Vfunc_uvm_report_enabled__29__severity = 0;
    std::string __Vfunc_uvm_report_enabled__29__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__30__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__31__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__32__Vfuncout;
    __Vtask_uvm_report_enabled__32__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__33__id;
    std::string __Vtask_uvm_report_error__33__message;
    IData/*31:0*/ __Vtask_uvm_report_error__33__verbosity;
    __Vtask_uvm_report_error__33__verbosity = 0;
    std::string __Vtask_uvm_report_error__33__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__33__line;
    __Vtask_uvm_report_error__33__line = 0;
    std::string __Vtask_uvm_report_error__33__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__33__report_enabled_checked;
    __Vtask_uvm_report_error__33__report_enabled_checked = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__34__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__35__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ unnamedblk61__DOT__i;
    unnamedblk61__DOT__i = 0;
    {
        if (VL_GTS_III(32, 0U, size)) {
            size = value.size();
        }
        if (VL_GTS_III(32, size, value.size())) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__29__id = "UVM/BASE/PACKER/BAD_SIZE"s;
                            __Vfunc_uvm_report_enabled__29__severity = 2U;
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
                __Vtask_uvm_report_error__33__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__33__context_name = ""s;
                __Vtask_uvm_report_error__33__line = 0x0000031dU;
                __Vtask_uvm_report_error__33__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_packer.svh"s;
                __Vtask_uvm_report_error__33__verbosity = 0U;
                __Vtask_uvm_report_error__33__message 
                    = VL_SFORMATF_N_NX("pack_bits called with size '%0d', which exceeds value.size() of '%0d'",0,
                                       32,size,32,value.size()) ;
                __Vtask_uvm_report_error__33__id = "UVM/BASE/PACKER/BAD_SIZE"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__34__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__34__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__35__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__35__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__33__id, __Vtask_uvm_report_error__33__message, __Vtask_uvm_report_error__33__verbosity, __Vtask_uvm_report_error__33__filename, __Vtask_uvm_report_error__33__line, __Vtask_uvm_report_error__33__context_name, (IData)(__Vtask_uvm_report_error__33__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        unnamedblk61__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk61__DOT__i, size)) {
            this->__PVT__m_bits[(0x000003ffU & ((this->__PVT__m_pack_iter 
                                                 + unnamedblk61__DOT__i) 
                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & (this->__PVT__m_pack_iter 
                                           + unnamedblk61__DOT__i)))) 
                    & this->__PVT__m_bits[(0x000003ffU 
                                           & ((this->__PVT__m_pack_iter 
                                               + unnamedblk61__DOT__i) 
                                              >> 5U))]) 
                   | (value.at(unnamedblk61__DOT__i) 
                      << (0x0000001fU & (this->__PVT__m_pack_iter 
                                         + unnamedblk61__DOT__i))));
            unnamedblk61__DOT__i = ((IData)(1U) + unnamedblk61__DOT__i);
        }
        this->__PVT__m_pack_iter = (this->__PVT__m_pack_iter 
                                    + size);
        __Vlabel0: ;
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_pack_bytes(Vpools_top__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &value, IData/*31:0*/ size) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_pack_bytes\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__37__Vfuncout;
    __Vfunc_uvm_report_enabled__37__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__37__verbosity;
    __Vfunc_uvm_report_enabled__37__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__37__severity;
    __Vfunc_uvm_report_enabled__37__severity = 0;
    std::string __Vfunc_uvm_report_enabled__37__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__38__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__39__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__40__Vfuncout;
    __Vtask_uvm_report_enabled__40__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__41__id;
    std::string __Vtask_uvm_report_error__41__message;
    IData/*31:0*/ __Vtask_uvm_report_error__41__verbosity;
    __Vtask_uvm_report_error__41__verbosity = 0;
    std::string __Vtask_uvm_report_error__41__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__41__line;
    __Vtask_uvm_report_error__41__line = 0;
    std::string __Vtask_uvm_report_error__41__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__41__report_enabled_checked;
    __Vtask_uvm_report_error__41__report_enabled_checked = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__42__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__43__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ unnamedblk62__DOT__idx_select;
    unnamedblk62__DOT__idx_select = 0;
    IData/*31:0*/ unnamedblk62__DOT__unnamedblk63__DOT__i;
    unnamedblk62__DOT__unnamedblk63__DOT__i = 0;
    IData/*31:0*/ max_size;
    max_size = 0;
    max_size = VL_MULS_III(32, (IData)(8U), value.size());
    if (VL_GTS_III(32, 0U, size)) {
        size = max_size;
    }
    if (VL_GTS_III(32, size, max_size)) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__37__id = "UVM/BASE/PACKER/BAD_SIZE"s;
                        __Vfunc_uvm_report_enabled__37__severity = 2U;
                        __Vfunc_uvm_report_enabled__37__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__38__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__38__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__39__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__39__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__37__verbosity, (IData)(__Vfunc_uvm_report_enabled__37__severity), __Vfunc_uvm_report_enabled__37__id, __Vtask_uvm_report_enabled__40__Vfuncout);
                        __Vfunc_uvm_report_enabled__37__Vfuncout 
                            = __Vtask_uvm_report_enabled__40__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__37__Vfuncout))) {
            __Vtask_uvm_report_error__41__report_enabled_checked = 1U;
            __Vtask_uvm_report_error__41__context_name = ""s;
            __Vtask_uvm_report_error__41__line = 0x00000338U;
            __Vtask_uvm_report_error__41__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_packer.svh"s;
            __Vtask_uvm_report_error__41__verbosity = 0U;
            __Vtask_uvm_report_error__41__message = VL_SFORMATF_N_NX("pack_bytes called with size '%0d', which exceeds value size of '%0d'",0,
                                                                     32,
                                                                     size,
                                                                     32,
                                                                     max_size) ;
            __Vtask_uvm_report_error__41__id = "UVM/BASE/PACKER/BAD_SIZE"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__42__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__42__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__43__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__43__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__41__id, __Vtask_uvm_report_error__41__message, __Vtask_uvm_report_error__41__verbosity, __Vtask_uvm_report_error__41__filename, __Vtask_uvm_report_error__41__line, __Vtask_uvm_report_error__41__context_name, (IData)(__Vtask_uvm_report_error__41__report_enabled_checked));
        }
    } else {
        unnamedblk62__DOT__unnamedblk63__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk62__DOT__unnamedblk63__DOT__i, size)) {
            unnamedblk62__DOT__idx_select = unnamedblk62__DOT__unnamedblk63__DOT__i;
            this->__PVT__m_bits[(0x000003ffU & ((this->__PVT__m_pack_iter 
                                                 + unnamedblk62__DOT__unnamedblk63__DOT__i) 
                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & (this->__PVT__m_pack_iter 
                                           + unnamedblk62__DOT__unnamedblk63__DOT__i)))) 
                    & this->__PVT__m_bits[(0x000003ffU 
                                           & ((this->__PVT__m_pack_iter 
                                               + unnamedblk62__DOT__unnamedblk63__DOT__i) 
                                              >> 5U))]) 
                   | ((1U & (value.at(VL_SHIFTR_III(32,32,32, unnamedblk62__DOT__idx_select, 3U)) 
                             >> (7U & VL_MODDIVS_III(32, unnamedblk62__DOT__idx_select, (IData)(8U))))) 
                      << (0x0000001fU & (this->__PVT__m_pack_iter 
                                         + unnamedblk62__DOT__unnamedblk63__DOT__i))));
            unnamedblk62__DOT__unnamedblk63__DOT__i 
                = ((IData)(1U) + unnamedblk62__DOT__unnamedblk63__DOT__i);
        }
        this->__PVT__m_pack_iter = (this->__PVT__m_pack_iter 
                                    + size);
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_pack_ints(Vpools_top__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> &value, IData/*31:0*/ size) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_pack_ints\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__45__Vfuncout;
    __Vfunc_uvm_report_enabled__45__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__45__verbosity;
    __Vfunc_uvm_report_enabled__45__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__45__severity;
    __Vfunc_uvm_report_enabled__45__severity = 0;
    std::string __Vfunc_uvm_report_enabled__45__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__46__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__47__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__48__Vfuncout;
    __Vtask_uvm_report_enabled__48__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__49__id;
    std::string __Vtask_uvm_report_error__49__message;
    IData/*31:0*/ __Vtask_uvm_report_error__49__verbosity;
    __Vtask_uvm_report_error__49__verbosity = 0;
    std::string __Vtask_uvm_report_error__49__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__49__line;
    __Vtask_uvm_report_error__49__line = 0;
    std::string __Vtask_uvm_report_error__49__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__49__report_enabled_checked;
    __Vtask_uvm_report_error__49__report_enabled_checked = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__50__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__51__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ unnamedblk64__DOT__idx_select;
    unnamedblk64__DOT__idx_select = 0;
    IData/*31:0*/ unnamedblk64__DOT__unnamedblk65__DOT__i;
    unnamedblk64__DOT__unnamedblk65__DOT__i = 0;
    IData/*31:0*/ max_size;
    max_size = 0;
    max_size = VL_MULS_III(32, (IData)(0x00000020U), value.size());
    if (VL_GTS_III(32, 0U, size)) {
        size = max_size;
    }
    if (VL_GTS_III(32, size, max_size)) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__45__id = "UVM/BASE/PACKER/BAD_SIZE"s;
                        __Vfunc_uvm_report_enabled__45__severity = 2U;
                        __Vfunc_uvm_report_enabled__45__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__46__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__46__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__47__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__47__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__45__verbosity, (IData)(__Vfunc_uvm_report_enabled__45__severity), __Vfunc_uvm_report_enabled__45__id, __Vtask_uvm_report_enabled__48__Vfuncout);
                        __Vfunc_uvm_report_enabled__45__Vfuncout 
                            = __Vtask_uvm_report_enabled__48__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__45__Vfuncout))) {
            __Vtask_uvm_report_error__49__report_enabled_checked = 1U;
            __Vtask_uvm_report_error__49__context_name = ""s;
            __Vtask_uvm_report_error__49__line = 0x0000035aU;
            __Vtask_uvm_report_error__49__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_packer.svh"s;
            __Vtask_uvm_report_error__49__verbosity = 0U;
            __Vtask_uvm_report_error__49__message = VL_SFORMATF_N_NX("pack_ints called with size '%0d', which exceeds value size of '%0d'",0,
                                                                     32,
                                                                     size,
                                                                     32,
                                                                     max_size) ;
            __Vtask_uvm_report_error__49__id = "UVM/BASE/PACKER/BAD_SIZE"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__50__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__50__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__51__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__51__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__49__id, __Vtask_uvm_report_error__49__message, __Vtask_uvm_report_error__49__verbosity, __Vtask_uvm_report_error__49__filename, __Vtask_uvm_report_error__49__line, __Vtask_uvm_report_error__49__context_name, (IData)(__Vtask_uvm_report_error__49__report_enabled_checked));
        }
    } else {
        unnamedblk64__DOT__unnamedblk65__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk64__DOT__unnamedblk65__DOT__i, size)) {
            unnamedblk64__DOT__idx_select = unnamedblk64__DOT__unnamedblk65__DOT__i;
            this->__PVT__m_bits[(0x000003ffU & ((this->__PVT__m_pack_iter 
                                                 + unnamedblk64__DOT__unnamedblk65__DOT__i) 
                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & (this->__PVT__m_pack_iter 
                                           + unnamedblk64__DOT__unnamedblk65__DOT__i)))) 
                    & this->__PVT__m_bits[(0x000003ffU 
                                           & ((this->__PVT__m_pack_iter 
                                               + unnamedblk64__DOT__unnamedblk65__DOT__i) 
                                              >> 5U))]) 
                   | ((1U & (value.at(VL_SHIFTR_III(32,32,32, unnamedblk64__DOT__idx_select, 5U)) 
                             >> (0x0000001fU & VL_MODDIVS_III(32, unnamedblk64__DOT__idx_select, (IData)(0x00000020U))))) 
                      << (0x0000001fU & (this->__PVT__m_pack_iter 
                                         + unnamedblk64__DOT__unnamedblk65__DOT__i))));
            unnamedblk64__DOT__unnamedblk65__DOT__i 
                = ((IData)(1U) + unnamedblk64__DOT__unnamedblk65__DOT__i);
        }
        this->__PVT__m_pack_iter = (this->__PVT__m_pack_iter 
                                    + size);
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_pack_string(Vpools_top__Syms* __restrict vlSymsp, std::string value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_pack_string\n"); );
    // Body
    IData/*31:0*/ unnamedblk66__DOT__index;
    unnamedblk66__DOT__index = 0;
    CData/*7:0*/ b;
    b = 0;
    unnamedblk66__DOT__index = 0U;
    while (VL_LTS_III(32, unnamedblk66__DOT__index, 
                      VL_LEN_IN(value))) {
        VL_ASSIGNSEL_WI(32768, 8, (0x00007fffU & this->__PVT__m_pack_iter), this->__PVT__m_bits, 
                        VL_GETC_N(value,unnamedblk66__DOT__index));
        this->__PVT__m_pack_iter = ((IData)(8U) + this->__PVT__m_pack_iter);
        unnamedblk66__DOT__index = ((IData)(1U) + unnamedblk66__DOT__index);
    }
    VL_ASSIGNSEL_WI(32768, 8, (0x00007fffU & this->__PVT__m_pack_iter), this->__PVT__m_bits, 0U);
    this->__PVT__m_pack_iter = ((IData)(8U) + this->__PVT__m_pack_iter);
}

void Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_is_null(Vpools_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_null__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_is_null\n"); );
    // Body
    is_null__Vfuncrtn = (0U == (0x0000000fU & (((0U 
                                                 == 
                                                 (0x0000001fU 
                                                  & this->__PVT__m_unpack_iter))
                                                 ? 0U
                                                 : 
                                                (this->__PVT__m_bits[
                                                 (((IData)(3U) 
                                                   + 
                                                   (0x00007fffU 
                                                    & this->__PVT__m_unpack_iter)) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & this->__PVT__m_unpack_iter)))) 
                                               | (this->__PVT__m_bits[
                                                  (0x000003ffU 
                                                   & (this->__PVT__m_unpack_iter 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x0000001fU 
                                                   & this->__PVT__m_unpack_iter)))));
}

void Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_is_object_wrapper(Vpools_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_object_wrapper__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_is_object_wrapper\n"); );
    // Body
    is_object_wrapper__Vfuncrtn = (1U == (0x0000000fU 
                                          & (((0U == 
                                               (0x0000001fU 
                                                & this->__PVT__m_unpack_iter))
                                               ? 0U
                                               : (this->__PVT__m_bits[
                                                  (((IData)(3U) 
                                                    + 
                                                    (0x00007fffU 
                                                     & this->__PVT__m_unpack_iter)) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x00000020U) 
                                                   - 
                                                   (0x0000001fU 
                                                    & this->__PVT__m_unpack_iter)))) 
                                             | (this->__PVT__m_bits[
                                                (0x000003ffU 
                                                 & (this->__PVT__m_unpack_iter 
                                                    >> 5U))] 
                                                >> 
                                                (0x0000001fU 
                                                 & this->__PVT__m_unpack_iter)))));
}

void Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_object(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_object\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_is_null__53__Vfuncout;
    __Vfunc_is_null__53__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__54__Vfuncout;
    __Vfunc_uvm_report_enabled__54__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__54__verbosity;
    __Vfunc_uvm_report_enabled__54__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__54__severity;
    __Vfunc_uvm_report_enabled__54__severity = 0;
    std::string __Vfunc_uvm_report_enabled__54__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__55__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__56__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__57__Vfuncout;
    __Vtask_uvm_report_enabled__57__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__58__id;
    std::string __Vtask_uvm_report_error__58__message;
    IData/*31:0*/ __Vtask_uvm_report_error__58__verbosity;
    __Vtask_uvm_report_error__58__verbosity = 0;
    std::string __Vtask_uvm_report_error__58__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__58__line;
    __Vtask_uvm_report_error__58__line = 0;
    std::string __Vtask_uvm_report_error__58__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__58__report_enabled_checked;
    __Vtask_uvm_report_error__58__report_enabled_checked = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__59__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__60__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__62__Vfuncout;
    __Vfunc_uvm_report_enabled__62__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__62__verbosity;
    __Vfunc_uvm_report_enabled__62__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__62__severity;
    __Vfunc_uvm_report_enabled__62__severity = 0;
    std::string __Vfunc_uvm_report_enabled__62__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__63__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__64__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__65__Vfuncout;
    __Vtask_uvm_report_enabled__65__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__66__id;
    std::string __Vtask_uvm_report_error__66__message;
    IData/*31:0*/ __Vtask_uvm_report_error__66__verbosity;
    __Vtask_uvm_report_error__66__verbosity = 0;
    std::string __Vtask_uvm_report_error__66__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__66__line;
    __Vtask_uvm_report_error__66__line = 0;
    std::string __Vtask_uvm_report_error__66__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__66__report_enabled_checked;
    __Vtask_uvm_report_error__66__report_enabled_checked = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__67__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__68__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_field_op> __Vfunc_m_get_available_op__71__Vfuncout;
    CData/*0:0*/ __Vtask_user_hook_enabled__74__Vfuncout;
    __Vtask_user_hook_enabled__74__Vfuncout = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> __Vtask_pop_active_object__77__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_field_op> field_op;
    {
        if (([&]() {
                    this->__VnoInFunc_is_null(vlSymsp, __Vfunc_is_null__53__Vfuncout);
                }(), (IData)(__Vfunc_is_null__53__Vfuncout))) {
            if ((VlNull{} != value)) {
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__54__id = "UVM/BASE/PACKER/UNPACK/N2NN"s;
                                __Vfunc_uvm_report_enabled__54__severity = 2U;
                                __Vfunc_uvm_report_enabled__54__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__55__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__55__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__56__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__56__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__54__verbosity, (IData)(__Vfunc_uvm_report_enabled__54__severity), __Vfunc_uvm_report_enabled__54__id, __Vtask_uvm_report_enabled__57__Vfuncout);
                                __Vfunc_uvm_report_enabled__54__Vfuncout 
                                    = __Vtask_uvm_report_enabled__57__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__54__Vfuncout))) {
                    __Vtask_uvm_report_error__58__report_enabled_checked = 1U;
                    __Vtask_uvm_report_error__58__context_name = ""s;
                    __Vtask_uvm_report_error__58__line = 0x000003a1U;
                    __Vtask_uvm_report_error__58__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_packer.svh"s;
                    __Vtask_uvm_report_error__58__verbosity = 0U;
                    __Vtask_uvm_report_error__58__message = "attempt to unpack a null object into a not-null object!"s;
                    __Vtask_uvm_report_error__58__id = "UVM/BASE/PACKER/UNPACK/N2NN"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__59__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__59__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__60__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__60__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__58__id, __Vtask_uvm_report_error__58__message, __Vtask_uvm_report_error__58__verbosity, __Vtask_uvm_report_error__58__filename, __Vtask_uvm_report_error__58__line, __Vtask_uvm_report_error__58__context_name, (IData)(__Vtask_uvm_report_error__58__report_enabled_checked));
                }
                goto __Vlabel0;
            }
            this->__PVT__m_unpack_iter = ((IData)(4U) 
                                          + this->__PVT__m_unpack_iter);
        } else {
            if ((VlNull{} == value)) {
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__62__id = "UVM/BASE/PACKER/UNPACK/NN2N"s;
                                __Vfunc_uvm_report_enabled__62__severity = 2U;
                                __Vfunc_uvm_report_enabled__62__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__63__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__63__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__64__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__64__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__62__verbosity, (IData)(__Vfunc_uvm_report_enabled__62__severity), __Vfunc_uvm_report_enabled__62__id, __Vtask_uvm_report_enabled__65__Vfuncout);
                                __Vfunc_uvm_report_enabled__62__Vfuncout 
                                    = __Vtask_uvm_report_enabled__65__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__62__Vfuncout))) {
                    __Vtask_uvm_report_error__66__report_enabled_checked = 1U;
                    __Vtask_uvm_report_error__66__context_name = ""s;
                    __Vtask_uvm_report_error__66__line = 0x000003a9U;
                    __Vtask_uvm_report_error__66__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_packer.svh"s;
                    __Vtask_uvm_report_error__66__verbosity = 0U;
                    __Vtask_uvm_report_error__66__message = "attempt to unpack a non-null object into a null object!"s;
                    __Vtask_uvm_report_error__66__id = "UVM/BASE/PACKER/UNPACK/NN2N"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__67__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__67__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__68__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__68__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__66__id, __Vtask_uvm_report_error__66__message, __Vtask_uvm_report_error__66__verbosity, __Vtask_uvm_report_error__66__filename, __Vtask_uvm_report_error__66__line, __Vtask_uvm_report_error__66__context_name, (IData)(__Vtask_uvm_report_error__66__report_enabled_checked));
                }
                goto __Vlabel0;
            }
            this->__PVT__m_unpack_iter = ((IData)(4U) 
                                          + this->__PVT__m_unpack_iter);
            this->__VnoInFunc_push_active_object(vlProcess, vlSymsp, value);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_field_op__Vclpkg.__VnoInFunc_m_get_available_op(vlProcess, vlSymsp, __Vfunc_m_get_available_op__71__Vfuncout);
            field_op = __Vfunc_m_get_available_op__71__Vfuncout;
            VL_NULL_CHECK(field_op, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_packer.svh", 943)->__VnoInFunc_set(vlProcess, vlSymsp, 0x00000400U, 
                                                                                VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_packer>{this}, value);
            VL_NULL_CHECK(value, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_packer.svh", 944)->__VnoInFunc_do_execute_op(vlProcess, vlSymsp, field_op);
            if (([&]() {
                        VL_NULL_CHECK(field_op, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_packer.svh", 945)
                 ->__VnoInFunc_user_hook_enabled(vlProcess, vlSymsp, __Vtask_user_hook_enabled__74__Vfuncout);
                    }(), (IData)(__Vtask_user_hook_enabled__74__Vfuncout))) {
                VL_NULL_CHECK(value, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_packer.svh", 946)->__VnoInFunc_do_unpack(vlSymsp, 
                                                                                VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_packer>{this});
            }
            VL_NULL_CHECK(field_op, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_packer.svh", 948)->__VnoInFunc_m_recycle(vlSymsp);
            this->__VnoInFunc_pop_active_object(vlProcess, vlSymsp, __Vtask_pop_active_object__77__Vfuncout);
        }
        __Vlabel0: ;
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_object_with_meta(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_object_with_meta\n"); );
    // Locals
    QData/*63:0*/ __Vfunc_unpack_field_int__78__Vfuncout;
    __Vfunc_unpack_field_int__78__Vfuncout = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_wrapper> __Vfunc_unpack_object_wrapper__79__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_wrapper> __Vtask_get_object_type__80__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> __Vtask_create_object__81__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_component> __Vtask_create_component__82__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_wrapper> unnamedblk67__DOT_____05Fwrapper;
    IData/*31:0*/ reference_id;
    reference_id = 0;
    {
        reference_id = (IData)(([&]() {
                    this->__VnoInFunc_unpack_field_int(vlProcess, vlSymsp, 0x00000020U, __Vfunc_unpack_field_int__78__Vfuncout);
                }(), __Vfunc_unpack_field_int__78__Vfuncout));
        if (this->__PVT__m_object_references.exists(reference_id)) {
            value = this->__PVT__m_object_references
                .at(reference_id);
            goto __Vlabel0;
        } else {
            this->__VnoInFunc_unpack_object_wrapper(vlSymsp, __Vfunc_unpack_object_wrapper__79__Vfuncout);
            unnamedblk67__DOT_____05Fwrapper = __Vfunc_unpack_object_wrapper__79__Vfuncout;
            if (((VlNull{} != unnamedblk67__DOT_____05Fwrapper) 
                 && ((VlNull{} == value) || (([&]() {
                                    VL_NULL_CHECK(value, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_packer.svh", 986)
                                              ->__VnoInFunc_get_object_type(vlSymsp, __Vtask_get_object_type__80__Vfuncout);
                                }(), __Vtask_get_object_type__80__Vfuncout) 
                                             != unnamedblk67__DOT_____05Fwrapper)))) {
                VL_NULL_CHECK(unnamedblk67__DOT_____05Fwrapper, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_packer.svh", 987)->__VnoInFunc_create_object(vlProcess, vlSymsp, ""s, __Vtask_create_object__81__Vfuncout);
                value = __Vtask_create_object__81__Vfuncout;
                if ((VlNull{} == value)) {
                    VL_NULL_CHECK(unnamedblk67__DOT_____05Fwrapper, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_packer.svh", 989)->__VnoInFunc_create_component(vlProcess, vlSymsp, ""s, VlNull{}, __Vtask_create_component__82__Vfuncout);
                    value = __Vtask_create_component__82__Vfuncout;
                }
            }
        }
        this->__PVT__m_object_references.at(reference_id) 
            = value;
        this->__VnoInFunc_unpack_object(vlSymsp, value);
        __Vlabel0: ;
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_object_wrapper(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_wrapper> &unpack_object_wrapper__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_object_wrapper\n"); );
    // Locals
    std::string __Vfunc_unpack_string__84__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_factory> __Vfunc_get__85__Vfuncout;
    CData/*0:0*/ __Vtask_is_type_name_registered__86__Vfuncout;
    __Vtask_is_type_name_registered__86__Vfuncout = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_wrapper> __Vtask_find_wrapper_by_name__87__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string type_name;
    {
        this->__VnoInFunc_unpack_string(vlProcess, vlSymsp, __Vfunc_unpack_string__84__Vfuncout);
        type_name = __Vfunc_unpack_string__84__Vfuncout;
        if ((VlNull{} == this->__PVT__m_factory)) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_factory__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__85__Vfuncout);
            this->__PVT__m_factory = __Vfunc_get__85__Vfuncout;
        }
        if (([&]() {
                    VL_NULL_CHECK(this->__PVT__m_factory, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_packer.svh", 1003)
             ->__VnoInFunc_is_type_name_registered(vlSymsp, type_name, __Vtask_is_type_name_registered__86__Vfuncout);
                }(), (IData)(__Vtask_is_type_name_registered__86__Vfuncout))) {
            VL_NULL_CHECK(this->__PVT__m_factory, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_packer.svh", 1004)->__VnoInFunc_find_wrapper_by_name(vlProcess, vlSymsp, type_name, __Vtask_find_wrapper_by_name__87__Vfuncout);
            unpack_object_wrapper__Vfuncrtn = __Vtask_find_wrapper_by_name__87__Vfuncout;
            goto __Vlabel0;
        }
        unpack_object_wrapper__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_real(Vpools_top__Syms* __restrict vlSymsp, double &unpack_real__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_real\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_enough_bits__88__Vfuncout;
    __Vfunc_enough_bits__88__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_unpack_field_int__89__Vfuncout;
    __Vfunc_unpack_field_int__89__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if (([&]() {
                this->__VnoInFunc_enough_bits(vlProcess, vlSymsp, 0x00000040U, "real"s, __Vfunc_enough_bits__88__Vfuncout);
            }(), (IData)(__Vfunc_enough_bits__88__Vfuncout))) {
        unpack_real__Vfuncrtn = VL_CVT_D_Q(([&]() {
                    this->__VnoInFunc_unpack_field_int(vlProcess, vlSymsp, 0x00000040U, __Vfunc_unpack_field_int__89__Vfuncout);
                }(), __Vfunc_unpack_field_int__89__Vfuncout));
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_time(Vpools_top__Syms* __restrict vlSymsp, QData/*63:0*/ &unpack_time__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_time\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_enough_bits__90__Vfuncout;
    __Vfunc_enough_bits__90__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_unpack_field_int__91__Vfuncout;
    __Vfunc_unpack_field_int__91__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if (([&]() {
                this->__VnoInFunc_enough_bits(vlProcess, vlSymsp, 0x00000040U, "time"s, __Vfunc_enough_bits__90__Vfuncout);
            }(), (IData)(__Vfunc_enough_bits__90__Vfuncout))) {
        this->__VnoInFunc_unpack_field_int(vlProcess, vlSymsp, 0x00000040U, __Vfunc_unpack_field_int__91__Vfuncout);
        unpack_time__Vfuncrtn = __Vfunc_unpack_field_int__91__Vfuncout;
    }
}

extern const VlWide<128>/*4095:0*/ Vpools_top__ConstPool__CONST_h6e0f3f36_0;

void Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_field(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ size, VlWide<128>/*4095:0*/ &unpack_field__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_field\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_enough_bits__92__Vfuncout;
    __Vfunc_enough_bits__92__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ unnamedblk68__DOT__i;
    unnamedblk68__DOT__i = 0;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x0000007fU)) {
        unpack_field__Vfuncrtn[__Vilp1] = Vpools_top__ConstPool__CONST_h6e0f3f36_0[__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    if (([&]() {
                this->__VnoInFunc_enough_bits(vlProcess, vlSymsp, size, "integral"s, __Vfunc_enough_bits__92__Vfuncout);
            }(), (IData)(__Vfunc_enough_bits__92__Vfuncout))) {
        this->__PVT__m_unpack_iter = (this->__PVT__m_unpack_iter 
                                      + size);
        unnamedblk68__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk68__DOT__i, size)) {
            unpack_field__Vfuncrtn[(0x0000007fU & (unnamedblk68__DOT__i 
                                                   >> 5U))] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & unnamedblk68__DOT__i))) 
                    & unpack_field__Vfuncrtn[(0x0000007fU 
                                              & (unnamedblk68__DOT__i 
                                                 >> 5U))]) 
                   | ((1U & (this->__PVT__m_bits[(0x000003ffU 
                                                  & (((this->__PVT__m_unpack_iter 
                                                       - size) 
                                                      + unnamedblk68__DOT__i) 
                                                     >> 5U))] 
                             >> (0x0000001fU & ((this->__PVT__m_unpack_iter 
                                                 - size) 
                                                + unnamedblk68__DOT__i)))) 
                      << (0x0000001fU & unnamedblk68__DOT__i)));
            unnamedblk68__DOT__i = ((IData)(1U) + unnamedblk68__DOT__i);
        }
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_field_int(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ size, QData/*63:0*/ &unpack_field_int__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_field_int\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_enough_bits__93__Vfuncout;
    __Vfunc_enough_bits__93__Vfuncout = 0;
    // Body
    IData/*31:0*/ unnamedblk69__DOT__i;
    unnamedblk69__DOT__i = 0;
    unpack_field_int__Vfuncrtn = 0ULL;
    if (([&]() {
                this->__VnoInFunc_enough_bits(vlProcess, vlSymsp, size, "integral"s, __Vfunc_enough_bits__93__Vfuncout);
            }(), (IData)(__Vfunc_enough_bits__93__Vfuncout))) {
        this->__PVT__m_unpack_iter = (this->__PVT__m_unpack_iter 
                                      + size);
        unnamedblk69__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk69__DOT__i, size)) {
            unpack_field_int__Vfuncrtn = (((~ (1ULL 
                                               << (0x0000003fU 
                                                   & unnamedblk69__DOT__i))) 
                                           & unpack_field_int__Vfuncrtn) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & (this->__PVT__m_bits[
                                                                 (0x000003ffU 
                                                                  & (((this->__PVT__m_unpack_iter 
                                                                       - size) 
                                                                      + unnamedblk69__DOT__i) 
                                                                     >> 5U))] 
                                                                 >> 
                                                                 (0x0000001fU 
                                                                  & ((this->__PVT__m_unpack_iter 
                                                                      - size) 
                                                                     + unnamedblk69__DOT__i)))))) 
                                             << (0x0000003fU 
                                                 & unnamedblk69__DOT__i)));
            unnamedblk69__DOT__i = ((IData)(1U) + unnamedblk69__DOT__i);
        }
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_bits(Vpools_top__Syms* __restrict vlSymsp, VlQueue<CData/*0:0*/> &value, IData/*31:0*/ size) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_bits\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__94__Vfuncout;
    __Vfunc_uvm_report_enabled__94__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__94__verbosity;
    __Vfunc_uvm_report_enabled__94__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__94__severity;
    __Vfunc_uvm_report_enabled__94__severity = 0;
    std::string __Vfunc_uvm_report_enabled__94__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__95__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__96__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__97__Vfuncout;
    __Vtask_uvm_report_enabled__97__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__98__id;
    std::string __Vtask_uvm_report_error__98__message;
    IData/*31:0*/ __Vtask_uvm_report_error__98__verbosity;
    __Vtask_uvm_report_error__98__verbosity = 0;
    std::string __Vtask_uvm_report_error__98__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__98__line;
    __Vtask_uvm_report_error__98__line = 0;
    std::string __Vtask_uvm_report_error__98__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__98__report_enabled_checked;
    __Vtask_uvm_report_error__98__report_enabled_checked = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__99__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__100__Vfuncout;
    CData/*0:0*/ __Vfunc_enough_bits__102__Vfuncout;
    __Vfunc_enough_bits__102__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ unnamedblk70__DOT__i;
    unnamedblk70__DOT__i = 0;
    {
        if (VL_GTS_III(32, 0U, size)) {
            size = value.size();
        }
        if (VL_GTS_III(32, size, value.size())) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__94__id = "UVM/BASE/PACKER/BAD_SIZE"s;
                            __Vfunc_uvm_report_enabled__94__severity = 2U;
                            __Vfunc_uvm_report_enabled__94__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__95__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__95__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__96__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__96__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__94__verbosity, (IData)(__Vfunc_uvm_report_enabled__94__severity), __Vfunc_uvm_report_enabled__94__id, __Vtask_uvm_report_enabled__97__Vfuncout);
                            __Vfunc_uvm_report_enabled__94__Vfuncout 
                                = __Vtask_uvm_report_enabled__97__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__94__Vfuncout))) {
                __Vtask_uvm_report_error__98__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__98__context_name = ""s;
                __Vtask_uvm_report_error__98__line = 0x00000434U;
                __Vtask_uvm_report_error__98__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_packer.svh"s;
                __Vtask_uvm_report_error__98__verbosity = 0U;
                __Vtask_uvm_report_error__98__message 
                    = VL_SFORMATF_N_NX("unpack_bits called with size '%0d', which exceeds value.size() of '%0d'",0,
                                       32,size,32,value.size()) ;
                __Vtask_uvm_report_error__98__id = "UVM/BASE/PACKER/BAD_SIZE"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__99__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__99__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__100__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__100__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__98__id, __Vtask_uvm_report_error__98__message, __Vtask_uvm_report_error__98__verbosity, __Vtask_uvm_report_error__98__filename, __Vtask_uvm_report_error__98__line, __Vtask_uvm_report_error__98__context_name, (IData)(__Vtask_uvm_report_error__98__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        if (([&]() {
                    this->__VnoInFunc_enough_bits(vlProcess, vlSymsp, size, "integral"s, __Vfunc_enough_bits__102__Vfuncout);
                }(), (IData)(__Vfunc_enough_bits__102__Vfuncout))) {
            this->__PVT__m_unpack_iter = (this->__PVT__m_unpack_iter 
                                          + size);
            unnamedblk70__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk70__DOT__i, size)) {
                value.atWrite(unnamedblk70__DOT__i) 
                    = (1U & (this->__PVT__m_bits[(0x000003ffU 
                                                  & (((this->__PVT__m_unpack_iter 
                                                       - size) 
                                                      + unnamedblk70__DOT__i) 
                                                     >> 5U))] 
                             >> (0x0000001fU & ((this->__PVT__m_unpack_iter 
                                                 - size) 
                                                + unnamedblk70__DOT__i))));
                unnamedblk70__DOT__i = ((IData)(1U) 
                                        + unnamedblk70__DOT__i);
            }
        }
        __Vlabel0: ;
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_bytes(Vpools_top__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &value, IData/*31:0*/ size) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_bytes\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__103__Vfuncout;
    __Vfunc_uvm_report_enabled__103__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__103__verbosity;
    __Vfunc_uvm_report_enabled__103__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__103__severity;
    __Vfunc_uvm_report_enabled__103__severity = 0;
    std::string __Vfunc_uvm_report_enabled__103__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__104__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__105__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__106__Vfuncout;
    __Vtask_uvm_report_enabled__106__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__107__id;
    std::string __Vtask_uvm_report_error__107__message;
    IData/*31:0*/ __Vtask_uvm_report_error__107__verbosity;
    __Vtask_uvm_report_error__107__verbosity = 0;
    std::string __Vtask_uvm_report_error__107__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__107__line;
    __Vtask_uvm_report_error__107__line = 0;
    std::string __Vtask_uvm_report_error__107__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__107__report_enabled_checked;
    __Vtask_uvm_report_error__107__report_enabled_checked = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__108__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__109__Vfuncout;
    CData/*0:0*/ __Vfunc_enough_bits__111__Vfuncout;
    __Vfunc_enough_bits__111__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ unnamedblk71__DOT__i;
    unnamedblk71__DOT__i = 0;
    IData/*31:0*/ max_size;
    max_size = 0;
    max_size = VL_MULS_III(32, (IData)(8U), value.size());
    if (VL_GTS_III(32, 0U, size)) {
        size = max_size;
    }
    if (VL_GTS_III(32, size, max_size)) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__103__id = "UVM/BASE/PACKER/BAD_SIZE"s;
                        __Vfunc_uvm_report_enabled__103__severity = 2U;
                        __Vfunc_uvm_report_enabled__103__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__104__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__104__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__105__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__105__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__103__verbosity, (IData)(__Vfunc_uvm_report_enabled__103__severity), __Vfunc_uvm_report_enabled__103__id, __Vtask_uvm_report_enabled__106__Vfuncout);
                        __Vfunc_uvm_report_enabled__103__Vfuncout 
                            = __Vtask_uvm_report_enabled__106__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__103__Vfuncout))) {
            __Vtask_uvm_report_error__107__report_enabled_checked = 1U;
            __Vtask_uvm_report_error__107__context_name = ""s;
            __Vtask_uvm_report_error__107__line = 0x00000450U;
            __Vtask_uvm_report_error__107__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_packer.svh"s;
            __Vtask_uvm_report_error__107__verbosity = 0U;
            __Vtask_uvm_report_error__107__message 
                = VL_SFORMATF_N_NX("unpack_bytes called with size '%0d', which exceeds value size of '%0d'",0,
                                   32,size,32,value.size()) ;
            __Vtask_uvm_report_error__107__id = "UVM/BASE/PACKER/BAD_SIZE"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__108__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__108__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__109__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__109__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__107__id, __Vtask_uvm_report_error__107__message, __Vtask_uvm_report_error__107__verbosity, __Vtask_uvm_report_error__107__filename, __Vtask_uvm_report_error__107__line, __Vtask_uvm_report_error__107__context_name, (IData)(__Vtask_uvm_report_error__107__report_enabled_checked));
        }
    } else if (([&]() {
                this->__VnoInFunc_enough_bits(vlProcess, vlSymsp, size, "integral"s, __Vfunc_enough_bits__111__Vfuncout);
            }(), (IData)(__Vfunc_enough_bits__111__Vfuncout))) {
        this->__PVT__m_unpack_iter = (this->__PVT__m_unpack_iter 
                                      + size);
        unnamedblk71__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk71__DOT__i, size)) {
            value.atWrite(VL_SHIFTR_III(32,32,32, unnamedblk71__DOT__i, 3U)) 
                = (((~ ((IData)(1U) << (7U & VL_MODDIVS_III(32, unnamedblk71__DOT__i, (IData)(8U))))) 
                    & value.atWrite(VL_SHIFTR_III(32,32,32, unnamedblk71__DOT__i, 3U))) 
                   | (0x00ffU & ((1U & (this->__PVT__m_bits[
                                        (0x000003ffU 
                                         & (((this->__PVT__m_unpack_iter 
                                              - size) 
                                             + unnamedblk71__DOT__i) 
                                            >> 5U))] 
                                        >> (0x0000001fU 
                                            & ((this->__PVT__m_unpack_iter 
                                                - size) 
                                               + unnamedblk71__DOT__i)))) 
                                 << (7U & VL_MODDIVS_III(32, unnamedblk71__DOT__i, (IData)(8U))))));
            unnamedblk71__DOT__i = ((IData)(1U) + unnamedblk71__DOT__i);
        }
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_ints(Vpools_top__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> &value, IData/*31:0*/ size) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_ints\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__112__Vfuncout;
    __Vfunc_uvm_report_enabled__112__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__112__verbosity;
    __Vfunc_uvm_report_enabled__112__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__112__severity;
    __Vfunc_uvm_report_enabled__112__severity = 0;
    std::string __Vfunc_uvm_report_enabled__112__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__113__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__114__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__115__Vfuncout;
    __Vtask_uvm_report_enabled__115__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__116__id;
    std::string __Vtask_uvm_report_error__116__message;
    IData/*31:0*/ __Vtask_uvm_report_error__116__verbosity;
    __Vtask_uvm_report_error__116__verbosity = 0;
    std::string __Vtask_uvm_report_error__116__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__116__line;
    __Vtask_uvm_report_error__116__line = 0;
    std::string __Vtask_uvm_report_error__116__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__116__report_enabled_checked;
    __Vtask_uvm_report_error__116__report_enabled_checked = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__117__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__118__Vfuncout;
    CData/*0:0*/ __Vfunc_enough_bits__120__Vfuncout;
    __Vfunc_enough_bits__120__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ unnamedblk72__DOT__i;
    unnamedblk72__DOT__i = 0;
    IData/*31:0*/ max_size;
    max_size = 0;
    max_size = VL_MULS_III(32, (IData)(0x00000020U), value.size());
    if (VL_GTS_III(32, 0U, size)) {
        size = max_size;
    }
    if (VL_GTS_III(32, size, max_size)) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__112__id = "UVM/BASE/PACKER/BAD_SIZE"s;
                        __Vfunc_uvm_report_enabled__112__severity = 2U;
                        __Vfunc_uvm_report_enabled__112__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__113__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__113__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__114__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__114__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__112__verbosity, (IData)(__Vfunc_uvm_report_enabled__112__severity), __Vfunc_uvm_report_enabled__112__id, __Vtask_uvm_report_enabled__115__Vfuncout);
                        __Vfunc_uvm_report_enabled__112__Vfuncout 
                            = __Vtask_uvm_report_enabled__115__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__112__Vfuncout))) {
            __Vtask_uvm_report_error__116__report_enabled_checked = 1U;
            __Vtask_uvm_report_error__116__context_name = ""s;
            __Vtask_uvm_report_error__116__line = 0x00000470U;
            __Vtask_uvm_report_error__116__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_packer.svh"s;
            __Vtask_uvm_report_error__116__verbosity = 0U;
            __Vtask_uvm_report_error__116__message 
                = VL_SFORMATF_N_NX("unpack_ints called with size '%0d', which exceeds value size of '%0d'",0,
                                   32,size,32,value.size()) ;
            __Vtask_uvm_report_error__116__id = "UVM/BASE/PACKER/BAD_SIZE"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__117__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__117__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__118__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__118__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__116__id, __Vtask_uvm_report_error__116__message, __Vtask_uvm_report_error__116__verbosity, __Vtask_uvm_report_error__116__filename, __Vtask_uvm_report_error__116__line, __Vtask_uvm_report_error__116__context_name, (IData)(__Vtask_uvm_report_error__116__report_enabled_checked));
        }
    } else if (([&]() {
                this->__VnoInFunc_enough_bits(vlProcess, vlSymsp, size, "integral"s, __Vfunc_enough_bits__120__Vfuncout);
            }(), (IData)(__Vfunc_enough_bits__120__Vfuncout))) {
        this->__PVT__m_unpack_iter = (this->__PVT__m_unpack_iter 
                                      + size);
        unnamedblk72__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk72__DOT__i, size)) {
            value.atWrite(VL_SHIFTR_III(32,32,32, unnamedblk72__DOT__i, 5U)) 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & VL_MODDIVS_III(32, unnamedblk72__DOT__i, (IData)(0x00000020U))))) 
                    & value.atWrite(VL_SHIFTR_III(32,32,32, unnamedblk72__DOT__i, 5U))) 
                   | (0x00000000ffffffffULL & ((1U 
                                                & (this->__PVT__m_bits[
                                                   (0x000003ffU 
                                                    & (((this->__PVT__m_unpack_iter 
                                                         - size) 
                                                        + unnamedblk72__DOT__i) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x0000001fU 
                                                    & ((this->__PVT__m_unpack_iter 
                                                        - size) 
                                                       + unnamedblk72__DOT__i)))) 
                                               << (0x0000001fU 
                                                   & VL_MODDIVS_III(32, unnamedblk72__DOT__i, (IData)(0x00000020U))))));
            unnamedblk72__DOT__i = ((IData)(1U) + unnamedblk72__DOT__i);
        }
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_string(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string &unpack_string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_string\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_enough_bits__121__Vfuncout;
    __Vfunc_enough_bits__121__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_enough_bits__122__Vfuncout;
    __Vfunc_enough_bits__122__Vfuncout = 0;
    // Body
    CData/*7:0*/ b;
    b = 0;
    IData/*31:0*/ i;
    i = 0;
    i = 0U;
    while ((([&]() {
                    this->__VnoInFunc_enough_bits(vlProcess, vlSymsp, 8U, "string"s, __Vfunc_enough_bits__121__Vfuncout);
                }(), (IData)(__Vfunc_enough_bits__121__Vfuncout)) 
            && (0U != (0x000000ffU & (((0U == (0x0000001fU 
                                               & this->__PVT__m_unpack_iter))
                                        ? 0U : (this->__PVT__m_bits[
                                                (((IData)(7U) 
                                                  + 
                                                  (0x00007fffU 
                                                   & this->__PVT__m_unpack_iter)) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x00000020U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & this->__PVT__m_unpack_iter)))) 
                                      | (this->__PVT__m_bits[
                                         (0x000003ffU 
                                          & (this->__PVT__m_unpack_iter 
                                             >> 5U))] 
                                         >> (0x0000001fU 
                                             & this->__PVT__m_unpack_iter))))))) {
        unpack_string__Vfuncrtn = VL_CONCATN_NNN(unpack_string__Vfuncrtn, " "s);
        unpack_string__Vfuncrtn = VL_PUTC_N(unpack_string__Vfuncrtn, i, 
                                            (0x000000ffU 
                                             & (((0U 
                                                  == 
                                                  (0x0000001fU 
                                                   & this->__PVT__m_unpack_iter))
                                                  ? 0U
                                                  : 
                                                 (this->__PVT__m_bits[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0x00007fffU 
                                                     & this->__PVT__m_unpack_iter)) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x00000020U) 
                                                   - 
                                                   (0x0000001fU 
                                                    & this->__PVT__m_unpack_iter)))) 
                                                | (this->__PVT__m_bits[
                                                   (0x000003ffU 
                                                    & (this->__PVT__m_unpack_iter 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x0000001fU 
                                                    & this->__PVT__m_unpack_iter)))));
        this->__PVT__m_unpack_iter = ((IData)(8U) + this->__PVT__m_unpack_iter);
        i = ((IData)(1U) + i);
    }
    if (([&]() {
                this->__VnoInFunc_enough_bits(vlProcess, vlSymsp, 8U, "string"s, __Vfunc_enough_bits__122__Vfuncout);
            }(), (IData)(__Vfunc_enough_bits__122__Vfuncout))) {
        this->__PVT__m_unpack_iter = ((IData)(8U) + this->__PVT__m_unpack_iter);
    }
}

Vpools_top_uvm_pkg__03a__03auvm_packer::Vpools_top_uvm_pkg__03a__03auvm_packer(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name)
    : Vpools_top_uvm_pkg__03a__03auvm_policy(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_packer::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__word_size = 0x00000010U;
    this->__PVT__byte_size = 8U;
    ;
    this->__VnoInFunc_flush(vlProcess, vlSymsp);
}

void Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_randomize(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__126__Vfuncout;
    __Vfunc___VBasicRand__126__Vfuncout = 0;
    // Body
    Vpools_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vpools_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__126__Vfuncout);
            }(), __Vfunc___VBasicRand__126__Vfuncout));
}

void Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc___Vsetup_constraints(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc___VBasicRand(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_packer::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vpools_top_uvm_pkg__03a__03auvm_packer::_ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_packer::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_pack_iter = 0;
    __PVT__m_unpack_iter = 0;
    __PVT__reverse_order = 0;
    __PVT__byte_size = 0;
    __PVT__word_size = 0;
    __PVT__nopack = 0;
    VL_ZERO_W(32768, __PVT__m_bits);
}

Vpools_top_uvm_pkg__03a__03auvm_packer::~Vpools_top_uvm_pkg__03a__03auvm_packer() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_packer::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_packer>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_packer::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vpools_top_uvm_pkg__03a__03auvm_packer::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_packer::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vpools_top_uvm_pkg__03a__03auvm_packer::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_packer::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_factory:" + VL_TO_STRING(__PVT__m_factory);
    out += ", m_object_references:" + VL_TO_STRING(__PVT__m_object_references);
    out += ", m_pack_iter:" + VL_TO_STRING(__PVT__m_pack_iter);
    out += ", m_unpack_iter:" + VL_TO_STRING(__PVT__m_unpack_iter);
    out += ", reverse_order:" + VL_TO_STRING(__PVT__reverse_order);
    out += ", byte_size:" + VL_TO_STRING(__PVT__byte_size);
    out += ", word_size:" + VL_TO_STRING(__PVT__word_size);
    out += ", nopack:" + VL_TO_STRING(__PVT__nopack);
    out += ", m_bits:" + VL_TO_STRING_W(1024, __PVT__m_bits);
    out += ", "+ Vpools_top_uvm_pkg__03a__03auvm_policy::to_string_middle();
    return (out);
}
