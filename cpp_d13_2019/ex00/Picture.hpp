//
// EPITECH PROJECT, 2020
// cpp_d13_2019
// File description:
// Picture.hpp
//

#ifndef PICTURE_HPP_
# define PICTURE_HPP_

#include <iostream>
#include <fstream>

class Picture {
    public:
        Picture(void) : data("") {}
        Picture(const std::string &file);
        ~Picture() {}

        bool getPictureFromFile(const std::string &file);

        std::string data;
};

#endif // PICTURE_HPP_
