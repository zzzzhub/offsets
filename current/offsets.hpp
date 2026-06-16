// Binary: version-76173e47a79145c7
// Luau:   0.725.0.7251138
#pragma once
#include <cstdint>

#define REBASE(x) (x)

namespace Offsets
{
    inline constexpr const char* LuauVersion = "0.725.0.7251138";

    namespace Memory {
        inline const uintptr_t luaM_freearray = REBASE(0x4559ac0);
        inline const uintptr_t luaM_freegco = REBASE(0x4559b40);
        inline const uintptr_t luaM_newgco = REBASE(0x4559d70);
        inline const uintptr_t luaM_toobig = REBASE(0x4559fc0);
        inline const uintptr_t luaM_visitgco = REBASE(0x4559ff0);
        inline const uintptr_t newblock = REBASE(0x455a0c0);
        inline const uintptr_t newclasspage = REBASE(0x455a150);
        inline const uintptr_t newgcoblock = REBASE(0x455a1c0);
        inline const uintptr_t newpage = REBASE(0x455a250);
    }

    namespace Luau {
        inline const uintptr_t LuaVMLoad = REBASE(0x1cc8d60);
        inline const uintptr_t OpcodeLookupTable = REBASE(0x6056c90);
        inline const uintptr_t loadsafe = REBASE(0x453f030);
        inline const uintptr_t luaA_toobject = REBASE(0x4532880);
        inline const uintptr_t luaC_step = REBASE(0x453d620);
        inline const uintptr_t luaD_rawrunprotected = REBASE(0x45376c0);
        inline const uintptr_t luaD_throw = REBASE(0x4537a00);
        inline const uintptr_t luaF_newLclosure = REBASE(0x45633c0);
        inline const uintptr_t luaF_newUpval = REBASE(0x4563010);
        inline const uintptr_t luaF_newproto = REBASE(0x4563470);
        inline const uintptr_t luaG_runerror = REBASE(0x453c010);
        inline const uintptr_t luaH_clone = REBASE(0x455b610);
        inline const uintptr_t luaH_dummynode = REBASE(0x67ae2e8);
        inline const uintptr_t luaH_new = REBASE(0x455bf10);
        inline const uintptr_t luaL_argerrorL = REBASE(0x4538a30);
        inline const uintptr_t luaL_checklstring = REBASE(0x45391b0);
        inline const uintptr_t luaL_errorL = REBASE(0x4538e00);
        inline const uintptr_t luaL_findtable = REBASE(0x4538e50);
        inline const uintptr_t luaL_register = REBASE(0x45394d0);
        inline const uintptr_t luaL_typerrorL = REBASE(0x4539d20);
        inline const uintptr_t luaO_chunkid = REBASE(0x45693c0);
        inline const uintptr_t luaO_nilobject = REBASE(0x67ae440);
        inline const uintptr_t luaO_str2d = REBASE(0x4569890);
        inline const uintptr_t luaT_init = REBASE(0x455a3c0);
        inline const uintptr_t luaT_objtypename = REBASE(0x455a4a0);
        inline const uintptr_t luaV_equal = REBASE(0x4564e90);
        inline const uintptr_t luaV_gettable = REBASE(0x4565050);
        inline const uintptr_t luaV_lessthan = REBASE(0x4565900);
        inline const uintptr_t luaV_settable = REBASE(0x4565690);
        inline const uintptr_t lua_eception = REBASE(0x45369d0);
        inline const uintptr_t lua_encodepointer = REBASE(0x4532df0);
        inline const uintptr_t lua_namecallatom = REBASE(0x4533a40);
        inline const uintptr_t lua_newstate = REBASE(0x453a580);
        inline const uintptr_t lua_pushfstringL = REBASE(0x4534100);
        inline const uintptr_t lua_pushvfstring = REBASE(0x4534810);
        inline const uintptr_t lua_rawcheckstack = REBASE(0x4534870);
        inline const uintptr_t lua_resetthread = REBASE(0x1c98860);
        inline const uintptr_t lua_yield = REBASE(0x454e0c0);
        inline const uintptr_t luaopen_base = REBASE(0x454de30);
        inline const uintptr_t luaopen_math = REBASE(0x45571f0);
        inline const uintptr_t luaopen_os = REBASE(0x45509a0);
        inline const uintptr_t luau_execute = REBASE(0x454acd0);
    }

