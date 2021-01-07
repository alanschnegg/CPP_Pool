//
// EPITECH PROJECT, 2020
// cpp_d09_2019
// File description:
// Character.hpp
//

#ifndef CHARACTER_HPP_
# define CHARACTER_HPP_

#include <string>
#include <iostream>

class Character {
    public:
        Character(const std::string &name, int level);
        ~Character(void);

        enum AttackRange {
            CLOSE,
            RANGE,
        };

        AttackRange Range;

        const std::string &getName(void) const { return (_name); }
        int getLvl(void) const { return (_lvl); }
        int getPv(void) const { return (_hp); }
        int getPower(void) const { return (_power); }

        int CloseAttack(void);
        int RangeAttack(void);
        void Heal(void);
        void RestorePower(void);

        void TakeDamage(int damage);
    protected:
        std::string _name;
        int _lvl;
        int _hp;
        int _power;

        int _intelligence;
        int _strenght;
        int _stamina;
        int _spirit;
        int _agility;
};

#endif // CHARACTER_HPP_
