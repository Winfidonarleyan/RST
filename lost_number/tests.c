/*
 * tests.c
 * Distributed under terms of the MIT license.
 */

#include <criterion/criterion.h>
#include <stddef.h>


int lost_number(int* a, size_t size);


Test(Sample_Test, should_return_the_lost_number)
{
    {
        int input[] = {1, 6, 8, 3, 9, 10, 2, 4, 7};
        cr_assert_eq(lost_number(input, 9), 5);
    }
    {
        int input[] = {};
        cr_assert_eq(lost_number(input, 0), 0);
    }
}

