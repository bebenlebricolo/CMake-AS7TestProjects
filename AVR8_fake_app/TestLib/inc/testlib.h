#ifndef TEST_LIB_HEADER
#define TEST_LIB_HEADER

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdint.h>

typedef struct
{
    uint8_t var1;
    uint8_t var2;
    uint8_t var3;
} TestLibData_t;

/**
 * @brief pseudo inititalization
 * Copies the data internally
*/
void test_lib_init(TestLibData_t const * const data);

/**
 * @brief clears internal data
*/
void test_lib_clear_memory(void);

#ifdef __cplusplus
}
#endif

#endif /* TEST_LIB_HEADER */