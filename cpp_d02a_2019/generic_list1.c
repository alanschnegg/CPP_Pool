/*
** EPITECH PROJECT, 2020
** cpp_d02a_2019
** File description:
** generic_list1.c
*/

#include <stdlib.h>
#include "generic_list.h"

unsigned int list_get_size(list_t list)
{
    int c = 1;
    list_t tmp = list;

    if (tmp == NULL)
        return (0);
    while (tmp->next != NULL) {
        c++;
        tmp = tmp->next;
    }
    return (c);
}

bool list_is_empty(list_t  list)
{
    if (list == NULL)
        return (true);
    return (false);
}

bool list_add_elem_at_front(list_t *front_ptr, void *elem)
{
    list_t node = malloc(sizeof(node_t));

    if (node == NULL)
        return (false);
    node->value = elem;
    node->next = malloc(sizeof(node_t));
    node->next = *front_ptr;
    *front_ptr = node;
    return (true);
}

bool list_add_elem_at_back(list_t *front_ptr, void *elem)
{
    list_t node = malloc(sizeof(node_t));
    list_t tmp = *front_ptr;

    if (node == NULL)
        return (false);
    node->value = elem;
    node->next = malloc(sizeof(node_t));
    node->next = NULL;
    if (tmp != NULL) {
        while (tmp->next != NULL)
            tmp = tmp->next;
        tmp->next = node;
    } else {
        *front_ptr = node;
    }
    return (true);
}

bool list_add_elem_at_position(list_t *front_ptr, void *elem, unsigned int pos)
{
    list_t node = malloc(sizeof(node_t));
    list_t tmp = *front_ptr;
    unsigned int c = 0;

    if (node == NULL)
        return (false);
    else if (pos == 0)
        return (list_add_elem_at_front(front_ptr, elem));
    node->value = elem;
    node->next = malloc(sizeof(node_t));
    while (c + 1 < pos && tmp->next != NULL) {
        tmp = tmp->next;
        c++;
    }
    if (c + 1 != pos)
        return (false);
    node->next = tmp->next;
    tmp->next = node;
    return (true);
}
