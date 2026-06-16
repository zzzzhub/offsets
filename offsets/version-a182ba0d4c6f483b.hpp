// Binary: version-a182ba0d4c6f483b
// Luau:   0.724.0.7240735
// Coverage: 97/104 (93%)
#pragma once
#include <cstdint>

#define REBASE(x) (x)

namespace Offsets
{
    inline constexpr const char* LuauVersion = "0.724.0.7240735";

    namespace Memory {
        inline const uintptr_t luaM_freearray = REBASE(0x4457f30);
        inline const uintptr_t luaM_freegco = REBASE(0x4457fb0);
        inline const uintptr_t luaM_newgco = REBASE(0x44581e0);
        inline const uintptr_t luaM_toobig = REBASE(0x4458430);
        inline const uintptr_t luaM_visitgco = REBASE(0x4458460);
        inline const uintptr_t newclasspage = REBASE(0x44585d0);
        inline const uintptr_t newgcoblock = REBASE(0x4458530);
        inline const uintptr_t newpage = REBASE(0x44586d0);
    }

    namespace Luau {
        inline const uintptr_t LuaVMLoad = REBASE(0x1cae4d0);
        inline const uintptr_t OpcodeLookupTable = REBASE(0x443dd09);
        inline const uintptr_t loadsafe = REBASE(0x443d650);
        inline const uintptr_t luaA_toobject = REBASE(0x4431ba0);
        inline const uintptr_t luaC_step = REBASE(0x443bd90);
        inline const uintptr_t luaD_rawrunprotected = REBASE(0x4435fe0);
        inline const uintptr_t luaD_throw = REBASE(0x4436320);
        inline const uintptr_t luaF_newLclosure = REBASE(0x4461880);
        inline const uintptr_t luaF_newUpval = REBASE(0x44614b0);
        inline const uintptr_t luaF_newproto = REBASE(0x4461930);
        inline const uintptr_t luaG_runerror = REBASE(0x443a7a0);
        inline const uintptr_t luaH_clone = REBASE(0x4459a90);
        inline const uintptr_t luaH_dummynode = REBASE(0x66885e8);
        inline const uintptr_t luaH_new = REBASE(0x445a390);
        inline const uintptr_t luaL_argerrorL = REBASE(0x44372d0);
        inline const uintptr_t luaL_checklstring = REBASE(0x4437a50);
        inline const uintptr_t luaL_errorL = REBASE(0x44376a0);
        inline const uintptr_t luaL_findtable = REBASE(0x44376f0);
        inline const uintptr_t luaL_register = REBASE(0x4437c90);
        inline const uintptr_t luaL_typerrorL = REBASE(0x44384e0);
        inline const uintptr_t luaO_chunkid = REBASE(0x4467870);
        inline const uintptr_t luaO_nilobject = REBASE(0x4431ba4);
        inline const uintptr_t luaO_str2d = REBASE(0x4467d40);
        inline const uintptr_t luaT_init = REBASE(0x4458840);
        inline const uintptr_t luaT_objtypename = REBASE(0x4458920);
        inline const uintptr_t luaV_equal = REBASE(0x4463340);
        inline const uintptr_t luaV_gettable = REBASE(0x4463500);
        inline const uintptr_t luaV_settable = REBASE(0x4463b40);
        inline const uintptr_t lua_eception = REBASE(0x44352e0);
        inline const uintptr_t lua_encodepointer = REBASE(0x4431ff0);
        inline const uintptr_t lua_namecallatom = REBASE(0x4432b20);
        inline const uintptr_t lua_newstate = REBASE(0x4438d00);
        inline const uintptr_t lua_pushfstringL = REBASE(0x4432ff0);
        inline const uintptr_t lua_pushvfstring = REBASE(0x4433350);
        inline const uintptr_t lua_rawcheckstack = REBASE(0x44333b0);
        inline const uintptr_t lua_resetthread = REBASE(0x1c7e300);
        inline const uintptr_t lua_yield = REBASE(0x444a6e0);
        inline const uintptr_t luaopen_base = REBASE(0x444a450);
        inline const uintptr_t luaopen_math = REBASE(0x4453810);
        inline const uintptr_t luaopen_os = REBASE(0x444cfc0);
        inline const uintptr_t luau_execute = REBASE(0x44491c0);
    }

