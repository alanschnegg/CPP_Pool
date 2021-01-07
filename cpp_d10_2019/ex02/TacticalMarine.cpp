//
// EPITECH PROJECT, 2020
// cpp_d10_2019
// File description:
// TacticalMarine.cpp
//

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void)
{
    std::cout << "Tactical Marine ready for battle\n";
}

TacticalMarine::~TacticalMarine(void)
{
    std::cout << "Aaargh...\n";
}

ISpaceMarine *TacticalMarine::clone() const
{
    return (new TacticalMarine);
}

void TacticalMarine::battleCry() const
{
    std::cout << "For the holy PLOT!\n";
}

void TacticalMarine::rangedAttack() const
{
    std::cout << "* attacks with bolter *\n";
}

void TacticalMarine::meleeAttack() const
{
    std::cout << "* attacks with chainsword *\n";
}
