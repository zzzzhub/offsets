#pragma once
#include <cstdint>
#include "vmvalues.h"

// BEST STRUCT DUMPER
// version-1a951716f19e4638
// Luau 0.727.0.7271199
// dumped 6 structs in 0.15s

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
    void* execdata; // 0x8
    uintptr_t exectarget; // 0x10
    GCObject* gclist; // 0x18
    Proto** p; // 0x20
    unsigned int* codeentry; // 0x28  (needs-verify)
    PROTO_ABSLINEINFO_ENC<int*> abslineinfo; // 0x30
    PROTO_UPVALUES_ENC<TString**> upvalues; // 0x38
    PROTO_SOURCE_ENC<TString*> source; // 0x40
    PROTO_TYPEINFO_ENC<unsigned char*> typeinfo; // 0x48
    PROTO_DEBUGINSN_ENC<unsigned char*> debuginsn; // 0x50
    PROTO_LINEINFO_ENC<unsigned char*> lineinfo; // 0x58
    TValue* k; // 0x60
    unsigned int* code; // 0x68
    PROTO_LOCVARS_ENC<struct LocVar*> locvars; // 0x70
    PROTO_USERDATA_ENC<void*> userdata; // 0x78  (needs-verify)
    PROTO_DEBUGNAME_ENC<TString*> debugname; // 0x80
    int sizetypeinfo; // 0x88
    int sizelineinfo; // 0x8c
    int sizep; // 0x90
    int sizecode; // 0x94
    int linedefined; // 0x98  [canonical order]
    int sizelocvars; // 0x9c
    unsigned char gap_0[0x4]; // 0xa0
    int sizek; // 0xa4
    int sizeupvalues; // 0xa8
    struct FeedbackVectorSlot* feedbackvec; // 0xac
    int feedbackvecsize; // 0xb0
    int funid; // 0xb4
    Proto* optimized; // 0xb8
    Proto* deoptimized; // 0xc0
    int linegaplog2; // 0xc8  [canonical order]
    int bytecodeid; // 0xcc  [canonical order]
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
    LuaNode* node; // 0x18
    TValue* array; // 0x20
    LuaTable* metatable; // 0x28
    GCObject* gclist; // 0x30
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

