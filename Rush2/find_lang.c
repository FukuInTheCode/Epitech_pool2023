/*
** EPITECH PROJECT, 2023
** Pool Day Rush2
** File description:
** Placeholder
*/

#include "include/my.h"

char *const english_words[] = { "i", "the", "they", "them", "yes", "thanks",
    "you", "hello", "with", "my", "mine", "for", "if", "while", "tea", NULL };

char *const french_words[] = { "bonjour", "bonsoir", "je", "tu", "il", "ils",
    "elle", "elles", "vous", "nous", "vos", "suis", "etre", "avoir", "sommes",
    "le", "tout", "toutes", "ceci", "cela", "chien", "merci", "baguette", "oui",
    "un", "une", "les", NULL };

char *const german_words[] = { "mich", "sie", "dem", "ja", "der", "ein", "eine",
    "dich", "ist", "sich", "das", "und", "wir", "ich", "ihr", "auf", "dein", "guten",
    "wie", "euer", "danke", NULL };

char *const spanish_words[] = { "el", "nada", "ahora", "nadie", "algo", "casi", "porque",
    "como", "pues", "cuando", "derecha", "desde", "donde", "durante", "entonces", "gracias",
    "hasta", "hoy", "menos", NULL };

static void max_count(int eng, int fr, int ger, int spa)
{
    if (eng >= fr && eng >= ger && eng >= spa)
        my_putstr("=> English");
    if (fr > eng && fr >= ger && fr >= spa)
        my_putstr("=> French");
    if (ger > eng && ger >= fr && ger >= spa)
        my_putstr("=> German");
    if (spa > eng && spa >= ger && spa >= fr)
        my_putstr("=> Spanish");
}

void find_lang(char *str)
{
    char **tab = my_str_to_word_array(str);
    uint32_t eng_count = 0;
    uint32_t fr_count = 0;
    uint32_t ger_count = 0;
    uint32_t spa_count = 0;

    for (int i = 0; tab[i]; i++) {
        for (int j = 0; english_words[j]; j++)
            eng_count += (my_strcmp(my_strlowcase(tab[i]), english_words[j]) == 0);
        for (int j = 0; french_words[j]; j++)
            fr_count += (my_strcmp(my_strlowcase(tab[i]), french_words[j]) == 0);
        for (int j = 0; german_words[j]; j++)
            ger_count += (my_strcmp(my_strlowcase(tab[i]), german_words[j]) == 0);
        for (int j = 0; spanish_words[j]; j++)
            spa_count += (my_strcmp(my_strlowcase(tab[i]), spanish_words[j]) == 0);
        free(tab[i]);
    }
    free(tab);
    max_count(eng_count, fr_count, ger_count, spa_count);
}
