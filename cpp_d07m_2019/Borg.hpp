//
// EPITECH PROJECT, 2020
// cpp_d07m_2019
// File description:
// Borg.hpp
//

#ifndef BORG_HPP_
# define BORG_HPP_

#include "WarpSystem.hpp"
#include <iostream>
#include "Destination.hpp"

#include "Federation.hpp"

namespace Federation {
    class Ship;
    namespace Starfleet {
            class Ship;
    }
}

namespace Borg {
    class Ship {
        public:
            Ship(int weaponFrequency = 20, short repair = 3);
            ~Ship(void);
            void setupCore(WarpSystem::Core *core);
            void checkCore(void);
            bool move(int warp, Destination d);
            bool move(int warp);
            bool move(Destination d);
            bool move();
            int getShield(void);
            void setShield(int shield);
            int getWeaponFrequency(void);
            void setWeaponFrequency(int frequency);
            short getRepair(void);
            void setRepair(short repair);
            void fire(Federation::Starfleet::Ship *target);
            void fire(Federation::Ship *target);
            void repair(void);
        private:
            int _side;
            short _maxWarp;
            WarpSystem::Core *_coreReactor;
            Destination _location;
            Destination _home;
            int _shield;
            int _weaponFrequency;
            short _repair;
    };
}

#endif // BORG_HPP_
