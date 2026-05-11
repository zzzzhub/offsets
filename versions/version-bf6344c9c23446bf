#pragma once
#include <Windows.h>
#include <cstdint>
#define REBASE(x) (x + (uintptr_t)GetModuleHandle(NULL))

// Roblox Version: version-bf6344c9c23446bf [Current]
// found manually - @2qp0, @credential_
// check out my github or sum - https://github.com/zzzzhub
// if there is some offsets you want just shoot me a dm or ping me with the name

namespace Offsets {
    const uintptr_t BindableEventEventSink = 0x58;
    const uintptr_t BindableEventListenerList = 0x78;
    const uintptr_t BindableEventListenerListRef = 0x80;
    const uintptr_t BindableEventMaskBits = 0xB8;
    const uintptr_t BindableEventSecurityCaps = 0xD0;
    const uintptr_t BindableEventSignals = 0xC8;
    const uintptr_t BindableFunctionSignalHead = 0xC8;
    const uintptr_t BindableFunctionSignalNext = 0xD0;
    const uintptr_t BindableFunctionSignalPrev = 0xD8;
    const uintptr_t BindableFunctionSignalAux0 = 0xE0;
    const uintptr_t BindableFunctionSignalAux1 = 0xE8;
    const uintptr_t BindableFunctionSignalSentinel = 0xF0;
    const uintptr_t BindableFunctionInvokeCallback = 0x128;
    const uintptr_t BindableFunctionSecurityCaps = 0x130;
    const uintptr_t Children = 0x78;
    const uintptr_t ClassDescriptor = 0x18;
    const uintptr_t ClassName = 0x8;
    const uintptr_t DescriptorName = 0x8;
    const uintptr_t FakeDataModelToReal = 0x1D0;
    const uintptr_t JobName = 0x18;
    const uintptr_t JobsEnd = 0xD0;
    const uintptr_t JobsStart = 0xC8;
    const uintptr_t LocalScriptBytecode = 0x1A8;
    const uintptr_t ModuleScriptBytecode = 0x150;
    const uintptr_t Name = 0xB0;
    const uintptr_t Overlap = 0x1E8;
    const uintptr_t Parent = 0x70;
    const uintptr_t Primitive = 0x328;
    const uintptr_t BasePartToPrimitivePointer = 0x148;
    const uintptr_t PropertyBucketIndices = 0x250;
    const uintptr_t PropDescriptor = 0x258;
    const uintptr_t PropertyDescriptors = 0x258;
    const uintptr_t PropertyDescriptorBitFlags = 0x10;
    const uintptr_t PropertyHashTable = 0x248;
    const uintptr_t PropertyIndexMask = 0x260;
    const uintptr_t RakPeer = 0x1D0;
    const uintptr_t RenderJobToView = 0x1D0;
    const uintptr_t RenderViewToDevice = 0x8;
    const uintptr_t RequireFlag = 0x830;
    const uintptr_t DataModelScriptContext = 0x400;
    const uintptr_t ScriptContext = 0x3F0;
    const uintptr_t Scriptable = 0x88;
    const uintptr_t ScriptableFlags = 0x10;
    const uintptr_t TaskSchedulerMaxFps = 0x6301DA8;
    const uintptr_t TStringNext = 0x8;
    const uintptr_t TStringHash = 0x10;
    const uintptr_t TStringLen = 0x14;
    const uintptr_t LuaTableMetatable = 0x10;
    const uintptr_t LuaTableArray = 0x18;
    const uintptr_t LuaTableNode = 0x20;
    const uintptr_t LuaTableGcList = 0x28;
    const uintptr_t LuaPagePrev = 0x0;
    const uintptr_t LuaPageNext = 0x8;
    const uintptr_t LuaPageListPrev = 0x10;
    const uintptr_t LuaPageListNext = 0x18;
    const uintptr_t LuaPagePageSize = 0x20;
    const uintptr_t LuaPageBlockSize = 0x24;
    const uintptr_t LuaPageFreeList = 0x28;
    const uintptr_t LuaPageFreeNext = 0x30;
    const uintptr_t LuaPageBusyBlocks = 0x34;
    const uintptr_t LuaPageData = 0x40;
    const uintptr_t LuaStateGlobal = 0x18;
    const uintptr_t LuaStateStackLast = 0x20;
    const uintptr_t LuaStateTop = 0x28;
    const uintptr_t LuaStateNameCall = 0x30;
    const uintptr_t LuaStateCi = 0x38;
    const uintptr_t LuaStateBase = 0x40;
    const uintptr_t LuaStateStack = 0x48;
    const uintptr_t LuaStateRobloxExtraSpace = 0x50;
    const uintptr_t LuaStateEndCi = 0x58;
    const uintptr_t LuaStateBaseCi = 0x60;
    const uintptr_t LuaStateNCCalls = 0x68;
    const uintptr_t LuaStateBaseCCalls = 0x6A;
    const uintptr_t LuaStateCachedSlot = 0x6C;
    const uintptr_t LuaStateGt = 0x70;
    const uintptr_t LuaStateOpenUpval = 0x78;
    const uintptr_t LuaStateUserData = 0x160;
    const uintptr_t GlobalCallbacks = 0x4B8;
    const uintptr_t GlobalCbGcStep = 0x4B8;
    const uintptr_t GlobalCbOnAllocate = 0x4D0;
    const uintptr_t GlobalCbUserThread = 0x4F8;
    const uintptr_t GlobalCbClose = 0x538;
    const uintptr_t GlobalFreePages = 0x80;
    const uintptr_t GlobalFreeGcoPages = 0x1D0;
    const uintptr_t GlobalUdataMt = 0x3800;
    const uintptr_t VisualEngineToDevice = 0xA0;
}

