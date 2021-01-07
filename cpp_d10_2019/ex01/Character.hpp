//
// EPITECH PROJECT, 2020
// cpp_d10_2019
// File description:
// Character.hpp
//

#ifndef CHARACTER_HPP_
# define CHARACTER_HPP_

#include <iostream>
#include "AEnemy.hpp"
#include "AWeapon.hpp"

class Character {
    public:
        Character(const std::string &name);
        ~Character();

        void recoverAP();
        void equip(AWeapon *weapon);
        void attack(AEnemy *enemy);

        std::string getName() const;
        int getAP() const;
        AWeapon *getWeapon() const;
    private:
        std::string _name;
        int _ap;
        AWeapon *_weapon;
};

std::ostream &operator<<(std::ostream &s, const Character &character);

#endif // CHARACTER_HPP_
