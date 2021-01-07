//
// EPITECH PROJECT, 2020
// cpp_d09_2019
// File description:
// Warrior.cpp
//

#include "Warrior.hpp"

Warrior::Warrior(const std::string &name, int level) : Character(name, level)
{
    _intelligence = 6;
    _strenght = 12;
    _stamina = 12;
    _spirit = 5;
    _agility = 7;
    _weapon = "hammer";
    std::cout << "I'm " << name << " KKKKKKKKKKRRRRRRRRRRRRRREEEEEEEEOOOOOOORRRRGGGGGGG\n";
}

Warrior::~Warrior()
{
}

int Warrior::CloseAttack(void)
{
    if (_power < 30) {
        std::cout << _name << " out of power\n";
        return (0);
    }
    _power -= 30;
    std::cout << _name << " strikes with his " << _weapon << "\n";
    return (20 + _strenght);
}

int Warrior::RangeAttack(void)
{
    if (_power < 10) {
        std::cout << _name << " out of power\n";
        return (0);
    }
    _power -= 10;
    std::cout << _name << " intercepts\n";
    Range = CLOSE;
    return (0);
}
