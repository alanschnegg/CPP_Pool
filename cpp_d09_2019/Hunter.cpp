//
// EPITECH PROJECT, 2020
// cpp_d09_2019
// File description:
// Hunter.cpp
//

#include "Hunter.hpp"

Hunter::Hunter(const std::string &name, int level) : Character(name, level), Warrior(name, level)
{
    _intelligence = 5;
    _strenght = 9;
    _stamina = 9;
    _spirit = 6;
    _agility = 25;
    _weapon = "sword";
    std::cout << name << " is born from a tree\n";
}

Hunter::~Hunter()
{
}

int Hunter::CloseAttack(void)
{
    if (_power < 30) {
        std::cout << _name << " out of power\n";
        return (0);
    }
    _power -= 30;
    std::cout << _name << " strikes with his " << _weapon << "\n";
    return (20 + _strenght);
}

int Hunter::RangeAttack(void)
{
    if (_power < 25) {
        std::cout << _name << " out of power\n";
        return (0);
    }
    _power -= 25;
    std::cout << _name << " uses his bow\n";
    return (20 + _agility);
}

void Hunter::RestorePower(void)
{
    _power += (100);
    if (_power > 100)
        _power = 100;
    std::cout << _name << " meditates\n";
}
