#pragma once
#include <cstdint>
#include "vmvalues.h"

// version-36a2600cebf1487d
// Luau 0.729.24.7290838
// dumped 8 structs in 1.13s

// notes:
//   - luaE_newthread/lua_newthread: not self-resolved
//   - TString: 6/6 known fields matched
//   - Proto: 36/36 known fields matched -- NEW (not in reference, update luau_reference.py?): unk_field_0
//   - Closure: 12/12 known fields matched
//   - Udata: 4/4 known fields matched
//   - LuaTable: 11/11 known fields matched
//   - lua_State: 22/22 known fields matched
//   - global_State: 40/41 known fields matched -- not found this build: gcmetrics
//   - CallInfo: 8/8 known fields matched
//   - luau-lang/luau github cross-ref: in-memory cache (0s old, ref=master)  [tag '0.729' not found upstream yet -- Roblox is ahead of the latest luau-lang release tag; using master instead]

// resolved function anchors (this build):
//   - luaF_newCclosure @ 0x7ec890
//   - luaF_newLclosure @ 0x7ec920
//   - luaH_new @ 0x7e4c60
//   - lua_newstate @ 0x7da9a0

#define CommonHeader \
    uint8_t memcat; /* 0x0 */ \
    uint8_t tt; /* 0x1 */ \
    uint8_t marked; /* 0x2 */

// anchor: luaS_newlstr
struct TString
{
    CommonHeader; // 0x0
    unsigned char gap_0[0x1]; // 0x3
    uint16_t atomflag; // 0x4
    uint16_t atom; // 0x6
    TString* next; // 0x8
    TSTRING_HASH_ENC<unsigned int> hash; // 0x10
    unsigned int len; // 0x14
    char data; // 0x18
};
// sizeof(TString) == 0x18

// anchor: luaF_newproto
struct Proto
{
    CommonHeader; // 0x0
    unsigned char flags; // 0x3
    unsigned char numparams; // 0x4  [canonical order]
    unsigned char maxstacksize; // 0x5  [canonical order]
    unsigned char nups; // 0x6  [canonical order]
    unsigned char is_vararg; // 0x7  [canonical order]
    PROTO_DEBUGNAME_ENC<TString*> debugname; // 0x8
    void* execdata; // 0x10
    uintptr_t exectarget; // 0x18
    PROTO_LOCVARS_ENC<struct LocVar*> locvars; // 0x20
    GCObject* gclist; // 0x28
    PROTO_ABSLINEINFO_ENC<int*> abslineinfo; // 0x30
    PROTO_TYPEINFO_ENC<unsigned char*> typeinfo; // 0x38
    PROTO_LINEINFO_ENC<unsigned char*> lineinfo; // 0x40
    PROTO_UPVALUES_ENC<TString**> upvalues; // 0x48
    PROTO_USERDATA_ENC<void*> userdata; // 0x50
    PROTO_DEBUGINSN_ENC<unsigned char*> debuginsn; // 0x58
    TValue* k; // 0x60
    unsigned int* code; // 0x68
    Proto** p; // 0x70
    PROTO_SOURCE_ENC<TString*> source; // 0x78
    unsigned int* codeentry; // 0x80
    int sizelineinfo; // 0x88
    int linedefined; // 0x8c  [canonical order]
    int sizecode; // 0x90
    int linegaplog2; // 0x94  [canonical order]
    int bytecodeid; // 0x98  [canonical order]
    int sizek; // 0x9c
    int sizelocvars; // 0xa0
    int sizep; // 0xa4
    int sizetypeinfo; // 0xa8
    int sizeupvalues; // 0xac
    struct FeedbackVectorSlot* feedbackvec; // 0xb0
    int feedbackvecsize; // 0xb8
    int funid; // 0xbc
    Proto* optimized; // 0xc0
    Proto* deoptimized; // 0xc8
    void* unk_field_0; // 0xd0  (zero-inited store found; field identity not yet known -- check newer luau-lang/Roblox sources)
};
// sizeof(Proto) == 0xd8

// anchor: luaF_newLclosure/luaF_newCclosure
struct Closure
{
    CommonHeader; // 0x0
    unsigned char isC; // 0x3  [canonical order]
    unsigned char nupvalues; // 0x4  [canonical order]
    unsigned char stacksize; // 0x5  [canonical order]
    unsigned char preload; // 0x6  [canonical order]
    GCObject* gclist; // 0x8
    struct LuaTable* env; // 0x10
    lua_CFunction f; // 0x18  [union.c]
    Proto* p; // 0x18  [union.l]
    CLOSURE_CONT_ENC<lua_Continuation> cont; // 0x20  [union.c]
    TValue uprefs[1]; // 0x20  [union.l]
    CLOSURE_DEBUGNAME_ENC<const char*> debugname; // 0x28  [union.c]
    TValue upvals[1]; // 0x30  [union.c]
};
// sizeof(Closure) == 0x40

// anchor: udata_alloc
struct Udata
{
    CommonHeader; // 0x0
    unsigned char tag; // 0x3
    int len; // 0x4
    UDATA_META_ENC<LuaTable*> metatable; // 0x8
    char data[1]; // 0x10
};
// sizeof(Udata) == 0x11

// anchor: luaH_new
struct LuaTable
{
    CommonHeader; // 0x0
    unsigned char lsizenode; // 0x3  (luau_reference position; no direct evidence this build)  [canonical order]
    unsigned char readonly; // 0x4  [canonical order]
    unsigned char tmcache; // 0x5  [canonical order]
    unsigned char nodemask8; // 0x6  [canonical order]
    unsigned char safeenv; // 0x7  [canonical order]
    int sizearray; // 0x8
    int lastfree; // 0xc  (union.aboundary)
    LuaTable* metatable; // 0x10
    GCObject* gclist; // 0x18  (GC-only field, never touched at allocation; positional elimination)  [canonical order]
    TValue* array; // 0x20
    LuaNode* node; // 0x28
};
// sizeof(LuaTable) == 0x30

