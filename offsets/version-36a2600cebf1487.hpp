// Binary: decrypted_version-36a2600cebf1487d.bin
// Luau:   0.729.24.7290838
// Build:  36a2600cebf1487d
// Coverage: 212/225 (94%)
#pragma once
#include <cstdint>

#define REBASE(x) (x)

namespace Offsets
{
    inline constexpr const char* LuauVersion = "0.729.24.7290838";

    namespace Memory {
        inline const uintptr_t luaM_freearray = REBASE(0x7eedb0);
        inline const uintptr_t luaM_freegco = REBASE(0x7ef490);
        inline const uintptr_t luaM_newgco = REBASE(0x7ecf60);
        inline const uintptr_t luaM_toobig = REBASE(0x7ed1c0);
        inline const uintptr_t luaM_visitgco = REBASE(0x7ed1f0);
        inline const uintptr_t newclasspage = REBASE(0x7ed360);
        inline const uintptr_t newgcoblock = REBASE(0x7ed2c0);
        inline const uintptr_t newpage = REBASE(0x7ed460);
    }

    namespace Luau {
        inline const uintptr_t Lua_pcall = REBASE(0x7ffc00);
        inline const uintptr_t OpcodeLookupTable = REBASE(0x40);
        inline const uintptr_t loadsafe = REBASE(0x7ffec0);
        inline const uintptr_t luaC_barrierback = REBASE(0x7eded0);
        inline const uintptr_t luaC_barrierf = REBASE(0x7edef0);
        inline const uintptr_t luaC_barriertable = REBASE(0x7edf20);
        inline const uintptr_t luaC_step = REBASE(0x7ee130);
        inline const uintptr_t luaD_rawrunprotected = REBASE(0x7e07f0);
        inline const uintptr_t luaD_throw = REBASE(0x7e0b30);
        inline const uintptr_t luaF_close = REBASE(0x7ec3f0);
        inline const uintptr_t luaF_findupval = REBASE(0x7ec550);
        inline const uintptr_t luaF_newLclosure = REBASE(0x7ec920);
        inline const uintptr_t luaF_newUpval = REBASE(0x7ec890);
        inline const uintptr_t luaF_newproto = REBASE(0x7ec9d0);
        inline const uintptr_t luaG_runerror = REBASE(0x7f0b70);
        inline const uintptr_t luaH_clone = REBASE(0x7e4360);
        inline const uintptr_t luaH_dummynode = REBASE(0x5e47d00);
        inline const uintptr_t luaH_getn = REBASE(0x7e4910);
        inline const uintptr_t luaH_new = REBASE(0x7e4c60);
        inline const uintptr_t luaH_resizearray = REBASE(0x7e6210);
        inline const uintptr_t luaH_setnum = REBASE(0x7e8100);
        inline const uintptr_t luaL_argerrorL = REBASE(0x7e1b30);
        inline const uintptr_t luaL_checklstring = REBASE(0x7e22b0);
        inline const uintptr_t luaL_errorL = REBASE(0x7e1f00);
        inline const uintptr_t luaL_findtable = REBASE(0x7e1f50);
        inline const uintptr_t luaL_register = REBASE(0x7e25d0);
        inline const uintptr_t luaL_typerrorL = REBASE(0x7e2e30);
        inline const uintptr_t luaO_chunkid = REBASE(0x7ef800);
        inline const uintptr_t luaO_str2d = REBASE(0x7efcd0);
        inline const uintptr_t luaT_gettm = REBASE(0x7e3050);
        inline const uintptr_t luaT_init = REBASE(0x7e3110);
        inline const uintptr_t luaT_objtypename = REBASE(0x7e31f0);
        inline const uintptr_t luaT_objtypenamestr = REBASE(0x7e32b0);
        inline const uintptr_t luaV_concat = REBASE(0x7f2b10);
        inline const uintptr_t luaV_doarithadd = REBASE(0x7f1720);
        inline const uintptr_t luaV_doarithdiv = REBASE(0x7f1d60);
        inline const uintptr_t luaV_doarithidiv = REBASE(0x7f1fe0);
        inline const uintptr_t luaV_doarithmod = REBASE(0x7f22f0);
        inline const uintptr_t luaV_doarithmul = REBASE(0x7f1ae0);
        inline const uintptr_t luaV_doarithpow = REBASE(0x7f24a0);
        inline const uintptr_t luaV_doarithsub = REBASE(0x7f1900);
        inline const uintptr_t luaV_doarithunm = REBASE(0x7f2650);
        inline const uintptr_t luaV_dolen = REBASE(0x7f2e60);
        inline const uintptr_t luaV_equal = REBASE(0x7f2fa0);
        inline const uintptr_t luaV_gettable = REBASE(0x7f3160);
        inline const uintptr_t luaV_lessequal = REBASE(0x7f3350);
        inline const uintptr_t luaV_lessthan = REBASE(0x7f3520);
        inline const uintptr_t luaV_settable = REBASE(0x7f37a0);
        inline const uintptr_t lua_eception = REBASE(0x7dfb50);
        inline const uintptr_t lua_encodepointer = REBASE(0x7dbf30);
        inline const uintptr_t lua_namecallatom = REBASE(0x5631220);
        inline const uintptr_t lua_newstate = REBASE(0x7da9a0);
        inline const uintptr_t lua_pushfstringL = REBASE(0x7dd240);
        inline const uintptr_t lua_pushvfstring = REBASE(0x7dd960);
        inline const uintptr_t lua_rawcheckstack = REBASE(0x7dd9c0);
        inline const uintptr_t lua_yield = REBASE(0x3e812c0);
        inline const uintptr_t luaopen_base = REBASE(0x3e81030);
        inline const uintptr_t luaopen_math = REBASE(0x3e8a3f0);
        inline const uintptr_t luaopen_os = REBASE(0x3e83ba0);
        inline const uintptr_t luau_execute = REBASE(0x7fe910);
    }

