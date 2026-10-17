#pragma once
#include <cstdint>

// justadumper v0.01
// https://github.com/rbxextraspace/offsets
// dumped in 7.06s
// success rate: 100%

#define rebase(x) (x + (uintptr_t)GetModuleHandleA(nullptr))

namespace rbx::offsets {
    namespace main {
        constexpr std::uintptr_t print = rebase(0x1ce58f0);
        constexpr std::uintptr_t scriptcontextresume = rebase(0x4258330);
        constexpr std::uintptr_t setfflag = rebase(0x49f8270);
        constexpr std::uintptr_t tls_slot_get = rebase(0x6bb0);
        constexpr std::uintptr_t gContext = rebase(0x854f778);
        constexpr std::uintptr_t getfflag = rebase(0x49f8d70);
    }

    namespace luau {
        constexpr std::uintptr_t luad_throw = rebase(0x262ddc0);
        constexpr std::uintptr_t luao_nilobject = rebase(0x667f848);
        constexpr std::uintptr_t luah_dummynode = rebase(0x667f2e8);
        constexpr std::uintptr_t luac_step = rebase(0x2644300);
        constexpr std::uintptr_t gcstep = rebase(0x26440e0);
        constexpr std::uintptr_t propagatemark = rebase(0x2641d80);
        constexpr std::uintptr_t sweepgcopage = rebase(0x2644000);
        constexpr std::uintptr_t atomic = rebase(0x262dd90);
        constexpr std::uintptr_t freeobj = rebase(0x2642cd0);
        constexpr std::uintptr_t luaf_freeproto = rebase(0x26593c0);
        constexpr std::uintptr_t loadsafe = rebase(0x269e780);
        constexpr std::uintptr_t luaf_newproto = rebase(0x2658cf0);
        constexpr std::uintptr_t reallymarkobject = rebase(0x2641020);
        constexpr std::uintptr_t traversetable = rebase(0x2641250);
        constexpr std::uintptr_t freeclasspage = rebase(0x265db00);
    }
}
