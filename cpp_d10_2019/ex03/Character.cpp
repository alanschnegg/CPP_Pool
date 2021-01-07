//
// EPITECH PROJECT, 2020
// cpp_d10_2019
// File description:
// Character.cpp
//

#include "Character.hpp"
#include <iostream>

Character::~Character()
{
    while (_materia.size() != 0) {
        _materia[0]->~AMateria();
        _materia.erase(_materia.begin());
    }
}

void Character::equip(AMateria* m)
{
    if (_materia.size() < 4) {
        _materia.push_back(m);
    }
}

void Character::unequip(int idx)
{
    size_t tmp = idx;

    if (_materia.size() < tmp)
        _materia.erase(_materia.begin() + tmp);
}

void Character::use(int idx, ICharacter& target)
{
    size_t tmp = idx;

    if (_materia.size() > tmp)
        _materia[tmp]->use(target);
}
