//
// EPITECH PROJECT, 2020
// cpp_d15_2019
// File description:
// ex02.hpp
//

#ifndef EX02_HPP_
# define EX02_HPP_

#include <iostream>

template <typename T>
T min(T a, T b)
{
    std::cout << "template min" << std::endl;
    if (a <= b)
        return (a);
    return (b);
}

int min(int a, int b)
{
    std::cout << "non-template min" << std::endl;
    if (a <= b)
        return (a);
    return (b);
}

template <typename T>
T templateMin(T *tab, size_t size)
{
    T tmp = tab[0];

    if (size == 1)
        return (tab[0]);
    for (size_t i = 1; i < size; i++) {
        tmp = min<T>(tmp, tab[i]);
    }
    return (tmp);
}

int nonTemplateMin(int *tab, size_t size)
{
    int tmp = tab[0];

    if (size == 1)
        return (tab[0]);
    for (size_t i = 1; i < size; i++) {
        tmp = min(tmp, tab[i]);
    }
    return (tmp);
}

#endif // EX02_HPP_
