//
// EPITECH PROJECT, 2020
// cpp_d13_2019
// File description:
// Buzz.hpp
//

#ifndef BUZZ_HPP_
# define BUZZ_HPP_

#include "Toy.hpp"

class Buzz : virtual public Toy {
    public:
        Buzz(std::string name, std::string filename = "buzz.txt") : Toy(BUZZ, name, filename) {}
        ~Buzz(void) {}

        bool speak(const std::string statement);
        bool speak_es(const std::string statement) override;
};

#endif // BUZZ_HPP_
