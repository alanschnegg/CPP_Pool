/*
** EPITECH PROJECT, 2020
** cpp_d02a_2019
** File description:
** double_list1.c
*/

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "double_list.h"

unsigned int double_list_get_size(double_list_t list)
{
    int c = 1;
    double_list_t tmp = list;

    if (list == NULL)
        return (0);
    while (tmp->next != NULL) {
        c++;
        tmp = tmp->next;
    }
    return (c);
}

bool double_list_is_empty(double_list_t list)
{
    if (list == NULL)
        return (true);
    return (false);
}

void double_list_dump(double_list_t list)
{
    double_list_t tmp = list;

    while (tmp != NULL) {
        printf("%f\n", tmp->value);
        tmp = tmp->next;
    }
}

bool double_list_add_elem_at_front(double_list_t *front_ptr , double  elem)
{
    double_list_t node = malloc(sizeof(struct doublelist_node));

    if (node == NULL)
        return (false);
    node->value = elem;
    node->next = malloc(sizeof(struct doublelist_node));
    node->next = *front_ptr;
    *front_ptr = node;
    return (true);
}

bool double_list_add_elem_at_back(double_list_t *front_ptr, double  elem)
{
    double_list_t node = malloc(sizeof(struct doublelist_node));
    double_list_t tmp = *front_ptr;

    if (node == NULL)
        return (false);
    node->value = elem;
    node->next = malloc(sizeof(struct doublelist_node));
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
