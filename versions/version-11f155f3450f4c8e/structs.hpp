#pragma once
#include <cstdint>

// justadumper v0.01
// https://github.com/rbxextraspace/offsets
// dumped in 7.06s

struct CommonHeader {
    uint8_t tt; // 0
    uint8_t memcat; // 1
    uint8_t marked; // 2
};

struct lua_State {
    CommonHeader; // 0
    uint8_t status; // 3
    struct robloxextraspace* userdata; // 8
    TValue* base; // 72
    global_State* global; // 80
    TValue* top; // 88
    lstate_stacksize<int> stacksize; // 112
};

