/*
 * tests.c
 * Distributed under terms of the MIT license.
 */

#include <criterion/criterion.h>
#include <stddef.h>

char *archiving(char *input);

Test(sample_cases, should_pass)
{
    char *ptr;
    ptr = archiving("AAHBBBCCCDDTTTTTTTEEEEEAAAAAAAAAAA");
    cr_assert_eq(strcmp(ptr, "2AH3B3C2D7T5E11A"), 0);
    free(ptr);
    ptr = archiving("WWWHHHTTTTTTTTP");
    cr_assert_eq(strcmp(ptr, "3W3H8TP"), 0);
    free(ptr);
}

