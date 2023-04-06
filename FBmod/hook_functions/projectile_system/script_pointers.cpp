#include "script_pointers.h"

// Initially intended for all script pointers to be written to this array, but it turns out the game will still try to read the script pointers after the thing is shot (i.e. remaining on the ground)
// This pose a problem where two "custom" made special projectile will cause crash, as the next projectile will override the current pointers
// Made me waste two weeks of my life trying to find the root cause
// Just use this for debug purpose.
int script_pointers[500];