// anchor: canonical (unencrypted, non-GC)  [canonical]
struct CallInfo
{
    TValue* base; // 0x0  [canonical order]
    TValue* func; // 0x8  [canonical order]
    TValue* top; // 0x10  [canonical order]
    Proto* p; // 0x18  [canonical order]
    const Instruction* savedpc; // 0x20  [union]
    int errfunc; // 0x20  [union]
    int nresults; // 0x28  [canonical order]
    unsigned int flags; // 0x2c  [canonical order]
};
// sizeof(CallInfo) == 0x30

// anchor: lua_newstate
struct lua_State
{
    CommonHeader; // 0x0
    unsigned char status; // 0x3
    unsigned char activememcat; // 0x4
    bool singlestep; // 0x5
    bool isactive; // 0x6
    TValue* stack; // 0x8  [canonical order]
    global_State* global; // 0x10
    TValue* stack_last; // 0x18  (luau_reference position; no direct evidence this build)  [canonical order]
    CallInfo* ci; // 0x20  [canonical order]
    TValue* base; // 0x28  (luau_reference position; no direct evidence this build)  [canonical order]
    TValue* top; // 0x30  (luau_reference position; no direct evidence this build)  [canonical order]
    struct RobloxExtraSpace* userdata; // 0x38  [canonical order]
    LuaTable* gt; // 0x40  [canonical order]
    LSTATE_STACKSIZE_ENC<int> stacksize; // 0x48
    int size_ci; // 0x4c  [canonical order]
    UpVal* openupval; // 0x50  [canonical order]
    CallInfo* end_ci; // 0x58  (luau_reference position; no direct evidence this build)  [canonical order]
    CallInfo* base_ci; // 0x60  [canonical order]
    GCObject* gclist; // 0x68  (luau_reference position; no direct evidence this build)  [canonical order]
    TString* namecall; // 0x70  [canonical order]
    unsigned short nCcalls; // 0x78  [canonical order]
    unsigned short baseCcalls; // 0x7a  [canonical order]
    unsigned int cachedslot; // 0x7c  [canonical order]
};
// sizeof(lua_State) == 0x80

// anchor: lua_newstate
struct global_State
{
    struct stringtable strt; // 0x0
    lua_Alloc frealloc; // 0x10
    void* ud; // 0x18
    int gcstepsize; // 0x20  [canonical order]
    int gcstepmul; // 0x24  [canonical order]
    int gcgoal; // 0x28  [canonical order]
    unsigned char gap_0[0x4]; // 0x2c
    size_t GCthreshold; // 0x30
    size_t totalbytes; // 0x38
    unsigned char currentwhite; // 0x40
    unsigned char gcstate; // 0x41
    unsigned char gap_1[0x6]; // 0x42
    GCObject* weak; // 0x48  [canonical order]
    GCObject* grayagain; // 0x50  [canonical order]
    GCObject* gray; // 0x58  [canonical order]
    lua_Page* sweepgcopage; // 0x60
    struct lua_Page* freegcopages[40]; // 0x68  (loop; projected offset)  [canonical order]
    UpVal uvhead; // 0x1a8  (loop; projected offset)  [canonical order]
    struct lua_Page* freepages[40]; // 0x1d0  (loop; projected offset)  [canonical order]
    lua_State* mainthread; // 0x310
    lua_Page* allgcopages; // 0x318
    struct lua_Page* allpages; // 0x320
    LuaTable* mt[14]; // 0x328  (loop; projected offset)  [canonical order]
    TString* tmname[21]; // 0x398  (loop, set by luaT_init not lua_newstate; projected offset)  [canonical order]
    TString* ttname[14]; // 0x440  (loop, set by luaT_init not lua_newstate; projected offset)  [canonical order]
    TValue pseudotemp; // 0x4b0  [canonical order]
    TValue registry; // 0x4c0  [canonical order]
    registryfree_t registryfree; // 0x4d0  [canonical order]
    unsigned char gap_2[0x4]; // 0x4d4
    struct lua_jmpbuf* errorjmp; // 0x4d8
    unsigned __int64 rngstate; // 0x4e0
    unsigned __int64 ptrenckey[4]; // 0x4e8
    lua_Callbacks cb; // 0x508
    lua_ExecutionCallbacks ecb; // 0x558
    unsigned char ecbdata[512]; // 0x5a0
    lua_UdataDirectAccessData udatadirect[130]; // 0x7a0  (loop; not individually resolved)  [canonical order]
    size_t memcatbytes[256]; // 0x2c30  (element [0] only; rest is a real loop)  [canonical order]
    unsigned char gap_3[0x7f8]; // 0x2c38
    void* udatagc[128]; // 0x3430  (loop; projected offset)  [canonical order]
    LuaTable* udatamt[128]; // 0x3830  (loop; projected offset)  [canonical order]
    TString* lightuserdataname[128]; // 0x3c30  [canonical order]
    struct LuaTable* udatadirectfields[130]; // 0x4030  (loop; projected offset)  [canonical order]
    struct GCStats gcstats; // 0x4440  (opaque)  [canonical order]
    unsigned int lastprotoid; // 0x44f8
    unsigned char gap_4[0x1d4]; // 0x44fc  (luau_reference has gcmetrics here (0x1b8 bytes); off by 0x1c, not applied)
};
// sizeof(global_State) == 0x46d0

