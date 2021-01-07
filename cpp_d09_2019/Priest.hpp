//
// EPITECH PROJECT, 2020
// cpp_d09_2019
// File description:
// Priest.hpp
//

#ifndef PRIEST_HPP_
# define PRIEST_HPP_

#include "Character.hpp"
#include "Mage.hpp"

class Priest : virtual public Mage {
    public:
        Priest(const std::string &name, int level);
        ~Priest();

        int CloseAttack(void);
        int RangeAttack(void);
        void RestorePower(void);
        void Heal(void);
    private:
};

#endif // PRIEST_HPP_
