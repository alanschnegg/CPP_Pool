//
// EPITECH PROJECT, 2020
// cpp_d10_2019
// File description:
// MateriaSource.hpp
//

#ifndef MATERIASOURCE_HPP_
# define MATERIASOURCE_HPP_

#include <vector>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
    public:
        MateriaSource() : IMateriaSource() {}
        ~MateriaSource();

        AMateria *createMateria(std::string const & type) final;
        void learnMateria(AMateria *) final;
    private:
        std::vector<AMateria*> _learned;
};

#endif // MATERIASOURCE_HPP_
