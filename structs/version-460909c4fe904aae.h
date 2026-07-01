#pragma once

#include <cstdint>
#include "vmvalues.h"

struct Closure {
    uint8_t marked;       // 0x00
    uint8_t memcat;       // 0x01
    uint8_t tt;           // 0x02  (== 8)
    uint8_t isC;          // 0x03
    uint8_t nupvalues;    // 0x04
    uint8_t stacksize;    // 0x05
    uint8_t preload;      // 0x06
    uint8_t _pad0;        // 0x07

    uint64_t usage;       // 0x08
    GCObject* gclist;     // 0x10
    struct LuaTable* env; // 0x18

    union {
        struct {
            lua_CFunction f;                              // 0x20
            CLOSURE_CONT_ENC<lua_Continuation> cont;      // 0x28
            CLOSURE_DEBUGNAME_ENC<const char*> debugname; // 0x30
            TValue upvals[1];                             // 0x38
        } c;

        struct {
            Proto* p;          // 0x20
            TValue uprefs[1];  // 0x28
        } l;
    };
};


struct lua_Callbacks {
    void* userdata;                                             // cb+0x00

    void (*interrupt)(lua_State* L, int gc);                    // cb+0x08
    void (*panic)(lua_State* L, int errcode);                   // cb+0x10
    void (*userthread)(lua_State* LP, lua_State* L);            // cb+0x18  (verified)
    int16_t (*useratom)(const char* s, size_t l);               // cb+0x20  (verified)
    void (*debugbreak)(lua_State* L, lua_Debug* ar);            // cb+0x28
    void (*debugstep)(lua_State* L, lua_Debug* ar);             // cb+0x30
    void (*debuginterrupt)(lua_State* L, lua_Debug* ar);        // cb+0x38
    void (*debugprotectederror)(lua_State* L);                  // cb+0x40
    void (*onallocate)(lua_State* L, size_t osize, size_t nsize);// cb+0x48 (verified)
};

struct Shared {
    char __padding1[0x10];
    void* scriptContext;
};

struct stringtable {
    TString** hash;   // 0x00
    uint32_t nuse;    // 0x08
    int size;         // 0x0C
};

struct global_State {
    stringtable strt;                 // 0x000  string hash table {hash,nuse,size}
    lua_Alloc   frealloc;             // 0x010  allocator callback
    void*       ud;                   // 0x018  allocator userdata

    uint8_t     currentwhite;         // 0x020  live GC white bits (& 3)
    uint8_t     gcstate;              // 0x021  (adjacent; not independently proven)
    uint8_t     _head_pad[0x48 - 0x22];                 // 0x022 gray lists / GC bookkeeping

    size_t      totalbytes;           // 0x048  bytes currently allocated

    uint8_t     _gap0[0x1A0 - (0x48 + 8)];              // 0x050 GC thresholds, strt cache, ...

    struct lua_Page* freepages[41];   // 0x1A0  per-sizeclass available page list
    struct lua_Page* freegcopages[41];// 0x2E8  per-sizeclass GC page list

    uint8_t     _gap1[0x508 - (0x2E8 + 41 * 8)];        // 0x430 allgcopages, sweep, mainthread, registry, uvhead, ...

    lua_Callbacks cb;                 // 0x508  engine callbacks (0x50 bytes)

    uint8_t     _gap2[0x2C30 - (0x508 + sizeof(lua_Callbacks))]; // 0x558 ecb + udata gc/mt tables, ...

    size_t      memcatbytes[256];     // 0x2C30 per-memory-category byte counters
};

struct Proto {
    uint8_t marked;        // 0x00
    uint8_t memcat;        // 0x01
    uint8_t tt;            // 0x02  (== 15)
    uint8_t nups;          // 0x03
    uint8_t numparams;     // 0x04
    uint8_t is_vararg;     // 0x05
    uint8_t maxstacksize;  // 0x06
    uint8_t flags;         // 0x07

    TValue* k;                    // 0x08
    Instruction* code;            // 0x10
    struct Proto** p;             // 0x18
    const Instruction* codeentry; // 0x20
    void* execdata;               // 0x28
    uintptr_t exectarget;         // 0x30

    PROTO_LINEINFO_ENC<uint8_t*> lineinfo;      // 0x38
    PROTO_ABSLINEINFO_ENC<int*> abslineinfo;    // 0x40
    PROTO_LOCVARS_ENC<struct LocVar*> locvars;  // 0x48
    PROTO_UPVALUES_ENC<TString**> upvalues;     // 0x50
    PROTO_SOURCE_ENC<TString*> source;          // 0x58
    PROTO_DEBUGNAME_ENC<TString*> debugname;    // 0x60
    PROTO_DEBUGINSN_ENC<uint8_t*> debuginsn;    // 0x68
    PROTO_TYPEINFO_ENC<uint8_t*> typeinfo;      // 0x70
    PROTO_USERDATA_ENC<void*> userdata;         // 0x78

