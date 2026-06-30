#pragma once
#include <cstdint>
#include "vmvalues.h"

// BEST ENC DUMPER
// version-9377ee10133e4be3
// Luau 0.721.0.7211109
// dumped 14/14 fields in 19.33s

inline constexpr std::uintptr_t PROTO_DEBUGNAME = 0x20;
inline constexpr std::uintptr_t PROTO_DEBUGINSN = 0x30;
inline constexpr std::uintptr_t PROTO_UPVALUES = 0x38;
inline constexpr std::uintptr_t PROTO_ABSLINEINFO = 0x70;
inline constexpr std::uintptr_t PROTO_USERDATA = 0x8;
inline constexpr std::uintptr_t PROTO_LINEINFO = 0x10;
inline constexpr std::uintptr_t PROTO_LOCVARS = 0x40;
inline constexpr std::uintptr_t PROTO_TYPEINFO = 0x18;
inline constexpr std::uintptr_t PROTO_SOURCE = 0x50;
inline constexpr std::uintptr_t CLOSURE_DEBUGNAME = 0x30;
inline constexpr std::uintptr_t CLOSURE_CONT = 0x28;
inline constexpr std::uintptr_t UDATA_META = 0x8;
inline constexpr std::uintptr_t TSTRING_HASH = 0x10;
inline constexpr std::uintptr_t LSTATE_STACKSIZE = 0x78;

#define PROTO_DEBUGNAME_ENC VMValue4
#define PROTO_DEBUGINSN_ENC VMValue3
#define PROTO_UPVALUES_ENC VMValue4
#define PROTO_ABSLINEINFO_ENC VMValue4
#define PROTO_USERDATA_ENC VMValue4
#define PROTO_LINEINFO_ENC VMValue2
#define PROTO_LOCVARS_ENC VMValue2
#define PROTO_TYPEINFO_ENC VMValue1
#define PROTO_SOURCE_ENC VMValue4
#define CLOSURE_DEBUGNAME_ENC VMValue4
#define CLOSURE_CONT_ENC VMValue3
#define UDATA_META_ENC VMValue3
#define TSTRING_HASH_ENC VMValue4
#define LSTATE_STACKSIZE_ENC VMValue2

