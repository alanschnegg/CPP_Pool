//
// EPITECH PROJECT, 2020
// cpp_d14m_2019
// File description:
// FruitBox.hpp
//

#ifndef FRUITBOX_HPP_
# define FRUITBOX_HPP_

#include "Fruit.hpp"
#include "FruitNode.hpp"

class FruitBox {
    public:
        FruitBox(int size) : _size(size), _head(NULL) {}
        virtual ~FruitBox() {}

        int nbFruits() const;
        bool putFruit(Fruit *f);
        Fruit *pickFruit();
        FruitNode *head() const { return(_head); }
    private:
        int _size;
        FruitNode *_head;
};

#endif // FRUITBOX_HPP_
