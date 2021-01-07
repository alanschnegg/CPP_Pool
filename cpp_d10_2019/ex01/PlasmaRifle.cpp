//
// EPITECH PROJECT, 2020
// cpp_d10_2019
// File description:
// PlasmaRifle.cpp
//

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void)
: AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::~PlasmaRifle()
{
}

void PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
