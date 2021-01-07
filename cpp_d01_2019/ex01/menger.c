/*
** EPITECH PROJECT, 2020
** cpp_d01_2019
** File description:
** menger.c
*/

#include "menger.h"

static void recursive(int level, int size, int abs, int ord)
{
    for (int i = 0; i < 3; i++)
        for (int y = 0; y < 3; y++)
            if (i != 1 || y != 1)
                menger(level - 1, size, i * size + abs, y * size + ord);
}

void menger(int level, int size, int abs, int ord)
{
    size /= 3;
    if (level > 0)
        printf("%03i %03i %03i\n", size, size + abs, size + ord);
    if (level > 1)
        recursive(level, size, abs, ord);
}
