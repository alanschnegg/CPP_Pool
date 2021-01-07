//
// EPITECH PROJECT, 2020
// cpp_rush2_2019
// File description:
// ConveyorBelt.hpp
//

#ifndef CONVEYORBELT_HPP_
# define CONVEYORBELT_HPP_

#include "Object.hpp"
#include "Wrap.hpp"
#include <vector>
#include <iostream>

class IConveyorBelt {
    public:
        virtual void pushIn(Wrap*) = 0;
        virtual Wrap *pushOut(void) = 0;
        virtual void look(void) const = 0;
};

class PapaXmasConveyorBelt : public IConveyorBelt {
    public:
        PapaXmasConveyorBelt(void)  {}
        ~PapaXmasConveyorBelt(void) {}

        void pushIn(Wrap*) final;
        Wrap *pushOut(void) final;
        void look(void) const final;
    private:
        std::vector<Wrap*> _belt;
};

#endif
