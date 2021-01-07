//
// EPITECH PROJECT, 2020
// cpp_d10_2019
// File description:
// AEnemy.cpp
//

#include "AEnemy.hpp"

AEnemy::AEnemy(int hp, const std::string &type)
: _hp(hp), _type(type)
{
}

AEnemy::~AEnemy()
{
}

void AEnemy::takeDamage(int damage)
{
    if (damage < 0)
        return;
    _hp -= damage;
}

std::string AEnemy::getType() const
{
    return (_type);
}

int AEnemy::getHP() const
{
    return (_hp);
}
