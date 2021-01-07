//
// EPITECH PROJECT, 2020
// cpp_d10_2019
// File description:
// Peon.cpp
//

#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name)
{
    std::cout << "Zog zog.\n";
}

Peon::~Peon(void)
{
    std::cout << "Bleuark...\n";
}

void Peon::getPolymorphed(void) const
{
    std::cout << _name << " has been turned into a pink pony!\n";
}
