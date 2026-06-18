// Binary: decrypted_version-8884371d30284041.bin
// Luau:   0.726.0.7261140
// Build:  8884371d30284041
// Coverage: 101/104 (97%)

// love god for without him nothing is possible
// .gg/zzzzhub
#pragma once
#include <cstdint>

#define REBASE(x) (x)

namespace Offsets
{
    inline constexpr const char* LuauVersion = "0.726.0.7261140";

    namespace Memory {
        inline const uintptr_t luaM_freearray = REBASE(0x4692660);
        inline const uintptr_t luaM_freegco = REBASE(0x46926e0);
        inline const uintptr_t luaM_newgco = REBASE(0x4692920);
        inline const uintptr_t luaM_toobig = REBASE(0x4692b80);
        inline const uintptr_t luaM_visitgco = REBASE(0x4692bb0);
        inline const uintptr_t newblock = REBASE(0x4692c80);
        inline const uintptr_t newclasspage = REBASE(0x4692d20);
        inline const uintptr_t newgcoblock = REBASE(0x4692d90);
        inline const uintptr_t newpage = REBASE(0x4692e20);
    }

    namespace Luau {
        inline const uintptr_t LuaVMLoad = REBASE(0x4677840);
        inline const uintptr_t OpcodeLookupTable = REBASE(0x61a7d80);
        inline const uintptr_t loadsafe = REBASE(0x4677b00);
        inline const uintptr_t luaA_toobject = REBASE(0x466b340);
        inline const uintptr_t luaC_step = REBASE(0x4676120);
        inline const uintptr_t luaD_rawrunprotected = REBASE(0x4671730);
        inline const uintptr_t luaD_throw = REBASE(0x4671a70);
        inline const uintptr_t luaF_newLclosure = REBASE(0x469c050);
        inline const uintptr_t luaF_newUpval = REBASE(0x469bc70);
        inline const uintptr_t luaF_newproto = REBASE(0x469c100);
        inline const uintptr_t luaG_runerror = REBASE(0x4674b10);
        inline const uintptr_t luaH_clone = REBASE(0x4694210);
        inline const uintptr_t luaH_dummynode = REBASE(0x68fcbb8);
        inline const uintptr_t luaH_new = REBASE(0x4694b10);
        inline const uintptr_t luaL_argerrorL = REBASE(0x4672ab0);
        inline const uintptr_t luaL_checklstring = REBASE(0x4673230);
        inline const uintptr_t luaL_errorL = REBASE(0x4672e80);
        inline const uintptr_t luaL_findtable = REBASE(0x4672ed0);
        inline const uintptr_t luaL_register = REBASE(0x4673560);
        inline const uintptr_t luaL_typerrorL = REBASE(0x4673dc0);
        inline const uintptr_t luaO_chunkid = REBASE(0x46a2050);
        inline const uintptr_t luaO_nilobject = REBASE(0x68fcd10);
        inline const uintptr_t luaO_str2d = REBASE(0x46a2520);
        inline const uintptr_t luaT_init = REBASE(0x4692f90);
        inline const uintptr_t luaT_objtypename = REBASE(0x4693070);
        inline const uintptr_t luaV_equal = REBASE(0x469db10);
        inline const uintptr_t luaV_gettable = REBASE(0x469dce0);
        inline const uintptr_t luaV_lessthan = REBASE(0x469e0a0);
        inline const uintptr_t luaV_settable = REBASE(0x469e320);
        inline const uintptr_t lua_eception = REBASE(0x4670a40);
        inline const uintptr_t lua_encodepointer = REBASE(0x466b8b0);
        inline const uintptr_t lua_namecallatom = REBASE(0x336b2d0);
        inline const uintptr_t lua_newstate = REBASE(0x466fa70);
        inline const uintptr_t lua_pushfstringL = REBASE(0x466cbb0);
        inline const uintptr_t lua_pushvfstring = REBASE(0x466d2b0);
        inline const uintptr_t lua_rawcheckstack = REBASE(0x466d310);
        inline const uintptr_t lua_resetthread = REBASE(0x1d44200);
        inline const uintptr_t lua_yield = REBASE(0x4686c60);
        inline const uintptr_t luaopen_base = REBASE(0x46869d0);
        inline const uintptr_t luaopen_math = REBASE(0x468fd90);
        inline const uintptr_t luaopen_os = REBASE(0x4689540);
        inline const uintptr_t luau_execute = REBASE(0x4683820);
    }