    namespace LuaLib {
        inline const uintptr_t luaB_assert = REBASE(0x3e80840);
        inline const uintptr_t luaB_error = REBASE(0x3e80300);
        inline const uintptr_t luaB_gcinfo = REBASE(0x3e80730);
        inline const uintptr_t luaB_getfenv = REBASE(0x3e80490);
        inline const uintptr_t luaB_getmetatable = REBASE(0x3e80370);
        inline const uintptr_t luaB_newproxy = REBASE(0x3e80990);
        inline const uintptr_t luaB_next = REBASE(0x3e807e0);
        inline const uintptr_t luaB_pcall = REBASE(0x3e80cf0);
        inline const uintptr_t luaB_pcallrun = REBASE(0x3e80c40);
        inline const uintptr_t luaB_print = REBASE(0x3e800e0);
        inline const uintptr_t luaB_rawequal = REBASE(0x3e805d0);
        inline const uintptr_t luaB_rawget = REBASE(0x3e80620);
        inline const uintptr_t luaB_rawlen = REBASE(0x3e806d0);
        inline const uintptr_t luaB_rawset = REBASE(0x3e80670);
        inline const uintptr_t luaB_select = REBASE(0x3e808b0);
        inline const uintptr_t luaB_setfenv = REBASE(0x3e804f0);
        inline const uintptr_t luaB_setmetatable = REBASE(0x3e803d0);
        inline const uintptr_t luaB_tonumber = REBASE(0x3e801c0);
        inline const uintptr_t luaB_tostring = REBASE(0x3e80960);
        inline const uintptr_t luaB_type = REBASE(0x3e80760);
        inline const uintptr_t luaB_typeof = REBASE(0x3e807a0);
    }

    namespace StringLib {
        inline const uintptr_t byte = REBASE(0x3e84040);
        inline const uintptr_t char_ = REBASE(0x3e84160);
        inline const uintptr_t find = REBASE(0x3e84210);
        inline const uintptr_t format = REBASE(0x3e844b0);
        inline const uintptr_t gmatch = REBASE(0x3e84230);
        inline const uintptr_t gsub = REBASE(0x3e842a0);
        inline const uintptr_t len = REBASE(0x3e83bd0);
        inline const uintptr_t lower = REBASE(0x3e83d80);
        inline const uintptr_t match = REBASE(0x3e84220);
        inline const uintptr_t pack = REBASE(0x3e84c90);
        inline const uintptr_t packsize = REBASE(0x3e85340);
        inline const uintptr_t rep = REBASE(0x3e83ec0);
        inline const uintptr_t reverse = REBASE(0x3e83cd0);
        inline const uintptr_t split = REBASE(0x3e84b60);
        inline const uintptr_t sub = REBASE(0x3e83c00);
        inline const uintptr_t unpack = REBASE(0x3e854f0);
        inline const uintptr_t upper = REBASE(0x3e83e20);
    }

