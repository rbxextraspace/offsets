#pragma once
#include <cstdint>

// justadumper v0.01
// https://github.com/rbxextraspace/offsets
// dumped in 11.96s

struct CommonHeader {
    uint8_t tt; // 0
    uint8_t memcat; // 1
    uint8_t marked; // 2
};

struct stringtable {
    TString** hash; // 0
    int size; // 8
    uint32_t nuse; // 12
};

struct lua_State {
    CommonHeader; // 0
    uint8_t status; // 3
    bool singlestep; // 4
    struct roblox_extra_space* userdata; // 8
    unsigned short nCcalls; // 16
    unsigned short baseCcalls; // 18
    CallInfo* base_ci; // 40
    LuaTable* finalizers; // 48
    CallInfo* ci; // 64
    TValue* base; // 72
    global_State* global; // 80
    TValue* top; // 88
    lstate_stacksize<int> stacksize; // 112
};

