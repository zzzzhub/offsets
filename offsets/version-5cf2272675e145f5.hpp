// love god for without him nothing is possible he is the beginning and the end
// .gg/zzzzhub
// Binary: decrypted_version-5cf2272675e145f5.bin
// Luau:   0.728.0.7280895
// Build:  5cf2272675e145f5
// Coverage: 97/106 (91%)
#pragma once
#include <cstdint>

#define REBASE(x) (x)

namespace Offsets
{
    inline constexpr const char* LuauVersion = "0.728.0.7280895";

    namespace Memory {
        inline const uintptr_t luaM_freearray = REBASE(0x47217f0);
        inline const uintptr_t luaM_freegco = REBASE(0x4721870);
        inline const uintptr_t luaM_newgco = REBASE(0x4721aa0);
        inline const uintptr_t luaM_toobig = REBASE(0x4721d00);
        inline const uintptr_t luaM_visitgco = REBASE(0x4721d30);
        inline const uintptr_t newclasspage = REBASE(0x4721ea0);
        inline const uintptr_t newgcoblock = REBASE(0x4721e00);
        inline const uintptr_t newpage = REBASE(0x4721fa0);
    }

    namespace Luau {
        inline const uintptr_t LuaVMLoad = REBASE(0x4706320);
        inline const uintptr_t loadsafe = REBASE(0x47065e0);
        inline const uintptr_t luaA_toobject = REBASE(0x46f9d30);
        inline const uintptr_t luaC_step = REBASE(0x4704c60);
        inline const uintptr_t luaD_rawrunprotected = REBASE(0x47000a0);
        inline const uintptr_t luaD_throw = REBASE(0x47003e0);
        inline const uintptr_t luaF_newLclosure = REBASE(0x472b150);
        inline const uintptr_t luaF_newUpval = REBASE(0x472ad90);
        inline const uintptr_t luaF_newproto = REBASE(0x472b200);
        inline const uintptr_t luaG_runerror = REBASE(0x4703540);
        inline const uintptr_t luaH_clone = REBASE(0x4723370);
        inline const uintptr_t luaH_dummynode = REBASE(0x6983298);
        inline const uintptr_t luaH_new = REBASE(0x4723c70);
        inline const uintptr_t luaL_argerrorL = REBASE(0x4701430);
        inline const uintptr_t luaL_checklstring = REBASE(0x4701bb0);
        inline const uintptr_t luaL_errorL = REBASE(0x4701800);
        inline const uintptr_t luaL_findtable = REBASE(0x4701850);
        inline const uintptr_t luaL_register = REBASE(0x4701ee0);
        inline const uintptr_t luaL_typerrorL = REBASE(0x4702740);
        inline const uintptr_t luaO_chunkid = REBASE(0x4731140);
        inline const uintptr_t luaO_nilobject = REBASE(0x69833f0);
        inline const uintptr_t luaO_str2d = REBASE(0x4731610);
        inline const uintptr_t luaT_init = REBASE(0x4722110);
        inline const uintptr_t luaT_objtypename = REBASE(0x47221f0);
        inline const uintptr_t luaV_equal = REBASE(0x472cc00);
        inline const uintptr_t luaV_gettable = REBASE(0x472cdc0);
        inline const uintptr_t luaV_lessthan = REBASE(0x472d180);
        inline const uintptr_t luaV_settable = REBASE(0x472d400);
        inline const uintptr_t lua_eception = REBASE(0x46ff3d0);
        inline const uintptr_t lua_encodepointer = REBASE(0x46fa2a0);
        inline const uintptr_t lua_namecallatom = REBASE(0xe6f7e0);
        inline const uintptr_t lua_newstate = REBASE(0x46fe430);
        inline const uintptr_t lua_pushfstringL = REBASE(0x46fb5a0);
        inline const uintptr_t lua_pushvfstring = REBASE(0x46fbcb0);
        inline const uintptr_t lua_rawcheckstack = REBASE(0x46fbd10);
        inline const uintptr_t lua_yield = REBASE(0x4715e00);
        inline const uintptr_t luaopen_base = REBASE(0x4715b70);
        inline const uintptr_t luaopen_math = REBASE(0x471ef20);
        inline const uintptr_t luaopen_os = REBASE(0x47186d0);
        inline const uintptr_t luau_execute = REBASE(0x47128f0);
    }

