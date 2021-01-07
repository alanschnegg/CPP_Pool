//
// EPITECH PROJECT, 2020
// cpp_d06_2019
// File description:
// KoalaDoctorList.hpp
//

#ifndef KOALADOCTORLIST_HPP_
# define KOALADOCTORLIST_HPP_

#include "KoalaDoctor.hpp"

class KoalaDoctorList {
    public:
        KoalaDoctorList(KoalaDoctor *doctor);
        ~KoalaDoctorList(void);
        KoalaDoctor *doctor;
        KoalaDoctorList *next;
        bool isEnd(void);
        void append(KoalaDoctorList *doctor);
        KoalaDoctor *getFromName(std::string name);
        KoalaDoctorList *remove(KoalaDoctorList *doctor);
        KoalaDoctorList *removeFromName(std::string name);
        KoalaDoctor *getContent(void);
        KoalaDoctor *getNext(void);
        void dump(void);
};

#endif // KOALADOCTORLIST_HPP_
