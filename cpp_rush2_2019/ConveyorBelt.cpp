//
// EPITECH PROJECT, 2020
// cpp_rush2_2019
// File description:
// ConveyorBelt.cpp
//

#include "ConveyorBelt.hpp"

void PapaXmasConveyorBelt::pushIn(Wrap *wrap)
{
    if (_belt.size() == 1) {
        std::cerr << "The conveyor belt is full\n";
        return;
    }
    _belt.push_back(wrap);
    std::cout << "A wrap is put on the conveyor belt\n";
}

Wrap *PapaXmasConveyorBelt::pushOut(void)
{
    Wrap *tmp;

    if (_belt.size() == 0) {
        std::cerr << "The conveyor belt is empty\n";
        return nullptr;
    }
    std::cout << "A wrap is taken from the conveyor belt\n";
    tmp = _belt[0];
    _belt.erase(_belt.begin());
    return (tmp);
}

void PapaXmasConveyorBelt::look(void) const
{
    if (_belt.size() == 0) {
        std::cout << "The conveyor belt is empty\n";
    }
    std::cout << "Their is a wrap on the belt\n";
}
