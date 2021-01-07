//
// EPITECH PROJECT, 2020
// cpp_d07m_2019
// File description:
// Federation.cpp
//

#include "Federation.hpp"

namespace Federation {
    Ship::Ship(int length, int width, std::string name)
    {
        this->_length = length;
        this->_width = _width;
        this->_name = name;
        this->_maxWarp = 1;
        this->_location = VULCAN;
        this->_home = VULCAN;
        std::cout << "The independent ship " << name
        << " just finished its construction.\n";
        std::cout << "It is " << length << " m in length and " << width
        << " m in width.\n";
    }

    Ship::~Ship(void)
    {
    }

    void Ship::setupCore(WarpSystem::Core *coreReactor)
    {
        this->_coreReactor = coreReactor;
        std::cout << this->_name << ": The core is set.\n";
    }

    void Ship::checkCore(void)
    {
        std::cout << this->_name << ": The core is ";
        if (this->_coreReactor->checkReactor()->isStable())
            std::cout << "stable";
        else
            std::cout << "unstable";
        std::cout << " at the time.\n";
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

    WarpSystem::QuantumReactor *Ship::getCore(void)
    {
        return (_coreReactor->checkReactor());
    }

    namespace Starfleet {
        Ship::Ship(int length, int width, std::string name, short maxWarp, int torpedo)
        {
            this->_length = length;
            this->_width = _width;
            this->_name = name;
            this->_maxWarp = maxWarp;
            this->_captain = nullptr;
            this->_location = EARTH;
            this->_home = EARTH;
            this->_shield = 100;
            this->_photonTorpedo = torpedo;
            std::cout << "The ship USS " << name << " has been finished.\n";
            std::cout << "It is " << length << " m in length and " << width
            << " m in width.\n";
            std::cout << "It can go to Warp " << maxWarp << "!\n";
            if (torpedo != 0) {
                std::cout << "Weapons are set: " << torpedo
                << " torpedoes ready.\n";
            }
        }

        Ship::Ship(void)
        {
            this->_length = 289;
            this->_width = 132;
            this->_name = "Entreprise";
            this->_maxWarp = 6;
            this->_captain = nullptr;
            this->_location = EARTH;
            this->_home = EARTH;
            this->_shield = 100;
            this->_photonTorpedo = 0;
            std::cout << "The ship USS Entreprise has been finished.\n";
            std::cout << "It is 289 m in length and 132 m in width.\n";
            std::cout << "It can go to Warp 6!\n";
        }

        Ship::~Ship(void)
        {
        }

        void Ship::setupCore(WarpSystem::Core *coreReactor)
        {
            this->_coreReactor = coreReactor;
            std::cout << "USS " << this->_name << ": The core is set.\n";
        }

        void Ship::checkCore(void)
        {
            std::cout << "USS " << this->_name << ": The core is ";
            if (this->_coreReactor->checkReactor()->isStable())
                std::cout << "stable";
            else
                std::cout << "unstable";
            std::cout << " at the time.\n";
        }

        void Ship::promote(Captain *captain)
        {
            this->_captain = captain;
            std::cout << captain->getName() << ": I'm glad to be the captain "
            << "of the USS " << this->_name << ".\n";
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

        int Ship::getShield (void)
        {
            return (this->_shield);
        }

        void Ship::setShield(int shield)
        {
            this->_shield = shield;
        }

        int Ship::getTorpedo(void)
        {
            return (this->_photonTorpedo);
        }

        void Ship::setTorpedo(int torpedo)
        {
            this->_photonTorpedo = torpedo;
        }

        void Ship::fire(int torpedoes, Borg::Ship *target)
        {
            std::cout << _name << ": ";
            if (getTorpedo() == 0)
                std::cout << "No more torpedo to fire, " << _captain->getName() << "!\n";
            if (getTorpedo() < torpedoes)
                std::cout << "No enough torpedoes to fire, " << _captain->getName() << "!\n";
            setTorpedo(getTorpedo() - torpedoes);
            std::cout << "Firing on target. " << getTorpedo() << " torpedoes remaining.\n";
            target->setShield(target->getShield() - (torpedoes * 50));
        }

        void Ship::fire(Borg::Ship *target)
        {
            fire(1, target);
        }

        Captain::Captain(std::string name)
        {
            this->_name = name;
            this->_age = -1;
        }

        Captain::~Captain(void)
        {
        }

        std::string Captain::getName(void)
        {
            return (this->_name);
        }

        int Captain::getAge(void)
        {
            return (this->_age);
        }

        void Captain::setAge(int age)
        {
            this->_age = age;
        }

        Ensign::Ensign(std::string name)
        {
            this->_name = name;
            std::cout << "Ensign " << name << ", awaiting orders.\n";
        }

        Ensign::~Ensign(void)
        {
        }
    }
}
