//
// EPITECH PROJECT, 2020
// cpp_rush2_2019
// File description:
// Wrap.hpp
//

#ifndef WRAP_HPP_
# define WRAP_HPP_

#include <iostream>
#include "Object.hpp"

class Wrap {
    public:
        Wrap(void) : _wrapped(nullptr), _isOpen(true) {}
        ~Wrap(void) {}

        virtual void wrapMeThat(Object *obj) = 0;
        void openMe(void);
        void closeMe(void);
        Object *getObj(void);
        bool isEmpty(void) const;
    protected:
        Object *_wrapped;
        bool _isOpen;
};

class Box : public Wrap {
    public:
        Box(void) : Wrap() {}
        ~Box(void) {}

        void wrapMeThat(Object *obj) final;
};

class GiftPaper : public Wrap {
    public:
        GiftPaper(void) : Wrap() {}
        ~GiftPaper(void) {}

        void wrapMeThat(Object *obj) final;
};

#endif // WRAP_HPP_
