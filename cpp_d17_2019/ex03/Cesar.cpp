//
// EPITECH PROJECT, 2020
// cpp_d17_2019
// File description:
// Cesar.cpp
//

#include "Cesar.hpp"

void Cesar::encryptChar(char pc)
{
    unsigned char plainchar = pc;

    if (plainchar >= 'a' && plainchar <= 'z') {
        plainchar += _shift;
        if(plainchar > 'z')
            plainchar -= 26;
    } else if (plainchar >= 'A' && plainchar <= 'Z') {
        plainchar += _shift;
        if(plainchar > 'Z')
            plainchar -= 26;
    }
    std::cout << plainchar;
    _shift += 1;
    _shift %= 26;
}

void Cesar::decryptChar(char cc)
{
    unsigned char cipherchar = cc;

    if (cipherchar >= 'a' && cipherchar <= 'z') {
        cipherchar -= _shift;
        if(cipherchar < 'a')
            cipherchar += 26;
    } else if (cipherchar >= 'A' && cipherchar <= 'Z') {
        cipherchar -= _shift;
        if(cipherchar < 'A')
            cipherchar += 26;
    }
    std::cout << cipherchar;
    _shift += 1;
    _shift %= 26;
}
