/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** at.c
*/

#include "string.h"

char at(const string_t *this, size_t pos)
{
    if (pos > strlen(this->str))
        return (-1);
    return (this->str[pos]);
}
