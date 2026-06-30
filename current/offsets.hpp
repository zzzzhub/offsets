// love god for without him nothing is possible
// .gg/zzzzhub
// Binary: version-1a951716f19e4638
// Luau:   0.727.0.7271199
// Build:  1a951716f19e4638
// Coverage: 96/106 (90%)
#pragma once
#include <cstdint>

#define REBASE(x) (x)

namespace Offsets
{
    inline constexpr const char* LuauVersion = "0.727.0.7271199";

    namespace Memory {
        inline const uintptr_t luaM_freearray = REBASE(0x46d79e0);
        inline const uintptr_t luaM_freegco = REBASE(0x46d7a60);
        inline const uintptr_t luaM_newgco = REBASE(0x46d7c90);
        inline const uintptr_t luaM_toobig = REBASE(0x46d7ef0);
        inline const uintptr_t luaM_visitgco = REBASE(0x46d7f20);
        inline const uintptr_t newclasspage = REBASE(0x46d8090);
        inline const uintptr_t newgcoblock = REBASE(0x46d7ff0);
        inline const uintptr_t newpage = REBASE(0x46d8190);
    }

    namespace Luau {
        inline const uintptr_t LuaVMLoad = REBASE(0x46bc3e0);
        inline const uintptr_t loadsafe = REBASE(0x46bc6a0);
        inline const uintptr_t luaA_toobject = REBASE(0x46afc70);
        inline const uintptr_t luaC_step = REBASE(0x46bac60);
        inline const uintptr_t luaD_rawrunprotected = REBASE(0x46b5fd0);
        inline const uintptr_t luaD_throw = REBASE(0x46b6310);
        inline const uintptr_t luaF_newLclosure = REBASE(0x46e1370);
        inline const uintptr_t luaF_newUpval = REBASE(0x46e0fb0);
        inline const uintptr_t luaF_newproto = REBASE(0x46e1420);
        inline const uintptr_t luaG_runerror = REBASE(0x46b9400);
        inline const uintptr_t luaH_clone = REBASE(0x46d9580);
        inline const uintptr_t luaH_dummynode = REBASE(0x6933598);
        inline const uintptr_t luaH_new = REBASE(0x46d9e80);
        inline const uintptr_t luaL_argerrorL = REBASE(0x46b7340);
        inline const uintptr_t luaL_checklstring = REBASE(0x46b7ac0);
        inline const uintptr_t luaL_errorL = REBASE(0x46b7710);
        inline const uintptr_t luaL_findtable = REBASE(0x46b7760);
        inline const uintptr_t luaL_register = REBASE(0x46b7de0);
        inline const uintptr_t luaL_typerrorL = REBASE(0x46b8640);
        inline const uintptr_t luaO_chunkid = REBASE(0x46e7380);
        inline const uintptr_t luaO_nilobject = REBASE(0x69336f0);
        inline const uintptr_t luaO_str2d = REBASE(0x46e7850);
        inline const uintptr_t luaT_init = REBASE(0x46d8300);
        inline const uintptr_t luaT_objtypename = REBASE(0x46d83e0);
        inline const uintptr_t luaV_equal = REBASE(0x46e2e30);
        inline const uintptr_t luaV_gettable = REBASE(0x46e3000);
        inline const uintptr_t luaV_lessthan = REBASE(0x46e33c0);
        inline const uintptr_t luaV_settable = REBASE(0x46e3640);
        inline const uintptr_t lua_eception = REBASE(0x46b5320);
        inline const uintptr_t lua_encodepointer = REBASE(0x46b01e0);
        inline const uintptr_t lua_namecallatom = REBASE(0xe6c2d0);
        inline const uintptr_t lua_newstate = REBASE(0x46b4380);
        inline const uintptr_t lua_pushfstringL = REBASE(0x46b14e0);
        inline const uintptr_t lua_pushvfstring = REBASE(0x46b1be0);
        inline const uintptr_t lua_rawcheckstack = REBASE(0x46b1c40);
        inline const uintptr_t lua_yield = REBASE(0x46cbfe0);
        inline const uintptr_t luaopen_base = REBASE(0x46cbd50);
        inline const uintptr_t luaopen_math = REBASE(0x46d5110);
        inline const uintptr_t luaopen_os = REBASE(0x46ce8c0);
        inline const uintptr_t luau_execute = REBASE(0x46c8a40);
    }

