/*
** EPITECH PROJECT, 2020
** cpp_d01_2019
** File description:
** main.c
*/

#include "menger.h"

void check_arg(int ac, char **av)
{
    if (ac != 3)
        exit(84);
    for (int i = 1; i < ac; i++)
        for (int y = 0; av[i][y] != '\0'; y++)
            if (av[i][y] < 48 || av[i][y] > 57)
                exit(84);
}

void check_size_level(int size, int level)
{
    int pow_level = 1;

    if (level == 0)
        exit (0);
    for (int i = 0; i < level; i++)
        pow_level *= 3;
    if (size % pow_level != 0)
        exit (84);
}

int main(int ac, char **av)
{
    int size;
    int level;

    check_arg(ac, av);
    size = atoi(av[1]);
    level = atoi(av[2]);
    check_size_level(size, level);
    menger(size, level);
    return (0);
}
