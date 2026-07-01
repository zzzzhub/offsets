#pragma once
#include <cstdint>
#include "vmvalues.h"

// BEST STRUCT DUMPER
// version-8884371d30284041
// Luau 0.726.0.7261140
// dumped 5 structs in 0.16s

// notes:
//   - Closure: not resolved on this binary

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
    PROTO_UPVALUES_ENC<TString**> upvalues; // 0x8
    PROTO_SOURCE_ENC<TString*> source; // 0x10
    PROTO_USERDATA_ENC<void*> userdata; // 0x18  (needs-verify)
    PROTO_DEBUGNAME_ENC<TString*> debugname; // 0x20
    PROTO_DEBUGINSN_ENC<unsigned char*> debuginsn; // 0x28
    PROTO_TYPEINFO_ENC<unsigned char*> typeinfo; // 0x30
    TValue* k; // 0x38
    unsigned int* code; // 0x40
    int linedefined; // 0x48  [canonical order]
    int linegaplog2; // 0x4c  [canonical order]
    PROTO_LINEINFO_ENC<unsigned char*> lineinfo; // 0x50
    Proto** p; // 0x58
    PROTO_ABSLINEINFO_ENC<int*> abslineinfo; // 0x60
    int bytecodeid; // 0x68  [canonical order]
    int funid; // 0x6c  [canonical order]
    void* execdata; // 0x70
    uintptr_t exectarget; // 0x78
    PROTO_LOCVARS_ENC<struct LocVar*> locvars; // 0x80
    int sizetypeinfo; // 0x88
    unsigned char gap_0[0x4]; // 0x8c
    int sizelocvars; // 0x90
    int sizeupvalues; // 0x94
    int sizelineinfo; // 0x98
    int sizecode; // 0x9c
    int sizep; // 0xa0
    unsigned char gap_1[0x4]; // 0xa4
    int sizek; // 0xa8
    struct FeedbackVectorSlot* feedbackvec; // 0xac
    int feedbackvecsize; // 0xb0
    int funid; // 0xb4
    Proto* optimized; // 0xb8
};
// sizeof(Proto) == 0xc0

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
    int sizearray; // 0x8
    int lastfree; // 0xc  (union.aboundary)
    LuaNode* node; // 0x28
    TValue* array; // 0x30
    LuaTable* metatable; // 0x38
    GCObject* gclist; // 0x40
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

