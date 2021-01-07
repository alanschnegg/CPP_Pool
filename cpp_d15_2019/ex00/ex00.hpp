//
// EPITECH PROJECT, 2020
// cpp_d15_2019
// File description:
// ex00.hpp
//

#ifndef EX00_HPP_
# define EX00_HPP_

template <typename T>
void swap(T &a, T &b)
{
    T tmp = a;

    a = b;
    b = tmp;
}

template <typename T>
T min(T a, T b)
{
    return ((a < b) ? a : b);
}

template <typename T>
T max(T a, T b)
{
    return ((a > b) ? a : b);
}

template <typename T>
T add(T a, T b)
{
    return (a + b);
}

#endif // EX00_HPP_
