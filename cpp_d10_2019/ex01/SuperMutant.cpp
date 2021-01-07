//
// EPITECH PROJECT, 2020
// cpp_d10_2019
// File description:
// SuperMutant.cpp
//

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void)
: AEnemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads!\n";
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh...\n";
}

void SuperMutant::takeDamage(int damage)
{
    damage -= 3;
    if (damage < 0)
        return;
    _hp -= damage;
}