namespace Signal {
    namespace BindableEvent {
        const uintptr_t EventSink = Offsets::BindableEventEventSink;
        const uintptr_t ListenerList = Offsets::BindableEventListenerList;
        const uintptr_t ListenerListRef = Offsets::BindableEventListenerListRef;
        const uintptr_t MaskBits = Offsets::BindableEventMaskBits;
        const uintptr_t SecurityCaps = Offsets::BindableEventSecurityCaps;
        const uintptr_t Signals = Offsets::BindableEventSignals;
    }

    namespace BindableFunction {
        const uintptr_t SignalHead = Offsets::BindableFunctionSignalHead;
        const uintptr_t SignalNext = Offsets::BindableFunctionSignalNext;
        const uintptr_t SignalPrev = Offsets::BindableFunctionSignalPrev;
        const uintptr_t SignalAux0 = Offsets::BindableFunctionSignalAux0;
        const uintptr_t SignalAux1 = Offsets::BindableFunctionSignalAux1;
        const uintptr_t SignalSentinel = Offsets::BindableFunctionSignalSentinel;
        const uintptr_t InvokeCallback = Offsets::BindableFunctionInvokeCallback;
        const uintptr_t SecurityCaps = Offsets::BindableFunctionSecurityCaps;
    }
}

namespace Structs {
    const uintptr_t AppDataInfo = REBASE(0x7CE0BE0);
    const uintptr_t FakeDataModel = REBASE(0x749CBD8);
    const uintptr_t IdentityPtr = REBASE(0x7A08980);
    const uintptr_t LuauOpcode = REBASE(0x5F55610);
    const uintptr_t KTable = REBASE(0x7BABE20);
    const uintptr_t RawSchedulerHumanoidParallelManagerCtor = REBASE(0x1872D20);
    const uintptr_t luaO_nilobject = REBASE(0x62A8C38);
    const uintptr_t luaH_dummynode = REBASE(0x62A8AF8);
    const uintptr_t luaT_typenames = REBASE(0x62A89B0);
    const uintptr_t luaT_eventnames = REBASE(0x62A86F0);
    const uintptr_t TaskSchedulerPointer = REBASE(0x7BA3198);
    const uintptr_t VisualEnginePointer = REBASE(0x7B79A08);
    const uintptr_t PlayerConfigurerPointer = REBASE(0x74A1CA0);
}

