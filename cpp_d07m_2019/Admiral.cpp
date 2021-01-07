//
// EPITECH PROJECT, 2020
// cpp_d07m_2019
// File description:
// Admiral.cpp
//

#include "Admiral.hpp"

namespace Federation {
    namespace Starfleet {
        Admiral::Admiral(std::string name)
        {
            this->_name = name;
            this->movePtr = &Federation::Starfleet::Ship::move;
            this->firePtr = &Federation::Starfleet::Ship::fire;
            std::cout << "Admiral "<< name << " ready for action.\n";
        }

        Admiral::~Admiral()
        {
        }

        void Admiral::fire(Federation::Starfleet::Ship *ship, Borg::Ship *target)
        {
            std::cout << "On order from Admiral " << _name << ":\n";
            (ship->*firePtr)(target);
        }

        bool Admiral::move(Federation::Starfleet::Ship *ship, Destination dest)
        {
            return ((ship->*movePtr)(dest));
        }
    }
}
