//
// EPITECH PROJECT, 2020
// cpp_d10_2019
// File description:
// PowerFist.hpp
//

#ifndef POWERFIST_HPP_
# define POWERFIST_HPP_

#include "AWeapon.hpp"

class PowerFist : public AWeapon {
    public:
        PowerFist();
        ~PowerFist();

        void attack() const;
};

#endif // POWERFIST_HPP_
