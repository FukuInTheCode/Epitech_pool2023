/*
** EPITECH PROJECT, 2023
** Pool Day 08
** File description:
** Placeholder
*/

#include "../include/my.h"

int len_st(char const *str)
{
    int count;
    char c;

    count = 0;
    c = *str;
    while (c != '\0') {
        str++;
    c = *str;
    count ++;
    }
    return count;
}

char *my_putnbr_base2(int nbr, char const *base, char *str)
{
    int base_nb;
    int i = 0;

    if (nbr == 0) {
        str[0] = '0';
        str[1] = '\0';
        return str;
    }
    if (nbr < 0)
        nbr *= -1;
    base_nb = len_st(base);
    while (nbr != 0) {
        str[i] = base[nbr % base_nb];
        nbr /= base_nb;
        i++;
    }
    str[i] = '\0';
    return str;
}

int is_inbase(char c, char* base)
{
	int i;

	i = 0;
	while(base[i] && base[i] != c)
	{
		i = i + 1;
	}
	return (base[i] != '\0');
}

int getnbr_len(char *str, char *base, int start)
{
	int len;

	len = 0;
	while(is_inbase(str[start], base))
	{
		len = len + 1;
		start = start + 1;
	}
	return (len);
}

int get_base_ind(char c, char* base)
{
	int i;

	i = 0;
	while(base[i])
	{
		if(base[i] == c)
		{
			return (i);
		}
		i = i + 1;
	}
	return (-1);
}

int my_getnbr_base2(char *str, char *base)
{
	int i;
	int nb_moins;
	int len_nb;
	int final_nb;
	int power;
	int base_len;

	i = 0;
	nb_moins = 0;
	len_nb = 0;
	final_nb = 0;
	power = 1;
	base_len = my_strlen(base);
	//check le nombre de "-" avant le nombre pour déterminer son signe
	while(str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '-')
		{
			nb_moins = nb_moins + 1;
		}
		i = i + 1;
	}
	//Calcul de la taille du nombre
	len_nb = getnbr_len(str, base, i);
	i = i + (len_nb - 1);
	//On travail en négatif pour gérer l'overflow
	while(len_nb > 0)
	{
		final_nb = final_nb - get_base_ind(str[i], base) * power;
		if(final_nb > 0)
		{
			return (0);
		}
		power = power * base_len;
		len_nb = len_nb - 1;
		i = i - 1;
	}
	if(nb_moins % 2 == 0)
	{
		final_nb = -final_nb;
		if(final_nb < 0)
		{
			return (0);
		}
	}
	return final_nb;
}

char *convert_base2(char const *nbr, char const *base_from, char const *base_to)
{
    int nb_dec = my_getnbr_base2(nbr, base_from);
    char *str = malloc(sizeof(char) * 35);

    my_putnbr_base2(nb_dec, base_to, str);
    if (nb_dec < 0)
        my_strcat(str, "-");
    my_revstr(str);
    return str;
}

