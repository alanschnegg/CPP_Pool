//
// EPITECH PROJECT, 2020
// cpp_rush2_2019
// File description:
// Object.cpp
//

#include "Object.hpp"
#include "Toy.hpp"

Object **MyUnitTests(void)
{
    Object **tmp = new Object*[3];

    tmp[0] = new LittlePony("happy pony");
    tmp[1] = new Teddy("cuddles");
    tmp[2] = nullptr;
    return (tmp);
}
