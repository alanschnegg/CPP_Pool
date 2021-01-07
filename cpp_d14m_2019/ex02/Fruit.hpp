//
// EPITECH PROJECT, 2020
// cpp_d14m_2019
// File description:
// Fruit.hpp
//

#ifndef FRUIT_HPP_
# define FRUIT_HPP_

#include <iostream>

class Fruit {
    public:
        ~Fruit(void) {}

        int getVitamins(void) const { return (_vitamins); }
        std::string getName(void) const { return (_name); }
    protected:
        int _vitamins;
        std::string _name;

        Fruit(int vitamins, std::string name = "") : _vitamins(vitamins), _name(name) {}
};

#endif // FRUIT_HPP_
