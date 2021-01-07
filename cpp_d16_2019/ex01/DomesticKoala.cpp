//
// EPITECH PROJECT, 2020
// cpp_d16_2019
// File description:
// DomesticKoala.cpp
//

#include "DomesticKoala.hpp"

DomesticKoala::DomesticKoala(const DomesticKoala &cpy)
{
    _koala = cpy.getKoala();
    _actions = cpy._actions;
    _key = cpy.getKeys();
}

DomesticKoala &DomesticKoala::operator=(const DomesticKoala &cpy)
{
    _koala = cpy.getKoala();
    _actions = cpy._actions;
    _key = cpy.getKeys();
    return (*this);
}

void DomesticKoala::unlearnAction(unsigned char command)
{
    size_t i = 0;

    for (; i < _key.size(); i++) {
        if (_key[i] == command) {
            _key.erase(_key.begin() + i);
            _actions.erase(_actions.begin() + i);
        }
    }
}

void DomesticKoala::learnAction(unsigned char command, DomesticKoala::methodPointer_t action)
{
    unlearnAction(command);
    _key.push_back(command);
    _actions.push_back(action);
}

void DomesticKoala::doAction(unsigned char command, const std::string &param)
{
    size_t i = 0;
    methodPointer_t tmp = nullptr;

    for (; i < _key.size(); i++) {
        if (_key[i] == command) {
            tmp = _actions[i];
        }
    }
    if (tmp != nullptr) {
        (_koala.*tmp)(param);
    }
}

void DomesticKoala::setKoalaAction(KoalaAction &koala)
{
    _koala = koala;
}
