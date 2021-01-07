//
// EPITECH PROJECT, 2020
// cpp_d10_2019
// File description:
// AssaultTerminator.cpp
//

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
    std::cout << "* teleports from space *\n";
}

AssaultTerminator::~AssaultTerminator(void)
{
    std::cout << "I'll be back...\n";
}

ISpaceMarine *AssaultTerminator::clone() const
{
    return (new AssaultTerminator);
}

void AssaultTerminator::battleCry() const
{
    std::cout << "This code is unclean. PURIFY IT!\n";
}

void AssaultTerminator::rangedAttack() const
{
    std::cout << "* does nothing *\n";
}

void AssaultTerminator::meleeAttack() const
{
    std::cout << "* attacks with chainfists *\n";
}
