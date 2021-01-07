//
// EPITECH PROJECT, 2020
// cpp_d17_2019
// File description:
// Encryption.cpp
//

#include "Encryption.hpp"

Encryption::Encryption(IEncryptionMethod &method, void (IEncryptionMethod::*func)(char))
{
    _method = &method;
    _func = func;
}

void Encryption::operator()(char c)
{
    (_method->*_func)(c);
}

void Encryption::encryptString(IEncryptionMethod &method, const std::string &toEncrypt)
{
    method.reset();
    std::for_each(toEncrypt.begin(), toEncrypt.end(), Encryption(method, &IEncryptionMethod::encryptChar));
    std::cout << std::endl;
}

void Encryption::decryptString(IEncryptionMethod& method, const std::string &toDecrypt)
{
    method.reset();
    std::for_each(toDecrypt.begin(), toDecrypt.end(), Encryption(method, &IEncryptionMethod::decryptChar));
    std::cout << std::endl;
}
