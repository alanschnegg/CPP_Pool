//
// EPITECH PROJECT, 2020
// cpp_d09_2019
// File description:
// Paladin.hpp
//

#ifndef PALADIN_HPP_
# define PALADIN_HPP_

#include "Warrior.hpp"
#include "Priest.hpp"
#include "Character.hpp"
#include "Mage.hpp"

class Paladin : virtual public Warrior, virtual public Priest {
    public:
        Paladin(const std::string &name, int level);
        ~Paladin();

        int CloseAttack(void);
        int RangeAttack(void);
        void RestorePower(void);
        void Heal(void);
        int Intercept(void);
    private:
};

#endif // PALADIN_HPP_
