#include "testlib.h"
#include <string.h>

static TestLibData_t internal = {0};

void test_lib_init(TestLibData_t const * const data)
{
    if (NULL != data)
    {
        memcpy(&internal, data, sizeof(TestLibData_t);)
    }
}


void test_lib_clear_memory(void)
{
    memset(&internal, 0, sizeof(TestLibData_t));
}