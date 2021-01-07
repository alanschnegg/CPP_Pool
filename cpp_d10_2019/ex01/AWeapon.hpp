//
// EPITECH PROJECT, 2020
// cpp_d10_2019
// File description:
// AWeapon.hpp
//

#ifndef AWEAPON_HPP_
# define AWEAPON_HPP_

#include <iostream>

class AWeapon{
    public:
        AWeapon(const std::string &name, int apcost, int damage);
        virtual ~AWeapon();

        std::string getName() const;
        int getAPCost() const;
        int getDamage() const;

        virtual void attack() const;
    protected:
        std::string _name;
        int _damage;
        int _apcost;
};

#endif // AWEAPON_HPP_