namespace Functions {
    const uintptr_t AttachRobloxExtraSpace = REBASE(0x393E7B0);
    const uintptr_t print = REBASE(0x1DB7F90);
    const uintptr_t getluastate = REBASE(0x1D57320);
    const uintptr_t getglobalstate = REBASE(0x1C309B0);
    const uintptr_t luavm__load = REBASE(0x1C625A0);
    const uintptr_t loadsafe = REBASE(0x4712080);
    const uintptr_t luaD_throw = REBASE(0x470C5F0);
    const uintptr_t luaD_rawrunprotected = REBASE(0x470C170);
    const uintptr_t luaG_runerrorL = REBASE(0x470F4B0);
    const uintptr_t callerrfunc = REBASE(0x470B710);
    const uintptr_t close_state = REBASE(0x470A100);
    const uintptr_t f_luaopen = REBASE(0x470A1C0);
    const uintptr_t luau_execute = REBASE(0x471C790);
    const uintptr_t luaC_step = REBASE(0x4710C80);
    const uintptr_t freegco = REBASE(0x4710540);
    const uintptr_t markroot = REBASE(0x4711170);
    const uintptr_t propagatemark = REBASE(0x47112B0);
    const uintptr_t atomic = REBASE(0x470FF20);
    const uintptr_t traversetable = REBASE(0x47119F0);
    const uintptr_t luaM_free_ = REBASE(0x472B180);
    const uintptr_t luaM_freegco_ = REBASE(0x472B200);
    const uintptr_t luaM_visitgco = REBASE(0x472B6D0);
    const uintptr_t newblock = REBASE(0x472B380);
    const uintptr_t newgcoblock = REBASE(0x472B440);
    const uintptr_t newpage = REBASE(0x472B520);
    const uintptr_t luaL_register = REBASE(0x470DF70);
    const uintptr_t luaL_findtable = REBASE(0x470D9D0);
    const uintptr_t luaL_getmetafield = REBASE(0x470DB00);
    const uintptr_t luaL_callmeta = REBASE(0x470DB80);
    const uintptr_t luaL_checklstring = REBASE(0x470DD30);
    const uintptr_t luaL_argerrorL = REBASE(0x470D5B0);
    const uintptr_t luaL_errorL = REBASE(0x470D980);
    const uintptr_t luaL_typerrorL = REBASE(0x470E7C0);

    const uintptr_t currfuncname = REBASE(0x470D0C0);
    const uintptr_t currentline = REBASE(0x470E390);

    const uintptr_t lua_typename = REBASE(0x4709DE0);
    const uintptr_t luaA_toobject = REBASE(0x4706970);
    const uintptr_t pseudo2addr = REBASE(0x470A030);
    const uintptr_t pusherror = REBASE(0x470C570);
    const uintptr_t tag_error = REBASE(0x470E980);
    const uintptr_t luaL_tolstring = REBASE(0x470E0B0);
    const uintptr_t luaL_where = REBASE(0x4729150);
    const uintptr_t luaT_objtypename = REBASE(0x472BB70);
    const uintptr_t luaH_new = REBASE(0x472D5E0);
    const uintptr_t luaH_clone = REBASE(0x472CCE0);
    const uintptr_t luaO_pushfstring = REBASE(0x470DEB0);
    const uintptr_t lua_pushfstringL = REBASE(0x4707DE0);
    const uintptr_t lua_pushvfstring = REBASE(0x4708140);
    const uintptr_t luaO_pushvfstring = REBASE(0x473AD80);
    const uintptr_t luaO_chunkid = REBASE(0x473AAE0);
    const uintptr_t luaV_gettable = REBASE(0x4736870);
    const uintptr_t luaF_newproto = REBASE(0x4734E00);
    const uintptr_t luaF_newLclosure = REBASE(0x4734D50);
    const uintptr_t luaF_freeproto = REBASE(0x4734A80);
    const uintptr_t luaopen_base = REBASE(0x471F430);
    const uintptr_t luaopen_math = REBASE(0x47288A0);

    const uintptr_t task_cancel = REBASE(0x1D91BF0);
    const uintptr_t task_defer = REBASE(0x1D91F00);
    const uintptr_t task_delay = REBASE(0x1D92360);
    const uintptr_t task_desynchronize = REBASE(0x1D925A0);
    const uintptr_t task_synchronize = REBASE(0x1D92FD0);
    const uintptr_t task_spawn = REBASE(0x1D92E50);
    const uintptr_t task_wait = REBASE(0x1D931E0);

