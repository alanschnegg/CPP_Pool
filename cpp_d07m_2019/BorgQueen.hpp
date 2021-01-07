//
// EPITECH PROJECT, 2020
// cpp_d07m_2019
// File description:
// BorgQueen.hpp
//

#ifndef BORGQUEEN_HPP_
# define BORGQUEEN_HPP_

#include <iostream>
#include "Borg.hpp"

namespace Borg {
    class BorgQueen {
        public:
            BorgQueen(void);
            ~BorgQueen(void);
            bool (Borg::Ship::*movePtr)(Destination);
            void (Borg::Ship::*firePtr)(Federation::Starfleet::Ship *);
            void (Borg::Ship::*destroyPtr)(Federation::Ship *);
            void fire(Borg::Ship *ship, Federation::Starfleet::Ship *target);
            bool move(Borg::Ship *ship, Destination dest);
            void destroy(Borg::Ship *ship, Federation::Ship *target);
        private:
            std::string _name;
    };
}

#endif // BORGQUEEN_HPP_
