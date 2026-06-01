// version-460909c4fe904aae

#pragma once
#include <cstdint>
#include <type_traits>

template <typename T>
using vm_storage_t = typename std::conditional<(sizeof(T) <= 4), uint32_t, uint64_t>::type;

template <typename T>
struct VMValue0 { // plain: storage
    vm_storage_t<T> storage;
    using S = vm_storage_t<T>;
    inline T decode() const { return (T)(uintptr_t)storage; }
    inline void encode(T val) { storage = (S)(uintptr_t)val; }
};

template <typename T>
struct VMValue1 { // storage - this
    vm_storage_t<T> storage;
    using S = vm_storage_t<T>;
    inline T decode() const { return (T)(uintptr_t)(S)(storage - (S)(uintptr_t)this); }
    inline void encode(T val) { storage = (S)((S)(uintptr_t)val + (S)(uintptr_t)this); }
};

template <typename T>
struct VMValue2 { // this - storage
    vm_storage_t<T> storage;
    using S = vm_storage_t<T>;
    inline T decode() const { return (T)(uintptr_t)(S)((S)(uintptr_t)this - storage); }
    inline void encode(T val) { storage = (S)((S)(uintptr_t)this - (S)(uintptr_t)val); }
};

template <typename T>
struct VMValue3 { // this ^ storage
    vm_storage_t<T> storage;
    using S = vm_storage_t<T>;
    inline T decode() const { return (T)(uintptr_t)(S)((S)(uintptr_t)this ^ storage); }
    inline void encode(T val) { storage = (S)((S)(uintptr_t)val ^ (S)(uintptr_t)this); }
};

template <typename T>
struct VMValue4 { // this + storage
    vm_storage_t<T> storage;
    using S = vm_storage_t<T>;
    inline T decode() const { return (T)(uintptr_t)(S)((S)(uintptr_t)this + storage); }
    inline void encode(T val) { storage = (S)((S)(uintptr_t)val - (S)(uintptr_t)this); }
};


#define PROTO_LINEINFO_ENC     VMValue2
#define PROTO_ABSLINEINFO_ENC  VMValue1
#define PROTO_UPVALUES_ENC     VMValue4
#define PROTO_LOCVARS_ENC      VMValue3
#define PROTO_SOURCE_ENC       VMValue2
#define PROTO_DEBUGNAME_ENC    VMValue3
#define PROTO_DEBUGINSN_ENC    VMValue4
#define PROTO_TYPEINFO_ENC     VMValue1
#define PROTO_USERDATA_ENC     VMValue4
#define LSTATE_STACKSIZE_ENC   VMValue1
#define CLOSURE_DEBUGNAME_ENC  VMValue2
#define CLOSURE_CONT_ENC       VMValue4
#define UDATA_META_ENC         VMValue4
#define TSTRING_HASH_ENC       VMValue4
