#pragma once
#include <cstdint>
#include "vmvalues.h"

// version-ddf02245bdbb428c
// Luau 0.730.23.7300792
// dumped 8 structs in 7.36s

// notes:
//   - TString: 6/6 known fields matched
//   - Proto: 34/36 known fields matched -- not found this build: execdata, exectarget -- NEW (not in reference, update luau_reference.py?): unk_field_0, unk_field_1
//   - Closure: 12/12 known fields matched
//   - Udata: 4/4 known fields matched
//   - LuaTable: 11/11 known fields matched
//   - lua_State: 17/22 known fields matched -- not found this build: base, end_ci, gclist, stack_last, top
//   - global_State: 27/41 known fields matched -- not found this build: cb, ecb, freegcopages, freepages, gcgoal, gcmetrics, gcstate, gcstepmul, gcstepsize, gray, grayagain, sweepgcopage, uvhead, weak
//   - CallInfo: 8/8 known fields matched
//   - Proto vs luau-lang github (master): upstream has fields luau_reference.py doesn't know about yet -- cost
//   - luau-lang/luau github cross-ref: in-memory cache (0s old, ref=0.730)

// resolved function anchors (this build):
//   - luaE_newthread @ 0x478d450
//   - luaF_newCclosure @ 0x47ba690
//   - luaF_newLclosure @ 0x47ba720
//   - luaH_new @ 0x47b31f0
//   - lua_newstate @ 0x478d6f0
//   - lua_newthread @ 0x478a2b0

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
    PROTO_UPVALUES_ENC<TString**> upvalues; // 0x8
    PROTO_SOURCE_ENC<TString*> source; // 0x10
    GCObject* gclist; // 0x18
    unsigned int* codeentry; // 0x20  (needs-verify)
    TValue* k; // 0x28
    unsigned int* code; // 0x30
    PROTO_ABSLINEINFO_ENC<int*> abslineinfo; // 0x38
    PROTO_LINEINFO_ENC<unsigned char*> lineinfo; // 0x40
    PROTO_DEBUGNAME_ENC<TString*> debugname; // 0x48
    int linedefined; // 0x50  [canonical order]
    int linegaplog2; // 0x54  [canonical order]
    PROTO_DEBUGINSN_ENC<unsigned char*> debuginsn; // 0x58
    PROTO_LOCVARS_ENC<struct LocVar*> locvars; // 0x60
    Proto** p; // 0x68
    PROTO_USERDATA_ENC<void*> userdata; // 0x70  (needs-verify)
    PROTO_TYPEINFO_ENC<unsigned char*> typeinfo; // 0x78
    unsigned int* codeentry; // 0x80
    int sizecode; // 0x88
    int sizeupvalues; // 0x8c
    int sizelineinfo; // 0x90
    int sizek; // 0x94
    int sizetypeinfo; // 0x98
    int bytecodeid; // 0x9c  [canonical order]
    unsigned char gap_0[0x4]; // 0xa0
    unsigned int unk_field_0; // 0xa4  (zero-inited store found; field identity not yet known -- check newer luau-lang/Roblox sources)
    int sizelocvars; // 0xa8
    int sizep; // 0xac
    struct FeedbackVectorSlot* feedbackvec; // 0xb0
    int feedbackvecsize; // 0xb8
    int funid; // 0xbc
    Proto* optimized; // 0xc0
    Proto* deoptimized; // 0xc8
    void* unk_field_1; // 0xd0  (zero-inited store found; field identity not yet known -- check newer luau-lang/Roblox sources)
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
    unsigned char lsizenode; // 0x3
    unsigned char readonly; // 0x4  [canonical order]
    unsigned char tmcache; // 0x5  [canonical order]
    unsigned char nodemask8; // 0x6  [canonical order]
    unsigned char safeenv; // 0x7  [canonical order]
    int sizearray; // 0x8
    int lastfree; // 0xc  (union.aboundary)
    LuaNode* node; // 0x10
    LuaTable* metatable; // 0x18
    TValue* array; // 0x20
    GCObject* gclist; // 0x28  (GC-only field, never touched at allocation; positional elimination)  [canonical order]
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
    unsigned char gap_0[0x8]; // 0x10
    CallInfo* ci; // 0x18  [canonical order]
    struct RobloxExtraSpace* userdata; // 0x20  [canonical order]
    LSTATE_STACKSIZE_ENC<int> stacksize; // 0x28
    int size_ci; // 0x2c  [canonical order]
    LuaTable* gt; // 0x30  [canonical order]
    unsigned char gap_1[0x8]; // 0x38
    UpVal* openupval; // 0x40  [canonical order]
    unsigned char gap_2[0x8]; // 0x48
    CallInfo* base_ci; // 0x50  [canonical order]
    TString* namecall; // 0x58  [canonical order]
    global_State* global; // 0x60
    unsigned char gap_3[0x10]; // 0x68  (luau_reference has ci+stack_last+stack+end_ci+base_ci+stacksize+size_ci here (0x30 bytes); off by 0x20, not applied)
    unsigned short nCcalls; // 0x78  [canonical order]
    unsigned short baseCcalls; // 0x7a  [canonical order]
    unsigned int cachedslot; // 0x7c  [canonical order]
};
// sizeof(lua_State) == 0x80

