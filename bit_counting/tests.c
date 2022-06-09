/*
 * tests.c
 * Distributed under terms of the MIT license.
 */

#include <criterion/criterion.h>

size_t countBits(unsigned value);

Test(CoreTests, ShouldPassAllTheTestsProvided) {
    {
        int received = countBits(0);
        int expected = 0;
        cr_assert_eq(received, expected, "Expected: %d. Received: %d.", expected, received);
    }

    {
        int received = countBits(4);
        int expected = 1;
        cr_assert_eq(received, expected, "Expected: %d. Received: %d.", expected, received);
    }

    {
        int received = countBits(7);
        int expected = 3;
        cr_assert_eq(received, expected, "Expected: %d. Received: %d.", expected, received);
    }

    {
        int received = countBits(9);
        int expected = 2;
        cr_assert_eq(received, expected, "Expected: %d. Received: %d.", expected, received);
    }

    {
        int received = countBits(10);
        int expected = 2;
        cr_assert_eq(received, expected, "Expected: %d. Received: %d.", expected, received);
    }
}

