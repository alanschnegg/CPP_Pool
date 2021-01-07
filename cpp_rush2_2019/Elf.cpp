//
// EPITECH PROJECT, 2020
// cpp_rush2_2019
// File description:
// Elf.cpp
//

#include "Elf.hpp"

void PapaXmasElf::pressIN(void)
{
    if (_wrap == nullptr) {
        std::cerr << "Elf have nothing to put on the Conveyor Belt\n";
        return;
    }
    _belt->pushIn(_wrap);
    _wrap = nullptr;
}

void PapaXmasElf::pressOUT(void) const
{
    std::cout << "Elf press OUT\n";
    _belt->pushOut();
}

void PapaXmasElf::put(void)
{
    if (_obj == nullptr) {
        std::cerr << "Elf have nothing to push on the table\n";
        return;
    }
    std::cout << "Elf try to put " << _obj->getTitle() << " on the table\n";
    if (_table->put(_obj) == true)
        _obj = nullptr;
}

void PapaXmasElf::takeTable(int i)
{
    if (_obj != nullptr) {
        std::cerr << "Elf have already an object, he can't take one more\n";
        return;
    }
    std::cout << "Elf try to take the " << i << "e object on the table\n";
    _obj = _table->take(i);
}

std::string *PapaXmasElf::lookTable(void) const
{
    std::cout << "Elf look at the table\n";
    return (_table->look());
}

void PapaXmasElf::wrapObj(void)
{
    if (_wrap == nullptr) {
        std::cerr << "Elf don't have Wrap to prepare Object\n";
        return;
    } else if (_wrap->isEmpty() == false) {
        std::cerr << "Elf have a Wrap but it is already full\n";
        return;
    } else if (_obj == nullptr) {
        std::cerr << "Elf don't have Object to wrap\n";
        return;
    }
    std::cout << "Elf have wrap Object\n";
    std::cout << "* whistles while working *\n";
    _wrap->wrapMeThat(_obj);
    _obj = nullptr;
}

void PapaXmasElf::openBox()
{
    if (_wrap == nullptr) {
        std::cerr << "Elf don't have Wrap to open\n";
        return;
    }
    std::cout << "Elf try to open the box\n";
    _wrap->openMe();
}

void PapaXmasElf::closeBox()
{
    if (_wrap == nullptr) {
        std::cerr << "Elf don't have Wrap to close\n";
        return;
    }
    std::cout << "Elf try to close the box\n";
    _wrap->closeMe();
}

void PapaXmasElf::takeInBox(void)
{
    if (_wrap == nullptr) {
        std::cerr << "Elf can't take Object if he don't have wrap\n";
        return;
    } else if (_obj != nullptr) {
        std::cerr << "Elf have already an object, he can't take one more from the box\n";
        return;
    }
    std::cout << "Elf try to take the object from the box\n";
    _obj = _wrap->getObj();
    if (_obj != nullptr)
        std::cout << "An object have been taken from wrap\n";
}

void PapaXmasElf::takeWrap(Wrap *wrap)
{
    if (_wrap != nullptr) {
        std::cerr << "Elf already have wrap\n";
        return;
    }
    std::cout << "Elf take a new wrap\n";
    _wrap = wrap;
}

void PapaXmasElf::take(Object *obj)
{
    if (_obj != nullptr) {
        std::cerr << "Elf already have object\n";
        return;
    }
    std::cout << "Elf take a new object\n";
    _obj = obj;
}

void PapaXmasElf::repairTable(void)
{
    std::cout << "Elf try to repair table\n";
    _table->repairTable();
}
