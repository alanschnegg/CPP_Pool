/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** c_str.c
*/

#include "string.h"

const char *c_str(const string_t *this)
{
    if (this == NULL)
        return (NULL);
    return (this->str);
}
