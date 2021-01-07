//
// EPITECH PROJECT, 2020
// cpp_d06_2019
// File description:
// SickKoalaList.cpp
//

#include "SickKoalaList.hpp"

SickKoalaList::SickKoalaList(SickKoala *patient)
{
    this->patient = patient;
    if (patient)
        this->next = nullptr;
}

SickKoalaList::~SickKoalaList(void)
{
}

bool SickKoalaList::isEnd(void)
{
    if (next == nullptr)
        return (true);
    return (false);
}

void SickKoalaList::append(SickKoalaList *patient)
{
    SickKoalaList *tmp = this;

    if (tmp != nullptr) {
        while (tmp->next != nullptr)
            tmp = tmp->next;
        tmp->next = patient;
    } else
        tmp = patient;
}

SickKoala *SickKoalaList::getFromName(std::string name)
{
    SickKoalaList *tmp = this;

    if (tmp == nullptr)
        return (nullptr);
    while (tmp != nullptr) {
        if (tmp->patient->getName().compare(name) == 0)
            return (tmp->patient);
        tmp = tmp->next;
    }
    return (nullptr);
}

SickKoalaList *SickKoalaList::remove(SickKoalaList *patient)
{
    SickKoalaList *tmp = this;

    if (tmp == nullptr)
        return (nullptr);
    while (tmp->next != nullptr) {
        if (tmp->next == patient) {
            tmp->next = tmp->next->next;
            return (this);
        }
        tmp = tmp->next;
    }
    return (this);
}

SickKoalaList *SickKoalaList::removeFromName(std::string name)
{
    SickKoalaList *tmp = this;

    if (tmp == nullptr)
        return (nullptr);
    while (tmp->next != nullptr) {
        if (tmp->next->patient->getName().compare(name) == 0) {
            tmp->next = tmp->next->next;
            return (this);
        }
        tmp = tmp->next;
    }
    return (this);
}

SickKoala *SickKoalaList::getContent(void)
{
    return (this->patient);
}

SickKoala *SickKoalaList::getNext(void)
{
    if (this->next == nullptr)
        return (nullptr);
    return (this->next->patient);
}

void SickKoalaList::dump(void)
{
    SickKoalaList *tmp = this;

    if (tmp == nullptr)
        return;
    std::cout << "Patients: " << tmp->patient->getName();
    while (tmp->next != nullptr) {
        std::cout << ", " << tmp->next->patient->getName();
        tmp = tmp->next;
    }
    std::cout << ".\n";
}
