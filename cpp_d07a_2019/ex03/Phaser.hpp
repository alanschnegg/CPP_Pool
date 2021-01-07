//
// EPITECH PROJECT, 2020
// cpp_d07a_2019
// File description:
// Phaser.hpp
//

#ifndef PHASER_HPP_
# define PHASER_HPP_

#include "Sounds.hpp"
#include <iostream>

class Phaser
{
    public:
        enum AmmoType
        {
            REGULAR,
            PLASMA,
            ROCKET,
         };

        Phaser(int maxAmmo = 20, AmmoType type = REGULAR);
        ~Phaser();

        void fire();
        void ejectClip();
        void changeType(AmmoType newType);
        void reload();
        void addAmmo(AmmoType type);

        int getCurrentAmmos() const;
    private:
        static const int Empty = 0;
        int _maxAmmo;
        int _currAmmo[3];
        AmmoType _type;
};

#endif // PHASER_HPP_
