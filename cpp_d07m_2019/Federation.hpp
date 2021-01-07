//
// EPITECH PROJECT, 2020
// cpp_d07m_2019
// File description:
// Federation.hpp
//

#ifndef FEDERATION_HPP_
# define FEDERATION_HPP_

#include <fstream>
#include <iostream>
#include "WarpSystem.hpp"
#include "Destination.hpp"

namespace Borg {
    class Ship;
}
#include "Borg.hpp"


namespace Federation {
    class Ship {
        public:
            Ship(int length, int width, std::string name);
            ~Ship(void);
            void setupCore(WarpSystem::Core *core);
            void checkCore(void);
            bool move(int warp , Destination d);
            bool move(int warp);
            bool move(Destination d);
            bool move();
            WarpSystem::QuantumReactor *getCore(void);
        private:
            int _length;
            int _width;
            std::string _name;
            short _maxWarp;
            WarpSystem::Core *_coreReactor;
            Destination _location;
            Destination _home;
    };
    namespace Starfleet {
        class Captain {
            public:
                Captain(std::string name);
                ~Captain(void);
                std::string getName(void);
                int getAge(void);
                void setAge(int age);
            private:
                std::string _name;
                int _age;
        };

        class Ship {
            public:
                Ship(int length, int width, std::string name, short maxWrap, int torpedo = 0);
                Ship(void);
                ~Ship(void);
                void setupCore(WarpSystem::Core *core);
                void checkCore(void);
                void promote(Captain *captain);
                bool move(int warp , Destination d);
                bool move(int  warp);
                bool move(Destination d);
                bool move();
                int getShield (void);
                void setShield(int shield);
                int getTorpedo(void);
                void setTorpedo(int torpedo);
                void fire(Borg::Ship *target);
                void fire(int torpedoes, Borg::Ship *target);
            private:
                int _length;
                int _width;
                std::string _name;
                short _maxWarp;
                WarpSystem::Core *_coreReactor;
                Captain *_captain;
                Destination _location;
                Destination _home;
                int _shield;
                int _photonTorpedo;
        };

        class Ensign {
            public:
                Ensign(std::string name);
                ~Ensign(void);
            private:
                std::string _name;
        };
    }
}

#endif // FEDERATION_HPP_
