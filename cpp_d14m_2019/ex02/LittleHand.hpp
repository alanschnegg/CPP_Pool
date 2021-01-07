//
// EPITECH PROJECT, 2020
// cpp_d14m_2019
// File description:
// LittleHand.hpp
//

#ifndef LITTLEHAND_HPP_
# define LITTLEHAND_HPP_

#include "FruitBox.hpp"
#include "Coconut.hpp"

class LittleHand {
    public:
        ~LittleHand() {}

        static void sortFruitBox(FruitBox &unsorted, FruitBox &lemons, FruitBox &bananas, FruitBox &limes);
        static FruitBox * const *organizeCoconut(Coconut const * const *coconuts);
};

#endif // LITTLEHAND_HPP_
