//
// EPITECH PROJECT, 2020
// cpp_d14m_2019
// File description:
// FruitBox.cpp
//

#include "FruitBox.hpp"

int FruitBox::nbFruits() const
{
    FruitNode *tmp = _head;
    int c = 0;

    while (tmp != nullptr) {
        tmp = tmp->next;
        c++;
    }
    return (c);
}

bool FruitBox::putFruit(Fruit *f)
{
    FruitNode *current = _head;
    FruitNode *node = new FruitNode();

    if (f == NULL || nbFruits() >= _size)
        return (false);
    node->fruit = f;
    if (_head == nullptr)
        _head = node;
    else {
        if (current->fruit == f)
            return (false);
        while (current->next) {
            if (current->fruit == f)
                return (false);
            current = current->next;
        }
        current->next = node;
    }
    return (true);
}

Fruit *FruitBox::pickFruit()
{
    Fruit *tmp;

    if (_head == nullptr)
        return (nullptr);
    tmp = _head->fruit;
    _head = _head->next;
    return (tmp);
}
