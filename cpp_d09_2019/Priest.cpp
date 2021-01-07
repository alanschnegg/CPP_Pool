//
// EPITECH PROJECT, 2020
// cpp_d09_2019
// File description:
// Priest.cpp
//

#include "Priest.hpp"

Priest::Priest(const std::string &name, int level) : Character(name, level), Mage(name, level)
{
    _intelligence = 42;
    _strenght = 4;
    _stamina = 4;
    _spirit = 21;
    _agility = 2;
    std::cout << name << " enters in the order\n";
}

Priest::~Priest()
{
}

int Priest::CloseAttack(void)
{
    if (_power < 10) {
        std::cout << _name << " out of power\n";
        return (0);
    }
    _power -= 10;
    std::cout << _name << " uses a spirit explosion\n";
    Range = RANGE;
    return (10 + _spirit);
}

int Priest::RangeAttack(void)
{
    if (_power < 25) {
        std::cout << _name << " out of power\n";
        return (0);
    }
    _power -= 25;
    std::cout << _name << " launches a fire ball\n";
    return (20 + _spirit);
}

void Priest::RestorePower(void)
{
    _power += (50 + _intelligence);
    if (_power > 100)
        _power = 100;
    std::cout << _name << " takes a mana potion\n";
}

void Priest::Heal(void)
{
    if (_power < 10) {
        std::cout << _name << " out of power\n";
        return;
    }
    _power -= 10;
    _hp += 70;
    if (_hp > 100)
        _hp = 100;
    std::cout << _name << " casts a little heal spell\n";
}
