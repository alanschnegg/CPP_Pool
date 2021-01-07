//
// EPITECH PROJECT, 2020
// cpp_rush2_2019
// File description:
// Table.hpp
//

#ifndef TABLE_HPP_
# define TABLE_HPP_

#include "Object.hpp"
#include <vector>
#include <iostream>

class ITable {
    public:
        virtual std::string *look(void) const = 0;
        virtual Object *take(int i) = 0;
        virtual bool put(Object *obj) = 0;
        virtual void destroyTable(void) = 0;
        virtual void repairTable(void) = 0;
};

class PapaXmasTable : public ITable {
    public:
        PapaXmasTable(void) : _isBroken(false) {}
        ~PapaXmasTable(void) {}

        std::string *look(void) const final;
        Object *take(int i) final;
        bool put(Object *obj) final;
        void destroyTable(void) final;
        void repairTable(void) final;
    private:
        std::vector<Object*> _table;
        bool _isBroken;
};

#endif // TABLE_HPP_
