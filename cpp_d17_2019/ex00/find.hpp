//
// EPITECH PROJECT, 2020
// cpp_d17_2019
// File description:
// find.hpp
//

#ifndef FIND_HPP_
# define FIND_HPP_

#include <algorithm>

template<typename T>
auto do_find(T &container, int test) {
    return (std::find(container.begin(), container.end(), test));
}

#endif // FIND_HPP_
