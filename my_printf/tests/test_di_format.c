#include "my.h"

Test(my_printf, di_format_tests)
{
    for (int i = 0; i < 1e6; i++) {
        char buf1[1000] = {0};
        char buf2[1000] = {0};
        my_sprintf(buf1, "%d", i);
        sprintf(buf2, "%d", i);
        cr_assert_str_eq(buf1, buf2);
    }
    for (int i = 0; i < 1e6; i++) {
        char buf1[1000] = {0};
        char buf2[1000] = {0};
        my_sprintf(buf1, "%10d", i);
        sprintf(buf2, "%10d", i);
        cr_assert_str_eq(buf1, buf2);
    }
    for (int i = 0; i < 1e6; i++) {
        char buf1[1000] = {0};
        char buf2[1000] = {0};
        my_sprintf(buf1, "%-10d", i);
        sprintf(buf2, "%-10d", i);
        cr_assert_str_eq(buf1, buf2);
    }
    for (int i = 0; i < 1e6; i++) {
        char buf1[1000] = {0};
        char buf2[1000] = {0};
        my_sprintf(buf1, "%10.34d", i);
        sprintf(buf2, "%10.34d", i);
        cr_assert_str_eq(buf1, buf2);
    }
    for (int i = 0; i < 1e6; i++) {
        char buf1[1000] = {0};
        char buf2[1000] = {0};
        my_sprintf(buf1, "%+i", i);
        sprintf(buf2, "%+i", i);
        cr_assert_str_eq(buf1, buf2);
    }
    for (int i = 0; i < 1e6; i++) {
        char buf1[1000] = {0};
        char buf2[1000] = {0};
        my_sprintf(buf1, "%3i", i);
        sprintf(buf2, "%3i", i);
        cr_assert_str_eq(buf1, buf2);
    }
    for (int i = 0; i < 1e6; i++) {
        char buf1[1000] = {0};
        char buf2[1000] = {0};
        my_sprintf(buf1, "% i", i);
        sprintf(buf2, "% i", i);
        cr_assert_str_eq(buf1, buf2);
    }
    for (int i = 0; i < 1e6; i++) {
        char buf1[1000] = {0};
        char buf2[1000] = {0};
        my_sprintf(buf1, "%{d", i);
        sprintf(buf2, "%{d", i);
        cr_assert_str_eq(buf1, buf2);
    }
}
