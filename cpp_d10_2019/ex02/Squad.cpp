//
// EPITECH PROJECT, 2020
// cpp_d10_2019
// File description:
// Squad.cpp
//

#include "Squad.hpp"

Squad::Squad(void)
{
}

Squad::~Squad()
{
    while (getCount () != 0) {
        _squad[0]->~ISpaceMarine();
        _squad.erase(_squad.begin());
    }
}

int Squad::getCount(void) const
{
    return (_squad.size());
}

ISpaceMarine *Squad::getUnit(int i)
{
    return (_squad[i]);
}

int Squad::push(ISpaceMarine *marine)
{
    _squad.push_back(marine);
    return (0);
}
