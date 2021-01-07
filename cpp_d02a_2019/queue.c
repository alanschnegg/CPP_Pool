/*
** EPITECH PROJECT, 2020
** cpp_d02a_2019
** File description:
** queue.c
*/

#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

unsigned int queue_get_size(queue_t queue)
{
    int c = 1;
    queue_t tmp = queue;

    if (tmp == NULL)
        return (0);
    while (tmp->next != NULL) {
        c++;
        tmp = tmp->next;
    }
    return (c);
}

bool queue_is_empty(queue_t queue)
{
    if (queue == NULL)
        return (true);
    return (false);
}

bool queue_push(queue_t *queue_ptr, void *elem)
{
    queue_t node = malloc(sizeof(node_t));
    queue_t tmp = *queue_ptr;

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
        *queue_ptr = node;
    }
    return (true);
}

bool queue_pop(queue_t *queue_ptr)
{
    queue_t tmp = *queue_ptr;

    if (tmp == NULL)
        return (false);
    tmp = tmp->next;
    *queue_ptr = tmp;
    return (true);
}

void *queue_front(queue_t queue)
{
    if (queue == NULL)
        return (0);
    return (queue->value);
}
