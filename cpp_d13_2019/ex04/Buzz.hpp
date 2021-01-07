//
// EPITECH PROJECT, 2020
// cpp_d13_2019
// File description:
// Buzz.hpp
//

#ifndef BUZZ_HPP_
# define BUZZ_HPP_

#include "Toy.hpp"

class Buzz : public Toy {
    public:
        Buzz(std::string name, std::string filename = "buzz.txt") : Toy(BUZZ, name, filename) {}
        ~Buzz(void) {}

        void speak(const std::string statement);
};

#endif // BUZZ_HPP_
