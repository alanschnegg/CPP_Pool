//
// EPITECH PROJECT, 2020
// cpp_d07a_2019
// File description:
// Skat.cpp
//

#include "Skat.hpp"

Skat::Skat(const std::string &name, int stimPaks)
{
    this->_name = name;
    this->_stimPaks = stimPaks;
}

Skat::~Skat(void)
{
}

int &Skat::stimPaks(int stimPaks)
{
    _stimPaks = stimPaks;
    return (_stimPaks);
}

int &Skat::stimPaks()
{
    return (_stimPaks);
}

const std::string &Skat::name()
{
    return (_name);
}

void Skat::shareStimPaks(int number, int &stock)
{
    if (number > stimPaks())
        std::cout << "Don't be greedy\n";
    else {
        _stimPaks -= number;
        stock += number;
        std::cout << "Keep the change.\n";
    }
}

void Skat::addStimPaks(unsigned int number)
{
    if (number == 0)
        std::cout << "Hey boya, did you forget something?\n";
    stimPaks(stimPaks() + number);
}

void Skat::useStimPaks(void)
{
    if (stimPaks() <= 0)
        std::cout << "Mediiiiiic\n";
    else {
        std::cout << "Time to kick some ass and chew bubble gum.\n";
        _stimPaks -= 1;
    }
}

void Skat::status(void)
{
    std::cout << "Soldier " << _name << " reporting " << stimPaks() << " stimpaks remaining sir!\n";
}
