//
// EPITECH PROJECT, 2020
// cpp_d10_2019
// File description:
// RadScorpion.cpp
//

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void)
: AEnemy(80, "RadScorpion")
{
    std::cout << "* click click click *\n";
}

RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *\n";
}
