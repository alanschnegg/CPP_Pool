//
// EPITECH PROJECT, 2020
// cpp_d14m_2019
// File description:
// FruitNode.hpp
//

#ifndef FRUITNODE_HPP_
# define FRUITNODE_HPP_

#include "Fruit.hpp"

class FruitNode {
    public:
        ~FruitNode(void) {}

        Fruit *fruit;
        FruitNode *next;
};

#endif // FRUITNODE_HPP_
