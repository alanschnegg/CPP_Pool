/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** copy.c
*/

#include "string.h"

size_t copy(const string_t *this, char *s, size_t n, size_t pos)
{
    size_t c = pos;
    size_t i = 0;

    if (pos > strlen(this->str))
        return (0);
    for (; c < pos + n && this->str[c] != '\0'; c++, i++)
        s[i] = this->str[c];
    for (size_t y = i; y < n; y++)
        s[y] = '\0';
    s[i] = '\0';
    if (this->str[c] == '\0' && c != pos + n)
        i++;
    return (i);
}
