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

#include <stdlib.h>
#include <string.h>

#include "testlib.h"

int main(void)
{
    TestLibData_t data = {.var1 = 28U, .var2 = 35U, .var3 = 12U};

    test_lib_clear_memory();
    test_lib_init(&data);
    test_lib_clear_memory();

    while(true)
    {
        // Do nothing
    }

    return 0;
}