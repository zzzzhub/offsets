// Binary: decrypted_version-ddf02245bdbb428c.bin
// Luau:   0.730.23.7300792
// Build:  ddf02245bdbb428c
// Coverage: 211/225 (93%)
#pragma once
#include <cstdint>

#define REBASE(x) (x)

namespace Offsets
{
    inline constexpr const char* LuauVersion = "0.730.23.7300792";

    namespace Memory {
        inline const uintptr_t luaM_freearray = REBASE(0x47b18c0);
        inline const uintptr_t luaM_freegco = REBASE(0x47b10d0);
        inline const uintptr_t luaM_newgco = REBASE(0x47b1000);
        inline const uintptr_t luaM_toobig = REBASE(0x47b1250);
        inline const uintptr_t luaM_visitgco = REBASE(0x47b1280);
        inline const uintptr_t newclasspage = REBASE(0x47b13f0);
        inline const uintptr_t newgcoblock = REBASE(0x47b1350);
        inline const uintptr_t newpage = REBASE(0x47b14f0);
    }

    namespace Luau {
        inline const uintptr_t lua_pcall = REBASE(0x4795860);
        inline const uintptr_t OpcodeLookupTable = REBASE(0x62dffa0);
        inline const uintptr_t freeobj = REBASE(0x47b47b0);
        inline const uintptr_t loadsafe = REBASE(0x4795b20);
        inline const uintptr_t luaA_toobject = REBASE(0x4788ff0);
        inline const uintptr_t luaC_barrierback = REBASE(0x4793c50);
        inline const uintptr_t luaC_barrierf = REBASE(0x4793c70);
        inline const uintptr_t luaC_barriertable = REBASE(0x4793ca0);
        inline const uintptr_t luaC_step = REBASE(0x4793ea0);
        inline const uintptr_t luaD_rawrunprotected = REBASE(0x478f360);
        inline const uintptr_t luaD_throw = REBASE(0x478f6a0);
        inline const uintptr_t luaF_close = REBASE(0x47ba200);
        inline const uintptr_t luaF_findupval = REBASE(0x47ba360);
        inline const uintptr_t luaF_newLclosure = REBASE(0x47ba720);
        inline const uintptr_t luaF_newUpval = REBASE(0x47ba360);
        inline const uintptr_t luaF_newproto = REBASE(0x47ba7d0);
        inline const uintptr_t luaG_runerror = REBASE(0x4792780);
        inline const uintptr_t luaH_clone = REBASE(0x47b28f0);
        inline const uintptr_t luaH_dummynode = REBASE(0x6a4d478);
        inline const uintptr_t luaH_getn = REBASE(0x47b2ea0);
        inline const uintptr_t luaH_new = REBASE(0x47b31f0);
        inline const uintptr_t luaH_resizearray = REBASE(0x47b47b0);
        inline const uintptr_t luaH_setnum = REBASE(0x47b66b0);
        inline const uintptr_t luaL_argerrorL = REBASE(0x47906d0);
        inline const uintptr_t luaL_checklstring = REBASE(0x4790e50);
        inline const uintptr_t luaL_errorL = REBASE(0x4790aa0);
        inline const uintptr_t luaL_findtable = REBASE(0x4790af0);
        inline const uintptr_t luaL_register = REBASE(0x4791180);
        inline const uintptr_t luaL_typerrorL = REBASE(0x47919e0);
        inline const uintptr_t luaO_chunkid = REBASE(0x47c0770);
        inline const uintptr_t luaO_nilobject = REBASE(0x6a4d5e8);
        inline const uintptr_t luaO_str2d = REBASE(0x47c0c40);
        inline const uintptr_t luaT_gettm = REBASE(0x47b15a0);
        inline const uintptr_t luaT_init = REBASE(0x47b1660);
        inline const uintptr_t luaT_objtypename = REBASE(0x47b1740);
        inline const uintptr_t luaT_objtypenamestr = REBASE(0x47b1800);
        inline const uintptr_t luaV_concat = REBASE(0x47bbd50);
        inline const uintptr_t luaV_doarithadd = REBASE(0x47ba960);
        inline const uintptr_t luaV_doarithdiv = REBASE(0x47bafa0);
        inline const uintptr_t luaV_doarithidiv = REBASE(0x47bb220);
        inline const uintptr_t luaV_doarithmod = REBASE(0x47bb530);
        inline const uintptr_t luaV_doarithmul = REBASE(0x47bad20);
        inline const uintptr_t luaV_doarithpow = REBASE(0x47bb6e0);
        inline const uintptr_t luaV_doarithsub = REBASE(0x47bab40);
        inline const uintptr_t luaV_doarithunm = REBASE(0x47bb890);
        inline const uintptr_t luaV_dolen = REBASE(0x47bc0a0);
        inline const uintptr_t luaV_equal = REBASE(0x47bc1e0);
        inline const uintptr_t luaV_gettable = REBASE(0x47bc3b0);
        inline const uintptr_t luaV_lessequal = REBASE(0x47bc590);
        inline const uintptr_t luaV_lessthan = REBASE(0x47bc760);
        inline const uintptr_t luaV_settable = REBASE(0x47bc9e0);
        inline const uintptr_t lua_eception = REBASE(0x478e690);
        inline const uintptr_t lua_encodepointer = REBASE(0x4789560);
        inline const uintptr_t lua_newstate = REBASE(0x478d6f0);
        inline const uintptr_t lua_pushfstringL = REBASE(0x478a860);
        inline const uintptr_t lua_pushvfstring = REBASE(0x478af70);
        inline const uintptr_t lua_rawcheckstack = REBASE(0x478afd0);
        inline const uintptr_t lua_resetthread = REBASE(0x1d1e380);
        inline const uintptr_t lua_yield = REBASE(0x47a5360);
        inline const uintptr_t luaopen_base = REBASE(0x47a50d0);
        inline const uintptr_t luaopen_math = REBASE(0x47ae480);
        inline const uintptr_t luaopen_os = REBASE(0x47a7c30);
        inline const uintptr_t luau_execute = REBASE(0x47a1e30);
    }

