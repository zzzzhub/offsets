#pragma once
#include <cstdint>
#include "vmvalues.h"

// version-76173e47a79145c7
// 3.91s

inline constexpr std::uintptr_t PROTO_DEBUGNAME_OFF = 0x18;
inline constexpr std::uintptr_t PROTO_DEBUGINSN_OFF = 0x20;
inline constexpr std::uintptr_t PROTO_UPVALUES_OFF = 0x28;
inline constexpr std::uintptr_t PROTO_ABSLINEINFO_OFF = 0x30;
inline constexpr std::uintptr_t PROTO_USERDATA_OFF = 0x48;
inline constexpr std::uintptr_t PROTO_LINEINFO_OFF = 0x50;
inline constexpr std::uintptr_t PROTO_LOCVARS_OFF = 0x58;
inline constexpr std::uintptr_t PROTO_TYPEINFO_OFF = 0x60;
inline constexpr std::uintptr_t PROTO_SOURCE_OFF = 0x68;
inline constexpr std::uintptr_t CLOSURE_DEBUGNAME_OFF = 0x20;
inline constexpr std::uintptr_t CLOSURE_CONT_OFF = 0x28;
inline constexpr std::uintptr_t UDATA_META_OFF = 0x8;
inline constexpr std::uintptr_t TSTRING_HASH_OFF = 0x10;
inline constexpr std::uintptr_t LSTATE_STACKSIZE_OFF = 0x78;

#define PROTO_DEBUGNAME_ENC VMValue1
#define PROTO_DEBUGINSN_ENC VMValue4
#define PROTO_UPVALUES_ENC VMValue1
#define PROTO_ABSLINEINFO_ENC VMValue3
#define PROTO_USERDATA_ENC VMValue4
#define PROTO_LINEINFO_ENC VMValue2
#define PROTO_LOCVARS_ENC VMValue3
#define PROTO_TYPEINFO_ENC VMValue4
#define PROTO_SOURCE_ENC VMValue1
#define CLOSURE_DEBUGNAME_ENC VMValue1
#define CLOSURE_CONT_ENC VMValue3
#define UDATA_META_ENC VMValue3
#define TSTRING_HASH_ENC VMValue3
#define LSTATE_STACKSIZE_ENC VMValue3

struct Proto
{
    uint8_t _pad_0[0x3];
    uint8_t maxstacksize;
    uint8_t numparams;
    uint8_t flags;
    uint8_t is_vararg;
    uint8_t nups;
    const Instruction* codeentry;
    struct Proto** p;
    PROTO_DEBUGNAME_ENC<TString*> debugname;
    PROTO_DEBUGINSN_ENC<uint8_t*> debuginsn;
    PROTO_UPVALUES_ENC<TString**> upvalues;
    PROTO_ABSLINEINFO_ENC<int*> abslineinfo;
    void* execdata;
    uintptr_t exectarget;
    PROTO_USERDATA_ENC<void*> userdata;
    PROTO_LINEINFO_ENC<uint8_t*> lineinfo;
    PROTO_LOCVARS_ENC<struct LocVar*> locvars;
    PROTO_TYPEINFO_ENC<uint8_t*> typeinfo;
    PROTO_SOURCE_ENC<TString*> source;
    TValue* k;
    Instruction* code;
    GCObject* gclist;
    int sizek;
    int sizeupvalues;
    int sizep;
    int linedefined;
    int bytecodeid;
    int sizetypeinfo;
    int linegaplog2;
    int sizelineinfo;
    int sizecode;
    int sizelocvars;
    FeedbackVectorSlot* feedbackvec;
    uint32_t feedbackvecsize;
    uint32_t funid;
};

struct Closure
{
    uint8_t _pad_0[0x20];
    CLOSURE_DEBUGNAME_ENC<const char*> debugname;
    CLOSURE_CONT_ENC<lua_Continuation> cont;
};

struct lua_State
{
    uint8_t _pad_0[0x78];
    LSTATE_STACKSIZE_ENC<int> stacksize;
};

struct TString
{
    uint8_t _pad_0[0x10];
    TSTRING_HASH_ENC<unsigned int> hash;
};

struct Udata
{
    uint8_t _pad_0[0x8];
    UDATA_META_ENC<struct LuaTable*> metatable;
};
