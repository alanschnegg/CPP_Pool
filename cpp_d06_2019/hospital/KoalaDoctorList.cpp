//
// EPITECH PROJECT, 2020
// cpp_d06_2019
// File description:
// KoalaDoctorList.cpp
//

#include "KoalaDoctorList.hpp"

KoalaDoctorList::KoalaDoctorList(KoalaDoctor *doctor)
{
    this->doctor = doctor;
    if (doctor)
        this->next = nullptr;
}

KoalaDoctorList::~KoalaDoctorList(void)
{
}

bool KoalaDoctorList::isEnd(void)
{
    if (next == nullptr)
        return (true);
    return (false);
}

void KoalaDoctorList::append(KoalaDoctorList *doctor)
{
    KoalaDoctorList *tmp = this;

    if (tmp != nullptr) {
        while (tmp->next != nullptr)
            tmp = tmp->next;
        tmp->next = doctor;
    } else
        tmp = doctor;
}

KoalaDoctor *KoalaDoctorList::getFromName(std::string name)
{
    KoalaDoctorList *tmp = this;

    if (tmp == nullptr)
        return (nullptr);
    while (tmp != nullptr) {
        if (tmp->doctor->getName().compare(name) == 0)
            return (tmp->doctor);
        tmp = tmp->next;
    }
    return (nullptr);
}

KoalaDoctorList *KoalaDoctorList::remove(KoalaDoctorList *doctor)
{
    KoalaDoctorList *tmp = this;

    if (tmp == nullptr)
        return (nullptr);
    while (tmp->next != nullptr) {
        if (tmp->next == doctor) {
            tmp->next = tmp->next->next;
            return (this);
        }
        tmp = tmp->next;
    }
    return (this);
}

KoalaDoctorList *KoalaDoctorList::removeFromName(std::string name)
{
    KoalaDoctorList *tmp = this;

    if (tmp == nullptr)
        return (nullptr);
    while (tmp->next != nullptr) {
        if (tmp->next->doctor->getName().compare(name) == 0) {
            tmp->next = tmp->next->next;
            return (this);
        }
        tmp = tmp->next;
    }
    return (this);
}

KoalaDoctor *KoalaDoctorList::getContent(void)
{
    return (this->doctor);
}

KoalaDoctor *KoalaDoctorList::getNext(void)
{
    if (this->next == nullptr)
        return (nullptr);
    return (this->next->doctor);
}

void KoalaDoctorList::dump(void)
{
    KoalaDoctorList *tmp = this;

    if (tmp == nullptr)
        return;
    std::cout << "Doctors: " << tmp->doctor->getName();
    while (tmp->next != nullptr) {
        std::cout << ", " << tmp->next->doctor->getName();
        tmp = tmp->next;
    }
    std::cout << ".\n";
}
