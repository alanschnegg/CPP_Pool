//
// EPITECH PROJECT, 2020
// cpp_d09_2019
// File description:
// Warrior.hpp
//

#ifndef WARRIOR_HPP_
# define WARRIOR_HPP_

#include "Character.hpp"

class Warrior : virtual public Character {
    public:
        Warrior(const std::string &name, int level);
        ~Warrior();

        int CloseAttack(void);
        int RangeAttack(void);
    protected:
        std::string _weapon;
};

#endif // WARRIOR_HPP_
