/*
** EPITECH PROJECT, 2020
** cpp_d01_2019
** File description:
** drawing.c
*/

#include  <stdlib.h>
#include  <unistd.h>
#include  <fcntl.h>
#include  <string.h>
#include "drawing.h"
#include "bitmap.h"

void draw_square(uint32_t **img, const point_t *origin, size_t size, uint32_t c)
{
    for (int i = origin->x; i < origin->x + size; i++)
        for (int y = origin->y; y < origin->y + size; y++)
            img[i][y] = c;
}
