//
// EPITECH PROJECT, 2020
// cpp_d09_2019
// File description:
// Character.cpp
//

#include "Character.hpp"

Character::Character(const std::string &name, int level)
:Range(CLOSE), _name(name), _lvl(level), _hp(100), _power(100), _intelligence(5), _strenght(5), _stamina(5), _spirit(5), _agility(5)
{
    std::cout << name << " Created\n";
}

Character::~Character(void)
{
}

int Character::CloseAttack(void)
{
    if (_power < 10) {
        std::cout << _name << " out of power\n";
        return (0);
    }
    _power -= 10;
    std::cout << _name << " strikes with a wooden stick\n";
    return (10 + _strenght);
}

int Character::RangeAttack(void)
{
    if (_power < 10) {
        std::cout << _name << " out of power\n";
        return (0);
    }
    _power -= 10;
    std::cout << _name << " tosses a stone\n";
    return (5 + _strenght);
}

void Character::Heal(void)
{
    _hp += 50;
    if (_hp > 100)
        _hp = 100;
    std::cout << _name << " takes a potion\n";
}

void Character::RestorePower(void)
{
    _power += 100;
    if (_power > 100)
        _power = 100;
    std::cout << _name << " eats\n";
}

void Character::TakeDamage(int damage)
{
    _hp -= damage;
    if (_hp <= 0)
        std::cout << _name << " out of combat\n";
    else
        std::cout << _name << " takes " << damage << " damage\n";
}
