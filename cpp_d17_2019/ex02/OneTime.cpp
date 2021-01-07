//
// EPITECH PROJECT, 2020
// cpp_d17_2019
// File description:
// OneTime.cpp
//

#include "OneTime.hpp"

void OneTime::encryptChar(char pc)
{
    unsigned char plainchar = pc;

    if (plainchar >= 'a' && plainchar <= 'z') {
        if (_key[_index] >= 'a' && _key[_index] <= 'z') {
            plainchar += (_key[_index] - 'a');
        } else {
            plainchar += (_key[_index] - 'A');
        }
        if(plainchar > 'z')
            plainchar -= 26;
    } else if (plainchar >= 'A' && plainchar <= 'Z') {
        if (_key[_index] >= 'a' && _key[_index] <= 'z') {
            plainchar += (_key[_index] - 'a');
        } else {
            plainchar += (_key[_index] - 'A');
        }
        if(plainchar > 'Z')
            plainchar -= 26;
    }
    std::cout << plainchar;
    _index += 1;
    _index %= _key.size();
}

void OneTime::decryptChar(char cc)
{
    unsigned char cipherchar = cc;

    if (cipherchar >= 'a' && cipherchar <= 'z') {
        if (_key[_index] >= 'a' && _key[_index] <= 'z') {
            cipherchar -= (_key[_index] - 'a');
        } else {
            cipherchar -= (_key[_index] - 'A');
        }
        if(cipherchar < 'a')
            cipherchar += 26;
    } else if (cipherchar >= 'A' && cipherchar <= 'Z') {
        if (_key[_index] >= 'a' && _key[_index] <= 'z') {
            cipherchar -= (_key[_index] - 'a');
        } else {
            cipherchar -= (_key[_index] - 'A');
        }
        if(cipherchar < 'A')
            cipherchar += 26;
    }
    std::cout << cipherchar;
    _index += 1;
    _index %= _key.size();
}