    const uintptr_t luaB_assert = REBASE(0x471EC80);
    const uintptr_t luaB_error = REBASE(0x471E740);
    const uintptr_t luaB_gcinfo = REBASE(0x471EB70);
    const uintptr_t luaB_getfenv = REBASE(0x471E8D0);
    const uintptr_t luaB_getmetatable = REBASE(0x471E7B0);
    const uintptr_t luaB_next = REBASE(0x471EC20);
    const uintptr_t luaB_newproxy = REBASE(0x471EDD0);
    const uintptr_t luaB_pcallrun = REBASE(0x471F100);
    const uintptr_t luaB_pcally = REBASE(0x471F330);
    const uintptr_t luaB_xpcally = REBASE(0x471F330);
    const uintptr_t luaB_print = REBASE(0x471E520);
    const uintptr_t luaB_rawequal = REBASE(0x471EA10);
    const uintptr_t luaB_rawget = REBASE(0x471EA60);
    const uintptr_t luaB_rawset = REBASE(0x471EAB0);
    const uintptr_t luaB_rawlen = REBASE(0x471EB10);
    const uintptr_t luaB_select = REBASE(0x471ECF0);
    const uintptr_t luaB_setfenv = REBASE(0x471E930);
    const uintptr_t luaB_setmetatable = REBASE(0x471E810);
    const uintptr_t luaB_tonumber = REBASE(0x471E600);
    const uintptr_t luaB_tostring = REBASE(0x471EDA0);
    const uintptr_t luaB_type = REBASE(0x471EBA0);
    const uintptr_t luaB_typeof = REBASE(0x471EBE0);
    const uintptr_t dumpobj = REBASE(0x471CB10);
    const uintptr_t dumpthread = REBASE(0x471D220);
    const uintptr_t enumobj = REBASE(0x471D890);
    const uintptr_t enumtable = REBASE(0x471EBE0);
    const uintptr_t interruptThread = REBASE(0x43CFD90);
    const uintptr_t FireLeftMouseClick = REBASE(0x25F17E0);
    const uintptr_t FireMouseHoverEnter = REBASE(0x25F2D80);
    const uintptr_t FireMouseHoverLeave = REBASE(0x25F2F20);
    const uintptr_t FireRightMouseClick = REBASE(0x25F1980);
    const uintptr_t FireProximityPrompt = REBASE(0x2686F80);
    const uintptr_t GetAppDataInfo = REBASE(0x3BCD800);
    const uintptr_t GetCapabilities = REBASE(0x4498760);
    const uintptr_t IdentityToCaps = REBASE(0x47C7E10);
    const uintptr_t GetIdentityStruct = REBASE(0x9060);
    const uintptr_t GetValues = REBASE(0x1C54020);
    const uintptr_t GetCurrentThreadId = REBASE(0x3065420);
    const uintptr_t NewInstance = REBASE(0xA41B40);
    const uintptr_t ProcessNetworkPacket = REBASE(0x30F3B00); // raknet
    const uintptr_t RaknetSend = REBASE(0x30F3B00); // raknet 
    const uintptr_t IsLegalSendEvent = REBASE(0xA6F750);
    const uintptr_t IsCoreScript = REBASE(0x2C0EAC0);
    const uintptr_t GameId = REBASE(0x2736A80);
    const uintptr_t GameLoaded = REBASE(0x99A460);
    const uintptr_t PushInstance = REBASE(0x1D0A660);
    const uintptr_t VariantCastInt = REBASE(0x1D0A660);
    const uintptr_t luaD_reallocstack = REBASE(0x470BEA0);
    const uintptr_t lua_newstate = REBASE(0x470A770);
    const uintptr_t lua_resetthread = REBASE(0x470B5C0);
    const uintptr_t lua_yield = REBASE(0x470C860);
    const uintptr_t lua_exception = REBASE(0x470CFE0);
    const uintptr_t coroutine_resume = REBASE(0x471F870);
    const uintptr_t cocreate = REBASE(0x471F620);
    const uintptr_t coclose = REBASE(0x471F740);
    const uintptr_t lua_clock = REBASE(0x472AF70);
    const uintptr_t luaT_init = REBASE(0x472BA90);
    const uintptr_t ConnectionDisconnect = REBASE(0x1C51460);
    const uintptr_t ScriptContextResume = REBASE(0x1D22850);
    const uintptr_t HashTable = REBASE(0xBF6160);
    const uintptr_t GetProperty = REBASE(0x1C17560);
    const uintptr_t FireTouchInterestOverlapGuard = REBASE(0x2A222B0);
    const uintptr_t LuaTypenameFromTag = REBASE(0x349F6E0);
    const uintptr_t LuaMethodDispatchTableResolve = REBASE(0x1CD1EB0);
    const uintptr_t GetFFlagIXPRowApplicator = REBASE(0x4AEC8E0);
}
