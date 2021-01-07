/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** insert.c
*/

#include "string.h"

void insert_c(string_t *this, size_t pos, const char *str)
{
    int size = sizeof(char) * (strlen(this->str) + strlen(str) + 1);
    char *tmp = strdup(this->str);
    int i = pos;

    if (pos > strlen(this->str))
        pos = strlen(this->str);
    this->str = realloc(this->str, size);
    for (int y = 0; str[y] != '\0'; y++, i++)
        this->str[i] = str[y];
    for (int y = pos; tmp[y] != '\0'; y++, i++)
        this->str[i] = tmp[y];
    this->str[i] = '\0';
    free(tmp);
}

void insert_s(string_t *this, size_t pos, const string_t *str)
{
    insert_c(this, pos, str->str);
}
