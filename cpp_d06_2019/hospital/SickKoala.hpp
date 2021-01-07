//
// EPITECH PROJECT, 2020
// cpp_d06_2019
// File description:
// SickKoala.hpp
//

#ifndef SICKKOALA_HPP_
# define SICKKOALA_HPP_

#include <fstream>
#include <iostream>
#include <algorithm>

class SickKoala {
   public:
        SickKoala(std::string name);
        ~SickKoala(void);
        std::string name;
        void poke(void);
        bool takeDrug(std::string);
        void overDrive(std::string);
        std::string getName(void);
};

#endif // SICKKOALA_HPP_
