//
// EPITECH PROJECT, 2020
// cpp_d07a_2019
// File description:
// KreogCom.hpp
//

#ifndef KREOGCOM_HPP_
# define KREOGCOM_HPP_

#include <iostream>

class KreogCom
{
    public:
        KreogCom(int x, int y, int serial);
        ~KreogCom();

        void addCom(int x, int y, int serial);
        void removeCom();
        KreogCom *getCom() const;

        void ping() const;
        void locateSquad() const;
    private:
        int m_serial;
        int _x;
        int _y;
        KreogCom *_next;
};

#endif // KREOGCOM_HPP_