    namespace LuaLib {
        inline const uintptr_t luaB_assert = REBASE(0x4715380);
        inline const uintptr_t luaB_error = REBASE(0x4714e40);
        inline const uintptr_t luaB_gcinfo = REBASE(0x4715270);
        inline const uintptr_t luaB_getfenv = REBASE(0x4714fd0);
        inline const uintptr_t luaB_getmetatable = REBASE(0x4714eb0);
        inline const uintptr_t luaB_newproxy = REBASE(0x47154d0);
        inline const uintptr_t luaB_next = REBASE(0x4715320);
        inline const uintptr_t luaB_pcall = REBASE(0x4715830);
        inline const uintptr_t luaB_pcallrun = REBASE(0x4715780);
        inline const uintptr_t luaB_print = REBASE(0x4714c20);
        inline const uintptr_t luaB_rawequal = REBASE(0x4715110);
        inline const uintptr_t luaB_rawget = REBASE(0x4715160);
        inline const uintptr_t luaB_rawlen = REBASE(0x4715210);
        inline const uintptr_t luaB_rawset = REBASE(0x47151b0);
        inline const uintptr_t luaB_select = REBASE(0x47153f0);
        inline const uintptr_t luaB_setfenv = REBASE(0x4715030);
        inline const uintptr_t luaB_setmetatable = REBASE(0x4714f10);
        inline const uintptr_t luaB_tonumber = REBASE(0x4714d00);
        inline const uintptr_t luaB_tostring = REBASE(0x47154a0);
        inline const uintptr_t luaB_type = REBASE(0x47152a0);
        inline const uintptr_t luaB_typeof = REBASE(0x47152e0);
    }

    namespace Misc {
        inline const uintptr_t Print = REBASE(0x4681920);
        inline const uintptr_t luaF_freeproto = REBASE(0x472ae90);
        inline const uintptr_t luaF_newCclosure = REBASE(0x472b0c0);
        inline const uintptr_t luaL_tostring = REBASE(0x4702020);
        inline const uintptr_t luaS_free = REBASE(0x4731da0);
        inline const uintptr_t luaS_newlstr = REBASE(0x4731eb0);
        inline const uintptr_t lua_clock = REBASE(0x4717f00);
        inline const uintptr_t lua_pushstring = REBASE(0x46fb910);
    }

    namespace Roblox {
        inline const uintptr_t ConnectionDisconnect = REBASE(0x1d0b690);
        inline const uintptr_t GetLuaStateForInstance = REBASE(0x46fe400);
        inline const uintptr_t PushInstance = REBASE(0x1cf6fb0);
        inline const uintptr_t ScriptContextResume = REBASE(0x1dd39e0);
    }

    namespace DataModel {
        inline const uintptr_t FakeDataModelPointer = REBASE(0x8478930);
        inline const uintptr_t GameLoaded = 0x500;
    }

    namespace Input {
        inline const uintptr_t FireLeftMouseClick = REBASE(0x262f070);
        inline const uintptr_t FireMouseHoverEnter = REBASE(0x262f280);
        inline const uintptr_t FireMouseHoverLeave = REBASE(0x262f470);
        inline const uintptr_t FireTouchInterest = REBASE(0x2a806c0);
    }

    namespace Raknet {
        inline const uintptr_t HandleConnectionState = REBASE(0xa54750);
        inline const uintptr_t ProcessNetworkPacket = REBASE(0x31919d0);
        inline const uintptr_t ReportNetworkError = REBASE(0xa49200);
    }

    namespace Task {
        inline const uintptr_t cancel = REBASE(0x1e47320);
        inline const uintptr_t defer = REBASE(0x1e47630);
        inline const uintptr_t delay = REBASE(0x1e47a20);
        inline const uintptr_t desynchronize = REBASE(0x1e47c70);
        inline const uintptr_t spawn = REBASE(0x1e48510);
        inline const uintptr_t synchronize = REBASE(0x1e48690);
        inline const uintptr_t task_lib_init = REBASE(0x1e47eb0);
        inline const uintptr_t wait = REBASE(0x1e48890);
    }

} // namespace Offsets
