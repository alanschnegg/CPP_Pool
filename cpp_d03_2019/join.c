/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** join.c
*/

#include "string.h"

void join_c(string_t *this, char delim, const char *const *tab)
{
    char sep[2];

    sep[0] = delim;
    sep[1] = '\0';
    assign_c(this, "\0");
    for (int i = 0; tab[i] != NULL; i++) {
        append_c(this, tab[i]);
        if (tab[i + 1] != NULL)
            append_c(this, sep);
    }
}

void join_s(string_t *this, char delim, const string_t *const *tab)
{
    char sep[2];

    sep[0] = delim;
    sep[1] = '\0';
    assign_c(this, "\0");
    for (int i = 0; tab[i] != NULL; i++) {
        append_s(this, tab[i]);
        if (tab[i + 1] != NULL)
            append_c(this, sep);
    }
}
