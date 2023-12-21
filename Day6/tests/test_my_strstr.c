/*
** EPITECH PROJECT, 2023
** Pool Day 06
** File description:
** Placeholder
*/


#include "../my.h"

Test(my_strstr, find_first_occurence_of_str_in_str)
{
    char str[] = "HelloWorld";

    cr_assert_str_eq(my_strstr(str, "orld"), strstr(str, "orld"));
    cr_assert_str_eq(my_strstr(str, "lo"), strstr(str, "lo"));
    cr_assert_eq(my_strstr(str, "marvin"), strstr(str, "marvin"));
    cr_assert_str_eq(my_strstr(str, ""), strstr(str, ""));
}

Test (my_strstr, test_if_my_strstr_works)
{
    char test1[] = "Hello";
    char test2[] = "Helo";
    char test3[] = "Hllo";
    char test4[] = "ello";
    char test5[] = "o";
    char test6[] = "H";
    char test7[] = "l";
    char test8[] = "";

    printf("my_strstr(test6, test1) = %s == strstr(test6, test1) = %s\n", my_strstr(test6, test1), strstr(test6, test1));
    printf("my_strstr(test6, test1) = %s == strstr(test6, test1) = %s\n", my_strstr("H", "Hello"), strstr("H", "Hello"));

    cr_assert(my_strstr(test1, test1) == strstr(test1, test1));
    cr_assert(my_strstr(test1, test2) == strstr(test1, test2));
    cr_assert(my_strstr(test1, test3) == strstr(test1, test3));
    cr_assert(my_strstr(test1, test4) == strstr(test1, test4));
    cr_assert(my_strstr(test1, test5) == strstr(test1, test5));
    cr_assert(my_strstr(test1, test6) == strstr(test1, test6));
    cr_assert(my_strstr(test1, test7) == strstr(test1, test7));
    cr_assert(my_strstr(test1, test8) == strstr(test1, test8));
    cr_assert(my_strstr(test2, test1) == strstr(test2, test1));
    cr_assert(my_strstr(test3, test1) == strstr(test3, test1));
    cr_assert(my_strstr(test4, test1) == strstr(test4, test1));
    cr_assert(my_strstr(test5, test1) == strstr(test5, test1));
    cr_assert(my_strstr(test6, test1) == strstr(test6, test1));
    cr_assert(my_strstr(test7, test1) == strstr(test6, test1));
    cr_assert(my_strstr(test8, test1) == strstr(test6, test1));

    cr_assert(my_strstr("Hello", "Hello") == strstr("Hello", "Hello"));
    cr_assert(my_strstr("Hello", "ll") == strstr("Hello", "ll"));
    cr_assert(my_strstr("Hello", "o") == strstr("Hello", "o"));
    cr_assert(my_strstr("ello", "Hello") == strstr("ello", "Hello"));
    cr_assert(my_strstr("Hello", "Hell") == strstr("Hello", "Hell"));
    cr_assert(my_strstr("Helllo", "Hello") == strstr("Helllo", "Hello"));
    cr_assert(my_strstr("Hello", "Helllo") == strstr("Hello", "Helllo"));
    cr_assert(my_strstr("Hello", "bruh") == strstr("Hello", "bruh"));
    cr_assert(my_strstr("Hello", "H") == strstr("Hello", "H"));
}
