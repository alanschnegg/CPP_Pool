//
// EPITECH PROJECT, 2020
// cpp_d06_2019
// File description:
// KoalaNurse.hpp
//

#ifndef KOALANURSE_HPP_
# define KOALANURSE_HPP_

#include "SickKoala.hpp"

class KoalaNurse {
   public:
        KoalaNurse(int id);
        ~KoalaNurse(void);
        int id;
        bool working;
        void giveDrug(std::string drug, SickKoala *patient);
        std::string readReport(std::string filename);
        void timeCheck(void);
        int getID(void);
};

#endif // KOALANURSE_HPP_