    namespace LuaLib {
        inline const uintptr_t luaB_assert = REBASE(0x47a48e0);
        inline const uintptr_t luaB_error = REBASE(0x47a43a0);
        inline const uintptr_t luaB_gcinfo = REBASE(0x47a47d0);
        inline const uintptr_t luaB_getfenv = REBASE(0x47a4530);
        inline const uintptr_t luaB_getmetatable = REBASE(0x47a4410);
        inline const uintptr_t luaB_newproxy = REBASE(0x47a4a30);
        inline const uintptr_t luaB_next = REBASE(0x47a4880);
        inline const uintptr_t luaB_pcall = REBASE(0x47a4d90);
        inline const uintptr_t luaB_pcallrun = REBASE(0x47a4ce0);
        inline const uintptr_t luaB_print = REBASE(0x47a4180);
        inline const uintptr_t luaB_rawequal = REBASE(0x47a4670);
        inline const uintptr_t luaB_rawget = REBASE(0x47a46c0);
        inline const uintptr_t luaB_rawlen = REBASE(0x47a4770);
        inline const uintptr_t luaB_rawset = REBASE(0x47a4710);
        inline const uintptr_t luaB_select = REBASE(0x47a4950);
        inline const uintptr_t luaB_setfenv = REBASE(0x47a4590);
        inline const uintptr_t luaB_setmetatable = REBASE(0x47a4470);
        inline const uintptr_t luaB_tonumber = REBASE(0x47a4260);
        inline const uintptr_t luaB_tostring = REBASE(0x47a4a00);
        inline const uintptr_t luaB_type = REBASE(0x47a4800);
        inline const uintptr_t luaB_typeof = REBASE(0x47a4840);
    }

    namespace StringLib {
        inline const uintptr_t byte = REBASE(0x47a80d0);
        inline const uintptr_t char_ = REBASE(0x47a81f0);
        inline const uintptr_t find = REBASE(0x47a82a0);
        inline const uintptr_t format = REBASE(0x47a8540);
        inline const uintptr_t gmatch = REBASE(0x47a82c0);
        inline const uintptr_t gsub = REBASE(0x47a8330);
        inline const uintptr_t len = REBASE(0x47a7c60);
        inline const uintptr_t lower = REBASE(0x47a7e10);
        inline const uintptr_t match = REBASE(0x47a82b0);
        inline const uintptr_t pack = REBASE(0x47a8d20);
        inline const uintptr_t packsize = REBASE(0x47a93d0);
        inline const uintptr_t rep = REBASE(0x47a7f50);
        inline const uintptr_t reverse = REBASE(0x47a7d60);
        inline const uintptr_t split = REBASE(0x47a8bf0);
        inline const uintptr_t sub = REBASE(0x47a7c90);
        inline const uintptr_t unpack = REBASE(0x47a9580);
        inline const uintptr_t upper = REBASE(0x47a7eb0);
    }

