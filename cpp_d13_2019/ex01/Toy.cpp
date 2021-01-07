//
// EPITECH PROJECT, 2020
// cpp_d13_2019
// File description:
// Toy.cpp
//

#include "Toy.hpp"

Toy::Toy(const Toy &copy)
{
    _type = copy.getType();
    _name = copy.getName();
    _picture.data = copy.getAscii();
}

Toy &Toy::operator=(const Toy &copy)
{
    _type = copy.getType();
    _name = copy.getName();
    _picture.data = copy.getAscii();
    return (*this);
}
