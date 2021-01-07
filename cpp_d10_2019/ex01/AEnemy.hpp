//
// EPITECH PROJECT, 2020
// cpp_d10_2019
// File description:
// AEnemy.hpp
//

#ifndef AENEMY_HPP_
# define AENEMY_HPP_

#include <iostream>

class AEnemy {
    public:
        AEnemy(int hp, const std::string &type);
        virtual ~AEnemy();

        virtual void takeDamage(int damage);

        std::string getType() const;
        int getHP() const;
    protected:
        int _hp;
        std::string _type;
};

#endif // AENEMY_HPP_
