
void my_putchar(char c);

static void my_print(char n)
{
	for (char i = n + 1; i <= '9'; i++) {
		my_putchar(n);
		my_putchar(i);
		if (n == '8' && i == '9')
			continue;
		my_putchar(',');
		my_putchar(' ');
	}
}

int my_print_comb2(void)
{
	for (char i = '0'; i <= '8'; i++)
		my_print(i);
	return 0;
}
