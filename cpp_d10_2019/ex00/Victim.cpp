//
// EPITECH PROJECT, 2020
// cpp_d10_2019
// File description:
// Victim.cpp
//

#include "Victim.hpp"

Victim::Victim(std::string name)
: _name(name)
{
    std::cout << "Some random victim called " << name << " just popped!\n";
}

Victim::~Victim(void)
{
    std::cout << "Victim " << _name << " just died for no apparent reason!\n";
}

std::string Victim::getName(void) const
{
    return (_name);
}

std::ostream &operator<<(std::ostream &s, const Victim &victim)
{
    s << "I'm " << victim.getName() << " and I like otters!\n";
    return (s);
}

void Victim::getPolymorphed(void) const
{
    std::cout << _name << " has been turned into a cute little sheep!\n";
}
