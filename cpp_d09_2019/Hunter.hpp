//
// EPITECH PROJECT, 2020
// cpp_d09_2019
// File description:
// Hunter.hpp
//

#ifndef HUNTER_HPP_
# define HUNTER_HPP_

#include "Warrior.hpp"
#include "Character.hpp"

class Hunter : public Warrior {
    public:
        Hunter(const std::string &name, int level);
        ~Hunter();

        int CloseAttack(void);
        int RangeAttack(void);
        void RestorePower(void);
    private:
        std::string _weapon;
};

#endif // HUNTER_HPP_
