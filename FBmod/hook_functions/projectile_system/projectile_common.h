#pragma once
#include "ida_macros.h"

const unsigned int saber_green_effect_hash = 0x965C9901;
const unsigned int saber_blue_effect_hash = 0xE15BA997;
const unsigned int saber_teal_effect_hash = 0x7F3F3C34;
const unsigned int saber_orange_effect_hash = 0x08380CA2;
const unsigned int saber_pink_effect_hash = 0x91315D18;

__int64 assist_shoot_projectile(
    const unsigned int *a2,
    int a3,
    uint projectile_hash);

__int64 delay(
    const unsigned int *a2,
    int a3,
    uint delay_frame);

unsigned int hide_bone(const unsigned int* a1, int bone_index);

unsigned int rotate_bone(
    const unsigned int* a1, 
    int bone_index,
    double x,
    double y,
    double z,
    double w,
    int unknown);

unsigned int scale_bone(
    const unsigned int* a1,
    int bone_index,
    double x,
    double y,
    double z,
    double w,
    int unknown);

__int64 assist_shoot_initial_animation_script(
    unsigned int a1,
    unsigned int *a2,
    unsigned int toc,
    int animation_index,
    float aim_animation_speed_multiplier);

unsigned int create_working_memory(int size);

void add_projectile(
	unsigned int working_memory,
	unsigned int projectile_hash,
	unsigned int a3);

void add_delay(
	unsigned int working_memory,
	unsigned int delay_frame,
	unsigned int a3);

void execute_working_memory(unsigned int* a2, unsigned int working_memory);