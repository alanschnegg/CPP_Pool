//
// EPITECH PROJECT, 2020
// cpp_d10_2019
// File description:
// Character.hpp
//

#ifndef CHARACTER_HPP_
# define CHARACTER_HPP_

#include <vector>
#include "AMateria.hpp"

class Character : public ICharacter {
    public:
        Character(std::string name) : ICharacter(), _name(name) {}
        ~Character();

        std::string const & getName() const { return (_name); }

        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
    private:
        std::vector<AMateria*> _materia;
        std::string _name;
};

#endif // CHARACTER_HPP_
