//
// EPITECH PROJECT, 2020
// cpp_d14m_2019
// File description:
// Lemon.hpp
//

#ifndef LEMON_HPP_
# define LEMON_HPP_

#include "Fruit.hpp"

class Lemon : public Fruit {
    public:
        Lemon(void) : Fruit(3, "lemon") {}
        ~Lemon(void) {}
};

#endif // LEMON_HPP_
