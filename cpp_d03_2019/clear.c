/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** clear.c
*/

#include "string.h"

void clear(string_t *this)
{
    this->str[0] = '\0';
    this->str = realloc(this->str, sizeof(char));
}