    namespace TableLib {
        inline const uintptr_t clear = REBASE(0x3e827b0);
        inline const uintptr_t clone = REBASE(0x3e828e0);
        inline const uintptr_t concat = REBASE(0x3e82110);
        inline const uintptr_t create = REBASE(0x3e82610);
        inline const uintptr_t find = REBASE(0x3e826c0);
        inline const uintptr_t foreach = REBASE(0x3e81af0);
        inline const uintptr_t foreachi = REBASE(0x3e81a10);
        inline const uintptr_t freeze = REBASE(0x3e827f0);
        inline const uintptr_t getn = REBASE(0x3e81dc0);
        inline const uintptr_t insert = REBASE(0x3e81e00);
        inline const uintptr_t isfrozen = REBASE(0x3e828a0);
        inline const uintptr_t maxn = REBASE(0x3e81bb0);
        inline const uintptr_t move = REBASE(0x3e81f80);
        inline const uintptr_t pack = REBASE(0x3e82350);
        inline const uintptr_t remove = REBASE(0x3e81ec0);
        inline const uintptr_t sort = REBASE(0x3e82550);
        inline const uintptr_t unpack = REBASE(0x3e82400);
    }

    namespace Bit32Lib {
        inline const uintptr_t arshift = REBASE(0x3e87580);
        inline const uintptr_t band = REBASE(0x3e872c0);
        inline const uintptr_t bnot = REBASE(0x3e87480);
        inline const uintptr_t bor = REBASE(0x3e873a0);
        inline const uintptr_t btest = REBASE(0x3e87330);
        inline const uintptr_t bxor = REBASE(0x3e87410);
        inline const uintptr_t byteswap = REBASE(0x3e87840);
        inline const uintptr_t countlz = REBASE(0x3e877a0);
        inline const uintptr_t countrz = REBASE(0x3e877f0);
        inline const uintptr_t extract = REBASE(0x3e876b0);
        inline const uintptr_t lrotate = REBASE(0x3e87610);
        inline const uintptr_t lshift = REBASE(0x3e874b0);
        inline const uintptr_t replace = REBASE(0x3e87710);
        inline const uintptr_t rrotate = REBASE(0x3e87660);
        inline const uintptr_t rshift = REBASE(0x3e87520);
    }

    namespace Utf8Lib {
        inline const uintptr_t char_ = REBASE(0x3e88dc0);
        inline const uintptr_t codepoint = REBASE(0x3e88b80);
        inline const uintptr_t codes = REBASE(0x3e89120);
        inline const uintptr_t len = REBASE(0x3e88a20);
        inline const uintptr_t offset = REBASE(0x3e88f90);
    }

    namespace CoroutineLib {
        inline const uintptr_t close = REBASE(0x3e81340);
        inline const uintptr_t create = REBASE(0x3e81220);
        inline const uintptr_t isyieldable = REBASE(0x3e81310);
        inline const uintptr_t running = REBASE(0x3e812e0);
        inline const uintptr_t status = REBASE(0x3e811b0);
        inline const uintptr_t wrap = REBASE(0x3e81260);
        inline const uintptr_t yield = REBASE(0x3e812c0);
    }

    namespace BufferLib {
        inline const uintptr_t copy = REBASE(0x3e87d90);
        inline const uintptr_t create = REBASE(0x3e87970);
        inline const uintptr_t fill = REBASE(0x3e87eb0);
        inline const uintptr_t fromstring = REBASE(0x3e879c0);
        inline const uintptr_t len = REBASE(0x3e87d50);
        inline const uintptr_t readbits = REBASE(0x3e87f90);
        inline const uintptr_t readf32 = REBASE(0x3e885d0);
        inline const uintptr_t readf64 = REBASE(0x3e88660);
        inline const uintptr_t readi16 = REBASE(0x3e88390);
        inline const uintptr_t readi32 = REBASE(0x3e884b0);
        inline const uintptr_t readi8 = REBASE(0x3e88270);
        inline const uintptr_t readinteger = REBASE(0x3e87a60);
        inline const uintptr_t readstring = REBASE(0x3e87b80);
        inline const uintptr_t readu16 = REBASE(0x3e88420);
        inline const uintptr_t readu32 = REBASE(0x3e88540);
        inline const uintptr_t readu8 = REBASE(0x3e88300);
        inline const uintptr_t tostring = REBASE(0x3e87a20);
        inline const uintptr_t writebits = REBASE(0x3e880f0);
        inline const uintptr_t writef32 = REBASE(0x3e888a0);
        inline const uintptr_t writef64 = REBASE(0x3e88940);
        inline const uintptr_t writei16 = REBASE(0x3e88780);
        inline const uintptr_t writei32 = REBASE(0x3e88810);
        inline const uintptr_t writei8 = REBASE(0x3e886f0);
        inline const uintptr_t writeinteger = REBASE(0x3e87af0);
        inline const uintptr_t writestring = REBASE(0x3e87c50);
        inline const uintptr_t writeu16 = REBASE(0x3e88780);
        inline const uintptr_t writeu32 = REBASE(0x3e88810);
        inline const uintptr_t writeu8 = REBASE(0x3e886f0);
    }

