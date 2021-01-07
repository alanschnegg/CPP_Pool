//
// EPITECH PROJECT, 2020
// cpp_d09_2019
// File description:
// Paladin.cpp
//

#include "Paladin.hpp"

Paladin::Paladin(const std::string &name, int level) : Character(name, level), Warrior(name, level), Mage(name, level), Priest(name, level)
{
    _intelligence = 10;
    _strenght = 9;
    _stamina = 10;
    _spirit = 10;
    _agility = 2;
    std::cout << "the light falls on " << name << "\n";
}

Paladin::~Paladin()
{
}

int Paladin::CloseAttack(void)
{
    if (_power < 30) {
        std::cout << _name << " out of power\n";
        return (0);
    }
    _power -= 30;
    std::cout << _name << " strikes with his " << _weapon << "\n";
    return (20 + _strenght);
}

int Paladin::RangeAttack(void)
{
    if (_power < 25) {
        std::cout << _name << " out of power\n";
        return (0);
    }
    _power -= 25;
    std::cout << _name << " launches a fire ball\n";
    return (20 + _spirit);
}

void Paladin::RestorePower(void)
{
    _power += (100);
    if (_power > 100)
        _power = 100;
    std::cout << _name << " eats\n";
}

void Paladin::Heal(void)
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

int Paladin::Intercept(void)
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
