#include "unit_initialization_common.h"

#include "ida_macros.h"

unsigned int initialize_model(
    const unsigned int working_memory,
    const int a2,
    const unsigned int model_hash,
    const int a4,
    const float a5,
    const float a6,
    const float a7,
    const float a8,
    const float a9)
{
    const unsigned int working_memory_offset = (a2 * 28) + working_memory + 52;
    *reinterpret_cast<uint32*>(working_memory_offset) = model_hash;
    *reinterpret_cast<uint32*>(working_memory_offset + 4LL) = a4;
    *reinterpret_cast<float*>(working_memory_offset + 8LL) = a5;
    *reinterpret_cast<float*>(working_memory_offset + 0xCLL) = a6;
    *reinterpret_cast<float*>(working_memory_offset + 0x10LL) = a7;
    *reinterpret_cast<float*>(working_memory_offset + 0x14LL) = a8;
    *reinterpret_cast<float*>(working_memory_offset + 0x18LL) = a9;
    return working_memory;
}
