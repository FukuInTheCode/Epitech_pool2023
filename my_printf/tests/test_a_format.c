#include "my.h"

Test(my_printf, f_format_tests)
{
    for (double i = -1e-6; i < 1; i += 1e-6) {
        char buf1[1000] = {0};
        char buf2[1000] = {0};
        my_sprintf(buf1, "%f", i);
        sprintf(buf2, "%f", i);
        cr_assert_str_eq(buf1, buf2);
    }
}
