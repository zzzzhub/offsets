// check out my github or sum - https://github.com/zzzzhub/offsets
// rblx version: version-9377ee10133e4be3
// dumped by @credential_ and @2qp0
// keep going kingggg
// full enc dump if something is invalid please let me know <3

#pragma once
#include <cstdint>
#include <cstring>

template <typename T>
struct unwrap_VMValue {
    using type = T;
};

template <typename T>
class VMValue0 {
public:
    operator const T() const { return storage; }
    void operator=(const T& value) { storage = value; }
    const T operator->() const { return operator const T(); }
    T get() const { return operator const T(); }
    void set(const T& value) { operator=(value); }

private:
    T storage;
};

template <typename T>
class VMValue1 {
public:
    operator const T() const { return (T)((uintptr_t)storage - (uintptr_t)this); }
    void operator=(const T& value) { storage = (T)((uintptr_t)value + (uintptr_t)this); }
    const T operator->() const { return operator const T(); }
    T get() const { return operator const T(); }
    void set(const T& value) { operator=(value); }

private:
    T storage;
};

template <typename T>
class VMValue2 {
public:
    operator const T() const { return (T)((uintptr_t)this - (uintptr_t)storage); }
    void operator=(const T& value) { storage = (T)((uintptr_t)this - (uintptr_t)value); }
    const T operator->() const { return operator const T(); }
    T get() const { return operator const T(); }
    void set(const T& value) { operator=(value); }

private:
    T storage;
};

template <typename T>
class VMValue3 {
public:
    operator const T() const { return (T)((uintptr_t)this ^ (uintptr_t)storage); }
    void operator=(const T& value) { storage = (T)((uintptr_t)value ^ (uintptr_t)this); }
    const T operator->() const { return operator const T(); }
    T get() const { return operator const T(); }
    void set(const T& value) { operator=(value); }

private:
    T storage;
};

template <typename T>
class VMValue4 {
public:
    operator const T() const { return (T)((uintptr_t)this + (uintptr_t)storage); }
    void operator=(const T& value) { storage = (T)((uintptr_t)value - (uintptr_t)this); }
    const T operator->() const { return operator const T(); }
    T get() const { return operator const T(); }
    void set(const T& value) { operator=(value); }

private:
    T storage;
};

namespace Encryptions {
    constexpr uint64_t identity_xor = 0x0;
    constexpr uint64_t capability_xor = 0x0;
    constexpr uint64_t extraspace_xor = 0x0;
}

// vmvals yummy <3
#define PROTO_LINEINFO_ENC VMValue2
#define PROTO_LOCVARS_ENC VMValue2
#define PROTO_UPVALUES_ENC VMValue4
#define PROTO_DEBUGINSN_ENC VMValue3
#define PROTO_TYPEINFO_ENC VMValue1
#define PROTO_SOURCE_ENC VMValue4
#define PROTO_DEBUGNAME_ENC VMValue4
#define PROTO_ABSLINEINFO_ENC VMValue4
#define PROTO_USERDATA_ENC VMValue4

#define LSTATE_STACKSIZE_ENC VMValue2

#define CLOSURE_CONT_ENC VMValue3
#define CLOSURE_DEBUGNAME_ENC VMValue4

#define UDATA_META_ENC VMValue4

#define TSTRING_HASH_ENC VMValue3


struct CommonHeader {
    uint8_t tt;
    uint8_t marked;
    uint8_t memcat;
};

struct TValue {
    union {
        void* gc;
        void* p;
        double n;
        int b;
        int64_t l;
        float v[2];
    } value;
    int extra[1];
    int tt;
};

using StkId = TValue*;

struct TString {
    CommonHeader header;
    uint8_t _unused;
    int16_t flag;
    int16_t atom;
    TString* next;
    unsigned int hash; // TSTRING_HASH_ENC at +0x10
    unsigned int len;
    char data[1];
};

