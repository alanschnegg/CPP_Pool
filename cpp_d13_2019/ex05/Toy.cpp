//
// EPITECH PROJECT, 2020
// cpp_d13_2019
// File description:
// Toy.cpp
//

#include "Toy.hpp"

Toy::Toy(const Toy &copy)
{
    _type = copy.getType();
    _name = copy.getName();
    _picture.data = copy.getAscii();
}

void Toy::operator=(const Toy &copy)
{
    _type = copy.getType();
    _name = copy.getName();
    _picture.data = copy.getAscii();
}

void Toy::speak(const std::string statement)
{
    std::cout << _name << " \"" << statement << "\"\n";
}

Toy &Toy::operator<<(const std::string ascii)
{
    _picture.data = ascii;
    return (*this);
}

std::ostream &operator<<(std::ostream &s, const Toy &toy)
{
    s << toy.getName() << std::endl << toy.getAscii() << std::endl;
    return (s);
}

bool Toy::speak_es(const std::string statement)
{
    _error.type = Error::SPEAK;
    return (false);
}

bool Toy::setAscii(const std::string &filename)
{
    if (_picture.getPictureFromFile(filename) == true)
        return (true);
    _error.type = Error::PICTURE;
    return (false);
}

std::string Toy::Error::what(void) const
{
    if (type == SPEAK)
        return ("wrong mode");
    else if (type == PICTURE)
        return ("bad new illustration");
    return ("");
}

std::string Toy::Error::where(void) const
{
    if (type == SPEAK)
        return ("speak_es");
    else if (type == PICTURE)
        return ("setAscii");
    return ("");
}
