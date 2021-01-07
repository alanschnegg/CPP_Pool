/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** find.c
*/

#include "string.h"

int find_c(const string_t *this, const char *str, size_t pos)
{
    if (pos > strlen(this->str) || strlen(this->str) < strlen(str))
        return (-1);
    for (int i = pos; this->str[i] != '\0'; i++)
        for (int y = 0, o = i; str[y] == this->str[o]
            && this->str[o] != '\0'; y++, o++)
            if (str[y+1] == '\0')
                return (i);
    return (-1);
}

int find_s(const string_t *this, const string_t *str, size_t pos)
{
    return (find_c(this, str->str, pos));
}
