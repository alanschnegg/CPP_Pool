/*
** EPITECH PROJECT, 2020
** cpp_d02m_2019
** File description:
** castmania.c
*/

#include <stdio.h>
#include "castmania.h"

void exec_operation(instruction_type_t instruction_type, void *data)
{
    instruction_t *d = (instruction_t*)data;
    addition_t *aop;
    division_t *dop;
    integer_op_t *idiv;
    decimale_op_t *ddiv;

    if (instruction_type == ADD_OPERATION) {
        exec_add(d->operation);
        aop = (addition_t*)d->operation;
        (d->output_type == VERBOSE) ? (printf("%i\n", aop->add_op.res)) : 0;
    } else if (instruction_type == DIV_OPERATION) {
        exec_div(d->operation);
        dop = (division_t*)d->operation;
        idiv = (dop->div_type == INTEGER) ? (integer_op_t*)dop->div_op : NULL;
        ddiv = (dop->div_type == INTEGER) ? (decimale_op_t*)dop->div_op : NULL;
        if (d->output_type == VERBOSE) {
            (dop->div_type == INTEGER) ? (printf("%i\n", idiv->res)) :
            printf("%f\n", ddiv->res);
        }
    }
}

void exec_instruction(instruction_type_t instruction_type, void *data)
{
    if (instruction_type == PRINT_INT)
        printf("%i\n", *(int*)data);
    else if (instruction_type == PRINT_FLOAT)
        printf("%f\n", *(float*)data);
    exec_operation(instruction_type, data);
}
