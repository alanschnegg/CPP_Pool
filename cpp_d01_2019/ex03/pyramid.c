/*
** EPITECH PROJECT, 2020
** cpp_d01_2019
** File description:
** pyramid.c
*/

#include <stdio.h>
#include <stdlib.h>

int find_path(int x, int y, int size, const int **map)
{
    int path0;
    int path1;

    if (x == size)
        return (0);
    path0 = find_path(x + 1, y, size, map);
    path1 = find_path(x + 1, y + 1, size, map);
    return ((path0 < path1) ? map[x][y] + path0 : map[x][y] + path1);
}

int pyramid_path(int size, const int **map)
{
    return (find_path(0, 0, size, map));
}
