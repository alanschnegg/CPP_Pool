//
// EPITECH PROJECT, 2020
// cpp_d13_2019
// File description:
// ToyStory.hpp
//

#ifndef TOYSTORY_HPP_
# define TOYSTORY_HPP_

#include <iostream>
#include <fstream>
#include "Toy.hpp"

class ToyStory {
    public:
        static void tellMeAStory(std::string filename, Toy &toy1, bool (Toy::*func1)(std::string), Toy &toy2, bool (Toy::*func2)(std::string));
};

#endif // TOYSTORY_HPP_