    namespace LuaLib {
        inline const uintptr_t luaB_assert = REBASE(0x46861e0);
        inline const uintptr_t luaB_error = REBASE(0x4685ca0);
        inline const uintptr_t luaB_gcinfo = REBASE(0x46860d0);
        inline const uintptr_t luaB_getfenv = REBASE(0x4685e30);
        inline const uintptr_t luaB_getmetatable = REBASE(0x4685d10);
        inline const uintptr_t luaB_newproxy = REBASE(0x4686330);
        inline const uintptr_t luaB_next = REBASE(0x4686180);
        inline const uintptr_t luaB_pcall = REBASE(0x4686690);
        inline const uintptr_t luaB_pcallrun = REBASE(0x46865e0);
        inline const uintptr_t luaB_print = REBASE(0x4685a80);
        inline const uintptr_t luaB_rawequal = REBASE(0x4685f70);
        inline const uintptr_t luaB_rawget = REBASE(0x4685fc0);
        inline const uintptr_t luaB_rawlen = REBASE(0x4686070);
        inline const uintptr_t luaB_rawset = REBASE(0x4686010);
        inline const uintptr_t luaB_select = REBASE(0x4686250);
        inline const uintptr_t luaB_setfenv = REBASE(0x4685e90);
        inline const uintptr_t luaB_setmetatable = REBASE(0x4685d70);
        inline const uintptr_t luaB_tonumber = REBASE(0x4685b60);
        inline const uintptr_t luaB_tostring = REBASE(0x4686300);
        inline const uintptr_t luaB_type = REBASE(0x4686100);
        inline const uintptr_t luaB_typeof = REBASE(0x4686140);
    }

    namespace Misc {
        inline const uintptr_t Print = REBASE(0x1edba40);
        inline const uintptr_t luaF_freeproto = REBASE(0x469bd70);
        inline const uintptr_t luaF_newCclosure = REBASE(0x469bfc0);
        inline const uintptr_t luaL_tostring = REBASE(0x46736a0);
        inline const uintptr_t luaS_free = REBASE(0x46a2cb0);
        inline const uintptr_t luaS_newlstr = REBASE(0x46a2d50);
        inline const uintptr_t lua_clock = REBASE(0x4688d70);
        inline const uintptr_t lua_pushstring = REBASE(0x466cf10);
        inline const uintptr_t lua_setfield = REBASE(0x466e260);
    }

    namespace Roblox {
        inline const uintptr_t ConnectionDisconnect = REBASE(0x1d64220);
        inline const uintptr_t IsLegalSendEvent = REBASE(0xa60080);
        inline const uintptr_t PushInstance = REBASE(0x1d4fbb0);
        inline const uintptr_t ScriptContextResume = REBASE(0x1e2dbf0);
    }

    namespace Input {
        inline const uintptr_t FireLeftMouseClick = REBASE(0x26709b0);
        inline const uintptr_t FireMouseHoverEnter = REBASE(0x2670bc0);
        inline const uintptr_t FireMouseHoverLeave = REBASE(0x2670db0);
        inline const uintptr_t FireRightMouseClick = REBASE(0x2671020);
        inline const uintptr_t FireTouchInterest = REBASE(0x2ac5820);
    }

    namespace Raknet {
        inline const uintptr_t HandleConnectionState = REBASE(0xa4b3d0);
        inline const uintptr_t ProcessNetworkPacket = REBASE(0x31b84b0);
        inline const uintptr_t ReportNetworkError = REBASE(0xa40330);
    }

    namespace Task {
        inline const uintptr_t cancel = REBASE(0x1e9d260);
        inline const uintptr_t defer = REBASE(0x1e9d570);
        inline const uintptr_t delay = REBASE(0x1e9d9e0);
        inline const uintptr_t desynchronize = REBASE(0x1e9dc30);
        inline const uintptr_t spawn = REBASE(0x1e9e4e0);
        inline const uintptr_t synchronize = REBASE(0x1e9e660);
        inline const uintptr_t task_lib_init = REBASE(0x1e9de80);
        inline const uintptr_t wait = REBASE(0x1e9e870);
    }

} // namespace Offsets
