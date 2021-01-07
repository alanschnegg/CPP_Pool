//
// EPITECH PROJECT, 2020
// cpp_d17_2019
// File description:
// OneTime.hpp
//

#ifndef ONETIME_HPP_
# define ONETIME_HPP_

#include "IEncryptionMethod.hpp"
#include <iostream>

class OneTime : public IEncryptionMethod {
    public:
        OneTime(const std::string &key) : _key(key), _index(0) {}
        ~OneTime() {}
        void encryptChar(char plainchar);
        void decryptChar(char cipherchar);
        void reset() { _index = 0; }
    private:
        std::string _key;
        int _index;
};

#endif // ONETIME_HPP_
