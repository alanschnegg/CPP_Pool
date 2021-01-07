//
// EPITECH PROJECT, 2020
// cpp_d15_2019
// File description:
// ex03.hpp
//

#ifndef EX03_HPP_
# define EX03_HPP_

#include <iostream>

template <typename T>
void foreach(T *tab, void func(const T &elem), size_t size)
{
    for (size_t i = 0; i < size; i++)
        func(tab[i]);
}

template <typename T>
void print(const T &a)
{
    std::cout << a <<std::endl;
}


#endif // EX03_HPP_
