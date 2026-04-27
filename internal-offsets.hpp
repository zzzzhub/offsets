// roblox version hash: version-390ba09e7e944154
// roblox version: 0.718.1.37687
// owners: credential (@credential_) and zzzz (@2qp0)
// join my script hub: discord.gg/zzzzhub
// join my executor server: discord.gg/HTG8P6hHSW

#pragma once
#include <cstdint>

namespace offsets {
    namespace Instance {
        constexpr std::uintptr_t new = 0x1036440;
    }

    namespace Raknet {
        constexpr std::uintptr_t ProcessNetworkPacket = 0x1344A40;
        constexpr std::uintptr_t ReportNetworkError = 0xA45D10;
    }

    namespace core {
        constexpr std::uintptr_t KTable = 0x749B670;
        constexpr std::uintptr_t FireProximityPrompt = 0x2641560;
        constexpr std::uintptr_t newpage = 0x4389D60;
        constexpr std::uintptr_t newclasspage = 0x4389E10;
        constexpr std::uintptr_t freeclasspage = 0x4389E80;
        constexpr std::uintptr_t newblock = 0x4389FC0;
        constexpr std::uintptr_t newgcoblock = 0x4389F20;
        constexpr std::uintptr_t freeblock = 0x438A050;
        constexpr std::uintptr_t luaM_free = 0x438A110;
        constexpr std::uintptr_t luaM_freegco = 0x438A190;
        constexpr std::uintptr_t luaM_visitgco = 0x438A2A0;
        constexpr std::uintptr_t luaM_toobig = 0x4389D30;
        constexpr std::uintptr_t close_state = 0x4332F80;
        constexpr std::uintptr_t lua_newstate = 0xFFDB10; // incorrect :c
        constexpr std::uintptr_t f_luaopen = 0x4332220;
        constexpr std::uintptr_t auxopen = 0x436ADE0;
        constexpr std::uintptr_t luaopen_base = 0xCB1AC0;
        constexpr std::uintptr_t newproxy = 0x436AA80;
        constexpr std::uintptr_t luaT_objtypename = 0x43993B0;
        constexpr std::uintptr_t lua_rawcheckstack = 0x432D770;
        constexpr std::uintptr_t luaA_toobject = 0x432D320;
        constexpr std::uintptr_t lua_pushvfstring = 0x432E310;
        constexpr std::uintptr_t pseudo2addr = 0x432D260;
        constexpr std::uintptr_t lua_xmove = 0x432DA90;
        constexpr std::uintptr_t lua_pushfstringL = 0x432E380;
        constexpr std::uintptr_t luaL_errorL = 0x4844C10;
        constexpr std::uintptr_t luaL_typeerrorL = 0x2842410;
        constexpr std::uintptr_t luaL_findtable = 0x486CBF0;
        constexpr std::uintptr_t luaL_register = 0x4337CF0;
        constexpr std::uintptr_t luaL_newmetatable = 0x4809260;
        constexpr std::uintptr_t luaL_checklstring = 0x43364F0;
        constexpr std::uintptr_t luaL_checkany = 0x4369750;
        constexpr std::uintptr_t luaL_pushresult = 0x433AFC0;
        constexpr std::uintptr_t luaG_runerrorL = 0x43402B0;
        constexpr std::uintptr_t luaO_pushvfstring = 0x43A0760;
        constexpr std::uintptr_t luaO_chunkid = 0x43A0E90;
        constexpr std::uintptr_t GetProperty = 0x4724210;
        constexpr std::uintptr_t luaO_pushfstring = 0x43A0E60;
        constexpr std::uintptr_t luaF_newproto = 0x43993D0;
        constexpr std::uintptr_t luaD_throw = 0x432F430;
        constexpr std::uintptr_t luaD_rawrunprotected = 0x432F400;
        constexpr std::uintptr_t luau_execute = 0x4348A80;
        constexpr std::uintptr_t luaV_getimport = 0x4340AB0;
        constexpr std::uintptr_t luaC_step = 0x433F230;
        constexpr std::uintptr_t GetLuaState = 0x1C33F90;
        constexpr std::uintptr_t RobloxLogCrash = 0x4724210;
        constexpr std::uintptr_t get_capabilites = 0x44358F0;
        constexpr std::uintptr_t std_runtime_error = 0x47230E0;
        constexpr std::uintptr_t Bridge_registerClass = 0x1C27C40;
        constexpr std::uintptr_t PhysicalPropertiesBridge_registerClass = 0x46E5630;
        constexpr std::uintptr_t Vector2Bridge_registerClass = 0x1CF8AA0;
        constexpr std::uintptr_t resume = 0x1D63290;
        constexpr std::uintptr_t openState = 0x1D33150;
        constexpr std::uintptr_t startScript = 0x44BC750;
        constexpr std::uintptr_t loadLibraryProtected = 0x1D32EA0;
        constexpr std::uintptr_t create = 0x436DBC0;
        constexpr std::uintptr_t running = 0x436E260;
        constexpr std::uintptr_t status = 0x436C7E0;
        constexpr std::uintptr_t wrap = 0x436E070;
        constexpr std::uintptr_t yield = 0x436E200;
        constexpr std::uintptr_t isyieldable = 0x436E2C0;
        constexpr std::uintptr_t close = 0x436E2F0;
        constexpr std::uintptr_t info = 0x974090;
        constexpr std::uintptr_t remapUserdataTypes = 0x46CFDF0;
        constexpr std::uintptr_t compress = 0x1C68B10;
        constexpr std::uintptr_t functionContainer = 0x1C689C0;
        constexpr std::uintptr_t LuaVMLoad = 0x1C69C40;
    }

    namespace task {
        constexpr std::uintptr_t defer = 0x14EED70;
        constexpr std::uintptr_t delay = 0x2529290;
        constexpr std::uintptr_t wait = 0x3D04520;
    }

} // zzzz was here
