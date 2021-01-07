/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** append.c
*/

#include "string.h"

void append_c(string_t *this, const char *ap)
{
    int size = sizeof(char) * (strlen(this->str) + strlen(ap) + 1);

    this->str = realloc(this->str, size);
    this->str = strcat(this->str, ap);
}

void append_s(string_t *this, const string_t *ap)
{
    append_c(this, ap->str);
}
