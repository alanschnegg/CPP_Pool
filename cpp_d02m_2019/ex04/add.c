/*
** EPITECH PROJECT, 2020
** cpp_d02m_2019
** File description:
** add.c
*/

#include <stdio.h>
#include <stdlib.h>
#include "castmania.h"

int normal_add(int a, int b)
{
    return (a + b);
}

int absolute_add(int a, int b)
{
    return (abs(a) + abs(b));
}

void exec_add(addition_t *op)
{
    if (op->add_type == NORMAL) {
        op->add_op.res = normal_add(op->add_op.a, op->add_op.b);
    } else if (op->add_type == ABSOLUTE)
        op->add_op.res = absolute_add(op->add_op.a, op->add_op.b);
}
