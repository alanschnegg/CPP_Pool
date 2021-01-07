//
// EPITECH PROJECT, 2020
// cpp_d08_2019
// File description:
// Droid.cpp
//

#include "Droid.hpp"

Droid::Droid(std::string serial)
{
    _id = serial;
    _energy = 50;
    _attack = 25;
    _toughness = 15;
    _status = new std::string ("Standing by");
    std::cout << "Droid '" << serial << "' Activated\n";
}

Droid::Droid(const Droid &droid)
{
    _id = droid.getId();
    _energy = droid.getEnergy();
    _attack = droid.getAttack();
    _toughness = droid.getToughness();
    _status = new std::string (droid.getStatus()->c_str());
    std::cout << "Droid '" << _id << "' Activated, Memory Dumped\n";
}

Droid::~Droid(void)
{
    delete _status;
    std::cout << "Droid '" << _id << "' Destroyed\n";
}

std::string Droid::getId(void) const
{
    return (_id);
}

std::string *Droid::getStatus(void) const
{
    return (_status);
}

size_t Droid::getEnergy(void) const
{
    return (_energy);
}

size_t Droid::getAttack(void) const
{
    return (_attack);
}

size_t Droid::getToughness(void) const
{
    return( _toughness);
}

void Droid::setId(std::string id)
{
    _id = id;
}

void Droid::setStatus(std::string *status)
{
    _status = status;
}

void Droid::setEnergy(size_t energy)
{
    if (energy > 100)
        _energy = 100;
    else
        _energy = energy;
}

std::ostream &operator<<(std::ostream &s, const Droid &droid)
{
    s << "Droid '" << droid.getId() << "', " << *droid.getStatus() << ", " << droid.getEnergy();
    return s;
}

Droid &Droid::operator<<(size_t &size)
{
    size_t diff;

    if (getEnergy() == 100)
        return (*this);
    if (100 - getEnergy() < size)
        diff = 100 - getEnergy();
    else
        diff = size;
    size -= diff;
    setEnergy(getEnergy() + diff);
    return (*this);
}

bool Droid::operator!=(const Droid &droid) const
{
    if (getId().compare(droid.getId()) != 0)
        return (true);
    if (getEnergy() != droid.getEnergy())
        return (true);
    if (getAttack() != droid.getAttack())
        return (true);
    if (getToughness() != droid.getToughness())
        return (true);
    if (_status->compare(*droid.getStatus()))
        return (true);
    return (false);
}

bool Droid::operator==(const Droid &droid) const
{
    return (!operator!=(droid));
}

Droid &Droid::operator=(const Droid &droid)
{
    _id = droid.getId();
    _energy = droid.getEnergy();
    _attack = droid.getAttack();
    _toughness = droid.getToughness();
    _status = new std::string (droid.getStatus()->c_str());
    return (*this);
}
