//
// EPITECH PROJECT, 2020
// cpp_d09_2019
// File description:
// Mage.hpp
//

#ifndef MAGE_HPP_
# define MAGE_HPP_

#include "Character.hpp"

class Mage : virtual public Character {
    public:
        Mage(const std::string &name, int level);
        ~Mage();

        int CloseAttack(void);
        int RangeAttack(void);
        void RestorePower(void);
    private:
};

#endif // MAGE_HPP_
