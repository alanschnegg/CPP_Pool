//
// EPITECH PROJECT, 2020
// cpp_d14m_2019
// File description:
// LittleHand.cpp
//

#include "LittleHand.hpp"

void LittleHand::sortFruitBox(FruitBox &unsorted, FruitBox &lemons, FruitBox &bananas, FruitBox &limes)
{
    Fruit *fruit;
    FruitBox tmp(unsorted.nbFruits());
    bool test;

    while ((fruit = unsorted.pickFruit()) != nullptr)
        tmp.putFruit(fruit);
    while ((fruit = tmp.pickFruit()) != nullptr) {
        if (fruit->getVitamins() == 3)
            test = lemons.putFruit(fruit);
        else if (fruit->getVitamins() == 5)
            test = bananas.putFruit(fruit);
        else if (fruit->getVitamins() == 2)
            test = limes.putFruit(fruit);
        if (test == false)
            unsorted.putFruit(fruit);
    }
}
