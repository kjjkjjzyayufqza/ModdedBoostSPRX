#include "unit_initializations.h"

#include "stdafx.h"
#include "unit_specific_functions/double_x.h"
#include "unit_specific_functions/jagd_doga.h"

int custom_initialization_unit_id[500];

unsigned int initialize_unit(const unsigned long a1, const int unit_id)
{
    // printf("debug_jagd_doga_initialize: %d \n", reinterpret_cast<unsigned int*>(jagd_doga_model_initialization));
    
    switch (unit_id)
    {
        case 0x1b63:
            return double_x_init(a1);
        // case 0x4291:
        //     return jagd_doga_initialize(a1);
        default:
            break;
    }
}

void init_custom_initialization_unit_id()
{
    custom_initialization_unit_id[0] = 0x1b63;
    custom_initialization_unit_id[1] = 0x4291;
}
