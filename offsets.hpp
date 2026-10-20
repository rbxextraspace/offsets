#pragma once
#include <cstdint>

// justadumper v0.01
// https://github.com/rbxextraspace/offsets
// dumped in 11.96s
// success rate: 92.86%

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
        constexpr std::uintptr_t luau_execute_false = rebase(0x266d720);
        constexpr std::uintptr_t luau_execute = rebase(0x265f2b0);
        constexpr std::uintptr_t luau_execute_true = rebase(0x266d716);
        constexpr std::uintptr_t luad_throw = rebase(0x262ddc0);
        constexpr std::uintptr_t lua_addfinalizer = rebase(0x261cff0);
        constexpr std::uintptr_t luag_runerror = rebase(0x26585a0);
        constexpr std::uintptr_t luah_getn = rebase(0x2652e70);
        constexpr std::uintptr_t luah_setnum = rebase(0x264e4b0);
        constexpr std::uintptr_t lual_register = rebase(0x2626d60);
        constexpr std::uintptr_t lual_findtable = rebase(0x26283f0);
        constexpr std::uintptr_t lual_error = rebase(0x2623300);
        constexpr std::uintptr_t luao_nilobject = rebase(0x667f848);
        constexpr std::uintptr_t luah_dummynode = rebase(0x667f2e8);
        constexpr std::uintptr_t luac_step = rebase(0x2644300);
        constexpr std::uintptr_t gcstep = rebase(0x26440e0);
        constexpr std::uintptr_t propagatemark = rebase(0x2641d80);
        constexpr std::uintptr_t sweepgcopage = rebase(0x2644000);
        constexpr std::uintptr_t markroot = rebase(0x262dd90);
        constexpr std::uintptr_t atomic = rebase(0x2643a50);
        constexpr std::uintptr_t freeobj = rebase(0x2642cd0);
        constexpr std::uintptr_t luaf_freeproto = rebase(0x26593c0);
        constexpr std::uintptr_t loadsafe = rebase(0x269e780);
        constexpr std::uintptr_t luaf_newproto = rebase(0x2658cf0);
        constexpr std::uintptr_t lual_typeerrorl = rebase(0x2622730);
        constexpr std::uintptr_t lual_checkstack = rebase(0x26248e0);
        constexpr std::uintptr_t luam_freearray = rebase(0x265d590);
        constexpr std::uintptr_t luam_freegco = rebase(0x265d640);
        constexpr std::uintptr_t lual_argerrorl = rebase(0x26226b0);
        constexpr std::uintptr_t reallymarkobject = rebase(0x2641020);
        constexpr std::uintptr_t traversetable = rebase(0x2641250);
        constexpr std::uintptr_t traverseobject = rebase(0x2641400);
        constexpr std::uintptr_t traverseproto = rebase(0x26415b0);
        constexpr std::uintptr_t freeclasspage = rebase(0x265db00);
    }
}