Test(convert_base, convert_n_basen_basem)
{
    cr_assert_str_eq(convert_base("100", "01", "0123456789"), convert_base2("100", "01", "0123456789"));
    cr_assert_str_eq(convert_base("FF", "0123456789ABCDEF", "01"), convert_base2("FF", "0123456789ABCDEF", "01"));
    cr_assert_str_eq(convert_base("42", "0123456789", "01"), convert_base2("42", "0123456789", "01"));
    cr_assert_str_eq(convert_base("1101", "01", "012345"), convert_base2("1101", "01", "012345"));
    cr_assert_str_eq(convert_base("A1B2", "0123456789ABCDEF", "pqrstuvwxyz"), convert_base2("A1B2", "0123456789ABCDEF", "pqrstuvwxyz"));
    cr_assert_str_eq(convert_base("10101", "01", "0123456789"), convert_base2("10101", "01", "0123456789"));
    cr_assert_str_eq(convert_base("12A", "0123456789ABCDEF", "01"), convert_base2("12A", "0123456789ABCDEF", "01"));
    cr_assert_str_eq(convert_base("1001001", "01", "012345"), convert_base2("1001001", "01", "012345"));
    cr_assert_str_eq(convert_base("12345", "0123456789", "ABCDEF"), convert_base2("12345", "0123456789", "ABCDEF"));
    cr_assert_str_eq(convert_base("XYZ", "XYZ", "abc"), convert_base2("XYZ", "XYZ", "abc"));
    cr_assert_str_eq(convert_base("FF", "0123456789ABCDEF", "01"), convert_base2("FF", "0123456789ABCDEF", "01"));
    cr_assert_str_eq(convert_base("3E8", "0123456789", "01"), convert_base2("3E8", "0123456789", "01"));
    cr_assert_str_eq(convert_base("1010101", "01", "012345"), convert_base2("1010101", "01", "012345"));
    cr_assert_str_eq(convert_base("1A2B3C", "0123456789ABCDEF", "pqrstuvwxyz"), convert_base2("1A2B3C", "0123456789ABCDEF", "pqrstuvwxyz"));
    cr_assert_str_eq(convert_base("123", "0123456789", "abcdefgh"), convert_base2("123", "0123456789", "abcdefgh"));
    cr_assert_str_eq(convert_base("C0FFEE", "0123456789ABCDEF", "XOXOXO"), convert_base2("C0FFEE", "0123456789ABCDEF", "XOXOXO"));
    cr_assert_str_eq(convert_base("10", "01", "0123456789"), convert_base2("10", "01", "0123456789"));
    cr_assert_str_eq(convert_base("FF", "0123456789ABCDEF", "01"), convert_base2("FF", "0123456789ABCDEF", "01"));
    cr_assert_str_eq(convert_base("3E8", "0123456789", "01"), convert_base2("3E8", "0123456789", "01"));
    cr_assert_str_eq(convert_base("1010101", "01", "012345"), convert_base2("1010101", "01", "012345"));
    cr_assert_str_eq(convert_base("1A2B3C", "0123456789ABCDEF", "pqrstuvwxyz"), convert_base2("1A2B3C", "0123456789ABCDEF", "pqrstuvwxyz"));
    cr_assert_str_eq(convert_base("123", "0123456789", "abcdefgh"), convert_base2("123", "0123456789", "abcdefgh"));
    cr_assert_str_eq(convert_base("C0FFEE", "0123456789ABCDEF", "XOXOXO"), convert_base2("C0FFEE", "0123456789ABCDEF", "XOXOXO"));
    cr_assert_str_eq(convert_base("777", "01234567", "89ABCDEF"), convert_base2("777", "01234567", "89ABCDEF"));
    cr_assert_str_eq(convert_base("1101100", "01", "0123456789ABCDEF"), convert_base2("1101100", "01", "0123456789ABCDEF"));
    cr_assert_str_eq(convert_base("GEEK", "GEEK", "1234"), convert_base2("GEEK", "GEEK", "1234"));
    cr_assert_str_eq(convert_base("MAGIC", "ABCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyz"), convert_base2("MAGIC", "ABCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyz"));
    cr_assert_str_eq(convert_base("54321", "54321", "67890"), convert_base2("54321", "54321", "67890"));
    cr_assert_str_eq(convert_base("0x1F", "0123456789ABCDEF", "01"), convert_base2("0x1F", "0123456789ABCDEF", "01"));
    cr_assert_str_eq(convert_base("1011101110", "01", "3456789"), convert_base2("1011101110", "01", "3456789"));
    cr_assert_str_eq(convert_base("DEAD", "0123456789ABCDEF", "WXYZ"), convert_base2("DEAD", "0123456789ABCDEF", "WXYZ"));
    cr_assert_str_eq(convert_base("XYZ", "XYZ", "abc"), convert_base2("XYZ", "XYZ", "abc"));
    cr_assert_str_eq(convert_base("4C0F", "0123456789ABCDEF", "XYZ"), convert_base2("4C0F", "0123456789ABCDEF", "XYZ"));
    cr_assert_str_eq(convert_base("12345678", "01", "ABCDEFGHIJKLMNOPQRSTUVWXYZ"), convert_base2("12345678", "01", "ABCDEFGHIJKLMNOPQRSTUVWXYZ"));
    cr_assert_str_eq(convert_base("W1N3", "ABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890", "!@#$%^&*()"), convert_base2("W1N3", "ABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890", "!@#$%^&*()"));
    cr_assert_str_eq(convert_base("CATS", "CATS", "DOGS"), convert_base2("CATS", "CATS", "DOGS"));
    cr_assert_str_eq(convert_base("APPLE", "ABCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyz"), convert_base2("APPLE", "ABCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyz"));
    cr_assert_str_eq(convert_base("HELLO", "0123456789", "abcdefghijklmnopqrstuvwxyz"), convert_base2("HELLO", "0123456789", "abcdefghijklmnopqrstuvwxyz"));
    cr_assert_str_eq(convert_base("123456", "01", "3456789"), convert_base2("123456", "01", "3456789"));
    cr_assert_str_eq(convert_base("FEEDFACE", "0123456789ABCDEF", "GHIJKLMNOPQRSTUVWXYZ"), convert_base2("FEEDFACE", "0123456789ABCDEF", "GHIJKLMNOPQRSTUVWXYZ"));
    cr_assert_str_eq(convert_base("ABCDEF", "01", "0123456789ABCDEF"), convert_base2("ABCDEF", "01", "0123456789ABCDEF"));
    cr_assert_str_eq(convert_base("10101100", "01", "0123456789"), convert_base2("10101100", "01", "0123456789"));
    cr_assert_str_eq(convert_base("C0FFEE", "0123456789ABCDEF", "54321"), convert_base2("C0FFEE", "0123456789ABCDEF", "54321"));
    cr_assert_str_eq(convert_base("F1R3WALL", "ABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890", "!@#$%^&*()"), convert_base2("F1R3WALL", "ABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890", "!@#$%^&*()"));
    cr_assert_str_eq(convert_base("CABBAGE", "ABCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyz"), convert_base2("CABBAGE", "ABCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyz"));
    cr_assert_str_eq(convert_base("123123123", "01", "0123456789"), convert_base2("123123123", "01", "0123456789"));
    cr_assert_str_eq(convert_base("W0RLD", "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyz"), convert_base2("W0RLD", "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyz"));
    cr_assert_str_eq(convert_base("11223344", "01", "6789ABCDEF"), convert_base2("11223344", "01", "6789ABCDEF"));
    cr_assert_str_eq(convert_base("FEED", "0123456789ABCDEF", "GHIJKLMNOPQRSTUVWXYZ"), convert_base2("FEED", "0123456789ABCDEF", "GHIJKLMNOPQRSTUVWXYZ"));

}
