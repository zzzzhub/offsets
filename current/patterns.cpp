// oh yeah pibble dibbble and zzzz on top top top sigma sigma 6767 offset king ahh craca pattern mode habibib type shhh
// am i losing it? idk but sigmogger my ida plugin is peak use it and check out my github
// gang hire me and pay me money im the best at patterns so like yeah :p
// version-8884371d30284041
// created by @pibble (_credential) and @zzzz (2qp0)

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
    inline constexpr const char* luaM_toobig = "48 83 EC ? 48 8D 05 ? ? ? ? 48 89 44 24 ? 48 8B 54 24 ? 48 81 EA ? ? ? ? E8 ? ? ? ? CC CC CC CC CC CC CC CC CC CC CC CC CC CC CC 48 8B C4";
}

namespace Luau {
    inline constexpr const char* luaC_step = "48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 41 56 41 57 48 83 EC ? 48 8B 59 ? B8";
    inline constexpr const char* luaD_throw = "48 83 EC ? 44 8B C2 48 8B D1 48 8D 4C 24";
    inline constexpr const char* luaD_rawrunprotected = "48 89 4C 24 ? 48 83 EC ? 48 8B C2";
    inline constexpr const char* luau_execute = "40 55 48 81 EC ? ? ? ? 48 8B 41";
    inline constexpr const char* luaA_toobject = "48 83 EC ? 4C 8D 15 ? ? ? ? 85 D2";
    inline constexpr const char* luaO_nilobject = "4C 8D 15 ? ? ? ? 85 D2";
    inline constexpr const char* luaO_chunkid = "48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 41 0F B6 00";
    inline constexpr const char* luaO_str2d = "48 89 5C 24 ? 57 48 83 EC ? 48 8B FA 48 8B D9 48 8D 54 24 ? E8 ? ? ? ? 4C 8B 44 24";
    inline constexpr const char* luaH_dummynode = "48 8D 3D ? ? ? ? 48 8B D9 48 39 7A";
    inline constexpr const char* luaH_new = "48 89 5C 24 ? 48 89 6C 24 ? 56 57 41 54 41 56 41 57 48 83 EC ? 41 8B E8 48 63 F2";
    inline constexpr const char* luaH_clone = "48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC ? 44 0F B6 41 ? 48 8B FA";
    inline constexpr const char* luaV_gettable = "48 89 5C 24 ? 55 41 54 41 55 41 56 41 57 48 83 EC ? 48 89 74 24"; 
    inline constexpr const char* luaV_settable = "48 89 5C 24 ? 48 89 6C 24 ? 57 41 54 41 57 48 83 EC ? 48 89 74 24";
    inline constexpr const char* luaV_equal = "48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 48 89 7C 24 ? 41 56 48 83 EC ? 48 63 42";
    inline constexpr const char* luaV_lessthan = "48 83 EC ? 48 3B CA 75 ? 33 C0";
    inline constexpr const char* luaT_objtypename = "48 89 5C 24 ? 57 48 83 EC ? 48 8B DA 48 8B F9 48 63 52 ? 83 FA ? CC";
    inline constexpr const char* luaT_init = "48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC ? 48 8B F9 48 8D 2D ? ? ? ? BB";
    inline constexpr const char* lua_yield = "48 8B 51 ? 48 2B 51 ? 48 C1 FA ? E9";
    inline constexpr const char* lua_eception = "48 8D 05 ? ? ? ? 0F 57 C0 0F 11 41 ? 48 89 01 48 8B C1 48 89 51";
    inline constexpr const char* lua_newstate = "48 89 74 24 ? 55 57 41 56 48 8D AC 24 ? ? ? ? 48 81 EC ? ? ? ? 48 8B F2 4C 8B F1 48 8B CE";
    inline constexpr const char* lua_resetthread = "48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 48 8B 51 ? 48 8B D9 48 85 D2 0F 84 ? ? ? ? 8B 42 ? 85 C0";
    inline constexpr const char* lua_rawcheckstack = "48 89 5C 24 ? 57 48 83 EC ? 48 8B D9 48 63 FA 48 8B 49 ? 8B C7"; 
    inline constexpr const char* lua_encodepointer = "4C 8B 41 ? 48 8B C2 49 0F AF 80";
    inline constexpr const char* lua_namecallatom = "48 89 5C 24 ? 57 48 83 EC ? 48 8B 59 ? 48 8B FA 48 85 DB CC";
    inline constexpr const char* lua_pushfstringL = "48 89 54 24 ? 4C 89 44 24 ? 4C 89 4C 24 ? 53 48 83 EC ? 48 8B 51";
    inline constexpr const char* lua_pushvfstring = "48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 4C 8B 49 ? 49 8B F8";
    inline constexpr const char* luaL_errorL = "48 89 54 24 ? 4C 89 44 24 ? 4C 89 4C 24 ? 53 57 48 83 EC ? BA";
    inline constexpr const char* luaL_register = "48 89 5C 24 ? 48 89 6C 24 ? 56 57 41 56 48 83 EC ? 45 33 F6 49 8B D8";
    inline constexpr const char* luaL_findtable = "48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 41 56 41 57 48 83 EC ? 45 8B F1 49 8B F8";
    inline constexpr const char* luaL_checklstring = "48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC ? 49 8B F9 49 8B D8 8B F2 48 8B E9 E8";
    inline constexpr const char* luaL_argerrorL = "48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 49 8B F8 8B F2 48 8B D9 E8 ? ? ? ? 44 8B C6";
    inline constexpr const char* luaL_typerrorL = "48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC ? 49 8B E8 8B F2 48 8B D9 E8";
    inline constexpr const char* luaF_newproto = "40 53 48 83 EC ? 44 0F B6 41 ? BA";
    inline constexpr const char* luaF_newLclosure = "48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC ? 8B EA 49 8B F8";
    inline constexpr const char* luaF_newUpval = "48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC ? 48 8B 41 ? 48 8D 59";
    inline constexpr const char* luaopen_base = "48 89 5C 24 ? 57 48 83 EC ? BA ? ? ? ? 48 8B D9 E8 ? ? ? ? 4C 8D 05";
    inline constexpr const char* luaopen_math = "48 89 5C 24 ? 57 48 83 EC ? 48 8B D1 48 8B F9";
    inline constexpr const char* luaopen_os = "48 83 EC ? 4C 8D 05 ? ? ? ? 48 8D 15 ? ? ? ? E8 ? ? ? ? B8 ? ? ? ? 48 83 C4 ? C3 CC CC CC CC CC CC CC CC CC CC CC CC CC CC CC 40 53 48 83 EC ? 4C 8D 44 24";
    inline constexpr const char* LuaVMLoad = "48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 41 56 41 57 48 81 EC ? ? ? ? 49 8B E9 4D 8B F0 4C 8B FA 48 8B F1 48 8B 59";
    inline constexpr const char* OpcodeLookupTable = "0F B6 84 39 ? ? ? ? 83 C0";
    inline constexpr const char* loadsafe = "48 89 54 24 ? 48 89 4C 24 ? 53 55 56 57 41 54 41 55 41 56 41 57 48 81 EC ? ? ? ? 4C 8B FA 4C 8B E9";
    inline constexpr const char* luaG_runerror = "48 8B C4 48 89 50 ? 4C 89 40 ? 4C 89 48 ? 53 48 81 EC ? ? ? ? 48 8B D9";
}

