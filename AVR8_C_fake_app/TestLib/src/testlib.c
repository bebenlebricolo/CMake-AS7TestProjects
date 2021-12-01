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

#include "testlib.h"
#include <string.h>

static TestLibData_t internal = {0};

void test_lib_init(TestLibData_t const * const data)
{
    if (NULL != data)
    {
        memcpy(&internal, data, sizeof(TestLibData_t));
    }
}


void test_lib_clear_memory(void)
{
    memset(&internal, 0, sizeof(TestLibData_t));
}