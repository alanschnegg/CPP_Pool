/*
** EPITECH PROJECT, 2020
** cpp_d02m_2019
** File description:
** mem_ptr.c
*/

#include "mem_ptr.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void add_str(const char *str1, const char *str2, char **res)
{
    *res = malloc(sizeof(char) * (strlen(str1) + strlen(str2) + 1));
    *res = strdup(str1);
    *res = strcat(*res, str2);
}

void add_str_struct(str_op_t *str_op)
{
    int size = strlen(str_op->str1) + strlen(str_op->str2) + 1;

    str_op->res = malloc(sizeof(char) * size);
    str_op->res = strdup(str_op->str1);
    str_op->res = strcat(str_op->res, str_op->str2);
}