    namespace TableLib {
        inline const uintptr_t clear = REBASE(0x47a6850);
        inline const uintptr_t clone = REBASE(0x47a6980);
        inline const uintptr_t concat = REBASE(0x47a61b0);
        inline const uintptr_t create = REBASE(0x47a66b0);
        inline const uintptr_t find = REBASE(0x47a6760);
        inline const uintptr_t foreach = REBASE(0x47a5b90);
        inline const uintptr_t foreachi = REBASE(0x47a5ab0);
        inline const uintptr_t freeze = REBASE(0x47a6890);
        inline const uintptr_t getn = REBASE(0x47a5e60);
        inline const uintptr_t insert = REBASE(0x47a5ea0);
        inline const uintptr_t isfrozen = REBASE(0x47a6940);
        inline const uintptr_t maxn = REBASE(0x47a5c50);
        inline const uintptr_t move = REBASE(0x47a6020);
        inline const uintptr_t pack = REBASE(0x47a63f0);
        inline const uintptr_t remove = REBASE(0x47a5f60);
        inline const uintptr_t sort = REBASE(0x47a65f0);
        inline const uintptr_t unpack = REBASE(0x47a64a0);
    }

    namespace Bit32Lib {
        inline const uintptr_t arshift = REBASE(0x47ab610);
        inline const uintptr_t band = REBASE(0x47ab350);
        inline const uintptr_t bnot = REBASE(0x47ab510);
        inline const uintptr_t bor = REBASE(0x47ab430);
        inline const uintptr_t btest = REBASE(0x47ab3c0);
        inline const uintptr_t bxor = REBASE(0x47ab4a0);
        inline const uintptr_t byteswap = REBASE(0x47ab8d0);
        inline const uintptr_t countlz = REBASE(0x47ab830);
        inline const uintptr_t countrz = REBASE(0x47ab880);
        inline const uintptr_t extract = REBASE(0x47ab740);
        inline const uintptr_t lrotate = REBASE(0x47ab6a0);
        inline const uintptr_t lshift = REBASE(0x47ab540);
        inline const uintptr_t replace = REBASE(0x47ab7a0);
        inline const uintptr_t rrotate = REBASE(0x47ab6f0);
        inline const uintptr_t rshift = REBASE(0x47ab5b0);
    }

    namespace Utf8Lib {
        inline const uintptr_t char_ = REBASE(0x47ace50);
        inline const uintptr_t codepoint = REBASE(0x47acc10);
        inline const uintptr_t codes = REBASE(0x47ad1b0);
        inline const uintptr_t len = REBASE(0x47acab0);
        inline const uintptr_t offset = REBASE(0x47ad020);
    }

    namespace CoroutineLib {
        inline const uintptr_t close = REBASE(0x47a53e0);
        inline const uintptr_t create = REBASE(0x47a52c0);
        inline const uintptr_t isyieldable = REBASE(0x47a53b0);
        inline const uintptr_t running = REBASE(0x47a5380);
        inline const uintptr_t status = REBASE(0x47a5250);
        inline const uintptr_t wrap = REBASE(0x47a5300);
        inline const uintptr_t yield = REBASE(0x47a5360);
    }

