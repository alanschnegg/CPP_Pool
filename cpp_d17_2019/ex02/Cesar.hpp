//
// EPITECH PROJECT, 2020
// cpp_d17_2019
// File description:
// Cesar.hpp
//

#ifndef CESAR_HPP_
# define CESAR_HPP_

#include "IEncryptionMethod.hpp"
#include <iostream>

class Cesar : public IEncryptionMethod {
    public:
        ~Cesar() {}
        void encryptChar(char plainchar);
        void decryptChar(char cipherchar);
        void reset() { _shift = 3; }
    private:
        int _shift;
};

#endif // CESAR_HPP_
