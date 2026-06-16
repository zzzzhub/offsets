// Binary: decrypted_version-ad5d3e2906444472
// Luau:   0.724.0.7240739
// Coverage: 100/104 (96%)
#pragma once
#include <cstdint>

#define REBASE(x) (x)

namespace Offsets
{
    inline constexpr const char* LuauVersion = "0.724.0.7240739";

    namespace Memory {
        inline const uintptr_t luaM_freearray = REBASE(0x4457f70);
        inline const uintptr_t luaM_freegco = REBASE(0x4457ff0);
        inline const uintptr_t luaM_newgco = REBASE(0x4458220);
        inline const uintptr_t luaM_toobig = REBASE(0x4458470);
        inline const uintptr_t luaM_visitgco = REBASE(0x44584a0);
        inline const uintptr_t newclasspage = REBASE(0x4458610);
        inline const uintptr_t newgcoblock = REBASE(0x4458570);
        inline const uintptr_t newpage = REBASE(0x4458710);
    }

    namespace Luau {
        inline const uintptr_t LuaVMLoad = REBASE(0x1cae510);
        inline const uintptr_t OpcodeLookupTable = REBASE(0x443dd49);
        inline const uintptr_t loadsafe = REBASE(0x443d690);
        inline const uintptr_t luaA_toobject = REBASE(0x4431be0);
        inline const uintptr_t luaC_step = REBASE(0x443bdd0);
        inline const uintptr_t luaD_rawrunprotected = REBASE(0x4436020);
        inline const uintptr_t luaD_throw = REBASE(0x4436360);
        inline const uintptr_t luaF_newLclosure = REBASE(0x44618c0);
        inline const uintptr_t luaF_newUpval = REBASE(0x44614f0);
        inline const uintptr_t luaF_newproto = REBASE(0x4461970);
        inline const uintptr_t luaG_runerror = REBASE(0x443a7e0);
        inline const uintptr_t luaH_clone = REBASE(0x4459ad0);
        inline const uintptr_t luaH_dummynode = REBASE(0x66885e8);
        inline const uintptr_t luaH_new = REBASE(0x445a3d0);
        inline const uintptr_t luaL_argerrorL = REBASE(0x4437310);
        inline const uintptr_t luaL_checklstring = REBASE(0x4437a90);
        inline const uintptr_t luaL_errorL = REBASE(0x44376e0);
        inline const uintptr_t luaL_findtable = REBASE(0x4437730);
        inline const uintptr_t luaL_register = REBASE(0x4437cd0);
        inline const uintptr_t luaL_typerrorL = REBASE(0x4438520);
        inline const uintptr_t luaO_chunkid = REBASE(0x44678b0);
        inline const uintptr_t luaO_nilobject = REBASE(0x4431be4);
        inline const uintptr_t luaO_str2d = REBASE(0x4467d80);
        inline const uintptr_t luaT_init = REBASE(0x4458880);
        inline const uintptr_t luaT_objtypename = REBASE(0x4458960);
        inline const uintptr_t luaV_equal = REBASE(0x4463380);
        inline const uintptr_t luaV_gettable = REBASE(0x4463540);
        inline const uintptr_t luaV_lessthan = REBASE(0x4463df0);
        inline const uintptr_t luaV_settable = REBASE(0x4463b80);
        inline const uintptr_t lua_eception = REBASE(0x4435320);
        inline const uintptr_t lua_encodepointer = REBASE(0x4432030);
        inline const uintptr_t lua_namecallatom = REBASE(0x4432b60);
        inline const uintptr_t lua_newstate = REBASE(0x4438d40);
        inline const uintptr_t lua_pushfstringL = REBASE(0x4433030);
        inline const uintptr_t lua_pushvfstring = REBASE(0x4433390);
        inline const uintptr_t lua_rawcheckstack = REBASE(0x44333f0);
        inline const uintptr_t lua_resetthread = REBASE(0x1c7e340);
        inline const uintptr_t luaopen_base = REBASE(0x444a490);
        inline const uintptr_t luaopen_math = REBASE(0x4453850);
        inline const uintptr_t luaopen_os = REBASE(0x444d000);
        inline const uintptr_t luau_execute = REBASE(0x4449200);
    }

