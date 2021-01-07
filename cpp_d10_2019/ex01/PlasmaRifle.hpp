//
// EPITECH PROJECT, 2020
// cpp_d10_2019
// File description:
// PlasmaRifle.hpp
//

#ifndef PLASMARIFLE_HPP_
# define PLASMARIFLE_HPP_

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {
    public:
        PlasmaRifle();
        ~PlasmaRifle();

        void attack() const;
};

#endif // PLASMARIFLE_HPP_
