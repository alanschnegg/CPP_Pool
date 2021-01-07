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

FruitBox * const *LittleHand::organizeCoconut(Coconut const * const *coconuts)
{
    int i = 0;
    int y = 0;
    FruitBox **box;

    if (coconuts == nullptr)
        return (nullptr);
    for (; coconuts[i] != 0; i++);
    box = new FruitBox*[i/6 + 2];
    box[0] = new FruitBox(6);
    for (i = 0; coconuts[i] != 0; i++) {
        if (box[y]->putFruit(new Coconut) == false) {
            y++;
            box[y] = new FruitBox(6);
            box[y]->putFruit(new Coconut);
        }
    }
    box[y + 1] = nullptr;
    return (box);
}

void LittleHand::plugMixer(MixerBase &mixer)
{
    Mixer tmp = Mixer();
    mixer = tmp;
}
