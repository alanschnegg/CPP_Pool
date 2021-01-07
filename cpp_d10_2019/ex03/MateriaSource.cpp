//
// EPITECH PROJECT, 2020
// cpp_d10_2019
// File description:
// MateriaSource.cpp
//

#include "MateriaSource.hpp"

MateriaSource::~MateriaSource(void)
{
    while (_learned.size() != 0) {
        _learned[0]->~AMateria();
        _learned.erase(_learned.begin());
    }
}

AMateria *MateriaSource::createMateria(std::string const & type)
{
    for (size_t i = 0; i < _learned.size(); i++) {
        if (type.compare(_learned[i]->getType()) == 0)
            return (_learned[i]->clone());
    }
    return (nullptr);
}

void MateriaSource::learnMateria(AMateria *materia)
{
    if (_learned.size() < 4)
        _learned.push_back(materia);
}
