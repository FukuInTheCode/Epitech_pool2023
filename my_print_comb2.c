#include "my.h"

static void my_print_second(char i, char j)
{
    for (char k = i; k <= '9'; k++) {
        for (char l = j; l <= '9'; l++) {
            my_putchar(i);
            my_putchar(j);
            my_putchar(' ');
            my_putchar(k);
            my_putchar(l);
        }
    }
}

int my_print_comb2(void)
{
    for (char i = '0'; i <= '9'; i++) {
        for (char j = '0'; j <= '9'; j++) {
            my_print_second(i, j);
        }
    }
    my_putchar('\b');
    my_putchar('\b');
}
