/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** assign.c
*/

#include "string.h"

void assign_c(string_t *this, const  char *s)
{
    if (this->str != NULL)
        string_destroy(this);
    string_init(this, s);
}

void assign_s(string_t *this, const  string_t *str)
{
    assign_c(this, str->str);
}
