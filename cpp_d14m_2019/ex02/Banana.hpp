//
// EPITECH PROJECT, 2020
// cpp_d14m_2019
// File description:
// Banana.hpp
//

#ifndef BANANA_HPP_
# define BANANA_HPP_

#include "Fruit.hpp"

class Banana : public Fruit {
    public:
        Banana(void) : Fruit(5, "banana") {}
        ~Banana(void) {}
};

#endif // BANANA_HPP_
