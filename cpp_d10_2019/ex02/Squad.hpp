//
// EPITECH PROJECT, 2020
// cpp_d10_2019
// File description:
// Squad.hpp
//

#ifndef SQUAD_HPP_
# define SQUAD_HPP_

#include <vector>
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include <iostream>

class Squad : public ISquad {
    public:
        Squad(void);
        virtual ~Squad();

        int getCount() const;
        ISpaceMarine* getUnit(int);
        int push(ISpaceMarine*);
    private:
        std::vector<ISpaceMarine*> _squad;
};

#endif // SQUAD_HPP_
