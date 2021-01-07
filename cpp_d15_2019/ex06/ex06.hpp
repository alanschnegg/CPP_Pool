//
// EPITECH PROJECT, 2020
// cpp_d15_2019
// File description:
// ex06.hpp
//

#ifndef EX06_HPP_
# define EX06_HPP_

#include <iostream>
#include <sstream>

template <typename T>
std::string disp(T a)
{
    return ("[???]");
}

template <>
std::string disp(float a)
{
    std::stringstream tmp;
    tmp << a;
    return ("[float:" + tmp.str() + "f]");
}

template <>
std::string disp(int a)
{
    std::stringstream tmp;
    tmp << a;
    return ("[int:" + tmp.str() + "]");
}

template <>
std::string disp(std::string a)
{
    return ("[string:\"" + a + "\"]");
}

template <typename T, typename U = T>
class Tuple {
    public:
        Tuple () {}
        ~Tuple () {}

        std::string toString(void) const {
            return ("[Tupple " + disp(a) + " " + disp(b) + "]");
        }

        T a;
        U b;
};

#endif // EX06_HPP_
