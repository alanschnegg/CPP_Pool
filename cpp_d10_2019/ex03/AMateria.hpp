//
// EPITECH PROJECT, 2020
// cpp_d10_2019
// File description:
// AMateria.hpp
//

#ifndef AMATERIA_HPP_
# define AMATERIA_HPP_

#include "ICharacter.hpp"

class AMateria {
    public:
        AMateria(const std:: string &type) : _type(type) { xp_ = 0; }
        virtual ~AMateria () {}

        const std::string &getType () const { return (_type); }
        unsigned int getXP () const { return (xp_); }

        virtual AMateria *clone() const = 0;
        virtual void use(ICharacter &target) { xp_ += 10; }
    private:
        std::string _type;
        unsigned int xp_;
};

#endif // AMATERIA_HPP_
