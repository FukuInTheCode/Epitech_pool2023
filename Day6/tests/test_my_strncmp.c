/*
** EPITECH PROJECT, 2023
** Pool Day 06
** File description:
** Placeholder
*/

#include "../my.h"

Test(my_strncmp, compare_n_char)
{
    char str[4] = "A1C";
    char str1[4] = "A2C";
    cr_assert(my_strncmp(str, str1, 2) < 0);
}

Test (my_strncmp, test_if_my_strncmp_works)
{
    char test1[] = "Hello";
    char test2[] = "Helo";
    char test3[] = "Hllo";
    char test4[] = "ello";
    char test5[] = "o";
    char test6[] = "H";
    char test7[] = "l";
    char test8[] = "";
    char test9[] = "Hello A";
    char test10[] = "Hello B";
    char test11[] = "0";
    char test12[] = "1";
    char test13[] = "12345";
    char test14[] = "Hellllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllo";
    char test15[] = "ll";
    char test16[] = "Hell";

    char *tests[] = {test1, test2, test3, test4, test5, test6, test7, test8, test9, test10, test11, test12, test13, test14, test15, test16};
    int num_tests = sizeof(tests) / sizeof(tests[0]);

    for (int i = 0; i < num_tests; i++) {
        for (int j = 0; j < num_tests; j++) {
            for (int n = -100; n < 2000; n++) {
                if (my_strncmp(tests[i], tests[j], n) != strncmp(tests[i], tests[j], n)) {
                    printf("* ERROR\nmy_strncmp(tests[%d] = '%s', tests[%d] = '%s', n = %d) = '%d'\n", i, tests[i], j, tests[j], n, my_strncmp(tests[i], tests[j], n));
                    printf("strncmp(tests[%d] = '%s', tests[%d] = '%s', n = %d) = '%d'\n\n", i, tests[i], j, tests[j], n, strncmp(tests[i], tests[j], n));
                }
                cr_assert(my_strncmp(tests[i], tests[j], n) == strncmp(tests[i], tests[j], n));
            }
        }
    }
}
