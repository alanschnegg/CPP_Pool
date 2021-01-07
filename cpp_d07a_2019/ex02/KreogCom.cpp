//
// EPITECH PROJECT, 2020
// cpp_d07a_2019
// File description:
// KreogCom.cpp
//

#include "KreogCom.hpp"

KreogCom::KreogCom(int x, int y, int serial)
{
    this->m_serial = serial;
    this->_x = x;
    this->_y = y;
    this->_next = nullptr;
    std::cout << "KreogCom " << serial << " initialized\n";
}

KreogCom::~KreogCom()
{
    std::cout << "KreogCom " << m_serial << " shutting down\n";
}

void KreogCom::addCom(int x, int y, int serial)
{
    KreogCom *tmp = new KreogCom(x, y, serial);

    tmp->_next = this->_next;
    this->_next = tmp;
}

KreogCom *KreogCom::getCom() const
{
    return (_next);
}

void KreogCom::removeCom()
{
    KreogCom *tmp;

    if (this->_next == nullptr)
        return;
    tmp = this->_next;
    this->_next = this->_next->_next;
    delete tmp;
}

void KreogCom::ping() const
{
    std::cout << "KreogCom " << m_serial << " currently at " << _x << " " << _y << "\n";
}

void KreogCom::locateSquad() const
{
    KreogCom *tmp = (KreogCom*)this;

    tmp = tmp->_next;
    while (tmp != nullptr) {
        tmp->ping();
        tmp = tmp->_next;
    }
    ping();
}
