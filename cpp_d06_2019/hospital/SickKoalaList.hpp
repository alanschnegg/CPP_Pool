//
// EPITECH PROJECT, 2020
// cpp_d06_2019
// File description:
// SickKoalaList.hpp
//

#ifndef SICKKOALALIST_HPP_
# define SICKKOALALIST_HPP_

#include "SickKoala.hpp"

class SickKoalaList {
    public:
        SickKoalaList(SickKoala *patient);
        ~SickKoalaList(void);
        SickKoala *patient;
        SickKoalaList *next;
        bool isEnd(void);
        void append(SickKoalaList *patient);
        SickKoala *getFromName(std::string name);
        SickKoalaList *remove(SickKoalaList *patient);
        SickKoalaList *removeFromName(std::string name);
        SickKoala *getContent(void);
        SickKoala *getNext(void);
        void dump(void);
};

#endif // SICKKOALALIST_HPP_