// anchor: lua_newstate
struct global_State
{
    unsigned char gap_0[0x10]; // 0x0  (luau_reference has strt+frealloc+ud+currentwhite+gcstate+gray+grayagain+weak here (0x3a bytes); off by 0x2a, not applied)
    size_t GCthreshold; // 0x10
    size_t totalbytes; // 0x18
    unsigned char gap_1[0x18]; // 0x20
    struct stringtable strt; // 0x38
    unsigned char currentwhite; // 0x45
    lua_Alloc frealloc; // 0x48
    void* ud; // 0x50
    unsigned char gap_2[0x8]; // 0x58  (luau_reference has currentwhite+gcstate+gray+grayagain+weak+GCthreshold+totalbytes+gcgoal+gcstepmul+gcstepsize+freepages+freegcopages+allpages+allgcopages+sweepgcopage here (0x2ce bytes); off by 0x2c6, not applied)
    lua_State* mainthread; // 0x60
    lua_Page* allgcopages; // 0x68
    struct lua_Page* allpages; // 0x70
    LuaTable* mt[14]; // 0x78  (loop; projected offset)  [canonical order]
    TString* ttname[14]; // 0xe8  (loop, set by luaT_init not lua_newstate; projected offset)  [canonical order]
    TString* tmname[21]; // 0x158  (loop, set by luaT_init not lua_newstate; projected offset)  [canonical order]
    unsigned char gap_3[0x2f0]; // 0x200
    TValue pseudotemp; // 0x4f0  [canonical order]
    TValue registry; // 0x500  [canonical order]
    registryfree_t registryfree; // 0x510  [canonical order]
    unsigned char gap_4[0x4]; // 0x514
    struct lua_jmpbuf* errorjmp; // 0x518
    unsigned __int64 rngstate; // 0x520
    unsigned __int64 ptrenckey[4]; // 0x528
    unsigned char gap_5[0x58]; // 0x548  (luau_reference has cb+ecb here (0xa0 bytes); off by 0x48, not applied)
    unsigned char ecbdata[512]; // 0x5a0
    lua_UdataDirectAccessData udatadirect[130]; // 0x7a0  (loop; not individually resolved)  [canonical order]
    size_t memcatbytes[256]; // 0x2c30  (element [0] only; rest is a real loop)  [canonical order]
    unsigned char gap_6[0x7f8]; // 0x2c38
    void* udatagc[128]; // 0x3430  (loop; projected offset)  [canonical order]
    LuaTable* udatamt[128]; // 0x3830  (loop; projected offset)  [canonical order]
    TString* lightuserdataname[128]; // 0x3c30  [canonical order]
    struct LuaTable* udatadirectfields[130]; // 0x4030  (loop; projected offset)  [canonical order]
    struct GCStats gcstats; // 0x4440  (opaque)  [canonical order]
    unsigned int lastprotoid; // 0x44f8
    unsigned char gap_7[0x1d4]; // 0x44fc  (luau_reference has gcmetrics here (0x1b8 bytes); off by 0x1c, not applied)
};
// sizeof(global_State) == 0x46d0

