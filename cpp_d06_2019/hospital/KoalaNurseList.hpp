//
// EPITECH PROJECT, 2020
// cpp_d06_2019
// File description:
// KoalaNurseList.hpp
//

#ifndef KOALANURSELIST_HPP_
# define KOALANURSELIST_HPP_

#include "KoalaNurse.hpp"

#include "KoalaNurse.hpp"

class KoalaNurseList {
    public:
        KoalaNurseList(KoalaNurse *nurse);
        ~KoalaNurseList(void);
        KoalaNurse *nurse;
        KoalaNurseList *next;
        bool isEnd(void);
        void append(KoalaNurseList *nurse);
        KoalaNurse *getFromID(int id);
        KoalaNurseList *remove(KoalaNurseList *nurse);
        KoalaNurseList *removeFromID(int id);
        KoalaNurse *getContent(void);
        KoalaNurse *getNext(void);
        void dump(void);
};

#endif // KOALANURSELIST_HPP_
