// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsignal_access__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vsignal_access::Vsignal_access(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsignal_access__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vsignal_access::Vsignal_access(const char* _vcname__)
    : Vsignal_access(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsignal_access::~Vsignal_access() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsignal_access___024root___eval_debug_assertions(Vsignal_access___024root* vlSelf);
#endif  // VL_DEBUG
void Vsignal_access___024root___eval_static(Vsignal_access___024root* vlSelf);
void Vsignal_access___024root___eval_initial(Vsignal_access___024root* vlSelf);
void Vsignal_access___024root___eval_settle(Vsignal_access___024root* vlSelf);
void Vsignal_access___024root___eval(Vsignal_access___024root* vlSelf);

void Vsignal_access::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsignal_access::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsignal_access___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vsignal_access___024root___eval_static(&(vlSymsp->TOP));
        Vsignal_access___024root___eval_initial(&(vlSymsp->TOP));
        Vsignal_access___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vsignal_access___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vsignal_access::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vsignal_access::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vsignal_access::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vsignal_access___024root___eval_final(Vsignal_access___024root* vlSelf);

VL_ATTR_COLD void Vsignal_access::final() {
    Vsignal_access___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsignal_access::hierName() const { return vlSymsp->name(); }
const char* Vsignal_access::modelName() const { return "Vsignal_access"; }
unsigned Vsignal_access::threads() const { return 1; }
void Vsignal_access::prepareClone() const { contextp()->prepareClone(); }
void Vsignal_access::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vsignal_access::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vsignal_access___024root__trace_decl_types(VerilatedVcd* tracep);

void Vsignal_access___024root__trace_init_top(Vsignal_access___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsignal_access___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsignal_access___024root*>(voidSelf);
    Vsignal_access__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vsignal_access___024root__trace_decl_types(tracep);
    Vsignal_access___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vsignal_access___024root__trace_register(Vsignal_access___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vsignal_access::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vsignal_access::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vsignal_access___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
