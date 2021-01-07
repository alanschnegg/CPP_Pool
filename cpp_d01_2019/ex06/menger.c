/*
** EPITECH PROJECT, 2020
** cpp_d01_2019
** File description:
** menger.c
*/

#include "menger.h"

int **make_square(int size)
{
    int **square = malloc(sizeof(int *) * size);

    for (int i = 0; i < size; i++) {
        square[i] = malloc(sizeof(int) * size);
        for (int y = 0; y < size; y++)
            square[i][y] = 1;
    }
    return (square);
}

int **replace_square(int **square, int size, int x, int y)
{
    for (int i = x; i < x + size; i++)
        for (int z = y; z < y + size; z++)
            square[i][z] = 0;
    return (square);
}

int **print_level(int **square, int size, int maxsize)
{
    for (int i = 0; size * i < maxsize; i++)
        for (int y = 0; size * y < maxsize; y++)
            if (((i - 1) % 3 == 0) && ((y - 1) % 3 == 0) && square[i][y] == 1) {
                printf("%03i %03i %03i\n", size, size*i, size*y);
                square = replace_square(square, size, size*i, size*y);
            }
    return (square);
}

void menger(int size, int level)
{
    int **square = make_square(size);
    int maxsize = size;

    for (int i = 0; i < level; i++) {
        size /= 3;
        square = print_level(square, size, maxsize);
    }
    free(square);
}
