/*
** EPITECH PROJECT, 2020
** cpp_d02a_2019
** File description:
** double_list3.c
*/

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "double_list.h"

double double_list_get_elem_at_back(double_list_t list)
{
    double_list_t tmp = list;

    if (tmp == NULL)
        return (0);
    while (tmp->next != NULL)
        tmp = tmp->next;
    return (tmp->value);
}

double double_list_get_elem_at_position(double_list_t list, unsigned int pos)
{
    double_list_t tmp = list;
    unsigned int c = 0;

    if (tmp == NULL)
        return (false);
    else if (pos == 0)
        return (double_list_get_elem_at_front(list));
    while (c != pos && tmp->next != NULL) {
        tmp = tmp->next;
        c++;
    }
    if (c != pos)
        return (0);
    return (tmp->value);
}

doublelist_node_t *double_list_get_first_node_with_value(double_list_t list,
                                                        double value)
{
    double_list_t tmp = list;

    if (tmp == NULL)
        return (NULL);
    while (tmp->next != NULL) {
        if (tmp->value == value)
            return (tmp);
        tmp = tmp->next;
    }
    return (NULL);
}
