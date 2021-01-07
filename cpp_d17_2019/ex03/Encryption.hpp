//
// EPITECH PROJECT, 2020
// cpp_d17_2019
// File description:
// Encryption.hpp
//

#ifndef ENCRYPTION_HPP_
# define ENCRYPTION_HPP_

#include "IEncryptionMethod.hpp"
#include <string>
#include <iostream>
#include <algorithm>

class Encryption {
    public:
        Encryption(IEncryptionMethod &method, void (IEncryptionMethod::*func)(char));
        virtual ~Encryption() {}

        void operator()(char);

        static void encryptString(IEncryptionMethod &encryptionMethod, const std::string &toEncrypt);
        static void decryptString(IEncryptionMethod& encryptionMethod, const std::string &toDecrypt);
    private:
        IEncryptionMethod *_method;
        void (IEncryptionMethod::*_func)(char);
};

#endif // ENCRYPTION_HPP_
