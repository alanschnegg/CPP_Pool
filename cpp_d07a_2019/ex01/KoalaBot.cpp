//
// EPITECH PROJECT, 2020
// cpp_d07a_2019
// File description:
// KoalaBot.cpp
//

#include "KoalaBot.hpp"

KoalaBot::KoalaBot(std::string serial)
{
    this->_serial = serial;
}

void KoalaBot::setParts(Arms arms)
{
    this->_arms = arms;
}

void KoalaBot::setParts(Legs legs)
{
    this->_legs = legs;
}

void KoalaBot::setParts(Head head)
{
    this->_head = head;
}

void KoalaBot::swapParts(Arms arms)
{
    setParts(arms);
}

void KoalaBot::swapParts(Legs legs)
{
    setParts(legs);
}

void KoalaBot::swapParts(Head head)
{
    setParts(head);
}

void KoalaBot::informations(void) const
{
    std::cout << "[KoalaBot] " << _serial << "\n";
    _arms.informations();
    _legs.informations();
    _head.informations();
}

bool KoalaBot::status(void) const
{
    if (!_arms.isFunctional() || !_legs.isFunctional() || !_head.isFunctional())
        return (false);
    return (true);
}
