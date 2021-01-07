/*
** EPITECH PROJECT, 2020
** cpp_d02a_2019
** File description:
** double_btree1.c
*/

#include <stddef.h>
#include <stdlib.h>
#include "double_btree.h"

bool double_btree_is_empty(double_btree_t tree)
{
    if (tree == NULL)
        return (true);
    return (false);
}

unsigned int double_btree_get_size(double_btree_t tree)
{
    if (tree == NULL)
        return (0);
    return (1 + double_btree_get_size(tree->right) +
    double_btree_get_size(tree->left));
}

unsigned int double_btree_get_depth(double_btree_t tree)
{
    unsigned int depth_left;
    unsigned int depth_right;

    if (tree == NULL)
        return (0);
    depth_left = double_btree_get_depth(tree->left);
    depth_right = double_btree_get_depth(tree->right);
    if (depth_left > depth_right)
        return (depth_left + 1);
    return (depth_right + 1);
}

bool double_btree_create_node(double_btree_t *node_ptr, double value)
{
    double_btree_t tmp = malloc(sizeof(doublebtree_node_t));

    if (tmp == NULL)
        return (false);
    tmp->value = value;
    tmp->left = NULL;
    tmp->right = NULL;
    *node_ptr = tmp;
    return (true);
}

bool double_btree_delete(double_btree_t *root_ptr)
{
    double_btree_t tmp = *root_ptr;

    if (tmp == NULL)
        return (false);
    double_btree_delete(&tmp->left);
    double_btree_delete(&tmp->right);
    free(tmp);
    tmp = NULL;
    *root_ptr = NULL;
    return (true);
}
