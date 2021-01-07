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
    BattleData = new DroidMemory();
    _status = new std::string ("Standing by");
    std::cout << "Droid '" << serial << "' Activated\n";
}

Droid::Droid(const Droid &droid)
{
    _id = droid.getId();
    _energy = 50;
    _attack = 25;
    _toughness = 15;
    _status = droid.getStatus();
    BattleData = droid.getBattleData();
    std::cout << "Droid '" << _id << "' Activated, Memory Dumped\n";
}

Droid::~Droid(void)
{
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

DroidMemory *Droid::getBattleData(void) const
{
    return (BattleData);
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
    _energy = energy;
}

void Droid::setBattleData(DroidMemory *dmem)
{
    BattleData = dmem;
}

std::ostream &operator<<(std::ostream &s, const Droid &droid)
{
    s << "Droid '" << droid.getId() << "', " << *droid.getStatus() << ", " << droid.getEnergy();
    return s;
}

void Droid::operator<<(size_t &size)
{
    size_t diff;

    if (getEnergy() == 100)
        return;
    if (100 - getEnergy() < size)
        diff = 100 - getEnergy();
    else
        diff = size;
    size -= diff;
    setEnergy(getEnergy() + diff);
}

bool Droid::operator!=(const Droid &droid) const
{
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
    _status = droid.getStatus();
    return (*this);
}

bool Droid::operator()(const std::string *task, size_t exp)
{
    std::string *tmp = new std::string(task->c_str());

    if (getEnergy() <= 10) {
        _status = new std::string("Battery Low");
        setEnergy(0);
        return (false);
    }
    if (BattleData->getExp() < exp) {
        tmp->append(" - Failed!");
        _status = tmp;
        _energy -= 10;
        BattleData->setExp(BattleData->getExp() + (exp));
        return (false);
    }
    tmp->append(" - Completed!");
    _status = tmp;
    _energy -= 10;
    BattleData->setExp(BattleData->getExp() + (exp/2));
    return (true);
}