namespace LuaLib {
    inline constexpr const char* luaB_print = "40 53 56 41 56 48 83 EC ? 48 8B F1 E8";
    inline constexpr const char* luaB_assert = "40 53 48 83 EC ? BA ? ? ? ? 48 8B D9 E8 ? ? ? ? BA ? ? ? ? 48 8B CB E8 ? ? ? ? 48 8B CB 85 C0 74 ? 48 83 C4";
    inline constexpr const char* luaB_error = "48 89 5C 24 ? 57 48 83 EC ? BA ? ? ? ? 48 8B D9 44 8D 42 ? E8 ? ? ? ? BA ? ? ? ? 48 8B CB 8B F8";
    inline constexpr const char* luaB_gcinfo = "40 53 48 83 EC ? 45 33 C0 48 8B D9 41 8D 50 ? E8 ? ? ? ? 8B D0";
    inline constexpr const char* luaB_getfenv = "40 53 48 83 EC ? BA ? ? ? ? 48 8B D9 E8 ? ? ? ? BA ? ? ? ? 48 8B CB E8 ? ? ? ? 48 8B CB 85 C0 74 ? BA";
    inline constexpr const char* luaB_getmetatable = "40 53 48 83 EC ? BA ? ? ? ? 48 8B D9 E8 ? ? ? ? BA ? ? ? ? 48 8B CB E8 ? ? ? ? 48 8B CB 85 C0 75";
    inline constexpr const char* luaB_next = "40 53 48 83 EC ? BA ? ? ? ? 48 8B D9 44 8D 42 ? E8 ? ? ? ? BA ? ? ? ? 48 8B CB E8 ? ? ? ? BA ? ? ? ? 48 8B CB E8 ? ? ? ? 85 C0";
    inline constexpr const char* luaB_newproxy = "40 57 48 83 EC ? BA ? ? ? ? 48 8B F9";
    inline constexpr const char* luaB_rawequal = "40 53 48 83 EC ? BA ? ? ? ? 48 8B D9 E8 ? ? ? ? BA ? ? ? ? 48 8B CB E8 ? ? ? ? BA ? ? ? ? 48 8B CB 44 8D 42";
    inline constexpr const char* luaB_rawget = "40 53 48 83 EC ? BA ? ? ? ? 48 8B D9 44 8D 42 ? E8 ? ? ? ? BA ? ? ? ? 48 8B CB E8 ? ? ? ? BA ? ? ? ? 48 8B CB E8 ? ? ? ? BA ? ? ? ? 48 8B CB E8 ? ? ? ? B8";
    inline constexpr const char* luaB_rawset = "40 53 48 83 EC ? BA ? ? ? ? 48 8B D9 44 8D 42 ? E8 ? ? ? ? BA ? ? ? ? 48 8B CB E8 ? ? ? ? BA ? ? ? ? 48 8B CB E8 ? ? ? ? BA ? ? ? ? 48 8B CB E8 ? ? ? ? BA ? ? ? ? 48 8B CB E8 ? ? ? ? B8";
    inline constexpr const char* luaB_rawlen = "40 53 48 83 EC ? BA ? ? ? ? 48 8B D9 E8 ? ? ? ? 83 C0";
    inline constexpr const char* luaB_select = "48 89 5C 24 ? 57 48 83 EC ? 48 8B F9 E8 ? ? ? ? BA ? ? ? ? 48 8B CF 8B D8";
    inline constexpr const char* luaB_setfenv = "40 53 48 83 EC ? BA ? ? ? ? 48 8B D9 44 8D 42 ? E8 ? ? ? ? 33 D2";
    inline constexpr const char* luaB_setmetatable = "48 89 5C 24 ? 57 48 83 EC ? BA ? ? ? ? 48 8B D9 E8 ? ? ? ? BA ? ? ? ? 48 8B CB 8B F8 44 8D 42";
    inline constexpr const char* luaB_tonumber = "48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? BA ? ? ? ? 48 8B D9 44 8D 42";
    inline constexpr const char* luaB_tostring = "40 53 48 83 EC ? BA ? ? ? ? 48 8B D9 E8 ? ? ? ? 45 33 C0";
    inline constexpr const char* luaB_type = "40 53 48 83 EC ? BA ? ? ? ? 48 8B D9 E8 ? ? ? ? BA ? ? ? ? 48 8B CB E8 ? ? ? ? 8B D0";
    inline constexpr const char* luaB_typeof = "40 53 48 83 EC ? BA ? ? ? ? 48 8B D9 E8 ? ? ? ? BA ? ? ? ? 48 8B CB E8 ? ? ? ? 48 8B D0";
    inline constexpr const char* luaB_pcall = "40 53 48 83 EC ? BA ? ? ? ? 48 8B D9 E8 ? ? ? ? 80 3D";
    inline constexpr const char* luaB_pcallrun = "48 89 5C 24 ? 57 48 83 EC ? 8B FA 48 8B D9 85 D2 75";
}

