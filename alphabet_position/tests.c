/*
 * tests.c
 * Distributed under terms of the MIT license.
 */

#include <criterion/criterion.h>
#include <time.h>
#include <string.h>


char *alphabet_position(char *text);


Test(sample_cases, should_pass_all_the_tests_provided) {
    char *ptr;
    ptr = alphabet_position("The sunset sets at twelve o' clock.");
    cr_assert_eq(strcmp(ptr, "20 8 5 19 21 14 19 5 20 19 5 20 19 1 20 20 23 5 12 22 5 15 3 12 15 3 11"), 0);
    free(ptr);
    ptr = alphabet_position("The narwhal bacons at midnight.");
    cr_assert_eq(strcmp(ptr, "20 8 5 14 1 18 23 8 1 12 2 1 3 15 14 19 1 20 13 9 4 14 9 7 8 20"), 0);
    free(ptr);
}


Test(number_tests, should_pass) {
    srand(time(NULL));
    char in[11] = {0};
    char *ptr;
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 10; j++) {
            char c = rand() % 10;
            in[j] = c + '0';
        }
        ptr = alphabet_position(in);
        cr_assert_eq(strcmp(ptr, ""), 0);
        free(ptr);
    }
}

