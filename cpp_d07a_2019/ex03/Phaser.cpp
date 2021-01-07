//
// EPITECH PROJECT, 2020
// cpp_d07a_2019
// File description:
// Phaser.cpp
//

#include "Phaser.hpp"

Phaser::Phaser(int maxAmmo, AmmoType type)
{
    _maxAmmo = maxAmmo;
    for (int i = 0; i < 3; i++) {
        _currAmmo[i] = maxAmmo;
    }
    if (type != ROCKET && type != PLASMA)
        _type = REGULAR;
    else
        _type = type;
}

Phaser::~Phaser()
{
}

void Phaser::fire()
{
    if (_currAmmo[_type] == this->Empty) {
        std::cout << "Clip empty, please reload\n";
        return;
    }
    if (_type == REGULAR)
        std::cout << Sounds::Regular << "\n";
    else if (_type == ROCKET)
        std::cout << Sounds::Rocket << "\n";
    else if (_type == PLASMA)
        std::cout << Sounds::Plasma << "\n";
    _currAmmo[_type]--;
}

void Phaser::ejectClip()
{
    _currAmmo[_type] = 0;
}

void Phaser::changeType(AmmoType newType)
{
    if (newType != ROCKET && newType != PLASMA && newType != REGULAR)
        return;
    _type = newType;
    std::cout << "Switching ammo to type: ";
    if (_type == REGULAR)
        std::cout << "regular\n";
    else if (_type == ROCKET)
        std::cout << "rocket\n";
    else if (_type == PLASMA)
        std::cout << "plasma\n";
}

void Phaser::reload()
{
    std::cout << "Reloading...\n";
    _currAmmo[_type] = _maxAmmo;
}

void Phaser::addAmmo(AmmoType type)
{
    if (type != ROCKET && type != PLASMA && type != REGULAR)
        return;
    if (_currAmmo[type] == _maxAmmo) {
        std::cout << "Clip full\n";
        return;
    }
    _currAmmo[type]++;
}

int Phaser::getCurrentAmmos() const
{
    return (_currAmmo[_type]);
}