namespace Misc {
    inline constexpr const char* luaF_newCclosure = "48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 48 63 F2 49 8B F8";
    inline constexpr const char* luaS_newlstr = "48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 48 89 7C 24 ? 41 55 41 56 41 57 48 83 EC ? 33 ED 4D 8B C8";
    inline constexpr const char* lua_pushstring = "48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC ? 48 8B EA 48 8B F9 48 85 D2";
    inline constexpr const char* lua_setfield = "48 89 5C 24 ? 57 48 83 EC ? 4D 8B D0 48 8B F9 85 D2 CC CC 4C 8B 49";
    inline constexpr const char* luaF_freeproto = "48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 44 0F B6 0A 49 8B F0";
    inline constexpr const char* luaS_free = "48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 4C 63 52";
    inline constexpr const char* luaL_tostring = "40 53 48 83 EC ? 48 8B D9 E8 ? ? ? ? 48 85 C0 74 ? 48 8B D0";
    inline constexpr const char* lua_clock = "FF 15 ? ? ? ? 0F B6 43 ? 84 C0 75";
}

namespace Roblox {
    inline constexpr const char* Print = "48 8B C4 48 89 50 ? 4C 89 40 ? 4C 89 48 ? 53 48 81 EC ? ? ? ? 8B D9";
    inline constexpr const char* GetGlobalState = "48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 49 8B F8 48 8B F2 48 8B D9 8B 81";
    inline constexpr const char* ScriptContextResume = "48 8B C4 44 89 48 ? 4C 89 40 ? 48 89 50 ? 48 89 48 ? 53";
    inline constexpr const char* PushInstance = "48 89 5C 24 ? 57 48 83 EC ? 48 8B FA 48 8B D9 E8 ? ? ? ? 48 8B CB 84 C0 74 ? 48 8B D7";
    inline constexpr const char* GetIdentityStruct = "48 83 EC ? E8 ? ? ? ? 48 85 C0 74 ? 48 83 C4 ? C3";
    inline constexpr const char* ConnectionDisconnect = "40 53 48 83 EC ? 48 8B D9 48 85 C9 74 ? E8 ? ? ? ? EB"; // 0x1CB7DB0
    inline constexpr const char* IsLegalSendEvent = "48 83 EC ? 48 8B 89 ? ? ? ? 48 85 C9 CC CC E8 ? ? ? ? 83 F8 ? 75 ? 32 C0";
}

