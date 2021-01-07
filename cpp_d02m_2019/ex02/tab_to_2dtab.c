/*
** EPITECH PROJECT, 2020
** cpp_d02m_2019
** File description:
** tab_to_2dtab.c
*/

#include <stdio.h>
#include <stdlib.h>

void tab_to_2dtab(const int *tab, int length, int width, int ***res)
{
    int o = 0;

    *res = malloc(sizeof(int *) * length);
    for (int i = 0; i < length; i++) {
        (*res)[i] = malloc(sizeof(int) * width);
        for (int y = 0; y < width; y++)
            (*res)[i][y] = tab[o++];
    }
}
