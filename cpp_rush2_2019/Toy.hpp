//
// EPITECH PROJECT, 2020
// cpp_rush2_2019
// File description:
// toy.hpp
//

#ifndef TOY_HPP_
# define TOY_HPP_

#include "Object.hpp"
#include <iostream>

class Toy: public Object {
    public:
        Toy(std::string title = "") : Object(title) {}
        ~Toy(void) {}

        virtual void isTaken(void) const = 0;
};

class Teddy: public Toy {
    public:
        Teddy(std::string title = "") : Toy(title) {}
        ~Teddy(void) {}

        void isTaken(void) const { std::cout << "gra hu\n"; }
};

class LittlePony: public Toy {
    public:
        LittlePony(std::string title = "") : Toy(title) {}
        ~LittlePony(void) {}

        void isTaken(void) const { std::cout << "yo man\n"; }
};

#endif // TOY_HPP_