    namespace LuaLib {
        inline const uintptr_t luaB_assert = REBASE(0x4449ce0);
        inline const uintptr_t luaB_error = REBASE(0x44497a0);
        inline const uintptr_t luaB_gcinfo = REBASE(0x4449bd0);
        inline const uintptr_t luaB_getfenv = REBASE(0x4449930);
        inline const uintptr_t luaB_getmetatable = REBASE(0x4449810);
        inline const uintptr_t luaB_newproxy = REBASE(0x4449e30);
        inline const uintptr_t luaB_next = REBASE(0x4449c80);
        inline const uintptr_t luaB_pcall = REBASE(0x444a190);
        inline const uintptr_t luaB_pcallrun = REBASE(0x45ca850);
        inline const uintptr_t luaB_print = REBASE(0x4449580);
        inline const uintptr_t luaB_rawequal = REBASE(0x4449a70);
        inline const uintptr_t luaB_rawget = REBASE(0x4449ac0);
        inline const uintptr_t luaB_rawlen = REBASE(0x4449b70);
        inline const uintptr_t luaB_rawset = REBASE(0x4449b10);
        inline const uintptr_t luaB_select = REBASE(0x4449d50);
        inline const uintptr_t luaB_setfenv = REBASE(0x4449990);
        inline const uintptr_t luaB_setmetatable = REBASE(0x4449870);
        inline const uintptr_t luaB_tonumber = REBASE(0x4449660);
        inline const uintptr_t luaB_tostring = REBASE(0x4449e00);
        inline const uintptr_t luaB_type = REBASE(0x4449c00);
        inline const uintptr_t luaB_typeof = REBASE(0x4449c40);
    }

    namespace Misc {
        inline const uintptr_t Print = REBASE(0x1dec8b0);
        inline const uintptr_t luaF_freeproto = REBASE(0x44615b0);
        inline const uintptr_t luaF_newCclosure = REBASE(0x44617f0);
        inline const uintptr_t luaL_tostring = REBASE(0x4437dd0);
        inline const uintptr_t luaS_free = REBASE(0x44684d0);
        inline const uintptr_t luaS_newlstr = REBASE(0x4468580);
        inline const uintptr_t lua_clock = REBASE(0x444c7f0);
    }

    namespace Roblox {
        inline const uintptr_t ConnectionDisconnect = REBASE(0x1c9d5c0);
        inline const uintptr_t GetGlobalState = REBASE(0x1c95d90);
        inline const uintptr_t IsLegalSendEvent = REBASE(0xa0d870);
        inline const uintptr_t PushInstance = REBASE(0x1c89180);
        inline const uintptr_t ScriptContextResume = REBASE(0x1d67a50);
    }

    namespace Input {
        inline const uintptr_t FireMouseHoverEnter = REBASE(0x2511930);
        inline const uintptr_t FireMouseHoverLeave = REBASE(0x2511b20);
        inline const uintptr_t FireProximityPrompt = REBASE(0x24de950);
        inline const uintptr_t FireRightMouseClick = REBASE(0x2511d90);
        inline const uintptr_t FireTouchInterest = REBASE(0x29540c0);
    }

    namespace Raknet {
        inline const uintptr_t HandleConnectionState = REBASE(0x9f94e0);
        inline const uintptr_t ProcessNetworkPacket = REBASE(0x3035dc0);
        inline const uintptr_t ReportNetworkError = REBASE(0x9ee620);
        inline const uintptr_t Send = REBASE(0x3097390);
    }

    namespace Task {
        inline const uintptr_t cancel = REBASE(0x1dc89a0);
        inline const uintptr_t defer = REBASE(0x1dc8c80);
        inline const uintptr_t delay = REBASE(0x1dc90b0);
        inline const uintptr_t desynchronize = REBASE(0x1dc92f0);
        inline const uintptr_t spawn = REBASE(0x1dc9b80);
        inline const uintptr_t synchronize = REBASE(0x1dc9d00);
    }

} // namespace Offsets
