/*
** EPITECH PROJECT, 2020
** cpp_d02a_2019
** File description:
** double_btree2.c
*/

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "double_btree.h"

double double_btree_get_max_value(double_btree_t tree)
{
    double max_left;
    double max_right;
    double base;
    double max;

    if (tree == NULL)
        return (0);
    base = tree->value;
    max_left = double_btree_get_max_value(tree->left);
    max_right = double_btree_get_max_value(tree->right);
    max = (max_right > max_left) ? max_right : max_left;
    max = (base > max) ? base : max;
    return (max);
}

double double_btree_get_min_value(double_btree_t tree)
{
    double min_left;
    double min_right;
    double base;
    double min;

    if (tree == NULL)
        return (0);
    base = tree->value;
    min_left = double_btree_get_min_value(tree->left);
    min_right = double_btree_get_min_value(tree->right);
    if (tree->left != NULL && tree->right != NULL) {
        min = (min_left < min_right) ? min_left : min_right;
        return ((min < base) ? min : base);
    } else if (tree->left != NULL)
        return ((min_left < base) ? min_left : base);
    else if (tree->right != NULL)
        return ((min_right < base) ? min_right : base);
    return (base);
}
