#include "my.h"

Test(my_printf, c_format_tests)
{
    for (int i = 0; i < 128; i++) {
        char buf1[1000] = {0};
        char buf2[1000] = {0};
        my_sprintf(buf1, "%c", i);
        sprintf(buf2, "%c", i);
        cr_assert_str_eq(buf1, buf2);
    }
    for (int i = 0; i < 128; i++) {
        char buf1[1000] = {0};
        char buf2[1000] = {0};
        my_sprintf(buf1, "%23c", i);
        sprintf(buf2, "%23c", i);
        cr_assert_str_eq(buf1, buf2);
    }
}