    GCObject* gclist;      // 0x80

    int sizecode;          // 0x88
    int sizep;             // 0x8C
    int sizelocvars;       // 0x90
    int sizeupvalues;      // 0x94
    int sizek;             // 0x98
    int sizelineinfo;      // 0x9C
    int linegaplog2;       // 0xA0
    int linedefined;       // 0xA4
    int bytecodeid;        // 0xA8
    int sizetypeinfo;      // 0xAC

    FeedbackVectorSlot* feedbackvec; // 0xB0
    uint32_t feedbackvecsize;        // 0xB8
    uint32_t funid;                  // 0xBC
};

struct CallInfo {
    StkId base;                  // 0x00
    StkId func;                  // 0x08
    StkId top;                   // 0x10
    const Instruction* savedpc;  // 0x18
    int nresults;                // 0x20
    unsigned int flags;          // 0x24
};

struct LuaTable {
    uint8_t marked;       // 0x00
    uint8_t memcat;       // 0x01
    uint8_t tt;           // 0x02  (== 7)
    uint8_t tmcache;      // 0x03
    uint8_t readonly;     // 0x04
    uint8_t safeenv;      // 0x05
    uint8_t lsizenode;    // 0x06
    uint8_t nodemask8;    // 0x07

    int sizearray;        // 0x08

    union {
        int lastfree;     // 0x0C
        int aboundary;    // 0x0C
    };

    struct LuaTable* metatable; // 0x10
    TValue* array;              // 0x18
    LuaNode* node;              // 0x20
    GCObject* gclist;           // 0x28
};

struct lua_State {
    uint8_t marked;       // 0x00
    uint8_t memcat;       // 0x01
    uint8_t tt;           // 0x02  (== 10)
    uint8_t status;       // 0x03
    uint8_t activememcat; // 0x04
    bool isactive;        // 0x05
    bool singlestep;      // 0x06
    uint8_t _pad0;        // 0x07

    StkId top;            // 0x08
    StkId base;           // 0x10
    global_State* global; // 0x18
    CallInfo* ci;         // 0x20
    StkId stack_last;     // 0x28
    StkId stack;          // 0x30
    CallInfo* end_ci;     // 0x38
    CallInfo* base_ci;    // 0x40

    LSTATE_STACKSIZE_ENC<int> stacksize; // 0x48
    int size_ci;          // 0x4C

    unsigned short nCcalls;     // 0x50
    unsigned short baseCcalls;  // 0x52
    int cachedslot;             // 0x54

    LuaTable* gt;               // 0x58
    UpVal* openupval;           // 0x60
    GCObject* gclist;           // 0x68
    TString* namecall;          // 0x70
    RobloxExtraSpace* userdata; // 0x78
};

struct RobloxExtraSpace {
    RobloxExtraSpace* next;
    uintptr_t _container;
    RobloxExtraSpace* prev;

    std::shared_ptr<Shared> shared;

    char __padding1[0x8];

    Identity identity;
    uint64_t capabilities;

    std::weak_ptr<uintptr_t> actor;

    char __padding2[0x30];

    std::weak_ptr<uintptr_t> source;
};

struct lua_Page {
    lua_Page* prev;          // 0x00  available-pages free list (only when not full)
    lua_Page* next;          // 0x08
    lua_Page* gcolistprev;   // 0x10  all-pages list for this size class
    lua_Page* gcolistnext;   // 0x18

    int pageSize;            // 0x20
    int blockSize;           // 0x24

    void* freeList;          // 0x28  reclaimed-block free list

    int freeNext;            // 0x30  next bump-allocated block offset (-blockSize when empty)
    int busyBlocks;          // 0x34

    char __padding1[0x8];    // 0x38  (aligns data[] to 0x40)
    char data[1];            // 0x40
};

struct TString {
    uint8_t marked;   // 0x00
    uint8_t memcat;   // 0x01
    uint8_t tt;       // 0x02  (== 6)
    uint8_t _pad0;    // 0x03
    int16_t atom;     // 0x04
    int16_t flag;     // 0x06  (high reserved bit set at creation: 0x8000)

    TString* next;    // 0x08

    TSTRING_HASH_ENC<unsigned int> hash; // 0x10 (4 bytes)
    unsigned int len;                    // 0x14

    char data[1];     // 0x18
};
