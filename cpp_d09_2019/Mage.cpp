//
// EPITECH PROJECT, 2020
// cpp_d09_2019
// File description:
// Mage.cpp
//

#include "Mage.hpp"

Mage::Mage(const std::string &name, int level) : Character(name, level)
{
    _intelligence = 12;
    _strenght = 6;
    _stamina = 6;
    _spirit = 11;
    _agility = 7;
    std::cout << name << " teleported\n";
}

Mage::~Mage()
{
}

int Mage::CloseAttack(void)
{
    if (_power < 10) {
        std::cout << _name << " out of power\n";
        return (0);
    }
    _power -= 10;
    std::cout << _name << " blinks\n";
    Range = RANGE;
    return (0);
}

int Mage::RangeAttack(void)
{
    if (_power < 25) {
        std::cout << _name << " out of power\n";
        return (0);
    }
    _power -= 25;
    std::cout << _name << " launches a fire ball\n";
    return (20 + _spirit);
}

void Mage::RestorePower(void)
{
    _power += (50 + _intelligence);
    if (_power > 100)
        _power = 100;
    std::cout << _name << " takes a mana potion\n";
}
