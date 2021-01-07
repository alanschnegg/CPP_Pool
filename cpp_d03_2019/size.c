/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** size.c
*/

#include "string.h"

int size(const string_t *this)
{
    if (this->str == NULL)
        return (-1);
    return (strlen(this->str));
}