    namespace Misc {
        inline const uintptr_t Print = REBASE(0x8273f0);
        inline const uintptr_t luaF_freeproto = REBASE(0x7ee9b0);
        inline const uintptr_t luaF_newCclosure = REBASE(0x7ec890);
        inline const uintptr_t luaL_tostring = REBASE(0x7e2710);
        inline const uintptr_t luaS_free = REBASE(0x7ebf30);
        inline const uintptr_t luaS_newlstr = REBASE(0x7ec030);
        inline const uintptr_t lua_clock = REBASE(0x3e833d0);
        inline const uintptr_t lua_pushstring = REBASE(0x7dd5c0);
    }

    namespace Roblox {
        inline const uintptr_t ConnectionDisconnect = REBASE(0x1e6c090);
        inline const uintptr_t GetIdentityStruct = REBASE(0x789740);
        inline const uintptr_t GetLuaStateForInstance = REBASE(0x7da970);
        inline const uintptr_t GetPropertyDescriptor = REBASE(0x1e4e450);
        inline const uintptr_t LuaVM_Load = REBASE(0x1e63cd0);
        inline const uintptr_t LuaVM_LoadWrapper = REBASE(0x1e63c10);
        inline const uintptr_t PushInstance = REBASE(0x1e59750);
        inline const uintptr_t ScriptContextResume = REBASE(0x1ecc890);
    }

    namespace Input {
        inline const uintptr_t FireLeftMouseClick = REBASE(0x4e4e630);
        inline const uintptr_t FireMouseHoverEnter = REBASE(0x4e4e840);
        inline const uintptr_t FireMouseHoverLeave = REBASE(0x4e4ea30);
        inline const uintptr_t FireRightMouseClick = REBASE(0x4e4eca0);
        inline const uintptr_t FireTouchInterest = REBASE(0x1b231c0);
    }

    namespace Raknet {
        inline const uintptr_t HandleConnectionState = REBASE(0x24107b0);
        inline const uintptr_t ProcessNetworkPacket = REBASE(0x408e840);
        inline const uintptr_t ReportNetworkError = REBASE(0x24055b0);
    }

    namespace Task {
        inline const uintptr_t cancel = REBASE(0x1f75f60);
        inline const uintptr_t defer = REBASE(0x1f76270);
        inline const uintptr_t delay = REBASE(0x1f76660);
        inline const uintptr_t desynchronize = REBASE(0x1f768b0);
        inline const uintptr_t pTaskScheduler = REBASE(0x8041ec8);
        inline const uintptr_t spawn = REBASE(0x1f77150);
        inline const uintptr_t synchronize = REBASE(0x1f772d0);
        inline const uintptr_t task_lib_init = REBASE(0x1f76af0);
        inline const uintptr_t wait = REBASE(0x1f774d0);
    }

    namespace Security {
        inline const uintptr_t LockViolationScriptCrash = REBASE(0x8340468);
    }

    namespace Instance {
        inline const uintptr_t Class = 0x18;
        inline const uintptr_t Parent = 0x68;
    }

    namespace Property {
        inline const uintptr_t CDesc2PDesc = 0x250;
        inline const uintptr_t isScriptable = 0x8c;
    }

    namespace TaskScheduler {
        inline const uintptr_t JobsEnd = 0xd0;
        inline const uintptr_t JobsStart = 0xc8;
    }

} // namespace Offsets
