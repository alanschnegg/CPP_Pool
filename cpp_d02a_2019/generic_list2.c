/*
** EPITECH PROJECT, 2020
** cpp_d02a_2019
** File description:
** generic_list2.c
*/

#include <stdlib.h>
#include "generic_list.h"


bool list_del_elem_at_front(list_t *front_ptr)
{
    list_t tmp = *front_ptr;

    if (tmp == NULL)
        return (false);
    tmp = tmp->next;
    *front_ptr = tmp;
    return (true);
}

bool list_del_elem_at_back(list_t *front_ptr)
{
    list_t tmp = *front_ptr;

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

bool list_del_elem_at_position(list_t *front_ptr, unsigned int position)
{
    list_t tmp = *front_ptr;
    unsigned int c = 0;

    if (tmp == NULL)
        return (false);
    else if (position == 0)
        return (list_del_elem_at_front(front_ptr));
    while (c + 1 != position && tmp->next != NULL) {
        tmp = tmp->next;
        c++;
    }
    if (c + 1 != position)
        return (false);
    tmp->next = tmp->next->next;
    return (true);
}

void list_clear(list_t *front)
{
    *front = NULL;
}

void *list_get_elem_at_front(list_t list)
{
    if (list == NULL)
        return (0);
    return (list->value);
}
