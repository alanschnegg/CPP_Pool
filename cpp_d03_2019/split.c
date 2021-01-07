/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** split.c
*/

#include "string.h"

static int nbr_separator(const char *str, char separator)
{
    int i = 1;

    for (int y = 0; str[y] != '\0'; y++)
        if (str[y] == separator)
            i++;
    return (i);
}

static int len_split(const char *str, char separator, int pos)
{
    int y = pos;

    for (; str[y] != '\0'; y++)
        if (str[y] == separator)
            return (y - pos);
    return (y - pos);
}

static int tablen(char **tab)
{
    int i = 0;

    for (; tab[i] != NULL; i++);
    return (i);
}

char **split_c(const string_t *this, char sep)
{
    int nbr = nbr_separator(this->str, sep);
    char **tab = malloc(sizeof(char*) * (nbr + 1));
    int y = 0;
    int o = 0;

    tab[o] = malloc(sizeof(char) * (len_split(this->str, sep, 0) + 1));
    for (int i = 0; this->str[i] != '\0'; i++) {
        tab[o][y] = '\0';
        if (this->str[i] == sep) {
            y = 0;
            o++;
            i++;
            tab[o] = malloc(sizeof(char) * (len_split(this->str, sep, i) + 1));
            if (this->str[i] == '\0')
                break;
        }
        tab[o][y++] = this->str[i];
    }
    tab[o][y] = '\0';
    tab[o + 1] = NULL;
    return (tab);
}

string_t **split_s(const string_t *this, char separator)
{
    char **tmp = split_c(this, separator);
    int nbr = tablen(tmp);
    string_t **stab = malloc(sizeof(string_t*) * (nbr + 1));

    for (int i = 0; i < nbr; i++) {
        stab[i] = malloc(sizeof(string_t) * 1);
        string_init(stab[i], tmp[i]);
    }
    stab[nbr] = NULL;
    for (int i = 0; tmp[i] != NULL; i++)
        free(tmp[i]);
    free(tmp);
    return (stab);
}