struct RobloxExtraSpace {
    RobloxExtraSpace* next;
    uintptr_t _container;
    RobloxExtraSpace* prev;
    void* shared;
    char __pad[0x40];
    uintptr_t identity; // 0x60
    char __pad2[0x10];
    uint64_t capabilities; // 0x78
};

struct Closure {
    CommonHeader header;
    uint8_t stacksize;
    uint8_t preload;
    uint8_t isC;
    uint8_t nups;
    void* gclist;
    struct LuaTable* env;
    union {
        struct {
            void* f; // +0x08
            uintptr_t enc_cont; // +0x28 
            uintptr_t enc_debugname; // +0x30
            TValue upvals[1];
        } c;
        struct {
            struct Proto* p;
            TValue uprefs[1];
        } l;
    };
};

struct lua_State {
    CommonHeader header;
    uint8_t status; // +0x03
    uint8_t activememcat; // +0x04
    bool singlestep; // +0x05
    bool isactive; // +0x06
    char __pad0[0x1];
    void* ci; // +0x08
    void* top; // +0x10
    global_State* global; // +0x18
    void* stack; // +0x20
    void* ci_ptr; // +0x28
    TValue* base_ptr; // +0x30
    void* namecall; // +0x38
    void* openupval; // +0x40
    char __pad1[0x10];
    void* gt; // +0x50
    char __pad2[0x10];
    void* stack_last; // +0x68
    void* stack_begin; // +0x70
    int stacksize; // +0x78
    int stacksize_extra; // +0x7C
};

struct global_State {
    char __pad0[0x8];
    size_t totalbytes; // +0x08
    void* frealloc; // +0x10
    void* ud; // +0x18
    char __pad1[0x30];
    int strt_nuse; // +0x3C (60)
    TString** strt_hash; // +0x40 (64)
    int strt_size; // +0x38 (56) — mask (size-1)
    char __pad2[0x11];
    uint8_t gcstate; // +0x55 (85)
    char __pad3[0x2A];
    lua_State* mainthread; // +0x80 
    char __pad4[0x10];
    lua_Page* freepages[1]; // +0x90
    char __pad5[0x280];
    lua_Page* allgcopages; // +0x318
    char __pad6[0x2920];
    size_t memcatbytes[1]; // +0x2C40
};

struct lua_Page {
    lua_Page* prev; // +0x10
    lua_Page* next; // +0x18
    char __pad0[0x14];
    int blockSize; // +0x24 (36)
    void* freeList; // +0x28 (40)
    int freeNext; // +0x30 (48)
    int busyBlocks; // +0x34 (52)
    char data[1]; // +0x40 (64)
};

struct LocVar {
    TString* name;
    int startpc;
    int endpc;
    uint8_t reg;
};

struct Proto {
    CommonHeader header;
    uint8_t flags; // +0x03
    uint8_t numparams; // +0x04
    uint8_t maxstacksize; // +0x05
    uint8_t is_vararg; // +0x06
    uint8_t nups; // +0x07
    uintptr_t enc_abslineinfo; // +0x08
    uint8_t* lineinfo; // +0x10
    uint8_t* typeinfo; // +0x18
    uintptr_t enc_debugname; // +0x20
    void* debuginsn; // +0x30
    TString** upvalues; // +0x38
    LocVar* locvars; // +0x40
    struct Proto** p; // +0x48
    uintptr_t enc_source; // +0x50
    TValue* k; // +0x60
    void* code; // +0x68
    uintptr_t enc_userdata; // +0x70
    void* execdata; // +0x78
    void* codeentry; // +0x80
    int sizeupvalues; // +0x88
    int sizetypeinfo; // +0x8C
    int sizelineinfo; // +0x90
    int sizek; // +0x94
    int sizecode; // +0x98
    int sizep; // +0xA0
    int sizelocvars; // +0xA8
    int sizecode_dbg; // +0xAC
    void* feedbackvec; // +0xB0
    unsigned int feedbackvecsize; // +0xB8
    char __proto_pad[0x4]; // sizeof(Proto) == 192
};

static_assert(sizeof(Proto) == 192, "Proto size"); // proto size <3

