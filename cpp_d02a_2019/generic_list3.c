/*
** EPITECH PROJECT, 2020
** cpp_d02a_2019
** File description:
** generic_list3.c
*/

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "generic_list.h"

void *list_get_elem_at_back(list_t list)
{
    list_t tmp = list;

    if (tmp == NULL)
        return (0);
    while (tmp->next != NULL)
        tmp = tmp->next;
    return (tmp->value);
}

void *list_get_elem_at_position(list_t list, unsigned int position)
{
    list_t tmp = list;
    unsigned int c = 0;

    if (tmp == NULL)
        return (false);
    else if (position == 0)
        return (list_get_elem_at_front(list));
    while (c != position && tmp->next != NULL) {
        tmp = tmp->next;
        c++;
    }
    if (c != position)
        return (0);
    return (tmp->value);
}

void list_dump(list_t list, value_displayer_t val_disp)
{
    list_t tmp = list;

    while (tmp != NULL) {
        (val_disp)(tmp->value);
        tmp = tmp->next;
    }
}

node_t *list_get_first_node_with_value(list_t list, void *value,
                                    value_comparator_t val_comp)
{
    list_t tmp = list;

    if (tmp == NULL)
        return (NULL);
    while (tmp->next != NULL) {
        if ((val_comp)(list->value, value) == 0)
            return (tmp);
        tmp = tmp->next;
    }
    return (NULL);
}
