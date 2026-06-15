// check out my github or sum - https://github.com/zzzzhub
// if there is some offsets you want just shoot me a dm or ping me with the name
// rblx version: version-76173e47a79145c7
// love god for he is the king of the universe.
// internal offsets dumped by zzzz and pibble
// created by @pibble (_credential) and @zzzz (2qp0)

#pragma once
#include <cstdint>

#define REBASE(x) (x)

namespace Patterns {

namespace Memory {
    inline constexpr uintptr_t newblock = REBASE(0x455A0C0);
    inline constexpr uintptr_t newclasspage = REBASE(0x455A150);
    inline constexpr uintptr_t newpage = REBASE(0x455A250);
    inline constexpr uintptr_t luaM_freearray = REBASE(0x4559AC0);
    inline constexpr uintptr_t luaM_freegco = REBASE(0x4559B40);
    inline constexpr uintptr_t luaM_newgco = REBASE(0x4559D70);
    inline constexpr uintptr_t newgcoblock = REBASE(0x455A1C0);
    inline constexpr uintptr_t luaM_visitgco = REBASE(0x4559FF0);
    inline constexpr uintptr_t luaM_toobig = REBASE(0x453BFE0);
}

namespace Luau {
    inline constexpr uintptr_t luaC_step = REBASE(0x453D620);
    inline constexpr uintptr_t luaD_throw = REBASE(0x4537A00);
    inline constexpr uintptr_t luaD_rawrunprotected = REBASE(0x45376C0);
    inline constexpr uintptr_t luau_execute = REBASE(0x4545910);
    inline constexpr uintptr_t luaA_toobject = REBASE(0x4532880);
    inline constexpr uintptr_t luaO_nilobject = REBASE(0x4532884);
    inline constexpr uintptr_t luaO_chunkid = REBASE(0x45693C0);
    inline constexpr uintptr_t luaO_str2d = REBASE(0x4569890);
    inline constexpr uintptr_t luaH_dummynode = REBASE(0x454B7F6);
    inline constexpr uintptr_t luaH_new = REBASE(0x455BF10);
    inline constexpr uintptr_t luaH_clone = REBASE(0x455B610);
    inline constexpr uintptr_t luaV_gettable = REBASE(0x4565050);
    inline constexpr uintptr_t luaV_settable = REBASE(0x4565690);
    inline constexpr uintptr_t luaV_equal = REBASE(0x4564E90);
    inline constexpr uintptr_t luaV_lessthan = REBASE(0x4565900);
    inline constexpr uintptr_t luaT_objtypename = REBASE(0x455A4A0);
    inline constexpr uintptr_t luaT_init = REBASE(0x455A3C0);
    inline constexpr uintptr_t lua_yield = REBASE(0x454E0C0);
    inline constexpr uintptr_t lua_eception = REBASE(0x45369D0);
    inline constexpr uintptr_t lua_newstate = REBASE(0x453A580);
    inline constexpr uintptr_t lua_resetthread = REBASE(0x1C98860);
    inline constexpr uintptr_t lua_rawcheckstack = REBASE(0x4534870);
    inline constexpr uintptr_t lua_encodepointer = REBASE(0x4532DF0);
    inline constexpr uintptr_t lua_namecallatom = REBASE(0x4533A40);
    inline constexpr uintptr_t lua_pushfstringL = REBASE(0x4534100);
    inline constexpr uintptr_t lua_pushvfstring = REBASE(0x4534810);
    inline constexpr uintptr_t luaL_errorL = REBASE(0x4538E00);
    inline constexpr uintptr_t luaL_register = REBASE(0x45394D0);
    inline constexpr uintptr_t luaL_findtable = REBASE(0x4538E50);
    inline constexpr uintptr_t luaL_checklstring = REBASE(0x45391B0);
    inline constexpr uintptr_t luaL_argerrorL = REBASE(0x4538A30);
    inline constexpr uintptr_t luaL_typerrorL = REBASE(0x4539D20);
    inline constexpr uintptr_t luaF_newproto = REBASE(0x4563470);
    inline constexpr uintptr_t luaF_newLclosure = REBASE(0x45633C0);
    inline constexpr uintptr_t luaF_newUpval = REBASE(0x4563010);
    inline constexpr uintptr_t luaopen_base = REBASE(0x454DE30);
    inline constexpr uintptr_t luaopen_math = REBASE(0x45571F0);
    inline constexpr uintptr_t luaopen_os = REBASE(0x45509A0);
    inline constexpr uintptr_t LuaVMLoad = REBASE(0x453ED80);
    inline constexpr uintptr_t OpcodeLookupTable = REBASE(0x453F6D9);
    inline constexpr uintptr_t loadsafe = REBASE(0x453F030);
    inline constexpr uintptr_t luaG_runerror = REBASE(0x453C010);
}

namespace LuaLib {
    inline constexpr uintptr_t luaB_print = REBASE(0x454CEE0);
    inline constexpr uintptr_t luaB_assert = REBASE(0x454D640);
    inline constexpr uintptr_t luaB_error = REBASE(0x454D100);
    inline constexpr uintptr_t luaB_gcinfo = REBASE(0x454D530);
    inline constexpr uintptr_t luaB_getfenv = REBASE(0x454D290);
    inline constexpr uintptr_t luaB_getmetatable = REBASE(0x454D170);
    inline constexpr uintptr_t luaB_next = REBASE(0x454D5E0);
    inline constexpr uintptr_t luaB_newproxy = REBASE(0x454D790);
    inline constexpr uintptr_t luaB_rawequal = REBASE(0x454D3D0);
    inline constexpr uintptr_t luaB_rawget = REBASE(0x454D420);
    inline constexpr uintptr_t luaB_rawset = REBASE(0x454D470);
    inline constexpr uintptr_t luaB_rawlen = REBASE(0x454D4D0);
    inline constexpr uintptr_t luaB_select = REBASE(0x454D6B0);
    inline constexpr uintptr_t luaB_setfenv = REBASE(0x454D2F0);
    inline constexpr uintptr_t luaB_setmetatable = REBASE(0x454D1D0);
    inline constexpr uintptr_t luaB_tonumber = REBASE(0x454CFC0);
    inline constexpr uintptr_t luaB_tostring = REBASE(0x454D760);
    inline constexpr uintptr_t luaB_type = REBASE(0x454D560);
    inline constexpr uintptr_t luaB_typeof = REBASE(0x454D5A0);
    inline constexpr uintptr_t luaB_pcall = REBASE(0x454DAF0);
    inline constexpr uintptr_t luaB_pcallrun = REBASE(0x454DBE0);
}

namespace Misc {
    inline constexpr uintptr_t luaF_newCclosure = REBASE(0x4563330);
    inline constexpr uintptr_t luaS_newlstr = REBASE(0x456A0D0);
    inline constexpr uintptr_t lua_pushstring = REBASE(0x4534470);
    inline constexpr uintptr_t lua_setfield = REBASE(0x4534FC0);
    inline constexpr uintptr_t luaF_freeproto = REBASE(0x4563110);
    inline constexpr uintptr_t luaS_free = REBASE(0x456A020);
    inline constexpr uintptr_t luaL_tostring = REBASE(0x4539E10);
    inline constexpr uintptr_t lua_clock = REBASE(0x453D679);
    inline constexpr uintptr_t Print = REBASE(0x1E08380);
}

namespace Roblox {
    inline constexpr uintptr_t GetGlobalState = REBASE(0x1CB0530);
    inline constexpr uintptr_t ScriptContextResume = REBASE(0x1D79260);
    inline constexpr uintptr_t PushInstance = REBASE(0x1CA3840);
    inline constexpr uintptr_t ConnectionDisconnect = REBASE(0x1CB7DB0);
    inline constexpr uintptr_t IsLegalSendEvent = REBASE(0xA18810);
}

namespace Input {
    inline constexpr uintptr_t FireLeftMouseClick = REBASE(0x2566BF0);
    inline constexpr uintptr_t FireRightMouseClick = REBASE(0x2567260);
    inline constexpr uintptr_t FireMouseHoverEnter = REBASE(0x2566E00);
    inline constexpr uintptr_t FireMouseHoverLeave = REBASE(0x2566FF0);
    inline constexpr uintptr_t FireProximityPrompt = REBASE(0x25333B0);
    inline constexpr uintptr_t FireTouchInterest = REBASE(0x29BDAC0);
}

namespace Raknet {
    inline constexpr uintptr_t ProcessNetworkPacket = REBASE(0x30A0D60);
    inline constexpr uintptr_t ReportNetworkError = REBASE(0x9F96A0);
    inline constexpr uintptr_t Send = REBASE(0x31016D0);
    inline constexpr uintptr_t HandleConnectionState = REBASE(0xA04560);
}

namespace Task {
    inline constexpr uintptr_t task_lib_init = REBASE(0x1DE3B10);
    inline constexpr uintptr_t wait = REBASE(0x1DE44E0);
    inline constexpr uintptr_t spawn = REBASE(0x1DE4170);
    inline constexpr uintptr_t synchronize = REBASE(0x1DE42F0);
    inline constexpr uintptr_t desynchronize = REBASE(0x1DE38E0);
    inline constexpr uintptr_t defer = REBASE(0x1DE3270);
    inline constexpr uintptr_t delay = REBASE(0x1DE36A0);
    inline constexpr uintptr_t cancel = REBASE(0x1DE2F90);
}

} // .gg/zzzzhub
