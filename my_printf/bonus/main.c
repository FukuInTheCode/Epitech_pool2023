#include "include/my.h"

int main(void)
{
    int a[] = {27, 5, 2005, 0};

    char *b[] = {"Tom", "est", "le", "pire", "au monde"};

    my_printf("%rs\n", 5, b);
    return 0;
}
