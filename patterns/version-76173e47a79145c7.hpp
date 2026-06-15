// created by @pibble (_credential) and @zzzz (2qp0)
// version-76173e47a79145c7

#pragma once
#include <cstdint>

#define REBASE(x) (x)

namespace Patterns {

namespace Memory {
    inline constexpr const char* newblock = "40 53 48 83 EC ? 4C 63 CA 48 8B 51 ? 4E 8B 84 CA";
    inline constexpr const char* newclasspage = "48 89 5C 24 ? 57 48 83 EC ? 48 8B FA 41 0F B6 D9";
    inline constexpr const char* newpage = "48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC ? 48 8B F1 49 63 E8";
    inline constexpr const char* luaM_freearray = "48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 48 8B 79 ? 49 8D 40";
    inline constexpr const char* luaM_freegco = "48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 48 8B 59 ? 49 8B F8 41 0F B6 F1";
    inline constexpr const char* luaM_newgco = "48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 48 89 7C 24 ? 41 56 48 83 EC ? 48 8B 71 ? 48 8D 42";
    inline constexpr const char* newgcoblock = "40 53 48 83 EC ? 4C 63 CA 48 8B 51 ? 4A 8D 1C CA";
    inline constexpr const char* luaM_visitgco = "40 56 41 54 41 55 48 83 EC ? 48 8B 41";
}

namespace Luau {
    inline constexpr const char* luaC_step = "48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 41 56 41 57 48 83 EC ? 48 8B 59 ? B8";
    inline constexpr const char* luaD_throw = "48 83 EC ? 44 8B C2 48 8B D1 48 8D 4C 24";
    inline constexpr const char* luau_execute = "40 55 48 81 EC ? ? ? ? 48 8B 41";
    inline constexpr const char* luaA_toobject = "48 83 EC ? 4C 8D 15 ? ? ? ? 85 D2";
    inline constexpr const char* luaO_nilobject = "4C 8D 15 ? ? ? ? 85 D2";
    inline constexpr const char* luaH_dummynode = "48 8D 3D ? ? ? ? 48 8B D9 48 39 7A";
    inline constexpr const char* LuaVMLoad = "48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 41 56 41 57 48 81 EC ? ? ? ? 49 8B E9 4D 8B F0 4C 8B FA 48 8B F1 48 8B 59";
    inline constexpr const char* OpcodeLookupTable = "0F B6 84 39 ? ? ? ? 83 C0";
    inline constexpr const char* loadsafe = "48 89 54 24 ? 48 89 4C 24 ? 53 55 56 57 41 54 41 55 41 56 41 57 48 81 EC ? ? ? ? 4C 8B FA 4C 8B E9";
    inline constexpr const char* luaG_runerror = "48 8B C4 48 89 50 ? 4C 89 40 ? 4C 89 48 ? 53 48 81 EC ? ? ? ? 48 8B D9";
}

namespace Misc {
    inline constexpr const char* luaF_newCclosure = "48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 48 63 F2 49 8B F8";
    inline constexpr const char* luaS_newlstr = "48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 48 89 7C 24 ? 41 55 41 56 41 57 48 83 EC ? 33 ED 4D 8B C8";
    inline constexpr const char* lua_pushstring = "48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC ? 48 8B EA 48 8B F9 48 85 D2";
    inline constexpr const char* lua_setfield = "48 89 5C 24 ? 57 48 83 EC ? 4D 8B D0 48 8B F9 85 D2 CC CC 4C 8B 49";
    inline constexpr const char* luaF_freeproto = "48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 44 0F B6 0A 49 8B F0";
    inline constexpr const char* luaL_tostring = "40 53 48 83 EC ? 48 8B D9 E8 ? ? ? ? 48 85 C0 74 ? 48 8B D0";
    inline constexpr const char* lua_clock = "FF 15 ? ? ? ? 0F B6 43 ? 84 C0 75";
}

namespace Roblox {
    inline constexpr const char* Print = "48 8B C4 48 89 50 ? 4C 89 40 ? 4C 89 48 ? 53 48 81 EC ? ? ? ? 8B D9";
    inline constexpr const char* GetGlobalState = "48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 49 8B F8 48 8B F2 48 8B D9 8B 81";
    inline constexpr const char* ScriptContextResume = "48 8B C4 44 89 48 ? 4C 89 40 ? 48 89 50 ? 48 89 48 ? 53";
    inline constexpr const char* PushInstance = "48 89 5C 24 ? 57 48 83 EC ? 48 8B FA 48 8B D9 E8 ? ? ? ? 48 8B CB 84 C0 74 ? 48 8B D7";
    inline constexpr const char* GetIdentityStruct = "48 83 EC ? E8 ? ? ? ? 48 85 C0 74 ? 48 83 C4 ? C3";
}

namespace Input {
    inline constexpr const char* FireLeftMouseClick = "48 8B C4 55 41 54 41 56 41 57 48 8D 68 A1 48 81 EC 88 00 00 00 F3 0F 10 81 00 01 00 00 45 33 E4 0F 2F C1 4D 8B F0 44 89 65 6F 4C 8B F9 0F 86 B9 01 00 00";
    inline constexpr const char* FireRightMouseClick = "48 8B C4 55 41 54 41 56 41 57 48 8D 68 A1 48 81 EC 88 00 00 00 F3 0F 10 81 00 01 00 00 45 33 E4 0F 2F C1 4D 8B F0 44 89 65 6F 4C 8B F9 0F 86 BC 01 00 00";
    inline constexpr const char* FireMouseHoverEnter = "48 89 5C 24 ? 48 89 74 24 ? 55 57 41 54 41 56 41 57 48 8B EC 48 81 EC ? ? ? ? 45 33 E4";
    inline constexpr const char* FireMouseHoverLeave = "40 55 57 41 54 41 56 41 57 48 8D 6C 24 C9 48 81 EC 90 00 00 00 48 8B 01 45 33 E4 4C 8B F2";
    inline constexpr const char* FireProximityPrompt = "48 89 5C 24 ? 4C 89 4C 24 ? 48 89 54 24 ? 55 56 57 41 54 41 55 41 56 41 57 48 8D AC 24 ? ? ? ? 48 81 EC ? ? ? ? 41 0F B6 D8";
    inline constexpr const char* FireTouchInterest = "48 89 5C 24 ? 48 89 6C 24 ? 48 89 7C 24 ? 41 56 48 83 EC ? 48 83 B9";
}

namespace Raknet {
    inline constexpr const char* ProcessNetworkPacket = "4C 89 44 24 ? 48 89 54 24 ? 55 53 56 57 41 54 41 56 41 57 48 8D AC 24 ? ? ? ? 48 81 EC ? ? ? ? 4D 8B F9 4C 8B F1"; // 0x30A0D60
    inline constexpr const char* ReportNetworkError = "48 8B C4 48 89 58 ? 48 89 70 ? 48 89 78 ? 55 41 54 41 55 41 56 41 57 48 8D A8 ? ? ? ? 48 81 EC ? ? ? ? 0F 29 70 ? 49 8B C1"; // 0x9F96A0
    inline constexpr const char* Send = "48 89 5C 24 ? 4C 89 4C 24 ? 48 89 54 24 ? 55 56 57 41 54 41 55 41 56 41 57 48 8D 6C 24 ? 48 81 EC ? ? ? ? 4D 8B F1 49 8B F8 48 8B DA"; // 0x31016D0
    inline constexpr const char* HandleConnectionState = "48 8B C4 53 48 81 EC ? ? ? ? 48 89 68 ? 48 8B D9 48 89 70 ? 49 8B F1"; // 0xA04560
}

namespace Task {
    inline constexpr const char* task_lib_init = "40 53 48 83 EC ? 65 48 8B 04 25 ? ? ? ? 48 8B D9 8B 15 ? ? ? ? B9 ? ? ? ? 48 8B 14 D0 8B 04 11 39 05 ? ? ? ? 7F ? 45 33 C0"; // holds all the tasks
    inline constexpr const char* wait = "48 89 5C 24 08 55 56 57 48 83 EC 50 48 8B D9 0F B6 05 ? ? ? ? 33 FF 84 C0 75";
    inline constexpr const char* spawn = "48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 48 8B F1 0F B6 05 ? ? ? ? 33 FF";
    inline constexpr const char* synchronize = "48 89 5C 24 ? 48 89 7C 24 ? 55 48 8D 6C 24 ? 48 81 EC ? ? ? ? 48 8B F9 E8 ? ? ? ? 80 B8 ? ? ? ? ? 0F 85";
    inline constexpr const char* desynchronize = "48 89 5C 24 ? 48 89 7C 24 ? 55 48 8D 6C 24 ? 48 81 EC ? ? ? ? 48 8B F9 E8 ? ? ? ? 80 B8 ? ? ? ? ? 0F 85";
    inline constexpr const char* defer = "48 89 5C 24 ? 55 56 57 41 56 41 57 48 8D AC 24 ? ? ? ? 48 81 EC ? ? ? ? 4C 8B F1 0F B6 05";
    inline constexpr const char* delay = "48 89 5C 24 ? 48 89 6C 24 ? 56 57 41 56 48 81 EC ? ? ? ? 48 8B F1 0F B6 05 ? ? ? ? 33 FF";
    inline constexpr const char* cancel = "48 89 5C 24 ? 57 48 83 EC ? BA ? ? ? ? 48 8B F9 E8 ? ? ? ? 48 8B D8";
    inline constexpr const char* delay_legacy = "48 89 5C 24 ? 48 89 6C 24 ? 56 57 41 56 48 81 EC ? ? ? ? 48 8B F1 0F B6 05 ? ? ? ? 84 C0 B0 ? 75";
}

} // .gg/zzzzhub