    namespace LuaLib {
        inline const uintptr_t luaB_assert = REBASE(0x4449d20);
        inline const uintptr_t luaB_error = REBASE(0x44497e0);
        inline const uintptr_t luaB_gcinfo = REBASE(0x4449c10);
        inline const uintptr_t luaB_getfenv = REBASE(0x4449970);
        inline const uintptr_t luaB_getmetatable = REBASE(0x4449850);
        inline const uintptr_t luaB_newproxy = REBASE(0x4449e70);
        inline const uintptr_t luaB_next = REBASE(0x4449cc0);
        inline const uintptr_t luaB_pcall = REBASE(0x444a1d0);
        inline const uintptr_t luaB_pcallrun = REBASE(0x444a2a0);
        inline const uintptr_t luaB_print = REBASE(0x44495c0);
        inline const uintptr_t luaB_rawequal = REBASE(0x4449ab0);
        inline const uintptr_t luaB_rawget = REBASE(0x4449b00);
        inline const uintptr_t luaB_rawlen = REBASE(0x4449bb0);
        inline const uintptr_t luaB_rawset = REBASE(0x4449b50);
        inline const uintptr_t luaB_select = REBASE(0x4449d90);
        inline const uintptr_t luaB_setfenv = REBASE(0x44499d0);
        inline const uintptr_t luaB_setmetatable = REBASE(0x44498b0);
        inline const uintptr_t luaB_tonumber = REBASE(0x44496a0);
        inline const uintptr_t luaB_tostring = REBASE(0x4449e40);
        inline const uintptr_t luaB_type = REBASE(0x4449c40);
        inline const uintptr_t luaB_typeof = REBASE(0x4449c80);
    }

    namespace Misc {
        inline const uintptr_t Print = REBASE(0x1dec8f0);
        inline const uintptr_t luaF_freeproto = REBASE(0x44615f0);
        inline const uintptr_t luaF_newCclosure = REBASE(0x4461830);
        inline const uintptr_t luaL_tostring = REBASE(0x4437e10);
        inline const uintptr_t luaS_free = REBASE(0x4468510);
        inline const uintptr_t luaS_newlstr = REBASE(0x44685c0);
        inline const uintptr_t lua_clock = REBASE(0x444c830);
    }

    namespace Roblox {
        inline const uintptr_t ConnectionDisconnect = REBASE(0x1c9d600);
        inline const uintptr_t GetGlobalState = REBASE(0x1c95dd0);
        inline const uintptr_t IsLegalSendEvent = REBASE(0xa0d8b0);
        inline const uintptr_t PushInstance = REBASE(0x1c891c0);
        inline const uintptr_t ScriptContextResume = REBASE(0x1d67a90);
    }

    namespace Input {
        inline const uintptr_t FireLeftMouseClick = REBASE(0x2511760);
        inline const uintptr_t FireMouseHoverEnter = REBASE(0x2511970);
        inline const uintptr_t FireMouseHoverLeave = REBASE(0x2511b60);
        inline const uintptr_t FireProximityPrompt = REBASE(0x24de990);
        inline const uintptr_t FireRightMouseClick = REBASE(0x2511dd0);
        inline const uintptr_t FireTouchInterest = REBASE(0x2954100);
    }

    namespace Raknet {
        inline const uintptr_t HandleConnectionState = REBASE(0x9f9520);
        inline const uintptr_t ProcessNetworkPacket = REBASE(0x3035e00);
        inline const uintptr_t ReportNetworkError = REBASE(0x9ee660);
        inline const uintptr_t Send = REBASE(0x30973d0);
    }

    namespace Task {
        inline const uintptr_t cancel = REBASE(0x1dc89e0);
        inline const uintptr_t defer = REBASE(0x1dc8cc0);
        inline const uintptr_t delay = REBASE(0x1dc90f0);
        inline const uintptr_t desynchronize = REBASE(0x1dc9330);
        inline const uintptr_t spawn = REBASE(0x1dc9bc0);
        inline const uintptr_t synchronize = REBASE(0x1dc9d40);
        inline const uintptr_t task_lib_init = REBASE(0x1dc9560);
        inline const uintptr_t wait = REBASE(0x1dc9f30);
    }

} // namespace Offsets