    namespace LuaLib {
        inline const uintptr_t luaB_assert = REBASE(0x46cb560);
        inline const uintptr_t luaB_error = REBASE(0x46cb020);
        inline const uintptr_t luaB_gcinfo = REBASE(0x46cb450);
        inline const uintptr_t luaB_getfenv = REBASE(0x46cb1b0);
        inline const uintptr_t luaB_getmetatable = REBASE(0x46cb090);
        inline const uintptr_t luaB_newproxy = REBASE(0x46cb6b0);
        inline const uintptr_t luaB_next = REBASE(0x46cb500);
        inline const uintptr_t luaB_pcall = REBASE(0x46cba10);
        inline const uintptr_t luaB_pcallrun = REBASE(0x46cb960);
        inline const uintptr_t luaB_print = REBASE(0x46cae00);
        inline const uintptr_t luaB_rawequal = REBASE(0x46cb2f0);
        inline const uintptr_t luaB_rawget = REBASE(0x46cb340);
        inline const uintptr_t luaB_rawlen = REBASE(0x46cb3f0);
        inline const uintptr_t luaB_rawset = REBASE(0x46cb390);
        inline const uintptr_t luaB_select = REBASE(0x46cb5d0);
        inline const uintptr_t luaB_setfenv = REBASE(0x46cb210);
        inline const uintptr_t luaB_setmetatable = REBASE(0x46cb0f0);
        inline const uintptr_t luaB_tonumber = REBASE(0x46caee0);
        inline const uintptr_t luaB_tostring = REBASE(0x46cb680);
        inline const uintptr_t luaB_type = REBASE(0x46cb480);
        inline const uintptr_t luaB_typeof = REBASE(0x46cb4c0);
    }

    namespace Misc {
        inline const uintptr_t Print = REBASE(0x1e6b8e0);
        inline const uintptr_t luaF_freeproto = REBASE(0x46e10b0);
        inline const uintptr_t luaF_newCclosure = REBASE(0x46e12e0);
        inline const uintptr_t luaL_tostring = REBASE(0x46b7f20);
        inline const uintptr_t luaS_newlstr = REBASE(0x46e8080);
        inline const uintptr_t lua_clock = REBASE(0x46ce0f0);
        inline const uintptr_t lua_pushstring = REBASE(0x46b1840);
    }

    namespace Roblox {
        inline const uintptr_t ConnectionDisconnect = REBASE(0x1cf54a0);
        inline const uintptr_t GetLuaStateForInstance = REBASE(0x46b4350);
        inline const uintptr_t PushInstance = REBASE(0x1ce0cc0);
        inline const uintptr_t ScriptContextResume = REBASE(0x1dbd460);
    }

    namespace Input {
        inline const uintptr_t FireLeftMouseClick = REBASE(0x2611d70);
        inline const uintptr_t FireMouseHoverEnter = REBASE(0x2611f80);
        inline const uintptr_t FireMouseHoverLeave = REBASE(0x2612170);
        inline const uintptr_t FireTouchInterest = REBASE(0x2a50730);
    }

    namespace Raknet {
        inline const uintptr_t HandleConnectionState = REBASE(0xa55ad0);
        inline const uintptr_t ProcessNetworkPacket = REBASE(0x3154120);
        inline const uintptr_t ReportNetworkError = REBASE(0xa4aab0);
    }

    namespace Task {
        inline const uintptr_t cancel = REBASE(0x1e2d110);
        inline const uintptr_t defer = REBASE(0x1e2d420);
        inline const uintptr_t delay = REBASE(0x1e2d874);
        inline const uintptr_t desynchronize = REBASE(0x1e2da60);
        inline const uintptr_t spawn = REBASE(0x1e2e300);
        inline const uintptr_t synchronize = REBASE(0x1e2e480);
        inline const uintptr_t task_lib_init = REBASE(0x1e2dca0);
        inline const uintptr_t wait = REBASE(0x1e2e680);
    }

} // namespace Offsets