    namespace BufferLib {
        inline const uintptr_t copy = REBASE(0x47abe20);
        inline const uintptr_t create = REBASE(0x47aba00);
        inline const uintptr_t fill = REBASE(0x47abf40);
        inline const uintptr_t fromstring = REBASE(0x47aba50);
        inline const uintptr_t len = REBASE(0x47abde0);
        inline const uintptr_t readbits = REBASE(0x47ac020);
        inline const uintptr_t readf32 = REBASE(0x47ac660);
        inline const uintptr_t readf64 = REBASE(0x47ac6f0);
        inline const uintptr_t readi16 = REBASE(0x47ac420);
        inline const uintptr_t readi32 = REBASE(0x47ac540);
        inline const uintptr_t readi8 = REBASE(0x47ac300);
        inline const uintptr_t readinteger = REBASE(0x47abaf0);
        inline const uintptr_t readstring = REBASE(0x47abc10);
        inline const uintptr_t readu16 = REBASE(0x47ac4b0);
        inline const uintptr_t readu32 = REBASE(0x47ac5d0);
        inline const uintptr_t readu8 = REBASE(0x47ac390);
        inline const uintptr_t tostring = REBASE(0x47abab0);
        inline const uintptr_t writebits = REBASE(0x47ac180);
        inline const uintptr_t writef32 = REBASE(0x47ac930);
        inline const uintptr_t writef64 = REBASE(0x47ac9d0);
        inline const uintptr_t writei16 = REBASE(0x47ac810);
        inline const uintptr_t writei32 = REBASE(0x47ac8a0);
        inline const uintptr_t writei8 = REBASE(0x47ac780);
        inline const uintptr_t writeinteger = REBASE(0x47abb80);
        inline const uintptr_t writestring = REBASE(0x47abce0);
        inline const uintptr_t writeu16 = REBASE(0x47ac810);
        inline const uintptr_t writeu32 = REBASE(0x47ac8a0);
        inline const uintptr_t writeu8 = REBASE(0x47ac780);
    }

    namespace Misc {
        inline const uintptr_t Print = REBASE(0x470c4e0);
        inline const uintptr_t luaF_freeproto = REBASE(0x47b9920);
        inline const uintptr_t luaF_newCclosure = REBASE(0x47ba690);
        inline const uintptr_t luaL_tostring = REBASE(0x47912c0);
        inline const uintptr_t luaS_newlstr = REBASE(0x47c14d0);
        inline const uintptr_t lua_clock = REBASE(0x47a7460);
        inline const uintptr_t lua_pushstring = REBASE(0x478abd0);
    }

    namespace Roblox {
        inline const uintptr_t ConnectionDisconnect = REBASE(0x1d3e370);
        inline const uintptr_t GetIdentityStruct = REBASE(0x4ade9f0);
        inline const uintptr_t GetLuaStateForInstance = REBASE(0x478d6c0);
        inline const uintptr_t GetPropertyDescriptor = REBASE(0xc9d2a0);
        inline const uintptr_t LuaVM_Load = REBASE(0x1d4f540);
        inline const uintptr_t LuaVM_LoadWrapper = REBASE(0x1d4f480);
        inline const uintptr_t PushInstance = REBASE(0x1d29c40);
        inline const uintptr_t ScriptContextResume = REBASE(0x1e067f0);
    }

    namespace Input {
        inline const uintptr_t FireMouseHoverEnter = REBASE(0x266d980);
        inline const uintptr_t FireMouseHoverLeave = REBASE(0x266db70);
        inline const uintptr_t FireRightMouseClick = REBASE(0x266dde0);
        inline const uintptr_t FireTouchInterest = REBASE(0x2acaf00);
    }

    namespace Raknet {
        inline const uintptr_t HandleConnectionState = REBASE(0xa600b0);
        inline const uintptr_t ProcessNetworkPacket = REBASE(0x31e13c0);
        inline const uintptr_t ReportNetworkError = REBASE(0xa54a60);
    }

    namespace Task {
        inline const uintptr_t cancel = REBASE(0x1e7b660);
        inline const uintptr_t defer = REBASE(0x1e7b970);
        inline const uintptr_t pTaskScheduler = REBASE(0x82b9f48);
        inline const uintptr_t spawn = REBASE(0x1e7c850);
        inline const uintptr_t synchronize = REBASE(0x1e7c9d0);
        inline const uintptr_t task_lib_init = REBASE(0x1e7c279);
    }

    namespace Security {
        inline const uintptr_t EnableLoadModule = REBASE(0x7e3fab0);
        inline const uintptr_t LockViolationScriptCrash = REBASE(0x7e3cb98);
    }

    namespace Instance {
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
