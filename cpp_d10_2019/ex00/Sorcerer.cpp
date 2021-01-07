//
// EPITECH PROJECT, 2020
// cpp_d10_2019
// File description:
// Sorcerer.cpp
//

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title)
: _name(name), _title(title)
{
    std::cout << name << ", " << title << ", is born!\n";
}

Sorcerer::~Sorcerer(void)
{
    std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!\n";
}

std::string Sorcerer::getName(void) const
{
    return (_name);
}

std::string Sorcerer::getTitle(void) const
{
    return (_title);
}

std::ostream &operator<<(std::ostream &s, const Sorcerer &sorcerer)
{
    s << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << ", and I like ponies!\n";
    return (s);
}

void Sorcerer::polymorph(const Victim &victim) const
{
    victim.getPolymorphed();
}
