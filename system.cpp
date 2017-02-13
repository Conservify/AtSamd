#include "system.h"

extern "C" char *sbrk(int32_t i);

uint32_t system_get_device_id(void)
{
	return DSU->DID.reg;
}

uint32_t system_get_free_memory(void)
{
    char stack_dummy = 0;
    return &stack_dummy - sbrk(0);
}
