//
// EPITECH PROJECT, 2020
// cpp_d14m_2019
// File description:
// Mixer.cpp
//

#include "Mixer.hpp"

MixerBase::MixerBase ()
{
}

int MixerBase::mix(FruitBox &fruits) const
{
    int vit = 0;
    Fruit *fruit;

    while ((fruit = fruits.pickFruit()) != nullptr) {
        vit += fruit->getVitamins();
    }
    return (vit);
}

static int mixStatic(FruitBox &fruits)
{
    int vit = 0;
    Fruit *fruit;

    while ((fruit = fruits.pickFruit()) != nullptr) {
        vit += fruit->getVitamins();
    }
    return (vit);
}

Mixer::Mixer()
{
    _plugged = true;
    _mixfunc = &mixStatic;
}
