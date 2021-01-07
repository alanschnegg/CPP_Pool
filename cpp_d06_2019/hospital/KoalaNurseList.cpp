//
// EPITECH PROJECT, 2020
// cpp_d06_2019
// File description:
// KoalaNurseList.cpp
//

#include "KoalaNurseList.hpp"

KoalaNurseList::KoalaNurseList(KoalaNurse *nurse)
{
    this->nurse = nurse;
    if (nurse)
        this->next = nullptr;
}

KoalaNurseList::~KoalaNurseList(void)
{
}

bool KoalaNurseList::isEnd(void)
{
    if (next == nullptr)
        return (true);
    return (false);
}

void KoalaNurseList::append(KoalaNurseList *nurse)
{
    KoalaNurseList *tmp = this;

    if (tmp != nullptr) {
        while (tmp->next != nullptr)
            tmp = tmp->next;
        tmp->next = nurse;
    } else
        tmp = nurse;
}

KoalaNurse *KoalaNurseList::getFromID(int id)
{
    KoalaNurseList *tmp = this;

    if (tmp == nullptr)
        return (nullptr);
    while (tmp != nullptr) {
        if (tmp->nurse->getID() == id)
            return (tmp->nurse);
        tmp = tmp->next;
    }
    return (nullptr);
}

KoalaNurseList *KoalaNurseList::remove(KoalaNurseList *nurse)
{
    KoalaNurseList *tmp = this;

    if (tmp == nullptr)
        return (nullptr);
    while (tmp->next != nullptr) {
        if (tmp->next == nurse) {
            tmp->next = tmp->next->next;
            return (this);
        }
        tmp = tmp->next;
    }
    return (this);
}

KoalaNurseList *KoalaNurseList::removeFromID(int id)
{
    KoalaNurseList *tmp = this;

    if (tmp == nullptr)
        return (nullptr);
    while (tmp->next != nullptr) {
        if (tmp->next->nurse->getID() == id) {
            tmp->next = tmp->next->next;
            return (this);
        }
        tmp = tmp->next;
    }
    return (this);
}

KoalaNurse *KoalaNurseList::getContent(void)
{
    return (this->nurse);
}

KoalaNurse *KoalaNurseList::getNext(void)
{
    if (this->next == nullptr)
        return (nullptr);
    return (this->next->nurse);
}

void KoalaNurseList::dump(void)
{
    KoalaNurseList *tmp = this;

    if (tmp == nullptr)
        return;
    std::cout << "Nurses: " << tmp->nurse->getID();
    while (tmp->next != nullptr) {
        std::cout << ", " << tmp->next->nurse->getID();
        tmp = tmp->next;
    }
    std::cout << ".\n";
}
