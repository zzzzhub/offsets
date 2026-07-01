#pragma once
#include <cstdint>
#include "vmvalues.h"

// BEST STRUCT DUMPER
// version-5cf2272675e145f5
// Luau 0.728.0.7280895
// dumped 8 structs in 14.32s

#define CommonHeader \
    uint8_t marked; /* 0x0 */ \
    uint8_t tt; /* 0x1 */ \
    uint8_t memcat; /* 0x2 */

// anchor: luaS_newlstr
struct TString
{
    CommonHeader; // 0x0
    unsigned char gap_0[0x1]; // 0x3
    uint16_t atomflag; // 0x4
    uint16_t atom; // 0x6
    unsigned char gap_1[0x8]; // 0x8
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
    unsigned char maxstacksize; // 0x4
    unsigned char is_vararg; // 0x5
    unsigned char numparams; // 0x6
    unsigned char nups; // 0x7
    GCObject* gclist; // 0x8
    Proto** p; // 0x10
    PROTO_TYPEINFO_ENC<unsigned char*> typeinfo; // 0x18
    PROTO_UPVALUES_ENC<TString**> upvalues; // 0x20
    unsigned int* codeentry; // 0x28  (needs-verify)
    PROTO_LOCVARS_ENC<struct LocVar*> locvars; // 0x30
    PROTO_DEBUGNAME_ENC<TString*> debugname; // 0x38
    TValue* k; // 0x40
    unsigned int* code; // 0x48
    PROTO_DEBUGINSN_ENC<unsigned char*> debuginsn; // 0x50
    void* execdata; // 0x58
    uintptr_t exectarget; // 0x60
    PROTO_SOURCE_ENC<TString*> source; // 0x68
    PROTO_USERDATA_ENC<void*> userdata; // 0x70  (needs-verify)
    PROTO_ABSLINEINFO_ENC<int*> abslineinfo; // 0x78
    PROTO_LINEINFO_ENC<unsigned char*> lineinfo; // 0x80
    int sizelineinfo; // 0x88
    int sizetypeinfo; // 0x8c
    int sizelocvars; // 0x90
    int sizek; // 0x94
    int linedefined; // 0x98  [canonical order]
    int sizecode; // 0x9c
    unsigned char gap_0[0x4]; // 0xa0
    int sizeupvalues; // 0xa4
    int linegaplog2; // 0xa8  [canonical order]
    int sizep; // 0xac
    struct FeedbackVectorSlot* feedbackvec; // 0xb0
    int feedbackvecsize; // 0xb8
    int funid; // 0xbc
    Proto* optimized; // 0xc0
    Proto* deoptimized; // 0xc8
};
// sizeof(Proto) == 0xd0

// anchor: luaF_newLclosure/luaF_newCclosure
struct Closure
{
    CommonHeader; // 0x0
    unsigned char isC; // 0x3
    unsigned char stacksize; // 0x4
    unsigned char nupvalues; // 0x5
    unsigned char preload; // 0x6
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
    unsigned char safeenv; // 0x4
    unsigned char nodemask8; // 0x5
    unsigned char tmcache; // 0x6
    unsigned char readonly; // 0x7
    int sizearray; // 0x8
    int lastfree; // 0xc  (union.aboundary)
    LuaNode* node; // 0x10
    TValue* array; // 0x18
    LuaTable* metatable; // 0x20
    GCObject* gclist; // 0x28
};
// sizeof(LuaTable) == 0x30

// anchor: canonical (unencrypted, non-GC)  [canonical]
struct CallInfo
{
    TValue* base; // 0x0  [canonical order]
    TValue* top; // 0x8  [canonical order]
    Proto* p; // 0x10  [canonical order]
    TValue* func; // 0x18  [canonical order]
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
    bool isactive; // 0x5
    bool singlestep; // 0x6
    unsigned char gap_0[0x8]; // 0x8
    LSTATE_STACKSIZE_ENC<int> stacksize; // 0x10
    int size_ci; // 0x14
    TString* namecall; // 0x18
    unsigned short nCcalls; // 0x20
    unsigned short baseCcalls; // 0x22
    unsigned int cachedslot; // 0x24
    struct RobloxExtraSpace* userdata; // 0x28
    unsigned char gap_1[0x8]; // 0x30
    global_State* global; // 0x38
    unsigned char gap_2[0x8]; // 0x40
    TValue* stack; // 0x48
    CallInfo* ci; // 0x50
    unsigned char gap_3[0x8]; // 0x58
    UpVal* openupval; // 0x60
    LuaTable* gt; // 0x68
    unsigned char gap_4[0x8]; // 0x70
    CallInfo* base_ci; // 0x78
};
// sizeof(lua_State) == 0x80

// anchor: lua_newstate
struct global_State
{
    unsigned char gap_0[0x4]; // 0x0
    int gcstepmul; // 0x4
    int gcgoal; // 0x8
    unsigned char currentwhite; // 0xc
    unsigned char gcstate; // 0xd
    unsigned char gap_1[0x2]; // 0xe
    size_t GCthreshold; // 0x10
    size_t totalbytes; // 0x18
    GCObject* weak; // 0x20
    GCObject* grayagain; // 0x28
    GCObject* gray; // 0x30
    lua_Alloc frealloc; // 0x38
    void* ud; // 0x40
    unsigned char gap_2[0x10]; // 0x48
    lua_Page* sweepgcopage; // 0x58
    lua_State* mainthread; // 0x60
    struct lua_Page* freegcopages[40]; // 0x68  [canonical order]
    unsigned char gap_3[0x290]; // 0x1a8
    LuaTable* mt[14]; // 0x438  [canonical order]
    unsigned char gap_4[0xf8]; // 0x4a8
    unsigned char ecbdata[512]; // 0x5a0
    unsigned char gap_5[0x3490]; // 0x7a0
    LuaTable* udatamt[128]; // 0x3c30  [canonical order]
};
// sizeof(global_State) == 0x4030

