//
// EPITECH PROJECT, 2020
// cpp_d10_2019
// File description:
// Ice.hpp
//

#ifndef ICE_HPP_
# define ICE_HPP_

#include "AMateria.hpp"
#include <iostream>

class Ice : public AMateria {
    public:
        Ice(void) : AMateria("ice") {}
        ~Ice(void) {}

        AMateria *clone() const final { return (new Ice); }
        void use(ICharacter &target) final { std::cout << "* shoots an ice bolt at " << target.getName() << " *\n"; }
};

#endif // ICE_HPP_
