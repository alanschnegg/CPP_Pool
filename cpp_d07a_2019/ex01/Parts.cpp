//
// EPITECH PROJECT, 2020
// cpp_d07a_2019
// File description:
// Parts.cpp
//

#include "Parts.hpp"

Arms::Arms(std::string serial, bool functional)
{
    this->_serial = serial;
    this->_functional = functional;
}

bool Arms::isFunctional(void) const
{
    return (_functional);
}

std::string Arms::serial(void) const
{
    return (_serial);
}

void Arms::informations(void) const
{
    std::cout << "\t[Parts] Arms " << serial() << " status : ";
    if (isFunctional() == true)
        std::cout << "OK";
    else
        std::cout << "KO";
    std::cout << "\n";
}

Legs::Legs(std::string serial, bool functional)
{
    this->_serial = serial;
    this->_functional = functional;
}

bool Legs::isFunctional(void) const
{
    return (_functional);
}

std::string Legs::serial(void) const
{
    return (_serial);
}

void Legs::informations(void) const
{
    std::cout << "\t[Parts] Legs " << serial() << " status : ";
    if (isFunctional() == true)
        std::cout << "OK";
    else
        std::cout << "KO";
    std::cout << "\n";
}

Head::Head(std::string serial, bool functional)
{
    this->_serial = serial;
    this->_functional = functional;
}

bool Head::isFunctional(void) const
{
    return (_functional);
}

std::string Head::serial(void) const
{
    return (_serial);
}

void Head::informations(void) const
{
    std::cout << "\t[Parts] Head " << serial() << " status : ";
    if (isFunctional() == true)
        std::cout << "OK";
    else
        std::cout << "KO";
    std::cout << "\n";
}
