//
// EPITECH PROJECT, 2020
// cpp_d10_2019
// File description:
// TacticalMarine.hpp
//

#ifndef TACTICALMARINE_HPP_
# define TACTICALMARINE_HPP_

#include "ISpaceMarine.hpp"
#include <iostream>

class TacticalMarine : public ISpaceMarine {
    public:
        TacticalMarine(void);
        virtual ~TacticalMarine(void);

        virtual ISpaceMarine* clone() const;
        virtual void battleCry() const;
        virtual void rangedAttack() const;
        virtual void meleeAttack() const;
};

#endif // TACTICALMARINE_HPP_
