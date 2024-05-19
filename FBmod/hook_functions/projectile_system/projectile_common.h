#pragma once
#include "ida_macros.h"

__int64 assist_shoot_projectile(
    const unsigned int *a2,
    int a3,
    unsigned int toc,
    unsigned int script,
    uint projectile_hash);

__int64 delay(
    const unsigned int *a2,
    int a3,
    unsigned int toc,
    uint delay_frame);

unsigned int hide_bone(const unsigned int* a1, int bone_index);