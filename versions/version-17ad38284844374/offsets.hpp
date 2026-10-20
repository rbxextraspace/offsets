#pragma once
#include <cstdint>

// justadumper v0.01
// https://github.com/rbxextraspace/offsets
// dumped in 12.32s
// success rate: 64.71%

#define rebase(x) (x + (uintptr_t)GetModuleHandleA(nullptr))

namespace rbx::offsets {
    namespace main {
        constexpr std::uintptr_t print = rebase(0x1d071a0);
        constexpr std::uintptr_t scriptcontextresume = rebase(0x43004b0);
        constexpr std::uintptr_t setfflag = rebase(0x4abe970);
        constexpr std::uintptr_t tls_slot_get = rebase(0x6bb0);
        constexpr std::uintptr_t gContext = rebase(0x86d8748);
        constexpr std::uintptr_t getfflag = rebase(0x4abf470);
    }

    namespace luau {
        constexpr std::uintptr_t luad_throw = rebase(0x2691f10);
        constexpr std::uintptr_t lua_addfinalizer = rebase(0x268faf0);
        constexpr std::uintptr_t luag_runerror = rebase(0x26b7390);
        constexpr std::uintptr_t luah_getn = rebase(0x26b3190);
        constexpr std::uintptr_t luah_setnum = rebase(0x26b2f40);
        constexpr std::uintptr_t lual_register = rebase(0x269d060);
        constexpr std::uintptr_t lual_findtable = rebase(0x269e6d0);
        constexpr std::uintptr_t lual_error = rebase(0x26999f0);
        constexpr std::uintptr_t luao_nilobject = rebase(0x67bb388);
        constexpr std::uintptr_t luah_dummynode = rebase(0x67bae28);
        constexpr std::uintptr_t luac_step = rebase(0x26b0b80);
        constexpr std::uintptr_t loadsafe = rebase(0x26f4750);
        constexpr std::uintptr_t luaf_newproto = rebase(0x26b7ad0);
        constexpr std::uintptr_t lual_typeerrorl = rebase(0x2698e20);
        constexpr std::uintptr_t lual_checkstack = rebase(0x269afb0);
        constexpr std::uintptr_t lual_argerrorl = rebase(0x2698da0);
    }
}
