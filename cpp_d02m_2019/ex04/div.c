/*
** EPITECH PROJECT, 2020
** cpp_d02m_2019
** File description:
** div.c
*/

#include <stdio.h>
#include "castmania.h"

int integer_div(int a, int b)
{
    if (b == 0)
        return (0);
    return (a/b);
}

float decimale_div(int a, int b)
{
    if (b == 0)
        return (0);
    return ((float)a/(float)b);
}

void exec_div(division_t *operation)
{
    decimale_op_t *d_div;
    integer_op_t *i_div;

    if (operation->div_type == INTEGER) {
        i_div = (integer_op_t*)operation->div_op;
        i_div->res = integer_div(i_div->a, i_div->b);
    } else if (operation->div_type == DECIMALE) {
        d_div = (decimale_op_t*)operation->div_op;
        d_div->res = decimale_div(d_div->a, d_div->b);
    }
}
