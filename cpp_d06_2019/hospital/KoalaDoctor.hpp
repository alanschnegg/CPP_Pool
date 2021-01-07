//
// EPITECH PROJECT, 2020
// cpp_d06_2019
// File description:
// KoalaDoctor.hpp
//

#ifndef KOALADOCTOR_HPP_
# define KOALADOCTOR_HPP_

#include "SickKoala.hpp"

class KoalaDoctor {
   public:
        KoalaDoctor(std::string name);
        ~KoalaDoctor(void);
        std::string name;
        bool working;
        void diagnose(SickKoala *patient);
        void timeCheck(void);
        std::string getName(void);
};

#endif // KOALADOCTOR_HPP_
