//
// EPITECH PROJECT, 2020
// cpp_d07m_2019
// File description:
// Borg.cpp
//

#include "Borg.hpp"

namespace Borg {
    Ship::Ship(int weaponFrequency, short repair)
    {
        this->_side = 300;
        this->_maxWarp = 9;
        this->_location = UNICOMPLEX;
        this->_home = UNICOMPLEX;
        this->_shield = 100;
        this->_weaponFrequency = weaponFrequency;
        this->_repair = repair;
        std::cout << "We are the Borgs. Lower your shields and surrender "
        << "yourselves unconditionally.\nYour biological characteristics and "
        << "technologies will be assimilated.\nResistance is futile.\n";
    }

    Ship::~Ship(void)
    {
    }

    void Ship::setupCore(WarpSystem::Core *coreReactor)
    {
        this->_coreReactor = coreReactor;
    }

    void Ship::checkCore(void)
    {
        if (this->_coreReactor->checkReactor()->isStable())
            std::cout << "Everything is in order.\n";
        else
            std::cout << "Critical failure imminent.";
    }

    bool Ship::move(int warp , Destination d)
    {
        if (warp > _maxWarp || d == _location || !_coreReactor->checkReactor()->isStable())
            return (false);
        _location = d;
        return (true);
    }

    bool Ship::move(int warp)
    {
        if (warp > _maxWarp || _home == _location || !_coreReactor->checkReactor()->isStable())
            return (false);
        _location = _home;
        return (true);
    }

    bool Ship::move(Destination d)
    {
        if (d == _location || !_coreReactor->checkReactor()->isStable())
            return (false);
        _location = d;
        return (true);
    }

    bool Ship::move(void)
    {
        if (_home == _location || !_coreReactor->checkReactor()->isStable())
            return (false);
        _location = _home;
        return (true);
    }

    int Ship::getShield(void)
    {
        return (this->_shield);
    }

    void Ship::setShield(int shield)
    {
        this->_shield = shield;
    }

    int Ship::getWeaponFrequency(void)
    {
        return (this->_weaponFrequency);
    }

    void Ship::setWeaponFrequency(int frequency)
    {
        this->_weaponFrequency = frequency;
    }

    short Ship::getRepair(void)
    {
        return (this->_repair);
    }

    void Ship::setRepair(short repair)
    {
        this->_repair = repair;
    }

    void Ship::fire(Federation::Starfleet::Ship *target)
    {
        target->setShield(target->getShield() - getWeaponFrequency());
        std::cout << "Firing on target with " << getWeaponFrequency() << "GW frequency.\n";
    }

    void Ship::fire(Federation::Ship *target)
    {
        std::cout << "Firing on target with " << getWeaponFrequency() << "GW frequency.\n";
    }

    void Ship::repair(void)
    {
        if (getRepair() > 0) {
            setShield(100);
            setRepair(getRepair() - 1);
            std::cout << "Begin shield re-initialisation... Done. Awaiting further instructions.\n";
        } else {
            std::cout << "Energy cells depleted, shield weakening.\n";
        }
    }
}
