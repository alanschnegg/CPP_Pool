//
// EPITECH PROJECT, 2020
// cpp_d10_2019
// File description:
// Cure.hpp
//

#ifndef CURE_HPP_
# define CURE_HPP_

#include "AMateria.hpp"
#include <iostream>

class Cure : public AMateria {
    public:
        Cure(void) : AMateria("cure") {}
        ~Cure(void) {}

        AMateria *clone() const final { return (new Cure); }
        void use(ICharacter &target) { std::cout << "* heals " << target.getName() << "'s wounds *\n"; }
};

#endif // CURE_HPP_
