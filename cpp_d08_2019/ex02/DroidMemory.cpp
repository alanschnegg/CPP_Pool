//
// EPITECH PROJECT, 2020
// cpp_d08_2019
// File description:
// DroidMemory.cpp
//

#include "DroidMemory.hpp"

DroidMemory::DroidMemory(void)
{
    _fingerprint = random();
    _exp = 0;
}

DroidMemory::DroidMemory(const DroidMemory &dmem)
{
    setExp(dmem.getExp());
    setFingerprint(dmem.getFingerprint());
}

DroidMemory::~DroidMemory(void)
{
}

size_t DroidMemory::getFingerprint(void) const
{
    return(_fingerprint);
}

size_t DroidMemory::getExp(void) const
{
    return(_exp);
}

void DroidMemory::setFingerprint(size_t fingerprint)
{
    _fingerprint = fingerprint;
}

void DroidMemory::setExp(size_t exp)
{
    _exp = exp;
}

std::ostream &operator<<(std::ostream &s, const DroidMemory &dmem)
{
    s << "DroidMemory '" << dmem.getFingerprint() << "', " << dmem.getExp();
    return s;
}

DroidMemory &DroidMemory::operator<<(const DroidMemory &dmem)
{
    setExp(getExp() + dmem.getExp());
    setFingerprint(getFingerprint() ^ dmem.getFingerprint());
    return (*this);
}

DroidMemory &DroidMemory::operator>>(DroidMemory &dmem) const
{
    dmem.setExp(dmem.getExp() + getExp());
    dmem.setFingerprint(dmem.getFingerprint() ^ getFingerprint());
    return (dmem);
}

DroidMemory &DroidMemory::operator+=(const DroidMemory &dmem)
{
    operator<<(dmem);
    return (*this);
}

DroidMemory &DroidMemory::operator+=(size_t exp)
{
    setExp(getExp() + exp);
    setFingerprint(getFingerprint() ^ exp);
    return (*this);
}

DroidMemory &DroidMemory::operator+(const DroidMemory &dmem) const
{
    DroidMemory *tmp = new DroidMemory();

    tmp->setExp(getExp() + dmem.getExp());
    tmp->setFingerprint(getFingerprint() ^ dmem.getFingerprint());
    return (*tmp);
}

DroidMemory &DroidMemory::operator+(size_t exp) const
{
    DroidMemory *tmp = new DroidMemory();

    tmp->setExp(getExp() + exp);
    tmp->setFingerprint(getFingerprint() ^ exp);
    return (*tmp);
}

DroidMemory &DroidMemory::operator=(const DroidMemory &dmem)
{
    setExp(dmem.getExp());
    setFingerprint(dmem.getFingerprint());
    return (*this);
}

bool DroidMemory::operator==(const DroidMemory &dmem) const
{
    if(getExp() != dmem.getExp())
        return (false);
    if (getFingerprint() != dmem.getFingerprint())
        return (false);
    return (true);
}

bool DroidMemory::operator!=(const DroidMemory &dmem) const
{
    return (!operator==(dmem));
}

bool DroidMemory::operator<(const DroidMemory &dmem) const
{
    return (getExp() < dmem.getExp());
}

bool DroidMemory::operator>(const DroidMemory &dmem) const
{
    return (getExp() > dmem.getExp());
}

bool DroidMemory::operator<=(const DroidMemory &dmem) const
{
    return (getExp() <= dmem.getExp());
}

bool DroidMemory::operator>=(const DroidMemory &dmem) const
{
    return (getExp() >= dmem.getExp());
}

bool DroidMemory::operator<(size_t exp) const
{
    return (getExp() < exp);
}

bool DroidMemory::operator>(size_t exp) const
{
    return (getExp() > exp);
}

bool DroidMemory::operator<=(size_t exp) const
{
    return (getExp() <= exp);
}

bool DroidMemory::operator>=(size_t exp) const
{
    return (getExp() >= exp);
}
