/*
 * tests.c
 * Distributed under terms of the MIT license.
 */

#include <criterion/criterion.h>
#include <stddef.h>

size_t get_count(const char *s);

Test(Sample_Test, should_return_the_vowel_count)
{
    cr_assert_eq(get_count("abracadabra"), 5);
    cr_assert_eq(get_count(""), 0);
}