namespace Input {
    inline constexpr const char* FireLeftMouseClick = "48 8B C4 55 41 54 41 56 41 57 48 8D 68 ? 48 81 EC ? ? ? ? F3 0F 10 81 ? ? ? ? 45 33 E4 0F 2F C1 4D 8B F0 44 89 65 ? 4C 8B F9 0F 86 B9 01 00 00";
    inline constexpr const char* FireRightMouseClick = "48 8B C4 55 41 54 41 56 41 57 48 8D 68 ? 48 81 EC ? ? ? ? F3 0F 10 81 ? ? ? ? 45 33 E4 0F 2F C1 4D 8B F0 44 89 65 ? 4C 8B F9 0F 86 BC 01 00 00";
    inline constexpr const char* FireMouseHoverEnter = "48 89 5C 24 ? 48 89 74 24 ? 55 57 41 54 41 56 41 57 48 8B EC 48 81 EC ? ? ? ? 45 33 E4";
    inline constexpr const char* FireMouseHoverLeave = "40 55 57 41 54 41 56 41 57 48 8D 6C 24 ? 48 81 EC ? ? ? ? 48 8B 01";
    inline constexpr const char* FireProximityPrompt = "48 89 5C 24 ? 4C 89 4C 24 ? 48 89 54 24 ? 55 56 57 41 54 41 55 41 56 41 57 48 8D AC 24 ? ? ? ? 48 81 EC ? ? ? ? 41 0F B6 D8";
    inline constexpr const char* FireTouchInterest = "48 89 5C 24 ? 48 89 6C 24 ? 48 89 7C 24 ? 41 56 48 83 EC ? 48 83 B9 ? ? ? ? ? 45 0F B6 F1";
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
