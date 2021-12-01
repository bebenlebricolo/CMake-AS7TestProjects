/*
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

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