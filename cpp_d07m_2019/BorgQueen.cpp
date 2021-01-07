//
// EPITECH PROJECT, 2020
// cpp_d07m_2019
// File description:
// BorgQueen.cpp
//

#include "BorgQueen.hpp"

namespace Borg {
    BorgQueen::BorgQueen(void)
    {
        this->firePtr = &Borg::Ship::fire;
        this->movePtr = &Borg::Ship::move;
        this->destroyPtr = &Borg::Ship::fire;
    }

    BorgQueen::~BorgQueen(void)
    {
    }

    void BorgQueen::fire(Borg::Ship *ship, Federation::Starfleet::Ship *target)
    {
        (ship->*firePtr)(target);
    }

    bool BorgQueen::move(Borg::Ship *ship, Destination dest)
    {
        return ((ship->*movePtr)(dest));
    }

    void BorgQueen::destroy(Borg::Ship *ship, Federation::Ship *target)
    {
        (ship->*destroyPtr)(target);
    }
}
