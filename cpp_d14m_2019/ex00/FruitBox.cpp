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
    FruitNode *tmp = _head;
    FruitNode *node;

    if (nbFruits() >= _size)
        return (false);
    else if (_head == nullptr) {
        _head = new FruitNode;
        _head->fruit = f;
        _head->next = nullptr;
        return (true);
    }
    while (tmp->next != nullptr) {
        if (tmp->fruit == f)
            return (false);
        tmp = tmp->next;
    }
    if (tmp->fruit == f)
        return (false);
    node = new FruitNode;
    node->fruit = f;
    node->next = nullptr;
    tmp->next = node;
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
