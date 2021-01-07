//
// EPITECH PROJECT, 2020
// cpp_d16_2019
// File description:
// BF_Translator.hpp
//

#ifndef BF_TRANSLATOR_HPP_
# define BF_TRANSLATOR_HPP_

#include <unordered_map>
#include <fstream>
#include <iostream>

class BF_Translator {
    public:
        BF_Translator();
        ~BF_Translator() {}

        int translate(const std::string &in, const std::string &out);
    private:
        std::unordered_map<unsigned char, std::string> _translate;
};

#endif // BF_TRANSLATOR_HPP_
