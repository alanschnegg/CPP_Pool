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

void Toy::speak(const std::string statement)
{
    std::cout << _name << " \"" << statement << "\"\n";
}

Toy &Toy::operator<<(const std::string ascii)
{
    _picture.data = ascii;
    return (*this);
}

std::ostream &operator<<(std::ostream &s, const Toy &toy)
{
    s << toy.getName() << std::endl << toy.getAscii() << std::endl;
    return (s);
}
