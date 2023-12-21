/*
** EPITECH PROJECT, 2023
** Pool Day Rush2
** File description:
** Placeholder
*/

#include "include/my.h"

double const values[][4] = {
    { 8.167, 7.636, 7.516, 11.525 },
    { 1.492, 0.901, 1.888, 2.215 },
    { 2.782, 3.260, 2.732, 4.019 },
    { 4.253, 3.669, 5.076, 5.010 },
    { 12.702, 14.715, 16.396, 12.181 },
    { 2.228, 1.066, 1.656, 0.692 },
    { 2.015, 0.866, 3.009, 1.768 },
    { 6.094, 0.937, 4.577, 1.973 },
    { 6.966, 7.529, 6.550, 6.247 },
    { 0.253, 0.813, 0.268, 2.493 },
    { 1.772, 0.074, 1.417, 0.026 },
    { 4.025, 4.456, 3.437, 4.967 },
    { 2.406, 2.968, 2.534, 3.157 },
    { 6.749, 7.095, 9.776, 6.712 },
    { 7.507, 5.796, 2.594, 8.683 },
    { 1.929, 2.521, 0.670, 2.510 },
    { 0.095, 1.362, 0.018, 0.877 },
    { 5.987, 6.693, 7.003, 6.871 },
    { 6.327, 7.948, 7.270, 7.977 },
    { 9.056, 7.244, 6.154, 4.632 },
    { 2.758, 6.311, 4.166, 3.927 },
    { 0.978, 1.838, 0.846, 1.138 },
    { 2.360, 0.049, 1.921, 0.027 },
    { 0.250, 0.427, 0.034, 0.515 },
    { 1.974, 0.708, 0.039, 1.433 },
    { 0.074, 0.326, 1.134, 0.467 }
};

char *const name_arr[] = {
    "=> English",
    "=> French",
    "=> German",
    "=> Spanish"
};

static void print_min(double *lang_arr)
{
    int min = 0;

    for (int i = 1; i < 4; i++) {
        min = min * (lang_arr[min] <= lang_arr[i]) +
            i * (lang_arr[min] > lang_arr[i]);
    }
    my_putstr(name_arr[min]);
}

static double my_sqrt(double n)
{
    double x = n;
    double y = 1;
    double e = 1e-6;

    while (x - y > e) {
        x = (x + y) / 2;
        y = n / x;
    }
    return x;
}

void find_lang(char *str)
{
    int letter_freq = 0;
    double lang_dist[4] = { 0 };
    int tmp;

    for (int i = 'a'; i <= 'z'; i++) {
        letter_freq = rush_frequence(str, rush_count(str, i)) * 100;
        for (int j = 0; j < 4; j++) {
            tmp = (letter_freq - values[i - 'a'][j]);
            lang_dist[j] += tmp * tmp;
        }
    }
    for (int i = 0; i < 4; i++)
        lang_dist[i] = my_sqrt(lang_dist[i]);
    print_min(lang_dist);
}
