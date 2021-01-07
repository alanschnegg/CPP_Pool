//
// EPITECH PROJECT, 2020
// cpp_d10_2019
// File description:
// Character.cpp
//

#include "Character.hpp"

Character::Character(const std::string &name)
: _name(name), _ap(40), _weapon(nullptr)
{
}

Character::~Character()
{
}

void Character::recoverAP()
{
    _ap += 10;
    if (_ap > 40)
        _ap = 40;
}

void Character::equip(AWeapon *weapon)
{
    _weapon = weapon;
}

void Character::attack(AEnemy *enemy)
{
    if (_weapon == nullptr)
        return;
    if (_ap < _weapon->getAPCost())
        return;
    _ap -= _weapon->getAPCost();
    std::cout << _name <<" attacks " << enemy->getType() << " with a " << _weapon->getName() << std::endl;
    _weapon->attack();
    enemy->takeDamage(_weapon->getDamage());
    if (enemy->getHP() <= 0)
        enemy->~AEnemy();
}

std::string Character::getName() const
{
    return (_name);
}

int Character::getAP() const
{
    return (_ap);
}

AWeapon *Character::getWeapon() const
{
    return (_weapon);
}

std::ostream &operator<<(std::ostream &s, const Character &character)
{
    s << character.getName() << " has " << character.getAP() << " AP and ";
    if (character.getWeapon() == nullptr)
        s << "is unarmed";
    else
        s << "wields a " << character.getWeapon()->getName();
    s << std::endl;
    return (s);
}
