/*
** EPITECH PROJECT, 2020
** cpp_d02a_2019
** File description:
** double_list2.c
*/

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "double_list.h"

bool double_list_add_elem_at_position(double_list_t *front_ptr,
                                    double  elem , unsigned int position)
{
    double_list_t node = malloc(sizeof(struct doublelist_node));
    double_list_t tmp = *front_ptr;
    unsigned int c = 0;

    if (node == NULL)
        return (false);
    else if (position == 0)
        return (double_list_add_elem_at_front(front_ptr, elem));
    node->value = elem;
    node->next = malloc(sizeof(struct doublelist_node));
    while (c + 1 < position && tmp->next != NULL) {
        tmp = tmp->next;
        c++;
    }
    if (c + 1 != position)
        return (false);
    node->next = tmp->next;
    tmp->next = node;
    return (true);
}

bool double_list_del_elem_at_front(double_list_t *front_ptr)
{
    double_list_t tmp = *front_ptr;

    if (tmp == NULL)
        return (false);
    tmp = tmp->next;
    *front_ptr = tmp;
    return (true);
}

bool double_list_del_elem_at_back(double_list_t *front_ptr)
{
    double_list_t tmp = *front_ptr;

    if (tmp == NULL)
        return (false);
    if (tmp->next != NULL) {
        while (tmp->next->next != NULL)
            tmp = tmp->next;
        tmp->next = NULL;
    } else {
        *front_ptr = NULL;
    }
    return (true);
}

bool double_list_del_elem_at_position(double_list_t *f_ptr, unsigned int pos)
{
    double_list_t tmp = *f_ptr;
    unsigned int c = 0;

    if (tmp == NULL)
        return (false);
    else if (pos == 0)
        return (double_list_del_elem_at_front(f_ptr));
    while (c + 1 != pos && tmp->next->next != NULL) {
        tmp = tmp->next;
        c++;
    }
    if (c + 1 != pos)
        return (false);
    tmp->next = tmp->next->next;
    return (true);
}

double double_list_get_elem_at_front(double_list_t list)
{
    if (list == NULL)
        return (0);
    return (list->value);
}
