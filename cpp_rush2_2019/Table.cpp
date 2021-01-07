//
// EPITECH PROJECT, 2020
// cpp_rush2_2019
// File description:
// Table.cpp
//

#include "Table.hpp"

std::string *PapaXmasTable::look(void) const
{
    size_t i = 0;

    if (_isBroken == true) {
        std::cerr << "The table is broken\n";
        return (nullptr);
    }
    std::string *tmp = new std::string[_table.size() + 1];

    for (; i < _table.size(); i++)
        tmp[i] = _table[i]->getTitle();
    tmp[i] = "* end *";
    return (tmp);
}

Object *PapaXmasTable::take(int i)
{
    if (_isBroken == true) {
        std::cerr << "The table is broken\n";
        return (nullptr);
    }
    Object *tmp;
    size_t y = i;

    if (y < _table.size()) {
        std::cout << _table[y]->getTitle() << " taken from the table\n";
        tmp = _table[y];
        _table.erase(_table.begin() + y);
        return (tmp);
    }
    std::cerr << "Table don't have a " << y << "e object\n";
    return (nullptr);
}

void PapaXmasTable::destroyTable(void)
{
    while (_table.size() != 0) {
        // delete _table[0];
        _table.erase(_table.begin());
    }
    std::cout << "* SBAM *\n";
}

bool PapaXmasTable::put(Object *obj)
{
    if (_isBroken == true) {
        std::cerr << "The table is broken\n";
        return (false);
    }
    if (_table.size() < 10) {
        _table.push_back(obj);
        std::cout << obj->getTitle() << " is put on the table\n";
        return (true);
    } else {
        _isBroken = true;
        destroyTable();
        std::cerr << "Table collapses due to overload\n";
        return (true);
    }
}

void PapaXmasTable::repairTable(void)
{
    if (_isBroken == false) {
        std::cout << "The table don't need to be repaired\n";
        return;
    }
    _isBroken = false;
    std::cout << "The table is repaired\n";
}
