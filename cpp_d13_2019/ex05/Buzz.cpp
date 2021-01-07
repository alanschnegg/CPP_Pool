//
// EPITECH PROJECT, 2020
// cpp_d13_2019
// File description:
// Buzz.cpp
//

#include "Buzz.hpp"

void Buzz::speak(const std::string statement)
{
    std::cout << "BUZZ: " << _name << " \"" << statement << "\"\n";
}

bool Buzz::speak_es(const std::string statement)
{
    std::cout << "BUZZ: " << _name << " senorita \"" << statement << "\" senorita\n";
    return (true);
}