    namespace LuaLib {
        inline const uintptr_t luaB_assert = REBASE(0x454d640);
        inline const uintptr_t luaB_error = REBASE(0x454d100);
        inline const uintptr_t luaB_gcinfo = REBASE(0x454d530);
        inline const uintptr_t luaB_getfenv = REBASE(0x454d290);
        inline const uintptr_t luaB_getmetatable = REBASE(0x454d170);
        inline const uintptr_t luaB_newproxy = REBASE(0x454d790);
        inline const uintptr_t luaB_next = REBASE(0x454d5e0);
        inline const uintptr_t luaB_pcall = REBASE(0x454daf0);
        inline const uintptr_t luaB_pcallrun = REBASE(0x454dbe0);
        inline const uintptr_t luaB_print = REBASE(0x454cee0);
        inline const uintptr_t luaB_rawequal = REBASE(0x454d3d0);
        inline const uintptr_t luaB_rawget = REBASE(0x454d420);
        inline const uintptr_t luaB_rawlen = REBASE(0x454d4d0);
        inline const uintptr_t luaB_rawset = REBASE(0x454d470);
        inline const uintptr_t luaB_select = REBASE(0x454d6b0);
        inline const uintptr_t luaB_setfenv = REBASE(0x454d2f0);
        inline const uintptr_t luaB_setmetatable = REBASE(0x454d1d0);
        inline const uintptr_t luaB_tonumber = REBASE(0x454cfc0);
        inline const uintptr_t luaB_tostring = REBASE(0x454d760);
        inline const uintptr_t luaB_type = REBASE(0x454d560);
        inline const uintptr_t luaB_typeof = REBASE(0x454d5a0);
    }

    namespace Misc {
        inline const uintptr_t Print = REBASE(0x1e08380);
        inline const uintptr_t luaF_freeproto = REBASE(0x4563110);
        inline const uintptr_t luaF_newCclosure = REBASE(0x4563330);
        inline const uintptr_t luaL_tostring = REBASE(0x4539610);
        inline const uintptr_t luaS_free = REBASE(0x456a020);
        inline const uintptr_t luaS_newlstr = REBASE(0x456a0d0);
        inline const uintptr_t lua_clock = REBASE(0x45501d0);
        inline const uintptr_t lua_pushstring = REBASE(0x4534470);
        inline const uintptr_t lua_setfield = REBASE(0x45357c0);
    }

    namespace Roblox {
        inline const uintptr_t ConnectionDisconnect = REBASE(0x1cb7db0);
        inline const uintptr_t GetGlobalState = REBASE(0x1cb0530);
        inline const uintptr_t IsLegalSendEvent = REBASE(0xa18810);
        inline const uintptr_t PushInstance = REBASE(0x1ca3840);
        inline const uintptr_t ScriptContextResume = REBASE(0x1d79260);
    }

    namespace Input {
        inline const uintptr_t FireLeftMouseClick = REBASE(0x2566bf0);
        inline const uintptr_t FireMouseHoverEnter = REBASE(0x2566e00);
        inline const uintptr_t FireMouseHoverLeave = REBASE(0x2566ff0);
        inline const uintptr_t FireProximityPrompt = REBASE(0x25333b0);
        inline const uintptr_t FireRightMouseClick = REBASE(0x2567260);
        inline const uintptr_t FireTouchInterest = REBASE(0x29bdac0);
    }

    namespace Raknet {
        inline const uintptr_t HandleConnectionState = REBASE(0xa04560);
        inline const uintptr_t ProcessNetworkPacket = REBASE(0x30a0d60);
        inline const uintptr_t ReportNetworkError = REBASE(0x9f96a0);
        inline const uintptr_t Send = REBASE(0x31016d0);
    }

    namespace Task {
        inline const uintptr_t cancel = REBASE(0x1de2f90);
        inline const uintptr_t defer = REBASE(0x1de3270);
        inline const uintptr_t delay = REBASE(0x1de36a0);
        inline const uintptr_t desynchronize = REBASE(0x1de38e0);
        inline const uintptr_t spawn = REBASE(0x1de4170);
        inline const uintptr_t synchronize = REBASE(0x1de42f0);
        inline const uintptr_t task_lib_init = REBASE(0x1de3b10);
        inline const uintptr_t wait = REBASE(0x1de44e0);
    }

} // namespace Offsets
