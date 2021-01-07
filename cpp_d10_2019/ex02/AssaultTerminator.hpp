//
// EPITECH PROJECT, 2020
// cpp_d10_2019
// File description:
// AssaultTerminator.hpp
//

#ifndef ASSAULTTERMINATOR_HPP_
# define ASSAULTTERMINATOR_HPP_

#include "ISpaceMarine.hpp"
#include <iostream>

class AssaultTerminator : public ISpaceMarine {
    public:
        AssaultTerminator(void);
        virtual ~AssaultTerminator(void);

        virtual ISpaceMarine* clone() const;
        virtual void battleCry() const;
        virtual void rangedAttack() const;
        virtual void meleeAttack() const;
};

#endif // ASSAULTTERMINATOR_HPP_
