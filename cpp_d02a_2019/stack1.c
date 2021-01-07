/*
** EPITECH PROJECT, 2020
** cpp_d02a_2019
** File description:
** stack1.c
*/

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "stack.h"

unsigned int stack_get_size(stack_t stack)
{
    unsigned int c = 1;
    stack_t tmp = stack;

    if (tmp == NULL)
        return (0);
    while (tmp->next != NULL) {
        c++;
        tmp = tmp->next;
    }
    return (c);
}

bool stack_is_empty(stack_t stack)
{
    if (stack == NULL)
        return (true);
    return (false);
}

bool stack_push(stack_t *stack_ptr, void *elem)
{
    stack_t node = malloc(sizeof(node_t));

    if (node == NULL)
        return (false);
    node->value = elem;
    node->next = malloc(sizeof(node_t));
    node->next = *stack_ptr;
    *stack_ptr = node;
    return (true);
}

bool stack_pop(stack_t *stack_ptr)
{
    stack_t tmp = *stack_ptr;

    if (tmp == NULL)
        return (false);
    tmp = tmp->next;
    *stack_ptr = tmp;
    return (true);
}

void *stack_top(stack_t stack)
{
    return (stack->value);
}
