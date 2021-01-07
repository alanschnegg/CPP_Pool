//
// EPITECH PROJECT, 2020
// cpp_rush2_2019
// File description:
// Elf.hpp
//

#ifndef ELF_HPP_
# define ELF_HPP_

#include "Wrap.hpp"
#include "Object.hpp"
#include "Toy.hpp"
#include "Table.hpp"
#include "ConveyorBelt.hpp"

class IElf {
    public:
        virtual void pressIN(void) = 0;
        virtual void pressOUT(void) const = 0;
        virtual void put(void) = 0;
        virtual void takeTable(int) = 0;
        virtual void take(Object *) = 0;
        virtual std::string *lookTable(void) const = 0;
        virtual void wrapObj()  = 0;
        virtual void openBox()  = 0;
        virtual void closeBox() = 0;
        virtual void takeInBox(void) = 0;
        virtual void takeWrap(Wrap *wrap) = 0;
        virtual void repairTable(void) = 0;
};

class PapaXmasElf : public IElf {
    public:
        PapaXmasElf(PapaXmasTable *table, PapaXmasConveyorBelt *belt) : _table(table), _belt(belt), _wrap(nullptr), _obj(nullptr) {}
        ~PapaXmasElf() {}

        void pressIN(void) final;
        void pressOUT(void) const final;
        void put(void) final;
        void takeTable(int) final;
        void take(Object *) final;
        std::string *lookTable(void) const final;
        void wrapObj(void) final;
        void openBox(void) final;
        void closeBox(void) final;
        void takeInBox(void) final;
        void takeWrap(Wrap *wrap) final;
        void repairTable(void) final;
    private:
        PapaXmasTable *_table;
        PapaXmasConveyorBelt *_belt;
        Wrap *_wrap;
        Object *_obj;
};

#endif // ELF_HPP_
