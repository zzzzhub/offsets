// roblox version hash: version-9d412f44a6fe4081
// roblox version: 0.717.0.27558
// owners: credential (@credential_) and zzzz (@2qp0)
// join my script hub: discord.gg/zzzzhub
// join my executor server: discord.gg/HTG8P6hHSW

#pragma once
#include <cstdint>

namespace offsets 
{
    namespace rbx_instance 
    {
        constexpr std::uintptr_t new_inst       = 0x7584E0;
        constexpr std::uintptr_t from_existing  = 0x130AD80;
        constexpr std::uintptr_t get_property   = 0x46551A0;
    }

    namespace rbx_functions 
    {
        constexpr std::uintptr_t print          = 0x4653ED0;
        constexpr std::uintptr_t log_crash      = 0x46551A0;
        constexpr std::uintptr_t proximity_fire = 0x4654680;
        constexpr std::uintptr_t get_caps       = 0x4365240;
    }

    namespace rbx_bridge 
    {
        constexpr std::uintptr_t reg_class      = 0x1BCD070;
        constexpr std::uintptr_t reg_vec3       = 0x1C707C0;
        constexpr std::uintptr_t reg_vec2       = 0x1C9DE00;
        constexpr std::uintptr_t reg_phys_prop  = 0x460C130;
        constexpr std::uintptr_t remap_types    = 0x4270400;
    }

    namespace vmscheduler 
    {
        constexpr std::uintptr_t task_defer     = 0x149AAD0;
        constexpr std::uintptr_t task_wait      = 0x3C37480;
        constexpr std::uintptr_t task_cancel    = 0x1D7E730;
        constexpr std::uintptr_t start_script   = 0x43EC020;
    }

    namespace vmstate 
    {
        constexpr std::uintptr_t get_lua_state  = 0x1BD9240;
        constexpr std::uintptr_t open_state     = 0x1CD8450;
        constexpr std::uintptr_t sandbox_thread = 0x16C8220;
        constexpr std::uintptr_t load_lib_prot  = 0x1CD81A0;
        constexpr std::uintptr_t luau_load      = 0x1D0A195;
        constexpr std::uintptr_t luau_execute   = 0x4277D20;
        constexpr std::uintptr_t f_luaopen      = 0x4261550;
    }

    namespace vmmemory 
    {
        constexpr std::uintptr_t lua_m_free     = 0x42B9950;
        constexpr std::uintptr_t lua_m_freegco  = 0x42B99D0;
        constexpr std::uintptr_t lua_c_step     = 0x426E560;
        constexpr std::uintptr_t new_page       = 0x42B95B0;
        constexpr std::uintptr_t new_block      = 0x42B9770;
        constexpr std::uintptr_t free_block     = 0x42B98A0;
    }

    namespace luau_api 
    {
        constexpr std::uintptr_t lua_tostring   = 0x429A190;
        constexpr std::uintptr_t lua_newproxy   = 0x429A1F0;
        constexpr std::uintptr_t lua_xmove      = 0x425CD90;
        constexpr std::uintptr_t lua_pushvfstr  = 0x425D610;
        constexpr std::uintptr_t lua_pushfstrL  = 0x425D680;
        constexpr std::uintptr_t lua_newproto   = 0x42C8D10;
        constexpr std::uintptr_t lua_ktable     = 0x7393F00;
    }

    namespace luau_lib 
    {
        constexpr std::uintptr_t l_register     = 0x2AE4550;
        constexpr std::uintptr_t l_findtable    = 0x4267F20;
        constexpr std::uintptr_t l_newmetatable = 0x54EB190;
        constexpr std::uintptr_t l_checklstring = 0x4265810;
        constexpr std::uintptr_t l_checktype    = 0x4263B30;
    }

    namespace coroutine 
    {
        constexpr std::uintptr_t co_create      = 0x429D380;
        constexpr std::uintptr_t co_yield       = 0x429D9C0;
        constexpr std::uintptr_t co_resume      = 0x1D08A20;
        constexpr std::uintptr_t co_status      = 0x429BFA0;
        constexpr std::uintptr_t co_running     = 0x429DA20;
        constexpr std::uintptr_t co_close       = 0x429DAB0;
    }

    namespace raknet
    {
        constexpr std::uintptr_t raknet_err     = 0xA38EB0;
    }
}
