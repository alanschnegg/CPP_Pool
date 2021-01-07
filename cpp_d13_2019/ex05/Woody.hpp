//
// EPITECH PROJECT, 2020
// cpp_d13_2019
// File description:
// Woody.hpp
//

#ifndef WOODY_HPP_
# define WOODY_HPP_

#include "Toy.hpp"

class Woody : public Toy {
    public:
        Woody(std::string name, std::string filename = "woody.txt") : Toy(WOODY, name, filename) {}
        ~Woody(void) {}

        void speak(const std::string statement);
};

#endif // WOODY_HPP_
