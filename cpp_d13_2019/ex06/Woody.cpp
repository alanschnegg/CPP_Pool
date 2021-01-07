//
// EPITECH PROJECT, 2020
// cpp_d13_2019
// File description:
// Woody.cpp
//

#include "Woody.hpp"

bool Woody::speak(const std::string statement)
{
    std::cout << "WOODY: " << _name << " \"" << statement << "\"\n";
    return (true);
}
